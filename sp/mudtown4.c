void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_30 = 1;
	iLocal_33 = func_1(-506285289, -915411861, 1, 0, 0);
	fLocal_457 = 0.5f;
	vLocal_535 = { 509.0153f, 363.5236f, 106.3184f };
	iLocal_824 = -1;
	sLocal_2995 = "mech_skin@BUCK_BUTCHER";
	sLocal_2996 = "PBL_BASE";
	sLocal_2997 = "PBL_DUMP";
	sLocal_2998 = "PBL_DROP_IN";
	if (has_force_cleanup_occurred(4642))
	{
		func_2(&uLocal_2999, 1073741824);
		func_3(&uLocal_2999, 1);
		terminate_this_thread();
	}
	while (!func_4(64))
	{
		wait(0);
	}
	func_5(&uScriptParam_0, &uLocal_2999);
	func_6(&uLocal_2999);
	while (!func_7(&uLocal_2999, -2147483648))
	{
		func_8(&uLocal_2999);
		wait(0);
	}
	while (!func_3(&uLocal_2999, 0))
	{
		wait(0);
	}
	terminate_this_thread();
}

int func_1(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_9(iParam0, -5284486))
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
		if (func_10(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_11(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_12(iVar62, iVar61);
					if (func_13(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1(iVar63, -915411861, 1, 0, 0));
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
	if (!func_10(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

void func_2(char[4] cParam0, int iParam1)
{
	cParam0->f_5309 = (cParam0->f_5309 || iParam1);
}

bool func_3(char[4] cParam0, bool bParam1)
{
	if (func_14(cParam0, 4096))
	{
		return true;
	}
	if (get_cause_of_most_recent_force_cleanup() == 4096)
	{
		func_15(cParam0);
		_display_hud_component(-1679307491);
		_display_hud_component(1331687942);
		if (func_16(Global_43801))
		{
			func_17(&Global_43801, 1, 1);
		}
		_uilog_clear_cached_objective();
		_0x1096603b519c905f("");
		func_19(func_18(cParam0->f_607), 0, 2);
		func_20();
		func_21(1);
		func_22(1, 0);
		func_23(cParam0, 1);
		func_24(0);
		_uilog_mark_all_entries_availability(0, "");
		Global_36605 = 0;
		func_25(3);
		if (!is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
		{
			_set_scenario_type_enabled_hash(-2012097661, true);
		}
		terminate_this_thread();
	}
	if (!bParam1)
	{
		if (!func_7(cParam0, 1048576))
		{
			if (func_26() == 0)
			{
				func_27(0);
			}
			else if (func_28(cParam0) != 0)
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					if (_0x1204eb53a5fbc63d())
					{
						return false;
					}
					if (func_28(cParam0) == 1 || func_28(cParam0) == 2)
					{
						if (func_29(&(cParam0->f_8269)) && func_30(&(cParam0->f_8269)))
						{
							func_31(0, &(cParam0->f_8269.f_1282));
						}
					}
					if (!func_32(&(cParam0->f_13118)))
					{
						func_33(&(cParam0->f_13118), 0);
					}
					bVar0 = _0x139efb0a71dd9011();
					if (bVar0)
					{
						func_2(cParam0, 256);
					}
					bVar1 = _0x7ce9dc58e3e4755f();
					if (bVar1 && func_7(cParam0, 256))
					{
						_0x16e9abdd34ddd931();
						do_screen_fade_out(0);
					}
					else
					{
						if (((!bVar0 && !func_34(cParam0, bVar1)) && !func_35()) && !func_7(cParam0, 80))
						{
							if (!bVar1)
							{
								func_36(cParam0);
							}
							return false;
						}
						if (func_7(cParam0, 64))
						{
							_0x16e9abdd34ddd931();
							do_screen_fade_out(0);
						}
						else if (func_28(cParam0) == 2)
						{
							if (cParam0->f_13104 == -1)
							{
								if (func_37(cParam0))
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
						else if (func_28(cParam0) == 1)
						{
							if (func_34(cParam0, bVar1))
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
			else if (func_7(cParam0, 2))
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
			if (!func_38() && func_28(cParam0) != 0)
			{
				func_42(cParam0, func_40(func_39(cParam0)), func_40(func_41(cParam0)), func_39(cParam0), func_41(cParam0));
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
	func_2(cParam0, 1048576);
	if (!func_7(cParam0, 2097152))
	{
		if (!func_15(cParam0))
		{
			return false;
		}
		func_2(cParam0, 2097152);
	}
	_0x1096603b519c905f("");
	clear_focus();
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	set_time_scale(1f);
	func_43(&(cParam0->f_8269));
	if (func_29(&(cParam0->f_8269)))
	{
		func_44(&(cParam0->f_8269));
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
	func_45(1);
	func_46(1);
	_0xc5eb2755fa25f1e9(1);
	func_47(0);
	func_48();
	func_25(3);
	if (!func_7(cParam0, 8))
	{
		_display_hud_component(-1679307491);
		_display_hud_component(724769646);
	}
	func_21(1);
	func_49();
	func_50();
	set_mission_name(false, 0);
	func_51();
	_set_milliseconds_per_game_minute(2000);
	pause_clock(false, 0);
	_0x914071ff93af2692(player_id(), 1f);
	_0x19b2c7a6c34fad54(player_id(), 1f);
	func_52(cParam0);
	func_53(1, 0);
	func_54(2);
	if (!Global_1935630->f_12)
	{
		set_ped_config_flag(Global_35, 141, false);
		_0xaac0ee3b4999abb5(Global_35, 0);
		_0xb832f1a686b9b810(Global_35, func_55(), 0);
		set_ped_config_flag(Global_35, 308, false);
		set_ped_can_use_auto_conversation_lookat(Global_35, false);
		set_ped_config_flag(Global_35, 446, false);
		_0xeae3b5b019c8d23f(Global_35, 262143);
		func_56(Global_35);
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
	func_57(&(cParam0->f_10792));
	func_58();
	stop_gameplay_hint(true);
	func_45(1);
	func_59();
	if (func_60())
	{
		_0x2f9ac754fe179d58(0.3f);
	}
	func_61(0, 14);
	bVar2 = false;
	if (func_28(cParam0) == 0)
	{
		bVar2 = true;
	}
	else
	{
		func_62(cParam0);
	}
	func_63(cParam0, 0, !bVar2, bVar2);
	func_64(cParam0, !bVar2);
	func_65(0);
	func_65(1);
	_0xdf93973251fb2ca5(player_id(), 1);
	func_66(0);
	func_68(func_67(cParam0));
	func_69(func_67(cParam0));
	func_70(0);
	func_71(0);
	func_72(func_28(cParam0));
	func_73(cParam0);
	if (!bVar2)
	{
		func_22(1, 0);
	}
	if (func_28(cParam0) != 1)
	{
		func_74(0, &(cParam0->f_8269.f_1282));
	}
	Global_43805 = -1;
	func_75(1);
	func_76(0);
	func_77(Global_1935630, 2097152);
	func_24(0);
	_uilog_mark_all_entries_availability(0, "");
	if (func_28(cParam0) == 0)
	{
		func_78((*Global_1835011)[cParam0->f_607]->f_1);
	}
	func_79();
	if (!is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
	{
		_set_scenario_type_enabled_hash(-2012097661, true);
	}
	if (!bParam1)
	{
		switch (func_28(cParam0))
		{
			case 0:
				if (!is_screen_faded_in())
				{
					if ((!is_screen_fading_in() && !func_7(cParam0, 4)) && !func_7(cParam0, 2))
					{
						do_screen_fade_in(1000);
					}
				}
				func_80(cParam0);
				func_81(cParam0);
				func_82();
				func_84(func_83(), 0);
				if (func_26() == 0)
				{
					func_85(0);
				}
				func_86(cParam0->f_607);
				bVar3 = func_87();
				if (!func_88(32768))
				{
					func_89(func_18(cParam0->f_607), !func_7(cParam0, 128), 1, bVar3, 1);
				}
				else
				{
					func_90(func_18(cParam0->f_607), bVar3);
				}
				func_23(cParam0, bParam1);
				if (cParam0->f_607 != 77)
				{
					_uilog_mark_mission_completed(func_91(cParam0));
				}
				func_20();
				if (func_88(32768))
				{
					do_screen_fade_out(0);
					func_92();
					func_93(0);
				}
				else if (func_7(cParam0, 2))
				{
					if (!is_screen_faded_out() && !is_screen_fading_out())
					{
						do_screen_fade_out(0);
					}
					func_94(1);
					func_95();
					func_96(6);
					func_97(4096);
				}
				break;
			case 1:
			case 2:
			case 3:
			case 6:
				func_98(func_18(cParam0->f_607));
				func_99();
				if (func_28(cParam0) == 2)
				{
					func_101(func_100(-1876607090), 1);
				}
				_0x55f37f5f3f2475e1();
				_0x062b4a4a3396351d(get_player_index());
				_0x07e8b8b20570271c(get_player_index());
				break;
			case 5:
				if (func_26() == 0)
				{
					func_85(0);
				}
				func_99();
				Var4 = { func_100(-1876607090) };
				_0x0fee2561120f3333(&Var4);
				func_19(func_18(cParam0->f_607), 0, 2);
				break;
			default:
				func_89(func_18(cParam0->f_607), 1, 1, 0, 1);
				func_20();
				break;
		}
		if (func_28(cParam0) != 0)
		{
			Var6 = { func_102(cParam0) };
			func_103(func_18(cParam0->f_607), func_28(cParam0), &Var6, 0, 0, func_7(cParam0, 64));
		}
	}
	func_104(1);
	func_25(3);
	func_105(cParam0, 4096);
	return true;
}

bool func_4(int iParam0)
{
	return (Global_21 && iParam0) != 0;
}

void func_5(var uParam0, char[4] cParam1)
{
	_0xed9582b3da8f02b4(20);
	cParam1->f_608 = uParam0->f_1;
	iVar0 = create_itemset(true);
	if (!func_26() == 0)
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
	func_106(cParam1);
	if (!func_26() == 0)
	{
		if (func_107(cParam1) > 0)
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
	if (func_108())
	{
		func_109(cParam1, 4194304);
	}
	if (func_110())
	{
		func_109(cParam1, 8388608);
	}
	if (func_111())
	{
		if (!func_110() && !func_108())
		{
			func_109(cParam1, 4);
		}
		else
		{
			if (func_110())
			{
			}
			if (func_108())
			{
			}
		}
		func_113(cParam1, func_112());
	}
	func_114(cParam1, uParam0);
	func_115(cParam1);
	if (cParam1->f_13105 > _0x62de46f061caa468())
	{
		_0xf008e0ba1fe1d644((cParam1->f_13105 - _0x62de46f061caa468()));
	}
}

void func_6(char[4] cParam0)
{
	cVar0 = func_116(cParam0->f_607);
	set_mission_name(true, &cVar0);
	if (!get_mission_flag())
	{
		set_mission_flag(true);
	}
	_0x1096603b519c905f(&cVar0);
	if (cParam0->f_607 != 77)
	{
		func_117();
		func_118(&cVar0, 0);
	}
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_119(1);
	func_120();
	_0xa565fac215cbc77d();
	shutdown_loading_screen();
	func_51();
	func_46(func_121(cParam0));
	_0x55f37f5f3f2475e1();
	_0x292ad61a33a7a485();
	if ((_0xf46108c50a22b029() && !Global_43891) && !func_122(func_83()))
	{
		_0x2161278c6322f740(16384, 0, 0, -1, -1, 0);
	}
	func_123(1, 0, 1);
	_0x2161278c6322f740(4096, 0, 0, -1, -1, 0);
	delete_all_trains();
	set_random_trains(false);
	func_45(0);
	func_124(cParam0);
	_0x33d51f801cb16e4f();
	if (!Global_1935630->f_12)
	{
		func_125(0, 0);
		_set_ped_crouch_movement(Global_35, false, 0, false);
		if (!func_126(cParam0, 16384) && (func_127(cParam0, func_39(cParam0), 2) || func_111()))
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
				if (!func_111() && !func_127(cParam0, func_39(cParam0), 2))
				{
				}
			}
			else if (!func_128(iVar1) && !func_88(32768))
			{
				remove_weapon_from_ped(Global_35, iVar1, true, -142743235);
				set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
			}
		}
		_0xb832f1a686b9b810(Global_35, false, 0);
		set_ped_can_use_auto_conversation_lookat(Global_35, true);
		func_129(cParam0);
	}
	func_76(1);
	func_45(0);
	func_130(cParam0, -1038436471);
	iLocal_15 = func_131(cParam0);
	iLocal_15 = iLocal_15;
	if (!Global_1935630->f_12)
	{
		if (!func_111())
		{
			Var2 = { func_40(func_39(cParam0)) };
			if (func_39(cParam0) != 0)
			{
				Var2 = { func_132(cParam0->f_607) };
			}
			if (!func_133(Var2))
			{
				func_109(cParam0, 1048576);
			}
			func_113(cParam0, 0);
			if (func_134(cParam0, 3) || func_135())
			{
				func_136(cParam0, func_132(cParam0->f_607), 0);
			}
		}
		else
		{
			if (!is_ped_injured(player_ped_id()))
			{
				freeze_entity_position(player_ped_id(), false);
				set_entity_visible(player_ped_id(), true);
				func_137(get_entity_coords(Global_35, true, false), 5000f, 1, 0, 0, 0, 0);
			}
			func_113(cParam0, func_112());
		}
		_0x15b0cc1b36f1de29(&((*Global_1835011)[cParam0->f_607]->f_8), 0, func_138(func_39(cParam0)), func_111());
	}
	func_139(cParam0);
	func_140(cParam0, 0);
	func_141(cParam0, 0);
	if (!func_142(cParam0, func_39(cParam0)))
	{
		func_113(cParam0, 0);
	}
	func_143(cParam0);
	func_144(cParam0);
	func_145(cParam0);
	func_109(cParam0, 2097152);
	func_146(cParam0, func_39(cParam0), 134217728);
	if (func_88(32768))
	{
		func_2(cParam0, 4);
	}
	func_147(cParam0);
	func_148(cParam0, func_39(cParam0));
	func_149(func_67(cParam0));
	if (!func_126(cParam0, 65536))
	{
		func_150(func_67(cParam0));
	}
	func_151(cParam0, player_ped_id(), "ARTHUR", 0);
	func_152(cParam0);
	func_153(cParam0);
	func_154(cParam0);
	func_155(cParam0, 30f);
	func_156(cParam0, 40f);
	func_157(cParam0, Global_35, 0, 0, 0, 0, 0);
	func_104(0);
	_0xa6a3a3f96b8b030e();
	func_24(1);
	_uilog_mark_all_entries_availability(2, "");
	if (cParam0->f_607 != 77)
	{
		cVar6 = func_116(cParam0->f_607);
		_uilog_mark_entry_availability(1, get_hash_key(&cVar6), 0, "");
	}
	if (is_scenario_type_enabled("WORLD_PLAYER_SEAT_LEDGE"))
	{
		_set_scenario_type_enabled_hash(-2012097661, false);
	}
}

bool func_7(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5309 && iParam1) != 0;
}

void func_8(char[4] cParam0)
{
	if ((_0xf46108c50a22b029() && !Global_43891) && !func_122(func_83()))
	{
		_0xf45e46deecf7df6e(16384, 0, 0, -1, -1);
	}
	if (!func_127(cParam0, func_39(cParam0), 16384))
	{
		func_158();
	}
	if (!func_14(cParam0, 32768))
	{
		_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	}
	if (!func_14(cParam0, 2048))
	{
		func_159(1, 0);
	}
	switch (func_160(cParam0))
	{
		case -1:
			break;
		case 0:
			MemCopy(&uVar0, {func_161(func_67(cParam0))}, 4);
			if (!is_string_null_or_empty(&uVar0))
			{
				func_109(cParam0, 64);
			}
			func_162(cParam0, 0);
			func_163(cParam0);
			if (func_164(cParam0))
			{
				if (!is_entity_dead(func_165(cParam0)) && func_134(cParam0, 3))
				{
					freeze_entity_position(func_165(cParam0), false);
				}
				func_166(cParam0, 1);
			}
			if (func_7(cParam0, -2147483648))
			{
				func_166(cParam0, 2);
			}
			break;
		case 1:
			if (func_167(cParam0))
			{
				func_2(cParam0, -2147483648);
				func_166(cParam0, 2);
			}
			func_162(cParam0, func_168(cParam0, func_39(cParam0)) > 4);
			break;
		case 2:
			if (func_3(cParam0, 0))
			{
				func_2(cParam0, -2147483648);
				func_166(cParam0, 3);
			}
			break;
		case 3:
			terminate_this_thread();
			break;
	}
	if (func_160(cParam0) < 2)
	{
	}
}

bool func_9(int iParam0, int iParam1)
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

bool func_10(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_13(iParam0, 0))
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
		func_169(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

int func_11(int iParam0, int iParam1)
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

int func_12(int iParam0, int iParam1)
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

bool func_13(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_14(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5307 && iParam1) != 0;
}

bool func_15(char[4] cParam0)
{
	bVar3 = func_28(cParam0) != false;
	if (!func_170())
	{
		if (!func_7(cParam0, 1073741824))
		{
			return false;
		}
	}
	if (!func_171(cParam0, bVar3))
	{
		if (!func_7(cParam0, 1073741824))
		{
			return false;
		}
	}
	if (!func_172(0))
	{
		if (!func_7(cParam0, 1073741824))
		{
			return false;
		}
	}
	Global_43838 = 0;
	func_173();
	if (does_entity_exist(iLocal_224))
	{
		delete_vehicle(&iLocal_224);
	}
	if (does_entity_exist(iLocal_225))
	{
		delete_vehicle(&iLocal_225);
	}
	if (does_entity_exist(iLocal_226))
	{
		delete_vehicle(&iLocal_226);
	}
	if (does_entity_exist(iLocal_223))
	{
		delete_vehicle(&iLocal_223);
	}
	func_47(0);
	func_174(1);
	set_time_scale(1f);
	_0x2412216fcc7b4e3e("script@Story@MUD4@sheep_herding");
	func_175(76, 1);
	func_176(75, 0, 1);
	func_177(75);
	func_178(75);
	func_179(80, 0);
	func_180(1);
	vVar4 = -1;
	vVar4.f_1 = -1;
	vVar4.f_2 = -1;
	func_181(19, &vVar4, 1);
	func_182(&vVar4, 1, 1);
	func_183(0, 0, 1103626240);
	if (func_184())
	{
		func_53(0, 0);
	}
	func_185(cParam0, 0);
	func_186();
	func_187(&Local_2000, &uLocal_1906);
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar14 = iVar1;
		if (_is_tracked_point_valid(&(Local_2255[iVar14])))
		{
			destroy_tracked_point(&(Local_2255[iVar14]));
		}
		iVar1++;
	}
	iVar2 = 0;
	while (iVar2 < 11)
	{
		iVar15 = iVar2;
		if (_is_tracked_point_valid(&(Local_2768[iVar15])))
		{
			destroy_tracked_point(&(Local_2768[iVar15]));
		}
		iVar2++;
	}
	if (!is_entity_dead(Global_35))
	{
		func_188(0);
		_0xc67a4910425f11f1(get_player_index(), 0);
		_0xc67a4910425f11f1(player_id(), "JOHN_WNT");
		_0xc67a4910425f11f1(player_id(), "JOHN_WNT_FAST");
		set_ped_reset_flag(Global_35, 154, false);
		set_ped_reset_flag(iLocal_209, 154, false);
	}
	if (get_ped_config_flag(Global_35, 342, true))
	{
		set_ped_config_flag(Global_35, 342, false);
	}
	if (get_ped_config_flag(Global_35, 341, true))
	{
		set_ped_config_flag(Global_35, 341, false);
	}
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (!is_entity_dead(&(uLocal_121[iVar0])))
		{
			if (get_ped_config_flag(&(uLocal_121[iVar0]), 179, true))
			{
				set_ped_config_flag(&(uLocal_121[iVar0]), 179, false);
			}
			if (get_ped_config_flag(&(uLocal_121[iVar0]), 167, true))
			{
				set_ped_config_flag(&(uLocal_121[iVar0]), 167, false);
			}
			if (iVar0 == 0)
			{
			}
			else if (iVar0 == 1)
			{
			}
			else if (iVar0 == 2)
			{
			}
			if (func_28(cParam0) == 0)
			{
			}
		}
		iVar0++;
	}
	func_189(1, 2048, 0);
	if (!is_entity_dead(iLocal_209))
	{
		_0xfd6943b6df77e449(iLocal_209, true);
	}
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (!is_entity_dead(&(iLocal_125[iVar0])))
		{
			_0xfd6943b6df77e449(&(iLocal_125[iVar0]), true);
		}
		iVar0++;
	}
	func_190();
	func_191();
	func_192(iVar325);
	set_create_random_cops(true);
	func_193();
	func_194();
	_0xc5eb2755fa25f1e9(1);
	if (func_28(cParam0) == 0)
	{
		func_195(1, iVar531 + 6000);
	}
	func_196();
	func_197(cParam0);
	func_198(&uLocal_37, &(iLocal_228[12]), 0);
	func_198(&uLocal_40, &(iLocal_228[59]), 0);
	func_198(&uLocal_42, &(iLocal_228[58]), 0);
	func_198(&uLocal_44, &(iLocal_228[10]), 0);
	func_198(&uLocal_45, &(iLocal_228[66]), 0);
	func_198(&uLocal_43, &(iLocal_228[26]), 0);
	func_199(&(iLocal_228[11]));
	if (_does_volume_exist(&(iLocal_228[61])))
	{
		_0x74c2b3dc0b294102(&(iLocal_228[61]));
	}
	if (_does_volume_exist(&(iLocal_228[69])))
	{
		_0x74c2b3dc0b294102(&(iLocal_228[69]));
		_0xa1cfb35069d23c23(&(iLocal_228[69]));
		_0xe5ef9de716ff737e(&(iLocal_228[69]), 1, 0);
	}
	if (_does_volume_exist(&(iLocal_228[79])))
	{
		_0xe5ef9de716ff737e(&(iLocal_228[79]), 1, 0);
	}
	if (_does_volume_exist(iVar326))
	{
		_delete_volume(iVar326);
	}
	func_200(cParam0);
	func_201(cParam0);
	if (does_entity_exist(iLocal_119))
	{
		delete_object(&iLocal_119);
	}
	if (does_entity_exist(iLocal_120))
	{
		delete_object(&iLocal_120);
	}
	func_202(1500064347);
	func_203();
	func_204(cParam0);
	func_205(58);
	func_205(13);
	func_205(4);
	func_206();
	func_207();
	func_208(1);
	func_209(2);
	func_210();
	func_211();
	func_212(&Local_1105, 0);
	func_17(&iLocal_354, 1, 1);
	if (does_cam_exist(iLocal_47))
	{
		destroy_cam(iLocal_47, false);
	}
	func_213(1, 0);
	func_213(0, 0);
	func_213(18, 0);
	func_214(cParam0, &(uLocal_121[0]), 1);
	func_214(cParam0, &(uLocal_121[1]), 1);
	func_214(cParam0, &(uLocal_121[2]), 1);
	iVar0 = 0;
	while (iVar0 <= (15 - 1))
	{
		if (func_215(&(iLocal_912[iVar0])))
		{
			func_216(&(iLocal_912[iVar0]));
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_217(Local_2094[iVar0], 0);
		func_218(&(Local_2094[iVar0]->f_1));
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 6)
	{
		func_217(Local_2223[iVar0], 0);
		iVar0++;
	}
	func_219(76);
	remove_model_hide(-272.975f, 786.292f, 118.75f, 3f, -283162583, 0);
	remove_model_hide(-249.978f, 770.001f, 116.549f, 3f, 434072995, 0);
	remove_model_hide(-261.303f, 766.593f, 116.659f, 3f, -1821565422, 0);
	remove_model_hide(-269.633f, 780.73f, 117.561f, 3f, 160269723, 0);
	remove_model_hide(-269.124f, 781.006f, 120.837f, 3f, 22068550, 0);
	remove_model_hide(-266.31f, 778.072f, 118.775f, 2f, -283162583, 0);
	func_65(7);
	func_220(0);
	func_220(1);
	func_221(0);
	if (_0x91a5f9cbebb9d936(uLocal_39))
	{
		remove_scenario_blocking_area(uLocal_39, false);
	}
	if (_0x91a5f9cbebb9d936(uLocal_41))
	{
		func_198(&uLocal_41, &(iLocal_228[6]), 0);
	}
	if (is_srl_loaded())
	{
		end_srl();
	}
	_0x0751d461f06e41ce(get_player_index(), 33, 0, 0);
	remove_model_hide(-236.1163f, 665.4963f, 112.3183f, 0.1f, -1385780198, 0);
	if (func_222(1, 262144))
	{
		func_223(1, 262144);
	}
	if (func_39(cParam0) == 12)
	{
		func_224(&(Global_1347343->f_11), 16384);
	}
	func_54(16384);
	if (_0x854bc9b1a1ccd034(1287772529, Global_35))
	{
		_0xde7b2b4144906cdf(1287772529, Global_35);
	}
	if (_0x854bc9b1a1ccd034(-302141554, Global_35))
	{
		_0xde7b2b4144906cdf(-302141554, Global_35);
	}
	if (_0x854bc9b1a1ccd034(-35160675, Global_35))
	{
		_0xde7b2b4144906cdf(-35160675, Global_35);
	}
	if (func_28(cParam0) == 0 || func_28(cParam0) == 5)
	{
		func_225(-515561750);
		func_225(26245360);
		func_226(-515561750, 0, 0);
		func_226(26245360, 0, 0);
	}
	func_227(1373192060, 0, 0);
	_0x660a8f876df1d4f8(14);
	_0x660a8f876df1d4f8(19);
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_228(Global_35, 1);
	func_229(&(uLocal_121[0]), 1);
	func_230(&cLocal_1073);
	return true;
}

bool func_16(int iParam0)
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

void func_17(int iParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_16(*iParam0))
	{
		*iParam0 = 0;
		return;
	}
	iVar0 = func_231(*iParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*iParam0 = 0;
		return;
	}
	func_232(iVar0);
	*iParam0 = 0;
}

int func_18(int iParam0)
{
	if (!func_233(iParam0))
	{
		return 0;
	}
	return (*Global_1835011)[iParam0]->f_1;
}

void func_19(int iParam0, bool bParam1, int iParam2)
{
	if (!func_234(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (!func_235(iParam0) && !func_236(iParam0))
	{
		if (!bParam1)
		{
		}
		return;
	}
	if (func_237(iParam0) == 0)
	{
	}
	if (iParam2 == 2 && !func_235(iParam0))
	{
		iParam2 = -1;
	}
	if (func_238(iParam0) == 3 || (func_238(iParam0) == 1 && _0x01f4d242765c6b24(func_237(iParam0))))
	{
		func_240(func_239(iParam0), func_237(iParam0), iParam2);
		if ((!func_234(Global_1572864->f_8) && !func_241(0, 1, 0)) && !func_242(&Global_1935630, 32768))
		{
			iVar0 = func_243(iParam0);
			if (iVar0 != -1)
			{
				func_244(0);
			}
			else if (func_239(iParam0) == 8)
			{
				iVar0 = func_245();
				if (iVar0 != -1)
				{
					func_244(0);
				}
			}
		}
	}
	func_246(iParam0, 0);
	if (func_247(0) == iParam0)
	{
		func_46(1);
		func_248(0);
		func_249(1);
	}
	func_250(iParam0, 1);
	func_251(iParam0);
}

void func_20()
{
	Global_1572864->f_8 = -1;
	Global_1572864->f_9 = -1;
	Global_1572864->f_10 = -1;
	func_252(0);
	func_253(0);
	func_70(0);
	func_71(0);
	func_254(0);
	func_255(1f);
}

void func_21(bool bParam0)
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
		func_256();
	}
	_0xa0cefcea390aab9b(0);
}

void func_22(bool bParam0, int iParam1)
{
	if (func_257())
	{
		_0xdd1232b332cbb9e7(3, 1, 0);
	}
	if (bParam0)
	{
		if (func_258())
		{
			func_119(1);
		}
	}
	_0x36559148b78853b3(0, iParam1, 0);
}

void func_23(char[4] cParam0, bool bParam1)
{
	Var0 = func_237(func_18(cParam0->f_607));
	Var0.f_1 = 0;
	Var0.f_2 = func_138(func_39(cParam0));
	Var0.f_4 = (get_entity_health(Global_35) * 100 / get_entity_max_health(Global_35, false));
	Var0.f_5 = Global_40.f_7729;
	Var0.f_6 = func_259(0);
	if (bParam1)
	{
		Var0.f_3 = 5;
	}
	else
	{
		Var0.f_3 = func_28(cParam0);
	}
	_0xd894437e12c17aec(&((*Global_1835011)[cParam0->f_607]->f_8), &Var0);
}

void func_24(int iParam0)
{
	Global_36580 = iParam0;
}

int func_25(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		func_260(iVar0, iParam0);
		iVar0++;
	}
	return 1;
}

int func_26()
{
	return Global_1572887->f_12;
}

void func_27(int iParam0)
{
	Global_1109400->f_22.f_10 = iParam0;
}

int func_28(char[4] cParam0)
{
	return cParam0->f_10783;
}

bool func_29(var uParam0)
{
	return uParam0->f_2501;
}

bool func_30(var uParam0)
{
	return uParam0->f_2500;
}

void func_31(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_261((*uParam1)[iVar0], 1048576))
		{
			switch (iParam0)
			{
				case 0:
					if ((*uParam1)[iVar0]->f_9 == 7)
					{
						func_262((*uParam1)[iVar0], 1);
					}
					break;
				case 1:
				case 2:
					if ((*uParam1)[iVar0]->f_9 == 3)
					{
						func_262((*uParam1)[iVar0], 1);
					}
					break;
				case 3:
					if ((*uParam1)[iVar0]->f_9 == 2)
					{
						func_262((*uParam1)[iVar0], 1);
					}
					break;
			}
		}
		iVar0++;
	}
}

bool func_32(float fParam0)
{
	return func_263(*fParam0, 1);
}

void func_33(float fParam0, bool bParam1)
{
	if (bParam1 || !func_32(fParam0))
	{
		func_264(fParam0);
	}
}

bool func_34(char[4] cParam0, bool bParam1)
{
	if (func_14(cParam0, 128) && func_35())
	{
		return true;
	}
	if (func_265(&(cParam0->f_13118)) >= 4000)
	{
		return true;
	}
	if (!func_37(cParam0))
	{
		return false;
	}
	if (!bParam1)
	{
		return false;
	}
	return true;
}

bool func_35()
{
	return (_does_anim_scene_exist(Global_43800) && _is_anim_scene_started(Global_43800, false));
}

void func_36(char[4] cParam0)
{
	func_266(!func_7(cParam0, 32), 1);
	func_2(cParam0, 32);
}

bool func_37(char[4] cParam0)
{
	return true;
}

bool func_38()
{
	return func_234(Global_1572864->f_8);
}

int func_39(char[4] cParam0)
{
	return cParam0->f_597;
}

struct<4> func_40(int iParam0)
{
	if (iParam0 == 0)
	{
		func_268(&Var0, func_267(0, 0));
	}
	else if (iParam0 == 1)
	{
		func_268(&Var0, func_267(1, 0));
	}
	else if (iParam0 == 2)
	{
		func_268(&Var0, func_267(2, 0));
	}
	else if (iParam0 == 3)
	{
		func_268(&Var0, func_267(3, 0));
	}
	else if (iParam0 == 4)
	{
		func_268(&Var0, func_267(4, 0));
	}
	else if (iParam0 == 5)
	{
		func_268(&Var0, func_267(5, 0));
	}
	else if (iParam0 == 6)
	{
		func_268(&Var0, func_267(6, 0));
	}
	else if (iParam0 == 7)
	{
		func_268(&Var0, func_267(7, 0));
	}
	else if (iParam0 == 8)
	{
		func_268(&Var0, func_267(8, 0));
	}
	else if (iParam0 == 9)
	{
		func_268(&Var0, func_267(9, 0));
	}
	else if (iParam0 == 10)
	{
		func_268(&Var0, func_267(10, 0));
	}
	else if (iParam0 == 11)
	{
		func_268(&Var0, func_267(11, 0));
	}
	else if (iParam0 == 12)
	{
		func_268(&Var0, func_267(12, 0));
	}
	else if (iParam0 == 25)
	{
		func_269(&Var0, -209.6904f, 746.3794f, 118.8628f, 351.6927f);
	}
	return Var0;
}

int func_41(char[4] cParam0)
{
	return func_270(cParam0, func_39(cParam0));
}

void func_42(char[4] cParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_252(0);
	func_271(func_18(cParam0->f_607), Var0, Var4, func_138(iParam9), func_138(iParam10));
}

void func_43(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_261((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_272((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

void func_44(var uParam0)
{
	_datafile_unload(uParam0->f_2495);
	uParam0->f_2495 = 0;
	uParam0->f_2501 = 0;
}

void func_45(bool bParam0)
{
	if (bParam0)
	{
		_0x2a7413168f6cd5a8();
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			func_273(iVar0, 4096);
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
	if (func_26() == -1)
	{
		Global_1430221->f_1 = !bParam0;
	}
}

void func_46(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_77(Global_1935630, 4194304);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_274(Global_1935630, 4194304);
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

void func_47(bool bParam0)
{
	if (bParam0)
	{
	}
	block_dispatch_service_resource_creation(15, bParam0);
	block_dispatch_service_resource_creation(6, bParam0);
	block_dispatch_service_resource_creation(1, bParam0);
}

void func_48()
{
	func_193();
	func_275();
	func_194();
	func_276();
}

void func_49()
{
	if (func_277())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_35())
		{
			func_278(1);
		}
	}
}

void func_50()
{
	Global_1894899->f_186 = 0;
	func_279();
}

void func_51()
{
	_uilog_clear_cached_objective();
}

void func_52(char[4] cParam0)
{
	if (func_26() == 0)
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

void func_53(int iParam0, int iParam1)
{
	func_280(1, iParam0, iParam1);
}

void func_54(int iParam0)
{
	switch (func_26())
	{
		case -1:
			Global_1357549->f_1494 = (Global_1357549->f_1494 - (Global_1357549->f_1494 && iParam0));
			break;
	}
}

bool func_55()
{
	return (func_281() || func_60());
}

void func_56(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		remove_ped_defensive_area(iParam0, true);
		remove_ped_defensive_area(iParam0, false);
	}
}

void func_57(var uParam0)
{
	func_282(uParam0);
	func_283(uParam0, 0);
	uParam0->f_1 = 0;
	func_49();
}

void func_58()
{
	iVar12 = 0;
	while (iVar12 < Global_43619)
	{
		*Global_43619[iVar12] = { Var0 };
		iVar12++;
	}
}

void func_59()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		func_284(iVar0);
		iVar0++;
	}
	func_285();
	func_286();
}

bool func_60()
{
	return Global_1894899 & 2 != 0;
}

void func_61(bool bParam0, int iParam1)
{
	if (func_287())
	{
		if (func_288(255))
		{
			if (!func_289(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_290(Global_1894899->f_2) && func_291(Global_1894899->f_2))
		{
			func_292(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_293(16);
			}
		}
		else if (func_290(Global_1894899->f_2) && !func_294(Global_1894899->f_2, 2))
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
		func_295(16);
		func_296();
		if (bVar0)
		{
			func_295(1);
		}
	}
}

void func_62(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_297(cParam0->f_5423[iVar0]))
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
	if (func_298(cParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_299(cParam0->f_5421))
		{
			iVar1 = func_300(cParam0->f_5421, iVar0);
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

void func_63(char[4] cParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 27)
	{
		iVar1 = iVar0;
		if (func_301(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_302(cParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_64(char[4] cParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_303(cParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_304(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_305(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_306(7);
		}
		else
		{
			func_307(iVar0, 0);
		}
		func_308(cParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_65(int iParam0)
{
	iParam0 = func_309(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_310(iParam0, 32);
	func_311();
}

void func_66(bool bParam0)
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

int func_67(char[4] cParam0)
{
	return cParam0->f_607;
}

void func_68(int iParam0)
{
	Var0 = { func_312(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_69(int iParam0)
{
	Var0 = { func_313(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_70(bool bParam0)
{
	Global_1572864->f_14 = bParam0;
	if (bParam0)
	{
		func_254(1);
	}
}

void func_71(bool bParam0)
{
	Global_1572864->f_13 = bParam0;
	if (bParam0)
	{
		func_254(0);
	}
}

void func_72(int iParam0)
{
}

void func_73(char[4] cParam0)
{
	func_314(&(cParam0->f_13121));
}

void func_74(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_261((*uParam1)[iVar0], 1048576) && (*uParam1)[iVar0]->f_9 == 9)
		{
			func_262((*uParam1)[iVar0], 1);
		}
		iVar0++;
	}
}

void func_75(bool bParam0)
{
	Global_1935496->f_15 = !bParam0;
}

void func_76(int iParam0)
{
	if (!has_ped_got_weapon(Global_35, -1415022764, 0, false))
	{
		return;
	}
	Global_1900073->f_18 = iParam0;
}

void func_77(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

void func_78(int iParam0)
{
	iVar0 = func_239(iParam0);
	iVar1 = -1;
	if (iVar0 == 1)
	{
		iVar2 = func_315(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_316(iVar1))
			{
				if (func_317(iVar1, 4))
				{
					func_318(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_319(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_315(iParam0);
		if (iVar3 == 59)
		{
			func_319(1);
		}
		else if (iVar3 == 61)
		{
			func_319(0);
		}
		else if (iVar3 == 83)
		{
			func_319(0);
		}
	}
}

void func_79()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_316(iVar0))
		{
			if (func_317(iVar0, 4))
			{
				if (func_317(iVar0, 16))
				{
					func_320(iVar0, 1);
				}
				if (func_317(iVar0, 8))
				{
					func_321(iVar0, 1);
				}
			}
		}
		iVar0++;
	}
}

void func_80(char[4] cParam0)
{
	if (func_26() == 0)
	{
		return;
	}
	iVar0 = func_39(cParam0);
	iVar1 = func_168(cParam0, iVar0);
	bVar2 = false;
	if (iVar1 == 5 || iVar1 == 6)
	{
		bVar2 = true;
	}
	iVar3 = 0;
	if (!bVar2)
	{
		if (func_322(cParam0) == 0 && iVar0 == 0)
		{
			iVar3 = 1;
		}
	}
	iVar4 = 0;
	if (!bVar2)
	{
		if (func_28(cParam0) == 0)
		{
			iVar4 = 1;
		}
	}
	if (iVar3 || iVar4)
	{
		func_323(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_324(cParam0);
	}
}

void func_81(char[4] cParam0)
{
	iVar0 = 0;
	if (func_325(cParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_326(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
}

void func_82()
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

int func_83()
{
	return Global_1894899->f_2;
}

void func_84(int iParam0, bool bParam1)
{
	if (!func_290(iParam0))
	{
		return;
	}
	bVar0 = func_294(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_327(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_329(iParam0, func_328());
			func_330(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_331(iParam0, 67108864);
		func_329(iParam0, -15);
	}
	func_332(iParam0);
}

void func_85(bool bParam0)
{
	if (!bParam0)
	{
		func_333(11);
	}
	else
	{
		func_334(11);
	}
}

void func_86(int iParam0)
{
	if (func_335(iParam0, 0))
	{
		func_336(262144, 5, 0, 1);
		func_337(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_338(101, 7, 1f, 0, 1);
			func_338(89, 7, 1f, 0, 1);
			break;
	}
}

bool func_87()
{
	return Global_1572864->f_15;
}

bool func_88(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

void func_89(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_234(iParam0))
	{
		return;
	}
	if (func_339(iParam0) == 4)
	{
		func_340(iParam0, func_328());
		if (!func_238(iParam0) == 5 && !func_238(iParam0) == 6)
		{
			if (bParam3)
			{
				func_246(iParam0, 6);
			}
			else
			{
				func_246(iParam0, 5);
			}
			func_251(iParam0);
		}
		return;
	}
	if (bParam1)
	{
		func_46(1);
	}
	iVar0 = func_239(iParam0);
	bVar1 = func_26() == false;
	if (iVar0 == 1 || iVar0 == 8)
	{
		func_341(0, 2);
		if (!bVar1 && bParam1)
		{
			func_342();
		}
	}
	else
	{
		func_248(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_343(iParam0);
	}
	else
	{
		Var2 = { func_100(-1876607090) };
		_0x0fee2561120f3333(&Var2);
		if (!func_88(32768))
		{
			Var4 = { func_100(773573510) };
			if (!network_is_game_in_progress())
			{
				if (bParam1 && func_238(iParam0) != 0)
				{
					if (iVar0 == 1)
					{
						if (func_315(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_315(iParam0)]->f_8), true);
						}
					}
					else if ((func_315(iParam0) != 95 && func_315(iParam0) != 82) && !func_344((*Global_1347702)[func_315(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_315(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_315(iParam0)]->f_8), true);
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
		func_346(func_315(iParam0), iVar6, func_345());
	}
	else if (iVar0 == 8)
	{
		func_348(func_315(iParam0), iVar6, func_345(), func_347());
	}
	if (!func_238(iParam0) == 5 && !func_238(iParam0) == 6)
	{
		iVar9 = func_349(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_350(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_351(func_315(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_352((iVar10 - 20), 0, iVar10);
					iVar11 = func_352((iVar11 - 10), 0, iVar11);
				}
				func_353(1);
				func_354(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_354(45, 0, 1);
				break;
			case 8:
				iVar10 = func_355(func_315(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_352((iVar10 - 20), 0, iVar10);
					iVar11 = func_352((iVar11 - 10), 0, iVar11);
				}
				func_354(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_356(func_315(iParam0)))
				{
					func_357(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_354(120, 0, 1);
				break;
			case 2:
				func_354(120, 0, 1);
				break;
			case 6:
				func_354(func_359(func_358(iParam0)), 0, 1);
				break;
			case 5:
				func_354(120, 0, 1);
				break;
		}
	}
	func_250(iParam0, 1);
	func_340(iParam0, func_328());
	func_251(iParam0);
	if ((!func_238(iParam0) == 0 && bParam1) && func_26() == -1)
	{
		iVar12 = func_243(iParam0);
		if (iVar12 != -1)
		{
			func_244(0);
		}
		else if (iVar0 == 8)
		{
			iVar12 = func_245();
			if (iVar12 != -1)
			{
				func_244(0);
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
				switch (func_315(iParam0))
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
				if (func_316(func_315(iParam0)) && func_344((*Global_1347702)[func_315(iParam0)]->f_12, 4))
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
				if (func_315(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_135();
				}
				break;
			case 8:
				if (func_315(iParam0) != 58)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_135();
				}
				break;
		}
	}
	if (!func_238(iParam0) == 5 && !func_238(iParam0) == 6)
	{
		if (bParam3)
		{
			func_246(iParam0, 6);
		}
		else
		{
			func_246(iParam0, 5);
		}
		func_251(iParam0);
		bVar13 = true;
	}
	if (bVar13)
	{
		switch (iVar0)
		{
			case 1:
				switch (func_315(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_360();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_361(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_361(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_361(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_361(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_361(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_361(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_361(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_361(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_361(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_361(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_362(-1267972061);
						func_361(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_362(1619534881);
						func_361(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_362(-755457379);
						func_361(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_362(1015404643);
						func_361(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_362(-1724192342);
						func_361(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_362(1310680212);
						func_361(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_362(-566881549);
						func_361(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_362(-1753730528);
						func_361(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_362(147796381);
						func_361(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_362(-378547623);
						func_361(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_362(829545206);
						func_361(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_362(891318243);
						func_361(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_361(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_361(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_361(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_363();
						func_364(967523420);
						func_365();
						func_366();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_367(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_361(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_368(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_368(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_369(304805134, 1, 1);
						if (!func_370((*Global_1347702)[21]->f_15, 1))
						{
							func_89((*Global_1347702)[21]->f_15, 0, 0, 0, 0);
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
						func_371();
						break;
					case 26:
						func_372();
						break;
					case 17:
						func_373(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_374())
						{
							func_375(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_376(-514575035, -1))
						{
							iVar15 = func_328();
							func_377(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_378(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_374())
						{
							func_375(1529685685);
						}
						break;
					case 34:
						if (func_374())
						{
							func_375(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_379();
						break;
					case 37:
						func_380();
						if (func_381())
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
						func_382();
						break;
					case 43:
						func_383();
						break;
					case 44:
						if (!func_370((*Global_1347702)[82]->f_15, 1))
						{
							func_89((*Global_1347702)[82]->f_15, 0, 0, 0, 0);
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
						if (!func_370((*Global_1347702)[83]->f_15, 1))
						{
							func_89((*Global_1347702)[83]->f_15, 0, 0, 0, 0);
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
						func_384();
						break;
					case 59:
						func_385();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_386();
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
						func_387();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_368(451, 0);
						}
						if (!func_388(-1992824800))
						{
							if (func_388(1520110311))
							{
								iVar16 = func_328();
								func_377(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_378(1937177603, iVar16, 1);
							}
						}
						if (func_389(4))
						{
							if (!func_390(684296857, 1, 0))
							{
								iVar17 = func_328();
								func_377(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_378(-1439688706, iVar17, 1);
							}
						}
						func_361(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_361(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_391(89200);
						func_391(2300);
						func_391(2300);
						break;
					case 68:
						func_392();
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
						func_393();
						func_391(-139100);
						break;
					case 69:
						if (func_370((*Global_1347702)[9]->f_15, 1))
						{
							func_391(-6000);
						}
						break;
					case 70:
						func_391(23400);
						func_391(1900);
						func_391(-15000);
						break;
					case 71:
						func_391(-5500);
						break;
				}
				break;
			case 8:
				switch (func_315(iParam0))
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
						func_394();
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
						func_395();
						break;
					case 66:
						func_396();
						func_397();
						break;
					case 67:
						if (!func_398(6))
						{
							func_399(6);
						}
						if (!func_398(3))
						{
							func_399(3);
						}
						if (func_374())
						{
							func_375(1534638301);
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
						Jump @5074; //curOff = 4897
						_0x946d46cd6dfb9742(get_player_index(), 0, -831543589);
						_0x946d46cd6dfb9742(get_player_index(), 0, -1687814239);
						_0x946d46cd6dfb9742(get_player_index(), 0, 989551914);
						Jump @5074; //curOff = 4942
						_0x946d46cd6dfb9742(get_player_index(), 0, 2131140554);
						Jump @5074; //curOff = 4959
						_0x946d46cd6dfb9742(get_player_index(), 0, 240200131);
						_0x946d46cd6dfb9742(get_player_index(), 0, -480463506);
						_0x946d46cd6dfb9742(get_player_index(), 0, 1901360117);
						Jump @5074; //curOff = 5004
						_0x946d46cd6dfb9742(get_player_index(), 0, -1841532568);
						Jump @5074; //curOff = 5021
						if (func_370((*Global_1835011)[69]->f_1, 1))
						{
							func_400(0);
							func_391(40500);
						}
						else
						{
							func_400(0);
							func_391(46500);
						}
						Jump @5136; //curOff = 5074
						switch (func_315(iParam0))
						{
							case 0:
								switch (func_358(iParam0))
								{
									case 5:
										_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
										break;
								}
								break;
						}
						func_401(iParam0);
						func_402();
						switch (iVar0)
						{
							case 1:
								switch (func_315(iParam0))
								{
									case 4:
										func_403(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
										break;
									case 61:
									case 62:
									case 63:
										func_403(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
										break;
									case 25:
										func_403(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
										break;
									case 12:
										func_403(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
										break;
									case 53:
										func_403(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
										break;
									case 20:
										func_403(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
										break;
									case 19:
										func_403(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
										break;
									case 24:
										iVar18 = func_404(iParam0);
										func_403(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
										break;
									case 28:
										func_403(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
										break;
									case 34:
										func_403(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
										if (!func_390(-2046502963, 1, 0))
										{
											func_361(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
										}
										break;
									case 29:
										func_403(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
										break;
									case 37:
										break;
									case 58:
										break;
									case 57:
										func_403(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
										break;
									case 76:
										func_403(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
										break;
									case 72:
										if (func_404(iParam0) == 0)
										{
											func_403(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
										}
										else
										{
											func_403(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
										}
										break;
								}
								break;
							case 8:
								if (func_344((*Global_1347702)[func_315(iParam0)]->f_12, 536870912))
								{
									func_405(11, 1);
								}
								switch (func_315(iParam0))
								{
									case 109:
										func_403(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
										break;
									case 55:
										func_405(8, 1);
										break;
									case 138:
										set_bit(&(Global_40.f_9052), 1);
										set_bit(&(Global_40.f_9052), 3);
										break;
									case 94:
										func_403(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
										break;
									case 63:
										func_403(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
										break;
									case 37:
										func_403(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
										break;
									case 116:
										func_403(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
										break;
									case 9:
										_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
										break;
								}
								break;
							case 11:
								if (iParam0 == func_406(0, 10, 11, 2116153146))
								{
									func_403(iParam0, func_404(iParam0), 1, 0.5f, 3, 0, 0, 1);
								}
								else if (iParam0 == func_406(0, 7, 11, -379687487))
								{
									func_403(iParam0, func_407(9), 1, 0.5f, 3, 0, 0, 1);
								}
								else if (iParam0 == func_406(0, 8, 11, -1386089015))
								{
									func_403(iParam0, func_407(10), 1, 0.5f, 2, 0, 0, 1);
								}
								else if (iParam0 == func_406(0, 11, 11, -1952009645))
								{
									func_403(iParam0, func_407(8), 1, 0.5f, 3, 0, 0, 1);
								}
								else if (iParam0 == func_406(0, 12, 11, 2065895756))
								{
									func_403(iParam0, func_407(11), 1, 0.5f, 2, 0, 0, 1);
								}
								break;
						}
						if (bParam1)
						{
							if (!func_238(iParam0) == 0)
							{
								if (func_237(iParam0) == 0)
								{
								}
								else if (_0x01f4d242765c6b24(func_237(iParam0)))
								{
									iVar19 = 0;
									if (bParam3)
									{
										iVar19 = 3;
									}
									func_240(func_239(iParam0), func_237(iParam0), iVar19);
									if (bParam4)
									{
										if (iVar0 == 8 && func_315(iParam0) == 58)
										{
											Global_1879514->f_1 = iParam0;
										}
										func_409(func_408(Global_1879514->f_1));
										if (iVar0 == 8 && func_315(iParam0) == 58)
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
										if (func_316(func_315(iParam0)) && func_344((*Global_1347702)[func_315(iParam0)]->f_12, 1))
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
							func_410(bParam2, iVar20);
						}
					}
					func_249(1);
					if ((bVar13 || func_135()) && (func_239(iParam0) == 1 || func_239(iParam0) == 8))
					{
						Global_1879534->f_6 = 1;
						Global_1879534->f_7 = 1;
					}
				}

void func_90(int iParam0, bool bParam1)
{
	if (_0x01f4d242765c6b24(func_237(iParam0)))
	{
		iVar0 = 0;
		if (bParam1)
		{
			iVar0 = 3;
		}
		func_240(func_239(iParam0), func_237(iParam0), iVar0);
		if (func_88(32768))
		{
			iVar1 = func_239(iParam0);
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_406(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_411();
				Global_1879514->f_18 = 1;
			}
		}
	}
	if (func_236(iParam0))
	{
		func_19(iParam0, 0, 2);
	}
	else if (func_235(iParam0))
	{
		if (!func_238(iParam0) == 5 && !func_238(iParam0) == 6)
		{
			if (bParam1)
			{
				func_246(iParam0, 6);
			}
			else
			{
				func_246(iParam0, 5);
			}
			func_251(iParam0);
		}
	}
	switch (func_239(iParam0))
	{
		case 1:
			switch (func_315(iParam0))
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
			switch (func_315(iParam0))
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

int func_91(char[4] cParam0)
{
	cVar0 = func_116(cParam0->f_607);
	return get_hash_key(&cVar0);
}

void func_92()
{
	func_97(4112);
	func_96(6);
	vVar2 = { func_412((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_413(vVar2, uVar1, uVar0, 0);
	func_414(vVar2);
	Global_40.f_9.f_15 = func_415(vVar2, 0);
	clear_weather_type_persist();
	set_random_weather_type(false, true);
}

void func_93(int iParam0)
{
	if (func_26() != -1)
	{
		return;
	}
	func_97(32);
	if (iParam0 == 0)
	{
		func_97(16);
	}
	else if (iParam0 == 1)
	{
		func_97(8);
	}
	func_416();
	Global_43889 = 1;
}

void func_94(int iParam0)
{
	Global_1310720->f_9 = iParam0;
}

void func_95()
{
	Global_1310720->f_8 = 0;
	Global_1935630->f_4 = 1;
	Var10 = { Var0 };
	StringCopy(&(Var10.f_10), "respawn_persistence", 32);
	Var10.f_14 = 1024;
	Var10.f_15 = 0;
	func_417(Var10, 0);
}

void func_96(int iParam0)
{
	Global_1572864->f_21 = iParam0;
	Global_1310720->f_4 = get_game_timer();
}

void func_97(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_98(int iParam0)
{
	if (!func_234(iParam0))
	{
		return;
	}
	if (iParam0 != func_247(0))
	{
		return;
	}
	if (func_237(iParam0) == 0)
	{
	}
	iVar0 = func_239(iParam0);
	if (func_238(iParam0) == 3)
	{
		if (func_237(iParam0) == 0)
		{
		}
		else if (_0x01f4d242765c6b24(func_237(iParam0)))
		{
			if (func_239(iParam0) != 1 && func_239(iParam0) != 8)
			{
				func_240(func_239(iParam0), func_237(iParam0), 1);
			}
		}
	}
	Global_1898438 = (get_game_timer() - 10000);
	func_251(iParam0);
	func_46(1);
	func_248(0);
	func_246(iParam0, 0);
	switch (iVar0)
	{
		case 1:
			func_353(1);
			func_354(15, 0, 1);
			break;
		case 4:
			func_354(10, 0, 1);
			break;
		case 8:
			func_354(10, 0, 1);
			break;
		case 9:
			func_354(10, 0, 1);
			break;
		case 2:
			func_354(10, 0, 1);
			break;
		case 6:
			func_354(10, 0, 1);
			break;
		case 5:
			func_354(10, 0, 1);
			break;
	}
	func_249(1);
}

void func_99()
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

struct<2> func_100(int iParam0)
{
	Var0 = iParam0;
	return Var0;
}

void func_101(var uParam0, int iParam1, int iParam2)
{
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

struct<8> func_102(char[4] cParam0)
{
	return cParam0->f_10784;
}

void func_103(int iParam0, int iParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (func_418(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_224(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_224(&(Global_1347343->f_11), 16384);
	}
	if (func_419() >= 2)
	{
		if (!func_418(Global_1347343->f_11, 16384))
		{
			func_224(&(Global_1347343->f_11), 8);
		}
		func_255(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_274(Global_1935630, 2048);
	func_420(bParam5);
}

void func_104(bool bParam0)
{
	if (bParam0)
	{
	}
	_0x6ac4af46a6b8dfb2(bParam0);
}

void func_105(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 || iParam1);
}

void func_106(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < Global_43619)
	{
		if (does_entity_exist(&(Global_43619[iVar0])))
		{
			*cParam0->f_7375.f_13[iVar0] = { *Global_43619[iVar0] };
			func_421(&(cParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
		}
		iVar0++;
	}
	if (_does_anim_scene_exist(Global_43800))
	{
		cParam0->f_7375.f_804 = Global_43800;
		take_ownership_of_anim_scene(cParam0->f_7375.f_804);
	}
	if (func_242(&Global_1935630, 524288))
	{
		func_77(Global_1935630, 524288);
		func_422(cParam0, 67108864);
	}
}

int func_107(var uParam0)
{
	return func_423(&(uParam0->f_7375));
}

bool func_108()
{
	return Global_1572864->f_14;
}

void func_109(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 || iParam1);
}

bool func_110()
{
	return Global_1572864->f_13;
}

bool func_111()
{
	return func_424() != -1;
}

int func_112()
{
	return Global_1572864->f_9;
}

void func_113(char[4] cParam0, int iParam1)
{
	cParam0->f_597 = iParam1;
	settimera(0);
}

void func_114(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = -1;
	func_425(cParam0);
	cParam0->f_634[0] = 71638;
	cParam0->f_634[1] = 71638;
	cParam0->f_637 = 0;
	func_427(cParam0, *uParam1);
	func_428(cParam0);
}

void func_115(char[4] cParam0)
{
	iVar1 = func_259(7);
	if (does_entity_exist(iVar1) && !is_entity_dead(iVar1))
	{
		func_429(iVar1, func_267(0, 6), 2, 1073741824);
	}
	func_430(cParam0, 40);
	if (func_39(cParam0) == 0)
	{
		iLocal_534 = func_431(1);
		func_432((*Global_1835011)[14]->f_1, iVar531);
	}
	if (func_39(cParam0) == 7)
	{
		func_226(-515561750, 1, 0);
	}
	if (func_39(cParam0) >= 8)
	{
		func_225(-515561750);
		func_202(26245360);
		func_226(26245360, 1, 0);
	}
	iVar0 = 0;
	while (iVar0 < 8)
	{
		iVar2 = get_ped_index_from_entity_index(func_433(cParam0, 40345436, 1));
		if (!does_entity_exist(&(iLocal_210[iVar0])))
		{
			iLocal_210[iVar0] = iVar2;
			if (!func_434(&(iLocal_210[iVar0]), 923520851))
			{
				task_wander_in_area(&(iLocal_210[iVar0]), -236.6264f, 665.7418f, 113.4415f, 5f, 1077936128, 20f, 1);
			}
		}
		iVar0++;
	}
	if (func_322(cParam0) == 0)
	{
		iLocal_227 = get_last_driven_vehicle();
		if (does_entity_exist(iLocal_227))
		{
			set_entity_coords(iLocal_227, -265.3882f, 706.3935f, 112.5851f, true, false, true, true);
			set_entity_heading(iLocal_227, 230.706f);
		}
	}
}

char[] func_116(int iParam0)
{
	if (!func_233(iParam0))
	{
		return uVar0;
	}
	return (*Global_1835011)[iParam0]->f_8;
}

void func_117()
{
	Var0.f_1 = -1;
	_copy_memory(Global_1879514, &Var0, 20);
}

void func_118(char* sParam0, int iParam1)
{
	StringCopy(&(Global_1879514->f_2), sParam0, 32);
	Global_1879514->f_8 = iParam1;
}

void func_119(int iParam0)
{
	_0xdd1232b332cbb9e7(1, iParam0, 0);
}

void func_120()
{
	iVar0 = 0;
	while (iVar0 < 21)
	{
		iVar1 = 0;
		while (iVar1 < 31)
		{
			func_435(iVar0, iVar1);
			iVar1++;
		}
		iVar0++;
	}
}

bool func_121(char[4] cParam0)
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

bool func_122(int iParam0)
{
	if (!func_290(iParam0))
	{
		return false;
	}
	return func_294(iParam0, 33554432);
}

void func_123(bool bParam0, int iParam1, bool bParam2)
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

void func_124(char[4] cParam0)
{
	if (func_26() == 0)
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

void func_125(int iParam0, bool bParam1)
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

bool func_126(char[4] cParam0, int iParam1)
{
	return (cParam0->f_5308 && iParam1) != 0;
}

bool func_127(char[4] cParam0, int iParam1, int iParam2)
{
	return func_436(cParam0->f_1[func_138(iParam1)]->f_11, iParam2);
}

bool func_128(int iParam0)
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

void func_129(char[4] cParam0)
{
	if (func_35())
	{
		func_437(&(cParam0->f_7375));
	}
}

void func_130(char[4] cParam0, int iParam1)
{
	if (!_is_this_model_a_horse(iParam1))
	{
		return;
	}
	cParam0->f_8268 = iParam1;
}

int func_131(char[4] cParam0)
{
	return cParam0->f_8268;
}

Vector3 func_132(int iParam0)
{
	return func_438(iParam0);
}

bool func_133(struct<4> Param0)
{
	if (func_88(32768))
	{
		return true;
	}
	return func_439(Param0, Param0.f_3);
}

bool func_134(char[4] cParam0, int iParam1)
{
	return (cParam0->f_608 && iParam1) != 0;
}

bool func_135()
{
	if (func_26() != -1)
	{
		return false;
	}
	if (!func_440())
	{
		return false;
	}
	if (!func_370((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_370((*Global_1835011)[2]->f_1, 1) && func_370((*Global_1347702)[120]->f_15, 1)) && !func_370((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_370((*Global_1835011)[37]->f_1, 1) && !func_370((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_370((*Global_1835011)[57]->f_1, 1) && !func_370((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_370((*Global_1835011)[26]->f_1, 1) && !func_370((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_370((*Global_1835011)[62]->f_1, 1) && func_370((*Global_1835011)[63]->f_1, 1)) && !func_370((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_370((*Global_1835011)[75]->f_1, 1) && !func_370((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_370((*Global_1835011)[76]->f_1, 1) && !func_370((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_370((*Global_1835011)[40]->f_1, 1) && func_370((*Global_1835011)[41]->f_1, 1)) && !func_370((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_370((*Global_1835011)[62]->f_1, 1) && func_370((*Global_1835011)[63]->f_1, 1)) && !func_370((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_370((*Global_1835011)[65]->f_1, 1) && func_370((*Global_1835011)[66]->f_1, 1)) && !func_370((*Global_1835011)[67]->f_1, 1))
	{
		return true;
	}
	return false;
}

void func_136(char[4] cParam0, vector3 vParam1, float fParam4)
{
	if (func_126(cParam0, 33554432))
	{
		return;
	}
	if (func_126(cParam0, 4096))
	{
		return;
	}
	if (func_441(vParam1))
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
		func_109(cParam0, 8);
	}
	func_109(cParam0, 4096);
	_0x4759cc730f947c81();
	_0x1ff00db43026b12f();
	start_player_teleport(player_id(), vParam1, fParam4, false, true, true, false);
	do_screen_fade_out(0);
	_set_milliseconds_per_game_minute(9999999);
	func_264(&(cParam0->f_603));
}

void func_137(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

int func_138(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return func_442();
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

void func_139(char[4] cParam0)
{
	if (_uilog_is_entry_registered(2, func_91(cParam0)))
	{
		_uilog_remove_entry(2, func_91(cParam0));
	}
	if (!_uilog_is_entry_registered(1, func_91(cParam0)))
	{
		func_443(cParam0->f_607);
	}
}

void func_140(char[4] cParam0, int iParam1)
{
	cParam0->f_598 = iParam1;
}

void func_141(char[4] cParam0, int iParam1)
{
	cParam0->f_599 = iParam1;
	func_33(&(cParam0->f_600), 1);
}

bool func_142(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_138(iParam1)]->f_12;
}

void func_143(char[4] cParam0)
{
	func_444(&(cParam0->f_638));
	func_445(&(cParam0->f_819));
	func_446(&(cParam0->f_1020));
	func_447(&(cParam0->f_1081));
	func_448(&(cParam0->f_1126));
	func_449(&(cParam0->f_5147));
	func_450(&(cParam0->f_1124));
	func_451(&(cParam0->f_5188));
	func_452(&(cParam0->f_5239));
	func_453(&(cParam0->f_5249));
	func_454(&(cParam0->f_5265));
	func_455(&(cParam0->f_5286));
}

void func_144(char[4] cParam0)
{
	if (!is_itemset_valid(iLocal_14))
	{
		iLocal_14 = create_itemset(true);
	}
}

int func_145(char[4] cParam0)
{
	func_456(cParam0, iLocal_15, 67108863);
	func_456(cParam0, -318278790, 384);
	func_456(cParam0, -78273782, 384);
	func_456(cParam0, 40345436, 127);
	func_456(cParam0, -1144663425, 7);
	func_456(cParam0, -2087759666, 424);
	func_456(cParam0, -1789856687, 384);
	func_456(cParam0, 1124384604, 28);
	func_456(cParam0, -1874017143, 384);
	func_456(cParam0, 1891548111, 224);
	func_456(cParam0, 525529657, 224);
	func_456(cParam0, 122919097, 224);
	func_456(cParam0, 1322985415, 224);
	func_456(cParam0, -1977628089, 384);
	func_456(cParam0, -1818007055, 8064);
	func_456(cParam0, 1830978939, 4096);
	func_456(cParam0, -967333571, 455);
	func_456(cParam0, 2514129, 28);
	func_456(cParam0, -1698780291, 224);
	func_456(cParam0, -1473388640, 224);
	func_456(cParam0, -1281909308, 224);
	func_456(cParam0, 986312695, 448);
	func_456(cParam0, -1971689092, 384);
	func_456(cParam0, -1443906703, 384);
	func_456(cParam0, -615159064, 384);
	func_456(cParam0, 428068258, 224);
	func_456(cParam0, -332787688, 8064);
	func_456(cParam0, -283162583, 7936);
	func_456(cParam0, 1077976463, 512);
	func_456(cParam0, -1816535547, 896);
	func_456(cParam0, 2111694366, 896);
	func_456(cParam0, 1907763614, 896);
	func_456(cParam0, 220493865, 8064);
	func_457(cParam0, "mud4_walk_gunstore", 1, 2, -1);
	func_457(cParam0, "mud4_ride_sniper", 4, 2, -1);
	func_457(cParam0, "mud4_ride_rancher", 8, 2, -1);
	func_457(cParam0, "mud4_ride_saloon", 128, 2, -1);
	func_457(cParam0, "mud4_enemy_wagon_1", 256, 2, -1);
	func_457(cParam0, "mud4_enemy_wagon_2", 256, 2, -1);
	func_457(cParam0, "mud4_enemy_wagon_3", 512, 2, -1);
	func_457(cParam0, "mudtown4_SheepRoute", 120, 2, -1);
	func_457(cParam0, "mud4_wagonNew", 7936, 1, 1);
	func_457(cParam0, "mud4_wagon_push", 1536, 2, -1);
	func_458(cParam0, "MINI_DUEL@PLAYER@MISSION@MUD4", 256);
	func_459(cParam0, "script@story@MUD4@leadout@int@Leadout_p1", uLocal_466[0], 1, 0, 0, 0, 1);
	func_459(cParam0, "script@story@mud4@ig@ig_3_john_binoculars@john_binoculars", uLocal_466[3], 8, 0, "pl_enter", 0, 1);
	func_459(cParam0, "script@story@MUD4@LEADOUT@MCS_2@LEADOUT", uLocal_466[5], 128, 0, "pblLeadout", 0, 1);
	func_459(cParam0, "script@story@mud4@leadin@mcs_3@intro", uLocal_466[6], 384, 0, "pbl_intro", 0, 1);
	func_459(cParam0, "script@story@mud4@ig@ig_5_AuctioneerAtPen@AuctioneerAtPen", uLocal_466[4], 64, 0, "pl_IG5_Wait_Idle", 0, 1);
	func_459(cParam0, "script@story@mud4@ig@ig_8_takenhostage@dutch_speech_reaction", uLocal_466[7], 256, 0, "pl_Dutch_Speech", 0, 1);
	func_459(cParam0, "script@story@mud4@ig@ig_8_takenhostage@gang_success_fail", uLocal_466[8], 384, 0, "pl_Base", 0f, 0);
	func_459(cParam0, "script@story@mud4@ig@ig_8_takenhostage@gang_success_fail", uLocal_466[9], 256, 0, "pl_Fail", 0, 1);
	func_459(cParam0, "script@story@mud4@ig@ig_8_takenhostage@gang_success_fail_enemy", uLocal_466[10], 256, 0, "pl_Base", 0, 1);
	func_459(cParam0, "script@story@mud4@ig@ig8_john_dies@ig8_john_dies", uLocal_466[11], 256, 0, "pl_IG8_John_Dies", 0, 1);
	func_459(cParam0, "script@story@mud4@ig@ig_15_strauss_wagon@ig_15_strauss_wagon_peds", uLocal_466[12], 1536, 0, func_460(16), 0, 1);
	func_459(cParam0, "script@story@mud4@ig@ig_15_strauss_wagon@ig_15_strauss_wagon_dutch", uLocal_466[14], 1024, 0, func_460(22), 0, 1);
	func_459(cParam0, "script@story@mud4@ig@ig_12_ranchers_react@action", uLocal_466[16], 8, 0, func_460(4), 0, 1);
	func_459(cParam0, "script@story@mud4@ig@ig_14_john_horse_gun_store@john_p1", uLocal_466[15], 6, 0, func_460(0), 0, 1);
	func_459(cParam0, "script@story@mud4@ig@ig_15_strauss_wagon@ig_15_strauss_wagon_peds", uLocal_466[17], 3072, 0, func_460(18), 0, 1);
	func_459(cParam0, "script@story@mud4@ig@ig_15_strauss_wagon@ig_15_strauss_wagon_peds", uLocal_466[18], 1792, 0, func_460(20), 0, 1);
	func_459(cParam0, "script@story@mud4@ig@ig_16_strauss_pickup@base", uLocal_466[23], 2048, 0, func_460(21), 0, 1);
	func_459(cParam0, "script@story@mud4@ig@ig_18_load_wagon@action", uLocal_466[19], 128, 0, func_460(7), 0, 1);
	func_459(cParam0, "script@story@mud4@ig@ig20_scope_area_cme@ig20_scope_area_cme", uLocal_466[20], 4, 0, "pl_IG20_Scopeout", 0, 1);
	func_459(cParam0, "script@story@mud4@ig@ig21_gesture_left@ig21_gesture_left", uLocal_466[21], 4, 0, "pl_IG21_gesture", 0, 1);
	func_459(cParam0, "script@story@mud4@ig@ig22_strauss_dies@ig22_strauss_dies", uLocal_466[22], 256, 0, "pl_IG22_Strauss_Dies", 0, 1);
	func_461(cParam0, &(uLocal_466[3]), "pl_IG3_Exit", 8);
	func_461(cParam0, &(uLocal_466[3]), "pl_IG3_Quick_Exit", 8);
	func_461(cParam0, &(uLocal_466[4]), "pl_IG5_Wait_Sheep", 64);
	func_461(cParam0, &(uLocal_466[4]), "pl_IG5_Open_Gate", 64);
	func_461(cParam0, &(uLocal_466[4]), "pl_IG5_Close_Gate", 64);
	func_461(cParam0, &(uLocal_466[7]), "pl_Dutch_Success", 256);
	func_461(cParam0, &(uLocal_466[10]), "pl_Fail", 256);
	func_461(cParam0, &(uLocal_466[10]), "pl_Success", 256);
	func_461(cParam0, &(uLocal_466[15]), func_460(0), 6);
	func_461(cParam0, &(uLocal_466[15]), func_460(1), 6);
	func_461(cParam0, &(uLocal_466[15]), func_460(2), 6);
	func_461(cParam0, &(uLocal_466[15]), func_460(3), 6);
	func_461(cParam0, &(uLocal_466[16]), func_460(4), 8);
	func_461(cParam0, &(uLocal_466[16]), func_460(5), 8);
	func_461(cParam0, &(uLocal_466[16]), func_460(6), 8);
	func_461(cParam0, &(uLocal_466[19]), func_460(8), 128);
	func_461(cParam0, &(uLocal_466[19]), func_460(9), 128);
	func_461(cParam0, &(uLocal_466[19]), func_460(10), 128);
	func_461(cParam0, &(uLocal_466[17]), func_460(13), 3072);
	func_461(cParam0, &(uLocal_466[17]), func_460(12), 3072);
	func_461(cParam0, &(uLocal_466[17]), func_460(19), 3072);
	func_461(cParam0, &(uLocal_466[17]), func_460(14), 3072);
	func_461(cParam0, &(uLocal_466[17]), func_460(11), 3072);
	func_461(cParam0, &(uLocal_466[17]), func_460(15), 3072);
	func_461(cParam0, &(uLocal_466[17]), func_460(20), 3072);
	func_461(cParam0, &(uLocal_466[12]), func_460(17), 1024);
	func_462(cParam0, -506285289, 12, -1, 0);
	func_463(cParam0, "pg_mission_mud4_strauswag01x", 7680);
	return 1;
}

void func_146(char[4] cParam0, int iParam1, int iParam2)
{
	func_464(&(cParam0->f_1[func_138(iParam1)]->f_11), iParam2);
}

void func_147(char[4] cParam0)
{
	func_109(cParam0, 1);
}

void func_148(char[4] cParam0, int iParam1)
{
	func_465(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1);
}

void func_149(int iParam0)
{
	Var0 = { func_312(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_150(int iParam0)
{
	Var0 = { func_313(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_151(char[4] cParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_466(&(cParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_152(char[4] cParam0)
{
	if (!func_298(cParam0->f_5421))
	{
		cParam0->f_5421 = { func_467() };
	}
}

void func_153(char[4] cParam0)
{
	if (!func_26() == 0 || network_is_host_of_this_script())
	{
		func_33(&(cParam0->f_603), 1);
	}
}

void func_154(char[4] cParam0)
{
}

void func_155(char[4] cParam0, float fParam1)
{
	func_468(&(cParam0->f_7375), fParam1);
}

void func_156(char[4] cParam0, float fParam1)
{
	func_469(&(cParam0->f_7375), fParam1);
}

void func_157(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_470(cParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_421(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

void func_158()
{
	_0x15abd5004cad2d99(0);
	_0x785177e4d57d7389(player_id(), 1352191066, 3, 3, 1);
	_0x785177e4d57d7389(player_id(), 1171995096, 4, 0, -1);
}

void func_159(bool bParam0, bool bParam1)
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

int func_160(char[4] cParam0)
{
	return *cParam0;
}

Vector3 func_161(int iParam0)
{
	if (!func_233(iParam0))
	{
		return vVar0;
	}
	return (*Global_1835011)[iParam0]->f_9;
}

void func_162(char[4] cParam0, bool bParam1)
{
	if (!func_127(cParam0, func_39(cParam0), 134217728))
	{
		func_145(cParam0);
		func_146(cParam0, func_39(cParam0), 134217728);
	}
	if (bParam1 && !func_127(cParam0, func_41(cParam0), 536870912))
	{
		if (func_471(cParam0, func_41(cParam0), 0))
		{
			func_146(cParam0, func_41(cParam0), 536870912);
		}
	}
	if (func_14(cParam0, 8192))
	{
		if (!func_14(cParam0, 536870912))
		{
			if (func_472(&(cParam0->f_1126), func_39(cParam0)))
			{
				func_105(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_471(cParam0, func_39(cParam0), 1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		func_105(cParam0, 8192);
	}
}

int func_163(char[4] cParam0)
{
	return 1;
}

bool func_164(char[4] cParam0)
{
	if (func_473(cParam0) < 1)
	{
		func_474(cParam0, func_134(cParam0, 3), !func_14(cParam0, 2097152), cParam0->f_5410, !func_14(cParam0, 32), 0);
		func_475(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
	}
	if ((!func_126(cParam0, 4) && !func_111()) && !func_134(cParam0, 3))
	{
		if (!func_126(cParam0, 32))
		{
			if (func_26() == 0)
			{
				func_109(cParam0, 32);
			}
			else
			{
				func_476(cParam0);
			}
		}
		if (func_126(cParam0, 32))
		{
			func_477(cParam0);
		}
	}
	switch (func_473(cParam0))
	{
		case -1:
		case 0:
			func_478(cParam0, 1);
			break;
		case 1:
			if (func_479(cParam0))
			{
				if (func_126(cParam0, 4096))
				{
					func_478(cParam0, 2);
				}
				else
				{
					func_478(cParam0, 3);
				}
			}
			break;
		case 2:
			if (func_480(cParam0))
			{
				func_478(cParam0, 3);
			}
			break;
		case 3:
			if (func_481(cParam0))
			{
				func_478(cParam0, 4);
			}
			break;
		case 4:
			return true;
	}
	return false;
}

var func_165(char[4] cParam0)
{
	return cParam0->f_5408;
}

void func_166(char[4] cParam0, int iParam1)
{
	*cParam0 = iParam1;
}

bool func_167(char[4] cParam0)
{
	if (func_39(cParam0) == 26)
	{
		func_482(cParam0, 0);
		return true;
	}
	if (func_483(cParam0))
	{
		iVar0 = func_39(cParam0);
		func_113(cParam0, func_41(cParam0));
		if (func_39(cParam0) == 26)
		{
			func_482(cParam0, 0);
			return true;
		}
		else if (func_127(cParam0, iVar0, 128))
		{
			func_483(cParam0);
		}
	}
	return false;
}

int func_168(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_138(iParam1)]->f_10;
}

void func_169(int iParam0, int iParam1, var uParam2, int iParam3)
{
	if (*uParam2 < 15)
	{
		return;
	}
	else if (iParam3 > *uParam2 || iParam3 < 1)
	{
		return;
	}
	Var7.f_1 = 10;
	if (!_item_database_get_item_price_modifiers(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		Var21[iVar0] = uParam2[iVar0];
		Var21[iVar0]->f_1 = 1f;
		iVar0++;
	}
	iVar1 = 0;
	while (iVar1 < Var7)
	{
		uVar6 = &Var7.f_1[iVar1];
		iVar4 = _item_database_get_number_of_modified_prices(uVar6);
		iVar2 = 0;
		while (iVar2 < iVar4)
		{
			if (_item_database_get_modified_price(uVar6, iVar2) != iParam1)
			{
			}
			else
			{
				iVar5 = _item_database_get_number_of_modifiers(uVar6);
				iVar3 = 0;
				while (iVar3 < iVar5)
				{
					if (!_item_database_fillout_modifier(uVar6, iVar3, &Var19))
					{
					}
					else
					{
						iVar0 = 0;
						while (iVar0 < iParam3)
						{
							if (&Var21[iVar0] == Var19)
							{
								Var21[iVar0]->f_1 = (Var21[iVar0]->f_1 - Var19.f_1);
							}
							else
							{
								iVar0++;
							}
						}
					}
					iVar3++;
				}
			}
			iVar2++;
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (Var21[iVar0]->f_1 != 1f)
		{
			(*uParam2)[iVar0]->f_1 = floor((IntToFloat((*uParam2)[iVar0]->f_1) * (Var21[iVar0]->f_1 / 1f)));
		}
		iVar0++;
	}
}

bool func_170()
{
	iVar0 = 0;
	while (iVar0 <= (80 - 1))
	{
		if (_does_volume_exist(&(iLocal_228[iVar0])))
		{
			if (((((((((((((((((((iVar0 == 2 || iVar0 == 3) || iVar0 == 4) || iVar0 == 5) || iVar0 == 6) || iVar0 == 7) || iVar0 == 8) || iVar0 == 11) || iVar0 == 9) || iVar0 == 14) || iVar0 == 15) || iVar0 == 10) || iVar0 == 16) || iVar0 == 17) || iVar0 == 12) || iVar0 == 13) || iVar0 == 18) || iVar0 == 19) || iVar0 == 20) || iVar0 == 21)
			{
				func_199(&(iLocal_228[iVar0]));
				_delete_volume(&(iLocal_228[iVar0]));
				return false;
			}
		}
		iVar0++;
	}
	return true;
}

bool func_171(char[4] cParam0, bool bParam1)
{
	if (func_28(cParam0) == 0)
	{
	}
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (iVar0 == 0)
		{
			if (func_301(1))
			{
				func_302(cParam0, 1, &(uLocal_121[iVar0]), 0, 1, 1, 0);
			}
		}
		else if (iVar0 == 1)
		{
			if (func_301(0))
			{
				func_302(cParam0, 0, &(uLocal_121[iVar0]), 0, 1, 1, 0);
			}
		}
		else if (iVar0 == 2)
		{
			if (func_301(18))
			{
				func_302(cParam0, 18, &(uLocal_121[iVar0]), 0, 1, 1, 0);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (iVar0 == 0)
		{
			func_484(&(iLocal_125[iVar0]), 1, 1, 0, 0);
		}
		else if (iVar0 == 1)
		{
			func_484(&(iLocal_125[iVar0]), 0, 1, 0, 0);
		}
		else if (iVar0 == 2)
		{
		}
		iVar0++;
	}
	func_217(iLocal_129[2], !bParam1);
	func_217(iLocal_129[3], !bParam1);
	func_217(iLocal_129[4], !bParam1);
	if (!func_485(&uLocal_135, !bParam1))
	{
		return false;
	}
	if (!func_485(&iLocal_150, !bParam1))
	{
		return false;
	}
	if (!func_485(&iLocal_154, !bParam1))
	{
		return false;
	}
	if (!func_485(&iLocal_158, !bParam1))
	{
		return false;
	}
	if (!func_485(&iLocal_162, !bParam1))
	{
		return false;
	}
	if (!func_485(&iLocal_165, !bParam1))
	{
		return false;
	}
	if (!func_485(&iLocal_168, !bParam1))
	{
		return false;
	}
	if (!func_485(&iLocal_174, !bParam1))
	{
		return false;
	}
	if (!func_485(&iLocal_179, !bParam1))
	{
		return false;
	}
	if (!func_485(&iLocal_182, !bParam1))
	{
		return false;
	}
	if (!func_485(&iLocal_185, !bParam1))
	{
		return false;
	}
	if (!func_485(&iLocal_191, !bParam1))
	{
		return false;
	}
	if (!func_485(&iLocal_194, !bParam1))
	{
		return false;
	}
	if (!func_485(&iLocal_196, !bParam1))
	{
		return false;
	}
	if (!func_485(&iLocal_203, !bParam1))
	{
		return false;
	}
	if (func_486(9, 1))
	{
		func_487(9, 0, 1, 0, 0);
	}
	if (func_486(2, 1))
	{
		func_487(2, 0, 1, 0, 0);
	}
	if (func_486(7, 1))
	{
		func_487(7, 0, 1, 0, 0);
	}
	if (func_486(32, 1))
	{
		func_487(32, 0, 1, 0, 0);
	}
	return true;
}

bool func_172(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < iLocal_210)
	{
		if (does_entity_exist(&(iLocal_210[iVar0])))
		{
			if (bParam0)
			{
				set_ped_as_no_longer_needed(iLocal_210[iVar0]);
			}
			else
			{
				delete_ped(iLocal_210[iVar0]);
			}
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_173()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&Global_1934765->f_275[iVar0] == get_id_of_this_thread())
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + Global_1934765->f_275[iVar0]->f_1);
			Global_1934765->f_275[iVar0] = 0;
			Global_1934765->f_275[iVar0]->f_1 = 0;
			func_488();
			return;
		}
		iVar0++;
	}
}

void func_174(bool bParam0)
{
	if (bParam0)
	{
		iVar0 = 566;
		while (iVar0 <= 588)
		{
			iVar1 = iVar0;
			func_205(iVar1);
			func_489(iVar1, 32);
			iVar0++;
		}
		func_205(31);
		func_205(7);
		func_205(46);
		func_205(47);
		func_205(3);
		func_205(941);
		func_205(948);
		func_205(944);
		func_489(31, 32);
		func_489(7, 32);
		func_489(46, 32);
		func_489(47, 32);
		func_489(3, 32);
		func_489(941, 32);
		func_489(948, 32);
		func_489(944, 32);
	}
	else
	{
		iVar0 = 566;
		while (iVar0 <= 588)
		{
			iVar2 = iVar0;
			func_490(iVar2);
			func_491(iVar2, 32);
			iVar0++;
		}
		func_490(31);
		func_490(7);
		func_490(46);
		func_490(47);
		func_490(3);
		func_490(941);
		func_490(948);
		func_490(944);
		func_491(31, 32);
		func_491(7, 32);
		func_491(46, 32);
		func_491(47, 32);
		func_491(3, 32);
		func_491(941, 32);
		func_491(948, 32);
		func_491(944, 32);
	}
}

void func_175(int iParam0, bool bParam1)
{
	if (!func_290(iParam0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 35)
	{
		iVar0 = func_492(iParam0, iVar1);
		if (func_493(iVar0))
		{
			func_179(iVar0, bParam1);
		}
		iVar1++;
	}
}

void func_176(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_493(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_494(iParam0, 256);
		func_495(iParam0, 512);
		func_495(iParam0, 1048576);
	}
	else
	{
		func_495(iParam0, 256);
	}
	if (bParam2)
	{
		func_496(iParam0);
	}
}

void func_177(int iParam0)
{
	if (!func_493(iParam0))
	{
		return;
	}
	iVar0 = func_497(iParam0);
	if (!func_498(iVar0))
	{
		return;
	}
	Global_1914319->f_3[iVar0]->f_413 = 0;
}

void func_178(int iParam0)
{
	iVar0 = func_497(iParam0);
	Global_1914319->f_3[iVar0]->f_414 = 0;
}

void func_179(int iParam0, bool bParam1)
{
	if (!func_493(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_495(iParam0, 1);
	}
	else
	{
		func_494(iParam0, 1);
	}
	func_499(func_497(iParam0), bParam1);
}

void func_180(bool bParam0)
{
	if (bParam0)
	{
		if (!is_scenario_type_enabled("PROP_PLAYER_CASH_REGISTER"))
		{
			set_scenario_type_enabled("PROP_PLAYER_CASH_REGISTER", true);
		}
	}
	else if (is_scenario_type_enabled("PROP_PLAYER_CASH_REGISTER"))
	{
		set_scenario_type_enabled("PROP_PLAYER_CASH_REGISTER", false);
	}
}

int func_181(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = iParam0;
	switch (iParam0)
	{
		case 0:
			uParam1->f_1 = 0;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2971f, -1324.285f, 46.89f };
			uParam1->f_8 = 0.29f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 1:
			uParam1->f_1 = 0;
			uParam1->f_2 = 105;
			uParam1->f_3 = 0;
			uParam1->f_4 = 400f;
			uParam1->f_5 = { 1339.562f, -1372.173f, 83.2967f };
			uParam1->f_8 = 80f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 2:
			uParam1->f_1 = 0;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = 300f;
			uParam1->f_5 = { 2938.582f, 520.6577f, 44.3412f };
			uParam1->f_8 = 126.9f;
			uParam1->f_9 = 2f;
			return 1;
		case 3:
			uParam1->f_1 = 5;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			if (Global_1899848->f_3 < 0 || Global_1899848->f_3 >= 6)
			{
				Global_1899848->f_3 = get_random_int_in_range(0, 6);
			}
			if (Global_1899848->f_3 == 0 || Global_1899848->f_3 == 1)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else if (Global_1899848->f_3 == 2 || Global_1899848->f_3 == 3)
			{
				uParam1->f_5 = { -1604f, -1419.09f, 80.92f };
			}
			else
			{
				uParam1->f_5 = { -1603.35f, -1409f, 80.92f };
			}
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 4:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 5;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -63.25864f, -404.9262f, 69.9287f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 1f;
				return 1;
			}
			return 0;
		case 5:
			uParam1->f_1 = 5;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2552.997f, 397.415f, 147.1629f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1f;
			return 1;
		case 6:
			uParam1->f_1 = 1;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -936.9756f, -1390.084f, 49.5777f };
			uParam1->f_8 = -174.39f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 7:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 8:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 665.5017f, -1243.862f, 43.1442f };
				uParam1->f_8 = 134.74f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 9:
			uParam1->f_1 = 1;
			uParam1->f_2 = 69;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { 1522.005f, 431.2095f, 89.679f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 10:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { -118.0872f, -27.6725f, 94.805f };
				uParam1->f_8 = -103.99f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 11:
			uParam1->f_1 = 1;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 150f;
			uParam1->f_5 = { 2515.659f, -1245.743f, 49.5757f };
			uParam1->f_8 = -45f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 12:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 1;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = 0f;
				uParam1->f_5 = { 1881.669f, -1874.046f, 41.7769f };
				uParam1->f_8 = 77.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 13:
			uParam1->f_1 = 6;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2594.942f, 410.063f, 148.7582f };
			uParam1->f_8 = 88.6423f;
			uParam1->f_9 = 2f;
			return 1;
		case 14:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = to_float(Global_1900325->f_24);
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 15:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 98;
				uParam1->f_3 = 0;
				uParam1->f_4 = to_float(Global_1900325->f_24);
				uParam1->f_5 = { 665.5322f, -1243.902f, 43.94809f };
				uParam1->f_8 = 225.55f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 16:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 71;
				uParam1->f_3 = 0;
				uParam1->f_4 = to_float(Global_1900325->f_24);
				uParam1->f_5 = { -118.119f, -27.6134f, 95.57291f };
				uParam1->f_8 = 166.84f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 17:
			uParam1->f_1 = 3;
			uParam1->f_2 = 26;
			uParam1->f_3 = 0;
			uParam1->f_4 = to_float(Global_1900325->f_24);
			uParam1->f_5 = { -1826.215f, -433.9676f, 159.7386f };
			uParam1->f_8 = 157.4f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 18:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 3;
				uParam1->f_2 = 9;
				uParam1->f_3 = 0;
				uParam1->f_4 = to_float(Global_1900325->f_24);
				uParam1->f_5 = { 1881.669f, -1874.046f, 42.58081f };
				uParam1->f_8 = 167.47f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 19:
			uParam1->f_1 = 3;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = to_float(Global_1900325->f_24);
			uParam1->f_5 = { -243.7256f, 771.2707f, 117.8849f };
			uParam1->f_8 = -69.92f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 20:
			uParam1->f_1 = 3;
			uParam1->f_2 = 92;
			uParam1->f_3 = 0;
			uParam1->f_4 = to_float(Global_1900325->f_24);
			uParam1->f_5 = { 2946.444f, 500.1154f, 45.53999f };
			uParam1->f_8 = -84.13f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 21:
			uParam1->f_1 = 4;
			uParam1->f_2 = 37;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -1603.485f, -1414.838f, 81.1f };
			uParam1->f_8 = -14.4f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 22:
			uParam1->f_1 = 4;
			uParam1->f_2 = 22;
			uParam1->f_3 = 12;
			uParam1->f_4 = 0f;
			uParam1->f_5 = { -2514.944f, 432.25f, 147f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 1.5f;
			return 1;
		case 23:
			uParam1->f_1 = 2;
			uParam1->f_2 = 38;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { -813.2148f, -1316.547f, 42.6787f };
			uParam1->f_8 = 60f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 24:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = -1;
				uParam1->f_3 = 0;
				uParam1->f_4 = 100f;
				uParam1->f_5 = { 0f, 0f, 0f };
				uParam1->f_8 = 0f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 25:
			return 0;
		case 26:
			uParam1->f_1 = 2;
			uParam1->f_2 = 71;
			uParam1->f_3 = 0;
			uParam1->f_4 = 100f;
			uParam1->f_5 = { -138.7686f, -27.4923f, 95.0878f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 27:
			uParam1->f_1 = 2;
			uParam1->f_2 = 5;
			uParam1->f_3 = 0;
			uParam1->f_4 = 500f;
			uParam1->f_5 = { 2630.74f, -1226.25f, 52.3794f };
			uParam1->f_8 = 0f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 28:
			if (iParam2 == 1)
			{
				uParam1->f_1 = 2;
				uParam1->f_2 = 8;
				uParam1->f_3 = 0;
				uParam1->f_4 = 1000f;
				uParam1->f_5 = { 3288.448f, -1318.004f, 41.7734f };
				uParam1->f_8 = 60f;
				uParam1->f_9 = 2.5f;
				return 1;
			}
			return 0;
		case 29:
			return 0;
		case 30:
			uParam1->f_1 = 2;
			uParam1->f_2 = 75;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -327.6681f, -357.796f, 87.055f };
			uParam1->f_8 = -63f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 31:
			uParam1->f_1 = 2;
			uParam1->f_2 = 115;
			uParam1->f_3 = 0;
			uParam1->f_4 = 200f;
			uParam1->f_5 = { -5510.395f, -2913.764f, 0.6353f };
			uParam1->f_8 = 90f;
			uParam1->f_9 = 2.5f;
			return 1;
		case 32:
			uParam1->f_1 = 2;
			uParam1->f_2 = 76;
			uParam1->f_3 = 0;
			uParam1->f_4 = 250f;
			uParam1->f_5 = { -304.5352f, 801.1352f, 117.9785f };
			uParam1->f_8 = 135f;
			uParam1->f_9 = 2.5f;
			return 1;
		default:
			break;
	}
	return 0;
}

int func_182(var uParam0, bool bParam1, int iParam2)
{
	if (func_26() != -1)
	{
		return -1;
	}
	if (Global_1899528->f_211)
	{
		return -1;
	}
	iVar2 = -1;
	if (uParam0->f_2 == -1)
	{
		return -1;
	}
	if (uParam0->f_2 != func_83())
	{
		return -1;
	}
	if (!func_500(uParam0->f_1))
	{
		return -1;
	}
	if (func_122(uParam0->f_2))
	{
		return -1;
	}
	iVar2 = func_501(*uParam0);
	if (iVar2 == -1)
	{
		if (!func_502(&iVar2))
		{
			return -1;
		}
	}
	func_503(*uParam0, iVar2);
	bVar1 = func_504(uParam0->f_1, 131072);
	func_505(uParam0->f_1);
	iVar3 = func_506(uParam0->f_1, *uParam0);
	(*Global_1392915)[iVar2] = *uParam0;
	(*Global_1392915)[iVar2]->f_1 = uParam0->f_1;
	(*Global_1392915)[iVar2]->f_2 = uParam0->f_2;
	(*Global_1392915)[iVar2]->f_3 = uParam0->f_3;
	(*Global_1392915)[iVar2]->f_4 = iVar3;
	(*Global_1392915)[iVar2]->f_5 = uParam0->f_9;
	(*Global_1392915)[iVar2]->f_6 = { uParam0->f_5 };
	(*Global_1392915)[iVar2]->f_9 = uParam0->f_8;
	(*Global_1392915)[iVar2]->f_10 = floor(uParam0->f_4);
	(*Global_1392915)[iVar2]->f_11 = iVar2;
	Global_1392915->f_121[iVar2] = 0;
	Global_1392915->f_121[iVar2]->f_2 = bParam1;
	Global_1392915->f_121[iVar2]->f_17 = iParam2;
	Global_1392915->f_121[iVar2]->f_1 = 0;
	Global_1392915->f_121[iVar2]->f_6 = 0;
	Global_1392915->f_121[iVar2]->f_12 = get_interior_at_coords(uParam0->f_5);
	Global_1392915->f_121[iVar2]->f_16 = 0;
	if (Global_1392915->f_121[iVar2]->f_12 != 0)
	{
		Global_1392915->f_121[iVar2]->f_9 = { _get_interior_position(Global_1392915->f_121[iVar2]->f_12) };
	}
	else
	{
		Global_1392915->f_121[iVar2]->f_9 = { 0f, 0f, 0f };
	}
	if (bParam1)
	{
		func_507(uParam0->f_1, 65536);
		if ((uParam0->f_1 == 1 || uParam0->f_1 == 2) || uParam0->f_1 == 0)
		{
			func_507(uParam0->f_1, 2097152);
		}
	}
	if (bVar1)
	{
		func_507(uParam0->f_1, 131072);
	}
	if (func_508(iVar3) || (!func_236(iVar3) && func_247(0) != iVar3))
	{
		iVar0 = func_509(iVar3);
		if (iVar0 == -1)
		{
			func_510(iVar3);
		}
	}
	return iVar2;
}

void func_183(int iParam0, bool bParam1, float fParam2)
{
	func_511(iParam0, bParam1, fParam2);
}

bool func_184()
{
	return func_512(1);
}

void func_185(char[4] cParam0, bool bParam1)
{
	if (func_39(cParam0) >= 4 && func_39(cParam0) <= 6)
	{
		if (bParam1)
		{
			if (!is_entity_dead(&(uLocal_121[0])))
			{
				_0x1e017404784aa6a3(&(uLocal_121[0]), -1424845935);
			}
			if (func_39(cParam0) != 4)
			{
				_0x0d7fd6a55fd63aef(7, 3, 1);
			}
			_0x380a2e353ad30917(&(uLocal_121[0]), 40f, 20f);
			_0x0d7fd6a55fd63aef(25, 3, 1);
			_0x0d7fd6a55fd63aef(23, 3, 1);
			_0x0d7fd6a55fd63aef(19, 3, 1);
		}
	}
	if (func_39(cParam0) == 7)
	{
		if (bParam1)
		{
			_0x0d7fd6a55fd63aef(19, 3, 1);
			_0x0d7fd6a55fd63aef(1, 3, 1);
		}
	}
	if (func_39(cParam0) == 2)
	{
		if (bParam1)
		{
			if (!is_entity_dead(&(uLocal_121[0])))
			{
				_0x1e017404784aa6a3(&(uLocal_121[0]), -1054621773);
			}
			_0x0d7fd6a55fd63aef(29, 3, 0);
			_0x0d7fd6a55fd63aef(7, 3, 1);
			_0x0d7fd6a55fd63aef(25, 3, 1);
			_0x0d7fd6a55fd63aef(23, 3, 1);
			_0x0d7fd6a55fd63aef(21, 3, 1);
			_0x0d7fd6a55fd63aef(19, 3, 1);
			_0x0d7fd6a55fd63aef(22, 3, 1);
		}
	}
	if (!bParam1)
	{
		_0x660a8f876df1d4f8(7);
		_0x660a8f876df1d4f8(25);
		_0x660a8f876df1d4f8(23);
		_0x660a8f876df1d4f8(21);
		_0x660a8f876df1d4f8(19);
		_0x660a8f876df1d4f8(22);
		_0x660a8f876df1d4f8(29);
		_0x660a8f876df1d4f8(1);
		_0x660a8f876df1d4f8(28);
		if (!is_entity_dead(&(uLocal_121[0])))
		{
			_0x2b4ce170de09f346(&(uLocal_121[0]), -1054621773);
		}
		if (!is_entity_dead(&(uLocal_121[0])))
		{
			_0x2b4ce170de09f346(&(uLocal_121[0]), -1424845935);
		}
	}
}

void func_186()
{
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
}

void func_187(var uParam0, var uParam1)
{
	if (!func_513(uParam0->f_88, 1024))
	{
		func_514(uParam0, uParam1);
	}
	func_515();
	set_time_scale(1f);
	func_517(func_516(uParam1, uParam0), 1);
	func_51();
	func_518();
	func_519();
	func_520(&(uParam1->f_26));
	func_520(&(uParam1->f_29));
	func_520(&(uParam1->f_32));
	func_520(&(uParam1->f_35));
	func_520(&(uParam1->f_38));
	func_520(&(uParam1->f_41));
	if (func_521(uParam0->f_1, 0))
	{
		if (func_522(uParam0, 65536))
		{
			set_ped_config_flag(uParam0->f_1, 16, false);
			set_ped_can_ragdoll(uParam0->f_1, true);
			set_ped_config_flag(uParam0->f_1, 263, false);
			set_ragdoll_blocking_flags(uParam0->f_1, 0);
		}
		if (func_522(uParam0, 1024))
		{
			clear_ragdoll_blocking_flags(uParam0->f_1, 1);
		}
		if (func_522(uParam0, 128) || func_522(uParam0, 4096))
		{
			set_ped_using_action_mode(uParam0->f_1, false, -1, 0);
		}
		set_ped_config_flag(uParam0->f_1, 371, false);
		set_ped_config_flag(uParam0->f_1, 392, false);
		set_entity_is_target_priority(uParam0->f_1, false, 0f);
	}
	_0x3c4ae8506638c7e2(get_player_index(), 1);
	if (!func_522(uParam0, 2048))
	{
		_0xde5faa741a781f73(get_player_index(), 0);
	}
	if (func_523(uParam1, 2048))
	{
		set_ped_config_flag(uParam0->f_1, 146, false);
	}
	enable_control_action(0, -1404316431, true);
	enable_control_action(0, 255439828, true);
	if (func_523(uParam1, 2) && !func_522(uParam0, 32768))
	{
		func_524(1, uParam0, uParam1, -1038090240, 1103626240);
		func_525(uParam1, 2);
	}
	if (_does_volume_exist(uParam0->f_86))
	{
		_0x74c2b3dc0b294102(uParam0->f_86);
		_0xa1cfb35069d23c23(uParam0->f_86);
	}
	if (_does_item_have_valid_base(*uParam1))
	{
		destroy_itemset(*uParam1);
	}
	func_526(uParam0, uParam1, 1);
	if (!is_entity_dead(*uParam0) && (func_523(uParam1, 8) && (!func_523(uParam1, 1) || _0xc8b29d18022ea2b7(*uParam0))))
	{
		_0xeed08a3a98b847e2(*uParam0, (!func_522(uParam0, 256) || is_entity_dead(uParam0->f_1)), 1040187392);
		if (func_523(uParam1, 4096))
		{
			clear_ped_tasks(*uParam0, 1, 0);
		}
	}
	if (!is_entity_dead(uParam0->f_1) && _0xc8b29d18022ea2b7(uParam0->f_1))
	{
		_0xeed08a3a98b847e2(uParam0->f_1, false, 1040187392);
		if (func_523(uParam1, 4096))
		{
			clear_ped_tasks(uParam0->f_1, 1, 0);
		}
	}
	display_radar(true);
	if (!is_entity_dead(*uParam0))
	{
		if (is_ped_a_player(*uParam0))
		{
			set_player_control(get_player_index(), true, 0, false);
		}
		set_ped_using_action_mode(*uParam0, false, -1, 0);
	}
	animpostfx_stop("Duel");
	_0x914071ff93af2692(player_id(), 1f);
	if (!is_string_null_or_empty(&(uParam0->f_16)))
	{
		if (!cancel_music_event(&(uParam0->f_16)))
		{
		}
	}
	if (!is_string_null_or_empty(&(uParam0->f_20)))
	{
		if (!cancel_music_event(&(uParam0->f_20)))
		{
		}
	}
	if (!is_string_null_or_empty(&(uParam0->f_28)))
	{
		if (!cancel_music_event(&(uParam0->f_28)))
		{
		}
	}
	_text_database_delete("MGDUL");
	if (func_523(uParam1, 16777216))
	{
		func_527();
	}
	set_player_forced_aim(player_id(), false, 0, -1, false);
	_0x4d5c9cc7e7e23e09();
	func_528(uParam1, 9);
}

int func_188(bool bParam0)
{
	if (is_entity_dead(Global_35))
	{
		return 0;
	}
	if (is_entity_dead(&(uLocal_121[0])))
	{
		return 0;
	}
	if (bParam0)
	{
		if (!is_entity_dead(Global_35))
		{
			if (!does_group_exist(iLocal_36))
			{
				iLocal_36 = create_group(2);
				set_ped_as_group_leader(&(uLocal_121[0]), iLocal_36, false);
				set_group_formation(iLocal_36, 5);
				add_custom_formation_location(iLocal_36, 2f, -1f, 0f, 0);
				_0x9bbeaf8b0c007f1e(&(uLocal_121[0]), 0);
				set_ped_config_flag(&(uLocal_121[0]), 279, true);
				_0x154b7e841ac7412f(iLocal_36, 1);
				_0xac22aa6df4d1c1de(get_player_index(), &(uLocal_121[0]), -1082130432, -1082130432, 3, 3, 0);
				_0x40c3524d4ed83554(iLocal_36, 1);
				_0xdd33a82352c4652f(player_id(), &(uLocal_121[0]), 1);
			}
		}
	}
	else if (_0x2009f8ab7a5e9d6d(get_player_index()))
	{
		remove_ped_from_group(&(uLocal_121[0]));
		remove_group(iLocal_36);
		_0x12e09e278c6c29b7(get_player_index());
	}
	return 1;
}

void func_189(int iParam0, int iParam1, bool bParam2)
{
	if (!func_529(iParam0))
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

void func_190()
{
	iVar0 = 0;
	while (iVar0 <= (80 - 1))
	{
		if (_does_volume_exist(&(iLocal_228[iVar0])))
		{
			if (iVar0 == 22 || iVar0 == 23)
			{
				if (_0xde0ea444735c1368(&(iLocal_228[iVar0])))
				{
					_0x2c87c3e1c7b96ee2(&(iLocal_228[iVar0]));
				}
			}
		}
		iVar0++;
	}
}

void func_191()
{
	iVar0 = 0;
	while (iVar0 <= (80 - 1))
	{
		if (_does_volume_exist(&(iLocal_228[iVar0])))
		{
			_0xd17672447692478e(&(iLocal_228[iVar0]), 0);
		}
		iVar0++;
	}
}

void func_192(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_193()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_194()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_195(int iParam0, int iParam1)
{
	if (!func_530(iParam0))
	{
		return;
	}
	iVar0 = func_531();
	if (iParam1 > iVar0)
	{
		iParam1 = iVar0;
	}
	_set_max_wanted_level_2(iVar0);
	if (iParam0 == func_532())
	{
		_set_bounty_for_player(player_id(), iParam1);
	}
	if (Global_1572887->f_12 == -1)
	{
		if (&Global_40.f_358[iParam0] != iParam1)
		{
			func_533(iParam0, iParam1);
			func_534(iParam0);
		}
		Global_40.f_358[iParam0] = iParam1;
		if (!func_535(iParam0, 4))
		{
			if (&Global_40.f_358[iParam0] >= get_wanted_level_threshold(1))
			{
				func_536(iParam0, 1);
			}
		}
		else if (&Global_40.f_358[iParam0] == 0)
		{
			func_536(iParam0, 0);
		}
		return;
	}
	Global_1058888->f_42266[iParam0] = iParam1;
}

void func_196()
{
	func_520(&uLocal_553);
	func_520(&uLocal_556);
	func_520(&uLocal_565);
	func_520(&uLocal_559);
	func_520(&uLocal_562);
	func_537(&vLocal_568);
	func_537(&vLocal_594);
	func_537(&vLocal_640);
	func_537(&vLocal_650);
	func_537(&vLocal_660);
	func_537(&vLocal_676);
	func_537(&vLocal_689);
	func_537(&vLocal_696);
	func_537(&vLocal_703);
	func_537(&vLocal_717);
	func_537(&vLocal_724);
	func_537(&uLocal_578);
	func_520(&uLocal_741);
	func_520(&uLocal_744);
}

void func_197(char[4] cParam0)
{
	if (func_28(cParam0) == 0)
	{
	}
	func_214(cParam0, &(uLocal_121[0]), 1);
	func_218(&iLocal_48);
	func_538(&iLocal_49);
	func_538(&uLocal_53);
	func_538(&iLocal_59);
	func_538(&uLocal_64);
	func_538(&uLocal_67);
	func_538(&uLocal_70);
	func_538(&uLocal_76);
	func_538(&uLocal_79);
}

void func_198(var uParam0, int iParam1, bool bParam2)
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

void func_199(int iParam0)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	clear_ped_non_creation_area();
	_0xa1cfb35069d23c23(iParam0);
	_0x74c2b3dc0b294102(iParam0);
}

void func_200(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (80 - 1))
	{
		if (_does_volume_exist(&(iLocal_228[iVar0])))
		{
			_delete_volume(&(iLocal_228[iVar0]));
		}
		iVar0++;
	}
}

void func_201(char[4] cParam0)
{
	if (func_28(cParam0) == 0)
	{
	}
	func_539();
}

void func_202(int iParam0)
{
	iVar0 = func_540(iParam0, 1);
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

void func_203()
{
	iVar0 = 0;
	while (iVar0 <= (6 - 1))
	{
		func_541(iVar0);
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		func_542(iVar0);
		iVar0++;
	}
	if (_0x91a5f9cbebb9d936(uLocal_38))
	{
		remove_scenario_blocking_area(uLocal_38, false);
	}
}

void func_204(char[4] cParam0)
{
	if (func_28(cParam0) == 0)
	{
		func_543(&iLocal_223, 1);
		func_543(&iLocal_224, 1);
		func_543(&iLocal_225, 1);
	}
	else
	{
		func_543(&iLocal_223, 0);
		func_543(&iLocal_224, 0);
		func_543(&iLocal_225, 0);
	}
}

bool func_205(int iParam0)
{
	if (!func_544(iParam0))
	{
		return false;
	}
	if (!func_546(func_545(iParam0)))
	{
		return true;
	}
	if (!_0x800df3fc913355f3(func_547(iParam0)))
	{
		return false;
	}
	_0x4f81ead1de8fa19b(func_547(iParam0));
	return true;
}

void func_206()
{
	iVar0 = 0;
	while (iVar0 <= (15 - 1))
	{
		func_216(&(iLocal_912[iVar0]));
		iVar0++;
	}
}

void func_207()
{
	iVar0 = 0;
	while (iVar0 <= (24 - 1))
	{
		func_548(iVar0);
		iVar0++;
	}
}

void func_208(int iParam0)
{
	func_549(&(Global_1310750->f_16109), iParam0);
}

void func_209(int iParam0)
{
	Global_1934182->f_74 = (Global_1934182->f_74 - (Global_1934182->f_74 && iParam0));
}

void func_210()
{
	iVar0 = 0;
	while (iVar0 <= (8 - 1))
	{
		if (_is_base_a_cover_point(&(iLocal_342[iVar0])))
		{
			remove_cover_point(&(iLocal_342[iVar0]));
		}
		iVar0++;
	}
}

void func_211()
{
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		remove_shocking_event(&(iLocal_521[iVar0]));
		iVar0++;
	}
}

void func_212(var uParam0, bool bParam1)
{
	if (!func_370((*Global_1835011)[14]->f_1, 1))
	{
		func_550(559);
		func_550(560);
		func_550(562);
		func_550(564);
		func_550(565);
	}
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (does_entity_exist(&(uParam0->f_2[iVar0])))
		{
			if (!is_entity_dead(&(uParam0->f_2[iVar0])))
			{
				if (_0x8d913e493bafe0a3(*uParam0) && _0x9e13acc38ba8f9c3(*uParam0, &(uParam0->f_2[iVar0])))
				{
					_0x408d1149c5e39c1e(*uParam0, &(uParam0->f_2[iVar0]));
				}
				if (&uParam0->f_23[iVar0] != 14)
				{
					if (!bParam1)
					{
						if (!func_434(&(uParam0->f_2[iVar0]), 1139527981))
						{
							task_animal_unalerted(&(uParam0->f_2[iVar0]), -1, 0, 1, 1);
						}
					}
					else
					{
						_task_smart_flee_style_ped(&(uParam0->f_2[iVar0]), Global_35, 4, 0, -1082130432, -1, 0);
					}
				}
				set_ped_keep_task(&(uParam0->f_2[iVar0]), true);
			}
			func_551(&(uParam0->f_2[iVar0]), 1088421888, 1, 0);
			sVar1 = func_552(uParam0);
			_0xfca8fb9e15fa80d3(&(uParam0->f_2[iVar0]), get_hash_key(sVar1));
			set_ped_as_no_longer_needed(uParam0->f_2[iVar0]);
		}
		uParam0->f_23[iVar0] = 3;
		func_218(uParam0->f_358[iVar0]);
		iVar0++;
	}
	if (does_group_exist(uParam0->f_380))
	{
		remove_group(uParam0->f_380);
	}
	if (_does_volume_exist(uParam0->f_444))
	{
		_0xa1cfb35069d23c23(uParam0->f_444);
		_0x74c2b3dc0b294102(uParam0->f_444);
		_delete_volume(uParam0->f_444);
	}
	if (_does_volume_exist(uParam0->f_446))
	{
		_0xa1cfb35069d23c23(uParam0->f_446);
		_delete_volume(uParam0->f_446);
	}
	if (_does_volume_exist(uParam0->f_445))
	{
		_delete_volume(uParam0->f_445);
	}
	if (_does_volume_exist(uParam0->f_694))
	{
		_delete_volume(uParam0->f_694);
	}
	func_553(uParam0);
	func_554(uParam0);
	_0xfc6ecb9170145ece();
	if (_text_database_has_loaded("HERDAUD"))
	{
		_text_database_delete("HERDAUD");
	}
	if (_text_database_has_loaded("RUST"))
	{
		_text_database_delete("RUST");
	}
	if (!_0x8d913e493bafe0a3(*uParam0))
	{
		return;
	}
	_0x67a43ea3f6fe0076(*uParam0);
	uParam0->f_189 = 0;
	_0xe0961aed72642b80(*uParam0);
}

void func_213(int iParam0, bool bParam1)
{
	if (!func_529(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_555(&((*Global_1360165)[iParam0]->f_12), 16))
		{
			func_556(iParam0, 16, 0);
		}
	}
	func_556(iParam0, 1, bParam1);
}

void func_214(char[4] cParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	bVar0 = (is_entity_a_ped(iParam1) && func_557(get_ped_index_from_entity_index(iParam1)));
	if (bVar0)
	{
		iVar1 = func_558(get_ped_index_from_entity_index(iParam1));
	}
	if (is_entity_a_ped(iParam1))
	{
		iVar2 = get_ped_index_from_entity_index(iParam1);
		if (bVar0)
		{
			func_559(iVar1);
			if (does_blip_exist(get_blip_from_entity(iVar2)))
			{
				_set_blip_flash_style(get_blip_from_entity(iVar2), -546708623);
				_set_blip_flash_style(get_blip_from_entity(iVar2), 231194138);
			}
		}
		else if (func_560(cParam0, iParam1) && does_blip_exist(get_blip_from_entity(iParam1)))
		{
			_set_blip_flash_style(get_blip_from_entity(iParam1), -546708623);
			_set_blip_flash_style(get_blip_from_entity(iParam1), 231194138);
		}
		else
		{
			func_561(iParam1);
		}
	}
	if (func_560(cParam0, iParam1))
	{
		func_562(cParam0, iParam1, 1024);
		if (bParam2)
		{
			func_563(cParam0, iParam1, 128);
		}
		else
		{
			func_562(cParam0, iParam1, 128);
		}
		if (func_564(cParam0, iParam1, &iVar3))
		{
			func_565(cParam0->f_5423[iVar3]);
		}
	}
	if (bVar0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_566(iVar1);
	}
}

bool func_215(int iParam0)
{
	return iParam0 != 0;
}

void func_216(int iParam0)
{
	if (func_567(iParam0) && func_568())
	{
		remove_door_from_system(iParam0);
	}
}

void func_217(int* iParam0, bool bParam1)
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

void func_218(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

int func_219(int iParam0)
{
	if (!func_290(iParam0))
	{
		return 0;
	}
	if (!func_569(iParam0, &iVar1, &iVar2, 0, 0))
	{
		return 0;
	}
	iVar3 = 1;
	iVar0 = 0;
	while (iVar0 < (iVar2 - iVar1) + 1)
	{
		if (!func_205((iVar1 + iVar0)))
		{
			iVar3 = 0;
		}
		iVar0++;
	}
	return iVar3;
}

void func_220(int iParam0)
{
	iParam0 = func_309(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_310(iParam0, 64);
	func_311();
}

void func_221(bool bParam0)
{
	if (bParam0)
	{
		create_model_hide_excluding_script_objects(-239.76f, 770.505f, 118.144f, 0.5f, -1174489568, false);
		create_model_hide_excluding_script_objects(-242.08f, 768.443f, 117.854f, 0.5f, -1883578190, false);
		create_model_hide_excluding_script_objects(-243.18f, 767.808f, 117.068f, 0.5f, -1443906703, false);
		create_model_hide_excluding_script_objects(-241.49f, 768.535f, 117.077f, 0.5f, -1443906703, false);
		create_model_hide_excluding_script_objects(-243.3f, 770.18f, 117.076f, 0.5f, -1443906703, false);
		create_model_hide_excluding_script_objects(-242.688f, 771.723f, 117.077f, 0.5f, -1443906703, false);
		create_model_hide_excluding_script_objects(-242.479f, 767.778f, 117.854f, 0.5f, 506543199, false);
		create_model_hide_excluding_script_objects(-239.593f, 769.163f, 118.14f, 0.5f, -1755488373, false);
	}
	else
	{
		remove_model_hide(-239.76f, 770.505f, 118.144f, 0.5f, -1174489568, 0);
		remove_model_hide(-242.08f, 768.443f, 117.854f, 0.5f, -1883578190, 0);
		remove_model_hide(-243.18f, 767.808f, 117.068f, 0.5f, -1443906703, 0);
		remove_model_hide(-241.49f, 768.535f, 117.077f, 0.5f, -1443906703, 0);
		remove_model_hide(-243.3f, 770.18f, 117.076f, 0.5f, -1443906703, 0);
		remove_model_hide(-242.688f, 771.723f, 117.077f, 0.5f, -1443906703, 0);
		remove_model_hide(-242.479f, 767.778f, 117.854f, 0.5f, 506543199, 0);
		remove_model_hide(-239.593f, 769.163f, 118.14f, 0.5f, -1755488373, 0);
	}
}

bool func_222(int iParam0, int iParam1)
{
	return func_513(Global_1935369->f_5[iParam0]->f_7, iParam1);
}

void func_223(int iParam0, int iParam1)
{
	func_570(&(Global_1935369->f_5[iParam0]->f_7), iParam1);
}

void func_224(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_225(int iParam0)
{
	iVar0 = func_540(iParam0, 1);
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

void func_226(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_202(1497516462);
			func_225(2016141805);
			func_225(1010885152);
			func_225(-502324015);
			break;
		case 2016141805:
			func_225(1497516462);
			func_202(2016141805);
			func_225(1010885152);
			func_225(-502324015);
			break;
		case 1010885152:
			func_225(1497516462);
			func_225(2016141805);
			func_202(1010885152);
			func_225(-502324015);
			break;
		case -502324015:
			func_225(1497516462);
			func_225(2016141805);
			func_225(1010885152);
			func_202(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_225(-538889627);
			func_225(-538880323);
			func_225(-1056767524);
			func_202(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_571();
			func_202(iParam0);
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
			func_572();
			func_202(iParam0);
			break;
		case 2019386373:
			func_225(-664252410);
			func_225(2109952320);
			func_202(2019386373);
			break;
		case -664252410:
			func_225(2019386373);
			func_225(2109952320);
			func_202(-664252410);
			break;
		case 2109952320:
			func_225(2019386373);
			func_225(-664252410);
			func_202(2109952320);
			break;
		case -1674179981:
			func_225(-1835851517);
			func_225(-1838352012);
			func_202(-1674179981);
			break;
		case -1835851517:
			func_225(-1674179981);
			func_225(-1838352012);
			func_202(-1835851517);
			break;
		case -1838352012:
			func_225(-1674179981);
			func_225(-1835851517);
			func_202(-1838352012);
			break;
		case -1717960576:
			func_225(210001842);
			func_202(-1717960576);
			break;
		case 210001842:
			func_225(-1717960576);
			func_202(210001842);
			break;
		case -150493654:
			func_225(-1271608261);
			func_225(1846061697);
			func_225(-1145519186);
			func_202(-150493654);
			break;
		case -1271608261:
			func_225(-150493654);
			func_225(1846061697);
			func_225(-1145519186);
			func_202(-1271608261);
			break;
		case 1846061697:
			func_225(-150493654);
			func_225(-1271608261);
			func_225(-1145519186);
			func_202(1846061697);
			break;
		case -1145519186:
			func_225(-150493654);
			func_225(-1271608261);
			func_225(1846061697);
			func_202(-1145519186);
			break;
		case 1766284049:
			func_225(280705402);
			func_225(1926308480);
			func_202(1766284049);
			break;
		case 280705402:
			func_225(1766284049);
			func_225(1926308480);
			func_202(280705402);
			break;
		case 1926308480:
			func_225(1766284049);
			func_225(280705402);
			func_202(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_225(439465264);
				func_202(1609506757);
			}
			else
			{
				func_225(1609506757);
				func_225(439465264);
			}
			break;
		case 439465264:
			if (func_573(1609506757))
			{
				if (bParam1)
				{
					func_202(439465264);
				}
				else
				{
					func_225(439465264);
				}
			}
			break;
		case 1822001510:
			func_225(-1612662716);
			func_202(1822001510);
			break;
		case -1612662716:
			func_225(1822001510);
			func_202(-1612662716);
			break;
		case 1306158345:
			func_225(1952610440);
			func_225(-223469678);
			func_225(-404698347);
			func_225(1517904467);
			func_202(1306158345);
			break;
		case 1952610440:
			func_225(1306158345);
			func_225(-223469678);
			func_225(-404698347);
			func_225(1517904467);
			func_202(1952610440);
			break;
		case -223469678:
			func_225(1306158345);
			func_225(1952610440);
			func_225(-404698347);
			func_225(1517904467);
			func_202(-223469678);
			break;
		case -404698347:
			func_225(1306158345);
			func_225(1952610440);
			func_225(-223469678);
			func_225(1517904467);
			func_202(-404698347);
			break;
		case 1517904467:
			func_225(1306158345);
			func_225(1952610440);
			func_225(-223469678);
			func_225(-404698347);
			func_202(1517904467);
			break;
		case 1376646519:
			func_225(931649776);
			func_225(-434590080);
			func_225(1743048395);
			func_225(449774763);
			func_202(1376646519);
			break;
		case 931649776:
			func_225(1376646519);
			func_225(-434590080);
			func_225(1743048395);
			func_225(449774763);
			func_202(931649776);
			break;
		case -434590080:
			func_225(1376646519);
			func_225(931649776);
			func_225(1743048395);
			func_225(449774763);
			func_202(-434590080);
			break;
		case 1743048395:
			func_225(1376646519);
			func_225(931649776);
			func_225(-434590080);
			func_225(449774763);
			func_202(1743048395);
			break;
		case 449774763:
			func_225(1376646519);
			func_225(931649776);
			func_225(-434590080);
			func_225(1743048395);
			func_202(449774763);
			break;
		case -1414537028:
			func_225(38162571);
			func_225(1350391819);
			func_225(54073871);
			func_202(-1414537028);
			break;
		case 38162571:
			func_225(-1414537028);
			func_225(1350391819);
			func_225(54073871);
			func_202(38162571);
			break;
		case 1350391819:
			func_225(-1414537028);
			func_225(38162571);
			func_225(54073871);
			func_202(1350391819);
			break;
		case 54073871:
			func_225(-1414537028);
			func_225(38162571);
			func_225(1350391819);
			func_202(54073871);
			break;
		case 198200492:
			func_202(198200492);
			func_225(-1124061431);
			func_225(52706132);
			func_225(-259123672);
			break;
		case -1124061431:
			func_225(198200492);
			func_202(-1124061431);
			func_225(52706132);
			func_225(-259123672);
			break;
		case 52706132:
			func_225(198200492);
			func_225(-1124061431);
			func_202(52706132);
			func_225(-259123672);
			break;
		case -259123672:
			func_225(198200492);
			func_225(-1124061431);
			func_225(52706132);
			func_202(-259123672);
			break;
		case -919512195:
			func_202(-919512195);
			func_225(-1925798111);
			func_225(420709909);
			func_225(1703426636);
			break;
		case -1925798111:
			func_202(-1925798111);
			func_225(-919512195);
			func_225(420709909);
			func_225(1703426636);
			break;
		case 420709909:
			func_202(420709909);
			func_225(-919512195);
			func_225(-1925798111);
			func_225(1703426636);
			break;
		case 1703426636:
			func_202(1703426636);
			func_225(-919512195);
			func_225(-1925798111);
			func_225(420709909);
			break;
		case -1223121209:
			func_202(-1223121209);
			func_225(630808005);
			break;
		case 630808005:
			func_202(630808005);
			func_225(-1223121209);
			break;
		case 1453909576:
			func_202(1453909576);
			func_225(1643531967);
			break;
		case 1643531967:
			func_202(1643531967);
			func_225(1453909576);
			break;
		case 0:
			func_202(0);
			func_225(473295046);
			func_225(-1738165526);
			break;
		case 473295046:
			func_202(473295046);
			func_225(0);
			func_225(-1738165526);
			break;
		case -1738165526:
			func_202(-1738165526);
			func_225(0);
			func_225(473295046);
			break;
		case 932909855:
			func_202(932909855);
			func_225(2051822093);
			break;
		case 2051822093:
			func_202(2051822093);
			func_225(932909855);
			break;
		case 405586984:
			func_202(405586984);
			func_225(1509509592);
			func_225(-959357075);
			func_225(-1311865656);
			break;
		case 1509509592:
			func_202(1509509592);
			func_225(405586984);
			func_225(-959357075);
			func_225(-1311865656);
			break;
		case -959357075:
			func_202(-959357075);
			func_225(1509509592);
			func_225(405586984);
			func_225(-1311865656);
			break;
		case -1311865656:
			func_202(-1311865656);
			func_225(1509509592);
			func_225(-959357075);
			func_225(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_202(-524145696);
			}
			else
			{
				func_225(-524145696);
			}
			func_225(1626481264);
			func_225(282809459);
			break;
		case 282809459:
			func_202(282809459);
			func_225(1626481264);
			func_225(-524145696);
			break;
		case 1626481264:
			func_202(1626481264);
			func_225(-524145696);
			func_225(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_202(885203519);
			}
			else
			{
				func_225(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_202(-1080627546);
			}
			else
			{
				func_225(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_573(iParam0))
				{
					func_202(iParam0);
				}
			}
			else if (func_573(iParam0))
			{
				func_225(iParam0);
			}
			break;
	}
}

void func_227(int iParam0, int iParam1, bool bParam2)
{
	func_574(iParam0, 0, 0);
	if (func_567(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

void func_228(int iParam0, bool bParam1)
{
	if (is_entity_dead(iParam0))
	{
	}
	_0xaac0ee3b4999abb5(iParam0, 0);
	if (is_ped_a_player(iParam0))
	{
		if (_0xd1f6b912785bfd35(player_id()))
		{
			_0x908d4b72854c8f62(player_id());
		}
		set_ped_config_flag(iParam0, 43, false);
		_0xc67a4910425f11f1(player_id(), "WalkAndTalk");
	}
	_0x9e66708b2b41f14a(iParam0, -1);
	if (is_ped_a_player(iParam0))
	{
		_0xc4873b053054c04b(player_id(), 0, 1050253722, 1067030938, 0, 0, -1082130432, -1082130432);
	}
	else
	{
		_0x15f4732c357b1d6d(iParam0, player_id(), 6);
	}
	if (bParam1)
	{
		clear_ped_secondary_task(iParam0);
	}
}

void func_229(int iParam0, bool bParam1)
{
	if (is_entity_dead(iParam0))
	{
	}
	_0xaac0ee3b4999abb5(iParam0, 0);
	_0x9e66708b2b41f14a(iParam0, -1);
	if (bParam1)
	{
		clear_ped_secondary_task(iParam0);
	}
	if (is_ped_a_player(iParam0))
	{
		set_ped_config_flag(iParam0, 43, false);
	}
	else
	{
		_0x15f4732c357b1d6d(iParam0, player_id(), 6);
	}
}

void func_230(char* sParam0)
{
	if (_0x927b810e43e99932(sParam0))
	{
		_0x0a5a4f1979abb40e(sParam0);
	}
	_0x798be43c9393632b(sParam0);
}

int func_231(int iParam0)
{
	return iParam0;
}

void func_232(int iParam0)
{
	if (!func_575(iParam0))
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

bool func_233(int iParam0)
{
	return (iParam0 > -1 && iParam0 <= 80);
}

bool func_234(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return (iParam0 > 0 && iParam0 < 771);
	}
	return (iParam0 > 0 && iParam0 < 20001);
}

bool func_235(int iParam0)
{
	iVar0 = func_339(iParam0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_236(int iParam0)
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
		iVar0 = func_238(iParam0);
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

int func_237(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_5;
	}
	return Global_1058888->f_498[iParam0]->f_1;
}

int func_238(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_1;
	}
	iVar0 = func_576(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1058888->f_40501.f_1[iVar0]->f_1;
}

int func_239(int iParam0)
{
	if (!func_234(iParam0))
	{
		return 0;
	}
	return func_578(func_577(iParam0));
}

void func_240(int iParam0, int iParam1, int iParam2)
{
	vVar0.f_1 = 0;
	vVar0.x = 0;
	vVar0.f_2 = 0;
	if (func_26() == 0)
	{
		vVar0.x = Global_265238->f_79565.f_208.f_17;
	}
	_0xd5910ecf81a2278c(iParam0, iParam1, iParam2, &vVar0);
}

bool func_241(int iParam0, bool bParam1, bool bParam2)
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
		if (func_579())
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
		iVar0 = func_315(&(Global_1898164->f_1[0]));
		if (func_316(iVar0) && func_344((*Global_1347702)[iVar0]->f_12, 131072))
		{
			return false;
		}
	}
	if (iParam0 == 0 && func_234(&(Global_1898164->f_1[0])))
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

bool func_242(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_243(int iParam0)
{
	switch (func_239(iParam0))
	{
		case 1:
			iVar0 = func_315(iParam0);
			return func_580(iVar0);
		case 8:
			iVar1 = func_315(iParam0);
			if (func_344((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_581(iVar1);
			}
			break;
	}
	return -1;
}

void func_244(bool bParam0)
{
	if (Global_1898077->f_1 == 0 && !bParam0)
	{
		return;
	}
	iVar0 = 0;
	if (func_26() != -1)
	{
		iVar0 = 1;
	}
	if ((Global_1898077->f_2 == 4 && Global_1898077->f_12 != Global_1898077->f_13) && !bParam0)
	{
		Global_1898077->f_1 = Global_1898077->f_2;
		Global_1898077->f_12 = Global_1898077->f_13;
		func_582(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_583();
		Global_1898077->f_9 = func_584(Global_1894899->f_2);
		func_585(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_245()
{
	if (!func_370((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_370((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_370((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_370((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_370((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_370((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_370((*Global_1835011)[67]->f_1, 1))
	{
		return 7;
	}
	else
	{
		return 8;
	}
	return -1;
}

void func_246(int iParam0, int iParam1)
{
	if (!func_234(iParam0))
	{
		return;
	}
	func_586(iParam0, iParam1);
}

int func_247(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_248(bool bParam0)
{
	if (!bParam0 && func_573(373691918))
	{
		return 0;
	}
	_0xc61edebf16cd9668(752193127, bParam0, 0);
	return 1;
}

void func_249(int iParam0)
{
	Global_1898164 = (Global_1898164 || iParam0);
}

void func_250(int iParam0, bool bParam1)
{
	if (func_26() != -1)
	{
		return;
	}
	if (func_247(0) != iParam0)
	{
		return;
	}
	if (func_587(iParam0))
	{
		if (bParam1)
		{
			func_588(-525676072);
		}
		else
		{
			func_589(-525676072);
		}
	}
}

int func_251(int iParam0)
{
	return func_591(func_590(iParam0));
}

void func_252(int iParam0)
{
	Global_1572864->f_12 = iParam0;
}

void func_253(int iParam0)
{
	Global_1572864->f_11 = iParam0;
}

void func_254(int iParam0)
{
	Global_1572864->f_15 = iParam0;
}

void func_255(float fParam0)
{
	Global_1572864->f_22 = fParam0;
}

void func_256()
{
	if (func_16(Global_43801))
	{
		func_17(&Global_43801, 0, 0);
	}
}

bool func_257()
{
	return func_592(_0xc17f69e1418cd11f(3));
}

bool func_258()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_259(int iParam0)
{
	iParam0 = func_309(iParam0);
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

int func_260(int iParam0, int iParam1)
{
	if (!func_593(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_594(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
		}
		iVar0++;
	}
	return 1;
}

bool func_261(char* sParam0, int iParam1)
{
	return (sParam0->f_8 && iParam1) != 0;
}

bool func_262(char* sParam0, bool bParam1)
{
	if (func_261(sParam0, 1))
	{
		return false;
	}
	if (sParam0->f_9 == 15 || sParam0->f_9 == 16)
	{
		prepare_music_event(sParam0);
		func_595(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_595(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_595(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_595(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_595(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_595(sParam0, 1);
		return true;
	}
	func_595(sParam0, 1);
	return false;
}

bool func_263(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_264(float fParam0)
{
	func_596(fParam0, 0f);
}

int func_265(float fParam0)
{
	if (!func_32(fParam0))
	{
		return round((fParam0->f_1 * 1000f));
	}
	if (func_597(fParam0))
	{
		return round((fParam0->f_2 * 1000f));
	}
	return (func_598() - round((fParam0->f_1 * 1000f)));
}

void func_266(bool bParam0, bool bParam1)
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
		func_599(0);
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

struct<4> func_267(int iParam0, int iParam1)
{
	return func_600(iParam0, iParam1);
}

void func_268(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

void func_269(var uParam0, vector3 vParam1, float fParam4)
{
	Var0 = { vParam1 };
	Var0.f_3 = fParam4;
	func_268(uParam0, Var0);
}

int func_270(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_138(iParam1)]->f_9;
}

void func_271(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_239(iParam0) == 1)
	{
		cVar0 = func_116(func_601(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_239(iParam0) == 8)
	{
		cVar0 = func_603(func_602(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_604(1, 1);
	func_605(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_70(0);
	func_71(0);
	func_255(1f);
}

void func_272(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_595(sParam0, 2);
}

void func_273(int iParam0, int iParam1)
{
	if (!func_606(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_274(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_275()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_276()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_277()
{
	return func_607(get_id_of_this_thread());
}

void func_278(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_608(bParam0);
}

void func_279()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_280(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_281()
{
	return (Global_1894899 & 1 != 0 && func_83() != -1);
}

void func_282(var uParam0)
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

void func_283(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_284(int iParam0)
{
	if (!func_609(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_285()
{
	func_610(64);
}

void func_286()
{
	Global_1310750->f_16072 = 0;
}

bool func_287()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_288(int iParam0)
{
	return func_289(23, iParam0);
}

bool func_289(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_611(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_612())
	{
		return func_611(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_611(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_290(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_291(int iParam0)
{
	if (!func_290(iParam0))
	{
		return false;
	}
	return func_294(iParam0, 8);
}

void func_292(int iParam0, int iParam1)
{
	if (!func_290(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_293(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_294(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_295(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_296()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_294(iVar1, 1))
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
				if (func_26() == -1)
				{
					force_cleanup_for_thread_with_this_id((*Global_1888801)[iVar1]->f_9, 523);
				}
				else if (!_0x30bed53646c86d11((*Global_1888801)[iVar1]->f_9))
				{
					_0x7de4643157ad646c((*Global_1888801)[iVar1]->f_9);
				}
			}
			else if (func_294(iVar1, 2))
			{
				if (func_26() == -1)
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
				func_331(iVar1, 11);
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

bool func_297(var uParam0)
{
	if (func_613(uParam0, 1) || func_613(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_298(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_299(struct<2> Param0)
{
	if (!func_298(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_300(struct<2> Param0, int iParam2)
{
	if (!func_298(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_301(int iParam0)
{
	if (!func_614(iParam0))
	{
		return false;
	}
	if (!func_615(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_302(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_614(iParam1))
	{
		return;
	}
	if (!func_301(iParam1))
	{
		return;
	}
	if (bParam5 && !bParam6)
	{
		if (func_28(cParam0) != 0 && func_160(cParam0) >= 2)
		{
			bParam5 = false;
		}
	}
	if (does_entity_exist(iParam2))
	{
		func_616(cParam0, iParam2);
		func_617(iParam2);
	}
	func_559(iParam1);
	func_618(iParam1, 0);
	func_619(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_303(char[4] cParam0)
{
	return cParam0->f_5411;
}

int func_304(int iParam0)
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

int func_305(int iParam0)
{
	iParam0 = func_309(iParam0);
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

void func_306(int iParam0)
{
	iParam0 = func_309(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_620(iParam0);
	if (func_621(iParam0))
	{
		if (func_305(iParam0) != iVar0)
		{
			return;
		}
	}
	func_622(iParam0);
	func_623(iParam0);
	iVar1 = func_259(iParam0);
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
			if (!func_624(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_625(iParam0);
	}
}

void func_307(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_626(iParam0))
	{
		return;
	}
	iVar0 = func_304(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_65(iVar0);
	func_620(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_305(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_621(iVar0))
		{
			return;
		}
	}
	func_627(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_26() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_308(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 - (cParam0->f_5308 && iParam1));
}

int func_309(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_310(int iParam0, int iParam1)
{
	iParam0 = func_309(iParam0);
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

void func_311()
{
	if (func_628(0))
	{
		func_629(0);
	}
	if (func_628(1))
	{
		func_629(1);
	}
	if (func_628(5))
	{
		func_629(5);
	}
	if (func_628(6))
	{
		func_622(6);
	}
}

struct<2> func_312(int iParam0)
{
	MemCopy(&Var0, {func_116(iParam0)}, 2);
	return Var0;
}

struct<2> func_313(int iParam0)
{
	Var0 = { func_312(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_314(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_315(int iParam0)
{
	if (!func_234(iParam0))
	{
		return -1;
	}
	return func_630(func_577(iParam0));
}

bool func_316(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_317(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_318(int iParam0, bool bParam1)
{
	iVar0 = func_631(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_632(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_632(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_632(iParam0)))
			{
				_uilog_remove_entry(2, func_632(iParam0));
			}
		}
	}
	func_633(iParam0, 4);
	func_633(iParam0, 8);
	func_633(iParam0, 16);
}

void func_319(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_316(iVar0))
		{
			if (func_317(iVar0, 4))
			{
				func_320(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_320(int iParam0, bool bParam1)
{
	if (!func_317(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_631(iParam0), func_632(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_631(iParam0), func_632(iParam0), 2, "");
		func_634(iParam0, 16);
	}
	else
	{
		if (func_317(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_631(iParam0), func_632(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_631(iParam0), func_632(iParam0), 0, "");
		}
		func_633(iParam0, 16);
	}
}

void func_321(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_317(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_631(iParam0), func_632(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_317(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_631(iParam0), func_632(iParam0), 1, "");
		}
		func_634(iParam0, 8);
	}
	else
	{
		if (func_317(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_631(iParam0), func_632(iParam0), 0, "");
		}
		func_633(iParam0, 8);
	}
}

int func_322(char[4] cParam0)
{
	if (func_126(cParam0, 8388608))
	{
		return 2;
	}
	if (func_126(cParam0, 4194304))
	{
		return 4;
	}
	if (func_126(cParam0, 4))
	{
		return 1;
	}
	if (func_134(cParam0, 1) && func_88(32768))
	{
		return 3;
	}
	return 0;
}

void func_323(int iParam0, int iParam1)
{
	if (func_628(0))
	{
		if (func_635(0))
		{
			func_636(0);
		}
	}
	if (func_628(1))
	{
		if (func_635(1))
		{
			func_636(1);
		}
	}
}

void func_324(char[4] cParam0)
{
	if (func_126(cParam0, 1))
	{
		return;
	}
	if (is_entity_dead(cParam0->f_5411))
	{
		if (func_126(cParam0, 16))
		{
			func_64(cParam0, 0);
		}
		if (func_475(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_325(char[4] cParam0)
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

void func_326(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_637(iParam0, sParam4, iParam5);
	}
	func_638(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_327(int iParam0)
{
	if (!func_290(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_328()
{
	return &Global_1899515;
}

void func_329(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_330(int iParam0, int iParam1)
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

void func_331(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_332(int iParam0)
{
	if (!func_290(iParam0))
	{
		return;
	}
	if (func_639(iParam0))
	{
		func_640(iParam0);
	}
	else
	{
		func_641(iParam0);
	}
}

int func_333(int iParam0)
{
	if (func_642(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_334(int iParam0)
{
	if (func_643(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_335(int iParam0, int iParam1)
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

void func_336(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_644(Global_1310750[iVar0], iParam0))
		{
			if (!func_645(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_646(iVar0) < func_647(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_338(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_337(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_648();
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

void func_338(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_649(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_339(int iParam0)
{
	if (!func_234(iParam0))
	{
		return -1;
	}
	return func_238(iParam0);
}

void func_340(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_341(bool bParam0, int iParam1)
{
	if (!bParam0 && func_573(373691918))
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
	func_248(bParam0);
	return 1;
}

void func_342()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_614(iVar17))
		{
			iVar18 = func_650(iVar17);
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
	func_520(&(Global_1359489->f_55));
	if (func_651(1777191912, 1))
	{
		func_652(1777191912, 1, 0);
	}
}

void func_343(int iParam0)
{
	if (!func_234(iParam0))
	{
		return;
	}
	func_654(iParam0, (func_653(iParam0) + shift_left(1, 16)));
}

bool func_344(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_345()
{
	return func_655() > 0;
}

void func_346(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_656(-1032423150, iParam1);
			break;
		case 18:
			func_656(294066959, iParam1);
			func_656(-1925639563, iParam1);
			func_656(-378582304, iParam1);
			func_656(-338306437, iParam1);
			break;
		case 20:
			func_656(437270255, iParam1);
			break;
		case 2:
			func_656(-304000413, iParam1);
			func_656(-533612796, iParam1);
			func_656(48036954, iParam1);
			break;
		case 23:
			func_656(193108691, iParam1);
			func_656(491732588, iParam1);
			func_656(671962088, iParam1);
			func_657(1);
			break;
		case 16:
			func_656(-1836056650, iParam1);
			func_656(-754657922, iParam1);
			func_656(-1752355838, iParam1);
			func_656(-1375324510, iParam1);
			break;
		case 59:
			func_656(-514392105, iParam1);
			func_656(-822060246, iParam1);
			if (func_658(146))
			{
				func_656(1372748575, iParam1);
			}
			func_657(1);
			break;
		case 76:
			func_656(1991352213, iParam1);
			if (func_659() == 0)
			{
				func_656(1852488616, iParam1);
			}
			else
			{
				func_656(-9866350, iParam1);
			}
			break;
		case 44:
			func_656(863852599, iParam1);
			func_656(1228374935, iParam1);
			func_656(1517889050, iParam1);
			func_656(830657578, iParam1);
			func_656(1901354958, iParam1);
			break;
		case 46:
			func_656(-582805654, iParam1);
			func_656(250378940, iParam1);
			func_656(-2143265426, iParam1);
			break;
		case 17:
			func_656(-941494139, iParam1);
			func_656(1641489521, iParam1);
			break;
		case 19:
			func_656(-1829423531, iParam1);
			func_656(-1590504752, iParam1);
			func_656(1357221321, iParam1);
			break;
		case 21:
			func_656(-1037992610, iParam1);
			func_656(-1286414399, iParam1);
			func_657(0);
			break;
		case 15:
			func_656(-1014460309, iParam1);
			func_656(-1030502825, iParam1);
			break;
		case 33:
			func_656(479388090, iParam1);
			func_656(-1396342239, iParam1);
			func_656(-619618632, iParam1);
			break;
		case 34:
			func_656(1193561641, iParam1);
			break;
		case 64:
			func_656(1363960851, iParam1);
			break;
		case 60:
			func_656(-1232453926, iParam1);
			func_656(-882833584, iParam1);
			break;
		case 73:
			func_656(2023205767, iParam1);
			break;
		case 74:
			func_656(-2135286513, iParam1);
			if (func_659() == 0)
			{
				func_656(33799444, iParam1);
			}
			else
			{
				func_656(-161343203, iParam1);
			}
			break;
		case 8:
			func_656(841639693, iParam1);
			func_656(358952323, iParam1);
			break;
		case 36:
			func_656(852538149, iParam1);
			func_656(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_656(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_656(1116039310, iParam1);
			}
			break;
		case 27:
			func_656(107633428, iParam1);
			func_656(335902282, iParam1);
			func_656(575673055, iParam1);
			func_656(-425944207, iParam1);
			break;
		case 28:
			func_656(-1941530250, iParam1);
			func_656(1399269304, iParam1);
			func_656(1839684664, iParam1);
			func_656(923168503, iParam1);
			func_656(-1485078322, iParam1);
			break;
		case 29:
			func_656(574995900, iParam1);
			func_656(-1691275407, iParam1);
			func_656(-1725307861, iParam1);
			break;
		case 31:
			func_656(-2108383238, iParam1);
			func_656(-1321828931, iParam1);
			func_656(-1632118592, iParam1);
			func_656(334938948, iParam1);
			break;
		case 4:
			func_656(115823701, iParam1);
			func_656(-1896939736, iParam1);
			func_656(-1830746356, iParam1);
			func_656(-1235169781, iParam1);
			func_657(0);
			break;
		case 6:
			func_656(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_656(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_656(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_656(-384176140, iParam1);
			}
			break;
		case 25:
			func_656(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_656(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_656(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_656(-1374849484, iParam1);
			}
			break;
		case 48:
			func_656(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_656(217772674, iParam1);
			}
			else
			{
				func_656(2071798160, iParam1);
			}
			if (func_660(51))
			{
				func_656(-792802286, iParam1);
			}
			break;
		case 49:
			func_656(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_656(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_656(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_656(1402120602, iParam1);
			}
			break;
		case 58:
			func_656(-1661934591, iParam1);
			break;
		case 50:
			func_656(-1713759426, iParam1);
			break;
		case 52:
			func_656(-314799932, iParam1);
			func_656(-462260432, iParam1);
			func_656(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_656(345256028, iParam1);
				func_656(-1635084094, iParam1);
			}
			else
			{
				func_656(114267347, iParam1);
			}
			break;
		case 32:
			func_656(615304157, iParam1);
			break;
		case 47:
			func_656(415434835, iParam1);
			break;
		case 69:
			func_656(1373465877, iParam1);
			if (func_370((*Global_1347702)[9]->f_15, 1))
			{
				func_656(-2058273527, iParam1);
			}
			break;
		case 70:
			func_656(451334985, iParam1);
			if (func_659() == 0)
			{
				func_656(-224150200, iParam1);
			}
			else
			{
				func_656(289012628, iParam1);
			}
			break;
		case 71:
			if (func_659() == 0)
			{
				func_656(-41692120, iParam1);
			}
			else
			{
				func_656(1537840678, iParam1);
			}
			break;
		case 37:
			func_656(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_656(1842132550, iParam1);
			}
			else
			{
				func_656(-785735240, iParam1);
			}
			func_656(-1605690566, iParam1);
			break;
		case 13:
			func_656(-731367459, iParam1);
			func_656(224176585, iParam1);
			func_656(-14545580, iParam1);
			break;
		case 53:
			func_656(1095274522, iParam1);
			break;
		case 54:
			func_656(-572027988, iParam1);
			break;
		case 56:
			func_656(1339307101, iParam1);
			func_656(2102267732, iParam1);
			break;
		case 57:
			func_656(710102686, iParam1);
			break;
		case 22:
			func_656(-1754368482, iParam1);
			func_656(-2071408557, iParam1);
			break;
		case 12:
			func_656(-181334543, iParam1);
			break;
		case 0:
			func_656(-2134669864, iParam1);
			func_656(-548289709, iParam1);
			func_656(-911271922, iParam1);
			func_656(-604455775, iParam1);
			break;
		case 1:
			func_657(1);
			break;
		case 3:
			if (func_381())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_656(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_656(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_347()
{
	if (func_26() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 225514697)
	{
		return true;
	}
	return false;
}

void func_348(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_656(-145926707, iParam1);
			func_656(-604922090, iParam1);
			func_656(-848690769, iParam1);
			break;
		case 1:
			func_656(-1477631591, iParam1);
			break;
		case 2:
			func_656(76112544, iParam1);
			break;
		case 9:
			func_656(1396404308, iParam1);
			func_656(-1357381228, iParam1);
			if (func_370((*Global_1835011)[69]->f_1, 1))
			{
				func_656(1902679064, iParam1);
			}
			else
			{
				func_656(-2146422425, iParam1);
			}
			break;
		case 22:
			func_656(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_656(-1934184559, iParam1);
				func_656(1281755988, iParam1);
			}
			else
			{
				func_656(-1745220872, iParam1);
				func_656(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_656(-1641504538, iParam1);
				func_656(-988014485, iParam1);
			}
			else if (func_658(26))
			{
				func_656(-343043950, iParam1);
				func_656(-640062214, iParam1);
			}
			else
			{
				func_656(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_656(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_656(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_656(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_656(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_656(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_656(1301690984, iParam1);
				}
			}
			else
			{
				func_656(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_656(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_656(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_656(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_656(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_656(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_656(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_656(-754570528, iParam1);
			}
			else
			{
				func_656(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_656(-2072125821, iParam1);
			}
			else
			{
				func_656(270040030, iParam1);
			}
			break;
		case 37:
			func_656(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_656(-505314737, iParam1);
				func_656(-1853052860, iParam1);
			}
			else
			{
				func_656(-1975624994, iParam1);
				func_656(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_656(1690231002, iParam1);
			}
			else
			{
				func_656(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_656(1225386280, iParam1);
			}
			else if (func_658(54))
			{
				func_656(-283235773, iParam1);
			}
			else
			{
				func_656(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_656(1355398007, iParam1);
			}
			else
			{
				func_656(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_656(574636806, iParam1);
			}
			else
			{
				func_656(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_656(821118338, iParam1);
			}
			else if (func_658(39))
			{
				func_656(846829260, iParam1);
			}
			else
			{
				func_656(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_404((*Global_1835011)[33]->f_1) == 1)
				{
					func_656(1422779093, iParam1);
				}
				else
				{
					func_656(-1769536986, iParam1);
				}
			}
			else
			{
				func_656(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_656(352134789, iParam1);
			}
			else if (func_658(43))
			{
				func_656(260723113, iParam1);
			}
			else
			{
				func_656(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_656(-457958799, iParam1);
			}
			else
			{
				func_656(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_658(41))
			{
				func_656(-546824600, iParam1);
			}
			else
			{
				func_656(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_656(1297261593, iParam1);
			}
			else
			{
				func_656(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_656(2068484886, iParam1);
			}
			else if (func_658(49))
			{
				func_656(-1489080639, iParam1);
				func_656(-2102244050, iParam1);
			}
			else
			{
				func_656(-1863040467, iParam1);
			}
			break;
		case 51:
			func_656(-2055943209, iParam1);
			break;
		case 58:
			if (func_370((*Global_1347702)[23]->f_15, 1))
			{
				func_656(1650066845, iParam1);
			}
			else
			{
				func_656(151370023, iParam1);
			}
			func_656(1426057961, iParam1);
			func_656(476379584, iParam1);
			break;
		case 59:
			func_656(-1638117866, iParam1);
			break;
		case 62:
			func_656(199541730, iParam1);
			break;
		case 63:
			func_656(1703485804, iParam1);
			func_656(-800449045, iParam1);
			break;
		case 65:
			func_656(-1678210868, iParam1);
			func_656(-1448238026, iParam1);
			func_656(-1200864845, iParam1);
			func_656(1473511536, iParam1);
			break;
		case 66:
			func_656(-1774490051, iParam1);
			func_656(-34645921, iParam1);
			func_656(174027075, iParam1);
			func_656(-1155999, iParam1);
			func_657(1);
			break;
		case 67:
			func_656(701612593, iParam1);
			func_656(-1069631343, iParam1);
			func_656(1673428882, iParam1);
			break;
		case 68:
			func_656(-739133286, iParam1);
			func_656(-2130089358, iParam1);
			func_656(2056190391, iParam1);
			func_656(1941753817, iParam1);
			func_657(0);
			break;
		case 70:
			func_656(-1217555753, iParam1);
			break;
		case 71:
			func_656(697048821, iParam1);
			break;
		case 73:
			func_656(-553148661, iParam1);
			break;
		case 75:
			func_656(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_656(1414263863, iParam1);
			}
			else
			{
				func_656(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_656(1835465936, iParam1);
				func_656(523715611, iParam1);
			}
			else if (func_658(78))
			{
				func_656(1420338873, iParam1);
			}
			else
			{
				func_656(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_656(10180941, iParam1);
			}
			else if (func_658(79))
			{
				func_656(768420635, iParam1);
			}
			else
			{
				func_656(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_656(-383601523, iParam1);
			}
			else
			{
				func_656(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_656(1606472408, iParam1);
			}
			else
			{
				func_656(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_656(-203571927, iParam1);
			}
			else
			{
				func_656(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_656(729886222, iParam1);
			}
			else
			{
				func_656(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_656(-714816362, iParam1);
			}
			else
			{
				func_656(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_656(-932932179, iParam1);
				func_656(-1458537240, iParam1);
			}
			else
			{
				func_656(-1764383885, iParam1);
				func_656(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_656(1741466706, iParam1);
			}
			else
			{
				func_656(1405815775, iParam1);
			}
			break;
		case 94:
			func_656(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_656(1905280979, iParam1);
			}
			else
			{
				func_656(-1966245299, iParam1);
			}
			func_656(721468880, iParam1);
			break;
		case 99:
			func_656(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_656(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_656(-1117781095, iParam1);
				}
				else
				{
					func_656(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_656(141494548, iParam1);
			}
			else
			{
				func_656(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_656(-369525697, iParam1);
			}
			else if (func_658(101))
			{
				func_656(1595015219, iParam1);
			}
			else
			{
				func_656(-321486961, iParam1);
			}
			break;
		case 103:
			func_656(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_656(793460477, iParam1);
				func_656(-1610242176, iParam1);
			}
			else if (func_658(103))
			{
				func_656(1830897187, iParam1);
			}
			else
			{
				func_656(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_656(1528309077, iParam1);
			}
			else if (func_658(104))
			{
				func_656(1864966105, iParam1);
			}
			else
			{
				func_656(-103336013, iParam1);
			}
			break;
		case 108:
			func_656(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_656(-1123227713, iParam1);
				func_656(-889574341, iParam1);
			}
			else
			{
				func_656(2065385917, iParam1);
				func_656(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_656(-887421691, iParam1);
			}
			else if (func_658(109))
			{
				func_656(-1318117949, iParam1);
			}
			else
			{
				func_656(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_656(284822762, iParam1);
				}
				else
				{
					func_656(-1425017554, iParam1);
				}
			}
			else if (func_658(110))
			{
				if (&Global_1357515 == 0)
				{
					func_656(553087292, iParam1);
				}
				else
				{
					func_656(-1766870331, iParam1);
					func_656(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_656(-1980598735, iParam1);
			}
			else
			{
				func_656(-442732098, iParam1);
				func_656(1955756409, iParam1);
			}
			break;
		case 115:
			func_656(394303528, iParam1);
			func_656(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_656(1182403394, iParam1);
			}
			else
			{
				func_656(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_656(924445424, iParam1);
			}
			else
			{
				func_656(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_656(430755273, iParam1);
				func_656(-1473879802, iParam1);
			}
			else
			{
				func_656(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_656(73885747, iParam1);
			}
			else if (func_658(117))
			{
				func_656(1559707913, iParam1);
			}
			else
			{
				func_656(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_656(-2103887972, iParam1);
			}
			else if (func_658(118))
			{
				func_656(-435828462, iParam1);
			}
			else
			{
				func_656(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_656(2054486196, iParam1);
			}
			else
			{
				func_656(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_656(-570086056, iParam1);
			}
			else if (func_658(121))
			{
				func_656(32337856, iParam1);
			}
			else
			{
				func_656(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_656(813493663, iParam1);
			}
			else if (func_658(122))
			{
				func_656(-2132763590, iParam1);
			}
			else
			{
				func_656(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_656(-66240572, iParam1);
				func_656(1563075046, iParam1);
			}
			else
			{
				func_656(-787011772, iParam1);
				func_656(-1523377438, iParam1);
			}
			break;
		case 127:
			func_656(61020800, iParam1);
			break;
		case 129:
			func_656(428985222, iParam1);
			break;
		case 131:
			func_656(-1393851036, iParam1);
			break;
		case 133:
			func_656(1559531342, iParam1);
			break;
		case 134:
			func_656(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_656(-1374407408, iParam1);
				}
				else
				{
					func_656(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_656(-472672138, iParam1);
				}
				else
				{
					func_656(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_656(-1678710489, iParam1);
			}
			else
			{
				func_656(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_656(1717582460, iParam1);
			}
			else
			{
				func_656(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_656(1568112362, iParam1);
				func_656(1388317526, iParam1);
			}
			else if (func_658(136))
			{
				func_656(-1597534828, iParam1);
				func_656(-1207918353, iParam1);
			}
			else
			{
				func_656(-1940891082, iParam1);
				func_656(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_656(448334530, iParam1);
				func_656(2145375502, iParam1);
			}
			else
			{
				func_656(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_656(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_656(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_656(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_656(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_656(-66616327, iParam1);
			}
			else
			{
				func_656(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_656(1862916706, iParam1);
			}
			else if (func_658(147))
			{
				func_656(675105199, iParam1);
			}
			else
			{
				func_656(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_656(174409701, iParam1);
			}
			else if (func_658(148))
			{
				func_656(-1730895475, iParam1);
			}
			else
			{
				func_656(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_656(1295237052, iParam1);
			}
			else if (func_658(149))
			{
				func_656(-788577684, iParam1);
			}
			else
			{
				func_656(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_349(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_239(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_601(iParam0);
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
					if (func_404((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_315(iParam0);
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
			iVar3 = func_315(iParam0);
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

int func_350(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_661(iParam0);
	iVar3 = func_662(iParam0);
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
				iVar1 = func_328();
				func_377(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_663(iParam0, 1);
			if (func_664(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_665(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_666(1, iParam0);
				}
				else
				{
					func_667(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_351(int iParam0, int iParam1)
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

int func_352(int iParam0, int iParam1, int iParam2)
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

void func_353(bool bParam0)
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

void func_354(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_668(iParam0, iParam1, bParam2);
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

int func_355(int iParam0, int iParam1)
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

bool func_356(int iParam0)
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

void func_357(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_26() != -1)
	{
		return;
	}
	if ((Global_36616 && func_669(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_670(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_671(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_672(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_671(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_358(int iParam0)
{
	if (!func_234(iParam0))
	{
		return -1;
	}
	return func_673(func_577(iParam0));
}

int func_359(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_360()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_674(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_361(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_13(iParam0, 0))
	{
		return false;
	}
	if (!func_675(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_676(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_677(iParam0, bParam2);
	iVar2 = 0;
	if (func_678(iParam0, 0, 0) == 0)
	{
		if (func_679(iParam0))
		{
			iVar5 = func_680(iParam0);
			iVar6 = func_681(iVar5);
			iVar7 = func_682(iVar6) + 1;
			func_683(iVar5);
			if (func_684(38))
			{
				func_368(483, 0);
			}
			else
			{
				func_368(482, 0);
			}
			if (iVar7 == func_685(iVar6))
			{
				func_361(func_686(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_440() && func_687(4))
				{
					if (func_440() && (func_688(38) || func_684(38)))
					{
						func_690(38, func_686(iVar6), 0, 0, func_689(), 0, -1, 0);
						func_691(2);
					}
					else
					{
						func_690(38, func_686(iVar6), 0, 0, func_689(), 0, -1, 0);
						func_691(1);
					}
				}
			}
			else if (func_440() && func_687(4))
			{
				if (func_440() && (func_688(38) || func_684(38)))
				{
					func_690(38, 0, 0, 0, func_689(), 0, -1, 0);
					func_691(2);
				}
				else
				{
					func_690(38, 0, 0, 0, func_689(), 0, -1, 0);
					func_691(1);
				}
			}
			if (func_440() && func_687(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_440() && (func_688(38) || func_684(38)))
					{
						func_692(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_692(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_693(iParam0) == -1037537535)
	{
		if ((!func_9(iParam0, 866047851) && !func_9(iParam0, -1979000645)) && !func_9(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_694(iParam0, 8388608) && !func_695(28))
	{
		func_696(28);
	}
	if (!bVar3)
	{
		if (func_9(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_697(iParam0) == -1447088266)
			{
				iVar1 = func_699(func_698(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_26() == -1)
					{
						func_700(iVar1);
					}
					if (func_701(0) && func_702(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_703(iParam0, iVar0, iParam5);
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
					if (func_26() == -1)
					{
						func_700(iParam0);
					}
					if (func_701(0) && func_702(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_703(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_693(iParam0) == -427144552)
		{
			if (!func_704(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_693(iParam0) == 307971639 && func_705(iParam0))
		{
			if (!func_706(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_9(iParam0, 866047851))
		{
			func_707(iParam0);
		}
		else if (func_9(iParam0, 2000026003))
		{
			func_708(iParam0);
		}
		else if (func_9(iParam0, -103750053))
		{
			func_101(func_709(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_101(func_710(-717883113, 2091222383), iVar0);
		}
		else if (func_9(iParam0, -121341956) && !func_9(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_370((*Global_1835011)[4]->f_1, 1))
				{
					func_368(498, 0);
				}
			}
			if (func_9(iParam0, -2017733358) || func_9(iParam0, -1369131378))
			{
				func_711(iParam0);
			}
		}
		else if (func_9(iParam0, -136654233))
		{
			if (func_9(iParam0, -1021472396))
			{
			}
		}
		else if (func_9(iParam0, -1466706512) && func_9(iParam0, 1147021565))
		{
			func_368(484, 0);
		}
		else if (func_9(iParam0, 1147021565) && func_9(iParam0, -524514947))
		{
		}
		else if (func_9(iParam0, 554195525))
		{
		}
		else if (func_9(iParam0, 589988438))
		{
			if (func_712())
			{
				func_713(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_9(iParam0, 787083290) && func_9(iParam0, 949916894))
		{
			func_714(iParam0);
		}
		else if (func_9(iParam0, -1718133314))
		{
			func_715(iParam0);
		}
		else if (func_9(iParam0, -1738650224))
		{
			func_716(iParam0);
		}
		else if (func_9(iParam0, -1112814642) && func_9(iParam0, 949916894))
		{
			func_717(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_9(iParam0, 1841149704))
		{
			func_718();
		}
		else if (func_9(iParam0, 606799272))
		{
			func_719(iParam0, iParam1);
			func_720(iParam0);
		}
		else if (func_9(iParam0, -1112814642) && func_9(iParam0, -1697809989))
		{
			func_721(iParam0, 0, 0, 0);
		}
		else if (func_9(iParam0, -2017733358) || func_9(iParam0, -1369131378))
		{
			func_711(iParam0);
		}
		else if (func_9(iParam0, -1921346699))
		{
			if (func_26() != -1)
			{
				return false;
			}
			func_722(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_9(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_390(215778062, 1, 0))
					{
						func_361(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_390(670273567, 1, 0))
					{
						func_361(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_390(-967317137, 1, 0))
					{
						func_361(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_390(526074061, 1, 0))
					{
						func_361(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_390(-1045488665, 1, 0))
					{
						func_361(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_390(471514780, 1, 0))
					{
						func_361(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_9(iParam0, -839724752) && func_694(iParam0, 4))
		{
			if (!func_684(42))
			{
				func_723(iParam0);
			}
		}
		else if (func_9(iParam0, 1399091007))
		{
			func_724(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_9(iParam0, 1248798204))
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
				func_361(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_696(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_725(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_726(&iVar9, 0))
				{
					func_702(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_26() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_725(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_368(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_727();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_728();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_729();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_730();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_731();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_732(499813453, 854119837, 0);
				func_733(499813453, 0);
				func_734(1);
				break;
			case 2127812557:
				func_732(499813453, -1292544588, 0);
				func_733(499813453, 0);
				func_734(2);
				break;
			case 808991383:
				func_732(499813453, -1003325394, 0);
				func_733(499813453, 0);
				func_734(4);
				break;
			case 1134518629:
				func_732(666607663, -335460405, 0);
				func_733(666607663, 0);
				func_735(1);
				break;
			case 902940106:
				func_732(666607663, 903797617, 0);
				func_733(666607663, 0);
				func_735(2);
				break;
			case -418174898:
				func_732(666607663, 669728650, 0);
				func_733(666607663, 0);
				func_735(4);
				break;
			case -648114971:
				func_732(-220219788, 1214120047, 0);
				func_733(-220219788, 0);
				func_736(1);
				break;
			case 211153747:
				func_732(-220219788, 655769340, 0);
				func_733(-220219788, 0);
				func_736(2);
				break;
			case -32876996:
				func_732(-220219788, 885316185, 0);
				func_733(-220219788, 0);
				func_736(4);
				break;
			case 1191437462:
				func_732(218622660, -1491419385, 0);
				func_733(218622660, 0);
				func_737(1);
				break;
			case 1119149048:
				func_732(218622660, 1809565830, 0);
				func_733(218622660, 0);
				func_737(2);
				break;
			case 506073827:
				func_732(390004462, -628873767, 0);
				func_733(390004462, 0);
				func_738(1);
				break;
			case -1876986168:
				func_732(390004462, -405421956, 0);
				func_733(390004462, 0);
				func_738(2);
				break;
			case 2142623221:
				func_732(390004462, -1108972386, 0);
				func_733(390004462, 0);
				func_738(4);
				break;
			case 1508215381:
				func_732(6410548, 1053716392, 0);
				func_733(6410548, 0);
				func_739(1);
				break;
			case -888935280:
				func_732(6410548, 806507056, 0);
				func_733(6410548, 0);
				func_739(2);
				break;
			case -1252474566:
				func_732(6410548, 1571925350, 0);
				func_733(6410548, 0);
				func_739(4);
				break;
			case -1465702449:
				func_732(6410548, 1330352282, 0);
				func_733(6410548, 0);
				func_739(8);
				break;
			case -21093309:
				func_741(242, func_740(-21093309), 0);
				break;
			case 204375141:
				func_741(240, func_740(204375141), 0);
				break;
			case -417963070:
				func_741(241, func_740(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_742(594, 1934060482, 1, 1);
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
					func_742(594, 1110018439, 1, 1);
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
					func_742(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_742(594, -1228016946, 1, 1);
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
					func_742(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_742(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_368(488, 0);
				break;
			case 1613651027:
				func_368(491, 0);
				break;
			case -885810591:
				func_368(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_361(func_743(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_361(func_744(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_695(1))
				{
					func_368(487, 0);
				}
				break;
			case -898386032:
				func_368(486, 0);
				break;
			case -2035110427:
				if (func_26() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_368(496, 0);
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
		func_745(&iVar10);
		if (!func_746(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_701(0))
		{
			return true;
		}
		if (func_693(iParam0) == -1037537535)
		{
			func_747(iParam0);
		}
		if (func_9(iParam0, -1979000645))
		{
			func_748(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_701(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_361(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_749(iVar2, 0);
		}
	}
	Var35 = { func_750(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_751(iParam0);
	if (fParam6 > 0f)
	{
		if (func_9(iParam0, -839724752))
		{
			func_752(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_753(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_362(int iParam0)
{
	if (func_9(iParam0, 1989861793))
	{
		iVar0 = func_11(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_754(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_755(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_12(iVar14, iVar1);
					if (iVar15 != iParam0 && func_13(iVar15, 0))
					{
						if (func_756(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_757(iVar1);
				if (bVar13)
				{
					func_758(iParam0);
				}
				else
				{
					func_368(306, 0);
				}
			}
		}
	}
}

void func_363()
{
	if (func_26() != -1)
	{
		return;
	}
	func_759();
	func_760();
	func_761();
	func_762();
	func_763();
	func_764();
	func_765();
}

void func_364(int iParam0)
{
	func_766(iParam0, 1, 1, -142743235, 1);
	if (func_767(iParam0))
	{
		func_768(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_770(func_769(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_771(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_772() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_773(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_773(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_774(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_774(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_774(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_774(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_774(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_774(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_774(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_774(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_774(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_775(iVar8, iVar0))
				{
					func_776(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_775(iVar8, iVar0))
		{
			func_776(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_365()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_775(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_772() == -2125499975 || func_772() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_776(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_776(&vVar2, iVar5, iVar0);
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

void func_366()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_674(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_367(int iParam0, bool bParam1)
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
			if ((func_370((*Global_1835011)[59]->f_1, 1) || func_370((*Global_1347702)[1]->f_15, 1)) || func_235((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_651(403634348, 1))
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

void func_368(int iParam0, bool bParam1)
{
	func_777(iParam0, &iVar0, &iVar1);
	if (!func_778(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_779(iVar0, iVar1);
}

void func_369(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_770(iParam0, 1);
	func_780(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_780(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_781(17, iParam0, 0, 0, 0);
		}
	}
	if (func_26() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_780(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_780(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_370(int iParam0, bool bParam1)
{
	switch (func_339(iParam0))
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

void func_371()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_674(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_372()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_674(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_373(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_782(iParam1, 1, 0) };
		iParam3 = func_783(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_784(iParam3);
	return func_725(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_374()
{
	return _unlock_is_unlocked(99890643);
}

void func_375(int iParam0)
{
	if (!func_785(iParam0))
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

bool func_376(int iParam0, int iParam1)
{
	if (!func_786(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_787(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_788(Global_40.f_9910[iParam1], 4);
}

void func_377(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_789(*iParam0);
	iVar1 = func_790(*iParam0);
	iVar2 = func_791(*iParam0);
	iVar3 = func_792(*iParam0);
	iVar4 = func_793(*iParam0);
	iVar5 = func_794(*iParam0);
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
	iVar6 = func_795(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_795(iVar1, iVar0);
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
	func_796(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_378(int iParam0, int iParam1, bool bParam2)
{
	if (!func_786(iParam0))
	{
		return;
	}
	if (!func_797(iParam1))
	{
		return;
	}
	if (func_798(iParam1, 1))
	{
		return;
	}
	iVar0 = func_787(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_376(iParam0, -1))
	{
		return;
	}
	else
	{
		func_799(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_241(0, 0, 1))
		{
			func_410(0, 17);
		}
	}
}

void func_379()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_674(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_380()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_674(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_381()
{
	return _unlock_is_unlocked(-121456797);
}

void func_382()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_674(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_383()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_674(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_384()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_674(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_385()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_674(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_386()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_674(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_387()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_674(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_388(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_389(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_390(int iParam0, int iParam1, bool bParam2)
{
	if (!func_13(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_693(iParam0);
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
		if (!func_800(iParam0, 1))
		{
			return false;
		}
	}
	return func_678(iParam0, 0, bParam2) >= iParam1;
}

void func_391(int iParam0)
{
	if (func_88(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_801(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_801(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_392()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_674(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_393()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_674(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_394()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_674(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_395()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_674(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_396()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_674(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_397()
{
	if (func_802() > 1)
	{
		func_803();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_368(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_368(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_368(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_368(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_368(452, 1);
		}
	}
}

bool func_398(int iParam0)
{
	return func_804(iParam0, 4, 1);
}

void func_399(int iParam0)
{
	func_805(iParam0, 4, 1);
}

void func_400(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_100(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_401(int iParam0)
{
	if (func_88(32768))
	{
		return;
	}
	if (!func_234(iParam0))
	{
		return;
	}
	func_274(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_239(iParam0))
	{
		case 1:
			func_101(func_710(909007663, -587839005), 1);
			iVar0 = func_315(iParam0);
			func_101(func_100(-634848880), 1);
			switch (func_580(iVar0))
			{
				case 0:
					func_101(func_710(909007663, 1325140787), 1);
					break;
				case 1:
					func_101(func_710(909007663, 2101241783), 1);
					break;
				case 2:
					func_101(func_710(909007663, -1296936294), 1);
					break;
				case 3:
					func_101(func_710(909007663, -798388728), 1);
					break;
				case 4:
					func_101(func_710(909007663, -1787586531), 1);
					break;
				case 5:
					func_101(func_710(909007663, -1002834519), 1);
					break;
				case 6:
					func_101(func_710(909007663, -50600144), 1);
					break;
				case 7:
					func_101(func_710(909007663, -348503123), 1);
					break;
				case 8:
					func_101(func_710(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_101(func_710(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_101(func_710(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_315(iParam0);
			if (func_344((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_101(func_100(-634848880), 1);
			}
			if (func_344((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_344((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_101(func_710(909007663, -587839005), 1);
				}
				else
				{
					func_101(func_710(909007663, -2049243343), 1);
				}
			}
			if (func_344((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_581(iVar1))
				{
					case 0:
						func_101(func_710(909007663, 1325140787), 1);
						break;
					case 1:
						func_101(func_710(909007663, 2101241783), 1);
						break;
					case 2:
						func_101(func_710(909007663, -1296936294), 1);
						break;
					case 3:
						func_101(func_710(909007663, -798388728), 1);
						break;
					case 4:
						func_101(func_710(909007663, -1787586531), 1);
						break;
					case 5:
						func_101(func_710(909007663, -1002834519), 1);
						break;
					case 6:
						func_101(func_710(909007663, -50600144), 1);
						break;
					case 7:
						func_101(func_710(909007663, -348503123), 1);
						break;
					case 8:
						func_101(func_710(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_101(func_710(909007663, 532323983), 1);
				}
			}
			else if (func_344((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_344((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_344((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_101(func_710(909007663, 551192206), 1);
				}
				else
				{
					func_101(func_710(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_402()
{
	if (func_26() != -1)
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
	if (!func_4(64))
	{
		return;
	}
	else if (func_242(&Global_1935630, 131072))
	{
		return;
	}
	else if ((func_241(0, 0, 1) || func_806()) || func_135())
	{
		return;
	}
	iVar0 = func_245();
	if (((iVar0 == 0 || iVar0 == 4) || iVar0 == 6) || iVar0 == 7)
	{
		return;
	}
	while (_spactionproxy_get_next_pending_buy_action(&uVar4))
	{
		if (!_spactionproxy_process_action(uVar4, func_807(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_808(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_808(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_809(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_410(0, -1);
	}
	if (iVar2 > 0)
	{
		func_810("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_811(1, 0);
	Global_1956575->f_4 = 1;
}

void func_403(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_88(32768))
	{
		return;
	}
	func_326(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_812(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_404(int iParam0)
{
	if (!func_234(iParam0))
	{
		return -1;
	}
	return func_813(iParam0);
}

int func_405(int iParam0, int iParam1)
{
	if (!func_814(iParam0))
	{
		return 0;
	}
	if (!func_440())
	{
		return 0;
	}
	if (!func_815(iParam0, &iVar0, &iVar1))
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

int func_406(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_816())
	{
		iVar2 = func_816();
	}
	iVar5 = func_817(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_577(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_577(iVar6) == 0)
			{
				return func_818(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_577(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_577(iVar6) == 0)
			{
				return func_818(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_818(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_407(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_819(1330954593, 0, -1);
		case 1:
			return func_819(1330954593, 0, -1);
		case 2:
			return func_819(1330954593, 0, -1) * 2;
		case 4:
			return func_819(1330954593, 0, -1);
		case 5:
			return func_819(1330954593, 0, -1);
		case 6:
			return func_819(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_819(1330954593, 0, -1) * 3;
		case 9:
			return func_819(1330954593, 0, -1) * 3;
		case 10:
			return func_819(1330954593, 0, -1) * 3;
		case 11:
			return func_819(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_408(int iParam0)
{
	if (!func_234(iParam0))
	{
		return cVar0;
	}
	switch (func_239(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_601(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_315(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_406(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_409(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_411();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_239(Global_1879514->f_1) == 1)
			{
				func_405(5, 1);
			}
			else if (func_239(Global_1879514->f_1) == 8 && (func_344((*Global_1347702)[func_315(Global_1879514->f_1)]->f_12, 1) || func_344((*Global_1347702)[func_315(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_405(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_410(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_820(&Global_0, 8);
	}
	if (!func_440() || func_26() != -1)
	{
		return;
	}
	func_820(&Global_0, 1);
}

int func_411()
{
	iVar0 = func_821(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_822(iVar0))
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

Vector3 func_412(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_823(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_441(vVar0))
	{
		vVar0 = { func_823(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_413(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_414(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_415(vector3 vParam0, int iParam3)
{
	iVar0 = func_83();
	if (func_290(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_824(vParam0, iParam3);
}

void func_416()
{
	func_825();
	func_826();
	func_827();
	_0x11b0a0b282fa9b10(0);
}

void func_417(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_828(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_829(&(Param0.f_10)))
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
			func_830(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_418(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

int func_419()
{
	return Global_1572864->f_12;
}

void func_420(bool bParam0)
{
	if (func_592(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_831();
	Var1.f_3.f_3 = iVar0;
	if ((!func_832(Global_1347343->f_2) && !func_418(Global_1347343->f_11, 64)) || func_88(32768))
	{
		Var1.f_7 = func_833();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_418(Global_1347343->f_11, 1024) && !func_88(32768))
	{
		Var1.f_11 = func_834();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_418(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_835();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_836(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_837(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_224(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_224(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_421(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_838(uParam0);
	iVar0 = func_839(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_840(iParam1);
		}
		iVar0 = func_841(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_842(uParam0);
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
		iVar0 = func_842(uParam0);
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
	func_843(uParam0, 2);
}

void func_422(char[4] cParam0, int iParam1)
{
	func_844(&(cParam0->f_7375), iParam1);
}

int func_423(var uParam0)
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

int func_424()
{
	return func_601(func_845());
}

void func_425(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < func_442())
	{
		func_846(cParam0, iVar0);
		iVar0++;
	}
}

int func_426(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_427(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = uParam1;
}

void func_428(char[4] cParam0)
{
	func_852(cParam0, 0, 1, 134360, 134453, 134761, 135272, 136585, "MUD4_INT", 10, -1);
	func_852(cParam0, 1, 2, 136968, 137283, 137393, 137690, 138477, "", 8, -1);
	func_852(cParam0, 2, 3, 138702, 138770, 138940, 139366, 140438, "", 8, -1);
	func_852(cParam0, 3, 4, 140748, 140757, 141005, 141276, 143300, "", 65, -1);
	func_852(cParam0, 4, 5, 143351, 143673, 143700, 143919, 144570, "", 64, -1);
	func_852(cParam0, 5, 6, 144711, 144873, 145041, 145622, 145936, "", 64, -1);
	func_852(cParam0, 6, 7, 146098, 146141, 146294, 147000, 147820, "", 8, -1);
	func_852(cParam0, 7, 8, 148059, 148323, 149000, 149540, 151343, "MUD4_MCS2", 528394, -1);
	func_852(cParam0, 8, 9, 151781, 152015, 152755, 153131, 154546, "MUD4_MCS3", 1035, -1);
	func_852(cParam0, 9, 10, 154624, 154641, 154741, 155833, 156511, "", 9, -1);
	func_852(cParam0, 10, 11, 156773, 157130, 157149, 157828, 159320, "", 9, -1);
	func_852(cParam0, 11, 12, 159484, 159540, 159576, 159925, 161479, "", 9, -1);
	func_852(cParam0, 12, 25, 161702, 162078, 162214, 162414, 162893, "MUD4_MCS4", 11, -1);
	func_852(cParam0, 25, 26, 162998, 163007, 163016, 163025, 163059, "", 0, -1);
}

void func_429(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_918(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_430(char[4] cParam0, int iParam1)
{
	cParam0->f_13105 = iParam1;
}

int func_431(int iParam0)
{
	if (!func_530(iParam0))
	{
		return -1;
	}
	if (Global_1572887->f_12 == -1)
	{
		return &(Global_40.f_358[iParam0]);
	}
	return &(Global_1058888->f_42266[iParam0]);
}

void func_432(int iParam0, int iParam1)
{
	if (!func_234(iParam0))
	{
		return;
	}
	func_919(iParam0, iParam1);
}

int func_433(char[4] cParam0, int iParam1, bool bParam2)
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
			if (!decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_920()) && get_entity_model(iVar1) == iParam1)
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

bool func_434(int iParam0, int iParam1)
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

void func_435(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_436(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_437(var uParam0)
{
	if (!func_921(uParam0, 4))
	{
		if (func_922(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_923(uParam0) };
		if (!func_922(uParam0->f_860, 524288))
		{
			func_924(&(uParam0->f_872));
		}
		func_925(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_926(uParam0, 0f, 0f, 0f);
		func_927(uParam0);
		func_928(uParam0);
		func_929(uParam0, 0f, 0f, 0f, 0, 0);
		func_930(uParam0);
		func_844(uParam0, 4);
		func_931(uParam0, 0);
		func_932(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_438(int iParam0)
{
	if (func_933(iParam0))
	{
		return func_934(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_439(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_604(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_935(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_936(0, 0);
		if (func_785(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_937(1, 0);
		}
	}
	else
	{
		func_937(1, 0);
	}
	func_253(0);
	func_605(0, vParam0, uParam3);
	return 1;
}

bool func_440()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_441(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_442()
{
	return 26;
}

void func_443(int iParam0)
{
	if (!func_233(iParam0))
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

void func_444(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_938((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_445(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_939((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_446(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_940((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_447(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_941((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_448(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_942((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_449(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_943((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_450(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_451(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_944((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_452(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_945((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_453(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_946((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_454(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_947((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_455(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_948((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_456(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_126(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_949(&(cParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_950(&(cParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_638[iVar0] = iParam1;
	cParam0->f_638[iVar0]->f_2 = (cParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_457(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_126(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_951(&(cParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_952(&(cParam0->f_819));
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

void func_458(char[4] cParam0, char[4] cParam1, int iParam2)
{
	if (func_126(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_953(&(cParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_954(&(cParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1020[iVar0] = cParam1;
	cParam0->f_1020[iVar0]->f_2 = (cParam0->f_1020[iVar0]->f_2 || iParam2);
}

void func_459(char[4] cParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	if (!func_955(iParam3, func_39(cParam0)) && !func_955(iParam3, func_41(cParam0)))
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
	iVar0 = func_956(&(cParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_957(&(cParam0->f_1126));
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
		func_958(&(cParam0->f_1126[iVar0]->f_2), 4);
	}
}

char* func_460(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "pl_ENTER";
			break;
		case 1:
			sVar0 = "pl_YOU_GOOD_BL";
			break;
		case 2:
			sVar0 = "pl_YOU_GOOD_BR";
			break;
		case 3:
			sVar0 = "pl_YOU_GOOD_RT";
			break;
		case 4:
			sVar0 = "pl_Action";
			break;
		case 5:
			sVar0 = "pl_exit";
			break;
		case 6:
			sVar0 = "pl_exit_alt";
			break;
		case 7:
			sVar0 = "pl_IG18_Enter_A";
			break;
		case 8:
			sVar0 = "pl_IG18_Enter_E";
			break;
		case 9:
			sVar0 = "pl_Action_Exit";
			break;
		case 10:
			sVar0 = "pl_Action_Exit_Quick";
			break;
		case 11:
			sVar0 = "pl_IG15_Helping_Strauss_All";
			break;
		case 12:
			sVar0 = "pl_IG15_Arthur_Grab_Strauss";
			break;
		case 13:
			sVar0 = "pl_IG15_All_idle";
			break;
		case 14:
			sVar0 = "pl_IG15_Strauss_Hurting_Idle";
			break;
		case 15:
			sVar0 = "pl_IG15_Helping_Strauss_All_End";
			break;
		case 16:
			sVar0 = "pl_IG10_Strauss_Enters";
			break;
		case 17:
			sVar0 = "pl_IG10_Strauss_Shot_idle";
			break;
		case 18:
			sVar0 = "pl_IG15_John_Enters";
			break;
		case 19:
			sVar0 = "pl_IG15_John_Enters_No_Blend";
			break;
		case 22:
			sVar0 = "pl_IG15_Dutch_Enters";
			break;
		case 20:
			sVar0 = "pl_IG15_Wagon_Idle";
			break;
		case 21:
			sVar0 = "PL_BASE";
			break;
	}
	return sVar0;
}

void func_461(char[4] cParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!func_955(iParam3, func_39(cParam0)) && !func_955(iParam3, func_41(cParam0)))
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
	iVar0 = func_959(&(cParam0->f_1126), iParam1);
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

void func_462(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_126(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_960(&(cParam0->f_5188), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_961(&(cParam0->f_5188));
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

void func_463(char[4] cParam0, char* sParam1, int iParam2)
{
	if (func_126(cParam0, 2097152))
	{
		return;
	}
	func_962(cParam0, get_hash_key(sParam1), iParam2);
}

void func_464(int iParam0, int iParam1)
{
	func_963(iParam0, iParam1);
}

void func_465(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_964((*uParam0)[iVar0]))
		{
			if (func_955((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_965((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_966((*uParam1)[iVar0]))
		{
			if (func_955((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_967((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_968((*uParam2)[iVar0]))
		{
			if (func_955((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_969((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_970((*uParam3)[iVar0]))
		{
			if (func_955((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_971((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_955(uParam4->f_1, iParam12))
	{
		func_972(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_973((*uParam5)[iVar0]))
		{
			if (func_955((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_974((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_973((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_975((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_955((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_976((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_977((*uParam6)[iVar0]))
		{
			if (func_955((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_978((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_979((*uParam7)[iVar0]))
		{
			if (func_955((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_980((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_981((*uParam8)[iVar0]))
		{
			if (func_955((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_982((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_983((*uParam9)[iVar0]))
		{
			if (func_955((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_984((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_985((*uParam10)[iVar0]))
		{
			if (func_955((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_986((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_987((*uParam11)[iVar0]))
		{
			if (func_955((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_988((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_466(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_989(uParam0, iParam1, sParam2))
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

struct<2> func_467()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_468(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_469(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_470(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_990(&(cParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_421(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_471(char[4] cParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_29(&(cParam0->f_8269)))
	{
		if (!func_127(cParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_991(cParam0->f_607)}, 3);
			if (func_992(&(cParam0->f_8269), &cVar1, 0, func_138(iParam1), 1, 0))
			{
				if (func_30(&(cParam0->f_8269)))
				{
					func_993(&(cParam0->f_8269));
				}
				func_146(cParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_994(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_472(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_973((*uParam0)[iVar0]))
		{
			if (func_955((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_995((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_996((*uParam0)[iVar0]))
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

int func_473(char[4] cParam0)
{
	return cParam0->f_596;
}

bool func_474(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
{
	if (func_126(cParam0, 2))
	{
		return true;
	}
	if (func_26() == 0)
	{
		return true;
	}
	if (does_entity_exist(cParam0->f_5408))
	{
		return true;
	}
	iVar0 = func_997(func_67(cParam0));
	if (!func_35())
	{
		vVar2 = { func_132(cParam0->f_607) };
	}
	if (func_998(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_475(char[4] cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(cParam0->f_5411))
	{
		if (!func_126(cParam0, 16777216))
		{
			if (!func_999(cParam0))
			{
				func_109(cParam0, 16777216);
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
				iVar12 = func_1000(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_109(cParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(iVar12))
					{
						if (iVar12 == cParam0->f_5411)
						{
							func_109(cParam0, 16777216);
						}
						else if (func_1001(iVar12, cParam0->f_5411, 5f, 1))
						{
							if (func_1002(iVar12))
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
	if (func_126(cParam0, 1))
	{
		return true;
	}
	vVar14 = { func_132(cParam0->f_607) };
	if (func_26() == 0)
	{
		request_model(func_131(cParam0), false);
		if (!has_model_loaded(func_131(cParam0)))
		{
			return false;
		}
		if (func_1003(&iVar17, func_131(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
		{
			set_network_id_exists_on_all_machines(iVar17, true);
			iVar13 = net_to_ped(iVar17);
		}
	}
	else
	{
		if (((((cParam0->f_607 == 38 || cParam0->f_607 == 39) || cParam0->f_607 == 43) || cParam0->f_607 == 40) || cParam0->f_607 == 41) || cParam0->f_607 == 42)
		{
			func_109(cParam0, 1);
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
		if (func_126(cParam0, 262144))
		{
			Var18.f_2 = 1;
		}
		else if (func_126(cParam0, 32768))
		{
			Var18.f_2 = 0;
		}
		iVar29 = 0;
		iVar13 = func_1000(&iVar29, &Var18);
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
			if (!func_126(cParam0, 16))
			{
				func_109(cParam0, 16);
			}
		}
	}
	if (does_entity_exist(iVar13))
	{
		cParam0->f_5411 = iVar13;
		cParam0->f_5412 = iVar13;
		func_1004(cParam0, bParam1);
		if (!func_126(cParam0, 256))
		{
			if (!func_126(cParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_1002(iVar13) || func_1005(Global_35, iVar13, 1, 1) > 200f) && !func_441(vVar14))
				{
					if (!func_35())
					{
						freeze_entity_position(iVar13, false);
						func_918(iVar13, vVar14, fParam5, 2, 1073741824);
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

void func_476(char[4] cParam0)
{
	if (!func_126(cParam0, 32) && func_134(cParam0, 3))
	{
		if (func_1006(cParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_109(cParam0, 32);
		}
	}
	if (!func_126(cParam0, 32))
	{
		if (func_1007(&(cParam0->f_609), cParam0->f_607))
		{
			func_109(cParam0, 32);
		}
	}
}

void func_477(char[4] cParam0)
{
	if (!func_126(cParam0, 128))
	{
		if (func_126(cParam0, 16384))
		{
			func_1008(cParam0);
			if (func_1009(cParam0))
			{
				func_57(&(cParam0->f_10792));
				func_1010(cParam0, 2097152);
				func_308(cParam0, 16384);
				func_109(cParam0, 128);
			}
			return;
		}
		if (func_134(cParam0, 1))
		{
			return;
		}
		if (func_126(cParam0, 64))
		{
			func_1008(cParam0);
			MemCopy(&Var0, {func_161(func_67(cParam0))}, 4);
			if (func_1011(cParam0, Var0))
			{
				if (func_473(cParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_109(cParam0, 128);
			}
		}
		else
		{
			if (func_473(cParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_109(cParam0, 128);
		}
	}
}

void func_478(char[4] cParam0, int iParam1)
{
	cParam0->f_596 = iParam1;
}

bool func_479(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_1012(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_474(cParam0, func_134(cParam0, 3), !func_14(cParam0, 2097152), cParam0->f_5410, !func_14(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_475(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
	{
		iVar0 = 0;
	}
	if (!_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	if (func_126(cParam0, 4) && !_0x0ee3f0d7feccc54f())
	{
		iVar0 = 0;
	}
	if (!func_29(&(cParam0->f_8269)))
	{
		MemCopy(&cVar1, {func_991(cParam0->f_607)}, 3);
		if (func_1013(&(cParam0->f_8269), &cVar1, 0, 1, 1))
		{
		}
		else
		{
			iVar0 = 0;
		}
	}
	if (func_134(cParam0, 1))
	{
		if (!func_32(&(cParam0->f_13115)))
		{
			func_33(&(cParam0->f_13115), 0);
		}
		if (func_1014(&(cParam0->f_13115)) < 30f)
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

bool func_480(char[4] cParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_1014(&(cParam0->f_603)) >= cParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_88(32768) && func_1015()) && func_1014(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_126(cParam0, 8) && is_valid_interior(get_interior_at_coords(func_132(cParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_132(cParam0->f_607)));
			func_308(cParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_1016(0, 0);
		func_308(cParam0, 4096);
		return true;
	}
	return false;
}

bool func_481(char[4] cParam0)
{
	Var0 = { func_1017(cParam0) };
	func_1018(cParam0);
	func_1019(cParam0);
	func_1020(cParam0);
	if (((func_39(cParam0) == 1 || func_39(cParam0) == 2) || func_39(cParam0) == 7) || func_39(cParam0) == 8)
	{
		func_1021(cParam0);
	}
	if (!func_521(iLocal_209, 0))
	{
		iLocal_209 = func_1022(Var0, Var0.f_3, 1, 1, 1, 1, 1);
		return false;
	}
	else
	{
		func_1023(cParam0, iLocal_209);
	}
	if (func_1024(cParam0))
	{
	}
	else
	{
		return false;
	}
	if (func_39(cParam0) >= 0 && func_39(cParam0) <= 2)
	{
		if (!func_1025())
		{
			return false;
		}
	}
	func_1026();
	if (func_39(cParam0) >= 8 && func_39(cParam0) <= 10)
	{
		func_1027(0);
		func_1027(1);
	}
	func_174(0);
	func_176(75, 1, 1);
	func_179(80, 0);
	Global_1914319->f_17371 = 0;
	func_1028(75, 1);
	func_1029(75);
	func_1030(19, 1);
	func_1031(3);
	set_entity_only_damaged_by_player(iLocal_209, false);
	if (func_39(cParam0) == 25)
	{
		return true;
	}
	if ((func_126(cParam0, 4) || func_126(cParam0, 4194304)) || func_134(cParam0, 2))
	{
		func_1032(-857562377, 0, 1, 1103626240);
	}
	else
	{
		func_1032(-857562377, 0, 0, 1103626240);
	}
	func_1033(cParam0);
	if (func_39(cParam0) == 0)
	{
		func_490(58);
	}
	if (func_39(cParam0) >= 8)
	{
		func_490(13);
		func_490(4);
	}
	if (func_39(cParam0) >= 6)
	{
		func_225(1500064347);
	}
	func_1034(cParam0);
	if (func_39(cParam0) >= 6)
	{
		if (func_215(&(iLocal_912[12])))
		{
			func_1035(&(iLocal_912[12]), 1, 0f, 0, 0, 0, 0, 0);
		}
		if (func_215(&(iLocal_912[13])))
		{
			func_1035(&(iLocal_912[13]), 1, 0f, 0, 0, 0, 0, 0);
		}
	}
	if (func_215(&(iLocal_912[10])))
	{
		func_1035(&(iLocal_912[10]), 1, 0f, 0, 0, 0, 0, 0);
	}
	if (func_215(&(iLocal_912[11])))
	{
		func_1035(&(iLocal_912[11]), 1, 0f, 0, 0, 0, 0, 0);
	}
	func_1036(&iLocal_374);
	func_1036(&iLocal_409);
	func_1036(&iLocal_421);
	func_1037(&uLocal_461);
	func_1038(&uLocal_820, 0);
	func_1039(&uLocal_819, 0);
	func_1040(&uLocal_866, 0);
	func_1041(&uLocal_882, 0);
	func_1042(&uLocal_825, 0);
	func_1042(&uLocal_829, 0);
	func_1042(&uLocal_833, 0);
	func_1042(&uLocal_839, 0);
	func_1042(&uLocal_844, 0);
	func_1042(&uLocal_847, 0);
	func_1042(&uLocal_850, 0);
	func_1043(&uLocal_911, 0);
	if (func_39(cParam0) >= 8 && func_39(cParam0) <= 25)
	{
		func_1044();
	}
	func_1045(cParam0);
	if (func_39(cParam0) >= 7 && func_39(cParam0) <= 12)
	{
		set_blocking_of_non_temporary_events(iLocal_209, true);
	}
	func_1046(cParam0);
	func_1047(cParam0);
	func_1048(cParam0);
	delete_all_trains();
	set_random_trains(false);
	set_create_random_cops(false);
	func_1049(&(iLocal_228[1]), 0);
	if (func_39(cParam0) <= 12)
	{
		func_47(1);
	}
	if (func_39(cParam0) >= 9)
	{
		_report_crime(player_id(), -493957506, 0, 0, true);
	}
	func_1050(1);
	func_1051(2);
	func_1052(cParam0);
	func_1054(cParam0, 187188);
	func_1056(cParam0, 187492);
	func_1058(cParam0, 190883);
	func_1059(cParam0);
	if (func_39(cParam0) <= 6)
	{
		set_audio_flag("OpenWorldMusicOnMission", true);
	}
	return true;
}

void func_482(char[4] cParam0, int iParam1)
{
	func_72(iParam1);
	cParam0->f_10783 = iParam1;
}

bool func_483(char[4] cParam0)
{
	func_1060(cParam0);
	func_1061(cParam0);
	iVar0 = func_39(cParam0);
	iVar1 = func_41(cParam0);
	iVar2 = func_168(cParam0, iVar0);
	if (func_14(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_1009(cParam0);
		}
	}
	func_1062(cParam0);
	func_1063(cParam0);
	func_1064(cParam0);
	func_1065(cParam0);
	func_1066(cParam0);
	func_1067(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_1068(cParam0);
	}
	if ((func_39(cParam0) == 0 && iVar2 < 3) && func_322(cParam0) == 0)
	{
		func_477(cParam0);
	}
	if (func_127(cParam0, iVar0, 512))
	{
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
		set_parked_vehicle_density_multiplier_this_frame(0f);
	}
	func_80(cParam0);
	switch (iVar2)
	{
		case 0:
			if (func_1069(cParam0, iVar0, 0))
			{
				if (func_1070(cParam0, func_39(cParam0)) != -1 && _0x62de46f061caa468() < func_1070(cParam0, func_39(cParam0)))
				{
					_0xf008e0ba1fe1d644((func_1070(cParam0, func_39(cParam0)) - _0x62de46f061caa468()));
				}
				if ((func_39(cParam0) == 25 || func_39(cParam0) == 26) && func_88(32768))
				{
					func_422(cParam0, 524288);
				}
				if (func_126(cParam0, 4))
				{
					if (!func_14(cParam0, 4))
					{
						func_1071(cParam0, iVar0);
						func_105(cParam0, 4);
					}
					func_1072(cParam0);
					func_1073(cParam0, iVar0, 1);
				}
				else
				{
					func_1073(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_1012(cParam0))
			{
				if (func_1074(cParam0))
				{
					if (func_14(cParam0, 4))
					{
						func_1010(cParam0, 4);
					}
					func_1073(cParam0, iVar0, 2);
				}
			}
			else if (func_1075(cParam0) >= cParam0->f_13144)
			{
				if (func_14(cParam0, 4))
				{
					func_1010(cParam0, 4);
				}
				func_1073(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_1069(cParam0, iVar0, 2))
			{
				if (!func_1076(cParam0))
				{
					func_1073(cParam0, iVar0, 4);
					if (func_1077(cParam0, iVar0, iVar1))
					{
						func_1073(cParam0, iVar0, 5);
					}
				}
				else
				{
					func_1078(cParam0);
					func_1073(cParam0, iVar0, 3);
					if (func_1079(cParam0, iVar0))
					{
						func_1073(cParam0, iVar0, 4);
						if (func_1077(cParam0, iVar0, iVar1))
						{
							func_1073(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_1080(cParam0))
			{
				func_1079(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_1079(cParam0, iVar0))
			{
				func_1073(cParam0, iVar0, 4);
				if (func_1077(cParam0, iVar0, iVar1))
				{
					func_1073(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_1077(cParam0, iVar0, iVar1))
			{
				func_1073(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_26() == 0)
			{
				func_1081(cParam0);
				func_1082(cParam0, iVar0);
				func_1083(cParam0);
				func_1084(cParam0);
				if (func_127(cParam0, iVar1, 2))
				{
					if (func_1085(cParam0, iVar1))
					{
						func_1086(cParam0, iVar1);
					}
				}
			}
			if (func_1069(cParam0, iVar0, 5))
			{
				if (func_1069(cParam0, iVar0, 7))
				{
					if (!func_127(cParam0, func_39(cParam0), 67108864))
					{
						func_1087(cParam0, func_39(cParam0));
					}
					func_1088(cParam0, iVar1);
					func_1061(cParam0);
					return true;
				}
				else
				{
					func_1073(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_127(cParam0, func_39(cParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_127(cParam0, func_39(cParam0), 16))
					{
						do_screen_fade_in(0);
						func_1089(0);
					}
					func_146(cParam0, func_39(cParam0), 4194304);
				}
				if ((func_1090(get_player_index(), 0, 0, 1) && !func_126(cParam0, 8192)) && !func_127(cParam0, func_39(cParam0), 8))
				{
					func_53(1, 0);
					func_1091("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_1092(cParam0))
					{
						func_1073(cParam0, iVar0, 6);
					}
				}
				if (func_14(cParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_42(cParam0, func_40(iVar0), func_40(iVar1), iVar0, iVar1);
						func_1010(cParam0, 268435456);
					}
				}
				if (func_126(cParam0, 1048576))
				{
					if (func_133(func_40(0)))
					{
						func_308(cParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_26() == 0)
			{
				func_1081(cParam0);
				func_1082(cParam0, iVar0);
				func_1083(cParam0);
				func_1084(cParam0);
				if (func_127(cParam0, func_41(cParam0), 2))
				{
					if (func_1085(cParam0, func_41(cParam0)))
					{
						func_1086(cParam0, func_41(cParam0));
					}
				}
			}
			if ((!func_1090(get_player_index(), 0, 0, 1) || func_126(cParam0, 8192)) || func_127(cParam0, func_39(cParam0), 8))
			{
				if (func_1069(cParam0, iVar0, 5))
				{
					if (func_1093(cParam0))
					{
						func_1073(cParam0, iVar0, 7);
					}
				}
				else
				{
					func_1093(cParam0);
					func_1073(cParam0, iVar0, 5);
				}
			}
			else
			{
				func_1069(cParam0, iVar0, 5);
				func_1094(cParam0);
			}
			break;
		case 7:
			if (func_1069(cParam0, iVar0, 7))
			{
				if (!func_127(cParam0, func_39(cParam0), 67108864))
				{
					func_1087(cParam0, func_39(cParam0));
				}
				func_1088(cParam0, iVar1);
				func_1061(cParam0);
				return true;
			}
			break;
		default:
			func_1073(cParam0, iVar0, 7);
			break;
	}
	return false;
}

void func_484(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_529(iParam1))
	{
		return;
	}
	iVar0 = func_1095(iParam1);
	if (func_1096(iParam1))
	{
		if (!func_1097(iParam1))
		{
			return;
		}
	}
	func_1098(iParam1, 39, 1);
	func_189(iParam1, 64, 0);
	(*Global_1360165)[iParam1]->f_70.f_11 = 0;
	func_189(iParam1, 8, 0);
	if (does_entity_exist(iVar0))
	{
		if (!bParam2)
		{
			func_189(iParam1, 512, 1);
			set_ped_keep_task(iVar0, true);
		}
		else
		{
			set_blocking_of_non_temporary_events(iVar0, false);
			func_1099(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1100(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_485(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		if (does_entity_exist(iParam0[iVar0]))
		{
			func_217((*iParam0)[iVar0], bParam1);
			(*iParam0)[iVar0] = 0;
			return false;
		}
		iVar0++;
	}
	return true;
}

bool func_486(int iParam0, bool bParam1)
{
	if (func_26() != -1)
	{
		return false;
	}
	if (!func_544(iParam0))
	{
		return false;
	}
	if (!func_1101(iParam0) && bParam1)
	{
		return false;
	}
	return func_1102(iParam0, 1);
}

void func_487(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_544(iParam0))
	{
		return;
	}
	if (!func_1102(iParam0, 1))
	{
		return;
	}
	if (!func_1102(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_1101(iParam0)) && func_1103(iParam0))
	{
		return;
	}
	func_489(iParam0, 1);
	func_1104(iParam0);
	if (func_546(func_545(iParam0)))
	{
		iVar0 = func_547(iParam0);
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
		func_489(iParam0, 16);
	}
	if (func_1102(iParam0, 128) && !bParam3)
	{
		func_1105(iParam0, 0);
	}
}

void func_488()
{
	if (Global_1934765->f_286 > 300)
	{
		Global_1934765->f_286 = 300;
	}
	_0x2f9ac754fe179d58(func_1106());
}

void func_489(int iParam0, int iParam1)
{
	if (func_26() != -1)
	{
		return;
	}
	if (!func_544(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

bool func_490(int iParam0)
{
	if (!func_544(iParam0))
	{
		return false;
	}
	if (!func_546(func_545(iParam0)))
	{
		return true;
	}
	if (!_0x800df3fc913355f3(func_547(iParam0)))
	{
		return false;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_547(iParam0))))
		{
			return true;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_547(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_547(iParam0));
	return true;
}

void func_491(int iParam0, int iParam1)
{
	if (func_26() != -1)
	{
		return;
	}
	if (!func_544(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

int func_492(int iParam0, int iParam1)
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
			Jump @2079; //curOff = 542
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
			Jump @2079; //curOff = 608
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
			Jump @2079; //curOff = 674
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
			Jump @2079; //curOff = 729
			switch (iParam1)
			{
				case 17:
					return 22;
				case 31:
					return 118;
				default:
					break;
			}
			Jump @2079; //curOff = 762
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
			Jump @2079; //curOff = 1004
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
			Jump @2079; //curOff = 1136
			switch (iParam1)
			{
				case 9:
					return 35;
				default:
					break;
			}
			Jump @2079; //curOff = 1158
			switch (iParam1)
			{
				case 18:
					return 4;
				default:
					break;
			}
			Jump @2079; //curOff = 1179
			switch (iParam1)
			{
				case 2:
					return 23;
				case 1:
					return 24;
				default:
					break;
			}
			Jump @2079; //curOff = 1212
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
			Jump @2079; //curOff = 1278
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
			Jump @2079; //curOff = 1388
			switch (iParam1)
			{
				case 18:
					return 5;
				default:
					break;
			}
			Jump @2079; //curOff = 1409
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
			Jump @2079; //curOff = 1585
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
			Jump @2079; //curOff = 1662
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
			Jump @2079; //curOff = 1735
			switch (iParam1)
			{
				case 18:
					return 34;
				default:
					break;
			}
			Jump @2079; //curOff = 1757
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
			Jump @2079; //curOff = 1801
			switch (iParam1)
			{
				case 31:
					return 119;
				default:
					break;
			}
			Jump @2079; //curOff = 1823
			switch (iParam1)
			{
				case 31:
					return 122;
				default:
					break;
			}
			Jump @2079; //curOff = 1845
			switch (iParam1)
			{
				case 31:
					return 124;
				default:
					break;
			}
			Jump @2079; //curOff = 1867
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
			Jump @2079; //curOff = 1933
			switch (iParam1)
			{
				case 3:
					return 95;
				case 2:
					return 96;
				default:
					break;
			}
			Jump @2079; //curOff = 1966
			switch (iParam1)
			{
				case 4:
					return 98;
				default:
					break;
			}
			Jump @2079; //curOff = 1988
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
			Jump @2079; //curOff = 2032
			switch (iParam1)
			{
				case 18:
					return 67;
				default:
					break;
			}
			Jump @2079; //curOff = 2054
			switch (iParam1)
			{
				case 4:
					return 125;
				default:
					break;
			}
			return -1;
		}

bool func_493(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_494(int iParam0, int iParam1)
{
	if (!func_493(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

void func_495(int iParam0, int iParam1)
{
	if (!func_493(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_496(int iParam0)
{
	func_1107(func_497(iParam0));
}

int func_497(int iParam0)
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

bool func_498(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 35);
}

void func_499(int iParam0, bool bParam1)
{
	if (!func_498(iParam0))
	{
		return;
	}
	if ((bParam1 && func_1108(iParam0, 512)) || (!bParam1 && !func_1108(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_1109(iParam0, 512);
	}
	else
	{
		func_1110(iParam0, 512);
	}
	if (func_1111(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

bool func_500(int iParam0)
{
	if (!func_1112(iParam0))
	{
		return false;
	}
	return (!func_440() || is_bit_set(Global_40.f_7854, iParam0));
}

int func_501(int iParam0)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return -1;
	}
	return &(Global_1899528->f_11[iParam0]);
}

bool func_502(int iParam0)
{
	*iParam0 = -1;
	iVar0 = 0;
	while (iVar0 < &Global_1392915)
	{
		if (func_1113(iVar0))
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_503(int iParam0, int iParam1)
{
	if (iParam0 == -1 || iParam0 >= 33)
	{
		return;
	}
	Global_1899528->f_11[iParam0] = iParam1;
}

bool func_504(int iParam0, int iParam1)
{
	return (Global_1899528->f_3[iParam0] && iParam1) != 0;
}

void func_505(int iParam0)
{
	Global_1899528->f_3[iParam0] = 0;
}

int func_506(int iParam0, int iParam1)
{
	return func_406(iParam0, iParam1, 4, get_hash_key(func_1114(iParam1)));
}

void func_507(int iParam0, int iParam1)
{
	if (!func_504(iParam0, iParam1))
	{
	}
	Global_1899528->f_3[iParam0] = (Global_1899528->f_3[iParam0] || iParam1);
}

bool func_508(int iParam0)
{
	return func_339(iParam0) == 0;
}

int func_509(int iParam0)
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

int func_510(int iParam0)
{
	if (&Global_1898329 == 15)
	{
		return -1;
	}
	if (!func_508(iParam0))
	{
		return -1;
	}
	if (func_26() != -1)
	{
		iVar2 = func_509(iParam0);
		if (iVar2 >= 0)
		{
			func_1115(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar1 = &Global_1898329;
			(*Global_1898330)[iVar1] = iParam0;
			*(*Global_1898346)[iVar1] = { Var3 };
			func_1116(iVar1, 1);
			func_1115(iParam0, 1);
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
		iVar2 = func_509(iParam0);
		if (iVar2 >= 0)
		{
			func_1115(iParam0, 1);
			return iVar2;
		}
		else
		{
			iVar0 = 0;
			while (iVar0 < &Global_1898330)
			{
				if (!func_234(Global_1898330[iVar0]))
				{
					(*Global_1898330)[iVar0] = iParam0;
					*(*Global_1898346)[iVar0] = { Var3 };
					func_1116(iVar0, 1);
					func_1115(iParam0, 1);
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

void func_511(int iParam0, bool bParam1, float fParam2)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_1117(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	func_1118(iVar0);
	if (iVar0 == Global_1934765->f_338)
	{
		if (Global_1934765->f_337 == 0)
		{
			func_1119();
		}
		else
		{
			func_1120(bParam1, fParam2);
		}
	}
	else
	{
		uVar1 = Global_1934765->f_338;
		Global_1934765->f_338 = func_1121();
	}
}

bool func_512(int iParam0)
{
	return _0xfe5c6177064bd390(iParam0);
}

bool func_513(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_514(var uParam0, var uParam1)
{
	if (func_523(uParam1, 4))
	{
		if (!func_1122(uParam0->f_1))
		{
			func_525(uParam1, 4);
		}
	}
}

void func_515()
{
	_0x88544c0e3291dcae(1);
	func_186();
}

char* func_516(var uParam0, var uParam1)
{
	switch (uParam0->f_3)
	{
		case 0:
			if (uParam0->f_69)
			{
				return "DUEL_OBJ_FILL";
			}
			else
			{
				return "DUEL_OBJ_FILL_ALT";
			}
			break;
		case 1:
			if (uParam0->f_69)
			{
				return "DUEL_OBJ_DRAW";
			}
			else
			{
				return "DUEL_OBJ_DRAW_ALT";
			}
			break;
		case 2:
			if (!is_string_null_or_empty(&(uParam1->f_36)))
			{
				return func_1123(uParam1->f_36);
			}
			else
			{
				return "DUEL_OBJ_FIRE";
			}
			break;
	}
	return "";
}

void func_517(char* sParam0, int iParam1)
{
	Var0.f_1 = sParam0;
	iVar2 = _0x4e88a65968a55c78(&Var0, iParam1);
	if (func_592(iVar2))
	{
		_0x2f901291ef177b02(iVar2, 0);
	}
}

void func_518()
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

void func_519()
{
}

void func_520(float fParam0)
{
	fParam0->f_1 = 0f;
	fParam0->f_2 = 0f;
	*fParam0 = 0;
}

bool func_521(int iParam0, int iParam1)
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
	if (func_436(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_436(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_436(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_436(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_436(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_436(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_436(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_436(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

bool func_522(var uParam0, int iParam1)
{
	return (uParam0->f_88 && iParam1) != 0;
}

bool func_523(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_524(bool bParam0, var uParam1, var uParam2, float fParam3, int iParam4)
{
	fVar6 = func_1124(uParam1->f_42, uParam1->f_45, 1);
	fVar7 = func_1124(uParam1->f_45, uParam1->f_42, 1);
	if (func_83() == 76)
	{
		vVar0 = { -269.649f, 791.1334f, 17.58054f };
		vVar3 = { -342.3348f, 777.1977f, 215.2967f };
	}
	else if (func_83() == 105)
	{
		vVar0 = { 1312.238f, -1296.278f, 0.850876f };
		vVar3 = { 1432.387f, -1431.857f, 179.1864f };
	}
	else
	{
		vVar0 = { _get_object_offset_from_coords(uParam1->f_42, fVar6, 0f, fParam3, -100f) };
		vVar3 = { _get_object_offset_from_coords(uParam1->f_45, fVar7, 0f, fParam3, 100f) };
	}
	if (bParam0)
	{
		if (func_523(uParam2, 2))
		{
			set_roads_back_to_original_in_angled_area(vVar0, vVar3, iParam4, 0, 1);
		}
	}
	else if (!func_523(uParam2, 2))
	{
		set_roads_in_angled_area(vVar0, vVar3, iParam4, 0, bParam0, 1, 0);
		func_1125(uParam2, 2);
	}
}

void func_525(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 - (uParam0->f_1 && iParam1));
}

void func_526(var uParam0, var uParam1, bool bParam2)
{
	if (func_523(uParam1, 1024) || bParam2)
	{
		if (func_521(uParam0->f_3, 0))
		{
			if (does_entity_exist(uParam0->f_3))
			{
				set_ped_config_flag(uParam0->f_3, 136, false);
				func_307(uParam0->f_3, 0);
			}
		}
		func_525(uParam1, 1024);
	}
}

void func_527()
{
	func_1126(Global_35, &(Global_1347400->f_46));
}

void func_528(var uParam0, int iParam1)
{
	uParam0->f_55 = iParam1;
}

bool func_529(int iParam0)
{
	return iParam0 > -1;
}

bool func_530(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 6);
}

int func_531()
{
	if (func_26() == 0)
	{
		return -1;
	}
	iVar0 = func_245();
	if (iVar0 == -1)
	{
		return 150000;
	}
	if (iVar0 <= 1)
	{
		return 30000;
	}
	if (iVar0 == 2 && !func_1127(24))
	{
		return 50000;
	}
	return 150000;
}

int func_532()
{
	return Global_1934266->f_4;
}

void func_533(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			_0x74bcceb233ad95b2(-1743273232, iParam1);
			break;
		case 1:
			_0x74bcceb233ad95b2(-948016518, iParam1);
			break;
		case 2:
			_0x74bcceb233ad95b2(580522491, iParam1);
			break;
		case 3:
			_0x74bcceb233ad95b2(1176390239, iParam1);
			break;
		case 4:
			_0x74bcceb233ad95b2(1791198853, iParam1);
			break;
		default:
			break;
	}
}

void func_534(int iParam0)
{
	iVar0 = func_1128(iParam0);
	switch (iParam0)
	{
		case 0:
			_0x74bcceb233ad95b2(-1047841819, iVar0);
			break;
		case 1:
			_0x74bcceb233ad95b2(-1349566727, iVar0);
			break;
		case 2:
			_0x74bcceb233ad95b2(613491521, iVar0);
			break;
		case 3:
			_0x74bcceb233ad95b2(1452147132, iVar0);
			break;
		case 4:
			_0x74bcceb233ad95b2(-885198919, iVar0);
			break;
		default:
			break;
	}
}

bool func_535(int iParam0, int iParam1)
{
	if (!func_530(iParam0))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return (Global_40.f_358[iParam0]->f_5 && iParam1) != 0;
	}
	return (Global_1058888->f_42266[iParam0]->f_5 && iParam1) != 0;
}

void func_536(int iParam0, bool bParam1)
{
	if (!func_530(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1129(iParam0, 4);
	}
	else
	{
		func_1130(iParam0, 4);
	}
	func_1131(iParam0, bParam1);
}

void func_537(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0]->f_1 = 0f;
		(*uParam0)[iVar0]->f_2 = 0f;
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_538(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_218((*iParam0)[iVar0]);
		iVar0++;
	}
}

void func_539()
{
	iVar0 = 0;
	while (iVar0 <= (17 - 1))
	{
		func_1132(iVar0);
		iVar0++;
	}
}

int func_540(int iParam0, int iParam1)
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

void func_541(int iParam0)
{
	if (_does_scenario_point_exist(&(iLocal_330[iParam0])))
	{
		_delete_scenario_point(&(iLocal_330[iParam0]));
	}
}

void func_542(int iParam0)
{
	if (_does_scenario_point_exist(&(uLocal_337[iParam0])))
	{
		_delete_scenario_point(&(uLocal_337[iParam0]));
	}
}

void func_543(int* iParam0, bool bParam1)
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
		func_1133(iParam0);
		delete_vehicle(iParam0);
	}
}

bool func_544(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

int func_545(int iParam0)
{
	if (!func_544(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_546(int iParam0)
{
	return iParam0 != 0;
}

int func_547(int iParam0)
{
	if (!func_544(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

void func_548(int iParam0)
{
	if (_does_anim_scene_exist(&(uLocal_466[iParam0])))
	{
		if (iParam0 == 0)
		{
		}
		else if (iParam0 == 1)
		{
		}
		else if (iParam0 == 2)
		{
		}
		else if (iParam0 == 3)
		{
		}
		else if (iParam0 == 4)
		{
		}
		else if (iParam0 == 5)
		{
		}
		else if (iParam0 == 6)
		{
		}
		else if (iParam0 == 7)
		{
		}
		else if (iParam0 == 8)
		{
		}
		else if (iParam0 == 10)
		{
		}
		else if (iParam0 == 12)
		{
		}
		else if (iParam0 == 13)
		{
		}
		_delete_anim_scene(&(uLocal_466[iParam0]));
	}
}

void func_549(int iParam0, int iParam1)
{
	func_1134(iParam0, iParam1);
}

void func_550(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_26() != -1)
	{
		uVar3 = &Global_36638.f_1444[iVar1];
		clear_bit(&uVar3, iVar2);
		Global_36638.f_1444[iVar1] = uVar3;
		return;
	}
	uVar4 = &Global_40.f_7832[iVar1];
	clear_bit(&uVar4, iVar2);
	Global_40.f_7832[iVar1] = uVar4;
}

int func_551(int iParam0, float fParam1, bool bParam2, bool bParam3)
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

char* func_552(var uParam0)
{
	switch (uParam0->f_188)
	{
		case -50684386:
			return "AT_COW";
		case -753902995:
			return "AT_GOAT";
		case 40345436:
			return "AT_SHEEP";
		case -1038436471:
			return "AT_HORSE";
	}
	return "HERDING_GTHILO";
}

void func_553(var uParam0)
{
	uParam0->f_187 = 0;
}

void func_554(var uParam0)
{
	if (func_592(uParam0->f_799))
	{
		func_119(1);
	}
}

bool func_555(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_556(int iParam0, int iParam1, bool bParam2)
{
	if (!func_529(iParam0))
	{
		return;
	}
	func_1135(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_557(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (func_26() != -1)
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

int func_558(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return -1;
	}
	if (!func_557(iParam0))
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

void func_559(int iParam0)
{
	func_556(iParam0, 8, 0);
}

bool func_560(char[4] cParam0, int iParam1)
{
	return func_564(cParam0, iParam1, &uVar0);
}

void func_561(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	iVar0 = get_blip_from_entity(iParam0);
	func_218(&iVar0);
}

void func_562(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_564(cParam0, iParam1, &iVar0))
	{
		return;
	}
	func_1136(cParam0->f_5423[iVar0], iParam2);
}

void func_563(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_564(cParam0, iParam1, &iVar0))
	{
		return;
	}
	func_1137(cParam0->f_5423[iVar0], iParam2);
}

bool func_564(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_297(cParam0->f_5423[iVar0]))
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

void func_565(var uParam0)
{
	if (func_613(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_613(uParam0, 1024);
	if (func_613(uParam0, 128) || bVar0)
	{
		if (func_613(uParam0, 4096))
		{
			if (!func_613(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_1137(uParam0, 2048);
				return;
			}
		}
		else if (func_613(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_1136(uParam0, 2048);
		}
		if (func_613(uParam0, 512))
		{
			if (func_614(uParam0->f_10))
			{
				if (func_1001(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_1138(uParam0->f_10))
					{
						func_618(uParam0->f_10, 1);
						func_213(uParam0->f_10, 0);
					}
				}
				else if ((func_1138(uParam0->f_10) && !bVar0) && !func_613(uParam0, 16384))
				{
					func_618(uParam0->f_10, 0);
					func_213(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_1001(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_1001(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_613(uParam0, 512))
	{
		if (func_614(uParam0->f_10))
		{
			if (func_1138(uParam0->f_10))
			{
				func_618(uParam0->f_10, 0);
				func_213(uParam0->f_10, 1);
			}
		}
	}
	else if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
}

void func_566(int iParam0)
{
	if (!func_529(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 != (*Global_1360165)[iParam0]->f_13 || func_1139(iParam0, 36, 1))
	{
		func_1098(iParam0, 36, 1);
		(*Global_1360165)[iParam0]->f_12 = (*Global_1360165)[iParam0]->f_13;
		func_1140(iParam0, &((*Global_1360165)[iParam0]->f_2));
	}
}

bool func_567(int iParam0)
{
	if (func_215(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

bool func_568()
{
	return true;
}

bool func_569(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	bVar0 = func_26() != -1;
	switch (iParam0)
	{
		case 76:
			*iParam1 = 0;
			if (bParam3)
			{
				*iParam2 = 47;
			}
			else
			{
				*iParam2 = 63;
			}
			if (bVar0)
			{
				*iParam2 = 5;
			}
			break;
		case 105:
			*iParam1 = 69;
			if (bParam3)
			{
				*iParam2 = 127;
			}
			else
			{
				*iParam2 = 136;
			}
			if (bVar0)
			{
				*iParam2 = 72;
			}
			break;
		case 5:
			*iParam1 = 137;
			*iParam2 = 324;
			if (bVar0)
			{
				*iParam2 = 142;
			}
			break;
		case 61:
			*iParam1 = 380;
			*iParam2 = 381;
			if (bVar0)
			{
				*iParam2 = 380;
			}
			break;
		case 78:
			*iParam1 = 382;
			*iParam2 = 431;
			if (bVar0)
			{
				*iParam2 = 384;
			}
			break;
		case 92:
			*iParam1 = 443;
			*iParam2 = 471;
			if (bVar0)
			{
				*iParam2 = 443;
			}
			break;
		case 26:
			*iParam1 = 472;
			if (bParam3)
			{
				*iParam2 = 500;
			}
			else
			{
				*iParam2 = 502;
			}
			if (bVar0)
			{
				*iParam2 = 472;
			}
			break;
		case 38:
			*iParam1 = 508;
			*iParam2 = 553;
			if (bVar0)
			{
				*iParam2 = 509;
			}
			break;
		case 68:
			*iParam1 = 554;
			*iParam2 = 565;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 65:
			*iParam1 = 566;
			*iParam2 = 588;
			if (bVar0)
			{
				*iParam2 = 566;
			}
			break;
		case 69:
			*iParam1 = 589;
			if (bParam3)
			{
				*iParam2 = 598;
			}
			else
			{
				*iParam2 = 612;
			}
			if (bVar0)
			{
				*iParam2 = 590;
			}
			break;
		case 75:
			*iParam1 = 503;
			*iParam2 = 506;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 93:
			*iParam1 = 613;
			*iParam2 = 625;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 95:
			*iParam1 = 626;
			*iParam2 = 641;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 97:
			*iParam1 = 642;
			*iParam2 = 643;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 3:
			*iParam1 = 644;
			*iParam2 = 656;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 6:
			*iParam1 = 657;
			*iParam2 = 658;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 32:
			*iParam1 = 325;
			*iParam2 = 344;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 82:
			*iParam1 = 659;
			if (bParam3)
			{
				*iParam2 = 673;
			}
			else
			{
				*iParam2 = 690;
			}
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 35:
			*iParam1 = 691;
			*iParam2 = 700;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 56:
			*iParam1 = 701;
			*iParam2 = 708;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 22:
			if (bParam4)
			{
				*iParam1 = 715;
			}
			else
			{
				*iParam1 = 715;
			}
			*iParam2 = 723;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 110:
			*iParam1 = 724;
			*iParam2 = 730;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 64:
			*iParam1 = 736;
			*iParam2 = 740;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 66:
			*iParam1 = 745;
			*iParam2 = 750;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 70:
			*iParam1 = 751;
			*iParam2 = 754;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 77:
			*iParam1 = 731;
			*iParam2 = 732;
			break;
		case 96:
			*iParam1 = 741;
			*iParam2 = 743;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 29:
			*iParam1 = 744;
			*iParam2 = 744;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 100:
			*iParam1 = 755;
			*iParam2 = 763;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 102:
			*iParam1 = 764;
			*iParam2 = 767;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 72:
			*iParam1 = 733;
			*iParam2 = 735;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 124:
			*iParam1 = 791;
			*iParam2 = 793;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 86:
			*iParam1 = 768;
			*iParam2 = 772;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 126:
			*iParam1 = 773;
			*iParam2 = 779;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 120:
			*iParam1 = 432;
			*iParam2 = 442;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 115:
			*iParam1 = 345;
			*iParam2 = 375;
			if (bVar0)
			{
				*iParam2 = 375;
			}
			break;
		case 125:
			*iParam1 = 376;
			*iParam2 = 379;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 116:
			*iParam1 = 783;
			*iParam2 = 790;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 21:
			*iParam1 = 780;
			*iParam2 = 782;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 42:
			*iParam1 = 794;
			*iParam2 = 798;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 89:
			*iParam1 = 799;
			*iParam2 = 800;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 23:
			*iParam1 = 801;
			*iParam2 = 801;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 28:
			*iParam1 = 802;
			*iParam2 = 803;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 101:
			*iParam1 = 804;
			*iParam2 = 806;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 117:
			*iParam1 = 507;
			*iParam2 = 507;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 11:
			*iParam1 = 807;
			*iParam2 = 833;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		case 128:
			*iParam1 = 834;
			*iParam2 = 857;
			if (bVar0)
			{
				*iParam1 = -1;
				*iParam2 = -1;
			}
			break;
		default:
			*iParam1 = -1;
			*iParam2 = -1;
			break;
	}
	if (*iParam1 == -1 || *iParam2 == -1)
	{
		return false;
	}
	return true;
}

void func_570(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_571()
{
	func_225(-939420910);
	func_225(-1187950766);
	func_225(356365161);
	func_225(753127042);
	func_225(-2038424081);
	func_225(1884271742);
	func_225(459290420);
}

void func_572()
{
	func_225(704802028);
	func_225(588987611);
	func_225(2008888900);
	func_225(1649996811);
	func_225(227918160);
	func_225(168171957);
	func_225(1193080109);
	func_225(-491981251);
	func_225(-639037538);
	func_225(-618620429);
}

bool func_573(int iParam0)
{
	iVar0 = func_540(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

int func_574(int iParam0, bool bParam1, bool bParam2)
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

bool func_575(int iParam0)
{
	return func_1141(iParam0, 2);
}

int func_576(int iParam0)
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

int func_577(int iParam0)
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

int func_578(int iParam0)
{
	return iParam0 & 31;
}

bool func_579()
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

int func_580(int iParam0)
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

int func_581(int iParam0)
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

void func_582(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_583()
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

int func_584(int iParam0)
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

void func_585(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_586(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_1142(iParam0);
	}
	else
	{
		func_1143(iParam0, iParam1);
	}
	func_1144();
}

bool func_587(int iParam0)
{
	if (!func_234(iParam0))
	{
		return false;
	}
	switch (func_239(iParam0))
	{
		case 1:
			switch (func_315(iParam0))
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
			switch (func_315(iParam0))
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

void func_588(int iParam0)
{
	iVar2 = func_1145(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_697(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_1147(func_1146(iParam0), 6);
}

void func_589(int iParam0)
{
	iVar2 = func_1145(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_697(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_1148(func_1146(iParam0), 6);
}

int func_590(int iParam0)
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

int func_591(int iParam0)
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
	func_1149(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_592(int iParam0)
{
	return iParam0 != 0;
}

bool func_593(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_594(int iParam0, var uParam1)
{
	if (!func_593(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_1150(iParam0, *uParam1, 0);
	func_1151(uParam1);
	Global_1935183->f_24 = 1;
}

void func_595(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_596(float fParam0, float fParam1)
{
	fParam0->f_1 = (func_648() - fParam1);
	func_1152(fParam0, 1);
	func_1153(fParam0, 2);
	fParam0->f_2 = 0f;
}

bool func_597(float fParam0)
{
	return func_263(*fParam0, 2);
}

int func_598()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_599(bool bParam0)
{
	if (func_1154())
	{
		Global_1357509 = 1;
	}
	if (func_1155(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

struct<4> func_600(int iParam0, int iParam1)
{
	Var0 = { func_1156(iParam0, iParam1) };
	Var0.f_3 = func_1157(iParam0, iParam1);
	return Var0;
}

int func_601(int iParam0)
{
	if (func_239(iParam0) == 1)
	{
		return func_315(iParam0);
	}
	return -1;
}

int func_602(int iParam0)
{
	if (func_239(iParam0) == 8)
	{
		return func_315(iParam0);
	}
	return -1;
}

char[] func_603(int iParam0)
{
	if (!func_316(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_604(int iParam0, bool bParam1)
{
	if (func_26() != -1)
	{
		return;
	}
	if (iParam0 == 0 && func_88(32768))
	{
		return;
	}
	if (!func_88(32768))
	{
		func_1158(1, bParam1);
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
	if (func_88(32768))
	{
		(*Global_2621440)[iParam0]->f_9.f_14 = func_328();
	}
}

void func_605(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_415(vParam1, 1);
}

bool func_606(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_607(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_608(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_609(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_610(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_611(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_612()
{
	return Global_1109400->f_245;
}

bool func_613(var uParam0, int iParam1)
{
	return func_436(uParam0->f_64, iParam1);
}

bool func_614(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_615(int iParam0)
{
	return func_804(iParam0, 16, 1);
}

void func_616(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_564(cParam0, iParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(iParam1) && func_1159(cParam0, get_object_index_from_entity_index(iParam1)))
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

void func_617(int iParam0)
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

void func_618(int iParam0, bool bParam1)
{
	if (!func_529(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_555(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_556(iParam0, 1, 0);
		}
	}
	func_556(iParam0, 16, bParam1);
}

void func_619(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_614(iParam0))
	{
		return;
	}
	if (func_615(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_1099(iParam0, 56, 1);
		func_33(&(Global_1359489->f_40), 1);
	}
	func_618(iParam0, 0);
	func_556(iParam0, 4, 0);
	func_559(iParam0);
	func_1160(iParam0);
	func_1098(iParam0, 37, 1);
	bVar0 = func_521(Global_1360165[iParam0], 0);
	iVar1 = func_1161(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_1139(iParam0, 64, 1))
	{
		func_1098(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_1098(iParam0, 33, 1);
		func_1098(iParam0, 34, 1);
		func_1162(iParam0, 1056964608, -1, 1061158912);
		func_1163(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_1099(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_1099(iParam0, 35, 1);
			if (bParam8)
			{
				func_1099(iParam0, 62, 1);
			}
		}
		if (bVar0)
		{
			func_1164(iParam0, 0);
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
		func_1098(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_1099(iParam0, 33, 1);
		func_1163(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_33(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_520(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_1099(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_1165(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_1139(iParam0, 45, 1))
	{
		func_1098(iParam0, 45, 1);
	}
	func_1166(iParam0, 16, 1);
	func_1098(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_521(func_1095(iParam0), 0))
		{
			func_484(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_620(int iParam0)
{
	iParam0 = func_309(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_305(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_627(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_627(iParam0);
	}
}

bool func_621(int iParam0)
{
	iParam0 = func_309(iParam0);
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

void func_622(int iParam0)
{
	iParam0 = func_309(iParam0);
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

void func_623(int iParam0)
{
	iParam0 = func_309(iParam0);
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

bool func_624(int iParam0)
{
	if (!func_1167(iParam0))
	{
		return false;
	}
	if (!func_374())
	{
		return true;
	}
	return false;
}

void func_625(int iParam0)
{
	iParam0 = func_309(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_628(iParam0))
	{
		return;
	}
	iVar0 = func_259(iParam0);
	func_1168(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_624(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1169(iParam0, 0);
	func_627(iParam0);
}

bool func_626(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_304(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_627(int iParam0)
{
	iParam0 = func_309(iParam0);
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

bool func_628(int iParam0)
{
	iParam0 = func_309(iParam0);
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

void func_629(int iParam0)
{
	if (is_player_dead(player_id()))
	{
		return;
	}
	iVar0 = func_259(iParam0);
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
	if (func_1170(iParam0, 64))
	{
		func_622(iParam0);
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
	bVar3 = func_695(42);
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
				func_1171(&((*Global_1900383)[iParam0]->f_27));
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
		func_622(iParam0);
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
		if (func_1172(1) < 1)
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
		func_1173(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1170(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1174(iParam0);
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
	fVar15 = func_1175(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1176(iParam0))
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
		func_1177((*Global_1900383)[iParam0]->f_26);
		func_1178((*Global_1900383)[iParam0]->f_26);
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
	if (func_1002(iVar0) && !bVar9)
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
	iVar21 = func_1172(iParam0);
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

int func_630(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_631(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_632(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_633(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_634(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_635(int iParam0)
{
	iParam0 = func_309(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_628(iParam0))
	{
		return false;
	}
	iVar0 = func_259(iParam0);
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

void func_636(int iParam0)
{
	iParam0 = func_309(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_628(iParam0))
	{
		return;
	}
	iVar0 = func_259(iParam0);
	if (is_entity_dead(iVar0))
	{
		return;
	}
	_set_entity_health(iVar0, 0, 0);
}

void func_637(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_801(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_638(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1179())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_801(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1180(iVar0);
			func_1181(iVar0, 0, 0);
		}
		func_801(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
	}
	else
	{
		iVar1 = iParam0;
	}
	if (iVar1 > 0)
	{
		_money_increment_cash_balance(iVar1, iParam4);
		func_101(func_100(1644987397), iVar1);
	}
}

bool func_639(int iParam0)
{
	if (!func_290(iParam0))
	{
		return false;
	}
	return func_294(iParam0, 67108864);
}

void func_640(int iParam0)
{
	StringCopy(&cVar0, func_1182(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1183(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_641(int iParam0)
{
	StringCopy(&cVar0, func_1182(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1183(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_642(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_643(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_644(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_645(int iParam0)
{
	if (!func_609(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_646(int iParam0)
{
	if (func_609(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_647(int iParam0)
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

float func_648()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_649(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1184(iParam0) == 1 && bParam7)
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
	if ((bParam1 || bParam6) || func_26() != -1)
	{
		Global_17504.f_42[iParam0]->f_4 = 0;
	}
	Global_17504.f_42[iParam0]->f_4 = (Global_17504.f_42[iParam0]->f_4 + iVar0);
}

int func_650(int iParam0)
{
	if (!func_529(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

bool func_651(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1185(iParam0);
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

int func_652(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_665(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_653(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_654(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_655()
{
	return Global_40.f_11095.f_35;
}

void func_656(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1186(iParam0, 0);
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
		func_657(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_657(int iParam0)
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
			func_1186(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1187(1);
	}
}

bool func_658(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_659()
{
	iVar0 = func_1188((*Global_1347702)[9]->f_15);
	iVar1 = func_1188((*Global_1835011)[69]->f_1);
	if (func_1189(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_660(int iParam0)
{
	if (!func_233(iParam0))
	{
		return false;
	}
	return func_370((*Global_1835011)[iParam0]->f_1, 1);
}

int func_661(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1190(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1191(iVar6);
	}
	return iVar5;
}

int func_662(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1192(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_663(int iParam0, bool bParam1)
{
	func_1193(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_664(int iParam0)
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

void func_665(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_663(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_666(2, *uParam0);
		}
		else
		{
			func_667(2, *uParam0);
		}
	}
	func_1194(uParam0);
}

void func_666(int iParam0, int iParam1)
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

void func_667(int iParam0, int iParam1)
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

void func_668(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1195(iParam0, iParam1, bParam2);
}

int func_669(int iParam0)
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

int func_670(int iParam0)
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

void func_671(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1196();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1197(iParam0);
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
	if (func_695(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1198())
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
	Global_40.f_11095.f_35 = func_352(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1196();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1199(iVar1);
		func_1201(func_1200(), 0, 4000);
		func_1202(Global_40.f_11095.f_35);
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
		func_1203(0);
	}
	if (iParam0 != 0)
	{
		if (iParam0 > 0)
		{
			func_101(func_100(-558776548), 1);
			Global_1347477->f_204 = 1;
			if (does_entity_exist(iParam5))
			{
				decor_set_int(iParam5, "honor_bank", iParam0);
			}
			if (!bParam1)
			{
				if (iParam0 > func_670(14))
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
					sParam4 = func_1204(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_801(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_801(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_101(func_100(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_670(4))
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
					sParam4 = func_1204(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_801(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_801(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
	}
	Var8 = { func_100(-1990689970) };
	stat_id_set_int(&Var8, Global_40.f_11095.f_35, true);
	if (!bParam1)
	{
		_0xe6b763c7f4902201(iParam0, iParam3);
	}
	if (Global_40.f_11095.f_35 <= -320 || Global_40.f_11095.f_35 >= 320)
	{
		func_405(10, 1);
	}
}

void func_672(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_673(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_674(int iParam0)
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

bool func_675(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_26() == -1)
	{
		if (func_1205(iParam0) && func_1206(iParam0))
		{
			func_1207(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_676(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1208(iParam0, iParam1);
	Var0 = { func_782(iParam0, 0, 1) };
	iVar5 = func_1209(iParam0, &Var0, 0, 0);
	iVar6 = func_1210(iParam0, 0);
	if ((iVar5 > 1 && !func_135()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_9(iParam0, -2051813666))
		{
			func_368(583, 1);
		}
		else
		{
			func_368(582, 0);
		}
	}
	if (func_1211(iParam0, &Var0, *iParam1, 0, 0))
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

void func_677(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_11(iParam0, -949239683))
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

int func_678(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_13(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_693(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1212(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1213(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_1145(bParam2), iParam0, 0);
	return iVar2;
}

bool func_679(int iParam0)
{
	if (func_26() != -1)
	{
		return false;
	}
	return func_680(iParam0) != 0;
}

int func_680(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1214())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1215(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_681(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_682(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1214())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_681(iVar0))
		{
			if (func_390(func_1215(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_683(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1216(48);
	func_410(0, -1);
}

bool func_684(int iParam0)
{
	if (func_26() != -1)
	{
		return false;
	}
	return func_370((*Global_1347702)[iParam0]->f_15, 1);
}

int func_685(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_686(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_687(int iParam0)
{
	if (func_26() != -1)
	{
		return false;
	}
	return func_370((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_688(int iParam0)
{
	if (func_26() != -1)
	{
		return false;
	}
	if (!func_316(iParam0))
	{
		return false;
	}
	return func_235((*Global_1347702)[iParam0]->f_15);
}

int func_689()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_390(func_1217(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_690(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_440() && (func_688(38) || func_684(38)))
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
			if (func_440() && (func_688(39) || func_684(39)))
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
			iVar9 = func_1218(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_440() && (func_688(41) || func_684(41)))
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
			if (func_440() && (func_688(49) || func_684(49)))
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
			iVar9 = func_1218(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1219(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1220(iParam0, iVar13, iVar14))
	{
	}
	if (func_1221(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1222(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1223(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1224(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1225(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_691(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_692(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_440() && (func_688(38) || func_684(38)))
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
			if (func_440() && (func_688(39) || func_684(39)))
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
			if (func_440() && (func_688(49) || func_684(49)))
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
		if (func_440() && (func_688(38) || func_684(38)))
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
			func_1226(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1226(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_808(_create_var_string(2, sVar0), _create_var_string(2, func_1227(func_686(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1226(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1226(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_440() && (func_688(39) || func_684(39)))
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
			func_1226(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1226(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_440() && (func_688(49) || func_684(49)))
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
			func_1226(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1226(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1226(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1226(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_693(int iParam0)
{
	if (!func_13(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_694(int iParam0, int iParam1)
{
	if (!func_13(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_695(int iParam0)
{
	if (!func_1228(iParam0))
	{
		return false;
	}
	return func_1229(iParam0);
}

void func_696(int iParam0)
{
	if (!func_1228(iParam0))
	{
		return;
	}
	func_1230(iParam0);
	func_1231(iParam0);
}

int func_697(int iParam0)
{
	if (!func_13(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_698(int iParam0, bool bParam1)
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
	if (func_13(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1232(iVar0) || func_128(iVar0))
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

int func_699(int iParam0, bool bParam1)
{
	if (!func_13(iParam0, 0))
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

void func_700(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_785(iParam0))
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

bool func_701(bool bParam0)
{
	if (func_26() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_1145(bParam0));
}

bool func_702(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_782(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1233((386 + iVar28), 1);
			if (func_1234(iParam0, &Var0, iVar5, 0))
			{
				if (func_1235(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1236(iParam0, Var0, iVar5, 0) };
					func_1237(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_701(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_703(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1238(iParam0, iParam1);
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

bool func_703(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_705(iParam0))
	{
		return false;
	}
	if (!func_701(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_704(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_699(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_26() == -1)
		{
			func_700(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1239(iVar0);
			}
		}
		if (!func_1211(iParam0, &uVar1, 1, 0, 0))
		{
			func_1207(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1240(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_702(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_702(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_702(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1198())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1241(iVar0))
				{
					func_702(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_702(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1242(Global_35, 2, 0, 1);
				if ((((func_785(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_695(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_785(iVar7) && func_695(24))
				{
					if (!func_702(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_702(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_702(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_368(480, 1);
	}
	return true;
}

bool func_705(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_706(int iParam0, int iParam1, int iParam2)
{
	if (!func_705(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_785(iVar4))
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
	if (func_390(611073244, 1, 0) && iParam2 == -897553835)
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
		func_741(func_1243(iParam0), func_740(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_26() == -1)
		{
			if (func_370((*Global_1835011)[14]->f_1, 1))
			{
				func_368(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_701(0))
	{
		if (func_703(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_746(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_707(int iParam0)
{
	if ((iParam0 == -615217896 && !func_381()) || iParam0 != -615217896)
	{
		if (func_1244(Global_35, iParam0, &uVar0))
		{
			func_725(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_731();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_731();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_731();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_729();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_727();
			break;
	}
}

void func_708(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_727();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_728();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_729();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_730();
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
			func_731();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1245();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1246();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_709(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_710(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_711(int iParam0)
{
	bVar0 = func_9(iParam0, -2017733358);
	if (func_1247() < 3)
	{
		if (bVar0)
		{
			if (func_1249(func_1248(iParam0), iParam0))
			{
				func_741(79, func_740(func_1248(iParam0)), 1);
			}
			else
			{
				func_741(78, func_740(func_1248(iParam0)), 1);
			}
		}
		else
		{
			func_741(80, func_740(func_1250(iParam0)), 1);
		}
	}
}

bool func_712()
{
	if (((((func_1251(839908568, 400) || func_1251(-1134030454, 400)) || func_1251(623353496, 400)) || func_1251(-344413337, 400)) || func_1251(-1664948962, 400)) || func_1251(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_713(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_819(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_637(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_638(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_714(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_690(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_692(51, 0, 0, 0, 0, -1, 0);
			func_1252(8192);
			break;
		case 581047644:
			func_690(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_692(51, 0, 0, 0, 0, -1, 0);
			func_1252(524288);
			break;
		case -644199619:
			func_690(39, 0, 0, 0, 0, 0, 1, 0);
			func_692(39, 0, 0, 0, 0, -1, 0);
			func_1253(16);
			break;
		case 684296857:
			func_690(41, 0, 0, 0, 0, 0, 1, 0);
			func_692(41, 0, 0, 0, 0, -1, 0);
			func_1254(8);
			break;
		case 466137807:
			func_690(49, 0, 0, 0, 0, 0, 1, 0);
			func_692(49, 0, 0, 0, 0, -1, 0);
			func_1255(16);
			break;
		case -1087522507:
			func_690(43, 0, 0, -1791518714, func_1256(1), 0, -1, 0);
			func_1257(1);
			break;
		case -405829000:
			func_690(43, 0, 0, -2087881550, func_1256(2), 0, -1, 0);
			func_1257(2);
			break;
		case 378660860:
			func_690(43, 0, 0, 1908068621, func_1256(4), 0, -1, 0);
			func_1257(4);
			break;
		case 1566111097:
			func_690(43, 0, 0, 1611247019, func_1256(8), 0, -1, 0);
			func_1257(8);
			break;
		case 1276007140:
			func_690(43, 0, 0, 1319635688, func_1256(16), 0, -1, 0);
			func_1257(16);
			break;
	}
}

void func_715(int iParam0)
{
	if (func_1258() == 1)
	{
		if (func_684(39))
		{
			func_368(342, 0);
		}
		else
		{
			func_368(343, 0);
			func_1253(1);
		}
	}
	if (func_1258() >= 30)
	{
		func_368(344, 0);
	}
	func_690(39, 0, 0, 0, 0, 0, -1, 0);
	func_692(39, 0, 0, func_1258(), 30, 1, 0);
}

void func_716(int iParam0)
{
	if (func_1259() == 1)
	{
		if (func_684(49))
		{
			func_368(409, 0);
		}
		else
		{
			func_368(410, 0);
			func_1255(1);
		}
	}
	if (func_1259() >= 10)
	{
		func_368(411, 0);
	}
	func_690(49, 0, 0, 0, 0, 0, -1, 0);
	func_692(49, 0, 0, func_1259(), 10, 1, 0);
}

void func_717(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_368(437, 0);
			func_368(440, 0);
			func_1260(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_690(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_692(51, 0, 0, sVar0, func_1218(-949689219, 20), 1, 0);
			func_1252(1);
			func_226(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1260(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_690(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_692(51, 0, 0, sVar0, func_1218(-1248968496, 20), 1, 0);
			func_1252(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1260(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_690(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_692(51, 0, 0, sVar0, func_1218(1706369307, 20), 1, 0);
			func_1252(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1260(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_690(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_692(51, 0, 0, sVar0, func_1218(1520110311, 20), 1, 0);
			func_1252(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_368(438, 0);
			func_1260(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_690(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_692(51, 0, 0, sVar0, func_1218(-1992824800, 20), 1, 0);
			func_1252(32768);
			break;
		default:
			func_368(439, 0);
			break;
	}
}

void func_718()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_719(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_26() == -1)
	{
		if (!func_684(43))
		{
			if (iParam0 == 281887510)
			{
				func_368(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_368(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_368(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_368(400, 0);
			}
		}
		else if (func_9(iParam0, 412399755))
		{
			func_1261(-1791518714);
			if (func_1262() == 0)
			{
				func_410(0, 10);
				iVar1 = func_1263(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1264(iParam0) < func_1265(iParam0))
					{
						func_690(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_692(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_684(44))
		{
			if (iParam0 == -222563712)
			{
				func_368(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_368(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_368(401, 0);
			}
		}
		else if (func_9(iParam0, 709057512))
		{
			func_1261(-2087881550);
			if (func_1262() == 1)
			{
				func_410(0, 10);
				iVar1 = func_1263(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1264(iParam0) < func_1265(iParam0))
					{
						func_690(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_692(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_684(45))
		{
			if (iParam0 == 2116770557)
			{
				func_368(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_368(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_368(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_368(398, 0);
			}
		}
		else if (func_9(iParam0, -1478961327))
		{
			func_1261(1908068621);
			if (func_1262() == 2)
			{
				func_410(0, 10);
				iVar1 = func_1263(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1266(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1267(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1216(48);
					}
					if (func_1264(iParam0) < func_1265(iParam0))
					{
						func_690(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_692(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1264(iParam0) < func_1265(iParam0))
					{
						func_690(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_692(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_684(46))
		{
			if (iParam0 == 2085530337)
			{
				func_368(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_368(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_368(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_368(406, 0);
			}
		}
		else if (func_9(iParam0, -1238404098))
		{
			func_1261(1611247019);
			if (func_1262() == 3)
			{
				func_410(0, 10);
				iVar1 = func_1263(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1264(iParam0) < func_1265(iParam0))
					{
						func_690(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_692(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_684(47))
		{
			if (iParam0 == -1521783510)
			{
				func_368(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_368(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_368(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_368(403, 0);
			}
		}
		else if (func_9(iParam0, 1160548794))
		{
			func_1261(1319635688);
			if (func_1262() == 4)
			{
				func_410(0, 10);
				iVar1 = func_1263(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1264(iParam0) < func_1265(iParam0))
					{
						func_690(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_692(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_720(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1266(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1267(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1216(48);
		}
	}
}

void func_721(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_390(func_1268(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1269(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1270(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_722(int iParam0, int iParam1, int iParam2)
{
	if (func_26() == -1)
	{
		if (does_entity_exist(iParam2))
		{
			iVar0 = _0x6f02b5e50511721e(iParam2);
			if (iVar0 < -1)
			{
			}
			else if (iVar0 >= 0)
			{
				func_713(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_713(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_713(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_713(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_713(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_713(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_713(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_713(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_713(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_713(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_713(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_713(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_713(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1271())
			{
				func_713(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_713(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_713(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_713(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_713(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_713(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_713(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_713(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_713(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_713(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_713(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_713(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_713(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_723(int iParam0)
{
	if (func_684(41))
	{
		func_368(363, 0);
	}
	else
	{
		func_368(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1272(-1865241121);
			func_1273(-642026005);
			func_1274(-642026005);
			func_410(0, 10);
			break;
		case -2108314374:
			func_1272(2117142684);
			func_1273(-940584364);
			func_1274(-940584364);
			func_410(0, 10);
			break;
		case -1193798153:
			func_1272(-1409326024);
			func_1273(1972645282);
			func_1274(1972645282);
			func_410(0, 10);
			break;
		case -787702678:
			func_1272(-641744968);
			func_1273(1667205433);
			func_1274(1667205433);
			func_410(0, 10);
			break;
		case -804542901:
			func_1272(-946988203);
			func_1273(1362715885);
			func_1274(1362715885);
			func_410(0, 10);
			break;
		case -1696275132:
			func_1272(-646136018);
			func_1273(1053540370);
			func_1274(1053540370);
			func_410(0, 10);
			break;
		case -161595323:
			func_1272(-955835837);
			func_1273(-1100103852);
			func_1274(-1100103852);
			func_410(0, 10);
			break;
		case -1114363619:
			func_1272(-179276075);
			func_1273(-1409869209);
			func_1274(-1409869209);
			func_410(0, 10);
			break;
		case -368407134:
			func_1272(-492711560);
			func_1273(-1760235357);
			func_1274(-1760235357);
			func_410(0, 10);
			break;
		case 1997759228:
			func_1272(1764383959);
			func_1273(-138366827);
			func_1274(-138366827);
			func_410(0, 10);
			break;
		case 1265573293:
			func_1272(317501533);
			func_1273(-1261163843);
			func_1274(-1261163843);
			func_410(0, 10);
			break;
		case -1030441283:
			func_1272(817753087);
			func_1273(-963523016);
			func_1274(-963523016);
			func_410(0, 10);
			break;
		case -1490884871:
			func_1272(576606016);
			func_1273(560825326);
			func_1274(560825326);
			func_410(0, 10);
			break;
		case -395458616:
			func_1272(814934957);
			func_1273(858269539);
			func_1274(858269539);
			break;
	}
}

void func_724(int iParam0, int iParam1)
{
	func_1275(iParam0, iParam1, &uVar0);
}

int func_725(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_782(iParam1, 1, 0) };
		iParam3 = func_783(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1276(iParam1, iParam2, func_770(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1277(1, (func_26() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_770(iParam3, 1)])
			{
				func_781(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1278(32768) && iParam1 != &Global_1946804->f_57[func_770(iParam3, 1)])
			{
				func_1279();
				func_781(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_781(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1280(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_781(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1281(0);
			func_1282(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_781(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_726(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1242(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1242(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1283("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1284(&Var3, iVar2, iVar0, iVar1))
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
						func_1285(iVar0);
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

void func_727()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_728()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_729()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_730()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_731()
{
	func_1286();
	func_1287();
	func_1288();
}

void func_732(int iParam0, int iParam1, bool bParam2)
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

void func_733(int iParam0, bool bParam1)
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
	func_1226(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_734(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_735(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_736(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_737(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_738(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_739(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_740(int iParam0)
{
	if (!func_13(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_741(int iParam0, int iParam1, bool bParam2)
{
	func_777(iParam0, &iVar0, &iVar1);
	if (!func_778(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1289(iParam0, 1024))
	{
		return;
	}
	func_779(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_742(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_777(iParam0, &iVar0, &iVar1);
	if (!func_778(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1289(iParam0, 1024))
	{
		return;
	}
	func_779(iVar0, iVar1);
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

int func_743()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1214())
	{
		return func_744();
	}
	iVar4 = (func_1214() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1214())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1290(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1215(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_744()
{
	iVar0 = get_random_int_in_range(0, func_1214());
	return func_1215(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_745(int iParam0)
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

bool func_746(int iParam0, int iParam1, int iParam2)
{
	if (!func_13(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_782(iParam0, 0, 1) };
	Var5 = { func_1236(iParam0, Var0, Var0.f_4, 0) };
	return func_1291(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_747(int iParam0)
{
	if (func_26() != -1)
	{
		return;
	}
	switch (func_697(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1292(81053684, 0) <= 0)
			{
				func_781(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_781(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1293(iParam0);
			if (func_1294(iVar0))
			{
				func_1295(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_781(30, iParam0, 0, 0, 0);
			}
			if (func_772() == -2125499975 || func_772() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_781(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_772() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_781(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1296(-525676072, 0))
			{
				if (func_1297(-525676072, &iVar1))
				{
					func_781(33, iVar1, 0, 0, 0);
				}
			}
			func_781(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1298(99217379))
		{
			func_725(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_696(24);
		if (func_726(&iVar2, 0))
		{
			func_702(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_748(int iParam0)
{
	if (func_9(iParam0, 943695443))
	{
		func_1299(0, iParam0);
	}
	else if (func_9(iParam0, -2096528786))
	{
		func_1299(1, iParam0);
	}
	else if (func_9(iParam0, -1094167013))
	{
		func_1299(2, iParam0);
	}
	else if (func_9(iParam0, 1936654645))
	{
		func_1299(3, iParam0);
	}
	else if (func_9(iParam0, 1306489306))
	{
		func_1299(4, iParam0);
	}
	else if (func_9(iParam0, 435762317))
	{
		func_1299(5, iParam0);
	}
	else if (func_9(iParam0, 1259363210))
	{
		func_1299(6, iParam0);
	}
	else if (func_9(iParam0, 881398259))
	{
		func_1299(7, iParam0);
	}
	else if (func_9(iParam0, -541549214))
	{
		func_1299(8, iParam0);
	}
	else if (func_9(iParam0, 130796156))
	{
		func_1299(-1, iParam0);
	}
}

int func_749(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1300(&Var4, 1356624740);
	return func_1301(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_750(int iParam0)
{
	if (!func_13(iParam0, 0))
	{
		return Var0;
	}
	if (func_9(iParam0, -305066475))
	{
		if (func_26() == -1)
		{
			if (func_9(iParam0, -537818634))
			{
				return func_100(189951448);
			}
			else
			{
				return func_100(1176172851);
			}
		}
	}
	else if (func_9(iParam0, -537818634))
	{
		return func_100(-963660207);
	}
	if (func_9(iParam0, 2084895747))
	{
		return func_100(1694039471);
	}
	return Var2;
}

void func_751(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_26() == -1)
			{
				if (func_370((*Global_1835011)[4]->f_1, 1))
				{
					func_368(109, 1);
				}
			}
			break;
	}
}

void func_752(int iParam0, char* sParam1)
{
	sVar0 = func_1303(func_1302(0));
	func_801(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1304(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_753(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_13(iParam0, 0))
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
	if (!func_1305())
	{
		func_1306(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1307(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1307(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_694(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_693(iParam0);
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
	else if (!func_1308(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1309(_create_var_string(10, &cVar2, _create_var_string(0, func_740(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_9(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_740(iParam0));
	}
	func_801(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

struct<10> func_754(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_755(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

bool func_756(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_13(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1310(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1310(iParam0, Var2, 1))
				{
					if (func_1311(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1311(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_368(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_241(0, 0, 1))
		{
			func_410(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_757(int iParam0)
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

void func_758(int iParam0)
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
		func_368(iVar0, 0);
	}
}

void func_759()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1312(0);
			_unlock_set_unlocked(-121456797, false);
			func_1313();
		}
		return;
	}
	if (!func_370((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1314();
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
	func_1312(1);
}

void func_760()
{
	if (!func_370((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_361(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_761()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1315(0);
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
	if (!func_370((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1315(1);
}

void func_762()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1316(15000, 0, 0, 0, 1);
			func_1315(0);
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
	if (!func_370((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_326(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1315(1);
}

void func_763()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_390(1191437462, 1, 0) && !func_235((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_361(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1317(1))
			{
				func_737(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_390(1119149048, 1, 0) && !func_235((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_361(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1317(2))
			{
				func_737(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1317(4))
		{
			func_737(4);
		}
		if (func_1317(0))
		{
			func_1318(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_390(1191437462, 1, 0))
			{
				func_766(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_390(1119149048, 1, 0))
			{
				func_766(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1317(1))
		{
			func_1318(1);
		}
		if (func_1317(2))
		{
			func_1318(2);
		}
		if (func_1317(4))
		{
			func_1318(4);
		}
		if (!func_1317(0))
		{
			func_737(0);
		}
	}
}

void func_764()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_370((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1319() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_700(127400949);
		if (func_702(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1319() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1320(-2055673461, Var1, 1423542233);
		func_1320(-202131179, Var1, -1264898804);
		func_1320(2013836545, Var1, 1592019450);
		func_1320(1497476650, Var1, 1117400455);
		func_1320(1063571467, Var1, 1150213537);
		func_1320(2107224237, Var1, 1598825281);
		func_1320(1747981656, Var1, -712527121);
		func_1320(-1371140647, Var1, 454332195);
		func_1320(-19142973, Var1, 256105670);
		func_1320(-2074737817, Var1, -1328061889);
		func_1320(-1114256243, Var1, -782241404);
		func_1320(-1653277288, Var1, 1669853467);
		func_1320(1869398132, Var1, -1559225678);
		func_1320(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_35())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_785(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_695(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_695(24) && func_785(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_785(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_695(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_765()
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

int func_766(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_13(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1212(iParam0, 1);
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
			func_753(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_390(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_750(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_678(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_678(iParam0, 0, 0) - iParam1) < 0)
		{
			func_766(iParam0, func_678(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_693(iParam0) == -427144552)
	{
		if (!func_1321(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1322(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_701(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_753(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1323(iParam0, iParam1);
	return 1;
}

bool func_767(int iParam0)
{
	switch (func_697(iParam0))
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

void func_768(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_697(iParam0))
	{
		case -2061583405:
			bVar0 = func_1324(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1324(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1324(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1324(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1324(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1324(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1325();
	}
	if (bParam1)
	{
		func_1326(0, 0);
	}
}

int func_769(int iParam0)
{
	Var0 = { func_782(iParam0, 1, 0) };
	return func_783(Var0.f_4);
}

int func_770(int iParam0, int iParam1)
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

void func_771(int iParam0)
{
	if (func_26() == -1)
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
		iVar0 = func_770(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1327(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_772()
{
	return Global_1946804->f_1;
}

bool func_773(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1328(iParam6);
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
		func_1330(uParam0, func_1329(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_770(iVar3, 1);
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
							if (func_1331(iVar3) && func_1332(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1333(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_774(int iParam0, int iParam1)
{
	if (func_26() == -1)
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

int func_775(int iParam0, int iParam1)
{
	vVar0 = { func_774(iParam0, iParam1) };
	return vVar0.x;
}

void func_776(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_777(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_778(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1334(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1335(iParam0))
	{
		return false;
	}
	if (func_1336(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1289(iParam0, 1)) || func_88(32768))
	{
		if (!func_1289(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1337())
	{
		return false;
	}
	return true;
}

void func_779(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_780(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_781(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1338(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1339(Var0);
}

struct<5> func_782(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1340(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_693(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1236(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1341(bParam1) };
			if (bParam2 && func_1342(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1234(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1234(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1235(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1343(bParam1) };
			switch (func_697(iParam0))
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
			if (func_1344(iParam0, -1823706425))
			{
				Var0 = { func_1236(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1344(iParam0, -1483207246))
			{
				Var0 = { func_1236(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1345(Var0, &Var27, bParam1, 0))
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

int func_783(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1346(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_784(int iParam0)
{
	func_1327(Global_1946804->f_1497.f_1[func_770(iParam0, 1)], 2, 6);
	func_1327(Global_1946804->f_1378.f_1[func_770(iParam0, 1)], 2, 6);
}

bool func_785(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_786(int iParam0)
{
	return iParam0 != 0;
}

int func_787(int iParam0)
{
	iVar0 = -1;
	if (!func_786(iParam0))
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

bool func_788(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_789(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1347(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_790(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_791(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_792(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_793(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_794(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_795(int iParam0, int iParam1)
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

void func_796(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1348(iParam0, iParam6);
	func_1349(iParam0, iParam5);
	func_1350(iParam0, iParam4);
	func_1351(iParam0, iParam3);
	func_1352(iParam0, iParam2);
	func_1353(iParam0, iParam1);
}

bool func_797(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_794(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_793(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_792(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_789(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_790(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_791(iParam0);
	if (iVar5 < 1 || iVar5 > func_795(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_798(int iParam0, bool bParam1)
{
	return func_1189(func_328(), iParam0, bParam1);
}

void func_799(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_800(int iParam0, int iParam1)
{
	if (!func_13(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1212(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1283("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1284(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_785(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1285(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1285(iVar1);
	}
	return false;
}

var func_801(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_1354(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_802()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1355(iVar1);
		if (!_unlock_is_visible(func_1356(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_803()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1355(iVar0);
		if (!_unlock_is_visible(func_1356(iVar1)))
		{
			_unlock_set_visible(func_1356(iVar1), true);
		}
		iVar0++;
	}
}

bool func_804(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_529(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_805(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_614(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_806()
{
	return (func_242(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_807(var uParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_26() != -1)
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
	if (!func_13(iVar0, 0))
	{
		return 0;
	}
	if (!func_1357(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1358(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_9(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_782(iVar0, 0, 1) };
	iVar10 = func_1359(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1360(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_361(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1316(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_808(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_809(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_801(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

int func_810(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_811(bool bParam0, bool bParam1)
{
	if (func_26() != -1)
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

void func_812(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1179())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1179())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_237(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_315(iParam0);
	if (func_239(iParam0) != 1 || (iVar4 != 37 && iVar4 != 58))
	{
		_uilog_add_total_take_entry(-1391579956, 1997120069, _create_var_string(2, "MISSION_COMPLETE_TAKE_ARTHUR"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar3), 601389479);
	}
	switch (func_239(iParam0))
	{
		case 1:
			switch (iVar4)
			{
				case 25:
					func_1361(1, iVar1);
					func_1361(8, iVar1);
					func_1361(7, iVar1);
					break;
				case 12:
					func_1361(6, iVar1);
					break;
				case 53:
					func_1361(3, iVar1);
					func_1361(7, iVar1);
					func_1361(4, iVar1);
					break;
				case 20:
					func_1361(8, iVar1);
					break;
				case 19:
					func_1361(1, iVar1);
					func_1361(2, iVar1);
					break;
				case 24:
					func_1361(3, iVar1);
					func_1361(9, iVar1);
					func_1361(20, iVar1);
					break;
				case 28:
					func_1361(1, iVar1);
					break;
				case 34:
					func_1361(23, iVar1);
					func_1361(2, iVar1);
					func_1361(18, iVar1);
					break;
				case 29:
					func_1361(0, iVar1);
					func_1361(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1361(0, iVar1);
					func_1361(3, iVar1);
					func_1361(2, iVar1);
					func_1361(11, iVar1);
					func_1361(6, iVar1);
					func_1361(25, iVar1);
					func_1361(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1361(5, iVar1);
					break;
				case 63:
					func_1361(1, iVar1);
					func_1361(3, iVar1);
					break;
				case 37:
					func_1361(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_406(0, 10, 11, 2116153146))
			{
				func_1361(7, iVar1);
				func_1361(4, iVar1);
			}
			else if (iParam0 == func_406(0, 7, 11, -379687487))
			{
				func_1361(8, iVar1);
				func_1361(15, iVar1);
			}
			else if (iParam0 == func_406(0, 8, 11, -1386089015))
			{
				func_1361(3, iVar1);
			}
			else if (iParam0 == func_406(0, 11, 11, -1952009645))
			{
				func_1361(6, iVar1);
				func_1361(3, iVar1);
			}
			else if (iParam0 == func_406(0, 12, 11, 2065895756))
			{
				func_1361(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1362()));
	if (!func_1363(629))
	{
		func_368(629, 0);
	}
}

int func_813(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_814(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_815(int iParam0, int iParam1, int iParam2)
{
	if (!func_814(iParam0))
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

int func_816()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_817(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_818(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1364(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_816())
	{
		return -1;
	}
	iVar0 = func_817(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_586(iVar1, 0);
	func_654(iVar1, 0);
	func_919(iVar1, 0);
	func_1365(iVar1, 0);
	func_1366(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1367(iVar1, iParam4);
	}
	return iVar1;
}

int func_819(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_390(1811977508, 1, 0))
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
			if (func_13(iVar25, 0) && func_9(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_820(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_821(int iParam0)
{
	if (!func_234(iParam0))
	{
		return 0;
	}
	cVar0 = func_408(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_822(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_823(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	bVar2 = 9999999f;
	func_1368(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1369() == 0 && !func_1370(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1371(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1372();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1373(Global_1310720->f_21))
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
			vVar7 = { func_1374(iVar0, iVar1) };
			bVar11 = func_1375(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !func_441(vVar7)) && func_1376(iVar0, bParam8, iParam12)) && !func_1377(iVar0)) || bVar11)
			{
				if (func_1378(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_824(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1379(vParam0);
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

void func_825()
{
	disable_script_brain_set(1);
}

void func_826()
{
}

void func_827()
{
	disable_script_brain_set(2);
}

bool func_828(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_829(char* sParam0)
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

void func_830(int iParam0)
{
	if (func_828(iParam0, 1))
	{
		func_1380(1);
	}
}

int func_831()
{
	return -1904156936;
}

bool func_832(int iParam0)
{
	if (!func_234(iParam0))
	{
		return false;
	}
	switch (func_239(iParam0))
	{
		case 1:
			iVar0 = func_315(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_315(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_833()
{
	return 166188472;
}

int func_834()
{
	return 2015838421;
}

int func_835()
{
	return 207908017;
}

var func_836(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_837(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_838(var uParam0)
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

int func_839(var uParam0, int iParam1)
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

char* func_840(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1381(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1382(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1383(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_841(var uParam0, char* sParam1)
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

int func_842(var uParam0)
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

void func_843(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_844(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_845()
{
	return Global_1572864->f_8;
}

void func_846(char[4] cParam0, int iParam1)
{
	func_1384(cParam0, iParam1);
	func_1385(cParam0, iParam1, 26);
}

int func_847(char[4] cParam0)
{
	if ((func_126(cParam0, 4) || func_134(cParam0, 2)) || func_134(cParam0, 1))
	{
		func_1386(&(cParam0->f_7375), "1-Day-MultiStart");
	}
	if (func_126(cParam0, 4))
	{
		func_429(&(uLocal_121[0]), func_267(0, 7), 2, 1073741824);
	}
	Global_43838 = 0;
	return 1;
}

int func_848(char[4] cParam0)
{
	if (!_0xa0bc8faed8cfeb3c(&(uLocal_121[0])))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (15 - 1))
	{
		if (func_215(&(iLocal_912[iVar0])))
		{
			func_1035(&(iLocal_912[iVar0]), 1, 0f, 0, 0, 0, 0, 0);
		}
		iVar0++;
	}
	func_1387(&cLocal_1073);
	func_1388(13, 651189962, 1, 977356591, -1);
	if (_does_volume_exist(&(iLocal_228[2])))
	{
		func_1389(&(iLocal_228[2]), 0, 0, 0);
	}
	create_model_hide(-236.1163f, 665.4963f, 112.3183f, 0.01f, -1385780198, false);
	if (!_0x854bc9b1a1ccd034(1287772529, Global_35))
	{
		_0xf7ea250b9a919e03(1287772529, Global_35);
	}
	if (!_0x854bc9b1a1ccd034(-302141554, Global_35))
	{
		_0xf7ea250b9a919e03(-302141554, Global_35);
	}
	if (!_0x854bc9b1a1ccd034(-35160675, Global_35))
	{
		_0xf7ea250b9a919e03(-35160675, Global_35);
	}
	if (func_215(&(iLocal_912[14])))
	{
		func_1035(&(iLocal_912[14]), 1, 0f, 0, 0, 0, 0, 0);
		door_system_set_open_ratio(&(iLocal_912[14]), 0f, 0);
	}
	func_157(cParam0, iLocal_209, "Horse_01", 0, 0, 0, 0);
	return 1;
}

int func_849(char[4] cParam0)
{
	if ((func_126(cParam0, 4) || func_134(cParam0, 2)) || func_134(cParam0, 1))
	{
	}
	func_146(cParam0, func_39(cParam0), 16777216);
	if (func_215(&(iLocal_912[0])))
	{
		func_1035(&(iLocal_912[0]), 1, 0f, 0, 0, 0, 0, 0);
	}
	if (func_215(&(iLocal_912[1])))
	{
		func_1035(&(iLocal_912[1]), 1, 0f, 0, 0, 0, 0, 0);
	}
	func_1048(cParam0);
	if (_does_volume_exist(&(iLocal_228[3])))
	{
		func_1390(&(iLocal_228[3]), 0);
	}
	if (_does_volume_exist(&(iLocal_228[4])))
	{
		func_1390(&(iLocal_228[4]), 0);
	}
	if (_does_volume_exist(&(iLocal_228[5])))
	{
		func_1390(&(iLocal_228[5]), 0);
	}
	if (_does_volume_exist(&(iLocal_228[6])))
	{
		uLocal_41 = func_1389(&(iLocal_228[6]), 0, 0, 0);
	}
	if (_does_volume_exist(&(iLocal_228[7])))
	{
		func_1390(&(iLocal_228[7]), 0);
	}
	if (_does_volume_exist(&(iLocal_228[8])))
	{
		func_1390(&(iLocal_228[8]), 0);
	}
	if (_does_volume_exist(&(iLocal_228[11])))
	{
		func_1390(&(iLocal_228[11]), 0);
	}
	if (_does_volume_exist(&(iLocal_228[0])))
	{
		_0x2fcd528a397e5c88(&(iLocal_228[0]), 8);
		func_1391(&(iLocal_228[0]), 0, 0);
	}
	if (_does_volume_exist(&(iLocal_228[60])))
	{
		uLocal_39 = _0x4c39c95ae5db1329(&(iLocal_228[60]), false, 15);
		_0x2fcd528a397e5c88(&(iLocal_228[60]), 16384);
	}
	func_1392(cParam0, 1, 1, 0);
	func_1038(&uLocal_820, 0);
	func_1039(&uLocal_819, 0);
	func_1036(&iLocal_409);
	func_1036(&iLocal_421);
	func_141(cParam0, 0);
	func_140(cParam0, 0);
	func_264(&uLocal_553);
	if (!func_32(&uLocal_789))
	{
		func_33(&uLocal_789, 0);
	}
	iVar0 = func_328();
	func_377(&iVar0, 0, 15, 0, 0, 0, 0, 0);
	func_1393(func_792(iVar0), func_793(iVar0), 0);
	_0x0751d461f06e41ce(get_player_index(), 33, 0, 1);
	_0x0751d461f06e41ce(get_player_index(), 31, 0, 1);
	return 1;
}

int func_850(char[4] cParam0)
{
	if (_0x8a3945405b31048f() > 0.85f)
	{
		func_1394(0.85f);
	}
	_0xab0d553fe20a6e25(0.8f);
	func_1395();
	if (!func_1396(4))
	{
		set_ped_reset_flag(Global_35, 229, true);
	}
	if (func_1397(cParam0) <= 1)
	{
		set_all_random_peds_flee_this_frame(get_player_index());
	}
	if (func_1397(cParam0) <= 1)
	{
		if (!func_1398(iLocal_209, &(iLocal_330[1])) && !get_ped_reset_flag(Global_35, 236))
		{
			if (func_1399(&uLocal_789) >= 1f)
			{
				func_1400(cParam0);
			}
		}
		else
		{
			func_264(&uLocal_789);
		}
	}
	if (func_1397(cParam0) > -1 && func_1397(cParam0) < 29)
	{
		func_1401(cParam0);
		if (is_entity_dead(Global_35))
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (3 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(uLocal_121[iVar0])))
				{
					return 0;
				}
			}
			iVar0++;
		}
		if (is_entity_dead(iLocal_209))
		{
		}
		iVar0 = 0;
		while (iVar0 <= (3 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(iLocal_125[iVar0])))
				{
				}
			}
			iVar0++;
		}
		func_1402(cParam0);
		func_1403(cParam0);
		func_1404(cParam0);
		func_1405(cParam0);
		func_1406();
		func_1407();
		if (func_1408(2))
		{
			func_1409();
			func_1410(&(uLocal_121[0]), Global_35, 1, 1, 1, 0, 1, 1, 1, 1, 1);
			func_1411(Global_35, &(uLocal_121[0]), 1, 1, 1, 0, 0, 0, 1, 0, 1);
		}
	}
	switch (func_1397(cParam0))
	{
		case 0:
			if (&iLocal_374[0])
			{
				func_264(&uLocal_553);
				_0xde0c8b145ea466ff(&(uLocal_121[0]), 3f, -1f, 2.27f, 10f, 1.5f);
				func_140(cParam0, 1);
			}
			else if (&iLocal_374[1])
			{
				func_264(&uLocal_553);
				func_140(cParam0, 1);
			}
			if (func_1413(Global_35, func_1412(2, 7), 1) <= 20f)
			{
				iLocal_374[0] = 1;
			}
			if (!&iLocal_374[3])
			{
				if (func_1021(cParam0))
				{
					iLocal_374[3] = 1;
				}
			}
			break;
		case 1:
			if (func_1413(&(uLocal_121[0]), func_1412(2, 7), 1) <= 20f)
			{
				if (func_1414(cParam0) < 6)
				{
					func_141(cParam0, 6);
				}
				func_214(cParam0, &(uLocal_121[0]), 1);
				if (func_1408(2))
				{
					func_1415(2);
				}
				iLocal_374[2] = 1;
				iLocal_374[0] = 1;
				iLocal_374[1] = 1;
				if (func_1396(4))
				{
					iVar1 = 421625586;
					set_current_ped_weapon(&(uLocal_121[0]), -1569615261, true, 0, false, false);
					if (func_1413(&(uLocal_121[0]), func_1412(2, 1), 1) <= 1f)
					{
						if (!func_1408(4))
						{
							func_1416(4);
						}
					}
					if (func_1408(4))
					{
						if (!func_434(&(uLocal_121[0]), -1098463898))
						{
							func_1418(&(uLocal_121[0]), iVar1, func_1412(2, 1), func_1417(2, 1), -1, 1, 0, "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A", -1082130432);
						}
					}
					else if (!func_434(&(uLocal_121[0]), 658540077))
					{
						set_blocking_of_non_temporary_events(&(uLocal_121[0]), true);
						task_follow_waypoint_recording(&(uLocal_121[0]), "mud4_walk_gunstore", 0, 10, -1, 0, 0, -1);
					}
				}
				if (!does_blip_exist(iLocal_48))
				{
					func_214(cParam0, &(uLocal_121[0]), 1);
					iLocal_48 = func_1419(408396114, func_1412(2, 7), 1);
				}
			}
			if (!get_is_task_active(Global_35, 8) && func_1413(iLocal_209, func_1412(2, 7), 1) <= 5f)
			{
				if (!func_32(&uLocal_807))
				{
					func_33(&uLocal_807, 0);
				}
				else if (func_1399(&uLocal_807) >= 10f)
				{
					if (!func_434(iLocal_209, -76381094))
					{
						_task_use_scenario_point(iLocal_209, &(iLocal_330[1]), 0, -1, true, false, 0, false, -1f, false);
					}
				}
			}
			if (func_1398(iLocal_209, &(iLocal_330[1])))
			{
				if (does_blip_exist(iLocal_48))
				{
					remove_blip(&iLocal_48);
				}
				if (_0x854bc9b1a1ccd034(1287772529, Global_35))
				{
					_0xde7b2b4144906cdf(1287772529, Global_35);
				}
				if (_0x854bc9b1a1ccd034(-302141554, Global_35))
				{
					_0xde7b2b4144906cdf(-302141554, Global_35);
				}
				if (_0x854bc9b1a1ccd034(-35160675, Global_35))
				{
					_0xde7b2b4144906cdf(-35160675, Global_35);
				}
				func_65(7);
				func_1420(cParam0, &(uLocal_121[0]), 1105014447, 422991367, 1, 1);
				func_141(cParam0, 9);
				func_140(cParam0, 2);
			}
			break;
		case 2:
			func_1421();
			iVar1 = 421625586;
			if (&iLocal_374[2])
			{
				if (func_1413(&(uLocal_121[0]), func_1412(2, 1), 1) <= 2f)
				{
					if (!func_434(&(uLocal_121[0]), -1098463898))
					{
						func_1418(&(uLocal_121[0]), iVar1, func_1412(2, 1), func_1417(2, 1), -1, 1, 1, "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A", -1082130432);
					}
				}
				else if (!func_434(&(uLocal_121[0]), 658540077))
				{
					set_blocking_of_non_temporary_events(&(uLocal_121[0]), true);
					task_follow_waypoint_recording(&(uLocal_121[0]), "mud4_walk_gunstore", 0, 10, -1, 0, 0, -1);
				}
				if (func_1001(Global_35, &(uLocal_121[0]), 10f, 1))
				{
					func_214(cParam0, &(uLocal_121[0]), 1);
					return 1;
				}
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_851(var uParam0)
{
	if (_does_volume_exist(&(iLocal_228[2])))
	{
		func_199(&(iLocal_228[2]));
		_delete_volume(&(iLocal_228[2]));
	}
	if (_does_volume_exist(&(iLocal_228[3])))
	{
		func_199(&(iLocal_228[3]));
		_delete_volume(&(iLocal_228[3]));
	}
	if (_does_volume_exist(&(iLocal_228[0])))
	{
		_delete_volume(&(iLocal_228[3]));
	}
	func_548(0);
	if (func_184())
	{
		func_53(0, 0);
	}
	func_196();
	func_1422();
	remove_model_hide(-236.1163f, 665.4963f, 112.3183f, 0.1f, -1385780198, 0);
	func_173();
	_0x0751d461f06e41ce(get_player_index(), 31, 0, 0);
	_0x0751d461f06e41ce(get_player_index(), 33, 0, 0);
	if (_0x854bc9b1a1ccd034(1287772529, Global_35))
	{
		_0xde7b2b4144906cdf(1287772529, Global_35);
	}
	if (_0x854bc9b1a1ccd034(-302141554, Global_35))
	{
		_0xde7b2b4144906cdf(-302141554, Global_35);
	}
	if (_0x854bc9b1a1ccd034(-35160675, Global_35))
	{
		_0xde7b2b4144906cdf(-35160675, Global_35);
	}
	return 1;
}

void func_852(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_146(cParam0, iParam1, iParam9);
	func_1423(cParam0, iParam1);
	func_1385(cParam0, iParam1, iParam2);
	func_1424(cParam0, &iParam3, iParam1, 0);
	func_1424(cParam0, &iParam4, iParam1, 2);
	func_1424(cParam0, &iParam5, iParam1, 4);
	func_1424(cParam0, &iParam6, iParam1, 5);
	func_1424(cParam0, &iParam7, iParam1, 7);
	func_1073(cParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1425(cParam0, iParam1, cVar0);
	func_1426(cParam0, iParam1, iParam10);
}

int func_853(char[4] cParam0)
{
	if (!func_1427(6))
	{
		return 0;
	}
	if (_does_volume_exist(&(iLocal_228[6])))
	{
		uLocal_41 = func_1389(&(iLocal_228[6]), 0, 0, 0);
	}
	if (_does_volume_exist(&(iLocal_228[7])))
	{
		func_1390(&(iLocal_228[7]), 0);
	}
	if (_does_volume_exist(&(iLocal_228[8])))
	{
		func_1390(&(iLocal_228[8]), 0);
	}
	if (_does_volume_exist(&(iLocal_228[11])))
	{
		func_1390(&(iLocal_228[11]), 0);
	}
	func_1047(cParam0);
	if (!is_entity_dead(Global_35))
	{
		clear_ped_tasks_immediately(Global_35, true, true);
		func_429(Global_35, func_267(1, 0), 2, 1073741824);
		set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
	}
	else
	{
		return 0;
	}
	iVar0 = 421625586;
	if (!func_434(&(uLocal_121[0]), -1098463898))
	{
		func_1418(&(uLocal_121[0]), iVar0, func_1412(2, 1), func_1417(2, 1), -1, 1, 1, "WORLD_HUMAN_LEAN_BACK_WALL_MALE_A", -1082130432);
	}
	if (!func_434(iLocal_209, -982327190))
	{
		task_stand_still(iLocal_209, -1);
	}
	if (_does_volume_exist(&(iLocal_228[4])))
	{
		func_1390(&(iLocal_228[4]), 0);
	}
	if (_does_volume_exist(&(iLocal_228[5])))
	{
		func_1390(&(iLocal_228[5]), 0);
	}
	return 1;
}

int func_854(char[4] cParam0)
{
	if (func_14(cParam0, 8))
	{
		if (!func_128(-506285289))
		{
			func_700(-506285289);
		}
	}
	if (!func_1232(-506285289))
	{
		func_375(-506285289);
	}
	if (func_1428(1) < iLocal_33)
	{
		iLocal_374[7] = 1;
	}
	else
	{
		iLocal_374[7] = 0;
	}
	func_1388(13, 651189962, 1, 977356591, -1);
	return 1;
}

int func_855(char[4] cParam0)
{
	if (!func_14(cParam0, 8))
	{
		func_1016(0f, -10f);
		func_1429(-668482597, 2000, 0, 1, 1, 0, 0, 0);
	}
	if (func_215(&(iLocal_912[0])))
	{
		door_system_set_open_ratio(&(iLocal_912[0]), 0f, 1);
		func_1035(&(iLocal_912[0]), 0, 0f, 0, 0, 0, 0, 0);
	}
	if (func_215(&(iLocal_912[1])))
	{
		func_1035(&(iLocal_912[1]), 1, 0f, 0, 0, 0, 0, 0);
	}
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (iVar0 == 0)
		{
			if (!is_entity_dead(&(uLocal_121[iVar0])))
			{
				set_current_ped_weapon(&(uLocal_121[0]), -1569615261, true, 0, false, false);
			}
			else
			{
				return 0;
			}
		}
		iVar0++;
	}
	func_1430(75, -506285289);
	func_1431(75, -506285289);
	func_180(0);
	func_1038(&uLocal_820, 0);
	func_1039(&uLocal_819, 0);
	func_1036(&iLocal_409);
	func_1036(&iLocal_421);
	iLocal_374[26] = 0;
	func_141(cParam0, 0);
	func_140(cParam0, 0);
	func_264(&uLocal_553);
	request_ped_visibility_tracking(&(uLocal_121[0]));
	_hide_hud_component(559258637);
	return 1;
}

int func_856(char[4] cParam0)
{
	if (func_1397(cParam0) > -1 && func_1397(cParam0) < 29)
	{
		func_1401(cParam0);
		if (is_entity_dead(Global_35))
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (3 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(uLocal_121[iVar0])))
				{
					return 0;
				}
			}
			iVar0++;
		}
		if (is_entity_dead(iLocal_209))
		{
		}
		iVar0 = 0;
		while (iVar0 <= (3 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(iLocal_125[iVar0])))
				{
				}
			}
			iVar0++;
		}
		if (!is_entity_dead(&(iLocal_129[0])))
		{
			set_ped_reset_flag(&(iLocal_129[0]), 53, true);
		}
		func_1432(cParam0);
		func_1433(cParam0);
		func_1434(cParam0);
		func_1405(cParam0);
		if (_0x8a3945405b31048f() > 0.85f)
		{
			func_1394(0.85f);
		}
		_0xab0d553fe20a6e25(0.8f);
		func_1435();
		func_1421();
		if (func_1397(cParam0) >= 2)
		{
			func_1436(cParam0);
		}
		if (!&iLocal_374[5])
		{
			if (func_1428(1) < iLocal_33)
			{
				iLocal_374[7] = 1;
			}
			else
			{
				iLocal_374[7] = 0;
			}
		}
		if (!&uLocal_888[1] == 2)
		{
			func_1437(cParam0, 0);
		}
		if (iLocal_32 >= 3 && !func_1438(&(uLocal_121[0])))
		{
			if (iLocal_16 < 2)
			{
				iLocal_16 = 2;
			}
		}
	}
	switch (func_1397(cParam0))
	{
		case 0:
			if (is_entity_in_volume(Global_35, &(iLocal_228[42]), true, 0))
			{
				iLocal_374[4] = 1;
				func_1439(&(uLocal_121[0]));
				func_1035(&(iLocal_912[1]), 0, 0f, 0, 1, 0, 0, 0);
				func_264(&uLocal_556);
				func_141(cParam0, 10);
				func_264(&uLocal_553);
				func_119(1);
				func_810("MUD4_HLP_GUNSTORE", 10000, 0, 0, 0, 1);
				func_140(cParam0, 2);
			}
			break;
		case 1:
			if (is_entity_in_volume(Global_35, &(iLocal_228[42]), true, 0))
			{
				func_264(&uLocal_553);
				func_140(cParam0, 2);
			}
			break;
		case 2:
			if (is_entity_in_volume(Global_35, &(iLocal_228[42]), true, 0))
			{
				func_214(cParam0, &(uLocal_121[0]), 1);
				if (!does_blip_exist(iLocal_48))
				{
					_set_blip_flash_style(&(Global_36308[iLocal_93]), -401963276);
					iLocal_48 = func_1419(408396114, func_1412(15, 1), 1);
					set_blip_name_from_text_file(iLocal_48, "MUD4_BLIP_GS");
				}
				if (func_1440())
				{
					if (func_1441() == 6)
					{
						func_264(&uLocal_553);
						func_140(cParam0, 3);
					}
				}
			}
			else
			{
				func_264(&uLocal_556);
				func_141(cParam0, 20);
				func_264(&uLocal_553);
				func_140(cParam0, 1);
			}
			break;
		case 3:
			if (!func_1440())
			{
				if (has_ped_got_weapon(Global_35, -506285289, 0, false))
				{
					iLocal_374[5] = 1;
					func_218(&iLocal_48);
					if (_does_volume_exist(&(iLocal_228[36])))
					{
						func_1391(&(iLocal_228[36]), 0, 0);
					}
					func_119(1);
					func_810("MUD4_HLP_GUN_DONE", 10000, 0, 0, 0, 1);
					return 1;
				}
				else
				{
					func_264(&uLocal_553);
					func_140(cParam0, 2);
				}
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_857(var uParam0)
{
	if (!func_485(&iLocal_129, 1))
	{
		return 0;
	}
	func_177(75);
	func_178(75);
	if (_does_volume_exist(&(iLocal_228[4])))
	{
		func_199(&(iLocal_228[4]));
		_delete_volume(&(iLocal_228[4]));
	}
	if (_does_volume_exist(&(iLocal_228[5])))
	{
		func_199(&(iLocal_228[5]));
		_delete_volume(&(iLocal_228[5]));
	}
	if (_0x91a5f9cbebb9d936(uLocal_41))
	{
		func_198(&uLocal_41, &(iLocal_228[6]), 0);
		remove_scenario_blocking_area(uLocal_41, false);
	}
	if (_does_volume_exist(&(iLocal_228[69])))
	{
		_0xe5ef9de716ff737e(&(iLocal_228[69]), 0, 0);
		_0x18262cafebb5fbe1(&(iLocal_228[69]), 8192, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(&(iLocal_228[69]), 0, 0, 0, -1, -1, 0);
	}
	func_205(32);
	if (func_184())
	{
		func_53(0, 0);
	}
	func_196();
	_0x3088634cf8c819cf(&(uLocal_121[0]));
	_display_hud_component(559258637);
	return 1;
}

int func_858(var uParam0)
{
	if (_does_volume_exist(&(iLocal_228[69])))
	{
		_0xe5ef9de716ff737e(&(iLocal_228[69]), 0, 0);
		_0x18262cafebb5fbe1(&(iLocal_228[69]), 8192, 0, 0, -1, -1, 0);
		_0xb56d41a694e42e86(&(iLocal_228[69]), 0, 0, 0, -1, -1, 0);
	}
	return 1;
}

int func_859(char[4] cParam0)
{
	if (func_14(cParam0, 8))
	{
		if (_does_volume_exist(&(iLocal_228[12])))
		{
			func_1442(&(iLocal_228[12]), 0, 10240, 0);
		}
	}
	else
	{
		if (!is_entity_dead(Global_35))
		{
			set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		}
		else
		{
			return 0;
		}
		_set_ped_on_mount(&(uLocal_121[0]), &(iLocal_125[0]), -1, true);
		func_1443(uLocal_820[0], 6);
	}
	if (func_419() >= 1)
	{
		iLocal_374[30] = 1;
	}
	else
	{
		iLocal_374[30] = 0;
	}
	func_1444(20);
	func_1388(13, 651189962, 1, 977356591, -1);
	func_1445(20);
	return 1;
}

int func_860(char[4] cParam0)
{
	if (!func_14(cParam0, 8))
	{
		func_1016(0f, 0f);
		if (!is_entity_dead(&(iLocal_125[0])))
		{
			set_blocking_of_non_temporary_events(&(iLocal_125[0]), true);
			task_stand_still(&(iLocal_125[0]), -1);
		}
		func_140(cParam0, 1);
	}
	else
	{
		func_141(cParam0, 1);
		func_140(cParam0, 0);
	}
	if (_does_volume_exist(&(iLocal_228[12])))
	{
		_0x2fcd528a397e5c88(&(iLocal_228[12]), 16384);
		_0x2fcd528a397e5c88(&(iLocal_228[12]), 8);
		_0x2fcd528a397e5c88(&(iLocal_228[12]), 1048576);
		uLocal_37 = func_1389(&(iLocal_228[12]), 0, 0, 10240);
		_0xc1799fafd2fdf52b(&(iLocal_228[12]), 0, 0, 0);
		_0xe5ef9de716ff737e(&(iLocal_228[12]), 0, 0);
	}
	if (func_215(&(iLocal_912[0])))
	{
		func_1035(&(iLocal_912[0]), 0, 0f, 0, 0, 0, 0, 0);
	}
	if (func_215(&(iLocal_912[1])))
	{
		func_1035(&(iLocal_912[1]), 1, 0f, 0, 0, 0, 0, 0);
	}
	if (_does_volume_exist(&(iLocal_228[6])))
	{
		func_1390(&(iLocal_228[6]), 0);
	}
	if (_does_volume_exist(&(iLocal_228[7])))
	{
		func_1390(&(iLocal_228[7]), 0);
	}
	if (_does_volume_exist(&(iLocal_228[8])))
	{
		func_1390(&(iLocal_228[8]), 0);
	}
	if (_does_volume_exist(&(iLocal_228[11])))
	{
		func_1390(&(iLocal_228[11]), 0);
	}
	func_1047(cParam0);
	func_1048(cParam0);
	func_1038(&uLocal_820, 0);
	func_1039(&uLocal_819, 0);
	func_1043(&uLocal_911, 0);
	func_1036(&iLocal_409);
	func_1036(&iLocal_421);
	iLocal_374[0] = 0;
	iLocal_374[1] = 0;
	iLocal_374[2] = 0;
	func_264(&uLocal_553);
	func_1446();
	_0x0d7fd6a55fd63aef(28, 3, 0);
	return 1;
}

int func_861(char[4] cParam0)
{
	if (func_1397(cParam0) > -1 && func_1397(cParam0) < 29)
	{
		func_1401(cParam0);
		if (func_1447(Global_35, func_1412(15, 2), 45f, 1, 1))
		{
			iLocal_374[2] = 1;
			func_1448(Global_35, func_1412(15, 2), 0, 1112014848, 1106247680, 1097859072, 1084227584, 1, 1, 1, 0);
		}
		if (is_entity_dead(Global_35))
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (3 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(uLocal_121[iVar0])))
				{
					return 0;
				}
			}
			iVar0++;
		}
		if (is_entity_dead(iLocal_209))
		{
		}
		iVar0 = 0;
		while (iVar0 <= (3 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(iLocal_125[iVar0])))
				{
				}
			}
			iVar0++;
		}
		func_1449(&(uLocal_121[0]), &uLocal_783);
		func_1450(cParam0);
		func_1451(cParam0);
		func_1452(cParam0);
		func_1453(cParam0);
		func_1454(cParam0);
		func_1405(cParam0);
		func_1455(cParam0);
		func_1435();
	}
	if (func_1397(cParam0) >= 2 && func_1397(cParam0) <= 6)
	{
		if (!&iLocal_374[16])
		{
			if (func_1414(cParam0) >= 21)
			{
				if (!func_1408(268435456))
				{
					if (func_1456(Global_35, iLocal_209, 1))
					{
						func_1416(268435456);
					}
				}
				else if (func_1457(cParam0, iLocal_209, 1125515264, 0, 0, 1, -1925605092, 1084227584, 1103626240))
				{
					func_214(cParam0, &(uLocal_121[0]), 1);
					func_1458(131072);
					func_1459(&uLocal_556);
				}
				else
				{
					func_1420(cParam0, &(uLocal_121[0]), 1105014447, 422991367, 1, 1);
				}
			}
		}
	}
	switch (func_1397(cParam0))
	{
		case 0:
			if (!func_1460(2042647667))
			{
				func_1035(&(iLocal_912[1]), 1, 0f, 0, 0, 0, 0, 0);
			}
			if (!is_entity_in_volume(Global_35, &(iLocal_228[42]), true, 0))
			{
				iLocal_374[4] = 0;
				func_264(&uLocal_556);
				func_264(&uLocal_553);
				func_140(cParam0, 1);
			}
			break;
		case 1:
			func_1421();
			if (!func_1460(2042647667))
			{
				func_1035(&(iLocal_912[1]), 1, 0f, 0, 0, 0, 0, 0);
			}
			if (!&iLocal_374[12])
			{
				_0xc71d07c96946e263(player_id(), iLocal_209);
				if (func_1456(Global_35, iLocal_209, 0))
				{
					_0x0d7fd6a55fd63aef(28, 3, 1);
					func_185(cParam0, 1);
					set_audio_flag("naSETVehExitUseActiveTransportOnly", true);
					iLocal_374[12] = 1;
				}
			}
			else if (!is_ped_on_mount(Global_35) && !_is_ped_getting_into_a_mount_seat(Global_35, true))
			{
				iLocal_374[12] = 0;
			}
			if (&iLocal_374[12])
			{
				func_203();
				func_264(&uLocal_556);
				func_141(cParam0, 20);
				func_264(&uLocal_553);
				func_140(cParam0, 2);
			}
			break;
		case 2:
			if (&iLocal_374[0])
			{
				func_264(&uLocal_553);
				func_140(cParam0, 4);
			}
			break;
		case 4:
			if (func_1447(Global_35, func_1412(15, 2), 30f, 1, 1))
			{
				_0x660a8f876df1d4f8(7);
				_0x660a8f876df1d4f8(6);
				func_264(&uLocal_556);
				func_141(cParam0, 40);
				func_264(&uLocal_553);
				func_140(cParam0, 5);
			}
			break;
		case 5:
			if (func_1014(&uLocal_553) >= 12f)
			{
				if (func_257())
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
				}
				func_264(&uLocal_553);
				func_140(cParam0, 6);
			}
			else if (&uLocal_820[0] >= 39)
			{
				if (func_257())
				{
					_0xdd1232b332cbb9e7(3, 1, 0);
				}
				func_264(&uLocal_553);
				func_140(cParam0, 6);
			}
			break;
		case 6:
			disable_control_action(0, -1404316431, false);
			if (!is_entity_dead(&(uLocal_121[0])))
			{
				if (is_ped_on_mount(&(uLocal_121[0])))
				{
					set_blocking_of_non_temporary_events(&(uLocal_121[0]), true);
				}
				func_188(0);
				if (get_ped_config_flag(&(uLocal_121[0]), 167, true))
				{
					set_ped_config_flag(&(uLocal_121[0]), 167, false);
				}
			}
			if ((!is_ped_on_mount(Global_35) && !is_ped_on_mount(&(uLocal_121[0]))) && !func_1461())
			{
				return 1;
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_862(char[4] cParam0)
{
	if (!func_485(&uLocal_135, 1))
	{
		return 0;
	}
	if (!func_172(0))
	{
		return 0;
	}
	func_185(cParam0, 0);
	if (_does_volume_exist(&(iLocal_228[8])))
	{
		func_199(&(iLocal_228[8]));
		_delete_volume(&(iLocal_228[8]));
	}
	if (_does_volume_exist(&(iLocal_228[11])))
	{
		func_199(&(iLocal_228[11]));
		_delete_volume(&(iLocal_228[11]));
	}
	if (_does_volume_exist(&(iLocal_228[69])))
	{
		_0x74c2b3dc0b294102(&(iLocal_228[69]));
		_delete_volume(&(iLocal_228[69]));
	}
	if (_does_volume_exist(&(iLocal_228[7])))
	{
		func_199(&(iLocal_228[7]));
		_delete_volume(&(iLocal_228[7]));
	}
	if (_does_volume_exist(&(iLocal_228[69])))
	{
		_0xe5ef9de716ff737e(&(iLocal_228[69]), 1, 0);
		_0x74c2b3dc0b294102(&(iLocal_228[69]));
		_0xa1cfb35069d23c23(&(iLocal_228[69]));
	}
	func_542(0);
	func_542(1);
	func_214(cParam0, &(uLocal_121[0]), 1);
	func_520(&uLocal_741);
	if (func_184())
	{
		func_53(0, 0);
	}
	func_196();
	func_1462(20);
	if (func_1396(131072))
	{
		func_1463(131072);
	}
	if (func_1408(268435456))
	{
		func_1415(268435456);
	}
	return 1;
}

int func_863(var uParam0)
{
	return 1;
}

int func_864(char[4] cParam0)
{
	if (!func_14(cParam0, 8))
	{
		iVar0 = 0;
		while (iVar0 <= (20 - 1))
		{
			if (!is_entity_dead(&(Local_1105.f_2[iVar0])))
			{
				set_blocking_of_non_temporary_events(&(Local_1105.f_2[iVar0]), true);
				if (_does_volume_exist(&(iLocal_228[45])))
				{
					task_wander_in_volume(&(Local_1105.f_2[iVar0]), &(iLocal_228[45]), 1077936128, 1086324736, 1);
				}
			}
			iVar0++;
		}
	}
	iVar0 = 0;
	while (iVar0 <= (80 - 1))
	{
		if (_does_volume_exist(&(iLocal_228[iVar0])))
		{
			if ((((((iVar0 == 28 || iVar0 == 29) || iVar0 == 31) || iVar0 == 32) || iVar0 == 33) || iVar0 == 34) || iVar0 == 35)
			{
				_0xc1799fafd2fdf52b(&(iLocal_228[iVar0]), 0, 0, 0);
			}
		}
		iVar0++;
	}
	disable_control_action(0, -1404316431, false);
	return 1;
}

int func_865(char[4] cParam0)
{
	if (!func_14(cParam0, 8))
	{
		func_1016(0f, -15f);
	}
	else if (!is_entity_dead(Global_35))
	{
		if (has_ped_got_weapon(Global_35, -506285289, 0, false) && func_935(Global_35, 1, 0, 0) != -506285289)
		{
			set_current_ped_weapon(Global_35, -506285289, false, 0, false, false);
		}
	}
	if (!func_434(iLocal_209, -982327190))
	{
		task_stand_still(iLocal_209, -1);
	}
	if (!_does_volume_exist(iVar326))
	{
		iLocal_329 = _create_volume_box_with_custom_name(660.4447f, 336.2309f, 110.0382f, 0f, 0f, 0f, 7.859566f, 7.407195f, 8.837234f, "m_volSniperNavmeshBlock");
		_0x19c7567d2f2287d6(iVar326, 7);
	}
	func_1048(cParam0);
	func_1038(&uLocal_820, 0);
	func_1039(&uLocal_819, 0);
	func_1042(&uLocal_825, 0);
	func_1036(&iLocal_409);
	func_1036(&iLocal_421);
	func_141(cParam0, 0);
	func_140(cParam0, 0);
	func_264(&uLocal_553);
	func_1464(&Local_1105);
	disable_control_action(0, -1404316431, false);
	return 1;
}

int func_866(char[4] cParam0)
{
	if (func_1397(cParam0) > -1 && func_1397(cParam0) < 29)
	{
		func_1401(cParam0);
		if (func_1408(512))
		{
			if (func_436(iLocal_22, 256))
			{
				func_1465(&Local_1105, 1);
			}
			iVar0 = 0;
			while (iVar0 <= (3 - 1))
			{
				if (does_entity_exist(&(iLocal_150[iVar0])))
				{
					if (!does_blip_exist(&(iLocal_49[iVar0])))
					{
						iLocal_49[iVar0] = _blip_add_for_entity(-89429847, &(iLocal_150[iVar0]));
						func_1466(&(iLocal_150[iVar0]), 942020339, 1);
						set_blip_name_from_text_file(&(iLocal_49[iVar0]), "MUD4_BLIP_RANCH");
					}
				}
				iVar0++;
			}
		}
		disable_control_action(0, -822242784, false);
		if (is_entity_dead(Global_35))
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (3 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(uLocal_121[iVar0])))
				{
					return 0;
				}
			}
			iVar0++;
		}
		if (is_entity_dead(iLocal_209))
		{
		}
		iVar0 = 0;
		while (iVar0 <= (3 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(iLocal_125[iVar0])))
				{
				}
			}
			iVar0++;
		}
		func_1467(cParam0);
		func_1468(cParam0);
		func_1469(cParam0);
		func_1470(cParam0);
		func_1471(cParam0);
		func_1405(cParam0);
		func_1472();
	}
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (does_entity_exist(&(iLocal_150[iVar0])))
		{
			if (is_entity_dead(&(iLocal_150[iVar0])) && !&iLocal_447[iVar0])
			{
				Global_43838 = 1;
				func_357(4, 0, 1, 0, &(iLocal_150[iVar0]), 0, 1065353216, 0);
				iLocal_447[iVar0] = 1;
			}
		}
		iVar0++;
	}
	if (get_ammo_in_ped_weapon(Global_35, -1) == 0)
	{
		func_361(_get_ammo_type_for_weapon(func_935(Global_35, 1, 0, 0)), 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
	}
	if (!func_1473() && !_0xec7e480ff8bd0bed(Global_35))
	{
		if (func_935(Global_35, 1, 0, 0) != -506285289)
		{
			set_current_ped_weapon(Global_35, -506285289, false, 0, false, false);
		}
	}
	func_1421();
	switch (func_1397(cParam0))
	{
		case 0:
			disable_control_action(0, -1404316431, false);
			if (_does_anim_scene_exist(&(uLocal_466[3])) && !_is_anim_scene_started(&(uLocal_466[3]), false))
			{
				disable_control_action(0, 130948705, false);
				disable_control_action(0, -128997553, false);
			}
			if (func_1474())
			{
			}
			if (!&iLocal_374[17])
			{
				if (func_1474())
				{
					iVar0 = 0;
					while (iVar0 <= (3 - 1))
					{
						if (func_521(&(iLocal_150[iVar0]), 0))
						{
							if (!func_32(&uLocal_798))
							{
								func_33(&uLocal_798, 0);
							}
							iLocal_374[17] = 1;
							func_1475(&Local_1105, 1);
							func_1476(&Local_1105, 8, 20f, 30f, 5f, 0f, Global_35);
							func_1477(&Local_1105);
						}
						iVar0++;
					}
					if (get_gameplay_cam_relative_pitch() > 2f)
					{
						iLocal_409[2] = 1;
					}
					else
					{
						iLocal_409[2] = 0;
						iLocal_421[3] = 0;
					}
				}
			}
			if (!&iLocal_374[18])
			{
				if (func_1399(&uLocal_798) >= 0.5f)
				{
					iLocal_374[18] = 1;
				}
			}
			if (func_1408(512))
			{
				if (!&iLocal_409[7] && func_1014(&uLocal_556) >= 15f)
				{
					func_264(&uLocal_556);
					func_264(&uLocal_777);
					func_141(cParam0, 5);
					iLocal_409[7] = 1;
				}
			}
			if (!func_1478(16))
			{
				if (get_ped_waypoint_progress(&(iLocal_150[0])) >= 40)
				{
					func_1479(16);
					func_264(&uLocal_556);
					func_141(cParam0, 30);
					func_264(&uLocal_553);
					func_140(cParam0, 1);
				}
			}
			if (&iLocal_374[18])
			{
				func_264(&uLocal_556);
				func_53(0, 0);
				func_141(cParam0, 10);
				func_264(&uLocal_553);
				func_140(cParam0, 2);
			}
			else if (&uLocal_893[1] == 2 && func_1480() >= func_1481())
			{
				func_264(&uLocal_553);
				func_140(cParam0, 3);
			}
			break;
		case 1:
			disable_control_action(0, -1404316431, false);
			if (!&iLocal_374[18])
			{
				if (func_1474())
				{
					iVar0 = 0;
					while (iVar0 <= (3 - 1))
					{
						if (func_521(&(iLocal_150[iVar0]), 0))
						{
							iLocal_374[18] = 1;
							func_1476(&Local_1105, 8, 20f, 30f, 5f, 0f, Global_35);
							func_1477(&Local_1105);
						}
						iVar0++;
					}
					if (get_gameplay_cam_relative_pitch() > 2f)
					{
						iLocal_409[2] = 1;
					}
					else
					{
						iLocal_409[2] = 0;
						iLocal_421[3] = 0;
					}
				}
			}
			if (!func_1478(32))
			{
				if (get_ped_waypoint_progress(&(iLocal_150[0])) >= 61)
				{
					func_1479(32);
					func_264(&uLocal_556);
					func_141(cParam0, 45);
					func_264(&uLocal_553);
					func_140(cParam0, 19);
				}
			}
			if (&iLocal_374[18])
			{
				func_264(&uLocal_556);
				func_141(cParam0, 10);
				func_264(&uLocal_553);
				func_140(cParam0, 2);
			}
			else if (&uLocal_893[1] == 2 && func_1480() >= func_1481())
			{
				func_264(&uLocal_553);
				func_140(cParam0, 3);
			}
			break;
		case 2:
			disable_control_action(0, -1404316431, false);
			if (!&iLocal_374[19])
			{
				if (has_entity_been_damaged_by_entity(iLocal_220, Global_35, 1, 1) || !func_521(iLocal_220, 0))
				{
					iLocal_374[19] = 1;
				}
				if (has_entity_been_damaged_by_entity(iLocal_219, Global_35, 1, 1) || !func_521(iLocal_219, 0))
				{
					iLocal_374[19] = 1;
				}
				if (func_1482() || (_does_anim_scene_exist(&(uLocal_466[16])) && _0x1f0e401031e20146(&(uLocal_466[16]), func_460(6))))
				{
					if (func_521(iLocal_219, 0))
					{
						iLocal_374[19] = 1;
					}
					if (get_gameplay_cam_relative_pitch() > 2f)
					{
						iLocal_409[2] = 1;
					}
					else
					{
						iLocal_409[2] = 0;
						iLocal_421[3] = 0;
					}
				}
			}
			if (&iLocal_374[19])
			{
				func_264(&uLocal_556);
				func_141(cParam0, 35);
				func_264(&uLocal_553);
				func_140(cParam0, 3);
			}
			else if (&uLocal_893[1] == 2 && func_1480() >= func_1481())
			{
				func_264(&uLocal_556);
				func_141(cParam0, 35);
				func_264(&uLocal_553);
				func_140(cParam0, 3);
			}
			break;
		case 3:
			if (func_521(iLocal_220, 0) && !func_521(iLocal_219, 0))
			{
				if (!func_434(iLocal_220, 518218985))
				{
					_task_flee_from_ped(iLocal_220, Global_35, func_1412(15, 4), 250f, 120000, 1024, 3f, 0);
				}
			}
			if (&iLocal_374[21])
			{
				func_264(&uLocal_556);
				if (!func_1483("MUD4_SHOT2"))
				{
					func_141(cParam0, 40);
					enable_control_action(0, -1404316431, true);
					func_264(&uLocal_553);
					func_140(cParam0, 4);
				}
			}
			break;
		case 4:
			if (func_1414(cParam0) == 42 && !func_1461())
			{
				func_140(cParam0, 5);
			}
			if (func_1480() >= func_1481())
			{
				func_264(&uLocal_556);
				func_141(cParam0, 51);
				func_264(&uLocal_553);
				func_140(cParam0, 5);
			}
			break;
		case 5:
			if (func_1014(&uLocal_553) >= 30f)
			{
				func_264(&uLocal_556);
				func_141(cParam0, 51);
				func_264(&uLocal_553);
				func_140(cParam0, 29);
			}
			if (func_521(iLocal_219, 0))
			{
				if (bVar2979 && func_434(iLocal_219, 242628503))
				{
					func_264(&uLocal_556);
					func_141(cParam0, 51);
					func_264(&uLocal_553);
					func_140(cParam0, 29);
				}
			}
			else if (bVar2979)
			{
				func_264(&uLocal_556);
				func_141(cParam0, 51);
				func_264(&uLocal_553);
				func_140(cParam0, 29);
			}
			break;
		case 19:
			if (!&iLocal_374[29])
			{
				if (func_1014(&uLocal_553) >= 3f)
				{
					iLocal_374[29] = 1;
				}
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_867(var uParam0)
{
	func_538(&iLocal_49);
	func_1475(&Local_1105, 1);
	if (func_184())
	{
		func_53(0, 0);
	}
	func_196();
	if (Global_43838 == 0)
	{
		Global_43838 = 2;
	}
	return 1;
}

int func_868(var uParam0)
{
	if ((func_521(&(uLocal_121[0]), 0) == 0 || func_521(&(iLocal_125[0]), 0) == 0) || func_521(iLocal_209, 0) == 0)
	{
		return 0;
	}
	if (!func_1408(32768))
	{
		func_1484(158.5763f, 376.7004f, 107.8837f, 700f, 0);
		set_ped_non_creation_area(962.3499f, -103.3942f, 84.3815f, -194.9181f, 980.1279f, 193.6638f);
		set_ped_paths_in_area(962.3499f, -103.3942f, 84.3815f, -194.9181f, 980.1279f, 193.6638f, false, 0);
		func_1416(32768);
	}
	set_gameplay_cam_relative_heading(0f, 1f);
	set_gameplay_cam_relative_pitch(0f, 1f);
	func_918(&(uLocal_121[0]), func_1412(4, 1), func_1417(4, 1), 2, 1073741824);
	func_429(&(iLocal_125[0]), func_267(3, 3), 2, 1073741824);
	clear_ped_tasks_immediately(&(uLocal_121[0]), false, true);
	task_stand_still(&(uLocal_121[0]), -1);
	set_blocking_of_non_temporary_events(&(uLocal_121[0]), true);
	func_1476(&Local_1105, 8, 15f, 35f, 5f, 0f, Global_35);
	func_1477(&Local_1105);
	func_1485(&Local_1105, 1);
	func_1464(&Local_1105);
	return 1;
}

int func_869(char[4] cParam0)
{
	if (func_14(cParam0, 8))
	{
		func_1464(&Local_1105);
	}
	return 1;
}

int func_870(char[4] cParam0)
{
	func_185(cParam0, 1);
	set_blocking_of_non_temporary_events(iLocal_209, true);
	task_stand_still(iLocal_209, -1);
	_0x1b3c2d961f5fc0e1("script@Story@MUD4@sheep_herding");
	iLocal_824 = 34;
	if (!func_14(cParam0, 8))
	{
	}
	else
	{
		func_1476(&Local_1105, 8, 15f, 35f, 5f, 0f, Global_35);
		func_1477(&Local_1105);
		func_1485(&Local_1105, 1);
	}
	if (!get_ped_config_flag(&(uLocal_121[0]), 167, true))
	{
		set_ped_config_flag(&(uLocal_121[0]), 167, true);
	}
	iVar0 = 0;
	while (iVar0 <= (15 - 1))
	{
		if (!is_entity_dead(&(Local_1105.f_2[iVar0])))
		{
			set_ped_reset_flag(&(Local_1105.f_2[iVar0]), 3, true);
			set_ped_config_flag(&(Local_1105.f_2[iVar0]), 138, true);
		}
		iVar0++;
	}
	func_1486();
	func_1037(&uLocal_508);
	func_1036(&iLocal_409);
	func_1036(&iLocal_421);
	return 1;
}

int func_871(char[4] cParam0)
{
	func_1401(cParam0);
	func_1487(cParam0);
	if (func_436(iLocal_22, 256))
	{
		func_1465(&Local_1105, 1);
	}
	func_1449(&(uLocal_121[0]), &uLocal_783);
	func_1488(cParam0, 1);
	func_1489(cParam0);
	func_1405(cParam0);
	Var1 = { func_267(5, 0) };
	_0xcf213a5fc3abfc08(Var1, Var1.f_1, 100f);
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (does_entity_exist(&(iLocal_150[iVar0])))
		{
			if (is_entity_dead(&(iLocal_150[iVar0])) && !&iLocal_447[iVar0])
			{
				Global_43838 = 1;
				func_357(4, 0, 1, 0, 0, 0, 1065353216, 0);
				iLocal_447[iVar0] = 1;
			}
		}
		iVar0++;
	}
	if (func_1397(cParam0) >= 1)
	{
		if (!func_1090(player_id(), 1, 0, 1))
		{
			if (func_1456(Global_35, iLocal_209, 1))
			{
				if (!func_1396(131072))
				{
					func_1458(131072);
				}
			}
			if (func_1396(131072))
			{
				if (func_1457(cParam0, iLocal_209, 1125515264, 0, 1, 1, -1925605092, 1084227584, 1103626240))
				{
					if (does_blip_exist(iLocal_48))
					{
						_blip_set_modifier(iLocal_48, -1186550032);
					}
				}
				else if (does_blip_exist(iLocal_48))
				{
					_set_blip_flash_style(iLocal_48, -1186550032);
				}
			}
		}
	}
	switch (func_1397(cParam0))
	{
		case 0:
			func_1490(&Local_1105, 0);
			func_1491(&Local_1105);
			if (!bVar2981)
			{
				if (!is_entity_dead(iLocal_209))
				{
					if (_get_rider_of_mount(iLocal_209, false) == Global_35)
					{
						iLocal_2984 = 1;
						set_blocking_of_non_temporary_events(iLocal_209, false);
						clear_ped_tasks(iLocal_209, 1, 0);
					}
				}
			}
			if (func_1456(Global_35, iLocal_209, 0))
			{
				_0x0d7fd6a55fd63aef(7, 3, 1);
				set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
				set_current_ped_weapon(Global_35, _0x9f67929d98e7c6e8(Global_35, -1101297303, 0, 0), true, 0, true, false);
				func_65(7);
				if (_does_volume_exist(iVar326))
				{
					_0x2c87c3e1c7b96ee2(iVar326);
					_delete_volume(iVar326);
				}
				func_140(cParam0, 1);
				func_141(cParam0, 4);
			}
			break;
		case 1:
			func_1490(&Local_1105, 0);
			func_1491(&Local_1105);
			if (func_1447(Global_35, func_1492(&Local_1105, 0), 60f, 1, 1) || func_1493(cParam0))
			{
				_0x0d7fd6a55fd63aef(22, 3, 0);
				func_218(&iLocal_48);
				iLocal_2983 = 1;
				func_1494(&Local_1105);
				func_1495(&Local_1105);
				func_141(cParam0, 5);
				func_140(cParam0, 2);
			}
			break;
		case 2:
			if (func_1496(&Local_1105))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_872(char[4] cParam0)
{
	if (!func_485(&iLocal_150, 1))
	{
		return false;
	}
	if (!func_485(&iLocal_154, 1))
	{
		return false;
	}
	if (func_1461())
	{
		func_53(1, 0);
	}
	func_185(cParam0, 0);
	func_218(&iLocal_48);
	if (_does_volume_exist(&(iLocal_228[45])))
	{
		_delete_volume(&(iLocal_228[45]));
	}
	if (_does_volume_exist(&(iLocal_228[46])))
	{
		_delete_volume(&(iLocal_228[46]));
	}
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_119(1);
	func_1134(&uLocal_526, 1);
	return cParam0->f_607 == cParam0->f_607;
}

int func_873(var uParam0)
{
	_0x1b3c2d961f5fc0e1("script@Story@MUD4@sheep_herding");
	func_1484(158.5763f, 376.7004f, 107.8837f, 700f, 0);
	set_ped_non_creation_area(962.3499f, -103.3942f, 84.3815f, -194.9181f, 980.1279f, 193.6638f);
	set_ped_paths_in_area(962.3499f, -103.3942f, 84.3815f, -194.9181f, 980.1279f, 193.6638f, false, 0);
	set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
	set_current_ped_weapon(Global_35, _0x9f67929d98e7c6e8(Global_35, -1101297303, 0, 0), true, 0, true, false);
	set_blocking_of_non_temporary_events(&(uLocal_121[0]), false);
	return 1;
}

int func_874(char[4] cParam0)
{
	if (!func_14(cParam0, 8))
	{
		if (!func_1456(Global_35, iLocal_209, 0) && func_521(iLocal_209, 0))
		{
			_set_ped_on_mount(Global_35, iLocal_209, -1, true);
		}
		if (!is_ped_injured(&(uLocal_121[0])))
		{
			clear_ped_tasks_immediately(&(uLocal_121[0]), false, true);
			_set_ped_on_mount(&(uLocal_121[0]), &(iLocal_125[0]), -1, true);
		}
		if (does_entity_exist(Global_35))
		{
			set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
			set_current_ped_weapon(Global_35, _0x9f67929d98e7c6e8(Global_35, -1101297303, 0, 0), true, 0, true, false);
		}
	}
	func_1388(13, 1618820662, 1, 977356591, -1);
	return 1;
}

int func_875(char[4] cParam0)
{
	func_185(cParam0, 1);
	func_1497(&Local_1105, 1);
	func_141(cParam0, 0);
	func_1498(&Local_1105, 1);
	func_1499(&Local_1105, 0);
	func_1443(uLocal_820[0], 0);
	func_1036(&iLocal_409);
	func_1036(&iLocal_421);
	func_1037(&uLocal_508);
	func_264(&uLocal_565);
	func_264(&uLocal_553);
	func_264(&uLocal_538);
	func_264(&uLocal_541);
	func_264(&uLocal_544);
	func_264(&uLocal_547);
	func_175(76, 0);
	func_1035(&(iLocal_912[0]), 1, 0f, 0, 0, 0, 0, 0);
	func_1035(&(iLocal_912[1]), 1, 0f, 0, 0, 0, 0, 0);
	func_225(1500064347);
	if (!func_14(cParam0, 8))
	{
		if (_does_volume_exist(&(iLocal_228[38])))
		{
			func_1500(&(iLocal_228[38]), 0, 0, 0, 0, 0);
		}
		if (_does_volume_exist(&(iLocal_228[39])))
		{
			func_1500(&(iLocal_228[39]), 0, 0, 0, 0, 0);
		}
		if (_does_volume_exist(&(iLocal_228[59])))
		{
			_0x2fcd528a397e5c88(&(iLocal_228[59]), 16384);
			func_1391(&(iLocal_228[59]), 0, 0);
			_0x2fcd528a397e5c88(&(iLocal_228[59]), 8);
			_0x2fcd528a397e5c88(&(iLocal_228[59]), 1048576);
			uLocal_40 = func_1389(&(iLocal_228[59]), 0, 0, 0);
			_0xc1799fafd2fdf52b(&(iLocal_228[59]), 0, 0, 0);
			_0xe5ef9de716ff737e(&(iLocal_228[59]), 0, 0);
		}
		if (func_521(Global_35, 0))
		{
			set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		}
		if (func_521(&(uLocal_121[0]), 0) && func_521(&(iLocal_125[0]), 0))
		{
			if (!is_ped_on_mount(&(uLocal_121[0])))
			{
				_set_ped_on_mount(&(uLocal_121[0]), &(iLocal_125[0]), -1, true);
			}
		}
		func_1016(0, 0);
	}
	func_1501(cParam0, "MUD4_GV_OBJ1", -1082130432, 0, 0, -1, -1, 0);
	func_218(&iLocal_48);
	iLocal_48 = func_1419(408396114, func_1412(15, 5), 1);
	set_blip_name_from_text_file(iLocal_48, "MUD4_BLIP_YARD");
	iVar0 = 0;
	while (iVar0 <= (15 - 1))
	{
		if (!is_entity_dead(&(Local_1105.f_2[iVar0])))
		{
			set_ped_reset_flag(&(Local_1105.f_2[iVar0]), 3, true);
			set_ped_config_flag(&(Local_1105.f_2[iVar0]), 138, true);
		}
		iVar0++;
	}
	_0x0d7fd6a55fd63aef(14, 0, 0);
	_0x0d7fd6a55fd63aef(19, 0, 0);
	_0x0d7fd6a55fd63aef(22, 3, 0);
	return 1;
}

int func_876(char[4] cParam0)
{
	func_1401(cParam0);
	func_1502(&Local_1105);
	func_1503(cParam0);
	func_1488(cParam0, 1);
	func_1449(&(uLocal_121[0]), &uLocal_783);
	func_1405(cParam0);
	if (func_1447(Global_35, func_1412(7, 6), 400f, 1, 1))
	{
		if (func_1504(uVar523, 256) && func_1408(65536))
		{
		}
		else
		{
			func_1505(cParam0);
			if (func_1506(cParam0, 0))
			{
				func_963(&uLocal_526, 256);
				uLocal_42 = func_1389(&(iLocal_228[58]), 0, 0, 8192);
				func_1416(65536);
			}
		}
	}
	switch (func_1397(cParam0))
	{
		case 0:
			if (get_current_ped_weapon(&(uLocal_121[0]), &uLocal_2092, true, 0, false) != get_current_ped_weapon(Global_35, &uLocal_2091, true, 0, false))
			{
				set_current_ped_weapon(&(uLocal_121[0]), iVar2088, false, 0, false, false);
			}
			if (!func_441(Local_1105.f_613) && get_distance_between_coords(Local_1105.f_613, func_1412(7, 6), true) <= 130f)
			{
				if (func_1507(iLocal_209, &iLocal_222))
				{
					task_dump_carriable_from_parent(Global_35, iLocal_209, iLocal_222);
				}
				func_140(cParam0, 29);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_877(char[4] cParam0)
{
	if (func_1461())
	{
		func_53(1, 0);
	}
	func_185(cParam0, 0);
	if (_does_volume_exist(&(iLocal_228[12])))
	{
		func_198(&uLocal_37, &(iLocal_228[12]), 0);
		_delete_volume(&(iLocal_228[12]));
	}
	if (_does_volume_exist(&(iLocal_228[39])))
	{
		_delete_volume(&(iLocal_228[39]));
	}
	_0xdd1232b332cbb9e7(3, 1, 0);
	clear_ped_non_creation_area();
	set_ped_paths_in_area(962.3499f, -103.3942f, 84.3815f, -194.9181f, 980.1279f, 193.6638f, true, 0);
	func_141(cParam0, 0);
	_0x660a8f876df1d4f8(14);
	_0x660a8f876df1d4f8(19);
	func_1134(&uLocal_526, 1);
	return 1;
}

int func_878(var uParam0)
{
	_0x1b3c2d961f5fc0e1("script@Story@MUD4@sheep_herding");
	uLocal_42 = func_1389(&(iLocal_228[58]), 0, 0, 8192);
	set_blocking_of_non_temporary_events(&(uLocal_121[0]), false);
	return 1;
}

int func_879(char[4] cParam0)
{
	if (!func_14(cParam0, 8))
	{
		if (!is_entity_dead(Global_35))
		{
			func_1508(Global_35, iLocal_209);
		}
		else
		{
			return 0;
		}
		if (!is_entity_dead(&(uLocal_121[0])))
		{
			func_1508(&(uLocal_121[0]), &(iLocal_125[0]));
		}
		else
		{
			return 0;
		}
	}
	else if (_does_volume_exist(&(iLocal_228[13])))
	{
		func_1442(&(iLocal_228[13]), 0, 0, 0);
	}
	reset_anim_scene(&(uLocal_466[4]), "pl_IG5_Wait_Idle");
	func_225(1500064347);
	func_1388(13, 1618820662, 1, 977356591, -1);
	return 1;
}

int func_880(char[4] cParam0)
{
	if (!does_entity_exist(get_object_index_from_entity_index(func_1509(-2143609525, 0))) || !does_entity_exist(get_object_index_from_entity_index(func_1509(-1905739354, 0))))
	{
		return 0;
	}
	if (_is_anim_scene_loaded(&(uLocal_466[4]), true, false) && !_is_anim_scene_loading(&(uLocal_466[4]), true))
	{
		_0xdf7b5144e25cd3fe(&(uLocal_466[4]), "pl_IG5_Wait_Sheep");
		_0xdf7b5144e25cd3fe(&(uLocal_466[4]), "pl_IG5_Open_Gate");
		_0xdf7b5144e25cd3fe(&(uLocal_466[4]), "pl_IG5_Close_Gate");
		func_1510(cParam0, 4);
	}
	else
	{
		load_anim_scene(&(uLocal_466[4]));
		return 0;
	}
	if (!func_14(cParam0, 8))
	{
		func_1511(func_1417(6, 4));
		func_1016(0f, 0f);
	}
	else if (_does_volume_exist(&(iLocal_228[13])))
	{
		func_1390(&(iLocal_228[13]), 0);
	}
	func_185(cParam0, 1);
	_0x19c7567d2f2287d6(&(iLocal_228[55]), 7);
	func_1046(cParam0);
	if (!_does_volume_exist(iVar325))
	{
		uLocal_328 = _0x0eb78c2b156635b1(-1612834106, -228.2138f, 644.4697f, 112.8622f, 0f, 0f, -39.49014f, 6.168539f, 9.69884f, 8.052787f);
	}
	if (func_215(&(iLocal_912[2])))
	{
		func_1035(&(iLocal_912[2]), 0, 0f, 0, 1, 0, 0, 0);
	}
	if (func_215(&(iLocal_912[3])))
	{
		func_1035(&(iLocal_912[3]), 0, 0f, 0, 1, 0, 0, 0);
	}
	if (func_215(&(iLocal_912[6])))
	{
		func_1035(&(iLocal_912[6]), 0, 0f, 0, 1, 0, 0, 0);
		door_system_set_open_ratio(&(iLocal_912[6]), 0f, 1);
	}
	if (func_215(&(iLocal_912[7])))
	{
		func_1035(&(iLocal_912[7]), 0, 0f, 0, 1, 0, 0, 0);
		door_system_set_open_ratio(&(iLocal_912[7]), 0f, 1);
	}
	if (func_215(&(iLocal_912[4])))
	{
		func_1035(&(iLocal_912[4]), 1, 0f, 0, 1, 0, 0, 0);
		door_system_set_open_ratio(&(iLocal_912[4]), 0f, 1);
	}
	if (func_215(&(iLocal_912[5])))
	{
		func_1035(&(iLocal_912[5]), 1, 0f, 0, 1, 0, 0, 0);
		door_system_set_open_ratio(&(iLocal_912[5]), 0f, 1);
	}
	iVar0 = 0;
	while (iVar0 <= (15 - 1))
	{
		if (!is_entity_dead(&(Local_1105.f_2[iVar0])))
		{
			set_ped_reset_flag(&(Local_1105.f_2[iVar0]), 3, true);
			set_ped_config_flag(&(Local_1105.f_2[iVar0]), 138, true);
		}
		iVar0++;
	}
	func_1038(&uLocal_820, 0);
	func_1039(&uLocal_819, 0);
	func_1042(&uLocal_829, 0);
	func_1040(&uLocal_866, 0);
	func_1036(&iLocal_409);
	func_1036(&iLocal_421);
	func_1037(&uLocal_508);
	func_141(cParam0, 0);
	func_140(cParam0, 0);
	func_264(&uLocal_553);
	func_1512(cParam0, 16);
	_0x0d7fd6a55fd63aef(22, 3, 0);
	return 1;
}

int func_881(char[4] cParam0)
{
	if (func_1397(cParam0) > -1 && func_1397(cParam0) < 29)
	{
		func_1401(cParam0);
		if (is_entity_dead(Global_35))
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (3 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(uLocal_121[iVar0])))
				{
					return 0;
				}
			}
			iVar0++;
		}
		if (is_entity_dead(iLocal_209))
		{
		}
		iVar0 = 0;
		while (iVar0 <= (3 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(iLocal_125[iVar0])))
				{
				}
			}
			iVar0++;
		}
		func_1449(&(uLocal_121[0]), &uLocal_783);
		if (func_1397(cParam0) <= 1)
		{
			func_1513(&(uLocal_121[0]), iLocal_209, get_ped_group_index(Global_35));
		}
		func_1514(cParam0);
		func_1515(cParam0);
		func_1516(cParam0);
		func_1517(cParam0);
		func_1518(cParam0);
		func_1519(cParam0);
		func_1405(cParam0);
	}
	switch (func_1397(cParam0))
	{
		case 0:
			func_1502(&Local_1105);
			if (!func_441(Local_1105.f_613) && get_distance_between_coords(Local_1105.f_613, func_1412(15, 4), true) <= 100f)
			{
				iLocal_2985 = 1;
				func_264(&uLocal_553);
				func_140(cParam0, 1);
			}
			else if (func_1520(&Local_1105, func_1412(15, 4), 100f))
			{
				iLocal_2985 = 1;
				func_264(&uLocal_553);
				func_140(cParam0, 1);
			}
			break;
		case 1:
			func_1502(&Local_1105);
			if (func_1521(&Local_1105))
			{
				if (!func_1408(256))
				{
					func_1416(256);
				}
			}
			if (func_1408(256))
			{
				StringCopy(&cLocal_815, "pl_IG5_Close_Gate", 32);
				if (_0x23e33cb9f4a3f547(&(uLocal_466[4]), &cLocal_815))
				{
					func_1522(4, &cLocal_815);
					_0xdd1232b332cbb9e7(3, 1, 0);
					if (func_1523(&Local_1105) == 15)
					{
						func_1524(873224829, -1687263514);
					}
					if (!func_1396(8))
					{
						func_212(&Local_1105, 0);
						func_264(&uLocal_553);
						iLocal_456 = 1;
						func_1458(8);
					}
				}
			}
			if (iVar453 == 1)
			{
				if (!_is_ped_getting_into_a_mount_seat(Global_35, true) && func_1525(Global_35, &(iLocal_228[57]), 1, 0))
				{
					if (!func_1526(2))
					{
						func_1527(2);
					}
				}
				if (!is_ped_on_mount(Global_35) && func_1525(Global_35, &(iLocal_228[57]), 1, 0))
				{
					_0x0d7fd6a55fd63aef(7, 3, 0);
					_0x0d7fd6a55fd63aef(25, 3, 0);
					_0x0d7fd6a55fd63aef(6, 3, 0);
					set_blocking_of_non_temporary_events(&(uLocal_121[0]), true);
					func_140(cParam0, 2);
				}
			}
			break;
		case 2:
			if (_does_anim_scene_exist(&(uLocal_466[4])))
			{
				if (_is_anim_scene_loaded(&(uLocal_466[4]), true, false))
				{
					if (_is_anim_scene_started(&(uLocal_466[4]), false) && _0x1f0e401031e20146(&(uLocal_466[4]), "pl_IG5_Close_Gate"))
					{
						if (_get_anim_scene_time(&(uLocal_466[4])) >= 6.1f)
						{
							return 1;
						}
						else if (_get_anim_scene_time(&(uLocal_466[4])) >= 5f)
						{
							if (!is_gameplay_hint_active())
							{
								if (!is_entity_dead(&(iLocal_158[0])))
								{
									set_gameplay_entity_hint(&(iLocal_158[0]), 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
								}
							}
						}
					}
				}
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_882(char[4] cParam0)
{
	func_185(cParam0, 0);
	_0x2412216fcc7b4e3e("script@Story@MUD4@sheep_herding");
	func_190();
	func_192(iVar325);
	_0xc67a4910425f11f1(get_player_index(), 0);
	if (get_ped_config_flag(&(uLocal_121[0]), 167, true))
	{
		set_ped_config_flag(&(uLocal_121[0]), 167, false);
	}
	if (_does_volume_exist(&(iLocal_228[59])))
	{
		func_198(&uLocal_40, &(iLocal_228[59]), 0);
		_0xd17672447692478e(&(iLocal_228[59]), 0);
		_0xe5ef9de716ff737e(&(iLocal_228[59]), 1, 0);
		_delete_volume(&(iLocal_228[59]));
	}
	func_218(&iLocal_48);
	func_1528(cParam0, 2);
	func_197(cParam0);
	if (func_184())
	{
		func_53(0, 0);
	}
	func_196();
	if (func_215(&(iLocal_912[12])))
	{
		func_1035(&(iLocal_912[12]), 1, 0f, 0, 0, 0, 0, 0);
	}
	if (func_215(&(iLocal_912[13])))
	{
		func_1035(&(iLocal_912[13]), 1, 0f, 0, 0, 0, 0, 0);
	}
	set_entity_visible(&(iLocal_94[3]), false);
	return 1;
}

int func_883(char[4] cParam0)
{
	uLocal_42 = func_1389(&(iLocal_228[58]), 0, 0, 8192);
	func_1529(7);
	func_1466(iLocal_209, -401963276, 1);
	if (!func_14(cParam0, 8))
	{
		func_429(Global_35, func_267(7, 12), 2, 1073741824);
	}
	if (func_126(cParam0, 4))
	{
		if (!is_entity_dead(iLocal_209))
		{
			if (_does_scenario_point_exist(&(iLocal_330[2])))
			{
				set_blocking_of_non_temporary_events(iLocal_209, false);
				_task_use_scenario_point(iLocal_209, &(iLocal_330[2]), 0, 0, true, true, 0, false, -1f, false);
			}
			else
			{
				set_blocking_of_non_temporary_events(iLocal_209, true);
				task_stand_still(iLocal_209, -1);
			}
		}
		if (!is_entity_dead(&(iLocal_125[0])))
		{
			func_429(&(iLocal_125[0]), func_267(7, 5), 2, 1073741824);
			if (_does_scenario_point_exist(&(iLocal_330[3])))
			{
				set_blocking_of_non_temporary_events(&(iLocal_125[0]), true);
				_task_use_scenario_point(&(iLocal_125[0]), &(iLocal_330[3]), 0, 0, true, false, 0, false, -1f, false);
			}
			else
			{
				set_blocking_of_non_temporary_events(&(iLocal_125[0]), true);
				task_stand_still(&(iLocal_125[0]), -1);
			}
		}
	}
	return 1;
}

int func_884(char[4] cParam0)
{
	if (!func_126(cParam0, 4))
	{
		func_226(-515561750, 1, 0);
	}
	if (!func_14(cParam0, 8))
	{
		if (!does_entity_exist(get_object_index_from_entity_index(func_1509(-2143609525, 0))) || !does_entity_exist(get_object_index_from_entity_index(func_1509(-1905739354, 0))))
		{
			func_225(1500064347);
			func_1530(-1475403379);
			func_1531(724436573);
			return 0;
		}
	}
	else
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(true);
		}
		func_548(4);
		func_1021(cParam0);
		func_1532(cParam0);
		iVar0 = 0;
		while (iVar0 <= (80 - 1))
		{
			if (_does_volume_exist(&(iLocal_228[iVar0])))
			{
				if (iVar0 == 22 || iVar0 == 23)
				{
					if (_0xde0ea444735c1368(&(iLocal_228[iVar0])))
					{
						_0x2c87c3e1c7b96ee2(&(iLocal_228[iVar0]));
					}
				}
			}
			iVar0++;
		}
		if (_does_volume_exist(&(iLocal_228[9])))
		{
			func_1442(&(iLocal_228[9]), 0, 0, 0);
		}
		if (_does_volume_exist(&(iLocal_228[14])))
		{
			func_1442(&(iLocal_228[14]), 0, 0, 0);
		}
		if (_does_volume_exist(&(iLocal_228[15])))
		{
			func_1442(&(iLocal_228[15]), 0, 0, 0);
		}
		if (_does_volume_exist(&(iLocal_228[10])))
		{
			func_1442(&(iLocal_228[10]), 0, 0, 0);
			uLocal_44 = func_1389(&(iLocal_228[10]), 0, 0, 0);
		}
		if (_does_volume_exist(&(iLocal_228[16])))
		{
			func_1442(&(iLocal_228[16]), 0, 0, 0);
		}
		if (_does_volume_exist(&(iLocal_228[17])))
		{
			func_1442(&(iLocal_228[17]), 0, 0, 0);
		}
		set_audio_flag("OpenWorldMusicOnMission", false);
	}
	if (func_215(&(iLocal_912[2])))
	{
		func_1035(&(iLocal_912[2]), 1, 0f, 0, 0, 0, 0, 0);
	}
	if (func_215(&(iLocal_912[3])))
	{
		func_1035(&(iLocal_912[3]), 1, 0f, 0, 0, 0, 0, 0);
	}
	if (func_215(&(iLocal_912[6])))
	{
		door_system_set_open_ratio(&(iLocal_912[6]), 0f, 1);
		func_1035(&(iLocal_912[6]), 1, 0f, 0, 0, 0, 0, 0);
	}
	if (func_215(&(iLocal_912[7])))
	{
		door_system_set_open_ratio(&(iLocal_912[7]), 0f, 1);
		func_1035(&(iLocal_912[7]), 1, 0f, 0, 0, 0, 0, 0);
	}
	if (func_215(&(iLocal_912[8])))
	{
		door_system_set_open_ratio(&(iLocal_912[8]), -1f, 1);
		func_1035(&(iLocal_912[8]), 0, -1f, 1, 0, 0, 0, 0);
	}
	set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
	set_current_ped_weapon(Global_35, -1569615261, false, 0, true, false);
	func_1388(13, 1618820662, 1, 977356591, -1);
	func_1394(0.8f);
	return 1;
}

int func_885(char[4] cParam0)
{
	func_185(cParam0, 1);
	if (func_215(&(iLocal_912[6])))
	{
		func_1035(&(iLocal_912[6]), 1, 0f, 0, 0, 0, 0, 0);
		door_system_set_open_ratio(&(iLocal_912[6]), 0f, 1);
	}
	if (func_215(&(iLocal_912[7])))
	{
		func_1035(&(iLocal_912[7]), 1, 0f, 0, 0, 0, 0, 0);
		door_system_set_open_ratio(&(iLocal_912[7]), 0f, 1);
	}
	if (func_215(&(iLocal_912[8])))
	{
		door_system_set_open_ratio(&(iLocal_912[8]), -1f, 1);
		func_1035(&(iLocal_912[8]), 0, -1f, 1, 0, 0, 0, 0);
	}
	if (_does_volume_exist(&(iLocal_228[9])))
	{
		func_1390(&(iLocal_228[9]), 0);
	}
	if (_does_volume_exist(&(iLocal_228[14])))
	{
		func_1390(&(iLocal_228[14]), 0);
	}
	if (_does_volume_exist(&(iLocal_228[15])))
	{
		func_1390(&(iLocal_228[15]), 0);
	}
	if (_does_volume_exist(&(iLocal_228[10])))
	{
		func_1390(&(iLocal_228[10]), 0);
	}
	if (_does_volume_exist(&(iLocal_228[16])))
	{
		func_1390(&(iLocal_228[16]), 0);
	}
	if (_does_volume_exist(&(iLocal_228[17])))
	{
		func_1390(&(iLocal_228[17]), 0);
	}
	if (_does_volume_exist(&(iLocal_228[79])))
	{
		_0xe5ef9de716ff737e(&(iLocal_228[79]), 0, 0);
	}
	if (_does_volume_exist(&(iLocal_228[47])))
	{
		_0xfd010a2154b40676(&(iLocal_228[47]), -1538724068);
	}
	func_1510(cParam0, 5);
	set_ped_can_play_gesture_anims(&(iLocal_158[0]), 0, 1);
	func_1038(&uLocal_820, 0);
	func_1039(&uLocal_819, 0);
	func_1041(&uLocal_882, 0);
	func_1533(uLocal_888[1], 0);
	func_1533(&uLocal_910, 0);
	func_1036(&iLocal_409);
	func_1036(&iLocal_421);
	func_1037(&uLocal_508);
	iLocal_374[12] = 0;
	iLocal_374[11] = 0;
	iLocal_374[0] = 0;
	iLocal_374[2] = 0;
	iLocal_374[1] = 0;
	iLocal_374[3] = 0;
	iLocal_374[15] = 0;
	func_141(cParam0, 0);
	func_140(cParam0, 0);
	func_264(&uLocal_553);
	func_264(&uLocal_562);
	set_current_ped_weapon(Global_35, -1569615261, false, 0, true, false);
	func_227(1373192060, 1, 0);
	return 1;
}

int func_886(char[4] cParam0)
{
	if (func_1397(cParam0) > -1 && func_1397(cParam0) < 29)
	{
		func_1401(cParam0);
		func_1534(cParam0);
		func_1535(cParam0);
		func_1536(cParam0);
		func_1537(cParam0);
		func_1405(cParam0);
		func_1449(&(uLocal_121[0]), &uLocal_783);
		if (is_entity_dead(Global_35))
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (3 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(uLocal_121[iVar0])))
				{
					return 0;
				}
			}
			iVar0++;
		}
		if (is_entity_dead(iLocal_209))
		{
		}
		iVar0 = 0;
		while (iVar0 <= (3 - 1))
		{
			if (iVar0 == 0)
			{
				if (is_entity_dead(&(iLocal_125[iVar0])))
				{
				}
			}
			iVar0++;
		}
	}
	if (func_1397(cParam0) >= 1 && func_1397(cParam0) <= 4)
	{
		if (!func_1408(268435456))
		{
			if (func_1456(Global_35, iLocal_209, 1))
			{
				func_1416(268435456);
			}
		}
		else if (func_1413(Global_35, func_1412(15, 6), 1) >= 30f)
		{
			if (func_1457(cParam0, iLocal_209, 1125515264, 0, 0, 1, -1925605092, 1084227584, 1103626240))
			{
				func_1459(&uLocal_556);
				func_1529(7);
				func_1458(131072);
				if (does_blip_exist(iLocal_48))
				{
					remove_blip(&iLocal_48);
				}
			}
			else if (!&iLocal_409[1])
			{
				if (!does_blip_exist(iLocal_48))
				{
					iLocal_48 = _blip_add_for_coord(408396114, func_1412(15, 7));
					set_blip_sprite(iLocal_48, 1879260108, true);
					set_blip_name_from_text_file(iLocal_48, "MUD4_SALOON");
				}
			}
		}
		else if (func_1396(131072))
		{
			if (!does_blip_exist(iLocal_48))
			{
				iLocal_48 = _blip_add_for_coord(408396114, func_1412(15, 7));
				set_blip_sprite(iLocal_48, 1879260108, true);
				set_blip_name_from_text_file(iLocal_48, "MUD4_SALOON");
			}
			func_1501(cParam0, "MUD4_GTD_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			func_1538(cParam0, "MUD4_GTD_OBJ1", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			func_65(7);
			func_1463(131072);
		}
	}
	func_1539();
	if ((iLocal_359[6] && iLocal_359[10]) // PointerArith)
	{
		func_562(cParam0, &(uLocal_121[2]), 128);
		func_562(cParam0, &(uLocal_121[1]), 128);
		if (!&uLocal_888[1] == 2)
		{
			func_1437(cParam0, 0);
		}
		else if (func_1540(cParam0))
		{
			if ((_does_anim_scene_exist(&(uLocal_466[8])) && !_is_anim_scene_loading(&(uLocal_466[8]), true)) && !_is_anim_scene_loaded(&(uLocal_466[8]), true, false))
			{
				func_1541(cParam0, 8);
				func_1542(cParam0, &(uLocal_466[8]));
			}
			if (!iVar907 == 2)
			{
				func_1543(cParam0);
			}
			else if (_does_anim_scene_exist(&(uLocal_466[6])))
			{
				if (!_is_anim_scene_started(&(uLocal_466[6]), false))
				{
					func_1528(cParam0, 3);
					if (!func_1396(16))
					{
						func_1458(16);
					}
					func_1510(cParam0, 6);
					func_157(cParam0, &(uLocal_121[1]), 0, 0, 0, 0, 0);
					func_157(cParam0, &(uLocal_121[2]), 0, 0, 0, 0, 0);
					func_264(&uLocal_553);
				}
			}
		}
	}
	else if (func_1544(cParam0))
	{
	}
	if (func_1396(16))
	{
		if (func_1545(cParam0, 0))
		{
			func_53(1, 0);
			func_197(cParam0);
			func_264(&uLocal_556);
			func_141(cParam0, 51);
			func_264(&uLocal_553);
			func_140(cParam0, 29);
			func_1546(cParam0, 0);
			return 1;
		}
	}
	if (_does_anim_scene_exist(&(uLocal_466[8])))
	{
		if (_is_anim_scene_loaded(&(uLocal_466[8]), true, false))
		{
			if (!_0x0df57f86fe71dbe5(&(uLocal_466[8]), "pl_Fail") && !_0x23e33cb9f4a3f547(&(uLocal_466[8]), "pl_Fail"))
			{
				_0xdf7b5144e25cd3fe(&(uLocal_466[8]), "pl_Fail");
			}
			if (!_0x0df57f86fe71dbe5(&(uLocal_466[8]), "pl_Success") && !_0x23e33cb9f4a3f547(&(uLocal_466[8]), "pl_Success"))
			{
				_0xdf7b5144e25cd3fe(&(uLocal_466[8]), "pl_Success");
			}
		}
	}
	switch (func_1397(cParam0))
	{
		case 0:
			if ((iLocal_374[12] && iLocal_374[11]) // PointerArith)
			{
				func_541(2);
				func_541(3);
				set_blocking_of_non_temporary_events(&(uLocal_121[0]), false);
				func_264(&uLocal_556);
				func_141(cParam0, 10);
				func_264(&uLocal_553);
				func_140(cParam0, 1);
			}
			break;
		case 1:
			if (&iLocal_374[0])
			{
				func_264(&uLocal_553);
				func_140(cParam0, 2);
			}
			else if (&iLocal_374[2])
			{
				func_264(&uLocal_556);
				func_141(cParam0, 20);
				func_264(&uLocal_553);
				func_140(cParam0, 4);
			}
			break;
		case 2:
			if (!&iLocal_374[3])
			{
				if (func_1547())
				{
					if (_does_scenario_point_exist(&(iLocal_330[4])) && _does_scenario_point_exist(&(iLocal_330[5])))
					{
						iLocal_374[3] = 1;
					}
				}
			}
			if (&iLocal_374[2])
			{
				func_264(&uLocal_556);
				func_141(cParam0, 20);
				func_264(&uLocal_553);
				func_140(cParam0, 4);
			}
			break;
		case 3:
			break;
		case 4:
			if (&iLocal_374[22])
			{
				func_264(&uLocal_553);
				func_141(cParam0, 32);
				func_140(cParam0, 5);
			}
			if (is_entity_in_volume(Global_35, &(iLocal_228[48]), true, 0) && is_entity_in_volume(&(uLocal_121[0]), &(iLocal_228[49]), true, 0))
			{
				if (!func_1408(16384))
				{
					if (func_434(&(uLocal_121[0]), -1098463898))
					{
						if (func_1548(cParam0, "MUD4_INTO_SAL", 0))
						{
							func_1416(16384);
						}
					}
				}
			}
			if (is_entity_in_volume(Global_35, &(iLocal_228[47]), true, 0))
			{
				iLocal_374[23] = 1;
				func_264(&uLocal_556);
				func_264(&uLocal_553);
				func_140(cParam0, 6);
			}
			if (_does_anim_scene_exist(&(uLocal_466[6])))
			{
				if (_is_anim_scene_loaded(&(uLocal_466[6]), true, false))
				{
					if (_is_anim_scene_started(&(uLocal_466[6]), false))
					{
						if (_0x1f0e401031e20146(&(uLocal_466[6]), "pbl_intro"))
						{
							if (_0x8d81e7824b7753f7(&(uLocal_466[6]), "s_endLoop", 1))
							{
								iLocal_2986 = 0;
								func_264(&uLocal_553);
								func_140(cParam0, 7);
							}
						}
					}
				}
			}
			break;
		case 5:
			if (is_entity_in_volume(Global_35, &(iLocal_228[47]), true, 0))
			{
				iLocal_374[23] = 1;
				func_264(&uLocal_556);
				func_141(cParam0, 51);
				func_264(&uLocal_553);
				func_140(cParam0, 6);
			}
			if (is_entity_in_volume(Global_35, &(iLocal_228[48]), true, 0) && is_entity_in_volume(&(uLocal_121[0]), &(iLocal_228[49]), true, 0))
			{
				if (!func_1408(16384))
				{
					if (func_434(&(uLocal_121[0]), -1098463898))
					{
						if (func_1548(cParam0, "MUD4_INTO_SAL", 0))
						{
							func_1416(16384);
						}
					}
				}
			}
			break;
		case 6:
			if (!is_entity_in_volume(Global_35, &(iLocal_228[47]), true, 0))
			{
				iLocal_374[23] = 0;
				func_264(&uLocal_556);
				func_141(cParam0, 51);
				func_264(&uLocal_553);
				func_140(cParam0, 5);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_887(char[4] cParam0)
{
	func_485(&iLocal_158, 0);
	if (get_ped_config_flag(&(uLocal_121[0]), 167, true))
	{
		set_ped_config_flag(&(uLocal_121[0]), 167, false);
	}
	if (get_ped_config_flag(Global_35, 342, true))
	{
		set_ped_config_flag(Global_35, 342, false);
	}
	if (get_ped_config_flag(Global_35, 341, true))
	{
		set_ped_config_flag(Global_35, 341, false);
	}
	if (func_486(32, 0))
	{
		func_487(32, 1, 1, 0, 0);
	}
	if (does_entity_exist(&(iLocal_125[0])))
	{
		func_429(&(iLocal_125[0]), func_267(11, 5), 32, 1073741824);
		if (!func_434(&(iLocal_125[0]), -982327190))
		{
			task_stand_still(&(iLocal_125[0]), -1);
		}
	}
	if (does_entity_exist(iLocal_209))
	{
		func_429(iLocal_209, func_267(11, 4), 32, 1073741824);
		if (!func_434(iLocal_209, -982327190))
		{
			task_stand_still(&(iLocal_125[0]), -1);
		}
	}
	if (_does_volume_exist(&(iLocal_228[13])))
	{
		func_199(&(iLocal_228[7]));
		_delete_volume(&(iLocal_228[7]));
	}
	if (_does_volume_exist(&(iLocal_228[79])))
	{
		_0xe5ef9de716ff737e(&(iLocal_228[79]), 1, 0);
	}
	func_1533(uLocal_888[0], 0);
	func_548(5);
	func_196();
	if (_does_anim_scene_exist(&(uLocal_466[19])))
	{
		if (_is_anim_scene_started(&(uLocal_466[19]), false))
		{
			func_1549(19, 8);
		}
	}
	func_1394(1f);
	if (func_222(1, 262144))
	{
		func_223(1, 262144);
	}
	func_1550(cParam0, 128);
	if (func_1408(268435456))
	{
		func_1415(268435456);
	}
	if (_does_volume_exist(&(iLocal_228[47])))
	{
		_0xfd010a2154b40676(&(iLocal_228[47]), 623901053);
	}
	func_227(1373192060, 0, 0);
	return 1;
}

int func_888(char[4] cParam0)
{
	if ((_does_anim_scene_exist(&(uLocal_466[8])) && !_is_anim_scene_loading(&(uLocal_466[8]), true)) && !_is_anim_scene_loaded(&(uLocal_466[8]), true, false))
	{
		func_1541(cParam0, 8);
		func_1542(cParam0, &(uLocal_466[8]));
	}
	if (_does_anim_scene_exist(&(uLocal_466[8])))
	{
		if (!_is_anim_scene_loaded(&(uLocal_466[8]), true, false))
		{
			return 0;
		}
		else
		{
			if (!_0x0df57f86fe71dbe5(&(uLocal_466[8]), "pl_Fail"))
			{
				_0xdf7b5144e25cd3fe(&(uLocal_466[8]), "pl_Fail");
			}
			if (!_0x0df57f86fe71dbe5(&(uLocal_466[8]), "pl_Success"))
			{
				_0xdf7b5144e25cd3fe(&(uLocal_466[8]), "pl_Success");
			}
		}
	}
	if (!_0x23e33cb9f4a3f547(&(uLocal_466[8]), "pl_Fail") || !_0x23e33cb9f4a3f547(&(uLocal_466[8]), "pl_Success"))
	{
		return 0;
	}
	return 1;
}

int func_889(char[4] cParam0)
{
	if (!func_126(cParam0, 4))
	{
		func_225(-515561750);
		func_202(26245360);
		func_226(26245360, 1, 0);
	}
	if (func_126(cParam0, 4))
	{
		set_current_ped_weapon(Global_35, func_936(268435584, 0), true, 2, false, false);
	}
	func_1551(3);
	_0x140b3cb1d424a945(&(uLocal_121[2]), -1);
	_0x140b3cb1d424a945(&(uLocal_121[0]), -916314281);
	add_entity_to_audio_mix_group(&(uLocal_121[1]), "Dutch_MixGroup", 0f);
	if (!func_14(cParam0, 8))
	{
	}
	else
	{
		func_1552(cParam0);
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			set_entity_invincible(&(iLocal_165[iVar0]), false);
			set_entity_collision(&(iLocal_165[iVar0]), true, false);
			freeze_entity_position(&(iLocal_165[iVar0]), false);
			set_entity_visible(&(iLocal_165[iVar0]), true);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (2 - 1))
		{
			set_entity_invincible(&(iLocal_162[iVar0]), false);
			set_entity_collision(&(iLocal_162[iVar0]), true, false);
			freeze_entity_position(&(iLocal_162[iVar0]), false);
			set_entity_visible(&(iLocal_162[iVar0]), true);
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 <= (5 - 1))
		{
			set_entity_invincible(&(iLocal_168[iVar0]), false);
			set_entity_collision(&(iLocal_168[iVar0]), true, false);
			freeze_entity_position(&(iLocal_168[iVar0]), false);
			set_entity_visible(&(iLocal_168[iVar0]), true);
			iVar0++;
		}
		if (_does_volume_exist(&(iLocal_228[10])))
		{
			func_199(&(iLocal_228[10]));
		}
		if (_does_volume_exist(&(iLocal_228[16])))
		{
			func_199(&(iLocal_228[16]));
		}
		if (_does_volume_exist(&(iLocal_228[26])))
		{
			_0x2fcd528a397e5c88(&(iLocal_228[26]), 8);
			_0x2fcd528a397e5c88(&(iLocal_228[26]), 40);
			_0x2fcd528a397e5c88(&(iLocal_228[26]), 24);
			_0x2fcd528a397e5c88(&(iLocal_228[26]), 1048576);
			_0xc1799fafd2fdf52b(&(iLocal_228[26]), 0, 0, 0);
			uLocal_43 = func_1389(&(iLocal_228[26]), 0, 0, 0);
		}
	}
	_0x2b6529c54d29037a("TaskDuel");
	func_47(1);
	func_1550(cParam0, 4096);
	func_1550(cParam0, 2048);
	func_1553(cParam0, 1);
	func_1388(13, 1618820662, 1, 977356591, -1);
	if (!func_1408(33554432))
	{
		uLocal_353 = _0xc061e50f8d299f95(-1031124636, get_entity_coords(iLocal_223, true, false));
		if (_does_propset_exist(iVar350))
		{
			_delete_propset(iVar350, true, true);
		}
		if (does_entity_exist(&(iLocal_94[12])))
		{
			delete_object(iLocal_94[12]);
		}
		if (does_entity_exist(&(iLocal_94[13])))
		{
			delete_object(iLocal_94[13]);
		}
		if (does_entity_exist(&(iLocal_94[14])))
		{
			delete_object(iLocal_94[14]);
		}
		if (does_entity_exist(&(iLocal_94[15])))
		{
			delete_object(iLocal_94[15]);
		}
		if (does_entity_exist(&(iLocal_94[16])))
		{
			delete_object(iLocal_94[16]);
		}
		if (does_entity_exist(&(iLocal_129[4])))
		{
			delete_ped(iLocal_129[4]);
		}
		_0xd80faf919a2e56ea(iLocal_223, 1490711830);
	}
	func_1510(cParam0, 18);
	return 1;
}

int func_890(char[4] cParam0)
{
	func_1554();
	if (!_0x0772f87d7b07719a(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS")))
	{
		_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
	}
	if (func_14(cParam0, 8))
	{
		func_1555(cParam0);
		func_490(13);
	}
	func_548(6);
	func_1556(&Local_2000, &uLocal_1906);
	func_616(cParam0, &(uLocal_121[0]));
	if (func_215(&(iLocal_912[8])))
	{
		func_1035(&(iLocal_912[8]), 0, 1f, 1, 0, 0, 0, 0);
	}
	func_1047(cParam0);
	func_1048(cParam0);
	if (_does_volume_exist(&(iLocal_228[10])))
	{
		func_1390(&(iLocal_228[10]), 0);
	}
	if (_does_volume_exist(&(iLocal_228[16])))
	{
		func_1390(&(iLocal_228[16]), 0);
	}
	if (_does_volume_exist(&(iLocal_228[18])))
	{
		func_1390(&(iLocal_228[18]), 0);
	}
	func_1038(&uLocal_820, 0);
	func_1039(&uLocal_819, 0);
	func_1042(&uLocal_833, 0);
	func_1042(&uLocal_839, 0);
	func_1036(&iLocal_409);
	func_1036(&iLocal_421);
	iLocal_374[13] = 0;
	iLocal_374[14] = 0;
	func_141(cParam0, 0);
	func_140(cParam0, 0);
	func_264(&uLocal_553);
	set_ped_can_ragdoll(&(uLocal_121[0]), false);
	set_ped_can_ragdoll(&(uLocal_121[2]), false);
	set_entity_only_damaged_by_player(&(iLocal_125[1]), true);
	set_entity_only_damaged_by_player(&(iLocal_125[0]), true);
	set_entity_only_damaged_by_player(iLocal_209, true);
	set_ped_config_flag(&(uLocal_121[0]), 370, true);
	set_ped_config_flag(&(uLocal_121[0]), 371, true);
	return 1;
}

int func_891(char[4] cParam0)
{
	set_ped_config_flag(&(uLocal_121[0]), 273, true);
	set_ped_config_flag(&(uLocal_121[0]), 277, true);
	set_ped_config_flag(&(uLocal_121[2]), 273, true);
	set_ped_config_flag(&(uLocal_121[2]), 277, true);
	if (func_1397(cParam0) > -1 && func_1397(cParam0) < 29)
	{
		func_1401(cParam0);
		if (is_entity_dead(Global_35))
		{
			return 0;
		}
		if (_0x8a3945405b31048f() > 0.85f)
		{
			func_1394(0.85f);
		}
		func_1557(cParam0);
		func_1558(cParam0);
		func_1559(cParam0);
		func_1560(cParam0);
		func_1405(cParam0);
		func_1561(cParam0);
		func_1562(&iLocal_168);
	}
	switch (func_1397(cParam0))
	{
		case 0:
			if (func_1556(&Local_2000, &uLocal_1906))
			{
				set_anim_scene_bool(&(uLocal_466[9]), "b_PlayFail", true, false);
				set_anim_scene_bool(&(uLocal_466[8]), "b_PlaySuccess", true, false);
				StringCopy(&cLocal_815, "pl_Success", 32);
				func_1522(8, &cLocal_815);
				func_1510(cParam0, 9);
				StringCopy(&cLocal_815, "pl_Fail", 32);
				func_1522(10, &cLocal_815);
				func_264(&uLocal_553);
				func_140(cParam0, 9);
			}
			else if (func_1563(&Local_2000, &uLocal_1906))
			{
				iLocal_374[13] = 1;
				func_264(&uLocal_553);
				func_140(cParam0, 1);
			}
			else if (bVar442 || func_1564())
			{
				start_audio_scene("MUD4_Dutch_Deadeye_Scene");
				set_anim_scene_bool(&(uLocal_466[9]), "b_PlayFail", true, false);
				set_anim_scene_bool(&(uLocal_466[8]), "b_PlaySuccess", true, false);
				StringCopy(&cLocal_815, "pl_Dutch_Success", 32);
				func_1522(7, &cLocal_815);
				StringCopy(&cLocal_815, "pl_Success", 32);
				func_1522(8, &cLocal_815);
				func_1510(cParam0, 9);
				StringCopy(&cLocal_815, "pl_Fail", 32);
				func_1522(10, &cLocal_815);
				func_187(&Local_2000, &uLocal_1906);
				func_264(&uLocal_553);
				func_140(cParam0, 9);
			}
			break;
		case 1:
			if (func_1556(&Local_2000, &uLocal_1906))
			{
				iLocal_374[14] = 1;
				func_1566(cParam0, &(uLocal_121[0]), 321293, 0, 0, 67108863, 1023, 3, -1);
				if (!func_1567(cParam0, &(uLocal_121[0]), 256))
				{
					func_563(cParam0, &(uLocal_121[0]), 256);
				}
				stop_audio_scene("MUD4_Dutch_Deadeye_Scene");
				remove_entity_from_audio_mix_group(&(uLocal_121[1]), 0f);
				set_anim_scene_bool(&(uLocal_466[9]), "b_PlayFail", true, false);
				set_anim_scene_bool(&(uLocal_466[8]), "b_PlaySuccess", true, false);
				StringCopy(&cLocal_815, "pl_Success", 32);
				func_1522(8, &cLocal_815);
				func_1510(cParam0, 9);
				StringCopy(&cLocal_815, "pl_Fail", 32);
				func_1522(10, &cLocal_815);
				func_187(&Local_2000, &uLocal_1906);
				func_264(&uLocal_553);
				func_140(cParam0, 9);
			}
			else if (func_1568())
			{
				func_264(&uLocal_750);
				func_141(cParam0, 1);
				func_1566(cParam0, &(uLocal_121[0]), 321293, 0, 0, 67108863, 1023, 3, -1);
				if (!func_1567(cParam0, &(uLocal_121[0]), 256))
				{
					func_563(cParam0, &(uLocal_121[0]), 256);
				}
				func_1569(0);
				if (!_0xa54000d4bfd90bde(player_id()))
				{
					func_187(&Local_2000, &uLocal_1906);
				}
				StringCopy(&cLocal_815, "pl_Success", 32);
				func_1522(8, &cLocal_815);
				func_1522(10, &cLocal_815);
				set_ped_can_be_targetted(&(iLocal_168[4]), false);
				set_ped_config_flag(&(iLocal_168[4]), 273, true);
				set_ped_config_flag(&(iLocal_168[4]), 277, true);
				clear_entity_last_damage_entity(&(iLocal_168[4]));
				func_264(&uLocal_553);
				if (!func_1090(get_player_index(), 1, 0, 1))
				{
					_report_crime(player_id(), -493957506, 0, 0, true);
				}
				func_140(cParam0, 2);
			}
			else if (func_1564())
			{
				iLocal_445 = 1;
				if (&iLocal_374[31] == 1)
				{
					func_1510(cParam0, 11);
				}
				else
				{
					StringCopy(&cLocal_815, "pl_Fail", 32);
					func_1522(10, &cLocal_815);
				}
				if (&iLocal_374[32] == 1)
				{
					func_1510(cParam0, 22);
				}
				StringCopy(&cLocal_815, "pl_Dutch_Success", 32);
				func_1522(7, &cLocal_815);
				set_anim_scene_bool(&(uLocal_466[9]), "b_PlayFail", true, false);
				set_anim_scene_bool(&(uLocal_466[8]), "b_PlaySuccess", true, false);
				StringCopy(&cLocal_815, "pl_Success", 32);
				func_1522(8, &cLocal_815);
				func_1510(cParam0, 9);
				func_264(&uLocal_553);
				func_140(cParam0, 2);
			}
			break;
		case 2:
			if (func_1556(&Local_2000, &uLocal_1906))
			{
				iLocal_374[14] = 1;
				stop_audio_scene("MUD4_Dutch_Deadeye_Scene");
				remove_entity_from_audio_mix_group(&(uLocal_121[1]), 0f);
				StringCopy(&cLocal_815, "pl_Dutch_Success", 32);
				func_1522(7, &cLocal_815);
				func_264(&uLocal_553);
				if (bVar442)
				{
					func_140(cParam0, 9);
				}
				else
				{
					func_140(cParam0, 3);
				}
			}
			break;
		case 3:
			if (!does_entity_exist(iLocal_208))
			{
				if (func_1570() == (func_1571() - 1))
				{
					iVar0 = 0;
					while (iVar0 <= (5 - 1))
					{
						if (does_entity_exist(&(iLocal_168[iVar0])))
						{
							if (func_521(&(iLocal_168[iVar0]), 0))
							{
								iLocal_208 = &iLocal_168[iVar0];
							}
						}
						iVar0++;
					}
				}
			}
			else
			{
				func_1572(iLocal_208, 1);
				set_ped_reset_flag(iLocal_208, 9, true);
				set_ped_combat_attributes(iLocal_208, 0, false);
				_0xc2266aa617668ad3(iLocal_208, 1000f);
			}
			if (&uLocal_893[5] == 2 && &uLocal_893[6] == 2)
			{
				if (func_1570() == func_1571())
				{
					func_264(&uLocal_556);
					func_141(cParam0, 51);
					func_264(&uLocal_553);
					func_140(cParam0, 29);
				}
			}
			break;
		case 9:
			if (func_1014(&uLocal_553) >= 2f)
			{
				func_1573(&(uLocal_121[0]), 0, 0);
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_892(var uParam0)
{
	func_1394(1f);
	if (func_184())
	{
		func_53(0, 0);
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		func_1574(iLocal_174[iVar0], func_1412(15, 7), 90f, 110f);
		iVar0++;
	}
	func_196();
	return 1;
}

int func_893(char[4] cParam0)
{
	func_1510(cParam0, 18);
	return 1;
}

int func_894(char[4] cParam0)
{
	if (!func_14(cParam0, 8))
	{
	}
	else
	{
		if (!&uLocal_888[0] == 2)
		{
			func_1575(cParam0, 1);
		}
		func_1540(cParam0);
	}
	iLocal_118 = create_object(1077976463, -274.3719f, 787.0513f, 121.4295f, true, true, false, false, true);
	set_entity_heading(iLocal_118, 174.146f);
	set_entity_visible(iLocal_118, false);
	return 1;
}

int func_895(char[4] cParam0)
{
	if (!func_1576(0, 15))
	{
		return 0;
	}
	if (!func_14(cParam0, 8))
	{
		if (!is_entity_dead(Global_35))
		{
		}
		iVar0 = 0;
		while (iVar0 <= (3 - 1))
		{
			if (!is_entity_dead(&(uLocal_121[iVar0])))
			{
				if (iVar0 == 0)
				{
					set_current_ped_weapon(&(uLocal_121[iVar0]), get_best_ped_weapon(&(uLocal_121[iVar0]), false, false), true, 0, false, false);
				}
				else if (iVar0 == 1)
				{
					if (has_ped_got_weapon(&(uLocal_121[iVar0]), -95736505, 0, false))
					{
						set_current_ped_weapon(&(uLocal_121[iVar0]), -95736505, true, 0, false, false);
					}
					if (has_ped_got_weapon(&(uLocal_121[iVar0]), -733324796, 0, false))
					{
						set_current_ped_weapon(&(uLocal_121[iVar0]), -733324796, true, 1, false, false);
					}
				}
				else if (iVar0 == 2)
				{
				}
			}
			iVar0++;
		}
		if (_does_volume_exist(&(iLocal_228[36])))
		{
			func_1500(&(iLocal_228[36]), 0, 0, 0, 0, 0);
		}
	}
	else
	{
		if (!&uLocal_888[0] == 2)
		{
			func_1575(cParam0, 1);
		}
		func_1555(cParam0);
		func_1540(cParam0);
	}
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (!is_entity_dead(&(uLocal_121[iVar0])))
		{
			if (iVar0 == 0)
			{
				_0xfc3db99c8144cd81(&(uLocal_121[iVar0]), &(iLocal_309[4]), 1, 0, 0);
				_0xfc3db99c8144cd81(&(uLocal_121[iVar0]), &(iLocal_309[15]), 1, 1, 0);
				_0x4ec4ea2f72b36358(&(uLocal_121[iVar0]), 1);
				_0xcf0b19806473d324(&(uLocal_121[iVar0]), func_1412(16, 4));
			}
			else if (iVar0 == 1)
			{
				_0xfc3db99c8144cd81(&(uLocal_121[iVar0]), &(iLocal_309[5]), 1, 0, 0);
				_0xfc3db99c8144cd81(&(uLocal_121[iVar0]), &(iLocal_309[16]), 1, 1, 0);
				_0x4ec4ea2f72b36358(&(uLocal_121[iVar0]), 1);
			}
			else if (iVar0 == 2)
			{
				_0xfc3db99c8144cd81(&(uLocal_121[iVar0]), &(iLocal_309[6]), 1, 0, 0);
				_0x4ec4ea2f72b36358(&(uLocal_121[iVar0]), 1);
			}
			set_blocking_of_non_temporary_events(&(uLocal_121[iVar0]), true);
			open_sequence_task(&iLocal_34);
			if (iVar0 == 2)
			{
				task_stay_in_cover(0);
			}
			else
			{
				task_combat_hated_targets_in_area(0, func_1412(15, 7), 110f, 0, 0);
			}
			close_sequence_task(iLocal_34);
			task_perform_sequence(&(uLocal_121[iVar0]), iLocal_34);
			clear_sequence_task(&iLocal_34);
			_0x1f44b7e283c09ede(&(uLocal_121[iVar0]), 0.01f, 10000);
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (does_entity_exist(&(iLocal_179[iVar0])))
		{
			func_1577(&(iLocal_179[iVar0]), 1269650476);
			register_target(&(iLocal_179[iVar0]), Global_35, 1);
			register_target(&(iLocal_179[iVar0]), &(uLocal_121[0]), 1);
			register_target(&(iLocal_179[iVar0]), &(uLocal_121[1]), 1);
			register_target(&(iLocal_179[iVar0]), &(uLocal_121[2]), 1);
			set_blocking_of_non_temporary_events(&(iLocal_179[iVar0]), true);
			open_sequence_task(&iLocal_34);
			task_combat_hated_targets_in_area(0, func_1412(15, 7), 110f, 0, 0);
			close_sequence_task(iLocal_34);
			task_perform_sequence(&(iLocal_179[iVar0]), iLocal_34);
			clear_sequence_task(&iLocal_34);
			if (iVar0 == 0)
			{
				set_ped_sphere_defensive_area(&(iLocal_179[iVar0]), func_1412(17, 7), 1f, 0, 0, 0);
				_0xcf0b19806473d324(&(iLocal_179[iVar0]), func_1412(17, 7));
			}
			else if (iVar0 == 1)
			{
				set_ped_sphere_defensive_area(&(iLocal_179[iVar0]), func_1412(17, 8), 1f, 0, 0, 0);
				_0xcf0b19806473d324(&(iLocal_179[iVar0]), func_1412(17, 8));
			}
		}
		iVar0++;
	}
	if (!is_entity_dead(iLocal_223))
	{
		set_vehicle_doors_locked(iLocal_223, 1);
		set_vehicle_door_open(iLocal_223, 5, false, false);
	}
	if (func_215(&(iLocal_912[8])))
	{
		func_1035(&(iLocal_912[8]), 0, 1f, 1, 0, 0, 0, 0);
	}
	if (func_215(&(iLocal_912[9])))
	{
		func_1035(&(iLocal_912[9]), 0, 0f, 0, 1, 0, 0, 0);
	}
	if (!_does_scenario_point_exist(&(uLocal_337[1])))
	{
		uLocal_337[1] = func_1578(-151268211, -274.232f, 788.7355f, 121.4295f, 2.4027f, 3.5f, -1f, 1);
	}
	func_1038(&uLocal_820, 0);
	func_1039(&uLocal_819, 0);
	func_1042(&uLocal_844, 0);
	func_1042(&uLocal_847, 0);
	func_1042(&uLocal_850, 0);
	func_1036(&iLocal_409);
	func_1036(&iLocal_421);
	func_141(cParam0, 0);
	func_140(cParam0, 0);
	func_264(&uLocal_553);
	if (!func_32(&uLocal_750))
	{
		func_264(&uLocal_750);
	}
	_0xf008e0ba1fe1d644(20);
	return 1;
}

int func_896(char[4] cParam0)
{
	if (func_1397(cParam0) > -1 && func_1397(cParam0) < 29)
	{
		func_1401(cParam0);
		if (is_entity_dead(Global_35))
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (3 - 1))
		{
			if (is_entity_dead(&(uLocal_121[iVar0])))
			{
				return 0;
			}
			iVar0++;
		}
		if (is_entity_dead(iLocal_209))
		{
		}
		iVar0 = 0;
		while (iVar0 <= (3 - 1))
		{
			if (is_entity_dead(&(iLocal_125[iVar0])))
			{
			}
			iVar0++;
		}
		if (_0x8a3945405b31048f() > 0.85f)
		{
			func_1394(0.85f);
		}
		if (!func_1579(iLocal_118, Global_35, 0.5f))
		{
			if (_is_scenario_point_active(&(uLocal_337[1])))
			{
				_set_scenario_point_active(&(uLocal_337[1]), false);
			}
		}
		else if (!_is_scenario_point_active(&(uLocal_337[1])))
		{
			_set_scenario_point_active(&(uLocal_337[1]), true);
		}
		func_1580(cParam0);
		func_1581(cParam0);
		func_1582(cParam0);
		func_1583(cParam0);
		func_1584(cParam0);
		func_1585(cParam0);
		func_1405(cParam0);
		if (func_14(cParam0, 8))
		{
			func_1561(cParam0);
		}
		func_1562(&iLocal_179);
		func_1562(&iLocal_185);
		if (func_521(&(iLocal_182[0]), 0))
		{
			if (func_1438(&(iLocal_182[0])))
			{
				set_entity_only_damaged_by_player(&(iLocal_182[0]), false);
			}
			else
			{
				set_entity_only_damaged_by_player(&(iLocal_182[0]), true);
			}
		}
	}
	switch (func_1397(cParam0))
	{
		case 0:
			if (&uLocal_893[7] == 2)
			{
				if (func_1586(&iLocal_179, 2, 1) >= 2)
				{
					iLocal_2989 = 1;
					func_264(&uLocal_556);
					func_141(cParam0, 10);
					func_264(&uLocal_553);
					func_140(cParam0, 1);
				}
			}
			break;
		case 1:
			if (&uLocal_893[8] == 2)
			{
				if (func_1586(&iLocal_182, 2, 1) >= 2)
				{
					iLocal_374[24] = 1;
					func_264(&uLocal_556);
					func_141(cParam0, 20);
					func_264(&uLocal_553);
					func_140(cParam0, 2);
				}
			}
			break;
		case 2:
			if (&iLocal_374[25])
			{
				func_264(&uLocal_556);
				func_141(cParam0, 30);
				func_264(&uLocal_553);
				func_140(cParam0, 3);
			}
			break;
		case 3:
			if (bVar2987)
			{
				if ((&uLocal_893[7] == 2 && &uLocal_893[8] == 2) && &uLocal_893[9] == 2)
				{
					if (func_1586(&iLocal_185, 2, 1) >= (2 - 1) || func_1399(&uLocal_553) >= 4f)
					{
						if (func_257())
						{
							_0xdd1232b332cbb9e7(3, 1, 0);
						}
						func_264(&uLocal_556);
						func_141(cParam0, 51);
						func_264(&uLocal_553);
						func_140(cParam0, 29);
					}
				}
			}
			break;
		case 29:
			return 1;
	}
	return 0;
}

int func_897(var uParam0)
{
	if (!func_485(&iLocal_179, 1))
	{
		return 0;
	}
	if (!func_485(&iLocal_182, 1))
	{
		return 0;
	}
	func_1394(1f);
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (!is_entity_dead(&(uLocal_121[iVar0])))
		{
			if (iVar0 == 0)
			{
				if (&iLocal_359[1])
				{
					iLocal_359[1] = 0;
					if (get_ped_config_flag(&(uLocal_121[iVar0]), 179, true))
					{
						set_ped_config_flag(&(uLocal_121[iVar0]), 179, false);
					}
				}
			}
			else if (iVar0 == 1)
			{
				if (&iLocal_359[7])
				{
					iLocal_359[7] = 0;
					if (get_ped_config_flag(&(uLocal_121[iVar0]), 179, true))
					{
						set_ped_config_flag(&(uLocal_121[iVar0]), 179, false);
					}
				}
			}
			else if (iVar0 == 2)
			{
				if (&iLocal_359[11])
				{
					iLocal_359[11] = 0;
					if (get_ped_config_flag(&(uLocal_121[iVar0]), 179, true))
					{
						set_ped_config_flag(&(uLocal_121[iVar0]), 179, false);
					}
				}
			}
		}
		iVar0++;
	}
	func_538(&iLocal_49);
	if (func_184())
	{
		func_53(0, 0);
	}
	func_196();
	return 1;
}

int func_898(char[4] cParam0)
{
	if (!func_1576(0, 15))
	{
		return 0;
	}
	if (!func_998(cParam0, 0, uLocal_121[1], 0, -269.8211f, 786.1935f, 117.718f, 0, 1, 0, 1, 0, 1, 0) || !func_998(cParam0, 18, uLocal_121[2], 0, -267.7964f, 787.2011f, 117.5717f, 0, 1, 0, 1, 0, 1, 0))
	{
		return 0;
	}
	func_1035(1098854605, 1, 1f, 0, 1, 0, 0, 0);
	func_1587(cParam0, 0, 1, 0, 1);
	func_1587(cParam0, 1, 1, 0, 1);
	func_1587(cParam0, 2, 1, 0, 1);
	func_1588(76);
	create_model_hide(-272.975f, 786.292f, 118.75f, 3f, -283162583, false);
	func_918(&(uLocal_121[0]), func_1412(10, 1), func_1417(10, 1), 2, 1073741824);
	func_918(&(uLocal_121[2]), func_1412(10, 3), func_1417(10, 3), 2, 1073741824);
	func_918(&(uLocal_121[1]), func_1412(10, 2), func_1417(10, 2), 2, 1073741824);
	func_1589();
	if (_does_anim_scene_exist(&(uLocal_466[0])))
	{
		set_anim_scene_entity(&(uLocal_527[0]), "STRAUSS", &(uLocal_121[2]), 0);
		set_anim_scene_entity(&(uLocal_527[0]), "arthur", Global_35, 0);
	}
	func_1510(cParam0, 12);
	_set_anim_scene_playback_list_bool(&(uLocal_466[12]), func_460(17), true);
	return 1;
}

bool func_899(var uParam0)
{
	return uParam0->f_607 == uParam0->f_607;
}

bool func_900(var uParam0)
{
	func_1590();
	func_1591();
	freeze_entity_position(iLocal_223, false);
	set_entity_invincible(iLocal_223, false);
	set_blocking_of_non_temporary_events(&(uLocal_121[0]), true);
	set_current_ped_weapon(&(uLocal_121[0]), -916314281, true, 0, false, false);
	_set_ped_crouch_movement(&(uLocal_121[0]), false, 0, false);
	remove_ped_defensive_area(&(uLocal_121[0]), false);
	set_blocking_of_non_temporary_events(&(uLocal_121[2]), true);
	remove_all_ped_weapons(&(uLocal_121[2]), true, true);
	set_current_ped_weapon(&(uLocal_121[2]), -1569615261, true, 0, false, false);
	set_ragdoll_blocking_flags(&(uLocal_121[2]), 32);
	remove_ped_defensive_area(&(uLocal_121[2]), false);
	set_blocking_of_non_temporary_events(&(uLocal_121[1]), true);
	_set_ped_crouch_movement(&(uLocal_121[1]), false, 0, false);
	remove_ped_defensive_area(&(uLocal_121[1]), false);
	_0xfd6943b6df77e449(&(uLocal_121[2]), false);
	_0xd05ad61f242c626b(&(uLocal_121[1]), 0.9f);
	_0xd05ad61f242c626b(&(uLocal_121[0]), 0.9f);
	_0xc2266aa617668ad3(&(uLocal_121[1]), 0f);
	_0xc2266aa617668ad3(&(uLocal_121[0]), 0f);
	func_574(246426357, 0, 0);
	func_574(-861656352, 0, 0);
	func_574(-1466932952, 0, 0);
	func_574(-1553967420, 0, 0);
	func_1035(1988748538, 0, 0f, 0, 1, 0, 0, 0);
	func_1035(246426357, 0, 0f, 0, 1, 0f, 1, 0);
	func_1035(-861656352, 0, 0f, 0, 1, 0f, 1, 0);
	door_system_set_door_state(-1466932952, 0);
	door_system_set_door_state(-1553967420, 0);
	if (!does_blip_exist(iLocal_48))
	{
		iLocal_48 = func_1592(631964804, iLocal_223, 1);
		_blip_set_modifier(iLocal_48, -401963276);
		set_blip_name_from_text_file(iLocal_48, "MUD4_BLIP_CART");
	}
	if (!is_entity_dead(iLocal_223))
	{
		set_vehicle_doors_locked(iLocal_223, 1);
		set_vehicle_door_open(iLocal_223, 5, false, false);
	}
	if (!_does_scenario_point_exist(&(uLocal_337[0])))
	{
		uLocal_337[0] = func_1578(-2061249149, -298.24f, 797.7304f, 121.3561f, 200.348f, 3.5f, 0, 0);
	}
	if (!_does_scenario_point_exist(&(uLocal_337[2])))
	{
		uLocal_337[0] = func_1578(-2061249149, -307.6894f, 799.27f, 117.9802f, 11.1415f, 3.5f, 0, 0);
	}
	func_1593(1);
	func_264(&uLocal_562);
	func_264(vLocal_568[2]);
	func_264(&uLocal_765);
	func_264(&uLocal_768);
	set_ped_can_ragdoll(&(uLocal_121[0]), false);
	set_ped_can_ragdoll(&(uLocal_121[1]), false);
	stop_ped_speaking(&(uLocal_121[1]), true);
	stop_ped_speaking(&(uLocal_121[0]), true);
	stop_ped_speaking(&(uLocal_121[2]), true);
	set_current_ped_weapon(&(uLocal_121[0]), -916314281, false, 0, false, false);
	if (!does_blip_exist(iLocal_48))
	{
		iLocal_48 = func_1592(408396114, iLocal_223, 1);
		set_blip_name_from_text_file(iLocal_48, "MUD4_BLIP_CART");
	}
	return uParam0->f_607 == uParam0->f_607;
}

int func_901(char[4] cParam0)
{
	vVar1 = { -251.1461f, 755.8431f, 115.6127f };
	func_1540(cParam0);
	func_1594(cParam0);
	func_1401(cParam0);
	func_1595(cParam0);
	func_1596();
	func_1590();
	func_1597();
	if (_0x8a3945405b31048f() > 0.8f)
	{
		func_1394(0.8f);
	}
	if (&Local_2255[23] != 0)
	{
		if (is_tracked_point_visible(&(Local_2255[23])))
		{
		}
	}
	iVar4 = 0;
	while (iVar4 < 4)
	{
		if (!is_entity_on_screen(&(iLocal_174[iVar4])) && !has_entity_clear_los_to_entity(Global_35, &(iLocal_174[iVar4]), 17))
		{
			if (func_521(&(iLocal_174[iVar4]), 0))
			{
				if (func_1413(Global_35, vVar1, 1) >= 50f)
				{
					if (!func_434(&(iLocal_174[iVar4]), 518218985))
					{
						_task_flee_from_ped(&(iLocal_174[iVar4]), Global_35, -158.8111f, 616.5146f, 114.0443f, -1f, -1, 0, 2f, 0);
					}
					set_ped_as_no_longer_needed(iLocal_174[iVar4]);
				}
			}
		}
		iVar4++;
	}
	_0xe2bb2d6a9fe2ecde(1);
	iVar5 = func_935(Global_35, 1, 0, 0);
	if (_is_weapon_pistol(iVar5) || _is_weapon_revolver(iVar5))
	{
		if (get_ammo_in_ped_weapon(Global_35, iVar5) == 0)
		{
			func_361(_get_ammo_type_for_weapon(iVar5), _get_weapon_clip_size(iVar5), 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	if (func_1397(cParam0) >= 1)
	{
		func_1598();
	}
	func_1580(cParam0);
	switch (&uLocal_529[1])
	{
		case 0:
			if (iLocal_20 == 3)
			{
				uLocal_529[1] = &uLocal_529[1] + 1;
			}
			break;
		case 1:
			if (_0xb89fcff19dafff28(&(uLocal_466[17]), "IG_Dutch") || _0x005e6f28dd7ed58d(&(uLocal_466[17]), "IG_Dutch"))
			{
				set_ped_combat_movement(&(uLocal_121[1]), 1);
				set_ped_sphere_defensive_area(&(uLocal_121[1]), get_entity_coords(&(uLocal_121[1]), true, false), 1.5f, 0, 0, 0);
				set_blocking_of_non_temporary_events(&(uLocal_121[1]), true);
				if (!func_434(&(uLocal_121[1]), -1442466670))
				{
					task_combat_hated_targets_around_ped(&(uLocal_121[1]), 100f, 0, 0);
				}
				uLocal_529[1] = &uLocal_529[1] + 1;
			}
			break;
		case 2:
			break;
	}
	switch (&uLocal_529[0])
	{
		case 0:
			if (iLocal_20 == 3)
			{
				uLocal_529[0] = &uLocal_529[0] + 1;
			}
			break;
		case 1:
			if (_0xb89fcff19dafff28(&(uLocal_466[17]), "IG_Dutch") || _0x005e6f28dd7ed58d(&(uLocal_466[17]), "IG_Dutch"))
			{
				set_ped_combat_movement(&(uLocal_121[0]), 1);
				set_ped_sphere_defensive_area(&(uLocal_121[0]), get_entity_coords(&(uLocal_121[0]), true, false), 1.5f, 0, 0, 0);
				set_blocking_of_non_temporary_events(&(uLocal_121[0]), true);
				if (!func_434(&(uLocal_121[0]), -1442466670))
				{
					task_combat_hated_targets_around_ped(&(uLocal_121[0]), 100f, 0, 0);
				}
				uLocal_529[0] = &uLocal_529[0] + 1;
			}
			break;
		case 2:
			break;
	}
	switch (&uLocal_529[2])
	{
		case 0:
			break;
	}
	if (!func_436(iLocal_22, 64))
	{
		if (is_entity_at_coord(iLocal_223, -277.6113f, 793.9071f, 118.3489f, 4f, 4f, 4f, false, true, 0))
		{
			func_464(&iLocal_22, 64);
		}
	}
	else
	{
		func_1599();
		if (func_1014(&uLocal_765) >= 2f)
		{
			func_1600();
		}
		if (func_1014(&uLocal_768) >= 5f)
		{
			func_1601();
		}
	}
	switch (func_1397(cParam0))
	{
		case 0:
			if (func_1413(Global_35, get_blip_coords(iLocal_48), 1) <= 50f)
			{
				if (!is_entity_dead(&(Local_2094[1])) && !func_1602(&(Local_2094[1]), 1120685857))
				{
					func_1603(1);
					force_ped_motion_state(&(Local_2094[1]), -530524, false, 0, false);
				}
			}
			set_ped_config_flag(&(uLocal_121[0]), 286, true);
			set_ped_config_flag(&(uLocal_121[1]), 286, true);
			iLocal_20 = 4;
			func_140(cParam0, 1);
			break;
		case 1:
			func_1581(cParam0);
			if (func_215(&(iLocal_912[10])))
			{
				func_1035(&(iLocal_912[10]), 1, 0f, 0, 0, 0, 0, 0);
			}
			if (func_215(&(iLocal_912[11])))
			{
				func_1035(&(iLocal_912[11]), 1, 0f, 0, 0, 0, 0, 0);
			}
			if (func_1604(0, 11) <= 2 || iLocal_20 == 3)
			{
				if (!func_32(&uLocal_780))
				{
					func_33(&uLocal_780, 0);
				}
				else if (func_1014(&uLocal_780) >= 2f)
				{
					if (func_215(&(iLocal_912[10])))
					{
						func_1035(&(iLocal_912[10]), 0, 0f, 0, 0, 0, 0, 0);
					}
					if (func_215(&(iLocal_912[11])))
					{
						func_1035(&(iLocal_912[11]), 0, 0f, 0, 0, 0, 0, 0);
					}
					iVar0 = 12;
					while (iVar0 <= 15)
					{
						if (!does_blip_exist(Local_2094[iVar0]->f_1))
						{
							func_1603(iVar0);
							func_464(&iLocal_22, 1);
						}
						iVar0++;
					}
				}
			}
			if (iLocal_20 == 3)
			{
				func_192(&(iLocal_228[64]));
				func_264(&uLocal_747);
				func_140(cParam0, 2);
			}
			break;
		case 2:
			iVar0 = 0;
			while (iVar0 <= 15)
			{
				if (func_521(&(Local_2094[iVar0]), 0))
				{
					if (_0xdc9273d95976ba22(&(Local_2094[iVar0])) != 1000f)
					{
						_0xc2266aa617668ad3(&(Local_2094[iVar0]), 1000f);
					}
					if (get_ped_accuracy(&(Local_2094[iVar0])) != 10)
					{
						set_ped_accuracy(&(Local_2094[iVar0]), 10);
					}
				}
				iVar0++;
			}
			func_213(0, 0);
			func_264(&uLocal_747);
			func_140(cParam0, 3);
			break;
		case 3:
			func_213(18, 0);
			func_140(cParam0, 4);
			break;
		case 4:
			set_blocking_of_non_temporary_events(&(uLocal_121[0]), true);
			set_current_ped_weapon(&(uLocal_121[0]), -916314281, true, 0, false, false);
			func_213(1, 0);
			func_264(&uLocal_747);
			return 1;
	}
	return 0;
}

bool func_902(var uParam0)
{
	if (!func_485(&iLocal_185, 1))
	{
		return false;
	}
	func_53(0, 0);
	func_1394(1f);
	func_218(&iLocal_48);
	func_561(iLocal_223);
	func_213(0, 0);
	func_213(1, 0);
	func_213(18, 0);
	set_ped_combat_movement(&(uLocal_121[1]), 2);
	set_ped_combat_movement(&(uLocal_121[0]), 2);
	set_ped_combat_attributes(&(uLocal_121[0]), 12, false);
	set_ped_can_ragdoll(&(uLocal_121[0]), true);
	set_ped_can_ragdoll(&(uLocal_121[1]), true);
	set_ped_config_flag(&(uLocal_121[0]), 286, false);
	set_ped_config_flag(&(uLocal_121[1]), 286, false);
	func_220(0);
	func_220(1);
	return uParam0->f_607 == uParam0->f_607;
}

int func_903(var uParam0)
{
	func_429(Global_35, func_267(11, 0), 2, 1073741824);
	func_1016(0, 0);
	_0xfd6943b6df77e449(&(uLocal_121[2]), false);
	set_ragdoll_blocking_flags(&(uLocal_121[2]), 32);
	return 1;
}

int func_904(char[4] cParam0)
{
	if (!func_14(cParam0, 8))
	{
	}
	else
	{
		func_218(&iLocal_48);
		func_561(iLocal_223);
	}
	return 1;
}

int func_905(char[4] cParam0)
{
	if (!func_14(cParam0, 8))
	{
		StringCopy(&cLocal_815, func_460(14), 32);
		if (_does_anim_scene_exist(&(uLocal_466[17])))
		{
			if (!_is_anim_scene_started(&(uLocal_466[17]), false))
			{
				func_1510(cParam0, 17);
				return 0;
			}
			else if (!_0x1f0e401031e20146(&(uLocal_466[17]), func_460(14)))
			{
				func_1522(17, &cLocal_815);
				return 0;
			}
		}
	}
	_0xff745b0346e19e2c(-421224518);
	if (!is_entity_dead(iLocal_223))
	{
		set_vehicle_doors_locked(iLocal_223, 1);
		set_vehicle_door_open(iLocal_223, 5, false, false);
	}
	if (func_215(&(iLocal_912[10])))
	{
		func_1035(&(iLocal_912[10]), 0, 0f, 0, 0, 0, 0, 0);
	}
	if (func_215(&(iLocal_912[11])))
	{
		func_1035(&(iLocal_912[11]), 0, 0f, 0, 0, 0, 0, 0);
	}
	set_entity_only_damaged_by_player(&(uLocal_121[2]), false);
	_0xfd6943b6df77e449(&(uLocal_121[2]), false);
	_0xc2266aa617668ad3(&(uLocal_121[1]), 1f);
	_0xc2266aa617668ad3(&(uLocal_121[0]), 1f);
	func_1038(&uLocal_820, 0);
	func_1039(&uLocal_819, 0);
	func_1042(&uLocal_856, 0);
	func_1036(&iLocal_409);
	func_1036(&iLocal_421);
	func_1037(&uLocal_508);
	func_141(cParam0, 0);
	func_140(cParam0, 0);
	func_264(&uLocal_553);
	func_264(&uLocal_562);
	func_1605(cParam0, "1-ifNoMoreMissions");
	func_1605(cParam0, "2-ifMoreMissions");
	return 1;
}

int func_906(char[4] cParam0)
{
	_0x9f9a829c6751f3c7(player_id(), 28, 1);
	if (func_1397(cParam0) > -1 && func_1397(cParam0) < 29)
	{
		func_1401(cParam0);
		func_1606(cParam0);
		func_1607();
		func_1608(cParam0);
		func_1609(cParam0);
		func_1405(cParam0);
		func_1610();
		if (_0x8a3945405b31048f() > 0.85f)
		{
			func_1394(0.85f);
		}
		if (is_entity_dead(Global_35))
		{
			return 0;
		}
		iVar0 = 0;
		while (iVar0 <= (3 - 1))
		{
			if (is_entity_dead(&(uLocal_121[iVar0])))
			{
				return 0;
			}
			iVar0++;
		}
		iVar4 = func_935(Global_35, 1, 0, 0);
		if (_is_weapon_pistol(iVar4) || _is_weapon_revolver(iVar4))
		{
			if (get_ammo_in_ped_weapon(Global_35, iVar4) == 0)
			{
				func_361(_get_ammo_type_for_weapon(iVar4), _get_weapon_clip_size(iVar4), 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
		}
		if (func_1397(cParam0) >= 1)
		{
			if (func_1005(Global_35, &(uLocal_121[0]), 1, 1) <= 15f)
			{
				if (!func_436(iLocal_22, 4096))
				{
					func_464(&iLocal_22, 4096);
				}
				else
				{
					func_1611();
				}
			}
		}
		if (!bVar443)
		{
			if (!&iLocal_409[10])
			{
				if (compare_strings(sVar811, "MUD4_OBJ_STOW", false, -1) == 0)
				{
					func_214(cParam0, &(uLocal_121[0]), 1);
					if (!func_1612(2))
					{
						func_1613(2);
					}
				}
				func_1501(cParam0, "MUD4_GH_OBJ3", -1082130432, 0, 0, -1, -1, 0);
				func_1420(cParam0, &(uLocal_121[2]), 1105014447, 422991367, 1, 1);
				iLocal_409[10] = 1;
			}
		}
		else if (&iLocal_409[10])
		{
			if (func_1612(2))
			{
				func_1420(cParam0, &(uLocal_121[0]), 1105014447, 422991367, 1, 1);
			}
			func_1501(cParam0, sVar811, -1082130432, 0, 0, -1, -1, 0);
			if (does_blip_exist(func_1614(&(uLocal_121[2]))))
			{
				func_214(cParam0, &(uLocal_121[2]), 1);
			}
			iLocal_409[10] = 0;
		}
		if (!bVar443)
		{
			if (func_32(&uLocal_550))
			{
			}
			if (!func_1408(1))
			{
				if (func_32(&uLocal_550))
				{
					func_264(&uLocal_550);
				}
				else
				{
					func_33(&uLocal_550, 0);
				}
				func_1416(1);
			}
		}
		else
		{
			func_520(&uLocal_550);
			func_1415(1);
		}
		if (func_32(&uLocal_550))
		{
			if (func_1014(&uLocal_550) >= 17f)
			{
				func_1615(cParam0, &(uLocal_121[2]), 1, 1);
			}
		}
	}
	switch (func_1397(cParam0))
	{
		case 0:
			if (bVar443)
			{
				func_1615(cParam0, &(uLocal_121[2]), 0, 1);
				func_140(cParam0, 1);
			}
			break;
		case 1:
			if (bVar443)
			{
				if (does_blip_exist(func_1614(&(uLocal_121[2]))))
				{
					func_214(cParam0, &(uLocal_121[2]), 1);
				}
				if (func_1005(Global_35, iLocal_209, 1, 1) <= 20f)
				{
					iVar0 = 0;
					while (iVar0 < 2)
					{
						if (func_521(&(iLocal_191[iVar0]), 0))
						{
							_0xc2266aa617668ad3(&(iLocal_191[iVar0]), 1000f);
							set_entity_only_damaged_by_player(&(iLocal_191[iVar0]), false);
							func_1572(&(iLocal_191[iVar0]), 1);
						}
						iVar0++;
					}
					iVar1 = 0;
					while (iVar1 < 1)
					{
						if (func_521(&(iLocal_194[iVar1]), 0))
						{
							_0xc2266aa617668ad3(&(iLocal_194[iVar1]), 1000f);
							set_entity_only_damaged_by_player(&(iLocal_194[iVar1]), false);
							func_1572(&(iLocal_194[iVar1]), 1);
						}
						iVar1++;
					}
					iVar2 = 0;
					while (iVar2 < 4)
					{
						if (func_521(&(iLocal_198[iVar2]), 0))
						{
							_0xc2266aa617668ad3(&(iLocal_198[iVar2]), 1000f);
							set_entity_only_damaged_by_player(&(iLocal_198[iVar2]), false);
							func_1572(&(iLocal_198[iVar2]), 1);
						}
						iVar2++;
					}
					iVar3 = 0;
					while (iVar3 <= 15)
					{
						if (func_521(&(Local_2094[iVar3]), 0))
						{
							_0xc2266aa617668ad3(&(Local_2094[iVar3]), 1000f);
							set_entity_only_damaged_by_player(&(Local_2094[iVar3]), false);
							func_1572(&(Local_2094[iVar3]), 1);
						}
						iVar3++;
					}
					if (does_blip_exist(iLocal_91))
					{
						remove_blip(&iLocal_91);
						_0xdd1232b332cbb9e7(3, 1, 1);
						func_1501(cParam0, "MUD4_SS_OBJ1", -1082130432, 0, 0, -1, -1, 0);
					}
				}
				else if (!&iLocal_409[9])
				{
					if (!does_blip_exist(iLocal_91))
					{
						func_1501(cParam0, "MUD4_GH_OBJ4", -1082130432, 0, 0, -1, -1, 0);
						iLocal_91 = _blip_add_for_entity(408396114, &(iLocal_125[0]));
						func_264(&uLocal_553);
					}
				}
			}
			else
			{
				func_1420(cParam0, &(uLocal_121[2]), 1105014447, 422991367, 1, 1);
				if (does_blip_exist(iLocal_91))
				{
					remove_blip(&iLocal_91);
				}
			}
			if (&uLocal_893[11] == 2)
			{
				if (((func_1586(&iLocal_191, 2, 1) >= 2 && func_1586(&iLocal_194, 2, 1) >= 1) && func_1586(&iLocal_198, 2, 1) >= 4) && func_1604(0, 15) == 0)
				{
					func_264(&uLocal_556);
					func_141(cParam0, 11);
					func_264(&uLocal_553);
					func_140(cParam0, 2);
				}
			}
			break;
		case 2:
			iVar5 = _0x61914209c36efddb(&(uLocal_121[2]));
			func_1616(cParam0, 0);
			func_1528(cParam0, 4);
			if (func_1005(Global_35, &(iLocal_125[0]), 1, 1) <= 10f)
			{
				if (!_0x808077647856de62(&(uLocal_121[2]), 14))
				{
					_0x18ff3110cf47115d(&(uLocal_121[2]), 14, 1);
				}
				if (!_0x808077647856de62(&(iLocal_125[0]), 15))
				{
					_0x18ff3110cf47115d(&(iLocal_125[0]), 15, 1);
				}
				if (!func_1617(1, 2048))
				{
					func_189(1, 2048, 1);
				}
			}
			if (!func_1396(8388608))
			{
				if (has_anim_event_fired(Global_35, -1461397312) || iVar5 == 7)
				{
					func_1458(8388608);
				}
			}
			if (func_1396(8388608))
			{
				if (func_1483("MUD4_STOW"))
				{
					func_1618("MUD4_STOW", 0, 0);
				}
				func_264(&uLocal_556);
				func_141(cParam0, 51);
				func_264(&uLocal_553);
				func_140(cParam0, 29);
			}
			break;
		case 29:
			if (func_1127(10) && func_1127(11))
			{
				func_1619(cParam0, "1-ifNoMoreMissions");
			}
			else
			{
				func_1619(cParam0, "2-ifMoreMissions");
			}
			return 1;
	}
	return 0;
}

int func_907(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (!is_entity_dead(&(uLocal_121[iVar0])))
		{
			if (iVar0 == 0)
			{
			}
			else if (iVar0 == 1)
			{
			}
			else if (iVar0 == 2)
			{
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		if (iVar0 != 1)
		{
			if (!is_entity_dead(&(iLocal_203[iVar0])))
			{
				set_entity_invincible(&(iLocal_203[iVar0]), false);
				set_entity_collision(&(iLocal_203[iVar0]), true, false);
				freeze_entity_position(&(iLocal_203[iVar0]), false);
				set_entity_visible(&(iLocal_203[iVar0]), true);
			}
		}
		iVar0++;
	}
	func_1394(1f);
	_0x6afda2264925bd11(-421224518);
	func_1528(cParam0, 4);
	if (func_184())
	{
		func_53(0, 0);
	}
	func_196();
	if (does_blip_exist(iLocal_91))
	{
		remove_blip(&iLocal_91);
	}
	set_entity_only_damaged_by_player(iLocal_209, false);
	clear_ragdoll_blocking_flags(&(uLocal_121[2]), 32);
	return 1;
}

bool func_908(char[4] cParam0)
{
	vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 0.5f, 0.5f, 0f) };
	vVar3 = { get_offset_from_entity_in_world_coords(Global_35, -0.5f, -0.5f, 0f) };
	if (!func_998(cParam0, 0, uLocal_121[1], 0, vVar0.x, vVar0.y, vVar0.z, 0, 1, 0, 1, 0, 1, 0) || !func_998(cParam0, 18, uLocal_121[2], 0, vVar3.x, vVar3.y, vVar3.z, 0, 1, 0, 1, 0, 1, 0))
	{
		return false;
	}
	func_918(&(uLocal_121[1]), get_offset_from_entity_in_world_coords(iLocal_223, 2.49334f, -0.0646157f, 0.869164f), 0f, 2, 1073741824);
	func_918(&(uLocal_121[2]), get_offset_from_entity_in_world_coords(iLocal_223, -0.363963f, -3.20163f, 1.07847f), 0f, 2, 1073741824);
	func_918(&(uLocal_121[0]), get_offset_from_entity_in_world_coords(iLocal_223, 1.12213f, -2.89543f, 1.2779f), 0f, 2, 1073741824);
	func_1035(1098854605, 1, 1f, 0, 1, 0, 0, 0);
	func_1587(cParam0, 0, 1, 0, 1);
	func_1587(cParam0, 1, 1, 0, 1);
	func_1587(cParam0, 2, 1, 0, 1);
	func_1588(76);
	func_1589();
	func_1016(0f, 0f);
	func_1605(cParam0, "1-ifNoMoreMissions");
	func_1605(cParam0, "2-ifMoreMissions");
	if (func_1127(10) && func_1127(11))
	{
		func_1620(cParam0, "1-ifNoMoreMissions");
	}
	else
	{
		func_1620(cParam0, "2-ifMoreMissions");
	}
	return cParam0->f_607 == cParam0->f_607;
}

bool func_909(char[4] cParam0)
{
	set_blocking_of_non_temporary_events(&(uLocal_121[1]), true);
	set_blocking_of_non_temporary_events(&(uLocal_121[0]), true);
	set_blocking_of_non_temporary_events(&(uLocal_121[2]), true);
	func_198(&uLocal_43, &(iLocal_228[26]), 0);
	if (_does_volume_exist(&(iLocal_228[66])))
	{
		_0x2fcd528a397e5c88(&(iLocal_228[66]), 8);
		uLocal_45 = func_1389(&(iLocal_228[66]), 0, 0, 0);
		func_1391(&(iLocal_228[66]), 0, 0);
	}
	_0xd6c0a8c7c0b2f82c(get_player_index(), 0);
	func_1059(cParam0);
	func_1621(16384);
	return cParam0->f_607 == cParam0->f_607;
}

bool func_910(char[4] cParam0)
{
	if (does_entity_exist(&(uLocal_121[0])))
	{
		func_616(cParam0, &(uLocal_121[0]));
	}
	if (does_entity_exist(&(uLocal_121[2])))
	{
		func_616(cParam0, &(uLocal_121[2]));
	}
	if (does_entity_exist(&(uLocal_121[1])))
	{
		func_616(cParam0, &(uLocal_121[1]));
	}
	_0x1a7a802b2301edc0(Global_35);
	set_entity_only_damaged_by_player(iLocal_209, true);
	func_220(7);
	func_191();
	if (_does_volume_exist(&(iLocal_228[66])))
	{
		_0xd17672447692478e(&(iLocal_228[66]), 0);
	}
	func_1501(cParam0, "MUD4_OBJ_ESCAPE", -1082130432, 0, 0, -1, -1, 0);
	func_1538(cParam0, "MUD4_OBJ_ESCAPE", 0, -1, 0, -1082130432, 0, 0, -1, -1, 0);
	func_141(cParam0, 0);
	func_264(&uLocal_553);
	func_264(&uLocal_747);
	return cParam0->f_607 == cParam0->f_607;
}

int func_911(char[4] cParam0)
{
	vVar2 = { -302.9763f, 788.284f, 116.9102f };
	func_1622(cParam0);
	func_1623();
	set_ped_reset_flag(Global_35, 154, true);
	set_ped_reset_flag(iLocal_209, 154, true);
	iVar0 = 0;
	while (iVar0 <= (4 - 1))
	{
		set_ped_reset_flag(&(iLocal_203[iVar0]), 166, true);
		iVar0++;
	}
	iVar1 = func_935(Global_35, 1, 0, 0);
	if (_is_weapon_pistol(iVar1) || _is_weapon_revolver(iVar1))
	{
		if (get_ammo_in_ped_weapon(Global_35, iVar1) == 0)
		{
			func_361(_get_ammo_type_for_weapon(iVar1), _get_weapon_clip_size(iVar1), 1, 0, 0, 752097756, 0, 0, 0, 0);
		}
	}
	if (&uLocal_893[15] == 2 && func_1586(&iLocal_203, 3, 1) >= 4)
	{
		func_485(&iLocal_203, 1);
		iVar0 = 0;
		while (iVar0 <= (iLocal_203 - 1))
		{
			if (does_entity_exist(&(iLocal_203[iVar0])))
			{
				func_217(iLocal_203[iVar0], 1);
				iLocal_203[iVar0] = 0;
			}
			iVar0++;
		}
	}
	switch (func_1397(cParam0))
	{
		case 0:
			func_140(cParam0, 1);
			break;
		case 1:
			if (func_1014(&uLocal_747) >= 10f)
			{
				if (func_1090(get_player_index(), 1, 0, 1))
				{
					func_47(0);
					func_140(cParam0, 2);
				}
			}
			break;
		case 2:
			if (func_1413(Global_35, vVar2, 1) >= 300f)
			{
				if (!func_1396(8192))
				{
					func_47(1);
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_1501(cParam0, "MISSION_WANTED", -1082130432, 0, 0, -1, -1, 0);
					func_1538(cParam0, "MISSION_WANTED", 0, -1, 0, -1082130432, 0, 0, -1, -1, 0);
					func_1458(8192);
				}
			}
			else if (func_1396(8192))
			{
				func_47(0);
				func_1463(8192);
			}
			if (!func_1090(get_player_index(), 1, 0, 1))
			{
				return 1;
			}
			break;
	}
	return 0;
}

bool func_912(var uParam0)
{
	_0xdd1232b332cbb9e7(3, 1, 0);
	func_47(0);
	trigger_music_event("MUD4_STOP");
	set_entity_only_damaged_by_player(iLocal_209, false);
	func_218(&iLocal_48);
	iVar0 = 0;
	while (iVar0 <= (iLocal_203 - 1))
	{
		if (does_entity_exist(&(iLocal_203[iVar0])))
		{
			func_217(iLocal_203[iVar0], 0);
			iLocal_203[iVar0] = 0;
		}
		iVar0++;
	}
	return uParam0->f_607 == uParam0->f_607;
}

int func_913(var uParam0)
{
	return 1;
}

int func_914(var uParam0)
{
	return 1;
}

int func_915(var uParam0)
{
	return 1;
}

int func_916(char[4] cParam0)
{
	switch (func_1397(cParam0))
	{
		case 0:
			return 1;
	}
	return 0;
}

int func_917(var uParam0)
{
	return 1;
}

void func_918(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1624(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1625(iParam0))
	{
		if (func_1002(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_436(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_918(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_918(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_436(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_436(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_436(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_436(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_436(iParam5, 129))
	{
		if (func_436(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_436(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_436(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_436(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1625(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_436(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_436(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

void func_919(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

char* func_920()
{
	return "cutDeleteMe";
}

bool func_921(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_922(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_923(var uParam0)
{
	return uParam0->f_862;
}

void func_924(var uParam0)
{
	if (func_1626(&iVar0))
	{
		if (func_13(iVar0, 0))
		{
			if (func_697(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_725(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_13(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_925(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_125(0, 0);
		func_1627(-1);
	}
	func_1628(1);
	set_entity_invincible(Global_35, true);
	if (!func_922(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_922(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_922(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_922(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_922(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_922(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_922(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_922(*iParam0, 4) && !func_922(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_922(*iParam0, 2048))
	{
		func_937(0, 0);
	}
	if (func_922(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_922(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_922(*iParam0, 8192))
	{
		func_1629();
	}
	if (!func_922(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_922(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_922(*iParam0, 1024))
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
		if (!func_922(*iParam0, 16))
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
						if (func_1630() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_441(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1631(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1632(2);
						func_1633(-1);
						func_1634(vVar3);
						func_1636(func_1635());
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
	if (!func_922(*iParam0, 4096))
	{
		func_1637(Global_35);
	}
	if (!func_922(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_922(*iParam0, 2097152))
	{
		if (func_1638() || _0x50f124e6ef188b22(Global_35))
		{
			func_1639(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_926(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_927(var uParam0)
{
	if (func_921(uParam0, 2048) && !func_441(func_1640(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_921(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_918(iVar1, func_1640(uParam0), func_1641(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_921(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_918(iVar3, func_1640(uParam0), func_1641(uParam0), 2, 1073741824);
		}
	}
}

void func_928(var uParam0)
{
	if ((func_921(uParam0, 268435456) && !func_441(func_1640(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1640(uParam0) };
			func_918(iVar0, vVar1, func_1124(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_929(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_441(vParam1))
	{
		func_1642(uParam0, 2048, 1);
	}
	else
	{
		func_844(uParam0, 2048);
		if (bParam5)
		{
			func_844(uParam0, -2147483648);
		}
	}
}

void func_930(var uParam0)
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
					if (!func_1643(uParam0->f_13[iVar0], 8))
					{
						if (func_785(func_1242(iVar1, 0, 1, 0)))
						{
							if (!func_1644(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_785(func_1242(iVar1, 1, 1, 0)))
						{
							if (!func_1644(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_931(var uParam0, bool bParam1)
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

void func_932(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	bVar4 = func_26() != -1;
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
			func_1338(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1645(iParam1, 29, bVar4, 1, 0);
			func_1645(iParam1, 31, bVar4, 1, 0);
			func_1645(iParam1, 30, bVar4, 1, 0);
			func_1645(iParam1, 22, bVar4, 1, 0);
			func_1645(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1278(32768) && func_1646(1108822547, 8)) && func_1647(10, iParam3))
	{
		func_1648(iParam1, 0, 1);
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
			iVar3 = func_1346(iVar1, 1);
			if (func_1646(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1647(iVar1, iParam3))
				{
				}
				else if ((func_1646(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1646(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1645(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1649(iVar3, 1, 6);
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
								func_1645(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1646(iVar3, 1))
							{
								func_1650(iVar3, 1, 6);
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

bool func_933(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1651((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_934(int iParam0)
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

int func_935(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_936(int iParam0, int iParam1)
{
	return func_1652(&uVar0, iParam0, iParam1);
}

void func_937(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_785(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1593(1);
	}
}

void func_938(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_939(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_940(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_941(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_942(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_943(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_944(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_945(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_946(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_947(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_948(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_949(var uParam0, int iParam1)
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

int func_950(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_964((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_951(var uParam0, char* sParam1)
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

int func_952(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_966((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_953(var uParam0, char* sParam1)
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

int func_954(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_968((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_955(int iParam0, int iParam1)
{
	iVar0 = func_1653(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_956(var uParam0, char* sParam1, int iParam2)
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

int func_957(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_973((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_958(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_959(var uParam0, int iParam1)
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

int func_960(var uParam0, int iParam1)
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

int func_961(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!func_979((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_962(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_126(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_1654(&(cParam0->f_5147), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_1655(&(cParam0->f_5147));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_5147[iVar0] = iParam1;
	cParam0->f_5147[iVar0]->f_3 = (cParam0->f_5147[iVar0]->f_3 || iParam2);
}

void func_963(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_964(var uParam0)
{
	return *uParam0 != 0;
}

void func_965(var uParam0)
{
	if (!func_995(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_958(&(uParam0->f_1), 1);
	}
}

bool func_966(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_967(var uParam0)
{
	if (!func_995(uParam0->f_3, 1))
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
		func_958(&(uParam0->f_3), 1);
	}
}

bool func_968(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_969(var uParam0)
{
	if (!func_995(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_958(&(uParam0->f_1), 1);
	}
}

bool func_970(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_971(var uParam0)
{
	if (func_995(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_995(uParam0->f_1, 1))
	{
		func_1656(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_958(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_972(var uParam0)
{
	if (func_995(*uParam0, 2))
	{
		return true;
	}
	if (!func_995(*uParam0, 1))
	{
		func_1657(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_958(uParam0, 2);
		return true;
	}
	return false;
}

bool func_973(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_974(var uParam0)
{
	if (!func_995(uParam0->f_2, 1))
	{
		if (func_1658(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1659(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_347())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1198())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_958(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_975(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_976(var uParam0, int iParam1)
{
	if (!func_995(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_958(&(uParam0->f_1), 1);
	}
}

bool func_977(var uParam0)
{
	return *uParam0 != 0;
}

void func_978(var uParam0)
{
	if (!func_995(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_958(&(uParam0->f_2), 1);
	}
}

bool func_979(var uParam0)
{
	return *uParam0 != 0;
}

void func_980(var uParam0)
{
	if (!func_995(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_958(&(uParam0->f_3), 1);
	}
}

bool func_981(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_982(var uParam0)
{
	if (!func_995(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_958(&(uParam0->f_1), 1);
	}
}

bool func_983(var uParam0)
{
	return func_1660(*uParam0);
}

void func_984(var uParam0)
{
	if (!func_995(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_958(&(uParam0->f_1), 1);
	}
}

bool func_985(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_986(var uParam0)
{
	if (!func_995(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_958(&(uParam0->f_2), 1);
	}
}

bool func_987(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_988(var uParam0)
{
	if (!func_995(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_958(&(uParam0->f_1), 1);
	}
}

bool func_989(var uParam0, int iParam1, char* sParam2)
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

void func_990(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_840(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1661(uParam0, iParam1);
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
		iVar1 = func_1662(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1663(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1664(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1665(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1666(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_991(int iParam0)
{
	if (!func_233(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_992(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_1013(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_1667(uParam0, 0))
			{
				if (func_1668(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1669(uParam0, 1, &iVar0))
					{
					}
					if (func_1670(uParam0, 3, &cVar2))
					{
					}
					if (func_1669(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1669(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1669(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1669(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1669(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1671(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_595((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_595(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_595(uParam0->f_1282[uParam0->f_2506], 1048576);
							if (!bVar19 && func_261(&cVar2, 4))
							{
								prepare_music_event(uParam0->f_1282[uParam0->f_2506]);
								bVar19 = true;
							}
							uParam0->f_2506++;
						}
					}
					else if (iVar0 < 15 && uParam0->f_2507 < 15)
					{
						if (!func_1671(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_595(uParam0->f_2243[uParam0->f_2507], 1048576);
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
	if (!func_30(uParam0) && uParam0->f_2510 > 0)
	{
		iVar20 = uParam0->f_2511;
		while (iVar20 <= (uParam0->f_2510 - 1))
		{
			uParam0->f_2495.f_1 = 0;
			uParam0->f_2495.f_3 = iVar20;
			iVar22 = 0;
			if (func_1667(uParam0, 12))
			{
				if (func_1669(uParam0, 13, &iVar0))
				{
				}
				if (func_1669(uParam0, 14, &iVar1))
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
		func_44(uParam0);
	}
	return true;
}

void func_993(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_261((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_261((*uParam0)[iVar0], 1))
		{
			func_1672((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_994(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_964((*uParam0)[iVar1]))
		{
			if (func_955((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1673((*uParam0)[iVar1]))
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
		if (func_966((*uParam1)[iVar1]))
		{
			if (func_955((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1674((*uParam1)[iVar1]))
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
		if (func_968((*uParam2)[iVar1]))
		{
			if (func_955((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1675((*uParam2)[iVar1]))
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
		if (func_970((*uParam3)[iVar1]))
		{
			if (func_955((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_971((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_955(uParam4->f_1, iParam12))
	{
		if (!func_972(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_973((*uParam5)[iVar1]))
		{
			if (func_955((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1658((*uParam5)[iVar1]))
				{
					if (!func_996((*uParam5)[iVar1]))
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
		if (func_973((*uParam5)[iVar1]))
		{
			if (func_955((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1658((*uParam5)[iVar1]))
				{
					if (func_996((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_975((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1676((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_977((*uParam6)[iVar1]))
		{
			if (func_955((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1677((*uParam6)[iVar1]))
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
		if (func_979((*uParam7)[iVar1]))
		{
			if (func_955((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1678((*uParam7)[iVar1]))
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
		if (func_981((*uParam8)[iVar1]))
		{
			if (func_955((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1679((*uParam8)[iVar1]))
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
		if (func_983((*uParam9)[iVar1]))
		{
			if (func_955((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1680((*uParam9)[iVar1]))
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
		if (func_985((*uParam10)[iVar1]))
		{
			if (func_955((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1681((*uParam10)[iVar1]))
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
		if (func_987((*uParam11)[iVar1]))
		{
			if (func_955((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1682((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_995(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_996(var uParam0)
{
	if (func_995(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_995(uParam0->f_2, 1))
	{
		func_974(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_958(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_997(int iParam0)
{
	if (!func_233(iParam0))
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

bool func_998(char[4] cParam0, int iParam1, var uParam2, bool bParam3, int iParam4, int iParam5, int iParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_614(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_301(iParam1)) && func_1683(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1684(iParam1, 1, 0, iParam4, iParam5, iParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1685(cParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1686(iParam1);
		return true;
	}
	return false;
}

bool func_999(char[4] cParam0)
{
	if (!func_441(cParam0->f_5417))
	{
		return true;
	}
	switch (cParam0->f_607)
	{
		case 7:
			func_1687(cParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1687(cParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1687(cParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1687(cParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1687(cParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1687(cParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1687(cParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1687(cParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1687(cParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1687(cParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1687(cParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1687(cParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1687(cParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1687(cParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1687(cParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1687(cParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1687(cParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1687(cParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1687(cParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1687(cParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1687(cParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1687(cParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1687(cParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1687(cParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1687(cParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1687(cParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1687(cParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1687(cParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1687(cParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1687(cParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1687(cParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1687(cParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1687(cParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_441(cParam0->f_5417);
}

int func_1000(int iParam0, var uParam1)
{
	uParam1->f_10 = func_309(uParam1->f_10);
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
		if (func_441(uParam1->f_6))
		{
		}
	}
	bVar0 = func_440();
	if (*uParam1)
	{
		if (bVar0 && !func_370((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1688(5))
			{
				func_625(5);
				func_1689(5);
				func_1633(0);
				func_1632(0);
			}
		}
	}
	if (func_1690(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_370((*Global_1835011)[37]->f_1, 1)) && !func_370((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_370((*Global_1835011)[43]->f_1, 1)) && !func_370((*Global_1835011)[44]->f_1, 1))
	{
		if (uParam1->f_10 == 0)
		{
			*iParam0 = 1;
			return 0;
		}
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_259(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_628(iVar1))
	{
		bVar3 = true;
		if (func_1691(iVar1))
		{
			bVar4 = true;
		}
		if (func_635(iVar1))
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
				func_636(uParam1->f_10);
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
			if (!func_1688(0) && func_1688(1))
			{
				func_1692(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1693())
			{
				func_1694();
			}
			func_1633(0);
			func_1632(0);
			func_1634(uParam1->f_6);
		}
	}
	if (!func_628(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1695(uParam1->f_10) == 0 || func_1696(uParam1->f_10) == 0) || func_1697(uParam1->f_10) == 0)
			{
				func_1698(uParam1->f_10);
			}
			func_1699(uParam1->f_10);
			func_1700(uParam1->f_10, uParam1->f_6, uParam1->f_9);
			*iParam0 = 0;
			return 0;
		}
		*iParam0 = 1;
		return 0;
	}
	iVar1 = uParam1->f_10;
	iVar2 = func_259(iVar1);
	bVar3 = false;
	bVar4 = false;
	bVar5 = false;
	if (func_628(iVar1))
	{
		bVar3 = true;
		if (func_1691(iVar1))
		{
			bVar4 = true;
		}
		if (func_635(iVar1))
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
			if (!func_441(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1701(uParam1->f_10))
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
			Var8 = { func_1702(uParam1->f_10) };
			Var10 = { func_1703() };
			func_1704(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_621(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1705(uParam1->f_10);
		if (uParam1->f_2 && !func_441(uParam1->f_6))
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
	func_620(uParam1->f_10);
	if (func_621(uParam1->f_10))
	{
		iVar16 = func_305(uParam1->f_10);
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

bool func_1001(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_1002(int iParam0)
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

bool func_1003(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1706(iParam1))
	{
		return false;
	}
	iVar0 = func_1707(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
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

void func_1004(char[4] cParam0, bool bParam1)
{
	if (!is_entity_dead(cParam0->f_5411))
	{
		if (!_0x88ad6cc10d8d35b2(cParam0->f_5411))
		{
			set_entity_as_mission_entity(cParam0->f_5411, true, true);
		}
		if ((bParam1 && !_0x3ab6c7b0bb0df4b1(cParam0->f_5411, -1)) && !func_126(cParam0, 32768))
		{
			clear_ped_tasks(cParam0->f_5411, 1, 0);
		}
		if (!func_26() == 0)
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

float func_1005(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

bool func_1006(int iParam0, int iParam1, int iParam2)
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

bool func_1007(var uParam0, int iParam1)
{
	switch (func_1708(uParam0))
	{
		case 0:
			if (!func_1709(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1710(uParam0, 1);
			break;
		case 1:
			func_1711(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_925(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1710(uParam0, 2);
			break;
		case 2:
			if (func_1712(uParam0))
			{
				func_1484(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_33(&(uParam0->f_3), 1);
				func_1710(uParam0, 3);
			}
			break;
		case 3:
			if (func_1014(&(uParam0->f_3)) >= 1f)
			{
				func_1710(uParam0, 4);
			}
			break;
		case 4:
			if (!func_35())
			{
				render_script_cams(false, false, 3000, true, false, 0);
				if (does_cam_exist(uParam0->f_2))
				{
					destroy_cam(uParam0->f_2, false);
				}
			}
			iVar1 = 1;
			func_1713(&iVar1, 0);
			release_script_audio_bank();
			func_1710(uParam0, 0);
			return true;
	}
	return false;
}

void func_1008(char[4] cParam0)
{
	if (!func_126(cParam0, 524288))
	{
		MemCopy(&uVar0, {func_116(cParam0->f_607)}, 8);
		func_1714(&uVar0, 15000, 0, 0, 0, 1);
		func_109(cParam0, 524288);
	}
}

bool func_1009(char[4] cParam0)
{
	iVar0 = func_41(cParam0);
	if (func_168(cParam0, func_39(cParam0)) <= 3)
	{
		iVar0 = func_39(cParam0);
	}
	Var1 = { func_1715(cParam0, iVar0) };
	if (func_1717(&(cParam0->f_10792), Var1, func_1716(&(cParam0->f_10792)), 0))
	{
		func_146(cParam0, func_39(cParam0), 262144);
		if (func_1718(&(cParam0->f_10792), 524288))
		{
			func_422(cParam0, 67108864);
			func_1719(&(cParam0->f_10792), 524288);
		}
		func_1720(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

void func_1010(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 - (cParam0->f_5307 && iParam1));
}

bool func_1011(char[4] cParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_14(cParam0, 16777216))
	{
		func_1721(cParam0);
		func_1722(cParam0);
		return true;
	}
	if (func_1723(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (func_160(cParam0) == 0)
	{
		func_1061(cParam0);
	}
	if (func_35())
	{
		if (!func_14(cParam0, 262144))
		{
			stop_gameplay_hint(true);
			render_script_cams(false, false, 3000, true, false, 0);
			if (does_cam_exist(cParam0->f_609.f_2))
			{
				destroy_cam(cParam0->f_609.f_2, false);
			}
			func_57(&(cParam0->f_10792));
			func_1724(cParam0);
			func_1010(cParam0, 524288);
			func_1725(cParam0);
			func_155(cParam0, 30f);
			func_156(cParam0, 40f);
			func_105(cParam0, 262144);
		}
		if (!func_14(cParam0, 524288) && _0xef324e9550a394d5(cParam0->f_7375.f_804))
		{
			func_105(cParam0, 524288);
		}
	}
	return false;
}

bool func_1012(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_1726(func_67(cParam0), func_126(cParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1727(func_67(cParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1728(func_67(cParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_471(cParam0, func_39(cParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_126(cParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_991(cParam0->f_607)}, 3);
	if (!func_29(&(cParam0->f_8269)))
	{
		if (!func_1013(&(cParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_1013(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1729(uParam0);
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

float func_1014(float fParam0)
{
	if (!func_32(fParam0))
	{
		return fParam0->f_1;
	}
	if (func_597(fParam0))
	{
		return fParam0->f_2;
	}
	return (func_648() - fParam0->f_1);
}

bool func_1015()
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

void func_1016(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

struct<4> func_1017(char[4] cParam0)
{
	switch (func_39(cParam0))
	{
		case 0:
			Var0 = { func_267(0, 6) };
			break;
		case 1:
		case 2:
			Var0 = { func_267(2, 7) };
			break;
		case 3:
		case 4:
			Var0 = { func_267(3, 2) };
			break;
		case 5:
			Var0 = { func_267(5, 2) };
			break;
		case 6:
			Var0 = { func_267(6, 2) };
			break;
		case 7:
			Var0 = { func_267(7, 4) };
			break;
		case 8:
		case 9:
		case 10:
		case 11:
			Var0 = { func_267(11, 4) };
			break;
		case 12:
		case 25:
			Var0 = { func_267(12, 4) };
			break;
		default:
			break;
	}
	return Var0;
}

void func_1018(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (80 - 1))
	{
		if (!_does_volume_exist(&(iLocal_228[iVar0])))
		{
			if (iVar0 == 0)
			{
				iLocal_228[iVar0] = _create_volume_aggregate_with_custom_name("MISSION_VOLUME_STAGE01_CLEAR_VEH");
				_0x39816f6f94f385ad(&(iLocal_228[iVar0]), -210.7867f, 666.8932f, 118.0576f, 0f, 0f, 0f, 34.36123f, 64.5227f, 12.0935f);
				_0x39816f6f94f385ad(&(iLocal_228[iVar0]), -231.2683f, 732.509f, 118.7344f, 0f, 0f, 21.42765f, 44.22923f, 90.11648f, 18.79124f);
			}
			else if (iVar0 == 1)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-296.9633f, 749.1172f, 118.4274f, 0f, 0f, 38.90934f, 350.8362f, 460.3011f, 131.4022f, "MISSION_VOLUME_BLOCKING_COP");
			}
			else if (iVar0 == 2)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-250.9157f, 690.692f, 113.8045f, 0f, 0f, -34.4982f, 7.65097f, 7.228882f, 3.268565f, "MISSION_VOLUME_BLOCKING_INTRO_PED");
			}
			else if (iVar0 == 3)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-254.1039f, 753.3702f, 118.4274f, 0f, 0f, 23.16768f, 5.959373f, 11.71458f, 15f, "MISSION_VOLUME_BLOCKING_WALK_PED");
			}
			else if (iVar0 == 4)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-270.7754f, 785.9456f, 118.4274f, 0f, 0f, 89.83852f, 3.625313f, 10.70766f, 15f, "MISSION_VOLUME_BLOCKING_IG2_PED");
			}
			else if (iVar0 == 5)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-281.8187f, 784.9115f, 118.4274f, 0f, 0f, 89.83852f, 0.84507f, 1.009116f, 15f, "MISSION_VOLUME_BLOCKING_IG2_WAIT_PED");
			}
			else if (iVar0 == 6)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-279.0476f, 783.9475f, 118.4274f, 0f, 0f, 0f, 11.55101f, 7.775479f, 5.455034f, "MISSION_VOLUME_BLOCKING_GUNSTORE_PED");
			}
			else if (iVar0 == 7)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-281.5258f, 780.5981f, 118.4274f, 0f, 0f, 0f, 1.633682f, 0.861157f, 6.015902f, "MISSION_VOLUME_BLOCKING_GUNSTORE_COUNTER_PED");
			}
			else if (iVar0 == 8)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-278.7473f, 796.5642f, 118.4274f, 0f, 0f, 9.398017f, 3.108265f, 3.165023f, 8f, "MISSION_VOLUME_BLOCKING_GUNSTORE_HORSE_HITCH");
			}
			else if (iVar0 == 11)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-282.7527f, 789.1086f, 118.4274f, 0f, 0f, -1.071368f, 3.250484f, 3.165023f, 8f, "MISSION_VOLUME_BLOCKING_SHERIFF_HORSE_HITCH");
			}
			else if (iVar0 == 9)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-282.7488f, 789.1085f, 118.4274f, 0f, 0f, -1.071368f, 3.250197f, 3.165023f, 8f, "MISSION_VOLUME_BLOCKING_AUCTION_HORSE_HITCH");
			}
			else if (iVar0 == 10)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-249.5587f, 766.9814f, 118.4274f, 0f, 0f, -69.29158f, 5.097044f, 3.165023f, 8f, "MISSION_VOLUME_BLOCKING_SALOON_HORSE_HITCH");
			}
			else if (iVar0 == 12)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(640.1815f, 213.8249f, 118.4274f, 0f, 0f, -170.8042f, 535.5638f, 389.6257f, 125.0846f, "MISSION_VOLUME_BLOCKING_SNIPER_PED");
			}
			else if (iVar0 == 13)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-226.3318f, 643.3492f, 112.393f, 0f, 0f, -39.4234f, 20f, 26.02928f, 10f, "MISSION_VOLUME_BLOCKING_HERDING_PEN_PED");
			}
			else if (iVar0 == 14)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-224.6596f, 641.9817f, 112.393f, 0f, 0f, -37.81289f, 6.338507f, 10.86057f, 10f, "MISSION_VOLUME_BLOCKING_MCS2_PED");
			}
			else if (iVar0 == 15)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-222.9236f, 646.643f, 113.9f, 0f, 0f, -36.65338f, 3.062238f, 3.526046f, 15f, "MISSION_VOLUME_BLOCKING_MCS2_LEADOUT_PED");
			}
			else if (iVar0 == 16)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-246.619f, 768.0204f, 117.4069f, 0f, 0f, -69.29158f, 9.293719f, 3.165023f, 4.8862f, "MISSION_VOLUME_BLOCKING_MCS3_LEADIN_PED");
			}
			else if (iVar0 == 17)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-241.4654f, 770.0303f, 117.4069f, 0f, 0f, -69.29158f, 9.293719f, 8.015403f, 4.8862f, "MISSION_VOLUME_BLOCKING_MCS3_PED");
			}
			else if (iVar0 == 18)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-254.2741f, 765.1989f, 118.4274f, 0f, 0f, -69.29157f, 32.65827f, 19.09585f, 19.47231f, "MISSION_VOLUME_BLOCKING_STANDOFF_PED");
			}
			else if (iVar0 == 19)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-270.4952f, 790.5563f, 118.4274f, 0f, 0f, 110.2873f, 38.96775f, 45.73367f, 26.33056f, "MISSION_VOLUME_BLOCKING_WAGON_PED");
			}
			else if (iVar0 == 20)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-316.2111f, 788.6046f, 121.8253f, 0f, 0f, -78.62771f, 17.70991f, 54.57163f, 22.83504f, "MISSION_VOLUME_BLOCKING_STREET_PED");
			}
			else if (iVar0 == 21)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-346.9631f, 773.0334f, 121.8253f, 0f, 0f, -78.62771f, 47.99012f, 32.1109f, 22.83504f, "MISSION_VOLUME_BLOCKING_LIVERY_PED");
			}
			else if (iVar0 == 22)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-232.5357f, 636.6716f, 112.9865f, 0f, 0f, -39.87512f, 2.046799f, 11.17668f, 4.65923f, "MISSION_VOLUME_BLOCKING_NAVMESH_LEFT_GATE");
			}
			else if (iVar0 == 23)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-222.01f, 650.1567f, 112.9865f, 0f, 0f, -39.87512f, 2.913814f, 10.31444f, 4.65923f, "MISSION_VOLUME_BLOCKING_NAVMESH_RIGHT_GATE");
			}
			else if (iVar0 == 24)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-296.1878f, 800.0868f, 121.9655f, 0f, 0f, 9.156055f, 2.592309f, 2.140959f, 1.323273f, "MISSION_VOLUME_BLOCKING_SAW_SCENARIO");
			}
			else if (iVar0 == 43)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-234.3182f, 668.4288f, 112.2899f, 0f, 0f, -38.5865f, 10.11825f, 6.773367f, 15f, "MISSION_VOLUME_VALENTINE_HERD_PEN");
			}
			else if (iVar0 == 44)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-172.9158f, 610.4167f, 120.2754f, 0f, 0f, -34.84498f, 5.713302f, 691.2912f, 195.2131f, "MISSION_VOLUME_VALENTINE_RAILROAD_TRACKS");
			}
			else if (iVar0 == 40)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-258.3569f, 767.9047f, 40.11696f, 0f, 0f, -71.54532f, 5.713302f, 691.2912f, 195.2131f, "MISSION_VOLUME_GUNSTORE_WALK_SPEED");
			}
			else if (iVar0 == 41)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-279.5048f, 786.5414f, 118.4274f, 0f, 0f, 0f, 11.65662f, 4.498429f, 15f, "MISSION_VOLUME_GUNSTORE_EXTERIOR_FRONT");
			}
			else if (iVar0 == 42)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-279.9738f, 780.681f, 119.9427f, 0f, 0f, 0f, 8.728708f, 7.475351f, 2.97295f, "MISSION_VOLUME_GUNSTORE_INTERIOR");
			}
			else if (iVar0 == 45)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(672.1969f, 330.8092f, 114.0317f, 0f, 0f, -10.76846f, 16.33169f, 19.09582f, 64.77651f, "MISSION_VOLUME_OVERLOOK_HERD");
			}
			else if (iVar0 == 46)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(519.9224f, 323.0267f, 114.0317f, 0f, 0f, -39.84069f, 16.33169f, 19.09582f, 64.77651f, "MISSION_VOLUME_OVERLOOK_HERD_MOVE");
			}
			else if (iVar0 == 47)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-241.4654f, 770.0303f, 117.4069f, 0f, 0f, -69.29158f, 9.293719f, 8.015403f, 4.8862f, "MISSION_VOLUME_SALOON_INTERIOR");
			}
			else if (iVar0 == 48)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-244.6711f, 765.2321f, 118.5259f, 0f, 0f, 20.35536f, 1.444764f, 1.220252f, 2.903158f, "MISSION_VOLUME_SALOON_INTO_SALOON");
			}
			else if (iVar0 == 49)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-244.991f, 766.3708f, 118.5259f, 0f, 0f, 20.35536f, 1.444764f, 1.220252f, 2.903158f, "MISSION_VOLUME_SALOON_JOHN_IN_POSITION");
			}
			else if (iVar0 == 50)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-244.881f, 766.3559f, 118.5259f, 0f, 0f, 20.35536f, 1.146673f, 1.371103f, 2.903158f, "MISSION_VOLUME_SALOON_SCENARIO_A");
			}
			else if (iVar0 == 51)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-244.1871f, 764.486f, 118.5259f, 0f, 0f, 20.35536f, 1.146673f, 1.371103f, 2.903158f, "MISSION_VOLUME_SALOON_SCENARIO_B");
			}
			else if (iVar0 == 79)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-251.2442f, 762.9515f, 118.4274f, 0f, 0f, -69.29157f, 8.593152f, 5.383219f, 8f, "MISSION_VOLUME_SALOON_PATHS_OFF");
			}
			else if (iVar0 == 52)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-250.2668f, 767.6716f, 117.446f, 0f, 0f, 19.54669f, 3.735543f, 1.877839f, 2.368508f, "MISSION_VOLUME_SALOON_HITCH_LEFT");
			}
			else if (iVar0 == 53)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-249.6379f, 765.9002f, 117.446f, 0f, 0f, 19.54669f, 3.735543f, 1.877839f, 2.368508f, "MISSION_VOLUME_SALOON_HITCH_RIGHT");
			}
			else if (iVar0 == 57)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-220.2274f, 638.2139f, 113.1817f, 0f, 0f, 51.95745f, 13.5997f, 21.89f, 6.732909f, "MISSION_VOLUME_HOLDING_PEN_DISMOUNT");
			}
			else if (iVar0 == 54)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-220.9301f, 640.7463f, 112.417f, 0f, 0f, -35.20399f, 62.64507f, 72.332f, 16.37655f, "MISSION_VOLUME_HERDING_AUTOWALK");
			}
			else if (iVar0 == 56)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-236.0667f, 651.3077f, 110f, 0f, 0f, -39.3599f, 16.56144f, 6.027266f, 16.907f, "MISSION_VOLUME_HERDING_INSIDE_PEN");
			}
			else if (iVar0 == 58)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-237.9224f, 652.139f, 113.5739f, 0f, 0f, -40.39725f, 33.86073f, 44.29234f, 12.25819f, "MISSION_VOLUME_HOLDING_PEN_CLEAR_PEDS");
			}
			else if (iVar0 == 36)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-294.4895f, 714.4174f, 118.4274f, 0f, 0f, 12.47876f, 96.57043f, 178.7855f, 72.24551f, "MISSION_VOLUME_VEHICLE_GUNSTORE_CLEAR");
			}
			else if (iVar0 == 28)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-209.0734f, 632.6153f, 118.6037f, 0f, 0f, 144.6072f, 26.53898f, 25.76858f, 36.72612f, "MISSION_VOLUME_VEHICLE_VALENTINE_01");
			}
			else if (iVar0 == 29)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-295.9505f, 628.9684f, 118.6037f, 0f, 0f, 102.549f, 34.49638f, 30.99752f, 36.72612f, "MISSION_VOLUME_VEHICLE_VALENTINE_02");
			}
			else if (iVar0 == 30)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-259.9443f, 806.712f, 118.4274f, 0f, 0f, 102.549f, 82.97307f, 34.32418f, 15f, "MISSION_VOLUME_VEHICLE_VALENTINE_03");
			}
			else if (iVar0 == 31)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-261.3432f, 793.5819f, 118.4274f, 0f, 0f, 102.549f, 33.96455f, 30.03893f, 15f, "MISSION_VOLUME_VEHICLE_VALENTINE_04");
			}
			else if (iVar0 == 32)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-264.4329f, 823.6503f, 118.4274f, 0f, 0f, -11.96982f, 28.57181f, 26.04999f, 15f, "MISSION_VOLUME_VEHICLE_VALENTINE_05");
			}
			else if (iVar0 == 33)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-216.7226f, 904.0488f, 130.2255f, 0f, 0f, -41.22355f, 24.22373f, 27.28446f, 22.909f, "MISSION_VOLUME_VEHICLE_VALENTINE_06");
			}
			else if (iVar0 == 34)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-36.60786f, 1103.344f, 182.8889f, 0f, 0f, -20.21633f, 38.49653f, 35.35714f, 39.33114f, "MISSION_VOLUME_VEHICLE_VALENTINE_07");
			}
			else if (iVar0 == 35)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(214.1476f, 1159.955f, 182.8889f, 0f, 0f, -0.362951f, 38.49653f, 35.35714f, 39.33114f, "MISSION_VOLUME_VEHICLE_VALENTINE_08");
			}
			else if (iVar0 == 25)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-265.33f, 628.3898f, 118.4274f, 0f, 0f, 51.27599f, 196.7339f, 194.2275f, 72.24551f, "MISSION_VOLUME_VEHICLE_VALENTINE_CLEAR_01");
			}
			else if (iVar0 == 26)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-312.5699f, 791.7336f, 118.4274f, 0f, 0f, 17.03872f, 196.7339f, 194.2275f, 72.24551f, "MISSION_VOLUME_VEHICLE_VALENTINE_CLEAR_02");
			}
			else if (iVar0 == 27)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-184.3898f, 958.3766f, 118.4274f, 0f, 0f, 51.27599f, 226.5299f, 194.2275f, 193.6072f, "MISSION_VOLUME_VEHICLE_VALENTINE_CLEAR_03");
			}
			else if (iVar0 == 37)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(652.6719f, 114.669f, 118.4274f, 0f, 0f, -170.8042f, 490.9603f, 400.7113f, 125.0846f, "MISSION_VOLUME_VEHICLE_OVERLOOK_CLEAR");
			}
			else if (iVar0 == 39)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(711.2855f, 349.9854f, 118.4274f, 0f, 0f, -86.98298f, 96.57043f, 299.1536f, 125.0846f, "MISSION_VOLUME_VEHICLE_OVERLOOK_CLEAR_RT");
			}
			else if (iVar0 == 38)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(476.846f, 312.7671f, 118.4274f, 0f, 0f, -72.89137f, 96.57043f, 212.4556f, 125.0846f, "MISSION_VOLUME_VEHICLE_OVERLOOK_CLEAR_LT");
			}
			else if (iVar0 == 59)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(160.2953f, 413.211f, 118.6228f, 0f, 0f, -23.74359f, 641.5748f, 262.6028f, 100.9329f, "MISSION_VOLUME_HERDING_CLEAR_PEDS");
			}
			else if (iVar0 == 60)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-270.6129f, 799.3782f, 118.9964f, 0f, 0f, 19.21484f, 3.727642f, 2.739946f, 2.829888f, "MISSION_VOLUME_HITCH_BLOCK");
			}
			else if (iVar0 == 61)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-270.6129f, 799.3782f, 118.9964f, 0f, 0f, 19.21484f, 3.727642f, 2.739946f, 2.829888f, "MISSION_VOLUME_HITCH_BLOCK_2");
			}
			else if (iVar0 == 62)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-244.1036f, 732.5281f, 116.1561f, 0f, 0f, -31.7067f, 8.028148f, 9.108207f, 5.5885f, "MISSION_VOLUME_ENEMY_WAGON2_DISMOUNT_AREA");
			}
			else if (iVar0 == 63)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-286.2533f, 793.0021f, 119.0146f, 0f, 0f, 4.360712f, 5.778342f, 4.162267f, 3.766742f, "MISSION_VOLUME_WAGON_COVER_AREA");
			}
			else if (iVar0 == 66)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-335.4751f, 742.2413f, 120.4688f, 0f, 0f, 11.57261f, 26.20002f, 58.33745f, 14.45281f, "MISSION_VOLUME_GO_CAMP_CLEAR");
			}
			else if (iVar0 == 67)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(444.8956f, 303.1568f, 104.1031f, 0f, 0f, -49.41912f, 13.99483f, 9.937205f, 12.19876f, "MISSION_VOLUME_GESTURE_TRIGGER");
			}
			else if (iVar0 == 68)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-272.584f, 790.2829f, 119.2389f, 0f, 0f, 38.99617f, 1.385998f, 0.968045f, 1.61772f, "MISSION_VOLUME_WAGON_PROPS");
			}
			else if (iVar0 == 64)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-280.4087f, 792.9339f, 118.3845f, -0.154683f, -0.315122f, -177.984f, 6.978337f, 5.175776f, 2.659753f, "MISSION_VOLUME_WAGON_COVER_BLOCK");
			}
			else if (iVar0 == 70)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-267.3319f, 783.4686f, 118.9022f, 0f, 0f, 28.00402f, 9.645999f, 8.309114f, 4.403532f, "MISSION_VOLUME_STRAUSS_SHOT_3A_DEF");
			}
			else if (iVar0 == 71)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-289.5647f, 800.9503f, 119.5693f, 0f, 0f, 9.660769f, 15.91816f, 1.865973f, 2.795307f, "MISSION_VOLUME_DEFENSIVE_MUD4GOON_CART_03");
			}
			else if (iVar0 == 72)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-327.0609f, 778.0114f, 117.9867f, 0f, 0f, 9.660769f, 6.416393f, 2.038705f, 3.410829f, "MISSION_VOLUME_DEFENSIVE_MUD4GOON_CART_04");
			}
			else if (iVar0 == 73)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-321.9339f, 790.8661f, 116.7722f, 0f, 0f, 9.660768f, 8.715949f, 2.410389f, 3.410829f, "MISSION_VOLUME_DEFENSIVE_MUD4GOON_CART_05");
			}
			else if (iVar0 == 74)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-291.817f, 784.7f, 119.5693f, 0f, 0f, 9.660769f, 7.200331f, 2.164726f, 2.795307f, "MISSION_VOLUME_DEFENSIVE_MUD4GOON_CART_06");
			}
			else if (iVar0 == 75)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-334.4827f, 791.427f, 116.7722f, 0f, 0f, 9.660769f, 8.715949f, 2.410389f, 3.410829f, "MISSION_VOLUME_DEFENSIVE_MUD4GOON_CART_08");
			}
			else if (iVar0 == 76)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-303.853f, 797.0492f, 118.7882f, 0f, 0f, 9.660769f, 5.150515f, 1.22657f, 2.99069f, "MISSION_VOLUME_DEFENSIVE_MUD4GOON_CART_09");
			}
			else if (iVar0 == 77)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-315.821f, 795.2739f, 118.3203f, 0f, 0f, 9.660769f, 8.715949f, 1.805135f, 3.410829f, "MISSION_VOLUME_DEFENSIVE_MUD4GOON_CART_10");
			}
			else if (iVar0 == 78)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-313.8766f, 780.5921f, 118.7265f, 0f, 0f, 9.660769f, 8.87013f, 2.164726f, 3.677428f, "MISSION_VOLUME_DEFENSIVE_MUD4GOON_CART_13");
			}
			else if (iVar0 == 65)
			{
				iLocal_228[iVar0] = _create_volume_box_with_custom_name(-270.8863f, 786.9815f, 118.2554f, 0.634089f, -0.41439f, 129.4295f, 8.600353f, 4.80091f, 3.217132f, "MISSION_VOLUME_WAGON_ACCURACY");
			}
			else if (iVar0 == 55)
			{
				iLocal_228[iVar0] = _create_volume_aggregate_with_custom_name("MISSION_VOLUME_HERDING_BLOCK_NAVMESH");
				_0x39816f6f94f385ad(&(iLocal_228[iVar0]), -237.4757f, 630.5684f, 114.8205f, 0f, 0f, 50.78827f, 26.21122f, 2.392941f, 5.223622f);
				_0x39816f6f94f385ad(&(iLocal_228[iVar0]), -256.4927f, 628.8615f, 114.6553f, 0f, 0f, -40.50903f, 30.41124f, 2.399363f, 4.254355f);
				_0x39816f6f94f385ad(&(iLocal_228[iVar0]), -247.3007f, 662.1538f, 114.3505f, 0f, 0f, -39.35793f, 2.968081f, 66.60564f, 4.088548f);
				_0x39816f6f94f385ad(&(iLocal_228[iVar0]), -216.4205f, 677.6339f, 115.6743f, 0f, 0f, -40.11791f, 30.7941f, 2.442367f, 5.922332f);
				_0x39816f6f94f385ad(&(iLocal_228[iVar0]), -214.6167f, 656.6345f, 114.5744f, 0f, 0f, -41.16383f, 2.603885f, 28.61997f, 6.314358f);
			}
			else if (iVar0 == 69)
			{
				iLocal_228[iVar0] = _create_volume_aggregate_with_custom_name("MISSION_VOLUME_RIDE_AVOIDANCE");
				_0x39816f6f94f385ad(&(iLocal_228[iVar0]), -256.2175f, 776.3878f, 119.0883f, 0f, 0f, 14.77335f, 5.426931f, 46.44123f, 8.041903f);
				_0x39816f6f94f385ad(&(iLocal_228[iVar0]), -264.363f, 792.6936f, 119.0883f, 0f, 0f, -24.14669f, 9.827023f, 7.978185f, 8.041903f);
				_0x39816f6f94f385ad(&(iLocal_228[iVar0]), -220.2735f, 701.9537f, 116.5652f, 0f, 0f, 37.64548f, 5.236392f, 50.00251f, 13.05793f);
				_0x39816f6f94f385ad(&(iLocal_228[iVar0]), -207.1078f, 635.9406f, 116.5652f, 0f, 0f, -34.06586f, 5.236392f, 43.51876f, 13.05793f);
				_0x39816f6f94f385ad(&(iLocal_228[iVar0]), -200.6525f, 667.4194f, 116.5652f, 0f, 0f, -160.6857f, 5.236392f, 36.06713f, 13.05793f);
				_0x39816f6f94f385ad(&(iLocal_228[iVar0]), -241.1094f, 734.1829f, 116.5652f, 0f, 0f, 24.40579f, 5.236392f, 46.04348f, 13.05793f);
				_0x39816f6f94f385ad(&(iLocal_228[iVar0]), -191.6013f, 617.917f, 116.5652f, 0f, 0f, -123.8574f, 4.666843f, 43.51876f, 13.05793f);
			}
		}
		iVar0++;
	}
}

void func_1019(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= 17)
	{
		if (!_does_volume_exist(&(iLocal_309[iVar0])))
		{
			if (iVar0 == 0 || iVar0 == 1)
			{
				iLocal_309[iVar0] = _create_volume_cylinder(func_1156(16, iVar0), 0f, 0f, 0f, 1f, 1f, 2f);
			}
			else if (iVar0 == 7)
			{
				iLocal_309[iVar0] = _create_volume_box(-266.4496f, 773.8019f, 118.1521f, 0f, 0f, 25.25966f, 4.063067f, 1.689648f, 2.31024f);
			}
			else if (iVar0 == 10)
			{
				iLocal_309[iVar0] = _create_volume_cylinder(func_1412(10, 5), 0f, 0f, 0f, 1.2f, 1.2f, 2f);
			}
			else if (iVar0 == 11)
			{
				iLocal_309[iVar0] = _create_volume_cylinder(func_1412(10, 6), 0f, 0f, 0f, 1.2f, 1.2f, 2f);
			}
			else
			{
				iLocal_309[iVar0] = _create_volume_cylinder(func_1156(16, iVar0), 0f, 0f, 0f, 1.2f, 1.2f, 2f);
			}
		}
		iVar0++;
	}
}

void func_1020(char[4] cParam0)
{
	if (func_39(cParam0) >= 7)
	{
		func_1532(cParam0);
	}
	if (func_39(cParam0) >= 8)
	{
		func_1555(cParam0);
	}
}

bool func_1021(char[4] cParam0)
{
	if (func_39(cParam0) >= 0 && func_39(cParam0) <= 2)
	{
		iVar0 = 0;
		while (iVar0 <= 1)
		{
			if (func_1730(iVar0))
			{
			}
			else
			{
				bVar1 = true;
			}
			iVar0++;
		}
	}
	else if (func_39(cParam0) >= 6 && func_39(cParam0) <= 7)
	{
		iVar0 = 2;
		while (iVar0 <= 3)
		{
			if (func_1730(iVar0))
			{
			}
			else
			{
				bVar1 = true;
			}
			iVar0++;
		}
	}
	else if (func_39(cParam0) == 8)
	{
		iVar0 = 4;
		while (iVar0 <= 5)
		{
			if (func_1730(iVar0))
			{
			}
			else
			{
				bVar1 = true;
			}
			iVar0++;
		}
	}
	return !bVar1;
}

int func_1022(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
{
	Var1.f_10 = 7;
	Var1 = iParam4;
	Var1.f_1 = iParam5;
	Var1.f_2 = iParam6;
	Var1.f_3 = iParam7;
	Var1.f_4 = iParam8;
	Var1.f_6 = { vParam0 };
	Var1.f_9 = iParam3;
	return func_1000(&uVar0, &Var1);
}

void func_1023(char[4] cParam0, int iParam1)
{
	if (!is_entity_dead(iParam1))
	{
		StringCopy(&cVar0, "PLAYER_HORSE", 32);
		set_ped_name_debug(iParam1, &cVar0);
		_0xfd6943b6df77e449(iParam1, false);
		_0xf74e134f40192884(iParam1, 2);
		set_ped_flee_attributes(iParam1, 512, true);
		set_ped_flee_attributes(iParam1, 16384, true);
		if (func_39(cParam0) == 1 || func_39(cParam0) == 2)
		{
			if (_does_scenario_point_exist(&(iLocal_330[1])))
			{
				if (!func_434(iParam1, -76381094))
				{
					set_blocking_of_non_temporary_events(iParam1, true);
					_task_use_scenario_point(iParam1, &(iLocal_330[1]), 0, 0, true, false, 0, false, -1f, false);
				}
			}
			else if (!func_434(iParam1, -982327190))
			{
				set_blocking_of_non_temporary_events(iParam1, true);
				task_stand_still(iParam1, -1);
			}
		}
		else if (func_39(cParam0) == 7)
		{
			if (_does_scenario_point_exist(&(iLocal_330[2])))
			{
				if (!func_434(iParam1, -76381094))
				{
					set_blocking_of_non_temporary_events(iParam1, false);
					_task_use_scenario_point(iParam1, &(iLocal_330[2]), 0, 0, true, false, 0, false, -1f, false);
				}
			}
			else if (!func_434(iParam1, -982327190))
			{
				set_blocking_of_non_temporary_events(iParam1, true);
				task_stand_still(iParam1, -1);
			}
		}
		else if (func_39(cParam0) == 8)
		{
			if (!func_434(iParam1, -982327190))
			{
				set_blocking_of_non_temporary_events(iParam1, true);
				set_entity_only_damaged_by_player(iParam1, true);
				task_stand_still(iParam1, -1);
			}
		}
		else if (func_39(cParam0) >= 9 && func_39(cParam0) <= 11)
		{
			if (!func_434(iParam1, -982327190))
			{
				set_blocking_of_non_temporary_events(iParam1, true);
				set_entity_only_damaged_by_player(iParam1, true);
				task_stand_still(iParam1, -1);
			}
		}
		else if (!func_434(iParam1, -982327190))
		{
			set_blocking_of_non_temporary_events(iParam1, true);
			task_stand_still(iParam1, -1);
		}
	}
}

bool func_1024(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		if (!&iLocal_355[0])
		{
			iLocal_355[0] = 1;
			func_1731(cParam0);
		}
	}
	else
	{
		bVar0 = true;
	}
	if (func_1544(cParam0))
	{
	}
	else
	{
		bVar0 = true;
	}
	if (func_39(cParam0) <= 7 || (func_39(cParam0) >= 8 && func_39(cParam0) <= 12))
	{
		if (func_1575(cParam0, 1))
		{
		}
		else
		{
			bVar0 = true;
		}
	}
	if (func_39(cParam0) == 1 || func_39(cParam0) == 8)
	{
		if (func_1437(cParam0, 1))
		{
		}
		else
		{
			bVar0 = true;
		}
	}
	if (func_39(cParam0) >= 3 && func_39(cParam0) <= 6)
	{
		if (func_1732(cParam0, 1))
		{
		}
		else
		{
			bVar0 = true;
		}
	}
	if (func_39(cParam0) == 3)
	{
		func_1733(cParam0, 1);
		func_1734(cParam0, 1);
	}
	else if (func_39(cParam0) == 4)
	{
	}
	else if (func_39(cParam0) == 5)
	{
	}
	else if (func_39(cParam0) == 6)
	{
		func_1506(cParam0, 1);
	}
	else if (func_39(cParam0) == 7)
	{
		func_1506(cParam0, 1);
	}
	else if (func_39(cParam0) == 8)
	{
		func_1735(cParam0, 1);
		func_1736(cParam0, 1);
		func_1737(cParam0, 0);
	}
	else if (func_39(cParam0) == 9)
	{
		func_1738(cParam0, 1);
	}
	else if (func_39(cParam0) == 10)
	{
	}
	else if (func_39(cParam0) == 11)
	{
		func_1739(cParam0, 1);
	}
	else if (func_39(cParam0) == 12)
	{
		func_1616(cParam0, 1);
	}
	if (func_39(cParam0) >= 8)
	{
		if (func_1740(cParam0))
		{
		}
		else
		{
			bVar0 = true;
		}
	}
	return !bVar0;
}

bool func_1025()
{
	iVar0 = 0;
	while (iVar0 < iLocal_210)
	{
		if (!does_entity_exist(&(iLocal_210[iVar0])))
		{
			if (iVar0 == 0)
			{
				Var1 = { func_267(18, 0) };
			}
			else if (iVar0 == 1)
			{
				Var1 = { func_267(18, 1) };
			}
			else if (iVar0 == 2)
			{
				Var1 = { func_267(18, 2) };
			}
			else if (iVar0 == 3)
			{
				Var1 = { func_267(18, 3) };
			}
			else if (iVar0 == 4)
			{
				Var1 = { func_267(18, 4) };
			}
			else if (iVar0 == 5)
			{
				Var1 = { func_267(18, 5) };
			}
			else if (iVar0 == 6)
			{
				Var1 = { func_267(18, 6) };
			}
			else if (iVar0 == 7)
			{
				Var1 = { func_267(18, 7) };
			}
			iLocal_210[iVar0] = func_1741(40345436, Var1, Var1.f_3, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0);
			task_wander_in_area(&(iLocal_210[iVar0]), -236.6264f, 665.7418f, 113.4415f, 5f, 1077936128, 20f, 1);
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1026()
{
	iVar0 = func_259(1);
	iVar1 = 0;
	vVar2 = { -257.4742f, 716.4608f, 114.3661f };
	fVar5 = 298.3928f;
	if ((does_entity_exist(iVar0) && !is_entity_dead(iVar0)) && is_entity_in_volume(iVar0, func_1742(76), true, 0))
	{
		if (func_1002(iVar0))
		{
			_0x0348469daa17576c(iVar0);
		}
		clear_ped_tasks_immediately(iVar0, false, true);
		func_918(iVar0, vVar2, fVar5, 2, 1073741824);
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

void func_1027(int iParam0)
{
	iParam0 = func_309(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1743(iParam0, 64);
	func_311();
}

void func_1028(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!func_1744(iParam0))
		{
			func_494(iParam0, 67108864);
		}
	}
	else if (func_1744(iParam0))
	{
		func_495(iParam0, 67108864);
	}
}

void func_1029(int iParam0)
{
	func_494(iParam0, 134217728);
}

int func_1030(int iParam0, bool bParam1)
{
	iVar0 = func_501(iParam0);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1745(iParam0, 1);
	func_1746(iVar0);
	if (bParam1)
	{
		func_1747(Global_1899778, iVar0);
	}
	func_1748(iVar0);
	return 1;
}

void func_1031(int iParam0)
{
	if (func_26() != -1)
	{
		return;
	}
	func_1749(iParam0, 1);
}

void func_1032(int iParam0, int iParam1, bool bParam2, float fParam3)
{
	func_1750(iParam0, iParam1, bParam2, fParam3);
}

void func_1033(char[4] cParam0)
{
	func_1505(cParam0);
	func_1751(cParam0);
	func_1552(cParam0);
}

void func_1034(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (15 - 1))
	{
		if (iVar0 == 0)
		{
			iLocal_912[iVar0] = 475159788;
		}
		else if (iVar0 == 1)
		{
			iLocal_912[iVar0] = 2042647667;
		}
		else if (iVar0 == 2)
		{
			iLocal_912[iVar0] = -2143609525;
		}
		else if (iVar0 == 3)
		{
			iLocal_912[iVar0] = -1905739354;
		}
		else if (iVar0 == 6)
		{
			iLocal_912[iVar0] = 1071881105;
		}
		else if (iVar0 == 7)
		{
			iLocal_912[iVar0] = 1042064359;
		}
		else if (iVar0 == 4)
		{
			iLocal_912[iVar0] = -1801665010;
		}
		else if (iVar0 == 5)
		{
			iLocal_912[iVar0] = -1453231925;
		}
		else if (iVar0 == 8)
		{
			iLocal_912[iVar0] = 1098854605;
		}
		else if (iVar0 == 9)
		{
			iLocal_912[iVar0] = -706941207;
		}
		else if (iVar0 == 10)
		{
			iLocal_912[iVar0] = 1696121221;
		}
		else if (iVar0 == 11)
		{
			iLocal_912[iVar0] = 1132010214;
		}
		else if (iVar0 == 12)
		{
			iLocal_912[iVar0] = 1876749464;
		}
		else if (iVar0 == 13)
		{
			iLocal_912[iVar0] = 1331491364;
		}
		else if (iVar0 == 14)
		{
			iLocal_912[iVar0] = 69578762;
		}
		if (func_215(&(iLocal_912[iVar0])))
		{
		}
		iVar0++;
	}
	func_1752(cParam0);
}

void func_1035(int iParam0, bool bParam1, float fParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_574(iParam0, 0, 0);
	if (func_567(iParam0))
	{
		door_system_set_open_ratio(iParam0, fParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_1753(iParam0, fParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_1754(iParam0, 1);
			}
			else
			{
				func_1755(iParam0, 1);
			}
		}
		else
		{
			func_1756(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_1757())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_1036(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (*iParam0 - 1))
	{
		(*iParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1037(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = 0;
		iVar0++;
	}
}

void func_1038(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = iParam1;
		iVar0++;
	}
}

void func_1039(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1040(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = iParam1;
		iVar0++;
	}
}

void func_1041(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = iParam1;
		iVar0++;
	}
}

void func_1042(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		(*uParam0)[iVar0] = iParam1;
		iVar0++;
	}
}

void func_1043(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1044()
{
	iVar0 = 0;
	while (iVar0 <= (2 - 1))
	{
		if (iVar0 == 0)
		{
			if (!is_entity_dead(Global_35))
			{
				iLocal_521[iVar0] = add_shocking_event_for_entity(513747494, Global_35, 0f, 60f, 60f, 0f, -1f, 180f, false, false, -1, -1);
			}
		}
		else if (iVar0 == 1)
		{
			if (!is_entity_dead(&(uLocal_121[1])))
			{
				iLocal_521[iVar0] = add_shocking_event_for_entity(513747494, &(uLocal_121[1]), 0f, 60f, 60f, 0f, -1f, 180f, false, false, -1, -1);
			}
		}
		iVar0++;
	}
}

void func_1045(char[4] cParam0)
{
	if (func_39(cParam0) <= 2)
	{
		if (_does_volume_exist(&(iLocal_228[61])))
		{
			_0xb56d41a694e42e86(&(iLocal_228[61]), 0, 0, 0, -1, -1, 0);
		}
	}
	if (func_39(cParam0) == 0)
	{
		if (_does_volume_exist(&(iLocal_228[2])))
		{
			func_1442(&(iLocal_228[2]), 0, 0, 0);
		}
		if (_does_volume_exist(&(iLocal_228[3])))
		{
			func_1442(&(iLocal_228[3]), 0, 0, 0);
		}
	}
	if (func_39(cParam0) <= 1)
	{
		if (_does_volume_exist(&(iLocal_228[4])))
		{
			func_1442(&(iLocal_228[4]), 0, 0, 0);
		}
		if (_does_volume_exist(&(iLocal_228[5])))
		{
			func_1442(&(iLocal_228[5]), 0, 0, 0);
		}
	}
	if (func_39(cParam0) <= 2)
	{
		if (_does_volume_exist(&(iLocal_228[6])))
		{
			func_1442(&(iLocal_228[6]), 0, 0, 0);
		}
		if (_does_volume_exist(&(iLocal_228[7])))
		{
			func_1442(&(iLocal_228[7]), 0, 0, 0);
		}
		if (_does_volume_exist(&(iLocal_228[8])))
		{
			func_1442(&(iLocal_228[8]), 0, 0, 0);
		}
		if (_does_volume_exist(&(iLocal_228[11])))
		{
			func_1442(&(iLocal_228[11]), 0, 0, 0);
		}
	}
	if (func_39(cParam0) >= 2 && func_39(cParam0) <= 5)
	{
		if (_does_volume_exist(&(iLocal_228[12])))
		{
			_0x2fcd528a397e5c88(&(iLocal_228[12]), 16384);
			_0x2fcd528a397e5c88(&(iLocal_228[12]), 8);
			_0x2fcd528a397e5c88(&(iLocal_228[12]), 1048576);
			uLocal_37 = func_1389(&(iLocal_228[12]), 0, 0, 10240);
			_0xc1799fafd2fdf52b(&(iLocal_228[12]), 0, 0, 0);
			_0xe5ef9de716ff737e(&(iLocal_228[12]), 0, 0);
		}
	}
	if (func_39(cParam0) == 6)
	{
		if (_does_volume_exist(&(iLocal_228[13])))
		{
			func_1442(&(iLocal_228[13]), 0, 224, 0);
		}
	}
	if (func_39(cParam0) == 7)
	{
		if (_does_volume_exist(&(iLocal_228[9])))
		{
			func_1442(&(iLocal_228[9]), 0, 0, 0);
		}
		if (_does_volume_exist(&(iLocal_228[14])))
		{
			func_1442(&(iLocal_228[14]), 0, 0, 0);
		}
		if (_does_volume_exist(&(iLocal_228[15])))
		{
			func_1442(&(iLocal_228[15]), 0, 0, 0);
		}
		if (_does_volume_exist(&(iLocal_228[10])))
		{
			func_1442(&(iLocal_228[10]), 0, 0, 0);
		}
		if (_does_volume_exist(&(iLocal_228[16])))
		{
			func_1442(&(iLocal_228[16]), 0, 0, 0);
		}
		if (_does_volume_exist(&(iLocal_228[17])))
		{
			func_1442(&(iLocal_228[17]), 0, 0, 0);
		}
	}
	if (func_39(cParam0) >= 8)
	{
		if (_does_volume_exist(&(iLocal_228[26])))
		{
			_0x2fcd528a397e5c88(&(iLocal_228[26]), 8);
			_0x2fcd528a397e5c88(&(iLocal_228[26]), 40);
			_0x2fcd528a397e5c88(&(iLocal_228[26]), 24);
			_0x2fcd528a397e5c88(&(iLocal_228[26]), 1048576);
			_0xc1799fafd2fdf52b(&(iLocal_228[26]), 0, 0, 0);
			uLocal_43 = func_1389(&(iLocal_228[26]), 0, 0, 0);
		}
	}
}

void func_1046(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (80 - 1))
	{
		if (_does_volume_exist(&(iLocal_228[iVar0])))
		{
			if (func_39(cParam0) == 6)
			{
				if (iVar0 == 22 || iVar0 == 23)
				{
					if (!_0xde0ea444735c1368(&(iLocal_228[iVar0])))
					{
						_0x19c7567d2f2287d6(&(iLocal_228[iVar0]), 7);
					}
				}
			}
		}
		iVar0++;
	}
}

void func_1047(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (80 - 1))
	{
		if (_does_volume_exist(&(iLocal_228[iVar0])))
		{
			if (func_39(cParam0) == 0 || func_39(cParam0) == 1)
			{
				if (iVar0 == 30)
				{
					_0xc1799fafd2fdf52b(&(iLocal_228[iVar0]), 0, 0, 0);
				}
			}
			else if (func_39(cParam0) == 2)
			{
				if (iVar0 == 29 || iVar0 == 31)
				{
					_0xc1799fafd2fdf52b(&(iLocal_228[iVar0]), 0, 0, 0);
				}
			}
			else if ((func_39(cParam0) == 3 || func_39(cParam0) == 4) || func_39(cParam0) == 5)
			{
				if ((((((iVar0 == 28 || iVar0 == 29) || iVar0 == 31) || iVar0 == 32) || iVar0 == 33) || iVar0 == 34) || iVar0 == 35)
				{
					_0xc1799fafd2fdf52b(&(iLocal_228[iVar0]), 0, 0, 0);
				}
			}
			else if (func_39(cParam0) == 6 || (func_39(cParam0) >= 7 && func_39(cParam0) <= 11))
			{
				if ((((((iVar0 == 28 || iVar0 == 29) || iVar0 == 31) || iVar0 == 32) || iVar0 == 33) || iVar0 == 34) || iVar0 == 35)
				{
					_0xc1799fafd2fdf52b(&(iLocal_228[iVar0]), 0, 0, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_1048(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (80 - 1))
	{
		if (_does_volume_exist(&(iLocal_228[iVar0])))
		{
			if (func_39(cParam0) == 0)
			{
				if ((iVar0 == 3 || iVar0 == 4) || iVar0 == 5)
				{
					func_1500(&(iLocal_228[iVar0]), 0, 0, 0, 0, 0);
				}
			}
			else if (func_39(cParam0) == 1)
			{
				if (iVar0 == 36)
				{
					func_1500(&(iLocal_228[iVar0]), 0, 0, 0, 0, 0);
				}
			}
			else if (func_39(cParam0) == 2)
			{
				if (iVar0 == 38 || iVar0 == 39)
				{
					func_1390(&(iLocal_228[iVar0]), 0);
				}
				else if (iVar0 == 36)
				{
					if (!func_14(cParam0, 8))
					{
						func_1391(&(iLocal_228[iVar0]), 0, 0);
					}
				}
			}
			else if (func_39(cParam0) == 3)
			{
				if (iVar0 == 37)
				{
					func_1500(&(iLocal_228[iVar0]), 0, 0, 0, 0, 0);
				}
				if (iVar0 == 38 || iVar0 == 39)
				{
					func_1391(&(iLocal_228[iVar0]), 0, 0);
				}
			}
			else if (func_39(cParam0) == 4)
			{
			}
			else if (func_39(cParam0) == 5)
			{
			}
			else if (func_39(cParam0) == 6)
			{
				if ((iVar0 == 25 || iVar0 == 26) || iVar0 == 27)
				{
					func_1500(&(iLocal_228[iVar0]), 0, 0, 0, 0, 0);
				}
			}
			else if (func_39(cParam0) == 7)
			{
				if ((iVar0 == 25 || iVar0 == 26) || iVar0 == 27)
				{
					func_1500(&(iLocal_228[iVar0]), 0, 0, 0, 0, 0);
				}
			}
			else if (func_39(cParam0) >= 8)
			{
				if ((iVar0 == 25 || iVar0 == 26) || iVar0 == 27)
				{
					func_1500(&(iLocal_228[iVar0]), 0, 0, 0, 0, 0);
					_0xc1799fafd2fdf52b(&(iLocal_228[iVar0]), 0, 0, 0);
					func_1391(&(iLocal_228[iVar0]), 0, 0);
				}
			}
		}
		iVar0++;
	}
}

void func_1049(int iParam0, bool bParam1)
{
	iVar0 = 32768;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_1050(int iParam0)
{
	func_464(&(Global_1310750->f_16109), iParam0);
}

void func_1051(int iParam0)
{
	Global_1934182->f_74 = (Global_1934182->f_74 || iParam0);
}

void func_1052(char[4] cParam0)
{
	if (func_39(cParam0) == 0)
	{
		func_1528(cParam0, 0);
	}
	else if (func_39(cParam0) == 7)
	{
		func_1528(cParam0, 2);
	}
	else if (func_39(cParam0) == 8)
	{
		func_1528(cParam0, 3);
	}
	else if (func_39(cParam0) == 12)
	{
		func_1528(cParam0, 4);
	}
}

int func_1053(char[4] cParam0)
{
	switch (func_39(cParam0))
	{
		case 0:
			stop_gameplay_hint(true);
			func_1016(0, 0);
			break;
		case 7:
			func_220(7);
			func_1529(7);
			if (!is_entity_dead(Global_35))
			{
				if (is_ped_on_mount(Global_35))
				{
					_remove_ped_from_mount(Global_35, true, false);
				}
			}
			if (!is_entity_dead(&(uLocal_121[0])))
			{
				if (is_ped_on_mount(&(uLocal_121[0])))
				{
					_remove_ped_from_mount(&(uLocal_121[0]), true, false);
				}
				set_current_ped_weapon(&(uLocal_121[0]), -1569615261, true, 0, false, false);
			}
			break;
		case 8:
			stop_gameplay_hint(true);
			func_1016(0, 0);
			break;
		case 12:
			_0x72d4cb5db927009c(379542007, -1, 0);
			_0x72d4cb5db927009c(-183018591, -1, 0);
			_0x140b3cb1d424a945(Global_35, -1);
			iVar0 = 0;
			while (iVar0 < 4)
			{
				_0x140b3cb1d424a945(&(iLocal_203[iVar0]), -1);
				iVar0++;
			}
			stop_gameplay_hint(true);
			if (func_1127(10) && func_1127(11))
			{
				func_1620(cParam0, "1-ifNoMoreMissions");
			}
			else
			{
				func_1620(cParam0, "2-ifMoreMissions");
			}
			break;
	}
	return 0;
}

void func_1054(char[4] cParam0, int iParam1)
{
	cParam0->f_8265 = iParam1;
	func_109(cParam0, 2048);
}

int func_1055(char[4] cParam0)
{
	switch (func_39(cParam0))
	{
		case 0:
			if (!is_entity_dead(&(uLocal_121[0])))
			{
				if (func_1758(cParam0, &(uLocal_121[0]), 0, 0, 1, 1))
				{
					set_current_ped_weapon(&(uLocal_121[0]), -1569615261, true, 0, false, false);
				}
			}
			if (!is_entity_dead(Global_35))
			{
				if (func_1758(cParam0, Global_35, 0, 0, 1, 1))
				{
					if (func_126(cParam0, 4) || func_14(cParam0, 524288))
					{
					}
					set_current_ped_weapon(Global_35, -1569615261, false, 0, false, false);
					func_1510(cParam0, 0);
				}
			}
			break;
		case 7:
			if (bVar453)
			{
				iLocal_456 = 0;
			}
			set_ped_max_move_blend_ratio(Global_35, 1f);
			if (func_1526(2))
			{
				func_1759(2);
			}
			if (!is_entity_dead(Global_35))
			{
				if (func_1758(cParam0, Global_35, 0, 0, 1, 1))
				{
					if (func_126(cParam0, 4) || func_14(cParam0, 524288))
					{
					}
					func_1429(-668482597, 2000, 0, 1, 1, 0, 0, 0);
					set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
					set_player_control(get_player_index(), true, 0, false);
				}
			}
			if (!func_1396(1073741824))
			{
				if (!is_entity_dead(iLocal_209))
				{
					if (_does_scenario_point_exist(&(iLocal_330[2])))
					{
						set_blocking_of_non_temporary_events(iLocal_209, false);
						_task_use_scenario_point(iLocal_209, &(iLocal_330[2]), 0, 0, true, true, 0, false, -1f, false);
					}
					else
					{
						set_blocking_of_non_temporary_events(iLocal_209, true);
						task_stand_still(iLocal_209, -1);
					}
				}
				if (!is_entity_dead(&(iLocal_125[0])))
				{
					func_429(&(iLocal_125[0]), func_267(7, 5), 2, 1073741824);
					if (_does_scenario_point_exist(&(iLocal_330[3])))
					{
						set_blocking_of_non_temporary_events(&(iLocal_125[0]), true);
						_task_use_scenario_point(&(iLocal_125[0]), &(iLocal_330[3]), 0, 0, true, false, 0, false, -1f, false);
					}
					else
					{
						set_blocking_of_non_temporary_events(&(iLocal_125[0]), true);
						task_stand_still(&(iLocal_125[0]), -1);
					}
				}
				func_1458(1073741824);
			}
			if (!is_entity_dead(&(uLocal_121[0])))
			{
				if (func_1758(cParam0, &(uLocal_121[0]), 0, 0, 1, 1))
				{
					if (func_126(cParam0, 4) || func_14(cParam0, 524288))
					{
					}
					set_current_ped_weapon(&(uLocal_121[0]), -1569615261, true, 0, false, false);
					set_blocking_of_non_temporary_events(&(uLocal_121[0]), true);
					if (!func_434(&(uLocal_121[0]), 242628503))
					{
						open_sequence_task(&iLocal_34);
						if (!is_entity_dead(&(iLocal_125[0])))
						{
							task_mount_animal(0, &(iLocal_125[0]), 60000, -1, 1f, 1, 0, 0);
						}
						task_stand_still(0, -1);
						close_sequence_task(iLocal_34);
						task_perform_sequence(&(uLocal_121[0]), iLocal_34);
						clear_sequence_task(&iLocal_34);
					}
				}
			}
			if (!is_entity_dead(&(iLocal_158[0])))
			{
				if (func_1758(cParam0, &(iLocal_158[0]), "ValAuctionBoss_01", 0, 1, 1))
				{
					if (func_126(cParam0, 4) || func_14(cParam0, 524288))
					{
					}
				}
			}
			if (!is_entity_dead(&(iLocal_158[1])))
			{
				if (func_1758(cParam0, &(iLocal_158[1]), "A_M_M_ValFarmer_01", 0, 1, 1))
				{
					if (func_126(cParam0, 4) || func_14(cParam0, 524288))
					{
					}
				}
			}
			if (!is_entity_dead(&(iLocal_158[2])))
			{
				if (func_1758(cParam0, &(iLocal_158[2]), "U_M_M_ValAuctionForman_02", 0, 1, 1))
				{
					if (func_126(cParam0, 4) || func_14(cParam0, 524288))
					{
					}
				}
			}
			break;
		case 8:
			if (func_14(cParam0, 524288))
			{
				bVar0 = false;
			}
			else
			{
				bVar0 = true;
			}
			if (!func_1408(67108864))
			{
				func_1760(0);
				func_1027(0);
				func_1027(1);
				func_1761(func_1412(8, 0), 300f, 0, 0, 0, 0, 0);
				func_1416(67108864);
			}
			if (func_1762(cParam0))
			{
				func_1760(0);
			}
			_0x72d4cb5db927009c(-183018591, -1, 0);
			if (_0x2c04d89a0fb4e244("TaskDuel"))
			{
			}
			if (has_anim_dict_loaded("MINI_DUEL@PLAYER@MISSION@MUD4"))
			{
			}
			if (!is_entity_dead(&(uLocal_121[0])))
			{
				if (func_1758(cParam0, &(uLocal_121[0]), 0, 0, 1, 1))
				{
					if (func_126(cParam0, 4) || func_14(cParam0, 524288))
					{
						func_429(&(uLocal_121[0]), func_267(8, 22), 2, 1073741824);
						func_1763();
					}
					set_current_ped_weapon(&(uLocal_121[0]), -1569615261, true, 0, false, false);
				}
			}
			if (!func_1396(268435456))
			{
				if (_0x8d81e7824b7753f7(Global_43800, "MUD4_MCS3_P1A1_T12_Shot_1", 1))
				{
					func_1763();
					func_1458(268435456);
				}
			}
			if (!is_entity_dead(&(uLocal_121[1])))
			{
				if (func_1758(cParam0, &(uLocal_121[1]), 0, 0, 1, 1))
				{
					if (func_126(cParam0, 4) || func_14(cParam0, 524288))
					{
						func_429(&(uLocal_121[1]), func_267(8, 23), 2, 1073741824);
					}
					set_current_ped_weapon(&(uLocal_121[1]), -1569615261, true, 0, false, false);
					func_1510(cParam0, 7);
				}
			}
			if (!is_entity_dead(&(uLocal_121[2])))
			{
				if (func_1758(cParam0, &(uLocal_121[2]), 0, 0, 1, 1))
				{
					if (func_126(cParam0, 4) || func_14(cParam0, 524288))
					{
						func_429(&(uLocal_121[2]), func_267(8, 24), 2, 1073741824);
					}
					set_current_ped_weapon(&(uLocal_121[2]), -1569615261, true, 0, false, false);
				}
			}
			if (!is_entity_dead(&(iLocal_168[0])))
			{
				if (func_1758(cParam0, &(iLocal_168[0]), "G_M_M_UniCornwallGoons_01", 0, 1, 1))
				{
					if (func_126(cParam0, 4) || func_14(cParam0, 524288))
					{
						func_429(&(iLocal_168[0]), func_267(8, 25), 2, 1073741824);
					}
				}
			}
			if (!is_entity_dead(&(iLocal_168[1])))
			{
				if (func_1758(cParam0, &(iLocal_168[1]), "G_M_M_UniCornwallGoons_01^1", 0, 1, 1))
				{
					if (func_126(cParam0, 4) || func_14(cParam0, 524288))
					{
						func_429(&(iLocal_168[1]), func_267(8, 26), 2, 1073741824);
					}
				}
			}
			if (!is_entity_dead(&(iLocal_168[2])))
			{
				if (func_1758(cParam0, &(iLocal_168[2]), "G_M_M_UniCornwallGoons_01^2", 0, 1, 1))
				{
					if (func_126(cParam0, 4) || func_14(cParam0, 524288))
					{
						func_429(&(iLocal_168[2]), func_267(8, 27), 2, 1073741824);
					}
				}
			}
			if (!is_entity_dead(&(iLocal_168[3])))
			{
				if (func_1758(cParam0, &(iLocal_168[3]), "G_M_M_UNICORNWALLGOONS_01^4", 0, 1, 1))
				{
					if (func_126(cParam0, 4) || func_14(cParam0, 524288))
					{
						func_429(&(iLocal_168[3]), func_267(8, 28), 2, 1073741824);
					}
				}
			}
			if (!is_entity_dead(&(iLocal_162[0])))
			{
				if (func_1758(cParam0, &(iLocal_162[0]), "LeviticusCornwall", 0, 1, 0) || func_14(cParam0, 524288))
				{
					func_217(iLocal_162[0], 0);
				}
			}
			if (!is_entity_dead(&(iLocal_162[1])))
			{
				if (func_1758(cParam0, &(iLocal_162[1]), "G_M_M_UniCornwallGoons_01^4", 0, 1, 0) || func_14(cParam0, 524288))
				{
					func_217(iLocal_162[1], 0);
				}
			}
			if (!is_entity_dead(&(iLocal_165[0])))
			{
				if (func_1758(cParam0, &(iLocal_165[0]), "Horse_01", 0, 1, 0) || func_14(cParam0, 524288))
				{
					func_217(iLocal_165[0], 0);
				}
			}
			if (!is_entity_dead(&(iLocal_165[1])))
			{
				if (func_1758(cParam0, &(iLocal_165[1]), "Horse_01^1", 0, 1, 0) || func_14(cParam0, 524288))
				{
					func_217(iLocal_165[1], 0);
				}
			}
			if (!is_entity_dead(&(iLocal_129[1])))
			{
				if (func_1758(cParam0, &(iLocal_129[1]), "U_M_O_ValBartender_01", 0, 1, 1))
				{
					func_217(iLocal_129[1], 0);
				}
			}
			if (!is_entity_dead(&(iLocal_129[2])))
			{
				if (func_1758(cParam0, &(iLocal_129[2]), "A_M_M_VALTOWNFOLK_01", 0, 1, 0))
				{
					func_217(iLocal_129[2], 0);
				}
			}
			if (!is_entity_dead(&(iLocal_129[3])))
			{
				if (func_1758(cParam0, &(iLocal_129[3]), "A_M_M_VALTOWNFOLK_01^1", 0, 1, 0))
				{
					func_217(iLocal_129[3], 0);
				}
			}
			if (!is_entity_dead(&(iLocal_168[4])))
			{
				if (func_1758(cParam0, &(iLocal_168[4]), "G_M_M_UniCornwallGoons_01^5", 0, 1, bVar0))
				{
					if (func_126(cParam0, 4) || func_14(cParam0, 524288))
					{
						func_429(&(iLocal_168[4]), func_267(8, 29), 2, 1073741824);
					}
					func_1510(cParam0, 10);
					set_blocking_of_non_temporary_events(&(iLocal_168[4]), true);
				}
			}
			if (!is_entity_dead(Global_35))
			{
				if (!func_1396(536870912))
				{
					if (_0x8d81e7824b7753f7(Global_43800, "MUD4_MCS3_P2A1_T04_Shot_2", 1) || func_14(cParam0, 524288))
					{
						set_current_ped_weapon(Global_35, func_936(268435584, 0), true, 2, false, false);
						func_1458(536870912);
					}
				}
				if (func_1758(cParam0, Global_35, 0, 0, 1, bVar0))
				{
					if (func_126(cParam0, 4) || func_14(cParam0, 524288))
					{
						func_429(Global_35, func_267(8, 21), 2, 1073741824);
					}
					func_1016(0f, 0f);
					func_1510(cParam0, 8);
					func_1764(0);
					func_1569(1);
					Local_2000 = Global_35;
					Local_2000.f_1 = &iLocal_168[4];
					Local_2000.f_2 = &uLocal_121[0];
					Local_2000.f_42 = { func_1412(8, 21) };
					Local_2000.f_45 = { func_1412(8, 29) };
					Local_2000.f_89 = 1;
					*Local_2000.f_51[2] = { -244.8385f, 765.6008f, 118.5099f };
					*Local_2000.f_61[2] = { -7.703393f, 0f, 112.3962f };
					Local_2000.f_71[2] = 29.52094f;
					StringCopy(&(Local_2000.f_36), "MUD4_DUEL_OBJ", 24);
					func_1765(&Local_2000, 2);
					func_1765(&Local_2000, 524288);
					func_1765(&Local_2000, 64);
					func_1765(&Local_2000, 16);
					func_1765(&Local_2000, 16384);
					func_1765(&Local_2000, 32768);
					func_1765(&Local_2000, 512);
					func_1765(&Local_2000, 65536);
					func_1765(&Local_2000, 128);
					func_1765(&Local_2000, 262144);
					func_1765(&Local_2000, 1048576);
					func_1765(&Local_2000, 2097152);
					func_1765(&Local_2000, 33554432);
					func_1556(&Local_2000, &uLocal_1906);
				}
			}
			break;
		case 12:
			if (func_1408(134217728))
			{
				func_1415(134217728);
			}
			if (!func_1408(8388608))
			{
				if (_get_anim_scene_progress(Global_43800) >= 0.85f)
				{
					if (func_1766(&(iLocal_203[0]), "MOVE_IN", -500314840, 0, 1, 0, 0, 1))
					{
						func_1416(8388608);
					}
				}
			}
			if (!func_1408(16777216))
			{
				if (_get_anim_scene_progress(Global_43800) >= 0.8759542f)
				{
					_0x6da15746d5cc1a92(1908719627, -1355311115, &(iLocal_203[2]), -349.0313f, 755.0796f, 116.4824f);
					func_1416(16777216);
				}
			}
			if (_get_anim_scene_progress(Global_43800) >= 0.4271047f)
			{
				set_entity_invincible(&(iLocal_203[1]), false);
				set_entity_collision(&(iLocal_203[1]), true, false);
				freeze_entity_position(&(iLocal_203[1]), false);
				set_entity_visible(&(iLocal_203[1]), true);
			}
			if (func_1758(cParam0, Global_35, 0, 0, 1, 1) || _0x005e6f28dd7ed58d(Global_43800, "ARTHUR"))
			{
				func_1764(1);
				if (func_126(cParam0, 4) || func_14(cParam0, 524288))
				{
					set_entity_invincible(&(iLocal_203[1]), false);
					set_entity_collision(&(iLocal_203[1]), true, false);
					freeze_entity_position(&(iLocal_203[1]), false);
					set_entity_visible(&(iLocal_203[1]), true);
				}
				if (func_126(cParam0, 4))
				{
					if (_is_base_a_cover_point(&(iLocal_342[4])))
					{
						task_put_ped_directly_into_cover(Global_35, func_1412(13, 0), -1, 0, 0f, 1, 1, &(iLocal_342[4]), 0, 0, 0);
						func_1767(-333.9298f, 754.1382f, 115.9325f, 0);
						_0x2208438012482a1a(Global_35, false, false);
					}
				}
				else if (_is_base_a_cover_point(&(iLocal_342[4])) && _0x8cbe916cfc64ad5c(Global_35))
				{
					task_put_ped_directly_into_cover(Global_35, func_1412(13, 0), -1, 0, 0f, 1, 1, &(iLocal_342[4]), 0, 0, 0);
					func_1767(-333.9298f, 754.1382f, 115.9325f, 0);
					_0x2208438012482a1a(Global_35, false, false);
				}
				func_1768(cParam0, 11, 64);
				func_46(1);
				_report_crime(player_id(), -493957506, 0, 0, true);
				if (func_126(cParam0, 4) || func_14(cParam0, 524288))
				{
					if (!func_1396(2097152))
					{
						func_1769();
						func_1458(2097152);
					}
				}
			}
			if (func_1758(cParam0, &(uLocal_121[0]), "JohnMarston", 0, 1, 1))
			{
				if (func_301(1))
				{
					func_484(&(iLocal_125[0]), 1, 1, 0, 1);
					func_302(cParam0, 1, &(uLocal_121[0]), 0, 1, 1, 0);
				}
			}
			if (func_1758(cParam0, &(uLocal_121[1]), "dutch", 0, 1, 1))
			{
				if (func_301(0))
				{
					func_484(&(iLocal_125[1]), 0, 1, 0, 1);
					func_302(cParam0, 0, &(uLocal_121[1]), 0, 1, 1, 0);
				}
			}
			if (func_1758(cParam0, &(uLocal_121[2]), "LeoStrauss", 0, 1, 1))
			{
				if (func_301(18))
				{
					func_302(cParam0, 18, &(uLocal_121[2]), 0, 1, 1, 0);
				}
			}
			if (!func_126(cParam0, 4))
			{
				if (!func_1396(2097152))
				{
					if (_get_anim_scene_progress(Global_43800) >= 0.81f)
					{
						func_1769();
						func_1458(2097152);
					}
				}
			}
			break;
	}
	return 1;
}

void func_1056(char[4] cParam0, int iParam1)
{
	cParam0->f_8266 = iParam1;
	func_109(cParam0, 1024);
}

int func_1057(char[4] cParam0)
{
	switch (func_39(cParam0))
	{
		case 0:
			func_1501(cParam0, "MUD4_OBJ_GTW", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 1:
			func_1501(cParam0, "MUD4_OBJ_GTW", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 2:
			func_1501(cParam0, "MUD4_OBJ_MTJ", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 3:
			func_1501(cParam0, "MUD4_OBJ_SNP1", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 4:
			func_1501(cParam0, "MUD4_OBJ_MTJ", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 5:
			func_1501(cParam0, "MUD4_GV_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 6:
			func_1501(cParam0, "MUD4_GTH_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 7:
			func_1501(cParam0, "MUD4_OBJ_MTJ", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 8:
			func_1501(cParam0, "MUD4_SS_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 9:
			func_1501(cParam0, "MUD4_SS_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 10:
			func_1501(cParam0, "MUD4_PC_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 11:
			func_1501(cParam0, "MUD4_GH_OBJ3", -1082130432, 0, 0, -1, -1, 0);
			break;
		case 12:
			func_1501(cParam0, "MUD4_SS_OBJ1", -1082130432, 0, 0, -1, -1, 0);
			break;
	}
	return 1;
}

void func_1058(char[4] cParam0, int iParam1)
{
	cParam0->f_8267 = iParam1;
	func_109(cParam0, 131072);
}

void func_1059(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (8 - 1))
	{
		if (!_is_base_a_cover_point(&(iLocal_342[iVar0])))
		{
			switch (func_39(cParam0))
			{
				case 0:
				case 1:
				case 2:
				case 3:
				case 4:
				case 5:
				case 6:
				case 7:
					break;
				case 8:
					if (iVar0 == 3)
					{
						Var1 = { func_267(16, 3) };
						iLocal_342[iVar0] = add_cover_point(Var1, Var1.f_3, 2, 0, 1, false);
					}
					else if (iVar0 == 2)
					{
						Var1 = { func_267(16, 0) };
						iLocal_342[iVar0] = add_cover_point(Var1, Var1.f_3, 2, 0, 1, false);
					}
					else if (iVar0 == 0)
					{
						Var1 = { func_267(17, 1) };
						iLocal_342[iVar0] = add_cover_point(Var1, Var1.f_3, 2, 0, 0, false);
					}
					else if (iVar0 == 1)
					{
						Var1 = { func_267(17, 2) };
						iLocal_342[iVar0] = add_cover_point(Var1, Var1.f_3, 2, 0, 0, false);
					}
					break;
				case 9:
				case 10:
				case 11:
					break;
				case 12:
					if (iVar0 == 4)
					{
						Var1 = { func_267(13, 0) };
						iLocal_342[iVar0] = add_cover_point(Var1, Var1.f_3, 3, 0, 1, true);
					}
					else if (iVar0 == 5)
					{
						Var1 = { func_267(13, 1) };
						iLocal_342[iVar0] = add_cover_point(Var1, Var1.f_3, 3, 0, 1, false);
					}
					else if (iVar0 == 6)
					{
						Var1 = { func_267(13, 3) };
						iLocal_342[iVar0] = add_cover_point(Var1, Var1.f_3, 3, 0, 1, false);
					}
					else if (iVar0 == 7)
					{
						Var1 = { func_267(13, 2) };
						iLocal_342[iVar0] = add_cover_point(Var1, Var1.f_3, 3, 0, 1, false);
					}
					break;
				default:
					break;
			}
		}
		iVar0++;
	}
}

void func_1060(char[4] cParam0)
{
	if (func_39(cParam0) >= 8 && func_39(cParam0) <= 11)
	{
		if (func_1413(&(iLocal_125[0]), func_1412(11, 5), 1) >= 5f)
		{
			func_429(&(iLocal_125[0]), func_267(11, 5), 2, 1073741824);
			task_stand_still(&(iLocal_125[0]), -1);
		}
	}
	if (func_39(cParam0) >= 8 && func_39(cParam0) <= 11)
	{
		if (func_1456(Global_35, iLocal_209, 0))
		{
			if (!func_1396(16777216))
			{
				func_1458(16777216);
			}
		}
		if (!func_1396(16777216))
		{
			if (func_1413(iLocal_209, func_1412(11, 4), 1) >= 5f)
			{
				func_429(iLocal_209, func_267(11, 4), 2, 1073741824);
				task_stand_still(iLocal_209, -1);
			}
		}
	}
	if (!&iLocal_374[27])
	{
		set_create_random_cops(false);
	}
	if (func_39(cParam0) >= 5)
	{
		if (!func_1396(2))
		{
			func_175(76, 0);
			func_1035(&(iLocal_912[0]), 1, 0f, 0, 0, 0, 0, 0);
			func_1035(&(iLocal_912[1]), 1, 0f, 0, 0, 0, 0, 0);
			func_1458(2);
		}
	}
	func_1770(18, 0, 0, 0);
	if (func_39(cParam0) >= 1 && func_39(cParam0) <= 3)
	{
		if (Global_1935496->f_30 == -506285289)
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
	_0x28cb6391acedd9db(0f);
	if (func_39(cParam0) >= 8)
	{
		_0xab0d553fe20a6e25(0f);
		iVar0 = 0;
		while (iVar0 <= (4 - 1))
		{
			if (does_entity_exist(&(iLocal_174[iVar0])) && func_521(&(iLocal_174[iVar0]), 0))
			{
				if (func_1005(Global_35, &(iLocal_174[iVar0]), 1, 1) <= 10f)
				{
					if (!does_blip_exist(&(iLocal_59[iVar0])))
					{
						iLocal_59[iVar0] = _blip_add_for_entity(831283580, &(iLocal_174[iVar0]));
						_blip_set_modifier(&(iLocal_59[iVar0]), -1034486097);
					}
				}
				else if (does_blip_exist(&(iLocal_59[iVar0])))
				{
					remove_blip(iLocal_59[iVar0]);
				}
			}
			iVar0++;
		}
	}
	if (func_39(cParam0) >= 10)
	{
		if (does_entity_exist(&(Local_2094[13])) && func_521(&(Local_2094[13]), 0))
		{
			set_ped_reset_flag(&(Local_2094[13]), 9, true);
			if (_0xcc2b20596e29e4e3(&(Local_2094[13]), 0))
			{
				set_ped_combat_attributes(&(Local_2094[13]), 0, false);
			}
		}
	}
	if (func_39(cParam0) >= 8)
	{
		func_1771();
	}
	if (func_39(cParam0) < 8)
	{
		if (func_39(cParam0) >= 2 && func_39(cParam0) <= 6)
		{
			set_vehicle_density_multiplier_this_frame(0f);
			set_random_vehicle_density_multiplier_this_frame(0f);
		}
		else
		{
			set_vehicle_density_multiplier_this_frame(1f);
			set_random_vehicle_density_multiplier_this_frame(1f);
		}
	}
	else if (func_39(cParam0) >= 8)
	{
		set_vehicle_density_multiplier_this_frame(0f);
		set_random_vehicle_density_multiplier_this_frame(0f);
	}
	if (func_39(cParam0) < 8)
	{
		_0xf45e46deecf7df6e(4320, 0, 0, -1, -1);
	}
	else if (func_39(cParam0) >= 8)
	{
		_0xf45e46deecf7df6e(480, 0, 0, -1, -1);
	}
	if (func_39(cParam0) >= 8)
	{
		if (!_does_scenario_point_exist(iVar338))
		{
			iLocal_341 = _find_closest_active_scenario_point_of_type(-355.9728f, 757.4061f, 115.4485f, -1816442556, 1f, 0, false);
		}
		else if (_is_scenario_point_active(iVar338))
		{
			_set_scenario_point_active(iVar338, false);
		}
		if (!_0x91a5f9cbebb9d936(uLocal_38))
		{
			uLocal_38 = _0x4c39c95ae5db1329(&(iLocal_228[24]), false, 15);
		}
		func_1772();
	}
	if (func_39(cParam0) >= 8)
	{
		StringCopy(&cVar1, "LAW_UI_DEAD_OR_ALIVE", 24);
		func_1773(cVar1);
		if (func_39(cParam0) != 12)
		{
			if (!func_1396(4194304))
			{
				if (Global_1935630->f_18)
				{
					_0xdea083c16bb91345();
					func_1458(4194304);
				}
			}
			_0xc5eb2755fa25f1e9(0);
			set_ped_reset_flag(Global_35, 128, true);
			report_police_spotted_player(player_id());
			_0xd0b0b044112bf424(player_id());
			_0xbd944a3d36e992de();
		}
	}
	if (func_39(cParam0) >= 8 && func_39(cParam0) <= 10)
	{
		if (!_0xc8b29d18022ea2b7(Global_35))
		{
			if (func_1774(&uLocal_786, 20f) && func_1604(0, 15) > 0)
			{
				set_entity_only_damaged_by_player(&(uLocal_121[0]), false);
				set_entity_only_damaged_by_player(&(uLocal_121[2]), false);
				set_entity_only_damaged_by_player(&(uLocal_121[1]), false);
				func_1615(cParam0, &(uLocal_121[0]), 1, 1);
				func_1615(cParam0, &(uLocal_121[2]), 1, 1);
				func_1615(cParam0, &(uLocal_121[1]), 1, 1);
			}
			else
			{
				if (func_1604(0, 15) == 0 && func_32(&uLocal_786))
				{
					func_520(&uLocal_786);
				}
				set_entity_only_damaged_by_player(&(uLocal_121[0]), true);
				set_entity_only_damaged_by_player(&(uLocal_121[2]), true);
				set_entity_only_damaged_by_player(&(uLocal_121[1]), true);
				func_1615(cParam0, &(uLocal_121[0]), 0, 1);
				func_1615(cParam0, &(uLocal_121[2]), 0, 1);
				func_1615(cParam0, &(uLocal_121[1]), 0, 1);
			}
		}
	}
	if (func_39(cParam0) >= 8 && func_39(cParam0) <= 10)
	{
		func_1775(cParam0);
	}
	if (func_39(cParam0) >= 8 && func_39(cParam0) <= 11)
	{
		func_1776(0);
	}
	if (func_39(cParam0) >= 8 && func_39(cParam0) <= 11)
	{
		func_1777();
	}
	if (func_39(cParam0) == 8)
	{
		if (_does_anim_scene_exist(&(uLocal_466[6])))
		{
			if (_0xb89fcff19dafff28(&(uLocal_466[6]), "Dutch"))
			{
				_delete_anim_scene(&(uLocal_466[6]));
			}
		}
	}
	if (func_39(cParam0) == 6 || func_39(cParam0) == 7)
	{
		if (func_1526(2))
		{
			if (func_1525(Global_35, &(iLocal_228[57]), 1, 0))
			{
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_39(cParam0) == 11 || func_39(cParam0) == 12)
	{
		iVar8 = _0x4642182a298187d0(Global_35, 7, &uVar4, 4, 0);
		if (iVar8 == 2)
		{
			if (!func_1408(134217728))
			{
				func_1416(134217728);
			}
		}
		if (func_1408(134217728))
		{
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
		}
	}
	if (func_39(cParam0) >= 7)
	{
		if (!does_entity_exist(iLocal_120))
		{
			iLocal_120 = create_object(220493865, func_1412(13, 5), true, true, false, false, true);
			set_entity_heading(iLocal_120, func_1417(13, 5));
		}
		if (!_0xc276fe69dda22bad(iLocal_46))
		{
			iLocal_46 = add_cover_point(_get_object_offset_from_coords(func_1412(13, 5), func_1417(13, 5), 0f, -1f, 0f), func_1417(13, 5), 3, 0, 0, false);
		}
	}
	if (is_entity_dead(&(uLocal_121[0])))
	{
		if (does_entity_exist(&(uLocal_121[0])))
		{
		}
	}
	if (is_entity_dead(Global_35))
	{
		if (does_entity_exist(Global_35))
		{
		}
	}
	if (is_entity_dead(iLocal_209))
	{
		if (does_entity_exist(iLocal_209))
		{
		}
	}
	if (is_entity_dead(&(iLocal_125[0])))
	{
		if (does_entity_exist(&(iLocal_125[0])))
		{
		}
	}
	if (func_39(cParam0) == 7)
	{
		if (!func_222(1, 262144))
		{
			func_223(1, 16384);
			func_1778(1, 262144);
		}
	}
}

void func_1061(char[4] cParam0)
{
	if (!func_29(&(cParam0->f_8269)))
	{
		return;
	}
	if (!func_127(cParam0, func_39(cParam0), 268435456))
	{
		return;
	}
	func_1779(cParam0);
}

void func_1062(char[4] cParam0)
{
	if (!func_14(cParam0, 8388608))
	{
		if (func_168(cParam0, func_39(cParam0)) == 5 || func_168(cParam0, func_39(cParam0)) == 6)
		{
			if (!func_257())
			{
				if (func_1014(&(cParam0->f_13112)) < 5f)
				{
					_0x9f9a829c6751f3c7(get_player_index(), 31, 0);
				}
			}
			else
			{
				func_264(&(cParam0->f_13112));
			}
		}
	}
	else
	{
		_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	}
}

void func_1063(char[4] cParam0)
{
	if (func_127(cParam0, func_39(cParam0), 8388608))
	{
		if (func_1780(cParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1781();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1768(cParam0, func_39(cParam0), 8388608);
		}
	}
}

void func_1064(char[4] cParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (func_14(cParam0, 256))
	{
		return;
	}
	if (!func_14(cParam0, 1048576))
	{
		if (func_281() || func_60())
		{
			func_105(cParam0, 1048576);
		}
	}
	else if (!func_281() && !func_60())
	{
		func_1010(cParam0, 1048576);
	}
	if (!func_14(cParam0, 134217728))
	{
		if ((func_14(cParam0, 1048576) && !func_127(cParam0, func_39(cParam0), 524288)) && !func_127(cParam0, func_39(cParam0), 1))
		{
			if (!Global_1935630->f_12)
			{
				_0xb832f1a686b9b810(Global_35, true, 0);
				func_105(cParam0, 134217728);
			}
		}
	}
	else if ((!func_14(cParam0, 1048576) || func_127(cParam0, func_39(cParam0), 524288)) || func_127(cParam0, func_39(cParam0), 1))
	{
		if (!Global_1935630->f_12)
		{
			_0xb832f1a686b9b810(Global_35, false, 0);
			func_1010(cParam0, 134217728);
		}
	}
}

void func_1065(char[4] cParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (func_127(cParam0, func_39(cParam0), 1) && !func_127(cParam0, func_39(cParam0), 1048576))
	{
		set_ped_reset_flag(Global_35, 175, true);
	}
}

void func_1066(char[4] cParam0)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	if (!func_127(cParam0, func_39(cParam0), 2097152))
	{
		set_ped_reset_flag(Global_35, 187, true);
	}
}

void func_1067(char[4] cParam0)
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

int func_1068(char[4] cParam0)
{
	if ((func_26() != -1 || func_39(cParam0) == 25) || func_39(cParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_297(cParam0->f_5423[iVar0]))
		{
			func_565(cParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_1069(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_138(iParam1);
	if (!func_1782(iVar0))
	{
		return false;
	}
	iVar1 = func_1783(iParam2);
	if (!func_1784(iVar1))
	{
		return false;
	}
	if (!func_1785(cParam0, iParam1, iParam2))
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

int func_1070(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_138(iParam1)]->f_21;
}

int func_1071(char[4] cParam0, int iParam1)
{
	return 1;
}

void func_1072(char[4] cParam0)
{
	if (!func_26() == 0 || network_is_host_of_this_script())
	{
		func_264(&(cParam0->f_603));
	}
}

void func_1073(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_138(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_1074(char[4] cParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_32(&(cParam0->f_13109)))
	{
		func_33(&(cParam0->f_13109), 0);
	}
	else if (func_1014(&(cParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_298(cParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_299(cParam0->f_5421))
		{
			iVar2 = func_300(cParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = func_1786(cParam0->f_5421, iVar1);
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

float func_1075(char[4] cParam0)
{
	return func_1014(&(cParam0->f_603));
}

bool func_1076(char[4] cParam0)
{
	if ((func_126(cParam0, 4) || func_126(cParam0, 128)) && !func_108())
	{
		return false;
	}
	return true;
}

bool func_1077(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_14(cParam0, -2147483648))
	{
		return true;
	}
	if (func_1069(cParam0, iParam1, 4))
	{
		if (func_39(cParam0) != 25 && func_39(cParam0) != 26)
		{
			if (!func_14(cParam0, 512) && !func_126(cParam0, 4))
			{
				func_42(cParam0, func_40(iParam1), func_40(iParam2), iParam1, iParam2);
			}
			else
			{
				Var0 = { func_40(iParam2) };
				*Global_1347394 = { Var0 };
				Global_1347394->f_3 = Var0.f_3;
				Global_1572864->f_10 = func_138(iParam2);
			}
		}
		func_1787(cParam0);
		if (func_1788(cParam0))
		{
			func_1789(cParam0);
		}
		if (func_127(cParam0, func_39(cParam0), 33554432) && func_14(cParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_1010(cParam0, 524288);
		func_1790(&(cParam0->f_7375), 4);
		if (func_1780(cParam0))
		{
			func_146(cParam0, func_39(cParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1781();
		}
		return true;
	}
	return false;
}

void func_1078(char[4] cParam0)
{
	func_1791(cParam0);
	if (func_127(cParam0, func_39(cParam0), 2))
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

bool func_1079(char[4] cParam0, int iParam1)
{
	if (func_126(cParam0, 16384))
	{
		if (func_1009(cParam0))
		{
			func_57(&(cParam0->f_10792));
			func_1010(cParam0, 2097152);
			func_308(cParam0, 16384);
			func_109(cParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_14(cParam0, 4))
	{
		func_1071(cParam0, iParam1);
		func_105(cParam0, 4);
	}
	Var0 = { func_1715(cParam0, iParam1) };
	if (func_127(cParam0, func_39(cParam0), 2))
	{
		if (func_14(cParam0, 2097152))
		{
			if (func_1009(cParam0))
			{
				func_1010(cParam0, 2097152);
				func_1011(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_1011(cParam0, Var0);
		}
	}
	else if (func_14(cParam0, 2097152))
	{
		if (func_1009(cParam0))
		{
			func_1010(cParam0, 2097152);
			func_1722(cParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_127(cParam0, func_39(cParam0), 2))
	{
		return func_1011(cParam0, Var0);
	}
	return true;
}

bool func_1080(char[4] cParam0)
{
	return func_1792(&(cParam0->f_7375));
}

void func_1081(char[4] cParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1793(cParam0))
		{
			func_482(cParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1794(cParam0, cVar0);
			func_166(cParam0, 2);
		}
	}
}

int func_1082(char[4] cParam0, int iParam1)
{
	if (((func_26() != -1 || func_39(cParam0) == 25) || func_39(cParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_127(cParam0, func_39(cParam0), 1);
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (func_297(cParam0->f_5423[iVar1]))
		{
			if (func_1795(cParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1796(cParam0, cParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_1083(char[4] cParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1797(cParam0))
		{
			func_482(cParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1794(cParam0, cVar0);
			func_166(cParam0, 2);
		}
	}
}

void func_1084(char[4] cParam0)
{
	switch (func_1798(&iVar0))
	{
		case 1:
			func_1799(cParam0, Var1, 1, 0);
			break;
		case 3:
			if (!_databinding_is_data_id_valid(cParam0->f_13178))
			{
				cParam0->f_13178 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
			}
			if (func_234(iVar0) && iVar0 == func_18(cParam0->f_607))
			{
				bVar9 = true;
			}
			_databinding_write_data_bool(cParam0->f_13178, bVar9);
			break;
	}
}

bool func_1085(char[4] cParam0, int iParam1)
{
	if (func_14(cParam0, 4194304))
	{
		return false;
	}
	if (!func_127(cParam0, iParam1, 2))
	{
		return false;
	}
	return true;
}

int func_1086(char[4] cParam0, int iParam1)
{
	if (func_14(cParam0, 16777216))
	{
		func_1721(cParam0);
		func_1010(cParam0, 65536);
		return 0;
	}
	if (!func_127(cParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1715(cParam0, iParam1) };
	if (func_1800(cParam0, &Var0))
	{
		if (!func_14(cParam0, 65536))
		{
			func_105(cParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_1087(char[4] cParam0, int iParam1)
{
	func_1801(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1, func_270(cParam0, iParam1));
}

void func_1088(char[4] cParam0, int iParam1)
{
	if (!func_127(cParam0, func_39(cParam0), 67108864))
	{
		if (does_blip_exist(cParam0->f_5303))
		{
			remove_blip(&(cParam0->f_5303));
		}
		cParam0->f_7374 = 0;
		func_1073(cParam0, iParam1, 2);
		func_140(cParam0, 0);
		func_141(cParam0, 0);
		func_105(cParam0, 8);
		func_1010(cParam0, -2147483648);
		func_146(cParam0, func_39(cParam0), 67108864);
		func_1010(cParam0, 4);
		func_1010(cParam0, 8192);
		func_1010(cParam0, 536870912);
		func_308(cParam0, 4);
		func_71(0);
		func_70(0);
		func_1010(cParam0, 2);
		func_51();
		cParam0->f_5302 = 0;
		func_1802(cParam0);
		if ((func_41(cParam0) == 25 || func_41(cParam0) == 26) && func_88(32768))
		{
			func_422(cParam0, 524288);
		}
		if (func_26() == 0)
		{
			if (_0xb655db7582aec805(Global_35))
			{
				func_27(0);
				_0xf6262491c7704a63(Global_35, 0);
			}
			else if (Global_1935630->f_12)
			{
				func_1803(1, 1);
			}
		}
	}
}

void func_1089(bool bParam0)
{
	if (!func_241(0, 0, 1) || bParam0)
	{
		iVar0 = func_1196();
		iVar1 = func_1199(iVar0);
		fVar2 = (1f - (absf(to_float(iVar1)) / to_float(8)));
		fVar3 = func_1804(iVar0 < 0, 0f, (to_float(iVar1) / to_float(8)));
		fVar4 = func_1804(iVar0 > 0, 0f, (to_float(iVar1) / to_float(8)));
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

bool func_1090(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1805(bParam1, bParam2, bParam3);
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

var func_1091(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
{
	if (bParam2)
	{
		_0xdd1232b332cbb9e7(3, 1, 1);
	}
	if (Global_1572887->f_12 != -1)
	{
		return func_1806(sParam0, iParam1, 0, 0, 1, 1);
	}
	sVar0 = func_1807(iParam8, sParam0, sParam4, sParam5, sParam6, sParam7);
	if (bParam3)
	{
		_uilog_set_cached_objective(sVar0);
	}
	return func_1806(sVar0, iParam1, 0, 0, 1, 1);
}

bool func_1092(char[4] cParam0)
{
	return true;
}

bool func_1093(char[4] cParam0)
{
	return true;
}

int func_1094(char[4] cParam0)
{
	return 1;
}

int func_1095(int iParam0)
{
	if (!func_614(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

bool func_1096(int iParam0)
{
	if (!func_529(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_1097(int iParam0)
{
	if (!func_529(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_1098(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_529(iParam0))
		{
			return;
		}
	}
	func_1808(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_1099(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_529(iParam0))
		{
			return;
		}
	}
	func_1808(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_1100(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_529(iParam0))
	{
		return 0;
	}
	iVar0 = func_1095(iParam0);
	if (func_521(iVar0, 0))
	{
		if (func_521(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_1096(iParam0)) || func_1097(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_1809(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_1810(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_1811(iParam0);
					_0x7b204f88f6c3d287(func_1812(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_1812(iParam0, 0));
					func_1813(iParam0);
				}
			}
			else
			{
				if (func_804(iParam0, 32768, 1))
				{
					iVar2 = func_1812(iParam0, 0);
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
		if (func_521((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_804(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_1811(iParam0);
				_0x7b204f88f6c3d287(func_1812(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_1812(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_1811(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_1814(iParam0, 0);
	return 1;
}

bool func_1101(int iParam0)
{
	if (!func_544(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

bool func_1102(int iParam0, int iParam1)
{
	if (func_26() != -1)
	{
		return false;
	}
	if (!func_544(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

bool func_1103(int iParam0)
{
	if (!func_544(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_1104(int iParam0)
{
	if (!func_544(iParam0))
	{
		return;
	}
	iVar0 = func_1815(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_1105(int iParam0, bool bParam1)
{
	if (!func_544(iParam0))
	{
		return 0;
	}
	if (!func_1102(iParam0, 2))
	{
		return 0;
	}
	if (func_545(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_547(iParam0)))
	{
		return 1;
	}
	if (func_1102(iParam0, 1) && !bParam1)
	{
		func_491(iParam0, 128);
		return 1;
	}
	func_489(iParam0, 129);
	func_1104(iParam0);
	_0xfc77c5b44d5ff7c0(func_547(iParam0));
	func_1816(iParam0, 0);
	return 1;
}

float func_1106()
{
	return (func_1817(150f, to_float(Global_1934765->f_286)) / to_float(300));
}

void func_1107(int iParam0)
{
	Global_1914319->f_15923 = iParam0;
}

bool func_1108(int iParam0, int iParam1)
{
	if (!func_498(iParam0))
	{
		return false;
	}
	return (Global_1914319->f_3[iParam0]->f_7 && iParam1) != 0;
}

void func_1109(int iParam0, int iParam1)
{
	if (!func_498(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 || iParam1);
}

void func_1110(int iParam0, int iParam1)
{
	if (!func_498(iParam0))
	{
		return;
	}
	Global_1914319->f_3[iParam0]->f_7 = (Global_1914319->f_3[iParam0]->f_7 - (Global_1914319->f_3[iParam0]->f_7 && iParam1));
}

bool func_1111(int iParam0)
{
	if (func_1818())
	{
		if (Global_1914319->f_16855 == iParam0)
		{
			return true;
		}
	}
	return false;
}

bool func_1112(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 7);
}

bool func_1113(int iParam0)
{
	return (*Global_1392915)[iParam0]->f_1 == -1;
}

char* func_1114(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MINIGAME_SP_BLACKJACK_BLACKWATER";
		case 1:
			return "MINIGAME_SP_BLACKJACK_RHODES";
		case 2:
			return "MINIGAME_SP_BLACKJACK_VANHORN";
		case 3:
			return "MINIGAME_SP_CLEANSTALLS_BEECHERS_HOPE";
		case 4:
			return "MINIGAME_SP_CLEANSTALLS_HORSESHOE_OVERLOOK";
		case 5:
			return "MINIGAME_SP_CLEANSTALLS_PRONGHORN_RANCH";
		case 6:
			return "MINIGAME_SP_DOMINOES_BLACKWATER";
		case 7:
			return "MINIGAME_SP_DOMINOES_CAMP";
		case 8:
			return "MINIGAME_SP_DOMINOES_CLEMENS_POINT";
		case 9:
			return "MINIGAME_SP_DOMINOES_EMERALD_RANCH";
		case 10:
			return "MINIGAME_SP_DOMINOES_HORSESHOE_OVERLOOK";
		case 11:
			return "MINIGAME_SP_DOMINOES_SAINT_DENIS";
		case 12:
			return "MINIGAME_SP_DOMINOES_SHADY_BELLE";
		case 14:
			return "MINIGAME_SP_FILLET_CAMP";
		case 15:
			return "MINIGAME_SP_FILLET_CLEMENS_POINT";
		case 16:
			return "MINIGAME_SP_FILLET_HORSESHOE_OVERLOOK";
		case 17:
			return "MINIGAME_SP_FILLET_STRAWBERRY";
		case 18:
			return "MINIGAME_SP_FILLET_SHADY_BELLE";
		case 19:
			return "MINIGAME_SP_FILLET_VALENTINE";
		case 20:
			return "MINIGAME_SP_FILLET_VAN_HORN";
		case 13:
			return "MINIGAME_SP_FENCEBUILDING_PRONGHORN_RANCH";
		case 21:
			return "MINIGAME_SP_MILKCOW_BEECHERS_HOPE";
		case 22:
			return "MINIGAME_SP_MILKCOW_PRONGHORN_RANCH";
		case 23:
			return "MINIGAME_SP_POKER_BLACKWATER";
		case 24:
			return "MINIGAME_SP_POKER_CAMP";
		case 25:
			return "MINIGAME_SP_POKER_CLEMENS_POINT";
		case 26:
			return "MINIGAME_SP_POKER_HORSESHOE_OVERLOOK";
		case 27:
			return "MINIGAME_SP_POKER_SAINT_DENIS";
		case 28:
			return "MINIGAME_SP_POKER_SERENDIPITY_IND3";
		case 29:
			return "MINIGAME_SP_POKER_SHADY_BELLE";
		case 30:
			return "MINIGAME_SP_POKER_SWANSONS_STATION";
		case 31:
			return "MINIGAME_SP_POKER_TUMBLEWEED";
		case 32:
			return "MINIGAME_SP_POKER_VALENTINE";
		default:
			break;
	}
	return "";
}

void func_1115(int iParam0, bool bParam1)
{
	if (!func_234(iParam0))
	{
		return;
	}
	if (!func_508(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_237(iParam0) == 0)
		{
		}
		else if (!_0x01f4d242765c6b24(func_237(iParam0)))
		{
			_0xca41e86545413b5b(func_239(iParam0), func_315(iParam0), func_358(iParam0), func_237(iParam0), Global_36);
		}
	}
	func_246(iParam0, 1);
	bParam1 = bParam1;
}

void func_1116(int iParam0, bool bParam1)
{
	if ((*Global_1898346)[iParam0]->f_2 == 0 || bParam1)
	{
		(*Global_1898346)[iParam0]->f_2 = func_577(Global_1898330[iParam0]);
		func_1819((*Global_1898346)[iParam0]->f_2, &((*Global_1898346)[iParam0]->f_4), &((*Global_1898346)[iParam0]->f_5), &((*Global_1898346)[iParam0]->f_3));
	}
}

int func_1117(int iParam0)
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

void func_1118(int iParam0)
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

void func_1119()
{
	_0x243cede8f916b994();
	Global_1934765->f_338 = -1;
}

void func_1120(bool bParam0, float fParam1)
{
	if (is_bit_set(Global_1934765->f_301, 1))
	{
		return;
	}
	iVar0 = func_1121();
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
	if (func_1820(&(Global_1934765->f_318[iVar0]), bParam0, fParam1))
	{
		Global_1934765->f_338 = iVar0;
	}
}

int func_1121()
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
		iVar3 = func_1821(Global_1934765->f_318[iVar2]->f_1);
		if (iVar3 > iVar0)
		{
			iVar0 = iVar3;
			iVar1 = iVar2;
		}
		iVar2 = (iVar2 + -1);
	}
	return iVar1;
}

bool func_1122(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return false;
	}
	return false;
}

var func_1123(var uParam0, var uParam1, var uParam2)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

float func_1124(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_1125(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1126(int iParam0, var uParam1)
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
				if (func_128(uParam1[iVar0]))
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

bool func_1127(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	if (Global_1572887->f_12 == -1)
	{
		return func_370((*Global_1835011)[iParam0]->f_1, 1);
	}
	return (_unlock_is_unlocked((*Global_1835011)[iParam0]->f_2) && !_unlock_is_visible((*Global_1835011)[iParam0]->f_2));
}

int func_1128(int iParam0)
{
	if (!func_530(iParam0))
	{
		return 0;
	}
	if (Global_40.f_358[iParam0]->f_5 & 2 != 0)
	{
		return 5;
	}
	if (&Global_40.f_358[iParam0] > 0 && get_wanted_level_threshold(5) > 0)
	{
		return func_1822(&(Global_40.f_358[iParam0]));
	}
	return 0;
}

void func_1129(int iParam0, int iParam1)
{
	if (!func_530(iParam0))
	{
		return;
	}
	if (!func_535(iParam0, iParam1))
	{
	}
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_358[iParam0]->f_5 = (Global_40.f_358[iParam0]->f_5 || iParam1);
		return;
	}
	Global_1058888->f_42266[iParam0]->f_5 = (Global_1058888->f_42266[iParam0]->f_5 || iParam1);
}

void func_1130(int iParam0, int iParam1)
{
	if (!func_530(iParam0))
	{
		return;
	}
	if (Global_1572887->f_12 == -1)
	{
		Global_40.f_358[iParam0]->f_5 = (Global_40.f_358[iParam0]->f_5 - (Global_40.f_358[iParam0]->f_5 && iParam1));
		return;
	}
	Global_1058888->f_42266[iParam0]->f_5 = (Global_1058888->f_42266[iParam0]->f_5 - (Global_1058888->f_42266[iParam0]->f_5 && iParam1));
}

void func_1131(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		_0x563fcb6620523917(func_1823(iParam0), -1482012664);
	}
	else if (_0xe38450dbcbc70e3d(func_1823(iParam0), -1305340593) || _0xe38450dbcbc70e3d(func_1823(iParam0), -1482012664))
	{
		_0x6786d7afac3162b3(func_1823(iParam0));
	}
}

void func_1132(int iParam0)
{
	if (does_entity_exist(&(iLocal_94[iParam0])))
	{
		delete_object(iLocal_94[iParam0]);
	}
}

void func_1133(int* iParam0)
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
					func_918(&(iVar1[iVar0]), get_offset_from_entity_in_world_coords(*iParam0, 3f, 3f, 0f), get_entity_heading(*iParam0), 2, 1073741824);
				}
			}
		}
		iVar0++;
	}
}

void func_1134(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 - (*iParam0 && iParam1));
}

void func_1135(var uParam0, int iParam1, bool bParam2)
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

void func_1136(var uParam0, int iParam1)
{
	func_549(&(uParam0->f_64), iParam1);
}

void func_1137(var uParam0, int iParam1)
{
	func_464(&(uParam0->f_64), iParam1);
}

bool func_1138(int iParam0)
{
	if (!func_529(iParam0))
	{
		return false;
	}
	if (does_blip_exist((*Global_1360165)[iParam0]->f_2))
	{
		return true;
	}
	return false;
}

bool func_1139(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_529(iParam0))
		{
			return false;
		}
	}
	func_1808(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_1140(int iParam0, var uParam1)
{
	if (!func_529(iParam0))
	{
		return;
	}
	if ((*Global_1360165)[iParam0]->f_12 == 0 || func_555(&((*Global_1360165)[iParam0]->f_12), 1))
	{
		if (does_blip_exist(*uParam1))
		{
			func_1824(iParam0);
		}
		return;
	}
	iVar0 = 0;
	iVar1 = 0;
	bVar2 = func_555(&((*Global_1360165)[iParam0]->f_12), 512);
	if (func_555(&((*Global_1360165)[iParam0]->f_12), 128))
	{
		iVar0 = 942020339;
	}
	else if (func_555(&((*Global_1360165)[iParam0]->f_12), 8))
	{
		iVar0 = -546708623;
	}
	if (func_555(&((*Global_1360165)[iParam0]->f_12), 256))
	{
		iVar1 = func_1825(-1739349092);
	}
	if (!does_blip_exist(*uParam1))
	{
		*uParam1 = _blip_add_for_entity(422991367, func_650(iParam0));
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
		if (bVar2 && !func_241(0, 0, 1))
		{
			_0xedd964b7984ac291(*uParam1, -1944754404);
			if (func_555(&((*Global_1360165)[iParam0]->f_12), 1024))
			{
				_blip_set_modifier(*uParam1, -46775694);
			}
			if (func_555(&((*Global_1360165)[iParam0]->f_12), 2048))
			{
				_blip_set_modifier(*uParam1, 724623647);
			}
		}
		if (iVar1 != 0)
		{
			set_blip_sprite(*uParam1, iVar1, true);
		}
		if (!is_string_null_or_empty(&((*Global_1360165)[iParam0]->f_14)) && func_555(&((*Global_1360165)[iParam0]->f_12), 8))
		{
			set_blip_name_from_text_file(*uParam1, &((*Global_1360165)[iParam0]->f_14));
		}
		else
		{
			set_blip_name_from_text_file(*uParam1, func_367(iParam0, 0));
		}
	}
}

bool func_1141(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_1142(int iParam0)
{
	iVar0 = func_576(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1826(iVar0);
}

int func_1143(int iParam0, int iParam1)
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
			func_1827(iVar2);
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

void func_1144()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_1145(bool bParam0)
{
	if (func_26() == -1)
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

int func_1146(int iParam0)
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

void func_1147(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_1148(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_1149(int iParam0, int iParam1)
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
			func_1828((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1828(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_234(&(Global_1898164->f_1[0])))
	{
		func_246(&(Global_1898164->f_1[0]), 3);
	}
}

void func_1150(int iParam0, int iParam1, bool bParam2)
{
	if (!func_593(iParam0))
	{
		return;
	}
	func_1829(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_1151(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_1152(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 || iParam1);
}

void func_1153(float fParam0, int iParam1)
{
	*fParam0 = (*fParam0 - (*fParam0 && iParam1));
}

bool func_1154()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_1155(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1830(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_1156(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return -252.3096f, 702.9613f, 113.3179f;
				case 1:
					return -249.9266f, 687.0563f, 113.2788f;
				case 2:
					return -251.1038f, 701.8745f, 112.3475f;
				case 3:
					return -236.2221f, 668.682f, 112.3191f;
				case 4:
					return -253.0551f, 693.7741f, 113.3359f;
				case 5:
					return -253.7914f, 695.1678f, 113.322f;
				case 6:
					return -246.4134f, 701.1125f, 112.4094f;
				case 7:
					return -253.2126f, 705.5544f, 113.3707f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return -282.8925f, 790.331f, 117.7315f;
				case 1:
					return -281.7351f, 784.8924f, 119.5017f;
				case 2:
					return -281.6916f, 779.015f, 119.5039f;
				case 3:
					return -253.9615f, 756.6658f, 115.9411f;
				case 4:
					return -283.045f, 785.9851f, 119.5022f;
				case 5:
					return -281.6383f, 785.1097f, 119.3718f;
				case 6:
					return -281.843f, 784.6268f, 119.4839f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -269.2571f, 794.8626f, 117.6375f;
				case 1:
					return -281.7351f, 784.8924f, 118.5273f;
				case 2:
					return -281.2335f, 790.0981f, 117.6527f;
				case 3:
					return -279.6144f, 795.6552f, 117.6843f;
				case 4:
					return -281.9369f, 790.1052f, 117.6667f;
				case 5:
					return -272.9308f, 798.0712f, 117.9558f;
				case 6:
					return -271.2182f, 798.1655f, 117.8978f;
				case 7:
					return -269.0694f, 798.9821f, 117.9289f;
				case 8:
					return 740.7782f, 296.4161f, 116.965f;
				case 9:
					return 741.2559f, 295.3463f, 117.1728f;
				case 10:
					return 741.6666f, 296.1009f, 116.9253f;
				case 11:
					return 726.3688f, 349.4747f, 108.987f;
				case 12:
					return 738.3737f, 337.2368f, 110.9366f;
				case 13:
					return 740.2429f, 358.8949f, 110.8599f;
				case 14:
					return 706.3668f, 350.9974f, 108.6133f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 664.1329f, 172.6203f, 153.5628f;
				case 1:
					return 661.4426f, 176.5759f, 152.8627f;
				case 2:
					return 665.797f, 164.3798f, 154.136f;
				case 3:
					return 663.8301f, 165.3756f, 153.8111f;
				case 4:
					return 712.9971f, 322.588f, 112.3295f;
				case 5:
					return 712.5591f, 321.0757f, 113.0899f;
				case 6:
					return 713.601f, 323.9071f, 111.7918f;
				case 7:
					return 688.9284f, 355.7571f, 108.1725f;
				case 8:
					return 694.6575f, 349.3205f, 108.1652f;
				case 9:
					return 696.0237f, 361.2638f, 108.5613f;
				case 10:
					return 666.377f, 353.1329f, 106.6313f;
				case 11:
					return 661.886f, 174.3513f, 153.2084f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 664.9315f, 169.2724f, 153.8708f;
				case 1:
					return 663.1844f, 168.605f, 153.6392f;
				case 2:
					return 665.7246f, 160.0238f, 154.1985f;
				case 3:
					return 663.3418f, 157.533f, 153.8865f;
				case 4:
					return 624.0121f, 350.7485f, 106.0671f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 656.4083f, 339.7177f, 106.7083f;
				case 1:
					return 659.8319f, 336.4385f, 107.4111f;
				case 2:
					return 652.4968f, 341.9535f, 106.1755f;
				case 3:
					return 650.6411f, 337.3174f, 107.1511f;
				case 4:
					return 624.0121f, 350.7485f, 106.0671f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return -214.6424f, 636.534f, 111.9969f;
				case 1:
					return -155.5499f, 592.4575f, 111.9947f;
				case 2:
					return -159.8678f, 589.8353f, 111.7941f;
				case 3:
					return -157.0996f, 591.382f, 111.9994f;
				case 4:
					return -164.4367f, 597.4089f, 111.9532f;
				case 5:
					return -265.9929f, 762.8423f, 117.1811f;
				case 6:
					return -265.4187f, 760.6313f, 117.1548f;
				case 7:
					return -269.3429f, 762.2267f, 117.2596f;
				case 8:
					return -268.649f, 760.1002f, 117.1548f;
				case 9:
					return -266.2583f, 759.4707f, 117.2224f;
				case 10:
					return -266.9015f, 761.2302f, 117.2f;
				case 11:
					return -267.7296f, 763.3611f, 117.1925f;
				case 12:
					return -267.2462f, 762.225f, 117.1584f;
				case 13:
					return -266.7687f, 760.3405f, 117.2463f;
				case 14:
					return -218.4696f, 642.0381f, 111.9397f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return -221.508f, 639.6387f, 112.8278f;
				case 1:
					return -220.4209f, 640.9779f, 112.8523f;
				case 2:
					return -242.8912f, 771.6686f, 118.8876f;
				case 3:
					return -243.3682f, 770.5121f, 118.8798f;
				case 4:
					return -216.1581f, 652.8699f, 112.1419f;
				case 5:
					return -214.6753f, 654.5234f, 112.1562f;
				case 6:
					return -226.2787f, 644.1361f, 113.2068f;
				case 7:
					return -228.0019f, 641.8856f, 113.2596f;
				case 8:
					return -224.1041f, 647.3511f, 113.6721f;
				case 9:
					return -238.6611f, 769.6683f, 118.8898f;
				case 10:
					return -232.0979f, 656.4348f, 112.3291f;
				case 11:
					return -247.3266f, 764.7015f, 117.0971f;
				case 12:
					return -220.8579f, 647.16f, 113.134f;
				case 13:
					return -222.2431f, 643.9079f, 113.0883f;
				case 14:
					return -224.9377f, 643.6761f, 113.1621f;
				case 15:
					return -225.6451f, 642.8851f, 113.1511f;
				case 16:
					return -225.49f, 644.4158f, 113.2129f;
				case 17:
					return -248.9964f, 767.1713f, 116.5289f;
				case 18:
					return -215.1932f, 653.9561f, 112.1503f;
				case 19:
					return -244.8252f, 766.3939f, 117.2069f;
				case 20:
					return -226.4949f, 643.9294f, 113.3231f;
				case 21:
					return -226.4394f, 644.1287f, 113.4149f;
				case 22:
					return -223.0967f, 647.0212f, 90.0629f;
				case 23:
					return -216.1532f, 652.8558f, 112.35f;
				case 24:
					return -214.6435f, 654.485f, 112.3493f;
				case 25:
					return -272.6376f, 787.3336f, 117.7017f;
				case 26:
					return -272.6701f, 787.3181f, 117.5337f;
				case 27:
					return -273.0692f, 788.1386f, 117.586f;
				case 28:
					return -273.3577f, 787.6426f, 117.5179f;
				case 29:
					return -273.378f, 786.9029f, 117.5511f;
				case 30:
					return -272.9194f, 786.536f, 118.6359f;
				case 31:
					return -244.0719f, 764.5172f, 117.1656f;
				case 32:
					return -272.2379f, 789.8417f, 118.2671f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -242.5117f, 770.2468f, 118.0574f;
				case 1:
					return -243.8712f, 767.9137f, 118.0411f;
				case 2:
					return -242.8875f, 771.6617f, 117.7267f;
				case 3:
					return -243.3725f, 770.5026f, 117.7101f;
				case 4:
					return -249.89f, 765.7247f, 116.4587f;
				case 5:
					return -250.6496f, 767.7266f, 116.4819f;
				case 6:
					return -238.6626f, 769.668f, 118.0155f;
				case 7:
					return -241.5451f, 768.3976f, 117.6831f;
				case 8:
					return -243.1064f, 767.82f, 117.6961f;
				case 9:
					return -254.6371f, 765.9738f, 117.9774f;
				case 10:
					return -254.9038f, 762.5291f, 117.0548f;
				case 11:
					return -254.6371f, 765.9815f, 117.2596f;
				case 12:
					return -254.9038f, 762.5291f, 117.0548f;
				case 13:
					return -256.798f, 762.8041f, 118.0224f;
				case 14:
					return -253.3971f, 766.3572f, 117.2f;
				case 15:
					return -252.2875f, 759.0593f, 116.6925f;
				case 16:
					return -251.0243f, 759.4327f, 116.7463f;
				case 17:
					return -249.6928f, 760.4059f, 116.9584f;
				case 18:
					return -222.717f, 707.1282f, 112.4338f;
				case 19:
					return -222.717f, 707.1282f, 112.4338f;
				case 20:
					return -229.2026f, 716.1231f, 112.7616f;
				case 21:
					return -246.4472f, 764.4173f, 118.1015f;
				case 22:
					return -252.5414f, 762.663f, 116.5798f;
				case 23:
					return -247.1983f, 766.3206f, 118.1232f;
				case 24:
					return -253.0219f, 764.3751f, 117.0912f;
				case 25:
					return -255.6016f, 759.5001f, 117.2211f;
				case 26:
					return -253.4299f, 766.2551f, 117.1972f;
				case 27:
					return -254.9716f, 762.3998f, 117.0624f;
				case 28:
					return -253.5381f, 764.3587f, 117.0354f;
				case 29:
					return -252.9984f, 762.412f, 116.8601f;
				case 30:
					return -250.6942f, 767.7244f, 116.6791f;
				case 31:
					return -249.9407f, 765.654f, 116.6521f;
				case 32:
					return -261.5777f, 716.4105f, 113.0489f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return -246.579f, 764.0645f, 117.1353f;
				case 1:
					return -247.2618f, 760.7841f, 115.8579f;
				case 2:
					return -249.4829f, 767.2446f, 116.5549f;
				case 3:
					return -250.0873f, 768.6909f, 116.5437f;
				case 4:
					return -280.2159f, 786.0538f, 118.5034f;
				case 5:
					return -279.0236f, 791.4504f, 117.8394f;
				case 6:
					return -277.4184f, 785.4153f, 121.4297f;
				case 7:
					return -280.3818f, 785.3394f, 121.4297f;
				case 8:
					return -283.7753f, 805.5228f, 118.3859f;
				case 9:
					return -284.9003f, 783.3358f, 117.7225f;
				case 10:
					return -250.9287f, 751.064f, 115.6454f;
				case 11:
					return -244.3763f, 732.2015f, 115.0793f;
				case 12:
					return -263.8763f, 813.2385f, 118.2133f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return -264.5139f, 784.3729f, 117.5989f;
				case 1:
					return -266.779f, 784.2645f, 118.5541f;
				case 2:
					return -269.0718f, 785.3056f, 118.5303f;
				case 3:
					return -268.6366f, 789.293f, 118.5539f;
				case 4:
					return -272.6718f, 789.1424f, 118.2841f;
				case 5:
					return -266.2462f, 783.015f, 117.6182f;
				case 6:
					return -268.0056f, 781.0813f, 117.7604f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return -330.3462f, 782.4701f, 115.2046f;
				case 1:
					return -338.0434f, 779.8056f, 115.6526f;
				case 2:
					return -338.9293f, 778.3217f, 115.5929f;
				case 3:
					return -337.0293f, 778.5904f, 114.7105f;
				case 4:
					return -356.9142f, 751.72f, 115.4911f;
				case 5:
					return -353.5039f, 754.2084f, 116.5279f;
				case 6:
					return -354.6166f, 752.8134f, 116.3888f;
				case 7:
					return -337.2531f, 783.0443f, 115.435f;
				case 8:
					return -340.1744f, 812.4821f, 115.8918f;
				case 9:
					return -338.749f, 820.718f, 116.421f;
				case 10:
					return -329.806f, 826.407f, 117.041f;
				case 11:
					return -338.7493f, 820.7178f, 116.4211f;
				case 12:
					return -329.8062f, 826.4068f, 117.041f;
				case 13:
					return -329.7081f, 786.0172f, 115.2508f;
				case 14:
					return -351.8123f, 754.4643f, 115.512f;
				case 15:
					return -353.2662f, 755.9388f, 115.4541f;
			}
			break;
		case 12:
			switch (iParam1)
			{
				case 0:
					return -353.9173f, 754.1068f, 115.4359f;
				case 1:
					return -353.1181f, 754.768f, 115.4986f;
				case 2:
					return -352.468f, 752.5153f, 116.4776f;
				case 3:
					return -355.3854f, 751.9268f, 115.4988f;
				case 4:
					return -356.9142f, 751.72f, 115.4912f;
				case 5:
					return -353.5795f, 752.6536f, 116.5225f;
				case 6:
					return -353.3778f, 754.0822f, 116.5349f;
				case 7:
					return -317.7221f, 756.7958f, 117.0157f;
				case 8:
					return -312.1672f, 757.5614f, 116.9443f;
				case 9:
					return -309.6315f, 726.6699f, 116.8848f;
			}
			break;
		case 13:
			switch (iParam1)
			{
				case 0:
					return -350.4049f, 754.6603f, 115.4719f;
				case 1:
					return -333.7856f, 751.7488f, 115.8745f;
				case 2:
					return -333.826f, 757.0792f, 115.8928f;
				case 3:
					return -329.5779f, 746.1633f, 115.9959f;
				case 4:
					return -252.4225f, 771.7356f, 116.4625f;
				case 5:
					return -264.1305f, 783.0623f, 117.5638f;
				case 6:
					return -248.5638f, 758.5924f, 115.7756f;
				case 7:
					return -328.8723f, 756.4438f, 119.0234f;
			}
			break;
		case 14:
			switch (iParam1)
			{
				case 0:
					return -239.0759f, 769.4443f, 118.517f;
				case 1:
					return -243.5548f, 771.32f, 117.8762f;
				case 2:
					return -243.4767f, 771.036f, 117.8698f;
				case 3:
					return -242.1266f, 768.0589f, 117.8857f;
				case 4:
					return -242.4682f, 767.8655f, 117.8856f;
				case 5:
					return -238.2597f, 770.7559f, 117.9733f;
				case 6:
					return -243.319f, 770.4531f, 117.0715f;
				case 7:
					return -242.9119f, 771.7377f, 117.0752f;
				case 8:
					return -243.144f, 771.3536f, 117.8828f;
			}
			break;
		case 15:
			switch (iParam1)
			{
				case 0:
					return -272.3132f, 785.5584f, 118.4274f;
				case 1:
					return -281.6055f, 780.0641f, 119.6039f;
				case 2:
					return 664.7811f, 165.4021f, 153.8954f;
				case 3:
					return 624.0121f, 350.7485f, 106.0671f;
				case 4:
					return -227.76f, 643.94f, 112.42f;
				case 5:
					return -236.39f, 651.5069f, 112.3199f;
				case 6:
					return -249.8058f, 766.8107f, 117.5798f;
				case 7:
					return -243.6883f, 771.1993f, 117.885f;
				case 8:
					return -254.0792f, 752.7611f, 115.8797f;
				case 9:
					return -272.2295f, 789.762f, 117.5958f;
				case 10:
					return -353.1236f, 800.972f, 115.1507f;
				case 11:
					return -242.3277f, 735.3443f, 114.9302f;
				case 12:
					return -262.2733f, 810.8483f, 118.1397f;
			}
			break;
		case 16:
			switch (iParam1)
			{
				case 0:
					return -248.2435f, 761.0324f, 116.1336f;
				case 1:
					return -247.5344f, 758.6473f, 115.7963f;
				case 2:
					return -247.1282f, 767.2695f, 117.1462f;
				case 3:
					return -249.9004f, 768.4209f, 116.5489f;
				case 4:
					return -260.5661f, 768.8963f, 117.1213f;
				case 5:
					return -251.9738f, 770.7692f, 116.4664f;
				case 6:
					return -251.3332f, 774.3642f, 117.1636f;
				case 7:
					return -265.6097f, 774.2269f, 117.1703f;
				case 8:
					return -267.4345f, 773.1454f, 117.2583f;
				case 9:
					return -262.3511f, 775.7375f, 117.0142f;
				case 10:
					return -270.4473f, 781.3002f, 117.6075f;
				case 11:
					return -273.5459f, 784.9219f, 117.5535f;
				case 12:
					return -266.8325f, 781.861f, 118.5354f;
				case 13:
					return -354.4044f, 753.1688f, 115.4944f;
				case 14:
					return -351.98f, 754.7647f, 115.5089f;
				case 15:
					return -258.7909f, 769.937f, 117.144f;
				case 16:
					return -249.538f, 767.0911f, 117.0746f;
				case 17:
					return -251.1303f, 775.8832f, 117.3229f;
			}
			break;
		case 17:
			switch (iParam1)
			{
				case 0:
					return -255.8326f, 757.4046f, 116.1651f;
				case 1:
					return -259.1286f, 765.8972f, 116.5493f;
				case 2:
					return -258.3127f, 762.4373f, 116.3639f;
				case 3:
					return -278.4505f, 799.6464f, 118.5469f;
				case 4:
					return -274.1595f, 786.8164f, 121.4297f;
				case 5:
					return -247.1043f, 748.8842f, 115.327f;
				case 6:
					return -255.3636f, 756.116f, 116.5134f;
				case 7:
					return -266.6071f, 776.5084f, 117.6696f;
				case 8:
					return -263.3853f, 777.8595f, 117.3875f;
				case 9:
					return -274.5356f, 778.7139f, 118.7923f;
				case 10:
					return -274.1595f, 786.8164f, 121.4297f;
				case 11:
					return -278.4505f, 799.6464f, 118.5469f;
				case 12:
					return -292.2364f, 796.7747f, 117.8433f;
				case 13:
					return -285.4316f, 788.2151f, 117.6289f;
				case 14:
					return -357.0136f, 790.9171f, 115.3693f;
				case 15:
					return -350.1624f, 788.1295f, 115.0143f;
				case 16:
					return -355.173f, 784.9497f, 115.1021f;
				case 17:
					return -346.2721f, 790.7936f, 114.9696f;
				case 18:
					return -353.0561f, 776.0261f, 115.0642f;
				case 19:
					return -326.3806f, 756.5066f, 117.0513f;
				case 20:
					return -330.119f, 753.3727f, 116.8369f;
				case 21:
					return -324.1083f, 744.4869f, 117.2629f;
				case 22:
					return -353.5468f, 793.4316f, 115.387f;
				case 23:
					return -341.1505f, 794.3319f, 116.1978f;
				case 24:
					return -316.2675f, 775.1089f, 117.0192f;
				case 25:
					return -317.4433f, 799.7122f, 116.356f;
				case 26:
					return -251.2585f, 743.8779f, 117.0841f;
				case 27:
					return -243.2962f, 741.7761f, 114.9987f;
				case 28:
					return -291.2788f, 827.9962f, 118.742f;
				case 29:
					return -264.4536f, 810.3815f, 117.8287f;
				case 30:
					return -266.6476f, 813.2062f, 117.9369f;
				case 31:
					return -318.5629f, 760.5792f, 120.6062f;
			}
			break;
		case 18:
			switch (iParam1)
			{
				case 0:
					return -236.2796f, 671.6187f, 112.3191f;
				case 1:
					return -237.2955f, 669.2944f, 112.3152f;
				case 2:
					return -232.038f, 669.1342f, 112.3122f;
				case 3:
					return -235.6726f, 666.3441f, 112.3104f;
				case 4:
					return -234.4291f, 664.4193f, 112.305f;
				case 5:
					return -238.8451f, 662.6245f, 112.4176f;
				case 6:
					return -236.8032f, 660.7002f, 112.3625f;
				case 7:
					return -241.7717f, 665.4426f, 112.4038f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

float func_1157(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 20.32f;
				case 1:
					return -174.2f;
				case 2:
					return 10.68f;
				case 3:
					return 39.2806f;
				case 4:
					return 24.7158f;
				case 5:
					return 44.4154f;
				case 6:
					return 28.601f;
				case 7:
					return 1.96f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 179.345f;
				case 1:
					return 359.85f;
				case 2:
					return -2.62f;
				case 3:
					return 372.0298f;
				case 4:
					return -180f;
				case 5:
					return 90.96f;
				case 6:
					return -70.6f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -0.12f;
				case 1:
					return -0.155f;
				case 2:
					return -186.68f;
				case 3:
					return 3.88f;
				case 4:
					return -90.62f;
				case 5:
					return -82.18f;
				case 6:
					return 10f;
				case 7:
					return 10f;
				case 8:
					return 68.2921f;
				case 9:
					return 67.1155f;
				case 10:
					return 71.1155f;
				case 11:
					return 82.665f;
				case 12:
					return 76.23f;
				case 13:
					return 78.64f;
				case 14:
					return 84.5f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return -4.3f;
				case 1:
					return -0.935f;
				case 2:
					return -353.98f;
				case 3:
					return -351.65f;
				case 4:
					return 62.2921f;
				case 5:
					return 67.1155f;
				case 6:
					return 63.1155f;
				case 7:
					return 85.29f;
				case 8:
					return 84.655f;
				case 9:
					return 80.64f;
				case 10:
					return 87f;
				case 11:
					return -358.38f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 23.0038f;
				case 1:
					return 10.32f;
				case 2:
					return 179.87f;
				case 3:
					return -369.71f;
				case 4:
					return 62f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 79.0038f;
				case 1:
					return 70.32f;
				case 2:
					return 75.87f;
				case 3:
					return -281.71f;
				case 4:
					return 62f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 56.3065f;
				case 1:
					return 57.8634f;
				case 2:
					return 45.3815f;
				case 3:
					return 44.8884f;
				case 4:
					return 51.9849f;
				case 5:
					return -79.39f;
				case 6:
					return -78.92f;
				case 7:
					return -77.64f;
				case 8:
					return -76.42f;
				case 9:
					return -76.02f;
				case 10:
					return -75.07f;
				case 11:
					return -75.92f;
				case 12:
					return -76.52f;
				case 13:
					return -74.83f;
				case 14:
					return 70.5644f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 46.84f;
				case 1:
					return 51.17f;
				case 2:
					return 126.98f;
				case 3:
					return -4.87f;
				case 4:
					return 47.84f;
				case 5:
					return 50.17f;
				case 6:
					return 101.83f;
				case 7:
					return 46.14f;
				case 8:
					return 51.06f;
				case 9:
					return 113.58f;
				case 10:
					return 300.3971f;
				case 11:
					return 109.67f;
				case 12:
					return 319.56f;
				case 13:
					return -27.57f;
				case 14:
					return -71.69f;
				case 15:
					return -73.17f;
				case 16:
					return -71.03f;
				case 17:
					return 114f;
				case 18:
					return -46.33f;
				case 19:
					return 109.67f;
				case 20:
					return 177.84f;
				case 21:
					return 7.88f;
				case 22:
					return 55.72f;
				case 23:
					return 48f;
				case 24:
					return 48f;
				case 25:
					return 323.49f;
				case 26:
					return 143.47f;
				case 27:
					return 41.7f;
				case 28:
					return 68.1f;
				case 29:
					return 342.09f;
				case 30:
					return 58.26f;
				case 31:
					return 110.05f;
				case 32:
					return 40.65f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return -21.79f;
				case 1:
					return 20.92f;
				case 2:
					return 128.17f;
				case 3:
					return -8.97f;
				case 4:
					return -71.33f;
				case 5:
					return -69.66f;
				case 6:
					return 112.84f;
				case 7:
					return 132.99f;
				case 8:
					return -64.86f;
				case 9:
					return -39.39f;
				case 10:
					return -97.42f;
				case 11:
					return -45.64f;
				case 12:
					return -97.42f;
				case 13:
					return 13.98f;
				case 14:
					return -97.07f;
				case 15:
					return -34.42f;
				case 16:
					return 31.17f;
				case 17:
					return 58.48f;
				case 18:
					return 39.7854f;
				case 19:
					return 39.7854f;
				case 20:
					return 39.7854f;
				case 21:
					return 98.04f;
				case 22:
					return -75.95f;
				case 23:
					return 103.62f;
				case 24:
					return -71.8f;
				case 25:
					return -105.98f;
				case 26:
					return -126.5f;
				case 27:
					return -55.16f;
				case 28:
					return -83.94f;
				case 29:
					return -126.5f;
				case 30:
					return -68.5f;
				case 31:
					return -70.5f;
				case 32:
					return 305.01f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 49.5332f;
				case 1:
					return 42.7462f;
				case 2:
					return 20.3529f;
				case 3:
					return 19.3855f;
				case 4:
					return 261.1934f;
				case 5:
					return 273.0058f;
				case 6:
					return 271.9934f;
				case 7:
					return 270.5506f;
				case 8:
					return 193.0701f;
				case 9:
					return 424.9934f;
				case 10:
					return 63.505f;
				case 11:
					return -32.705f;
				case 12:
					return 214.585f;
			}
			break;
		case 10:
			switch (iParam1)
			{
				case 0:
					return 66.24f;
				case 1:
					return 23.24f;
				case 2:
					return 14.65f;
				case 3:
					return 8.18f;
				case 4:
					return 39.13f;
				case 5:
					return 23.64f;
				case 6:
					return 15.56f;
			}
			break;
		case 11:
			switch (iParam1)
			{
				case 0:
					return 94.9095f;
				case 1:
					return 105.62f;
				case 2:
					return 135.3966f;
				case 3:
					return 111.77f;
				case 4:
					return -14.83f;
				case 5:
					return 247.07f;
				case 6:
					return 264.02f;
				case 7:
					return 104.97f;
				case 8:
					return 131.76f;
				case 9:
					return 95.893f;
				case 10:
					return 95.655f;
				case 11:
					return 95.8927f;
				case 12:
					return 95.6549f;
				case 13:
					return 98.9095f;
				case 14:
					return -4.91f;
				case 15:
					return -10.29f;
			}
			Jump @4898; //curOff = 3156
			switch (iParam1)
			{
				case 0:
					return -81.415f;
				case 1:
					return -203.64f;
				case 2:
					return -53.73f;
				case 3:
					return -37.73f;
				case 4:
					return -14.83f;
				case 5:
					return -160.51f;
				case 6:
					return -126.28f;
				case 7:
					return 99.3631f;
				case 8:
					return 93.1256f;
				case 9:
					return 19.3782f;
			}
			Jump @4898; //curOff = 3337
			switch (iParam1)
			{
				case 0:
					return 276.954f;
				case 1:
					return 101.5904f;
				case 2:
					return 106.6335f;
				case 3:
					return 99.285f;
				case 4:
					return 28.37f;
				case 5:
					return 37.805f;
				case 6:
					return 123.625f;
				case 7:
					return 99.885f;
			}
			Jump @4898; //curOff = 3484
			switch (iParam1)
			{
				case 0:
					return 74.06f;
				case 1:
					return -69.92f;
				case 2:
					return -69.92f;
				case 3:
					return -65.65f;
				case 4:
					return -85.2f;
				case 5:
					return 67.6f;
				case 6:
					return 174.17f;
				case 7:
					return -46.66f;
				case 8:
					return -154.24f;
			}
			Jump @4898; //curOff = 3648
			switch (iParam1)
			{
				case 0:
					return 0f;
				case 1:
					return -2.62f;
				case 2:
					return -351.48f;
				case 3:
					return 62f;
				case 4:
					return 44.5644f;
				case 5:
					return 229.5067f;
				case 6:
					return -70.5f;
				case 7:
					return -70.5f;
				case 8:
					return 45.975f;
				case 9:
					return 37.335f;
				case 10:
					return -70.5f;
				case 11:
					return 113.3622f;
				case 12:
					return 214.755f;
			}
			Jump @4898; //curOff = 3876
			switch (iParam1)
			{
				case 0:
					return 102.735f;
				case 1:
					return 113.775f;
				case 2:
					return 110.16f;
				case 3:
					return 110.195f;
				case 4:
					return 27.5f;
				case 5:
					return 26f;
				case 6:
					return 35f;
				case 7:
					return 25.5f;
				case 8:
					return 27.5f;
				case 9:
					return 45f;
				case 10:
					return 50.045f;
				case 11:
					return 92.16f;
				case 12:
					return 10.79f;
				case 13:
					return -26f;
				case 14:
					return -19.5f;
				case 15:
					return 225.0188f;
				case 16:
					return 102.43f;
				case 17:
					return 124.255f;
			}
			Jump @4898; //curOff = 4193
			switch (iParam1)
			{
				case 0:
					return 145.97f;
				case 1:
					return -79.31f;
				case 2:
					return -81.815f;
				case 3:
					return -169.5f;
				case 4:
					return -91.5f;
				case 5:
					return 365.97f;
				case 6:
					return -24.85f;
				case 7:
					return -148f;
				case 8:
					return -152.975f;
				case 9:
					return -152f;
				case 10:
					return -91.5f;
				case 11:
					return -169.5f;
				case 12:
					return -82f;
				case 13:
					return -89.5f;
				case 14:
					return -131.76f;
				case 15:
					return -99.5f;
				case 16:
					return -99.5f;
				case 17:
					return -99.5f;
				case 18:
					return -99.5f;
				case 19:
					return 98.04f;
				case 20:
					return 77.34f;
				case 21:
					return 55.11f;
				case 22:
					return -151.2f;
				case 23:
					return 191.52f;
				case 24:
					return 10.885f;
				case 25:
					return -169.65f;
				case 26:
					return 8.415f;
				case 27:
					return 19.428f;
				case 28:
					return -84.04f;
				case 29:
					return 178.1973f;
				case 30:
					return 178.1973f;
				case 31:
					return 181.28f;
			}
			Jump @4898; //curOff = 4748
			switch (iParam1)
			{
				case 0:
					return 39.2806f;
				case 1:
					return 239.2806f;
				case 2:
					return 121.2806f;
				case 3:
					return 13.2806f;
				case 4:
					return 277.2806f;
				case 5:
					return 43.8655f;
				case 6:
					return -11.52f;
				case 7:
					return 165.6f;
			}
			return 0f;
		}

void func_1158(bool bParam0, bool bParam1)
{
	if (func_26() == -1)
	{
		func_1831();
	}
	else
	{
		return;
	}
	func_1832();
	Global_40.f_9.f_14 = func_328();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1833())
		{
			func_414(Global_1310720->f_1);
		}
		else if (func_1834() == func_415(Global_36, 1) && func_1835() != 2)
		{
			func_414(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_414(Global_36);
		}
		func_1836(Global_36, &vVar0, &uVar4);
		if (!func_1833())
		{
			if (func_1837(vVar0, Global_36) < func_1837(Global_40.f_9.f_7, Global_36))
			{
				func_414(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_415(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1836(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_274(Global_1935630, 8192);
	}
	func_1838();
}

bool func_1159(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (((func_297(cParam0->f_5423[iVar0]) && is_entity_an_object(&(cParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(cParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(cParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1160(int iParam0)
{
	func_1099(iParam0, 36, 1);
}

int func_1161(int iParam0, bool bParam1)
{
	if (!func_614(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1839(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

void func_1162(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_614(iParam0))
	{
		iVar1 = func_650(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_1840(iParam0);
		}
	}
	if (func_1139(iParam0, 5, 1))
	{
		set_ped_config_flag(func_650(iParam0), 137, true);
	}
}

void func_1163(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_529(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1098(iParam0, 50, 1);
		func_1098(iParam0, 48, 1);
		func_1098(iParam0, 49, 1);
		func_1098(iParam0, 51, 1);
		func_1098(iParam0, 52, 1);
		func_1098(iParam0, 54, 1);
		func_1098(iParam0, 55, 1);
	}
	else
	{
		func_1099(iParam0, 50, 1);
		func_1099(iParam0, 48, 1);
		func_1099(iParam0, 49, 1);
		func_1099(iParam0, 51, 1);
		if (bParam3)
		{
			func_1099(iParam0, 54, 1);
		}
		else
		{
			func_1098(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_1099(iParam0, 52, 1);
			if (bParam3)
			{
				func_1099(iParam0, 55, 1);
			}
		}
		else
		{
			func_1098(iParam0, 52, 1);
			if (!bParam3)
			{
				func_1098(iParam0, 55, 1);
			}
		}
	}
}

void func_1164(int iParam0, bool bParam1)
{
	if (!func_529(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_650(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_650(iParam0), 204, false);
	}
}

void func_1165(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_614(iParam0))
	{
		return;
	}
	if (func_615(iParam0))
	{
		if (!func_301(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_1139(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_1161(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_650(iParam0);
	if (((does_entity_exist(iVar1) && func_1841(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_1099(iParam0, 2, 1);
	}
	else
	{
		func_1842(iParam0);
		func_1099(iParam0, 1, 1);
	}
}

void func_1166(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_614(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

bool func_1167(int iParam0)
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

void func_1168(int iParam0)
{
	iParam0 = func_309(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_259(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	iVar6 = 0;
	while (iVar6 < 3)
	{
		iVar1 = func_1843(iVar6);
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

void func_1169(int iParam0, int iParam1)
{
	iParam0 = func_309(iParam0);
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

bool func_1170(int iParam0, int iParam1)
{
	iParam0 = func_309(iParam0);
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

void func_1171(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1845(func_1844(255), 109029619));
	}
	else if (func_347())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1198();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1172(int iParam0)
{
	iParam0 = func_309(iParam0);
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

void func_1173(var uParam0, bool bParam1)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1845(func_1844(255), 109029619));
	}
	else
	{
		sVar0 = "";
		if (bParam1)
		{
			sVar0 = "HORSE_BLIP_TEMPORARY";
		}
		else if (func_347())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1198())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1174(int iParam0)
{
	iParam0 = func_309(iParam0);
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

float func_1175(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1176(int iParam0)
{
	iParam0 = func_309(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1695(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1172(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1172(iParam0) + 1;
	fVar6 = func_1846(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1847(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1177(int iParam0)
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

void func_1178(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1179()
{
	if (func_381())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1180(int iParam0)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if ((Global_40.f_4283.f_325 + iParam0) < 0)
	{
		return;
	}
	func_1848((Global_40.f_4283.f_325 + iParam0));
}

void func_1181(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1179())
	{
		func_801(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_801(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_1182(int iParam0)
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

char* func_1183(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1184(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1185(int iParam0)
{
	func_1193(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1186(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1187(1);
	}
}

void func_1187(bool bParam0)
{
	if (bParam0)
	{
		func_1849(&(Global_40.f_12019.f_42), 1);
	}
	else
	{
		func_570(&(Global_40.f_12019.f_42), 1);
	}
}

int func_1188(int iParam0)
{
	if (!func_234(iParam0))
	{
		return -15;
	}
	return func_1850(iParam0);
}

bool func_1189(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_797(iParam1) || !func_797(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1190(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1191(int iParam0)
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

bool func_1192(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1193(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1851(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1194(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1195(int iParam0, int iParam1, bool bParam2)
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

int func_1196()
{
	iVar0 = func_655();
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

int func_1197(int iParam0)
{
	if (func_26() != -1)
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
	fVar1 = func_1804(absf(fVar1) < 1f, func_1804(fVar1 < 0f, -1f, 1f), fVar1);
	return ceil(fVar1);
}

bool func_1198()
{
	if (func_26() != -1)
	{
		return false;
	}
	if (Global_40.f_39 == 11966224)
	{
		return true;
	}
	return false;
}

int func_1199(int iParam0)
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

int func_1200()
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

void func_1201(int iParam0, bool bParam1, int iParam2)
{
	func_1852((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1853(iParam0);
}

void func_1202(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1854(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1203(bool bParam0)
{
	bVar3 = false;
	if (func_1855(&iVar4))
	{
		if (iVar4 <= 0)
		{
			return;
		}
		iVar5 = 0;
		while (iVar5 < iVar4)
		{
			if (func_1856(iVar5, &iVar2, &iVar0))
			{
				if (!func_13(iVar2, 0))
				{
				}
				else
				{
					iVar1 = func_1857(iVar2);
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
							if (func_693(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1196() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1196() >= 160;
								}
							}
							else
							{
								bVar3 = iVar0 == func_1858();
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

char* func_1204(int iParam0)
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

bool func_1205(int iParam0)
{
	return func_693(iParam0) == -427144552;
}

bool func_1206(int iParam0)
{
	if (func_26() != -1)
	{
		return false;
	}
	if (func_694(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1211(iParam0, &uVar0, 1, 0, 0);
	}
	return func_390(iParam0, 1, 0);
}

void func_1207(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_693(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_699(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_128(iVar0))
	{
		if (func_26() == -1)
		{
			func_700(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_678(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_753(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1208(int iParam0, int iParam1)
{
	if (func_9(iParam0, 58855631))
	{
		func_1358(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1209(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_13(iParam0, 0))
	{
		return 0;
	}
	if (!func_701(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_1145(bParam3), iParam0);
}

int func_1210(int iParam0, bool bParam1)
{
	if (func_705(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_1145(bParam1), iParam0, 0);
}

bool func_1211(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1859(&iParam0);
	if (!func_13(iParam0, 0))
	{
		return false;
	}
	if (!func_701(0))
	{
		bParam3 = true;
	}
	if (func_1205(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1341(0) };
			Var4.f_9 = -1591664384;
			if (!func_1234(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1235(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1342(iParam0, 1))
			{
				if (!func_1234(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1235(iParam0, &Var4, -649335959))
				{
					return false;
				}
			}
		}
		else if (!func_1860(iParam0, &uVar26, 0))
		{
			return false;
		}
		return true;
	}
	iVar27 = func_1209(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = func_1861(iParam0, *uParam1, uParam1->f_4, bParam4);
	}
	else
	{
		iVar28 = _0xe787f05dfc977bde(func_1145(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1212(int iParam0, int iParam1)
{
	if (!func_13(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_693(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_9(iParam0, 1399091007))
	{
		func_1275(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1213(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1862(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1863(&Var0, func_1341(0));
	}
	if (!func_1864(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1285(iVar14);
	return uVar15;
}

int func_1214()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1215(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1216(int iParam0)
{
	if (func_26() != -1)
	{
		return;
	}
	iVar0 = func_1865(iParam0);
	fVar1 = func_1866(iParam0);
	if ((Global_1347477->f_117 || !func_695(31)) || !func_1867(iVar0))
	{
		return;
	}
	if (fVar1 <= 0f)
	{
		return;
	}
	if (func_1868(iVar0) >= 7)
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
	func_1869(iVar0, (&Global_40.f_11095.f_11[iVar0] + fVar1), 0);
	func_801(_create_var_string(6, func_1870(iParam0), fVar1), "itemtype_textures", func_1871(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1217(int iParam0)
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

int func_1218(int iParam0, int iParam1)
{
	if (!func_1371(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1219(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_689() >= 12)
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_POSTED_OBJ", func_1872(), 12);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_CC_CARD_FOUND_OBJ", func_1873(), 12);
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
			else if (func_1258() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1874(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1258(), 30);
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
				sParam3 = _create_var_string(2, "COL_LF_CAUGHT_OBJ", func_1875(), 13);
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
			else if (func_1259() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1876(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1259(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1218(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1220(int iParam0, int iParam1, int iParam2)
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

bool func_1221(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1222(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1223(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
{
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < iParam6)
	{
		if (iParam2 == -2076669067)
		{
			iVar2 = func_1877(iVar0);
			if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = (func_390(iVar2, 1, 0) || func_1879(func_1878(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1227(func_1877(iVar0))), func_1227(func_1877(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1258() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1880(iVar0)), func_1880(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1874() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1880(iVar0)), func_1880(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1880(iVar0)), func_1880(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == -1531394072)
		{
			iVar2 = func_1268(iParam3, func_1881(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1264(iVar2) - iParam7) >= func_1218(iParam3, func_1882(iVar0));
				}
				else
				{
					bVar1 = func_1264(iVar2) >= func_1218(iParam3, func_1882(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1264(iVar2) + iParam7) >= func_1218(iParam3, func_1882(iVar0));
			}
			else
			{
				bVar1 = func_1264(iVar2) >= func_1218(iParam3, func_1882(iVar0));
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1883(iVar2)), func_1883(iVar2), bVar1, true, false);
		}
		if (iParam2 == 1995362678)
		{
			if (func_1884(_0x126cbebba46693cf(iVar0, 1995362678, 0)))
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
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1885(_0x126cbebba46693cf(iVar0, iParam2, 0))), func_1885(_0x126cbebba46693cf(iVar0, iParam2, 0)), bVar1, true, false);
		}
		if (iParam2 == 2103522376)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1259() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1886(iVar0)), func_1886(iVar0), bVar1, true, false);
			}
			else if (iVar0 == 1)
			{
				bVar1 = func_1876() >= iParam8;
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1886(iVar0)), func_1886(iVar0), bVar1, true, false);
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
				_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1886(iVar0)), func_1886(iVar0), bVar1, true, false);
			}
		}
		if (iParam2 == 678508515)
		{
			iVar2 = func_1268(iParam3, func_1881(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1264(iVar2) - iParam7) >= true;
				}
				else
				{
					bVar1 = func_1887(iVar2);
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = true;
			}
			else
			{
				bVar1 = func_1887(iVar2);
			}
			if (((((((iParam5 == 7 || iParam5 == 3) || iParam5 == 4) || iParam5 == 5) || iParam5 == 0) || iParam5 == 1) || iParam5 == 2) || iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1888(iVar2)), func_1888(iVar2), bVar1, true, false);
		}
		iVar0++;
	}
	return true;
}

bool func_1224(int iParam0, int iParam1, int iParam2, int iParam3)
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
		if (func_1875() >= 13)
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

bool func_1225(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_234(func_247(0)) && ((func_1889(0) == 1 || func_1889(0) == 8) || func_1889(0) == 6))
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

var func_1226(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1227(int iParam0)
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

bool func_1228(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1229(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1230(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1231(int iParam0)
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
			func_1890(1);
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
			func_1891(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1891(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1891(3);
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
			func_1892(1);
			break;
		case 34:
			func_1893(1);
			break;
		case 35:
			func_1894(1);
			break;
		case 36:
			break;
		case 37:
			func_1895(0);
			break;
		case 38:
			func_1896(0);
			break;
		case 39:
			func_1897(0);
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
			if ((!&Global_1879534 && func_440()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_808("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_368(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_440()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_808("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_368(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_440()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_808("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_368(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_440()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_808("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_368(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_26() == -1)
			{
				if (!func_1298(99217379) || func_1898(99217379) == 2110595215)
				{
					if (func_1198())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_390(iVar0, 1, 0))
					{
						func_746(iVar0, 1, 752097756);
					}
					func_725(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_26() == -1)
			{
				if (!func_390(1013902307, 1, 0))
				{
					func_746(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_26() == -1)
			{
				if (!func_390(1013902307, 1, 0))
				{
					func_746(1013902307, 1, 752097756);
				}
				if (!func_390(142640135, 1, 0))
				{
					func_746(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_26() == -1)
			{
				if (!func_390(786809402, 1, 0))
				{
					func_746(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_26() == -1)
			{
				if (!func_390(786809402, 1, 0))
				{
					func_746(786809402, 1, 752097756);
				}
				if (!func_390(-518019409, 1, 0))
				{
					func_746(-518019409, 1, 752097756);
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
			func_1899();
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

bool func_1232(int iParam0)
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

int func_1233(int iParam0, int iParam1)
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

bool func_1234(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1861(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1235(int iParam0, var uParam1, int iParam2)
{
	if (func_1900(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1236(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_13(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_1145(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1237(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1901(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1345(*uParam1, &Var0, bParam6, 0))
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
	if (!func_701(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_1145(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1238(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1902(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1239(int iParam0)
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
	iVar2 = func_328();
	func_377(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1240(int iParam0)
{
	if (func_1903(iParam0))
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

bool func_1241(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1242(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1243(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_695(50))
			{
				if (!func_695(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_695(51))
			{
				if (!func_695(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1244(int iParam0, int iParam1, var uParam2)
{
	if (!func_13(iParam1, 0))
	{
		return false;
	}
	if (func_693(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_26() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_697(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_769(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_9(iParam1, 866047851))
	{
		iVar5 = func_770(iVar4, 1);
		if (func_1904(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_697(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_9(iParam1, -1638171711))
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
			if (func_1905(1868067663, &uVar0))
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
				iVar10 = func_1906(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1906(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_697(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_9(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1907(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1245()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1246()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1247()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_390(func_1908(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1248(int iParam0)
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

bool func_1249(int iParam0, int iParam1)
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
	if (func_390(iVar0, 1, 0) && func_390(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1250(int iParam0)
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

bool func_1251(int iParam0, int iParam1)
{
	iVar0 = func_1909(iParam0);
	if (iVar0 != -15)
	{
		func_377(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_798(iVar0, 1);
	}
	return false;
}

void func_1252(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1253(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1254(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1255(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1256(int iParam0)
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
	iVar1 = func_1264(iVar9);
	iVar2 = func_1264(iVar10);
	iVar3 = func_1264(iVar11);
	iVar5 = func_1265(iVar9);
	iVar6 = func_1265(iVar10);
	iVar7 = func_1265(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1264(iVar12);
		iVar8 = func_1265(iVar12);
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

void func_1257(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1258()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1910(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1259()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1260(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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
			if (func_1887(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1887(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1887(iVar0))
		{
			*sParam2++;
		}
		if (func_1887(iVar0))
		{
			return true;
		}
	}
	else if (iParam0 == -1248968496)
	{
		if (bParam3)
		{
			if (func_1887(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1887(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1887(iVar0))
		{
			*sParam2++;
		}
		if (func_1887(iVar1))
		{
			*sParam2++;
		}
		if (func_1887(iVar0) && func_1887(iVar1))
		{
			return true;
		}
	}
	else if (iParam0 == 1706369307)
	{
		if (bParam3)
		{
			if (func_1887(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1887(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1887(iVar0))
		{
			*sParam2++;
		}
		if (func_1887(iVar1))
		{
			*sParam2++;
		}
		if (func_1887(iVar2))
		{
			*sParam2++;
		}
		if ((func_1887(iVar0) && func_1887(iVar1)) && func_1887(iVar2))
		{
			return true;
		}
	}
	else
	{
		if (bParam3)
		{
			if (func_1887(iParam1))
			{
				*sParam2++;
			}
		}
		if (bParam5)
		{
			if (func_1887(iParam1))
			{
				*sParam2 = (*sParam2 - iParam4);
			}
		}
		if (func_1887(iVar0))
		{
			*sParam2++;
		}
		if (func_1887(iVar1))
		{
			*sParam2++;
		}
		if (func_1887(iVar2))
		{
			*sParam2++;
		}
		if (func_1887(iVar3))
		{
			*sParam2++;
		}
		if (((func_1887(iVar0) && func_1887(iVar1)) && func_1887(iVar2)) && func_1887(iVar3))
		{
			return true;
		}
	}
	return false;
}

void func_1261(int iParam0)
{
	if (!func_1911(iParam0))
	{
		func_1913(func_1912(iParam0));
	}
}

int func_1262()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1911(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1263(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1264(iVar9);
	iVar2 = func_1264(iVar10);
	iVar3 = func_1264(iVar11);
	iVar5 = func_1265(iVar9);
	iVar6 = func_1265(iVar10);
	iVar7 = func_1265(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1264(iVar12);
		iVar8 = func_1265(iVar12);
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

int func_1264(int iParam0)
{
	if (func_390(iParam0, 1, 0))
	{
		iVar0 = func_678(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1265(int iParam0)
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

int func_1266(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1267(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1268(int iParam0, int iParam1)
{
	if (!func_1371(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1269(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1268(iParam1, 5) || iParam0 == func_1268(iParam1, 6)) || iParam0 == func_1268(iParam1, 7)) || iParam0 == func_1268(iParam1, 8)) || iParam0 == func_1268(iParam1, 9))
	{
		func_1260(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_690(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_692(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1270(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1268(iParam1, 5) || iParam0 == func_1268(iParam1, 6)) || iParam0 == func_1268(iParam1, 7)) || iParam0 == func_1268(iParam1, 8)) || iParam0 == func_1268(iParam1, 9))
	{
		if (func_1260(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_690(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_692(51, 0, 0, iVar0, func_1218(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_690(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_692(51, 0, 0, iVar0, func_1218(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1271()
{
	if (func_235((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1272(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1273(int iParam0)
{
	if (!func_1914(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1274(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1275(int iParam0, int iParam1, var uParam2)
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

bool func_1276(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1915();
	if (iParam2 == 39)
	{
		Var0 = { func_782(iParam0, 1, 0) };
		iParam2 = func_770(func_783(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_9(iParam0, 866047851) && func_1904(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1278(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1916(func_1346(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1917(iParam2);
	func_1918(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1327(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1327(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1333(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1919(iParam0, iParam2, iParam1, func_26() != -1);
	if (bParam4)
	{
		func_1920(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1920(&(Global_1946804->f_1378), 1, 0);
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
				func_1650(func_1346(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1277(bool bParam0, bool bParam1, bool bParam2)
{
	func_1921(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1278(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1279()
{
	func_1922(&(Global_1946804->f_2776));
	func_1923(32768);
	func_1650(1108822547, 8, 6);
}

int func_1280(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_770(iParam0, 1);
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

void func_1281(int iParam0)
{
	if (func_1924(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1925(Var0);
}

void func_1282(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1925(Var0);
}

bool func_1283(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_1145(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1284(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1285(int iParam0)
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

float func_1286()
{
	if (func_1926())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1927(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1927(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1928();
	fVar2 = func_1929();
	fVar3 = func_1930();
	fVar4 = func_1931();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1932()));
	fVar7 = (func_1927(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1933(3, round((to_float(iVar8) * fVar10)), 0);
	func_1934(3, fVar9, fVar9 > 100f);
	return func_1935(fVar7, -100f, 100f);
}

float func_1287()
{
	if (func_1926())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1927(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1927(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1928();
	fVar2 = func_1929();
	fVar3 = func_1930();
	fVar4 = func_1931();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1932()));
	fVar7 = (func_1927(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1933(2, round((to_float(iVar8) * fVar10)), 0);
	func_1934(2, fVar9, fVar9 > 100f);
	return func_1935(fVar7, -100f, 100f);
}

float func_1288()
{
	if (func_1926())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1927(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1936())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1937())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1927(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1928();
	fVar2 = func_1929();
	fVar3 = func_1930();
	fVar4 = func_1931();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1932()));
	fVar7 = (func_1927(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1933(1, round((to_float(iVar8) * fVar10)), 0);
	func_1934(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1927(0);
	}
	return func_1935(fVar7, -100f, 100f);
}

bool func_1289(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1290(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1291(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_13(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1211(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_701(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_1145(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1292(int iParam0, bool bParam1)
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
				return func_1938();
			}
			break;
	}
	return 0;
}

int func_1293(int iParam0)
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

bool func_1294(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1295(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1294(iParam0))
	{
		return;
	}
	if (func_1939(iParam0))
	{
		return;
	}
	if (!func_1940(iParam0))
	{
		func_1941(iParam0, 1, 0);
	}
	iVar0 = func_1942(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1943(iParam0, 512))
		{
			func_781(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_258() && !bParam1) && !func_241(0, 0, 1))
	{
		func_810(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1944(iParam0, 6);
	if (bParam2)
	{
		if (!func_241(0, 0, 1))
		{
			func_410(1, 4);
		}
	}
}

bool func_1296(int iParam0, bool bParam1)
{
	return func_1292(iParam0, 0) < func_1945(iParam0, bParam1);
}

bool func_1297(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_697(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1298(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_770(iParam0, 1)] != &Global_1946804->f_57[func_770(iParam0, 1)];
}

void func_1299(int iParam0, int iParam1)
{
	if (func_9(iParam1, 130796156))
	{
		func_1946(iParam1, 0);
	}
	else if (func_9(iParam1, 930141731))
	{
		func_1946(iParam1, 1);
		func_1947(iParam0);
	}
}

void func_1300(var uParam0, int iParam1)
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

int func_1301(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1948(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1949(uParam2, iParam0, Var1);
	return 1;
}

int func_1302(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1303(int iParam0)
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

int func_1304(int iParam0)
{
	if (!func_1950(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1305()
{
	return !&Global_1911774;
}

void func_1306(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1307(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1308(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1309(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1310(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_26() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1951(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1311(int iParam0, int iParam1)
{
	if (func_26() != -1)
	{
		return false;
	}
	if (func_1951(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1312(bool bParam0)
{
	if (bParam0)
	{
		func_361(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_361(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_361(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1313();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1952(2032023096);
		func_364(-615217896);
		func_766(655868243, 1, 1, -142743235, 1);
		func_1954(146323340, func_1953());
		Var0 = { func_1703() };
		if (func_1955(&Var0) == -1387633835)
		{
			func_1956(&Var0);
			func_1957(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1958(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1696(iVar6) == 2010625508)
			{
				func_1959(iVar6, iVar7);
				func_1960(iVar6, iVar8);
				func_1961(iVar6, iVar9);
				func_1962(iVar6, 0);
				if (func_1963(iVar6))
				{
					func_1964(iVar6);
				}
				iVar10 = func_1965(iVar8);
				func_1966(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1313()
{
	if (!func_1967(-1898635967, func_1953(), 1))
	{
		return 0;
	}
	if (func_381())
	{
		if (!func_1967(146323340, func_1953(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1314()
{
	func_375(34411519);
	func_375(834124286);
	func_375(-570967010);
}

void func_1315(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_361(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_361(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_361(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_361(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_361(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_361(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_361(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_361(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_361(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_361(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_361(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_766(-1080874779, 3, 1, -142743235, 1);
		func_766(-223790555, 3, 1, -142743235, 1);
		func_766(1566032147, 3, 1, -142743235, 1);
		func_766(891311852, 5, 1, -142743235, 1);
		func_766(-1353737667, 5, 1, -142743235, 1);
		func_766(-330313895, 5, 1, -142743235, 1);
		func_766(-2051332199, 5, 1, -142743235, 1);
		func_766(1237770824, 5, 1, -142743235, 1);
		func_766(-1795542128, 3, 1, -142743235, 1);
		func_766(-1757588258, 3, 1, -142743235, 1);
		func_766(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1958(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1696(iVar0) == 153881023)
			{
				func_1959(iVar0, iVar1);
				func_1960(iVar0, iVar2);
				func_1961(iVar0, iVar3);
				func_1962(iVar0, 0);
				if (func_1963(iVar0))
				{
					func_1964(iVar0);
				}
				iVar4 = func_1965(iVar2);
				func_1966(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1313();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1316(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1968(iParam0);
	if (bParam3)
	{
		func_809(iParam0, sParam1, iParam2);
	}
}

bool func_1317(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1318(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1319()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1283("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1284(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1235(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1285(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1285(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1320(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1969(Param1, iParam5, &Var5, 0))
	{
		func_1237(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1291(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1970(Var19, 1);
}

bool func_1321(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1862(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1863(&Var0, func_1341(0));
	}
	if (!func_1864(&Var0, &iVar14, &iVar15, 0))
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
			if (!func_1284(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1237(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1285(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1322(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_13(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_782(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1971(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1236(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1237(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1323(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_9(iParam0, 606799272))
		{
			func_1972(iParam0, iParam1);
		}
		if (func_9(iParam0, -1112814642) && func_9(iParam0, -1697809989))
		{
			func_721(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1324(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1973(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_697(iParam0) != -999503751)
		{
			func_1974(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_697(iParam0) != -999503751)
	{
		func_1974(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1975(iParam0, 1);
	return 1;
}

void func_1325()
{
	if (func_26() == -1)
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

void func_1326(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1976(0);
	}
	if (bParam0)
	{
		func_1338(8);
		func_1338(512);
	}
	else
	{
		func_1338(8);
		func_1338(16);
	}
}

void func_1327(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1328(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_772();
	}
	if (func_26() == -1)
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

int func_1329(int iParam0)
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

void func_1330(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1977(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1346(iVar0, 1);
			if (func_1647(iVar0, iParam1))
			{
				vVar4 = { func_774(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1646(iVar7, 4))
				{
					func_1650(iVar7, 4, 6);
				}
			}
			else
			{
				func_1649(iVar7, 4, 6);
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

bool func_1331(int iParam0)
{
	Global_1946804->f_964.f_2 = 0;
	if (func_26() == -1)
	{
		iVar0 = -380731322;
	}
	else
	{
		iVar0 = 1226838104;
	}
	func_1978(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1332(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1333(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_697(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1647(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1918(iVar1, iVar3);
		}
	}
	if (func_1298(-1586649372) && func_1647(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1918(iVar1, iVar3);
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
						func_1918(iVar1, iVar3);
					}
				}
			}
			func_1979(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1979(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1918(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1979(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1918(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1918(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1979(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1979(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1918(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1979(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1918(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1918(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_697(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1918(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1907(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_697(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1918(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_9(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1918(iVar1, iVar3);
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
						func_1918(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1907(&(Global_1946804->f_1497.f_1[iVar1])) || func_9(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1918(iVar1, iVar3);
					}
				}
			}
			switch (func_697(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_697(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1918(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_697(&(uParam0->f_1[iVar1])) || func_9(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1918(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1334(int iParam0, int iParam1)
{
	if (func_26() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1335(int iParam0)
{
	if (func_26() != -1)
	{
		if (func_1289(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1289(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1336(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1289(iParam0, 65536) && !func_1289(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1289(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1289(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1337()
{
	return Global_1905944->f_5694;
}

void func_1338(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1339(struct<4> Param0)
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
			if (func_1980(Param0))
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
			func_1981(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1338(8);
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
			if (func_1980(Param0))
			{
				return;
			}
			func_1981(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1338(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1282(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1340(bool bParam0)
{
	return func_1236(1328661203, func_1982(), -1591664384, bParam0);
}

struct<4> func_1341(bool bParam0)
{
	iVar0 = func_1145(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1236(923904168, func_1340(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1236(923904168, func_1340(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1236(923904168, func_1340(bParam0), -740156546, 0);
}

bool func_1342(int iParam0, bool bParam1)
{
	if (func_697(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_695(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1343(bool bParam0)
{
	iVar0 = func_1145(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1236(271701509, func_1340(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1236(271701509, func_1340(bParam0), 12999093, 0);
}

bool func_1344(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_697(iParam0);
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

bool func_1345(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_1145(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1346(int iParam0, int iParam1)
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

int func_1347(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1348(int iParam0, int iParam1)
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

void func_1349(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1350(int iParam0, int iParam1)
{
	iVar0 = func_790(*iParam0);
	iVar1 = func_789(*iParam0);
	if (iParam1 < 1 || iParam1 > func_795(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1351(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1352(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1353(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1354(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1355(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1356(int iParam0)
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

bool func_1357(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_26() == -1)
	{
		if (func_1205(iParam0))
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

int func_1358(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_13(iParam0, 0))
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

int func_1359(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1859(&iParam0);
	if (!func_13(iParam0, 0))
	{
		return 0;
	}
	if (!func_701(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1209(iParam0, uParam1, bParam2, bParam3);
	if (iVar0 < 0)
	{
		return 2147483647;
	}
	if (bParam2)
	{
		iVar1 = func_1861(iParam0, *uParam1, uParam1->f_4, bParam3);
	}
	else
	{
		iVar1 = _0xe787f05dfc977bde(func_1145(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

bool func_1360(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1428(1);
}

void func_1361(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1983(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_367(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1983(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_367(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1362()
{
	return Global_40.f_4283.f_325;
}

bool func_1363(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (func_26() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_40.f_7832[iVar1]), iVar2);
}

bool func_1364(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1365(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1366(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1367(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1368(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_440();
	bVar1 = false;
	if (bVar0 && !func_1127(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1127(37)) && !func_1127(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1127(43)) && !func_1127(44))
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
		if (func_1697(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1697(1) == 1)
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

int func_1369()
{
	return Global_40.f_1095.f_3054;
}

bool func_1370(int iParam0)
{
	iParam0 = func_309(iParam0);
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

bool func_1371(int iParam0, var uParam1)
{
	if (!func_1984(iParam0))
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

int func_1372()
{
	if (func_440())
	{
		if (!func_1127(3))
		{
			return func_1742(43);
		}
		if (func_1127(38) && !func_1127(43))
		{
			return func_1985(8);
		}
	}
	return 0;
}

bool func_1373(int iParam0)
{
	if (!func_290(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1986(iParam0));
}

Vector3 func_1374(int iParam0, int iParam1)
{
	func_1371(15, &Var0);
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

int func_1375(int iParam0, int iParam1)
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
	iVar0 = func_492(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1371(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1987(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1376(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1988(iParam0);
	if (func_573(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1377(int iParam0)
{
	if (!func_1371(15, &Var0))
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

bool func_1378(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam5)
	{
		if (func_1989(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1990(5))
	{
		if (func_1991(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1690(vParam0);
	if (bParam6)
	{
		iVar1 = func_415(vParam0, 1);
		if (func_122(iVar1) || func_1992(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1993(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1994())
	{
		if (func_1995(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1996(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_415(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1997(iParam3, iParam4))
	{
		return false;
	}
	if (func_1998(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1999(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_440())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_2000(vParam0, bParam10) || func_2001(vParam0, bParam10))
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

int func_1379(vector3 vParam0)
{
	iVar0 = func_2002(vParam0, 0f, 0f, 0, 2);
	return func_2002(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1380(int iParam0)
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

char* func_1381(int iParam0)
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
	return func_1659(iVar0);
}

char* func_1382(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_2003(iVar0);
}

char* func_1383(int iParam0)
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

void func_1384(char[4] cParam0, int iParam1)
{
	iVar0 = func_138(iParam1);
	if (!func_1782(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*cParam0->f_1[iVar0])[iVar1] = 71638;
		clear_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1385(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_138(iParam1);
	if (func_1782(iVar0))
	{
		cParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

void func_1386(var uParam0, char* sParam1)
{
	if (is_string_null_or_empty(sParam1))
	{
		return;
	}
	StringCopy(&(uParam0->f_806), sParam1, 64);
}

void func_1387(char* sParam0)
{
	StringCopy(sParam0, "walk_and_talk", 64);
	StringCopy(&(sParam0->f_8), "WALK_AND_TALK_REQUEST", 64);
	_0x6a4d224fc7643941(sParam0);
}

int func_1388(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_593(iParam0))
	{
		return 0;
	}
	iVar2 = func_2004(iParam1);
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0][iVar0] == iParam1)
		{
			if (func_2005((*Global_40.f_11206[iParam0])[iVar0]->f_1, 1) > func_2005(iParam3, 1))
			{
				return 1;
			}
			(*Global_40.f_11206[iParam0])[iVar0]->f_2 = iParam2;
			(*Global_40.f_11206[iParam0])[iVar0]->f_1 = iParam3;
			if (iParam4 > 0)
			{
				iVar1 = func_328();
				func_377(&iVar1, 0, 0, iParam4, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(*Global_40.f_11206[iParam0])[iVar0]->f_4 = iVar1;
			(*Global_40.f_11206[iParam0])[iVar0]->f_3 = iVar2;
			func_1150(iParam0, iParam1, 1);
			Global_1935183->f_24 = 1;
			return 1;
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (Global_40.f_11206[iParam0][iVar0] == -1600776215)
		{
			(*Global_40.f_11206[iParam0])[iVar0] = iParam1;
			(*Global_40.f_11206[iParam0])[iVar0]->f_2 = iParam2;
			(*Global_40.f_11206[iParam0])[iVar0]->f_1 = iParam3;
			if (iParam4 > 0)
			{
				iVar1 = func_328();
				func_377(&iVar1, 0, 0, iParam4, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			(*Global_40.f_11206[iParam0])[iVar0]->f_4 = iVar1;
			(*Global_40.f_11206[iParam0])[iVar0]->f_3 = iVar2;
			func_1150(iParam0, iParam1, 1);
			Global_1935183->f_24 = 1;
			if (func_2006(iVar2))
			{
				iVar3 = 0;
				while (iVar3 < 5)
				{
					if ((*Global_40.f_11206[iParam0])[iVar3]->f_3 == iVar2 && Global_40.f_11206[iParam0][iVar3] != iParam1)
					{
						if ((Global_40.f_11206[iParam0][iVar3] == 557524588 || Global_40.f_11206[iParam0][iVar3] == 1792646445) && (iParam1 == 557524588 || iParam1 == 1792646445))
						{
							return 0;
						}
						func_594(iParam0, (*Global_40.f_11206[iParam0])[iVar3]);
					}
					iVar3++;
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

var func_1389(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_1390(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_1390(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_1391(int iParam0, bool bParam1, bool bParam2)
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

void func_1392(char[4] cParam0, bool bParam1, bool bParam2, bool bParam3)
{
	set_ped_max_move_blend_ratio(Global_35, 1f);
	if (!is_ped_on_mount(Global_35))
	{
		if (!bParam3)
		{
			func_2007(1256, 1065353216);
		}
		else
		{
			func_2007(3836, 1065353216);
		}
	}
	if (bParam2)
	{
		disable_control_action(0, -1404316431, false);
	}
	if (bParam1)
	{
		func_1776(0);
	}
}

void func_1393(int iParam0, int iParam1, int iParam2)
{
	if (Local_2947.f_5 >= 3)
	{
		return;
	}
	if (iParam2 < 0 || iParam2 >= 60)
	{
		return;
	}
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 > 23)
	{
		return;
	}
	func_1351(&iVar0, iParam0);
	func_1352(&iVar0, iParam1);
	func_1353(&iVar0, iParam2);
	func_2008(&iVar0);
	iVar1 = 0;
	while (iVar1 <= (Local_2947.f_5 - 1))
	{
		func_2008(Local_2947.f_1[iVar1]);
		if (&Local_2947.f_1[iVar1] == iVar0)
		{
			return;
		}
		iVar1++;
	}
	Local_2947.f_1[Local_2947.f_5] = iVar0;
	Local_2947.f_5++;
	func_2009(&(Local_2947.f_1), Local_2947.f_5);
}

void func_1394(float fParam0)
{
	func_2010(ceil((to_float(300) - (to_float(300) * fParam0))));
}

void func_1395()
{
	switch (iVar2974)
	{
		case 0:
			if (func_2011(29, -252.5134f, 774.7609f, 116.6047f, 0f, 0f, 10.8f, 1, 0, 1, 0, 0, 2, -1))
			{
				iLocal_2976 = 1;
			}
			break;
		case 1:
			if (func_2011(20, -179.2878f, 653.2728f, 112.6819f, -0.01f, 0f, 57.738f, 1, 0, 1, 0, 0, 0, -1))
			{
				iLocal_2976 = 2;
			}
			break;
		case 2:
			return;
	}
}

bool func_1396(int iParam0)
{
	return func_436(iLocal_22, iParam0);
}

bool func_1397(char[4] cParam0)
{
	return cParam0->f_598;
}

bool func_1398(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return false;
	}
	if (!_does_scenario_point_exist(iParam1))
	{
		return false;
	}
	return _0x9c54041bb66bcf9e(iParam0, iParam1);
}

float func_1399(float fParam0)
{
	if (!func_32(fParam0))
	{
		return 0f;
	}
	if (func_597(fParam0))
	{
		return fParam0->f_2;
	}
	return (func_648() - fParam0->f_1);
}

void func_1400(char[4] cParam0)
{
	if (!get_is_task_active(Global_35, 8) && iVar816 >= 3)
	{
		if (!func_1396(16384))
		{
			func_228(Global_35, 1);
			func_229(&(uLocal_121[0]), 1);
			func_230(&cLocal_1073);
			_0xc67a4910425f11f1(player_id(), "JOHN_WNT");
			if (!func_434(&(uLocal_121[0]), 242628503))
			{
				task_turn_ped_to_face_entity(&(uLocal_121[0]), Global_35, -1, -1082130432, -1082130432, -1082130432);
			}
			func_1529(7);
			if (func_1397(cParam0) == 0)
			{
				func_214(cParam0, &(uLocal_121[0]), 1);
			}
			else if (func_1397(cParam0) == 1)
			{
				if (does_blip_exist(iLocal_48))
				{
					remove_blip(&iLocal_48);
				}
			}
			func_1501(cParam0, "MUD4_OBJ_LEAD", -1082130432, 0, 0, -1, -1, 0);
			sLocal_814 = "MUD4_OBJ_LEAD";
			if (func_2012(cParam0, "MUD4_OBJ_LEAD", 5, 0, 0))
			{
				func_1458(16384);
			}
		}
	}
	else if (func_1396(16384))
	{
		if (!func_1396(4))
		{
			func_2013(&uLocal_957);
			func_2014(&(uLocal_121[0]), Global_35, &uLocal_957, 0f, 0f, 0f, "mud4_walk_gunstore", 17420, 1, 3f, -1f, 2.27f, 1f, 1092616192, -1, 1, 0, 0, 0, 1);
			func_2013(&uLocal_995);
			func_2015(Global_35, &(uLocal_121[0]), &uLocal_995, -1f, 0, 0, -1f, -1f, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
		}
		func_65(7);
		if (func_1397(cParam0) == 0)
		{
			func_1501(cParam0, "MUD4_OBJ_GTW", -1082130432, 0, 0, -1, -1, 0);
			func_1420(cParam0, &(uLocal_121[0]), 1105014447, 422991367, 1, 1);
			func_1538(cParam0, "MUD4_OBJ_GTW", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
		}
		else if (func_1397(cParam0) == 1)
		{
			func_1501(cParam0, "MUD4_OBJ_HITCH", -1082130432, 0, 0, -1, -1, 0);
			if (!does_blip_exist(iLocal_48))
			{
				iLocal_48 = func_1419(408396114, func_1412(2, 7), 1);
			}
			func_1538(cParam0, "MUD4_OBJ_HITCH", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
		}
		func_1463(16384);
	}
}

void func_1401(char[4] cParam0)
{
	if (is_entity_dead(iLocal_209))
	{
		func_1799(cParam0, func_2016(), 1, 0);
	}
	if (!func_521(iLocal_209, 65) || is_ped_in_writhe(iLocal_209))
	{
		func_2017(cParam0, "ALLY_DEAD_HORSE_PLAYER", "", 1, 0);
	}
	if (func_39(cParam0) <= 7)
	{
		if (func_1090(player_id(), 1, 0, 1))
		{
			func_2017(cParam0, "MUD4_FAIL_LAW", "", 1, 0);
		}
	}
	if (func_39(cParam0) == 0)
	{
		if (is_entity_dead(&(iLocal_125[0])))
		{
			func_1799(cParam0, func_2018(1, 0), 1, 0);
		}
	}
	if (func_39(cParam0) == 1)
	{
		if (is_entity_dead(&(iLocal_125[0])))
		{
			func_1799(cParam0, func_2018(1, 0), 1, 0);
		}
		if (&uLocal_888[1] == 2)
		{
			if (does_entity_exist(&(iLocal_129[0])))
			{
				Local_928.f_1 = 16384;
				func_2019(&Local_928);
				if (!is_entity_dead(&(iLocal_129[0])))
				{
					if (has_entity_been_damaged_by_entity(&(iLocal_129[0]), Global_35, 1, 1))
					{
						func_2017(cParam0, "MUD4_FAIL_SHOP2", "", 1, 0);
					}
					else if (func_2020(&(iLocal_129[0]), 0, &Local_928, &iLocal_956, 0, 0))
					{
						func_2017(cParam0, "MUD4_FAIL_SHOP3", "", 1, 0);
					}
					else if (func_1626(&uVar1))
					{
						if (is_entity_in_volume(Global_35, &(iLocal_228[42]), true, 0))
						{
							func_2017(cParam0, "MUD4_FAIL_SHOP3", "", 1, 0);
						}
					}
				}
				else
				{
					func_2017(cParam0, "MUD4_FAIL_SHOP1", "", 1, 0);
				}
			}
		}
	}
	if (func_39(cParam0) == 2)
	{
		if (is_entity_dead(&(iLocal_125[0])))
		{
			func_1799(cParam0, func_2018(1, 0), 1, 0);
		}
		if (&iLocal_374[2])
		{
			if (func_1413(Global_35, func_1412(15, 2), 1) >= 70f)
			{
				func_2017(cParam0, "JOHN_ABANDON", "", 1, 0);
			}
		}
	}
	if (func_39(cParam0) == 3)
	{
		if (&iLocal_374[29])
		{
			func_2017(cParam0, "MUD4_FAIL_LOST", "", 1, 0);
		}
		if (!func_521(&(iLocal_125[0]), 0))
		{
			func_1799(cParam0, func_2018(1, 0), 1, 0);
		}
		if (func_2021(cParam0, get_entity_coords(&(uLocal_121[0]), true, false), "MUD4_FAIL_WARN_VANTAGE", "MUD4_FAIL_LEFT_VANTAGE", 30f, 45f, 0, 0, 1, 0, 1))
		{
			if (!does_blip_exist(iLocal_48))
			{
				iLocal_48 = _blip_add_for_coord(408396114, get_entity_coords(&(uLocal_121[0]), true, false));
			}
		}
		else if (does_blip_exist(iLocal_48))
		{
			func_1501(cParam0, sVar811, -1082130432, 0, 0, -1, -1, 0);
			func_1538(cParam0, sVar811, 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
			remove_blip(&iLocal_48);
		}
	}
	if (func_39(cParam0) >= 3 && func_39(cParam0) <= 7)
	{
		if (is_entity_dead(&(iLocal_125[0])))
		{
			func_1799(cParam0, func_2018(1, 0), 1, 0);
		}
		if (&uLocal_893[2] == 2)
		{
			if (!is_entity_dead(&(iLocal_158[0])))
			{
				if (has_entity_been_damaged_by_entity(&(iLocal_158[0]), Global_35, 1, 1))
				{
					if (!func_1408(524288))
					{
						func_1416(524288);
					}
				}
			}
			else if (!func_1408(524288))
			{
				func_1416(524288);
			}
			if (!is_entity_dead(&(iLocal_158[1])))
			{
				if (has_entity_been_damaged_by_entity(&(iLocal_158[1]), Global_35, 1, 1))
				{
					if (!func_1408(1048576))
					{
						func_1416(1048576);
					}
				}
			}
			else
			{
				func_1416(1048576);
			}
			if (!is_entity_dead(&(iLocal_158[2])))
			{
				if (has_entity_been_damaged_by_entity(&(iLocal_158[2]), Global_35, 1, 1))
				{
					if (!func_1408(1048576))
					{
						func_1416(1048576);
					}
				}
			}
			else if (!func_1408(1048576))
			{
				func_1416(1048576);
			}
			Local_928.f_1 = 1046009;
			Local_928 = 256;
			iLocal_956 = 2050;
			if (!func_1408(524288))
			{
				iVar0 = 0;
				while (iVar0 <= (3 - 1))
				{
					if (func_521(&(iLocal_158[iVar0]), 0))
					{
						if (func_2022(&(iLocal_158[iVar0]), &Local_928))
						{
							func_1416(524288);
						}
					}
					iVar0++;
				}
				if (func_2020(&(iLocal_158[0]), 0, &Local_928, &iLocal_956, 0, 0))
				{
					func_1416(524288);
				}
				else if (func_2020(&(iLocal_158[2]), 0, &Local_928, &iLocal_956, 0, 0))
				{
					func_1416(1048576);
				}
				else if (func_2020(&(iLocal_158[1]), 0, &Local_928, &iLocal_956, 0, 0))
				{
					func_1416(1048576);
				}
			}
			if (_does_anim_scene_exist(&(uLocal_466[5])) && _is_anim_scene_started(&(uLocal_466[5]), false))
			{
				if (has_anim_event_fired(&(iLocal_158[0]), 1738239303))
				{
					if (_0x268b3aebf032a88d(&(iLocal_158[0])))
					{
						set_blocking_of_non_temporary_events(&(iLocal_158[0]), false);
					}
				}
				else if (!_0x268b3aebf032a88d(&(iLocal_158[0])))
				{
					set_blocking_of_non_temporary_events(&(iLocal_158[0]), true);
				}
			}
			if (func_1408(524288) || func_1408(1048576))
			{
				if (!func_1478(64))
				{
					if (!is_entity_dead(&(iLocal_158[0])))
					{
						if (_is_anim_scene_started(&(uLocal_466[5]), false) && _0x3ab6c7b0bb0df4b1(&(iLocal_158[0]), &(uLocal_466[5])))
						{
							if (has_anim_event_fired(&(iLocal_158[0]), 1971901080) || _0x8d81e7824b7753f7(&(uLocal_466[5]), "base", 1))
							{
								set_anim_scene_bool(&(uLocal_466[5]), "bBreakout", true, false);
							}
						}
						else
						{
							if (!func_434(&(iLocal_158[0]), 518218985))
							{
								task_smart_flee_ped(&(iLocal_158[0]), Global_35, -1f, -1, 0, 2f, 0);
							}
							if (func_1461())
							{
								func_53(0, 0);
							}
							else if (func_1548(cParam0, "MUD4_AUCGRIEF", 0))
							{
								task_look_at_entity(&(iLocal_158[0]), Global_35, -1, 0, 51, 0);
								func_1479(64);
							}
						}
					}
					else
					{
						func_1479(64);
					}
				}
				if (!is_entity_dead(&(iLocal_158[1])))
				{
					if (!func_434(&(iLocal_158[1]), 780511057))
					{
						task_combat_ped(&(iLocal_158[1]), Global_35, 0, 524288);
					}
				}
				if (!is_entity_dead(&(iLocal_158[2])))
				{
					if (!func_434(&(iLocal_158[2]), 780511057))
					{
						task_combat_ped(&(iLocal_158[2]), Global_35, 0, 524288);
					}
				}
			}
			if (func_1478(64) && !func_1483("MUD4_AUCGRIEF"))
			{
				if (func_1408(524288))
				{
					func_2017(cParam0, "MUD4_FAIL_AUCT", "", 1, 0);
				}
				else if (func_1408(1048576))
				{
					func_2017(cParam0, "MUD4_FAIL_FARM", "", 1, 0);
				}
			}
		}
		if (func_39(cParam0) >= 5 && func_39(cParam0) <= 6)
		{
			if (func_2021(cParam0, func_1492(&Local_1105, 1), "MUD4_WARN_ABANDON", "MUD4_FAIL_ABANDON", 300f, 400f, 0, 0, 0, 1, 0))
			{
				if (func_39(cParam0) == 5)
				{
					if (does_blip_exist(iLocal_48))
					{
						remove_blip(&iLocal_48);
					}
					if (!does_blip_exist(iLocal_92))
					{
						iLocal_92 = func_1419(408396114, func_1492(&Local_1105, 1), 1);
					}
				}
			}
			else if (func_39(cParam0) == 5)
			{
				if (!does_blip_exist(iLocal_48))
				{
					iLocal_48 = func_1419(408396114, func_1412(15, 5), 1);
				}
				if (does_blip_exist(iLocal_92))
				{
					remove_blip(&iLocal_92);
				}
			}
		}
		if (func_39(cParam0) >= 3 && func_39(cParam0) <= 6)
		{
			if (!func_1396(8))
			{
				if (func_1523(&Local_1105) < 12)
				{
					func_2017(cParam0, "MUD4_FAIL_HERD", "", 1, 0);
				}
			}
		}
	}
	if (func_39(cParam0) == 7)
	{
		if (is_entity_dead(&(iLocal_125[0])))
		{
			func_1799(cParam0, func_2018(1, 0), 1, 0);
		}
	}
	if (func_39(cParam0) == 8 || func_39(cParam0) == 9)
	{
		if (func_2021(cParam0, get_entity_coords(&(uLocal_121[1]), true, false), "MUD4_WARN_GANG", "MUD4_FAIL_GANG", 25f, 50f, 0, 0, 0, 1, 0))
		{
			func_1420(cParam0, &(uLocal_121[0]), 1105014447, 422991367, 1, 1);
			func_1420(cParam0, &(uLocal_121[2]), 1105014447, 422991367, 1, 1);
			func_1420(cParam0, &(uLocal_121[1]), 1105014447, 422991367, 1, 1);
		}
		else
		{
			func_214(cParam0, &(uLocal_121[0]), 1);
			func_214(cParam0, &(uLocal_121[2]), 1);
			func_214(cParam0, &(uLocal_121[1]), 1);
			func_2023(4);
		}
		if (bVar442)
		{
			if (is_entity_dead(&(iLocal_125[0])) || is_entity_dead(&(iLocal_125[2])))
			{
				set_time_scale(0.2f);
				if (!func_32(&uLocal_774))
				{
					func_33(&uLocal_774, 0);
				}
				else
				{
					func_2017(cParam0, "MUD4_FAIL_DUEL", "", 1, 0);
				}
			}
		}
	}
	if (func_39(cParam0) == 10)
	{
		if (func_2021(cParam0, get_entity_coords(iLocal_223, true, false), "MUD4_WARN_GANG", "MUD4_FAIL_GANG", 15f, 30f, 0, 0, 0, 1, 0))
		{
			if (does_blip_exist(iLocal_48))
			{
				remove_blip(&iLocal_48);
			}
			func_1420(cParam0, &(uLocal_121[0]), 1105014447, 422991367, 1, 1);
			func_1420(cParam0, &(uLocal_121[2]), 1105014447, 422991367, 1, 1);
			func_1420(cParam0, &(uLocal_121[1]), 1105014447, 422991367, 1, 1);
			if (!func_1612(4))
			{
				func_1613(4);
			}
		}
		else
		{
			if (func_1612(4))
			{
				if (!does_blip_exist(iLocal_48))
				{
					iLocal_48 = func_1592(631964804, iLocal_223, 1);
					_blip_set_modifier(iLocal_48, -401963276);
					set_blip_name_from_text_file(iLocal_48, "MUD4_BLIP_CART");
				}
				func_2023(4);
			}
			func_214(cParam0, &(uLocal_121[0]), 1);
			func_214(cParam0, &(uLocal_121[2]), 1);
			func_214(cParam0, &(uLocal_121[1]), 1);
		}
	}
	if (func_39(cParam0) >= 9 && func_39(cParam0) <= 11)
	{
		if (&uLocal_888[0] == 2)
		{
			if (is_entity_dead(&(iLocal_125[0])))
			{
				func_1799(cParam0, func_2018(1, 0), 1, 0);
			}
			if (is_entity_dead(&(iLocal_125[1])))
			{
				func_1799(cParam0, func_2018(0, 0), 1, 0);
			}
		}
	}
	if (func_39(cParam0) == 11)
	{
		if (bVar443)
		{
			if (func_2021(cParam0, get_entity_coords(&(uLocal_121[1]), true, false), "MUD4_WARN_GANG", "MUD4_FAIL_GANG", 50f, 75f, 0, 0, 0, 1, 1))
			{
				if (!&iLocal_409[9])
				{
					func_1420(cParam0, &(uLocal_121[0]), 1105014447, 422991367, 1, 1);
					func_214(cParam0, &(uLocal_121[2]), 1);
					func_1420(cParam0, &(uLocal_121[1]), 1105014447, 422991367, 1, 1);
					if (does_blip_exist(iLocal_91))
					{
						remove_blip(&iLocal_91);
					}
					iLocal_409[9] = 1;
				}
			}
			else if (&iLocal_409[9])
			{
				func_214(cParam0, &(uLocal_121[0]), 1);
				func_214(cParam0, &(uLocal_121[1]), 1);
				if (!does_blip_exist(iLocal_91))
				{
					iLocal_91 = _blip_add_for_entity(408396114, &(iLocal_125[0]));
				}
				iLocal_409[9] = 0;
			}
		}
		else
		{
			func_214(cParam0, &(uLocal_121[0]), 1);
			func_214(cParam0, &(uLocal_121[1]), 1);
		}
	}
	if (func_39(cParam0) == 10)
	{
		if (_0x18714953cced17d3(iLocal_223))
		{
		}
	}
}

void func_1402(char[4] cParam0)
{
	if (func_2024(cParam0, 1, 50f, 100f, 0, 0, 1, 422991367))
	{
		if (!&iLocal_409[1])
		{
			if (compare_strings(sVar811, "MUD4_OBJ_HITCH", false, -1) == 0)
			{
				if (does_blip_exist(iLocal_48))
				{
					remove_blip(&iLocal_48);
				}
			}
			else if (compare_strings(sVar811, "MUD4_OBJ_LEAD", false, -1) == 0)
			{
				func_65(7);
			}
			iLocal_409[1] = 1;
		}
	}
	else if (&iLocal_409[1])
	{
		if (compare_strings(sVar811, "MUD4_OBJ_HITCH", false, -1) == 0)
		{
			if (!does_blip_exist(iLocal_48))
			{
				iLocal_48 = func_1419(408396114, func_1412(2, 7), 1);
			}
		}
		else if (compare_strings(sVar811, "MUD4_OBJ_LEAD", false, -1) == 0)
		{
			func_1529(7);
		}
		iLocal_409[1] = 0;
	}
	if ((!&iLocal_421[2] || !&iLocal_421[0]) || !&iLocal_421[2])
	{
		if (iVar2972 < 3)
		{
			if (func_1396(16384))
			{
				if (!&iLocal_421[2])
				{
					if (func_1014(&uLocal_562) >= 3f)
					{
						iLocal_421[2] = 1;
						func_1458(1048576);
						func_264(&uLocal_562);
					}
				}
			}
			else if (get_entity_speed(Global_35) <= 0f)
			{
				if (!&iLocal_421[0])
				{
					if (func_1014(&uLocal_562) >= 4f)
					{
						iLocal_421[0] = 1;
						func_264(&uLocal_562);
					}
				}
			}
			else if (func_1396(16384))
			{
				if (!&iLocal_421[2])
				{
					if (func_1014(&uLocal_562) >= 3f)
					{
						iLocal_421[2] = 1;
						func_264(&uLocal_562);
					}
				}
			}
			else if (!func_2025(Global_35, func_1412(15, 0), 0f))
			{
				if (!&iLocal_421[3])
				{
					if (func_1014(&uLocal_562) >= 3f)
					{
						iLocal_421[3] = 1;
						func_264(&uLocal_562);
					}
				}
			}
			else
			{
				func_264(&uLocal_562);
			}
		}
		if (((iLocal_421[0] || iLocal_421[3]) // PointerArith || iLocal_421[2]) // PointerArith)
		{
			if (func_1483("MUD4_INT_LO"))
			{
				if (func_1001(Global_35, &(uLocal_121[0]), 110f, 1))
				{
					if (_0xd89504d9d7d5057d("MUD4_INT_LO"))
					{
						if (!_0xf01c570e0a0a1e67("MUD4_INT_LO"))
						{
							if (&iLocal_421[3])
							{
								pause_scripted_conversation("MUD4_INT_LO", false, false, false, true);
							}
							else
							{
								pause_scripted_conversation("MUD4_INT_LO", true, false, false, true);
							}
						}
					}
				}
			}
			else if (func_1483("MUD4_WALK2"))
			{
				if (func_1001(Global_35, &(uLocal_121[0]), 110f, 1))
				{
					if (_0xd89504d9d7d5057d("MUD4_WALK2"))
					{
						if (!_0xf01c570e0a0a1e67("MUD4_WALK2"))
						{
							pause_scripted_conversation("MUD4_WALK2", false, false, false, false);
						}
					}
				}
			}
			else if (!func_32(&uLocal_792))
			{
				func_33(&uLocal_792, 0);
			}
			else if (func_1014(&uLocal_792) >= 1f)
			{
				if (!func_1408(4194304))
				{
					if (_0xd89504d9d7d5057d("MUD4_INT_LO"))
					{
						if (_0xf01c570e0a0a1e67("MUD4_INT_LO"))
						{
							bVar0 = true;
						}
					}
					if (_0xd89504d9d7d5057d("MUD4_WALK2"))
					{
						if (_0xf01c570e0a0a1e67("MUD4_WALK2"))
						{
							bVar0 = true;
						}
					}
					if (bVar0)
					{
						if ((iLocal_421[0] || iLocal_421[2]) // PointerArith)
						{
							if (func_1548(cParam0, "MUD4_CMON", 0))
							{
								uLocal_2975 = iVar2972 + 1;
								func_1416(4194304);
								func_141(cParam0, 5);
							}
						}
						if (&iLocal_421[3])
						{
							if (func_1548(cParam0, "MUD4_WRONG", 0))
							{
								uLocal_2975 = iVar2972 + 1;
								func_1416(4194304);
								func_141(cParam0, 5);
							}
						}
					}
				}
			}
		}
	}
	switch (func_1414(cParam0))
	{
		case 0:
			func_1420(cParam0, &(uLocal_121[0]), 1105014447, 422991367, 1, 1);
			func_1501(cParam0, "MUD4_OBJ_GTW", -1082130432, 0, 0, -1, -1, 0);
			sLocal_814 = "MUD4_OBJ_GTW";
			func_264(&uLocal_556);
			func_141(cParam0, 1);
			break;
		case 1:
			if (_does_anim_scene_exist(&(uLocal_466[0])))
			{
				if (_is_anim_scene_loaded(&(uLocal_466[0]), true, false))
				{
					if (_is_anim_scene_finished(&(uLocal_466[0]), false))
					{
						func_1548(cParam0, "MUD4_INT_LO", 0);
						func_264(&uLocal_556);
						func_141(cParam0, 2);
					}
				}
			}
			if (func_1014(&uLocal_556) >= 60f)
			{
				func_1548(cParam0, "MUD4_WALK2", 0);
				func_264(&uLocal_556);
				func_141(cParam0, 2);
			}
			break;
		case 2:
			if (((!func_1461() && !&iLocal_421[0]) && !&iLocal_421[3]) && !&iLocal_421[2])
			{
				iLocal_374[0] = 1;
				func_264(&uLocal_556);
				func_1548(cParam0, "MUD4_WALK2", 0);
				func_141(cParam0, 3);
			}
			else if (!func_1001(Global_35, &(uLocal_121[0]), 30f, 1))
			{
				if (func_184())
				{
					func_53(1, 0);
				}
				iLocal_374[0] = 1;
				func_264(&uLocal_556);
				func_141(cParam0, 4);
			}
			break;
		case 3:
			if ((!func_1461() && !&iLocal_421[0]) && !&iLocal_421[3])
			{
				iLocal_374[0] = 1;
				func_264(&uLocal_556);
				func_141(cParam0, 4);
			}
			else if (!func_1001(Global_35, &(uLocal_121[0]), 30f, 1))
			{
				if (func_184())
				{
					func_53(1, 0);
				}
				iLocal_374[0] = 1;
				func_264(&uLocal_556);
				func_141(cParam0, 4);
			}
			break;
		case 4:
			break;
		case 5:
			if (&iLocal_421[2])
			{
				if (!func_1396(16384) && func_1396(1048576))
				{
					if (!func_32(&uLocal_795))
					{
						func_33(&uLocal_795, 0);
					}
				}
			}
			else if (&iLocal_421[0])
			{
				if (get_entity_speed(Global_35) > 0f)
				{
					if (!func_32(&uLocal_795))
					{
						func_33(&uLocal_795, 0);
					}
				}
			}
			else if (&iLocal_421[3])
			{
				if (get_entity_speed(Global_35) > 0f && func_2025(Global_35, func_1412(15, 0), 0f))
				{
					if (!func_32(&uLocal_795))
					{
						func_33(&uLocal_795, 0);
					}
				}
			}
			if (func_32(&uLocal_795))
			{
				if (func_1014(&uLocal_795) >= 2f)
				{
					if (!func_1483("MUD4_CMON") && !func_1483("MUD4_WRONG"))
					{
						if (_0xd89504d9d7d5057d("MUD4_INT_LO") && _0xf01c570e0a0a1e67("MUD4_INT_LO"))
						{
							restart_scripted_conversation("MUD4_INT_LO");
						}
						else if (_0xd89504d9d7d5057d("MUD4_WALK2") && _0xf01c570e0a0a1e67("MUD4_WALK2"))
						{
							restart_scripted_conversation("MUD4_WALK2");
						}
						if (&iLocal_421[0])
						{
							iLocal_421[0] = 0;
						}
						if (&iLocal_421[3])
						{
							iLocal_421[3] = 0;
						}
						if (&iLocal_421[2])
						{
							iLocal_421[2] = 0;
						}
						func_520(&uLocal_792);
						func_1415(4194304);
						func_1463(1048576);
						func_141(cParam0, 10);
					}
				}
			}
			break;
		case 6:
			func_1501(cParam0, "MUD4_OBJ_HITCH", -1082130432, 0, 0, -1, -1, 0);
			sLocal_814 = "MUD4_OBJ_HITCH";
			if (func_1483("MUD4_WALK2"))
			{
				func_1618("MUD4_WALK2", 0, 0);
			}
			if (func_1483("MUD4_INT_LO"))
			{
				func_1618("MUD4_INT_LO", 0, 0);
			}
			if (func_1548(cParam0, "MUD4_HITCH", 0))
			{
				if (!func_1396(4))
				{
					func_228(Global_35, 1);
					func_229(&(uLocal_121[0]), 1);
					func_230(&cLocal_1073);
					func_1458(4);
					func_264(&uLocal_556);
					func_141(cParam0, 7);
				}
			}
			break;
		case 7:
			if (func_2012(cParam0, "MUD4_OBJ_HITCH", 5, 0, 0))
			{
				func_264(&uLocal_556);
				func_141(cParam0, 8);
			}
			break;
		case 8:
			if (func_1397(cParam0) == 1)
			{
				if (!func_1483("MUD4_HITCH"))
				{
					if (func_1399(&uLocal_556) >= 15f)
					{
						if (func_1548(cParam0, "MUD4_HITCH_DWD", 0))
						{
							func_264(&uLocal_556);
						}
					}
				}
				else
				{
					func_264(&uLocal_556);
				}
			}
			else
			{
				func_141(cParam0, -1);
			}
			break;
		case 9:
			func_1501(cParam0, "MUD4_OBJ_MEET", -1082130432, 0, 0, -1, -1, 0);
			sLocal_814 = "MUD4_OBJ_MEET";
			func_141(cParam0, 51);
			break;
		case 10:
			if (_0x1ecc76792f661cf5("MUD4_INT_LO"))
			{
				func_141(cParam0, 2);
			}
			if (_0x1ecc76792f661cf5("MUD4_WALK2"))
			{
				func_141(cParam0, 3);
			}
			break;
		case 51:
			break;
	}
}

void func_1403(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (iVar0 == 0)
		{
			if (!is_entity_dead(&(uLocal_121[iVar0])))
			{
				if (&uLocal_820[iVar0] < 39)
				{
				}
				switch (&uLocal_820[iVar0])
				{
					case 0:
						set_ped_can_use_auto_conversation_lookat(&(uLocal_121[iVar0]), true);
						func_264(vLocal_568[iVar0]);
						func_1443(uLocal_820[iVar0], 2);
						break;
					case 2:
						if (!_is_anim_scene_started(&(uLocal_466[0]), false))
						{
							if (!func_434(&(uLocal_121[0]), 242628503))
							{
								set_blocking_of_non_temporary_events(&(uLocal_121[0]), true);
								open_sequence_task(&iLocal_34);
								task_follow_waypoint_recording(0, "mud4_walk_gunstore", 0, 24584, -1, 0, 0, -1);
								close_sequence_task(iLocal_34);
								task_perform_sequence(&(uLocal_121[0]), iLocal_34);
								clear_sequence_task(&iLocal_34);
								func_1443(uLocal_820[iVar0], 4);
							}
						}
						break;
					case 4:
						if (func_1447(&(uLocal_121[iVar0]), func_1412(2, 1), 1f, 1, 1))
						{
							if (func_1014(vLocal_568[iVar0]) >= 15f)
							{
								iLocal_374[2] = 1;
								iLocal_374[0] = 1;
								iLocal_374[1] = 1;
								func_264(vLocal_568[iVar0]);
								func_1443(uLocal_820[iVar0], 39);
							}
							else if (func_1447(&(uLocal_121[iVar0]), func_1412(15, 0), 0.4f, 1, 1))
							{
								iLocal_374[2] = 1;
								iLocal_374[0] = 1;
								func_230(&cLocal_1073);
								func_264(vLocal_568[iVar0]);
								func_1443(uLocal_820[iVar0], 39);
							}
						}
						else
						{
							func_264(vLocal_568[iVar0]);
						}
						break;
					case 1:
						if (func_1447(&(uLocal_121[iVar0]), func_1412(2, 1), 1f, 1, 1))
						{
							if (func_1014(vLocal_568[iVar0]) >= 15f)
							{
								iLocal_374[2] = 1;
								func_264(vLocal_568[iVar0]);
								func_1443(uLocal_820[iVar0], 39);
							}
							else if (func_1447(&(uLocal_121[iVar0]), func_1412(2, 1), 0.4f, 1, 1))
							{
								iLocal_374[2] = 1;
								func_264(vLocal_568[iVar0]);
								func_1443(uLocal_820[iVar0], 39);
							}
						}
						else
						{
							func_264(vLocal_568[iVar0]);
						}
						break;
					case 39:
						break;
				}
			}
		}
		iVar0++;
	}
	if (&iLocal_374[3])
	{
		if (!&iLocal_359[4])
		{
			iLocal_359[4] = 1;
			if (!is_entity_dead(&(iLocal_125[0])))
			{
				if (_does_scenario_point_exist(&(iLocal_330[0])))
				{
					set_blocking_of_non_temporary_events(&(iLocal_125[0]), false);
					_task_use_scenario_point(&(iLocal_125[0]), &(iLocal_330[0]), 0, 0, true, false, 0, false, -1f, false);
				}
			}
		}
	}
}

void func_1404(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		func_1776(0);
		_0x9f9a829c6751f3c7(get_player_index(), 28, 1);
		if (iVar816 < 9)
		{
			if (!&iLocal_374[1])
			{
			}
			else if (func_1397(cParam0) < 2)
			{
				if (is_ped_in_combat(Global_35, 0))
				{
					func_1392(cParam0, 1, 0, 1);
				}
				else if (func_1001(Global_35, &(uLocal_121[0]), 30f, 1))
				{
					func_1392(cParam0, 1, 0, 0);
				}
			}
		}
		switch (iVar816)
		{
			case 0:
				func_264(&uLocal_565);
				func_1039(&uLocal_819, 1);
				break;
			case 1:
				if (!_is_anim_scene_started(&(uLocal_466[0]), false) || _0x005e6f28dd7ed58d(&(uLocal_466[0]), "ARTHUR"))
				{
					if (!func_434(Global_35, -189986839))
					{
						task_lead_horse(Global_35, iLocal_209);
						_0x2208438012482a1a(Global_35, true, false);
						func_1039(&uLocal_819, 3);
					}
				}
				break;
			case 3:
				if (!func_1408(2))
				{
					func_1416(2);
				}
				if (func_1014(&uLocal_565) >= 2f)
				{
					func_2013(&uLocal_957);
					func_2014(&(uLocal_121[0]), Global_35, &uLocal_957, 0f, 0f, 0f, "mud4_walk_gunstore", 17420, 1, 3f, -1f, 2.27f, 1f, 1092616192, -1, 1, 0, 0, 0, 1);
					func_2013(&uLocal_995);
					func_2015(Global_35, &(uLocal_121[0]), &uLocal_995, -1f, 0, 0, -1f, -1f, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
					func_264(&uLocal_565);
					func_1039(&uLocal_819, 4);
				}
				break;
			case 4:
				if (func_1014(&uLocal_565) >= 20f)
				{
					if (!bVar2971)
					{
						iLocal_2974 = 1;
					}
				}
				break;
			case 9:
				break;
		}
	}
}

void func_1405(char[4] cParam0)
{
}

void func_1406()
{
	if (!Local_2947.f_15)
	{
		return;
	}
	if (Local_2947.f_26 > get_game_timer())
	{
		return;
	}
	if ((!does_entity_exist(Local_2947.f_17) && Local_2947.f_14 > 1) && iVar2945 != 0)
	{
		if (func_2026() && func_1175(Global_36, Local_2947.f_11) < 100f)
		{
			if (Local_2947.f_18 == 0)
			{
				Local_2947.f_18 = _0x6f3068258a499e52(iVar2945, Local_2947.f_11, 11);
			}
			else if (_0x1ff441d7954f8709(Local_2947.f_18))
			{
				Local_2947.f_17 = get_object_index_from_entity_index(_0x4735e2a4bb83d9da(Local_2947.f_18));
			}
		}
		Local_2947.f_26 = get_game_timer() + 1800;
	}
	switch (Local_2947.f_14)
	{
		case 0:
			func_2027();
			Local_2947.f_14 = 1;
			break;
		case 1:
			if (func_2028())
			{
				Local_2947.f_14 = 2;
			}
			break;
		case 2:
			if (func_2029())
			{
				Local_2947.f_14 = 3;
				Local_2947.f_24 = 0;
				Local_2947.f_21 = 0;
				Local_2947.f_22 = func_792(func_328());
				if (Local_2947.f_22 > 12)
				{
					Local_2947.f_22 = (Local_2947.f_22 % 12);
				}
			}
			break;
		case 3:
			Local_2947.f_25 = 1;
			if (does_entity_exist(Local_2947.f_17))
			{
				if (does_entity_have_drawable(Local_2947.f_17))
				{
					Local_2947.f_25 = 0;
					play_entity_anim(Local_2947.f_17, Local_2947.f_7, Local_2947.f_6, 1000f, false, true, false, 0f, 0);
					Local_2947.f_14 = 4;
				}
			}
			if (Local_2947.f_21 >= Local_2947.f_22)
			{
				Local_2947.f_14 = 2;
			}
			break;
		case 4:
			if (func_2030(Local_2947.f_17, Local_2947.f_6, Local_2947.f_7, 0))
			{
				play_entity_anim(Local_2947.f_17, Local_2947.f_8, Local_2947.f_6, 1000f, true, true, false, 0f, 0);
				Local_2947.f_23 = get_game_timer() + 1800;
				Local_2947.f_14 = 5;
			}
			break;
		case 5:
			if (Local_2947.f_24 < get_game_timer())
			{
				Local_2947.f_21++;
				Local_2947.f_24 = get_game_timer() + 1800;
			}
			if (Local_2947.f_21 >= Local_2947.f_22 && func_2030(Local_2947.f_17, Local_2947.f_6, Local_2947.f_8, 0.02f))
			{
				play_entity_anim(Local_2947.f_17, Local_2947.f_9, Local_2947.f_6, 8f, false, false, false, 0f, 0);
				Local_2947.f_14 = 2;
			}
			break;
	}
	if (Local_2947.f_25 && Local_2947.f_14 > 2)
	{
		if (_0x714a0ea7de1167be(Local_2947.f_10, "CHURCH_BELL_SOUNDS") && Local_2947.f_24 < get_game_timer())
		{
			Local_2947.f_24 = get_game_timer() + 1800;
			_play_sound_from_position(Local_2947.f_10, Local_2947.f_11, "CHURCH_BELL_SOUNDS", false, 0, true, 0);
			Local_2947.f_21++;
		}
	}
}

void func_1407()
{
	if ((!get_is_task_active(Global_35, 8) && !func_2031(7)) && get_entity_speed(iLocal_209) <= 0.01f)
	{
		if (!func_32(&uLocal_810))
		{
			func_33(&uLocal_810, 0);
		}
		else if (func_1014(&uLocal_810) >= 10f)
		{
			if (get_closest_vehicle_node(get_entity_coords(iLocal_209, true, false), &vVar0, 1, 3f, 0f))
			{
				if (func_1413(iLocal_209, vVar0, 1) >= 1f && !func_434(iLocal_209, 242628503))
				{
					open_sequence_task(&iLocal_35);
					task_follow_nav_mesh_to_coord(0, vVar0, 1f, 60000, 0.25f, 0, 40000f);
					task_stand_still(0, -1);
					close_sequence_task(iLocal_35);
					task_perform_sequence(iLocal_209, iLocal_35);
					clear_sequence_task(&iLocal_35);
				}
			}
		}
	}
	else
	{
		if (get_is_task_active(Global_35, 8))
		{
			if (func_434(iLocal_209, 242628503))
			{
				clear_ped_tasks(iLocal_209, 1, 0);
			}
		}
		if (func_32(&uLocal_810))
		{
			func_520(&uLocal_810);
		}
	}
}

bool func_1408(int iParam0)
{
	return func_436(iLocal_23, iParam0);
}

void func_1409()
{
	if (_0xdd0b7c5ae58f721d(&cLocal_1073) && !_0x927b810e43e99932(&cLocal_1073))
	{
		_0xb8b207c34285e978(&cLocal_1073);
		uVar0[0] = &uLocal_121[0];
		_0xfeb8646818294c75(&cLocal_1073, &uVar0);
	}
}

void func_1410(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (bParam8)
	{
		set_ped_reset_flag(iParam0, 229, true);
	}
	if (is_ped_a_player(iParam0))
	{
		if (bParam3 && _get_ped_crouch_movement(iParam0))
		{
			_set_ped_crouch_movement(iParam0, false, 0, false);
		}
		func_2032(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			set_ped_reset_flag(iParam0, 188, true);
		}
	}
}

void func_1411(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (is_entity_dead(iParam0))
	{
	}
	if (is_entity_dead(iParam1))
	{
	}
	if (bParam8)
	{
		set_ped_reset_flag(iParam0, 229, true);
	}
	if (is_ped_a_player(iParam0))
	{
		if (bParam3 && _get_ped_crouch_movement(iParam0))
		{
			_set_ped_crouch_movement(iParam0, false, 0, false);
		}
		func_2032(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			set_ped_reset_flag(iParam0, 188, true);
		}
	}
}

Vector3 func_1412(int iParam0, int iParam1)
{
	return func_1156(iParam0, iParam1);
}

float func_1413(int iParam0, vector3 vParam1, bool bParam4)
{
	if (!does_entity_exist(iParam0))
	{
		return 0f;
	}
	return get_distance_between_coords(get_entity_coords(iParam0, false, false), vParam1, bParam4);
}

bool func_1414(char[4] cParam0)
{
	return cParam0->f_599;
}

void func_1415(int iParam0)
{
	if (func_1408(iParam0))
	{
		func_549(&iLocal_23, iParam0);
	}
}

void func_1416(int iParam0)
{
	if (!func_1408(iParam0))
	{
		func_464(&iLocal_23, iParam0);
	}
}

float func_1417(int iParam0, int iParam1)
{
	return func_1157(iParam0, iParam1);
}

void func_1418(int iParam0, int iParam1, vector3 vParam2, float fParam5, int iParam6, bool bParam7, bool bParam8, char* sParam9, float fParam10)
{
	task_start_scenario_at_position(iParam0, iParam1, vParam2, fParam5, iParam6, bParam7, bParam8, sParam9, fParam10, false);
}

int func_1419(int iParam0, vector3 vParam1, bool bParam4)
{
	iVar0 = _blip_add_for_coord(iParam0, vParam1);
	if (bParam4)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

int func_1420(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (is_entity_dead(iParam1))
	{
		return iVar0;
	}
	bVar1 = func_560(cParam0, iParam1);
	bVar2 = (is_entity_a_ped(iParam1) && func_557(get_ped_index_from_entity_index(iParam1)));
	if (bVar2)
	{
		iVar3 = func_558(get_ped_index_from_entity_index(iParam1));
	}
	if (bVar1)
	{
		func_563(cParam0, iParam1, 128);
		if (bParam4)
		{
			func_563(cParam0, iParam1, 1024);
		}
	}
	if (is_entity_a_ped(iParam1) && bParam4)
	{
		iVar0 = get_blip_from_entity(iParam1);
		if (bVar2)
		{
			func_2033(iVar3);
			if (does_blip_exist(iVar0))
			{
				_blip_set_modifier(iVar0, -546708623);
				if (bParam5)
				{
					_blip_set_modifier(iVar0, 231194138);
				}
			}
		}
		else if (func_560(cParam0, iParam1) && does_blip_exist(iVar0))
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
		if (func_564(cParam0, iParam1, &iVar4))
		{
			func_565(cParam0->f_5423[iVar4]);
		}
	}
	if (bVar2)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_566(iVar3);
	}
	return iVar0;
}

void func_1421()
{
	if (!is_ped_on_mount(Global_35))
	{
		if (func_1005(Global_35, &(uLocal_121[0]), 1, 1) <= 5f)
		{
			set_ped_max_move_blend_ratio(Global_35, 1f);
		}
		else if (func_1005(Global_35, &(uLocal_121[0]), 1, 1) <= 10f)
		{
			set_ped_max_move_blend_ratio(Global_35, 1.5f);
		}
		else if (func_1005(Global_35, &(uLocal_121[0]), 1, 1) <= 15f)
		{
			set_ped_max_move_blend_ratio(Global_35, 2f);
		}
	}
}

void func_1422()
{
	if (does_entity_exist(Local_2947.f_17))
	{
		if (is_entity_playing_anim(Local_2947.f_17, Local_2947.f_6, Local_2947.f_7, 1))
		{
			stop_entity_anim(Local_2947.f_17, Local_2947.f_6, Local_2947.f_7, -1000f);
		}
		if (is_entity_playing_anim(Local_2947.f_17, Local_2947.f_6, Local_2947.f_8, 1))
		{
			stop_entity_anim(Local_2947.f_17, Local_2947.f_6, Local_2947.f_8, -1000f);
		}
		if (is_entity_playing_anim(Local_2947.f_17, Local_2947.f_6, Local_2947.f_9, 1))
		{
			stop_entity_anim(Local_2947.f_17, Local_2947.f_6, Local_2947.f_9, -1000f);
		}
	}
	if (Local_2947.f_16)
	{
		if (has_anim_dict_loaded(Local_2947.f_6))
		{
			remove_anim_dict(Local_2947.f_6);
		}
		Local_2947.f_16 = 0;
	}
	if (Local_2947.f_18 != 0)
	{
		_0xd2b9c78537ed5759(Local_2947.f_18);
	}
}

void func_1423(char[4] cParam0, int iParam1)
{
	cParam0->f_1[func_138(iParam1)]->f_12 = 1;
}

void func_1424(char[4] cParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_138(iParam2);
	if (!func_1782(iVar0))
	{
		return;
	}
	iVar1 = func_1783(iParam3);
	if (!func_1784(iVar1))
	{
		return;
	}
	(*cParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1425(char[4] cParam0, int iParam1, char[16] cParam2)
{
	cParam0->f_1[func_138(iParam1)]->f_13 = { cParam2 };
}

void func_1426(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_138(iParam1)]->f_21 = iParam2;
}

bool func_1427(int iParam0)
{
	if (!func_2034(iParam0))
	{
		return false;
	}
	if (Global_1914319->f_3[iParam0]->f_1 == 5)
	{
		return true;
	}
	return false;
}

int func_1428(int iParam0)
{
	return _money_get_cash_balance();
}

void func_1429(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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

void func_1430(int iParam0, int iParam1)
{
	if (func_26() == 0)
	{
		return;
	}
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = func_497(iParam0);
	if (iVar0 == -1 || iVar0 >= 25)
	{
		return;
	}
	iVar1 = func_2035(&(Global_20710.f_1126), iParam1, iParam0);
	iVar2 = func_2035(&(Global_20710[iVar0]->f_2), iParam1, iParam0);
	if (iVar1 >= 0)
	{
		func_2036(&(Global_20710.f_1126), iParam1, iParam0, -1);
	}
	if (iVar2 >= 0)
	{
		func_2036(&(Global_20710[iVar0]->f_2), iParam1, iParam0, -1);
	}
}

int func_1431(int iParam0, int iParam1)
{
	if (!func_493(iParam0))
	{
		return 0;
	}
	iVar0 = func_497(iParam0);
	if (!func_498(iVar0))
	{
		return 0;
	}
	if (!func_2037(iParam1, iParam0))
	{
		return 0;
	}
	Global_1914319->f_3[iVar0]->f_413 = iParam1;
	return 1;
}

void func_1432(char[4] cParam0)
{
	if (func_1414(cParam0) > 0 && func_1414(cParam0) < 51)
	{
		if (func_2024(cParam0, 1, 50f, 100f, 0, 0, 1, 422991367))
		{
			if (!&iLocal_409[1])
			{
				iLocal_409[1] = 1;
			}
		}
		else if (&iLocal_409[1])
		{
			iLocal_409[1] = 0;
		}
		if (!&iLocal_374[4])
		{
			if (&iLocal_421[0])
			{
				iLocal_421[0] = 0;
				if (!func_257())
				{
					if (!func_1461())
					{
						if (func_1001(Global_35, &(uLocal_121[0]), 90f, 1))
						{
							func_1548(cParam0, "MUD4_DAWD", 0);
						}
					}
				}
			}
		}
	}
	iVar0 = func_2038(6);
	switch (func_1414(cParam0))
	{
		case 0:
			if (!func_14(cParam0, 8))
			{
				func_1420(cParam0, &(uLocal_121[0]), 1105014447, 422991367, 1, 1);
			}
			if (func_1548(cParam0, "MUD4_GUNSTORE", 0))
			{
				task_look_at_entity(&(uLocal_121[0]), Global_35, -1, 0, 51, 0);
				func_264(&uLocal_556);
				func_141(cParam0, 1);
			}
			break;
		case 1:
			if (!func_1461())
			{
				if (func_1005(Global_35, &(uLocal_121[0]), 1, 1) <= 15f && has_entity_clear_los_to_entity(Global_35, &(uLocal_121[0]), 17))
				{
					func_1548(cParam0, "MUD4_GUNRESP", 0);
				}
				func_214(cParam0, &(uLocal_121[0]), 1);
				iLocal_93 = func_2039(75);
				if (func_2040(iLocal_93))
				{
					func_2041(iLocal_93, -401963276);
				}
				func_1501(cParam0, "MUD4_OBJ_ENTER", -1082130432, 0, 0, -1, -1, 0);
				func_141(cParam0, 2);
				func_264(&uLocal_556);
			}
			break;
		case 2:
			if (func_2012(cParam0, "MUD4_OBJ_ENTER", 4, 0, 0))
			{
				func_141(cParam0, 3);
			}
			break;
		case 3:
			if (!func_1461())
			{
				iLocal_374[9] = 1;
				func_264(&uLocal_556);
				func_141(cParam0, 4);
			}
			break;
		case 4:
			if (func_1014(&uLocal_556) >= 6f)
			{
				if (!func_257())
				{
					iLocal_421[0] = 1;
					func_264(&uLocal_556);
					func_141(cParam0, 5);
				}
			}
			break;
		case 5:
			break;
		case 10:
			func_1501(cParam0, "MUD4_OBJ_BUY", -1082130432, 0, 0, -1, -1, 0);
			func_264(&uLocal_556);
			func_141(cParam0, 12);
			break;
		case 12:
			if (func_1014(&uLocal_556) >= 1f)
			{
				if (!func_1461())
				{
					if (is_entity_in_volume(Global_35, &(iLocal_228[42]), true, 0))
					{
						if (iVar0 == 4)
						{
							if (func_2042("MUD4_GUNS1"))
							{
								if (func_2043("MUD4_GUNS1"))
								{
									restart_scripted_conversation("MUD4_GUNS1");
								}
							}
							else
							{
								func_1548(cParam0, "MUD4_GUNS1", 0);
							}
						}
						else if (iVar0 == 1)
						{
							func_1548(cParam0, "MUD4_GUNS2", 0);
						}
						else if (iVar0 == 2 || iVar0 == 3)
						{
							func_1548(cParam0, "MUD4_GUNS3", 0);
						}
						else if (iVar0 == 0)
						{
							if (func_2042("MUD4_GUNS2"))
							{
								if (func_2043("MUD4_GUNS2"))
								{
									restart_scripted_conversation("MUD4_GUNS2");
								}
							}
							else
							{
								func_1548(cParam0, "MUD4_GUNS2", 0);
							}
						}
						if (!func_1408(16))
						{
							func_1416(16);
						}
						func_264(&uLocal_556);
						func_141(cParam0, 13);
					}
				}
			}
			break;
		case 13:
			if (!func_1461())
			{
				func_264(&uLocal_556);
				func_141(cParam0, 14);
			}
			break;
		case 14:
			if (func_1408(16))
			{
				func_1415(16);
			}
			if (!func_1461())
			{
				if (is_entity_in_volume(Global_35, &(iLocal_228[42]), true, 0))
				{
					if (!&iLocal_374[10])
					{
						if (&iLocal_374[7])
						{
							if (!func_1408(32))
							{
								func_1416(32);
							}
							if (func_2042("MUD4_NOMONEY"))
							{
								if (func_2043("MUD4_NOMONEY"))
								{
									restart_scripted_conversation("MUD4_NOMONEY");
								}
							}
							else
							{
								func_1548(cParam0, "MUD4_NOMONEY", 0);
							}
						}
					}
					func_264(&uLocal_556);
					func_141(cParam0, 15);
				}
			}
			break;
		case 15:
			if (!func_1461())
			{
				if (!&iLocal_374[10])
				{
					if (&iLocal_374[7])
					{
						iLocal_374[10] = 1;
					}
				}
				func_264(&uLocal_556);
				func_141(cParam0, 51);
			}
			break;
		case 20:
			if ((!func_1461() && !is_scripted_speech_playing(&(iLocal_129[0]))) && !is_scripted_speech_playing(Global_35))
			{
				if (!func_1408(64))
				{
					func_1548(cParam0, "MUD4_NOBUY", 0);
					func_1416(64);
				}
				func_264(&uLocal_556);
				func_141(cParam0, 21);
			}
			else if (!is_entity_in_volume(Global_35, &(iLocal_228[42]), true, 0))
			{
				if (_0x1ecc76792f661cf5("MUD4_GUNS1"))
				{
					pause_scripted_conversation("MUD4_GUNS1", true, false, false, false);
				}
				else if (_0x1ecc76792f661cf5("MUD4_GUNS2"))
				{
					pause_scripted_conversation("MUD4_GUN2", true, false, false, false);
				}
				else if (_0x1ecc76792f661cf5("MUD4_GUNS3"))
				{
					pause_scripted_conversation("MUD4_GUN2", true, false, false, false);
				}
				else if (_0x1ecc76792f661cf5("MUD4_NOMONEY"))
				{
					pause_scripted_conversation("MUD4_NOMONEY", true, false, false, false);
				}
			}
			break;
		case 21:
			if (!func_1461())
			{
				func_264(&uLocal_556);
				if (func_1408(16))
				{
					func_141(cParam0, 12);
				}
				else if (func_1408(32))
				{
					func_141(cParam0, 14);
				}
			}
			break;
		case 51:
			break;
	}
}

void func_1433(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (iVar0 == 0)
		{
			if (!is_entity_dead(&(uLocal_121[iVar0])))
			{
				if (&uLocal_820[iVar0] > 0)
				{
					if (func_14(cParam0, 8))
					{
						if (!&iLocal_374[1])
						{
							if (!&iLocal_374[9])
							{
								if (!bVar2974)
								{
									func_1411(Global_35, &(uLocal_121[0]), 1, 1, 1, 0, 1, 1, 0, 1, 1);
									func_1410(&(uLocal_121[0]), Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
								}
							}
						}
					}
				}
				switch (&uLocal_820[iVar0])
				{
					case 0:
						set_ped_can_use_auto_conversation_lookat(&(uLocal_121[iVar0]), true);
						func_264(vLocal_568[iVar0]);
						func_1443(uLocal_820[iVar0], 32);
						break;
					case 32:
						if (&iLocal_374[4])
						{
							func_264(vLocal_568[iVar0]);
							func_1443(uLocal_820[iVar0], 39);
						}
						else if (&iLocal_374[5])
						{
							func_264(vLocal_568[iVar0]);
							func_1443(uLocal_820[iVar0], 39);
						}
						break;
					case 39:
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_1434(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		switch (iVar816)
		{
			case 0:
				func_264(&uLocal_565);
				func_1039(&uLocal_819, 4);
				break;
			case 2:
				if (&iLocal_374[7])
				{
					if (!bVar2975)
					{
						if (func_1447(Global_35, func_1412(1, 4), 2f, 1, 1))
						{
							iLocal_2978 = 1;
							iLocal_2979 = 0;
							iLocal_374[26] = 1;
							set_player_control(get_player_index(), false, 256, false);
							task_follow_nav_mesh_to_coord(Global_35, func_1412(1, 4), 1f, 20000, 0.25f, 0, func_1417(1, 4));
							func_264(&uLocal_565);
							func_1039(&uLocal_819, 3);
						}
					}
				}
				else
				{
					iLocal_2979 = 1;
					if (&iLocal_374[9])
					{
						if (_does_volume_exist(iVar2977))
						{
							_delete_volume(iVar2977);
						}
					}
				}
				break;
			case 3:
				if (bVar2975)
				{
					if (!bVar2976)
					{
						if (get_script_task_status(Global_35, 713668775, true) == 8)
						{
							iLocal_2979 = 1;
						}
						else if (func_1014(&uLocal_565) >= 6f)
						{
							iLocal_2979 = 1;
						}
					}
				}
				break;
			case 4:
				break;
			case 9:
				break;
		}
	}
}

void func_1435()
{
	switch (iLocal_16)
	{
		case 0:
			if (_does_anim_scene_exist(&(uLocal_466[15])))
			{
				func_2044(15);
				iLocal_16 = 1;
			}
			break;
		case 1:
			break;
		case 2:
			if (_does_anim_scene_exist(&(uLocal_466[15])))
			{
				if (!_is_anim_scene_started(&(uLocal_466[15]), false))
				{
					start_anim_scene(&(uLocal_466[15]));
				}
				else
				{
					iLocal_16 = 3;
				}
			}
			break;
		case 3:
			break;
		case 4:
			if (func_2045(&(uLocal_121[0]), Global_35, 0f) == 0)
			{
				if (func_2045(&(uLocal_121[0]), Global_35, 1f) == 2)
				{
					func_1549(15, 3);
				}
				else if (func_2045(&(uLocal_121[0]), Global_35, 1f) == 3)
				{
					func_1549(15, 1);
				}
			}
			else if (func_2045(&(uLocal_121[0]), Global_35, 0f) == 1)
			{
				if (func_2045(&(uLocal_121[0]), Global_35, 1f) == 2)
				{
					func_1549(15, 2);
				}
				else if (func_2045(&(uLocal_121[0]), Global_35, 1f) == 3)
				{
					func_1549(15, 1);
				}
			}
			iLocal_16 = 8;
			break;
		case 8:
			if (func_2046(&(uLocal_466[15])))
			{
				if (_does_anim_scene_exist(&(uLocal_466[15])))
				{
					_delete_anim_scene(&(uLocal_466[15]));
				}
			}
			break;
	}
}

int func_1436(char[4] cParam0)
{
	switch (iLocal_32)
	{
		case 0:
			func_2047();
			func_2048(6);
			iLocal_32 = 1;
			break;
		case 1:
			func_2049(0);
			func_1538(cParam0, "MUD4_BC1", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
			iLocal_32 = 2;
			break;
		case 2:
			iVar0 = func_1624(&(iLocal_129[0]));
			if (_0x3ee1f7a8c32f24e1(player_id(), &iVar0, false, false))
			{
				if (&iLocal_129[0] == get_ped_index_from_entity_index(iVar0))
				{
					func_2049(1);
					func_1538(cParam0, "MUD4_BC2", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
					iLocal_32 = 3;
				}
			}
			break;
		case 3:
			iVar0 = func_1624(&(iLocal_129[0]));
			if (!_0x3ee1f7a8c32f24e1(player_id(), &iVar0, false, false))
			{
				iLocal_32 = 1;
			}
			if (func_2050() == 1)
			{
				func_2049(2);
				func_1538(cParam0, "MUD4_BC3", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
				iLocal_32 = 4;
			}
			break;
		case 4:
			if (!func_2051(0))
			{
				iLocal_32 = 1;
			}
			if (func_2052(75, "MENU_RIFLES"))
			{
				func_2049(3);
				func_1538(cParam0, "MUD4_BC4", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
				iLocal_32 = 5;
			}
			break;
		case 5:
			if (!func_2051(0))
			{
				iLocal_32 = 1;
			}
			if (!func_2052(75, "MENU_RIFLES"))
			{
				iLocal_32 = 4;
			}
			if (has_ped_got_weapon(Global_35, -506285289, 0, false) && func_2053(75, -506285289))
			{
				func_2049(4);
				func_1538(cParam0, "MUD4_BC5", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
				iLocal_32 = 6;
			}
			break;
		case 6:
			if (!func_2053(75, -506285289))
			{
				func_2049(5);
				func_1538(cParam0, "MUD4_BC6", 0, -1, 1, -1082130432, 0, 0, -1, -1, 0);
				iLocal_32 = 7;
			}
			break;
		case 7:
			if (!func_2051(0))
			{
				func_518();
				_0xdd1232b332cbb9e7(3, 1, 0);
				iLocal_32 = 8;
			}
			break;
		case 8:
			return 1;
	}
	return 0;
}

bool func_1437(char[4] cParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar1 = 0;
		while (iVar1 <= (5 - 1))
		{
			if (func_2054(cParam0, iVar1))
			{
			}
			else
			{
				bVar0 = true;
			}
			iVar1++;
		}
		if (func_39(cParam0) >= 0 && func_39(cParam0) <= 2)
		{
			if (is_entity_dead(&(iLocal_129[0])))
			{
			}
			else
			{
				func_1533(uLocal_888[1], 2);
			}
		}
		else if (func_39(cParam0) == 7)
		{
			if (((is_entity_dead(&(iLocal_129[1])) || is_entity_dead(&(iLocal_129[2]))) || is_entity_dead(&(iLocal_129[3]))) || is_entity_dead(&(iLocal_129[4])))
			{
			}
			else
			{
				func_1533(uLocal_888[1], 2);
			}
		}
		else if ((is_entity_dead(&(iLocal_129[1])) || is_entity_dead(&(iLocal_129[2]))) || is_entity_dead(&(iLocal_129[3])))
		{
		}
		else
		{
			func_1533(uLocal_888[1], 2);
		}
		return !bVar0;
	}
	else
	{
		switch (&uLocal_888[1])
		{
			case 0:
				func_1533(uLocal_888[1], 1);
				break;
			case 1:
				if (func_39(cParam0) >= 0 && func_39(cParam0) <= 2)
				{
					if (is_entity_dead(&(iLocal_129[0])))
					{
						func_2054(cParam0, 0);
					}
					else
					{
						func_1533(uLocal_888[1], 2);
					}
				}
				else if (func_39(cParam0) == 7)
				{
					if (((is_entity_dead(&(iLocal_129[1])) || is_entity_dead(&(iLocal_129[2]))) || is_entity_dead(&(iLocal_129[3]))) || is_entity_dead(&(iLocal_129[4])))
					{
						if (is_entity_dead(&(iLocal_129[1])))
						{
							func_2054(cParam0, 1);
						}
						else if (is_entity_dead(&(iLocal_129[2])))
						{
							func_2054(cParam0, 2);
						}
						else if (is_entity_dead(&(iLocal_129[3])))
						{
							func_2054(cParam0, 3);
						}
						else if (is_entity_dead(&(iLocal_129[4])))
						{
							func_2054(cParam0, 4);
						}
					}
					else
					{
						func_1533(uLocal_888[1], 2);
					}
				}
				else if ((is_entity_dead(&(iLocal_129[1])) || is_entity_dead(&(iLocal_129[2]))) || is_entity_dead(&(iLocal_129[3])))
				{
					if (is_entity_dead(&(iLocal_129[1])))
					{
						func_2054(cParam0, 1);
					}
					else if (is_entity_dead(&(iLocal_129[2])))
					{
						func_2054(cParam0, 2);
					}
					else if (is_entity_dead(&(iLocal_129[3])))
					{
						func_2054(cParam0, 3);
					}
				}
				else
				{
					func_1533(uLocal_888[1], 2);
				}
				break;
			case 2:
				return true;
		}
	}
	return !bVar0;
}

bool func_1438(int iParam0)
{
	if (_0x5102307ce88798eb(iParam0))
	{
		return is_tracked_ped_visible(iParam0);
	}
	return false;
}

void func_1439(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		task_clear_look_at(iParam0);
	}
}

bool func_1440()
{
	if (!func_498(Global_1914319->f_16855))
	{
		return false;
	}
	return func_2055(Global_1914319->f_16855);
}

int func_1441()
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (func_1111(iVar0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1442(int iParam0, bool bParam1, int iParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return;
	}
	func_1390(iParam0, bParam1);
	_0x18262cafebb5fbe1(iParam0, iParam2, iParam3, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam2, iParam3, 0, -1, -1, 2);
}

void func_1443(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1444(int iParam0)
{
	if (!func_2056(iParam0))
	{
		return;
	}
	if (!func_2057(iParam0))
	{
	}
	Global_32074.f_2697.f_6[iParam0]->f_4 = 1;
}

void func_1445(int iParam0)
{
	if (func_2056(iParam0))
	{
		Global_32074.f_2697.f_6[iParam0]->f_5 = 0;
	}
}

void func_1446()
{
	StringCopy(&Local_1089, "camera_treatments", 64);
	StringCopy(&(Local_1089.f_8), "GENERIC_CME_PULL_OUT_TREATMENT_REQUEST", 64);
	_0x6a4d224fc7643941(&Local_1089);
}

bool func_1447(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6)
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
	else if (func_1837(get_entity_coords(iParam0, bParam5, false), vParam1) <= (fParam4 * fParam4))
	{
		return true;
	}
	return false;
}

void func_1448(int iParam0, vector3 vParam1, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, int iParam10, bool bParam11, int iParam12)
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
	if (func_2058(vParam1, 0f, 0f, 0f))
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
	bVar3 = func_1413(iParam0, vParam1, 1);
	if ((bVar3 <= bParam5 && bVar3 > bParam6) && bVar3 > bParam7)
	{
		if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
		{
			set_ped_max_move_blend_ratio(iVar0, 1.75f);
		}
		if ((func_2059() && !is_entity_dead(iVar1)) && _is_draft_vehicle(iVar1))
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
			if (!is_entity_dead(iVar0) && !func_1602(iParam0, 501393341))
			{
				task_dismount_animal(iParam0, iParam12, 0, 0, 0, 0);
			}
			if (!is_entity_dead(iVar1) && !func_1602(iParam0, -828834893))
			{
				task_leave_any_vehicle(iParam0, 0, iParam12);
			}
		}
	}
}

void func_1449(int iParam0, float fParam1)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	get_current_ped_weapon(iParam0, &iVar0, true, 0, false);
	if ((iVar0 != -1569615261 && !func_1602(iParam0, 716706914)) && get_script_task_status(iParam0, 716706914, true) != 6)
	{
		if ((is_ped_shooting(iParam0) || is_ped_in_combat(iParam0, 0)) || is_ped_shooting(Global_35))
		{
			if (func_32(fParam1))
			{
				func_520(fParam1);
			}
		}
		else if (!func_32(fParam1))
		{
			func_264(fParam1);
		}
		else if (func_1014(fParam1) >= 1.5f)
		{
			set_current_ped_weapon(iParam0, -1569615261, false, 0, false, false);
			set_current_ped_weapon(iParam0, -1569615261, false, 1, false, false);
			task_swap_weapon(iParam0, 0, 1, 0, 0);
			func_264(fParam1);
		}
	}
}

void func_1450(char[4] cParam0)
{
	if (func_1414(cParam0) > 1 && func_1414(cParam0) <= 51)
	{
		func_2060(&(uLocal_121[0]), cVar810, 0, 1);
		if (!func_1396(131072))
		{
			if (func_2024(cParam0, 1, 35f, 100f, 0, 0, 1, 422991367))
			{
				if (!&iLocal_409[1])
				{
					iLocal_409[1] = 1;
				}
			}
			else if (&iLocal_409[1])
			{
				func_1501(cParam0, sVar811, -1082130432, 0, 0, -1, -1, 0);
				func_1538(cParam0, sVar811, 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
				iLocal_409[1] = 0;
			}
		}
		if (&iLocal_421[0])
		{
			iLocal_421[0] = 0;
			if (!func_257())
			{
				if (!func_1461())
				{
					if (func_1001(Global_35, &(uLocal_121[0]), 110f, 1))
					{
						func_1548(cParam0, "MUD4_NOMOUNT", 0);
					}
				}
			}
		}
		if (&iLocal_421[3])
		{
			iLocal_421[3] = 0;
			if (!func_257())
			{
				if (!func_1461())
				{
					if (func_1001(Global_35, &(uLocal_121[0]), 110f, 1))
					{
						func_1548(cParam0, "MUD4_OFFROAD", 0);
					}
				}
			}
		}
		if (&iLocal_421[5])
		{
			iLocal_421[5] = 0;
			if (!func_257())
			{
				if (!func_1461())
				{
					if (func_1001(Global_35, &(uLocal_121[0]), 110f, 1))
					{
						func_1548(cParam0, "MUD4_FIGHT", 0);
					}
				}
			}
		}
	}
	switch (func_1414(cParam0))
	{
		case 1:
			func_1420(cParam0, &(uLocal_121[0]), 1105014447, 422991367, 1, 1);
			func_1501(cParam0, "MUD4_OBJ_LEAVE", -1082130432, 0, 0, -1, -1, 0);
			sLocal_814 = "MUD4_OBJ_LEAVE";
			if (func_2012(cParam0, "MUD4_OBJ_LEAVE", 4, 0, 0))
			{
				func_264(&uLocal_556);
				func_141(cParam0, 2);
			}
			break;
		case 2:
			if (!func_1461())
			{
				func_264(&uLocal_556);
				func_141(cParam0, 3);
			}
			break;
		case 3:
			if (!func_257())
			{
				func_264(&uLocal_556);
				func_141(cParam0, 51);
			}
			break;
		case 10:
			func_214(cParam0, &(uLocal_121[0]), 1);
			func_1529(7);
			func_1501(cParam0, "MUD4_OBJ_MTJ", -1082130432, 0, 0, -1, -1, 0);
			sLocal_814 = "MUD4_OBJ_MTJ";
			func_264(&uLocal_556);
			func_141(cParam0, 11);
			break;
		case 11:
			if (&iLocal_374[11])
			{
				func_264(&uLocal_556);
				func_141(cParam0, 12);
			}
			break;
		case 12:
			if (iVar530 <= 2)
			{
				if (func_1014(&uLocal_556) >= 10f)
				{
					iLocal_421[0] = 1;
					if (!func_1408(1024))
					{
						func_1416(1024);
					}
					uLocal_533 = iVar530 + 1;
					func_264(&uLocal_556);
				}
			}
			else
			{
				func_141(cParam0, 13);
			}
			break;
		case 13:
			break;
		case 20:
			if (!func_1461())
			{
				func_1420(cParam0, &(uLocal_121[0]), 1105014447, 422991367, 1, 1);
				func_65(7);
				func_1501(cParam0, "MUD4_OBJ_FLWJN", -1082130432, 0, 0, -1, -1, 0);
				sLocal_814 = "MUD4_OBJ_FLWJN";
				if (func_1408(1024))
				{
					func_1548(cParam0, "MUD4_SETOFF", 0);
				}
				func_264(&uLocal_556);
				func_141(cParam0, 21);
			}
			break;
		case 21:
			if (!func_1461())
			{
				func_264(&uLocal_556);
				func_141(cParam0, 22);
			}
			break;
		case 22:
			if (func_1014(&uLocal_556) >= 1f)
			{
				func_264(&uLocal_556);
				func_141(cParam0, 23);
			}
			break;
		case 23:
			if (!func_257())
			{
				func_264(&uLocal_556);
				func_141(cParam0, 24);
			}
			break;
		case 24:
			if (func_1014(&uLocal_556) >= 3f)
			{
				if (!func_257())
				{
					if (func_1001(Global_35, &(uLocal_121[0]), 45f, 1))
					{
						if (!func_1461())
						{
							func_1548(cParam0, "MUD4_OVERBANT", 0);
							sLocal_813 = "MUD4_OVERBANT";
							func_264(&uLocal_556);
							func_141(cParam0, 25);
						}
					}
				}
			}
			break;
		case 25:
			if (!func_1461())
			{
				iLocal_374[0] = 1;
				func_264(&uLocal_556);
				func_141(cParam0, 51);
			}
			break;
		case 40:
			if (!func_1461())
			{
				if (func_1399(&uLocal_556) >= 2f)
				{
					func_1548(cParam0, "MUD4_ARRIVE", 0);
					sLocal_813 = "MUD4_ARRIVE";
					func_264(&uLocal_556);
					func_141(cParam0, 41);
				}
			}
			else
			{
				func_264(&uLocal_556);
			}
			break;
		case 41:
			if (!func_1461())
			{
				func_264(&uLocal_556);
				if (!func_1456(Global_35, iLocal_209, 0))
				{
					func_141(cParam0, 51);
				}
			}
			break;
		case 51:
			break;
	}
}

void func_1451(char[4] cParam0)
{
	if (iVar908 > 0 && iVar908 < 11)
	{
	}
	switch (iVar908)
	{
		case 0:
			if (!func_14(cParam0, 8))
			{
			}
			func_264(&uLocal_559);
			func_1043(&uLocal_911, 1);
			break;
		case 1:
			if (is_entity_in_volume(Global_35, &(iLocal_228[44]), true, 0))
			{
				trigger_music_event("MUD4_RIDE");
				func_264(&uLocal_559);
				func_1043(&uLocal_911, 11);
			}
			break;
		case 11:
			break;
	}
}

void func_1452(char[4] cParam0)
{
	func_2061();
	if (is_waypoint_playback_going_on_for_ped(&(uLocal_121[0]), 0))
	{
		if (get_ped_waypoint_progress(&(uLocal_121[0])) <= 1)
		{
			if (!&iLocal_374[0])
			{
				func_2062(&(uLocal_121[0]), fVar457, 0, 1045220557, 1, 5f, 10f, 15f, 1033476506, 1061158912, 1, 0, 1045220557, 0);
			}
			else
			{
				func_2062(&(uLocal_121[0]), 2.001f, 0, 1045220557, 1, 1077936128, 1106247680, 1114636288, 1033476506, 1061158912, 0, 0, 1045220557, 0);
			}
		}
		else
		{
			if (&iLocal_374[12])
			{
				if (!&iLocal_374[0])
				{
					func_2062(&(uLocal_121[0]), fVar457, 0, 1045220557, 1, 5f, 10f, 15f, 1033476506, 1061158912, 1, 1, 1045220557, 0);
				}
			}
			else if (!&iLocal_374[0])
			{
				func_2062(&(uLocal_121[0]), fVar457, 0, 1045220557, 1, 2f, 3f, 5f, 1033476506, 1061158912, 1, 1, 1045220557, 0);
			}
			if (&iLocal_374[0])
			{
				func_2062(&(uLocal_121[0]), 2.001f, 0, 1045220557, 1, 1077936128, 1106247680, 1114636288, 1033476506, 1061158912, 1, 0, 1045220557, 0);
			}
		}
	}
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (iVar0 == 0)
		{
			if (!is_entity_dead(&(uLocal_121[iVar0])))
			{
				switch (&uLocal_820[iVar0])
				{
					case 0:
						set_ped_can_use_auto_conversation_lookat(&(uLocal_121[iVar0]), true);
						func_264(vLocal_568[iVar0]);
						func_1443(uLocal_820[iVar0], 5);
						break;
					case 28:
						if (_does_anim_scene_exist(&(uLocal_466[2])))
						{
							if (_is_anim_scene_loaded(&(uLocal_466[2]), true, false))
							{
								if (_is_anim_scene_finished(&(uLocal_466[2]), false))
								{
									func_264(vLocal_568[iVar0]);
									func_1443(uLocal_820[iVar0], 3);
								}
								else if (!_is_anim_scene_started(&(uLocal_466[2]), false))
								{
									func_264(vLocal_568[iVar0]);
									func_1443(uLocal_820[iVar0], 3);
								}
							}
							else
							{
								func_264(vLocal_568[iVar0]);
								func_1443(uLocal_820[iVar0], 3);
							}
						}
						else
						{
							func_264(vLocal_568[iVar0]);
							func_1443(uLocal_820[iVar0], 5);
						}
						break;
					case 5:
						set_blocking_of_non_temporary_events(&(uLocal_121[iVar0]), false);
						if (func_1005(Global_35, &(uLocal_121[iVar0]), 1, 1) <= 15f)
						{
							func_141(cParam0, 10);
							iLocal_16 = 4;
							func_264(vLocal_568[iVar0]);
							func_1443(uLocal_820[iVar0], 6);
						}
						break;
					case 6:
						func_1443(uLocal_820[iVar0], 11);
						iLocal_374[33] = 1;
						break;
					case 11:
						if (func_2063(Global_35, 0))
						{
							set_ped_as_group_member(&(uLocal_121[0]), get_player_group(get_player_index()));
							if (!get_ped_config_flag(&(uLocal_121[iVar0]), 167, true))
							{
								set_ped_config_flag(&(uLocal_121[iVar0]), 167, true);
							}
							func_1443(uLocal_820[iVar0], 17);
						}
						if ((is_ped_on_mount(&(uLocal_121[iVar0])) && _is_ped_getting_into_a_mount_seat(&(uLocal_121[iVar0]), true)) && !_is_anim_scene_started(&(uLocal_466[15]), false))
						{
							if (!&iLocal_374[11])
							{
								iLocal_374[11] = 1;
							}
							func_264(vLocal_568[iVar0]);
							func_188(1);
							if (!get_ped_config_flag(&(uLocal_121[iVar0]), 167, true))
							{
								set_ped_config_flag(&(uLocal_121[iVar0]), 167, true);
							}
							set_blocking_of_non_temporary_events(&(uLocal_121[iVar0]), true);
							open_sequence_task(&iLocal_34);
							task_follow_waypoint_recording(0, "mud4_ride_sniper", 0, 25612, -1, 0, 1, -1);
							close_sequence_task(iLocal_34);
							task_perform_sequence(&(uLocal_121[iVar0]), iLocal_34);
							clear_sequence_task(&iLocal_34);
							func_1443(uLocal_820[iVar0], 13);
						}
						break;
					case 17:
						if (!func_2063(Global_35, 0))
						{
							func_2064(&(uLocal_121[0]));
							func_1443(uLocal_820[iVar0], 11);
						}
						break;
					case 13:
						set_blocking_of_non_temporary_events(&(uLocal_121[iVar0]), false);
						if (&iLocal_374[12])
						{
							if (!is_entity_dead(&(iLocal_125[iVar0])))
							{
								clear_ped_tasks_immediately(&(iLocal_125[iVar0]), false, true);
								set_blocking_of_non_temporary_events(&(iLocal_125[iVar0]), false);
							}
							set_blocking_of_non_temporary_events(&(uLocal_121[iVar0]), false);
							func_264(vLocal_568[iVar0]);
							func_1443(uLocal_820[iVar0], 14);
						}
						break;
					case 14:
						if (func_1447(&(uLocal_121[iVar0]), func_1412(15, 2), 45f, 1, 1))
						{
							func_1448(&(uLocal_121[iVar0]), func_1412(15, 2), 0, 1112014848, 1106247680, 1097859072, 1084227584, 1, 1, 1, 0);
						}
						if (func_1447(&(uLocal_121[iVar0]), func_1412(15, 2), 30f, 1, 1))
						{
							func_264(vLocal_568[iVar0]);
							set_blocking_of_non_temporary_events(&(uLocal_121[iVar0]), true);
							func_1443(uLocal_820[iVar0], 39);
						}
						break;
					case 39:
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_1453(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		switch (iVar816)
		{
			case 0:
				func_264(&uLocal_565);
				func_1039(&uLocal_819, 2);
				break;
			case 2:
				break;
			case 9:
				break;
		}
	}
}

void func_1454(char[4] cParam0)
{
	if (&iLocal_374[2])
	{
		func_1540(cParam0);
		if (&uLocal_888[3] == 2)
		{
			func_2065(cParam0);
			func_2066(cParam0);
		}
	}
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (!is_entity_dead(&(iLocal_150[iVar0])))
		{
			switch (&uLocal_825[iVar0])
			{
				case 0:
					if (iVar0 == 0)
					{
					}
					else if (iVar0 == 1)
					{
					}
					else if (iVar0 == 2)
					{
					}
					func_264(vLocal_640[iVar0]);
					func_2067(uLocal_825[iVar0], 1);
					break;
				case 1:
					break;
				case 24:
					break;
			}
		}
		iVar0++;
	}
}

int func_1455(char[4] cParam0)
{
	_0xf60165e1d2c5370b(&(iLocal_125[0]), &uVar7, &fVar8);
	if (iLocal_31 >= 2 && iLocal_31 <= 10)
	{
		set_player_control(player_id(), false, 0, false);
		disable_control_action(0, -1404316431, false);
		disable_control_action(0, 1644850270, false);
		_0x8910c24b7e0046ec();
		if (is_waypoint_playback_going_on_for_ped(Global_35, 0))
		{
			waypoint_playback_override_speed(Global_35, fVar8, 0, -1082130432, 0);
		}
	}
	if (iLocal_31 >= 2 && iLocal_31 <= 9)
	{
		_0x702b75dc9d3ede56(true);
	}
	if (iLocal_31 <= 10)
	{
		if (func_1396(32768))
		{
			disable_control_action(0, 1287709438, false);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
		}
	}
	switch (iLocal_31)
	{
		case 0:
			waypoint_recording_get_coord("mud4_ride_sniper", 99, &vVar3);
			if (func_1413(Global_35, vVar3, 1) <= 100f)
			{
				if (!func_1408(8))
				{
					_0x1b3c2d961f5fc0e1("script@Story@MUD4@ride_to_sniper");
					prefetch_srl("script@cme@MUD4_CME_CloseUp_srl");
					_0xae00387e53b1e9fc();
					func_1416(8);
				}
				iLocal_31 = 1;
			}
			break;
		case 1:
			if (_0xdd0b7c5ae58f721d("script@Story@MUD4@ride_to_sniper"))
			{
				waypoint_recording_get_closest_waypoint("mud4_ride_sniper", get_entity_coords(Global_35, true, false), &iVar0);
				waypoint_recording_get_coord("mud4_ride_sniper", 521, &vVar3);
				if ((iVar0 >= 519 && func_1456(Global_35, iLocal_209, 1)) && fVar8 >= 1.25f)
				{
					if (is_waypoint_playback_going_on_for_ped(&(uLocal_121[0]), 0))
					{
						waypoint_playback_override_speed(&(uLocal_121[0]), 2f, 0, -1082130432, 0);
					}
					if (func_2045(&(uLocal_121[0]), Global_35, 1f) == 2)
					{
						fVar6 = 2f;
					}
					else if (func_2045(&(uLocal_121[0]), Global_35, 1f) == 3)
					{
						fVar6 = -2f;
					}
					if (!func_434(Global_35, 658540077))
					{
						task_follow_entity_along_waypoint_recording_at_offset(Global_35, &(uLocal_121[0]), "mud4_ride_sniper", fVar6, -3f, 0, 9224, -1, 0);
					}
					set_player_control(player_id(), false, 0, false);
					disable_control_action(0, -1404316431, false);
					disable_control_action(0, 1644850270, false);
					_0x8910c24b7e0046ec();
					if (_0xdd0b7c5ae58f721d(&Local_1089))
					{
						if (!func_1396(32768))
						{
							_0xb8b207c34285e978(&Local_1089);
							func_1458(32768);
						}
						else if (!func_32(&uLocal_771))
						{
							func_33(&uLocal_771, 0);
						}
						else if (func_1014(&uLocal_771) >= 3f)
						{
							if (is_srl_loaded())
							{
								_0x660a8f876df1d4f8(7);
								_0x660a8f876df1d4f8(25);
								_0x0a5a4f1979abb40e(&Local_1089);
								_0x798be43c9393632b(&Local_1089);
								if (func_1483("MUD4_OVERBANT"))
								{
									func_1618("MUD4_OVERBANT", 0, 0);
								}
								func_918(iLocal_209, 434.8f, 406.7f, 108.5f, -133.4f, 34, 1073741824);
								func_918(&(iLocal_125[0]), 439.5f, 401.4f, 108.7f, -133.4f, 34, 1073741824);
								task_follow_waypoint_recording(&(uLocal_121[0]), "mud4_ride_sniper", 0, 9224, -1, 0, 0, -1);
								task_follow_waypoint_recording(Global_35, "mud4_ride_sniper", 0, 9224, -1, 0, 0, -1);
								_0x2208438012482a1a(&(uLocal_121[0]), false, false);
								_0x2208438012482a1a(Global_35, false, false);
								if (is_waypoint_playback_going_on_for_ped(&(uLocal_121[0]), 0))
								{
									waypoint_playback_override_speed(&(uLocal_121[0]), 2f, 0, -1082130432, 0);
								}
								_0x5e3ccf03995388b5(1426506073, 462.1f, 407.8f, 109.5f);
								func_66(1);
								_0xbc016635d6a73b31("script@Story@MUD4@ride_to_sniper", "16_CloseUp_1", 5);
								func_264(&uLocal_771);
								func_188(0);
								func_1510(cParam0, 20);
								if (does_group_exist(get_player_group(player_id())))
								{
									set_ped_as_group_member(&(uLocal_121[0]), get_player_group(player_id()));
								}
								iLocal_452 = 1;
								iLocal_31 = 2;
							}
						}
					}
				}
			}
			break;
		case 2:
			iVar1 = _0xea113bf9b0c0c5d7("script@Story@MUD4@ride_to_sniper", "16_CloseUp_1", 5);
			iVar2 = _0x465f04f68ad38197("script@Story@MUD4@ride_to_sniper", "16_CloseUp_1", 5);
			func_172(1);
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_121[0]), 0))
			{
				waypoint_playback_override_speed(&(uLocal_121[0]), 2f, 0, -1082130432, 0);
			}
			if (bVar449)
			{
				end_srl();
				prefetch_srl("script@cme@MUD4_CME_SHOT1_srl");
				_0xae00387e53b1e9fc();
				iLocal_452 = 0;
			}
			if (_0xffe9c53deea3db0b((iVar1 - func_265(&uLocal_771)), -1599954748, 502.6f, 360f, 113.6f, is_srl_loaded(), (iVar2 - func_265(&uLocal_771))))
			{
				iLocal_31 = 3;
			}
			break;
		case 3:
			if (is_srl_loaded())
			{
				func_918(iLocal_209, 477f, 352.7f, 106.4f, 167.3f, 34, 1073741824);
				func_918(&(iLocal_125[0]), 474.3f, 344.4f, 105.2f, 165.1f, 34, 1073741824);
				task_follow_waypoint_recording(&(uLocal_121[0]), "mud4_ride_sniper", 0, 9224, -1, 0, 0, -1);
				task_follow_waypoint_recording(Global_35, "mud4_ride_sniper", 0, 9224, -1, 0, 0, -1);
				_0x2208438012482a1a(&(uLocal_121[0]), false, false);
				_0x2208438012482a1a(Global_35, false, false);
				if (is_waypoint_playback_going_on_for_ped(&(uLocal_121[0]), 0))
				{
					waypoint_playback_override_speed(&(uLocal_121[0]), 2f, 0, -1082130432, 0);
				}
				_0xbc016635d6a73b31("script@Story@MUD4@ride_to_sniper", "9_ChimneyView5", 5);
				func_264(&uLocal_771);
				iLocal_452 = 1;
				iLocal_31 = 4;
			}
			break;
		case 4:
			iVar1 = _0xea113bf9b0c0c5d7("script@Story@MUD4@ride_to_sniper", "9_ChimneyView5", 5);
			iVar2 = _0x465f04f68ad38197("script@Story@MUD4@ride_to_sniper", "9_ChimneyView5", 5);
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_121[0]), 0))
			{
				waypoint_playback_override_speed(&(uLocal_121[0]), 2f, 0, -1082130432, 0);
			}
			if (bVar449)
			{
				end_srl();
				prefetch_srl("script@cme@MUD4_CME_SHOT2_srl");
				_0xae00387e53b1e9fc();
				iLocal_452 = 0;
			}
			if (func_1525(&(uLocal_121[0]), &(iLocal_228[67]), 1, 0))
			{
				func_1510(cParam0, 21);
			}
			if (_0xffe9c53deea3db0b((iVar1 - func_265(&uLocal_771)), 1081971009, 407f, 242.9f, 108.4f, is_srl_loaded(), (iVar2 - func_265(&uLocal_771))))
			{
				iLocal_31 = 5;
			}
			break;
		case 5:
			if (is_srl_loaded())
			{
				if (!func_1483("MUD4_OVERBANT2"))
				{
					func_1548(cParam0, "MUD4_OVERBANT2", 0);
				}
				func_918(iLocal_209, 432.2f, 271.3f, 102.6f, -164.7f, 34, 1073741824);
				func_918(&(iLocal_125[0]), 434f, 264.8f, 103.8f, -170.4f, 34, 1073741824);
				task_follow_waypoint_recording(&(uLocal_121[0]), "mud4_ride_sniper", 0, 9224, -1, 0, 0, -1);
				task_follow_waypoint_recording(Global_35, "mud4_ride_sniper", 0, 9224, -1, 0, 0, -1);
				_0x2208438012482a1a(&(uLocal_121[0]), false, false);
				_0x2208438012482a1a(Global_35, false, false);
				if (is_waypoint_playback_going_on_for_ped(&(uLocal_121[0]), 0))
				{
					waypoint_playback_override_speed(&(uLocal_121[0]), 2f, 0, -1082130432, 0);
				}
				_0xbc016635d6a73b31("script@Story@MUD4@ride_to_sniper", "10_ChimneyView6", 5);
				func_264(&uLocal_771);
				iLocal_452 = 1;
				iLocal_31 = 6;
			}
			break;
		case 6:
			iVar1 = _0xea113bf9b0c0c5d7("script@Story@MUD4@ride_to_sniper", "10_ChimneyView6", 5);
			iVar2 = _0x465f04f68ad38197("script@Story@MUD4@ride_to_sniper", "10_ChimneyView6", 5);
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_121[0]), 0))
			{
				waypoint_playback_override_speed(&(uLocal_121[0]), 2f, 0, -1082130432, 0);
			}
			if (bVar449)
			{
				end_srl();
				prefetch_srl("script@cme@MUD4_CME_SHOT3_srl");
				_0xae00387e53b1e9fc();
				iLocal_452 = 0;
			}
			if (_0xffe9c53deea3db0b((iVar1 - func_265(&uLocal_771)), 72136592, 713.6f, 174.9f, 151.8f, is_srl_loaded(), (iVar2 - func_265(&uLocal_771))))
			{
				iLocal_31 = 7;
			}
			break;
		case 7:
			if (is_srl_loaded())
			{
				func_918(iLocal_209, 692.8f, 186.4f, 144f, -158.2f, 34, 1073741824);
				func_918(&(iLocal_125[0]), 695.5f, 178.8f, 145.3f, -166.4f, 34, 1073741824);
				task_follow_waypoint_recording(&(uLocal_121[0]), "mud4_ride_sniper", 0, 9224, -1, 0, 0, -1);
				task_follow_waypoint_recording(Global_35, "mud4_ride_sniper", 0, 9224, -1, 0, 0, -1);
				_0x2208438012482a1a(&(uLocal_121[0]), false, false);
				_0x2208438012482a1a(Global_35, false, false);
				if (is_waypoint_playback_going_on_for_ped(&(uLocal_121[0]), 0))
				{
					waypoint_playback_override_speed(&(uLocal_121[0]), 2f, 0, -1082130432, 0);
				}
				_0xbc016635d6a73b31("script@Story@MUD4@ride_to_sniper", "13_Hilltop2", 5);
				func_264(&uLocal_771);
				iLocal_452 = 1;
				iLocal_31 = 8;
			}
			break;
		case 8:
			iVar1 = _0xea113bf9b0c0c5d7("script@Story@MUD4@ride_to_sniper", "13_Hilltop2", 5);
			iVar2 = _0x465f04f68ad38197("script@Story@MUD4@ride_to_sniper", "13_Hilltop2", 5);
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_121[0]), 0))
			{
				waypoint_playback_override_speed(&(uLocal_121[0]), 2f, 0, -1082130432, 0);
			}
			if (bVar449)
			{
				end_srl();
				prefetch_srl("script@cme@MUD4_CME_SHOT4_srl");
				_0xae00387e53b1e9fc();
				iLocal_452 = 0;
			}
			if (_0xffe9c53deea3db0b((_0xea113bf9b0c0c5d7("script@Story@MUD4@ride_to_sniper", "13_Hilltop2", 5) - func_265(&uLocal_771)), 712784951, 671.8f, 130.6f, 163.1f, is_srl_loaded(), (_0x465f04f68ad38197("script@Story@MUD4@ride_to_sniper", "13_Hilltop2", 5) - func_265(&uLocal_771))))
			{
				iLocal_31 = 9;
			}
			break;
		case 9:
			if (is_srl_loaded())
			{
				func_918(iLocal_209, 685.3f, 142.5f, 155.3f, 85.2f, 34, 1073741824);
				func_918(&(iLocal_125[0]), 678.1f, 144.7f, 157.2f, 72.4f, 34, 1073741824);
				task_follow_waypoint_recording(&(uLocal_121[0]), "mud4_ride_sniper", 0, 9480, -1, 0, 0, -1);
				task_follow_waypoint_recording(Global_35, "mud4_ride_sniper", 0, 9224, -1, 0, 0, -1);
				_0x2208438012482a1a(&(uLocal_121[0]), false, false);
				_0x2208438012482a1a(Global_35, false, false);
				if (is_waypoint_playback_going_on_for_ped(&(uLocal_121[0]), 0))
				{
					waypoint_playback_override_speed(&(uLocal_121[0]), 1.75f, 0, -1082130432, 0);
				}
				_0xbc016635d6a73b31("script@Story@MUD4@ride_to_sniper", "14_Hilltop3", 5);
				func_264(&uLocal_771);
				iLocal_452 = 1;
				iLocal_31 = 10;
			}
			break;
		case 10:
			iVar1 = _0xea113bf9b0c0c5d7("script@Story@MUD4@ride_to_sniper", "14_Hilltop3", 5);
			iVar2 = _0x465f04f68ad38197("script@Story@MUD4@ride_to_sniper", "14_Hilltop3", 5);
			if (is_waypoint_playback_going_on_for_ped(&(uLocal_121[0]), 0))
			{
				if (func_1447(&(uLocal_121[0]), func_1412(15, 2), 5f, 1, 1))
				{
					waypoint_playback_override_speed(&(uLocal_121[0]), 1f, 0, -1082130432, 0);
				}
				else if (func_1447(&(uLocal_121[0]), func_1412(15, 2), 10f, 1, 1))
				{
					waypoint_playback_override_speed(&(uLocal_121[0]), 1.001f, 0, -1082130432, 0);
				}
				else if (func_1447(&(uLocal_121[0]), func_1412(15, 2), 20f, 1, 1))
				{
					waypoint_playback_override_speed(&(uLocal_121[0]), 1.25f, 0, -1082130432, 0);
				}
				else if (func_1447(&(uLocal_121[0]), func_1412(15, 2), 25f, 1, 1))
				{
					waypoint_playback_override_speed(&(uLocal_121[0]), 1.501f, 0, -1082130432, 0);
				}
				else
				{
					waypoint_playback_override_speed(&(uLocal_121[0]), 1.75f, 0, -1082130432, 0);
				}
			}
			if (bVar449)
			{
				end_srl();
				iLocal_452 = 0;
			}
			if (_0xffe9c53deea3db0b((iVar1 - func_265(&uLocal_771)), 0, 671.8f, 130.6f, 163.1f, true, (iVar2 - func_265(&uLocal_771))))
			{
				iLocal_31 = 12;
			}
			else
			{
				_0x702b75dc9d3ede56(true);
			}
			break;
		case 12:
			_0x43037abfe214a851();
			func_66(0);
			remove_ped_from_group(&(uLocal_121[0]));
			clear_ped_tasks(Global_35, 1, 0);
			set_gameplay_cam_relative_heading(0f, 1f);
			set_player_control(player_id(), true, 0, false);
			iLocal_374[16] = 1;
			set_current_ped_weapon(&(uLocal_121[0]), -1569615261, true, 0, false, false);
			if (has_ped_got_weapon(Global_35, -506285289, 0, false) && func_935(Global_35, 1, 0, 0) != -506285289)
			{
				set_current_ped_weapon(Global_35, -506285289, false, 0, false, false);
			}
			if (!func_434(&(uLocal_121[0]), 242628503))
			{
				open_sequence_task(&iLocal_35);
				task_dismount_animal(0, 0, 0, 0, 0, 0);
				close_sequence_task(iLocal_35);
				task_perform_sequence(&(uLocal_121[0]), iLocal_35);
				clear_sequence_task(&iLocal_35);
				iLocal_374[0] = 1;
			}
			_0x2412216fcc7b4e3e("script@Story@MUD4@ride_to_sniper");
			iLocal_31 = 13;
			break;
		case 13:
			if (func_935(Global_35, 1, 0, 0) == -506285289)
			{
				if (!func_434(Global_35, 242628503))
				{
					open_sequence_task(&iLocal_34);
					task_swap_weapon(0, 1, 0, 0, 0);
					task_dismount_animal(0, 0, 0, 0, 0, 0);
					close_sequence_task(iLocal_34);
					_task_perform_sequence_2(Global_35, iLocal_34, 1f, 1f);
					clear_sequence_task(&iLocal_34);
				}
				if (!func_434(iLocal_209, -982327190))
				{
					task_stand_still(iLocal_209, -1);
				}
				iLocal_31 = 14;
			}
			break;
		case 14:
			return 1;
	}
	return 0;
}

bool func_1456(int iParam0, int iParam1, bool bParam2)
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

bool func_1457(char[4] cParam0, int iParam1, char[4] cParam2, int iParam3, char[4] cParam4, char[4] cParam5, int iParam6, float fParam7, float fParam8)
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
	if (func_1001(Global_35, iParam1, fParam7, 1))
	{
		StringCopy(&cVar0, "HORSE_MOUNT", 64);
	}
	StringCopy(&cVar8, "HORSE_FAIL", 64);
	bVar16 = func_2068(cParam0, iParam1, cVar0, cVar8, 512, cParam2, cParam4, cParam5);
	if (func_28(cParam0) != 1 && func_14(cParam0, 64))
	{
		func_2069(cParam0, iParam1, iParam6, bVar16, iParam3);
		func_1010(cParam0, 64);
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
		if (!func_441(cParam0->f_5304) && func_1413(iParam1, cParam0->f_5304, 1) >= fParam8)
		{
			if (func_434(iParam1, 2043986356))
			{
				clear_ped_tasks(iParam1, 1, 0);
			}
			func_1776(1);
		}
		_0xc71d07c96946e263(player_id(), iParam1);
		disable_control_action(0, 399753205, false);
		return true;
	}
	return false;
}

void func_1458(int iParam0)
{
	if (!func_1396(iParam0))
	{
		func_464(&iLocal_22, iParam0);
	}
}

void func_1459(float fParam0)
{
	if (!func_32(fParam0))
	{
	}
	if (!func_597(fParam0))
	{
		fParam0->f_2 = (func_648() - fParam0->f_1);
		func_1152(fParam0, 2);
	}
}

bool func_1460(int iParam0)
{
	func_574(iParam0, 0, 0);
	if (func_567(iParam0))
	{
		return (door_system_get_door_state(iParam0) == 2 || door_system_get_door_state(iParam0) == 1);
	}
	return false;
}

bool func_1461()
{
	return func_2070(1);
}

void func_1462(int iParam0)
{
	if (!func_2056(iParam0))
	{
		return;
	}
	if (!func_2057(iParam0))
	{
	}
	Global_32074.f_2697.f_6[iParam0]->f_4 = 0;
}

void func_1463(int iParam0)
{
	if (func_1396(iParam0))
	{
		func_549(&iLocal_22, iParam0);
	}
}

void func_1464(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (func_521(&(uParam0->f_2[iVar0]), 0))
		{
			set_blocking_of_non_temporary_events(&(uParam0->f_2[iVar0]), true);
		}
		iVar0++;
	}
}

void func_1465(var uParam0, bool bParam1)
{
	if (func_2071(uParam0, 4096))
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = 0;
		while (iVar0 < 20)
		{
			if (!func_521(&(uParam0->f_2[iVar0]), 0))
			{
				if (does_entity_exist(&(uParam0->f_2[iVar0])) && is_entity_dead(&(uParam0->f_2[iVar0])))
				{
					if (_0x9e13acc38ba8f9c3(*uParam0, &(uParam0->f_2[iVar0])))
					{
						_0x408d1149c5e39c1e(*uParam0, &(uParam0->f_2[iVar0]));
					}
					if (does_blip_exist(&(uParam0->f_358[iVar0])))
					{
						remove_blip(uParam0->f_358[iVar0]);
					}
					if (&uParam0->f_23[iVar0] != 14)
					{
						uParam0->f_23[iVar0] = 14;
					}
					func_2072(uParam0->f_2[iVar0], 1, 0, 1);
					if (uParam0->f_800 >= 3)
					{
						func_2073(uParam0->f_799, 1);
						uParam0->f_800 = 1;
					}
				}
			}
			iVar0++;
		}
	}
	switch (uParam0->f_800)
	{
		case 0:
			uParam0->f_800 = 1;
			break;
		case 1:
			if (!func_258())
			{
				uParam0->f_800 = 2;
			}
			break;
		case 2:
			sVar1 = _create_var_string(2, "HERDING_UI", func_1523(uParam0));
			uParam0->f_799 = func_810(sVar1, 10000, 0, 0, 0, 1);
			if (func_592(uParam0->f_799))
			{
				uParam0->f_800 = 3;
			}
			break;
		case 3:
			if (!func_2074(uParam0->f_799))
			{
				uParam0->f_799 = 0;
				uParam0->f_800 = 4;
			}
			break;
		case 4:
			break;
	}
}

bool func_1466(int iParam0, int iParam1, int iParam2)
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

void func_1467(char[4] cParam0)
{
	if (func_1414(cParam0) > 1 && func_1414(cParam0) < 51)
	{
		func_2075(cParam0);
		if (func_2024(cParam0, 1, 50f, 100f, 0, 0, 1, 422991367))
		{
			if (!&iLocal_409[1])
			{
				iLocal_409[1] = 1;
			}
		}
		else if (&iLocal_409[1])
		{
			iLocal_409[1] = 0;
		}
		if (&uLocal_508[2] < 3)
		{
			if (&iLocal_409[2])
			{
				iLocal_409[2] = 0;
				iLocal_421[3] = 1;
			}
		}
		if (&iLocal_421[3])
		{
			if (!func_257())
			{
				if (!func_1461())
				{
					iLocal_421[3] = 0;
					if (func_1001(Global_35, &(uLocal_121[0]), 90f, 1))
					{
						func_1548(cParam0, "MUD4_SKY", 0);
						uLocal_508[2] = &uLocal_508[2] + 1;
					}
				}
			}
		}
	}
	switch (func_1414(cParam0))
	{
		case 0:
			func_1501(cParam0, "MUD4_OBJ_WAIT", -1082130432, 0, 0, -1, -1, 0);
			sLocal_814 = "MUD4_OBJ_WAIT";
			func_264(&uLocal_556);
			func_141(cParam0, -1);
			break;
		case 2:
			if (!func_1461())
			{
				if (_get_anim_scene_progress(&(uLocal_466[3])) >= 0.063869f)
				{
					func_1548(cParam0, "MUD4_BINOCULAR", 0);
					func_1416(512);
					func_1501(cParam0, "MUD4_OBJ_SNP1", -1082130432, 0, 0, -1, -1, 0);
					sLocal_814 = "MUD4_OBJ_SNP1";
					func_264(&uLocal_556);
					func_141(cParam0, 3);
				}
			}
			break;
		case 3:
			func_264(&uLocal_556);
			if (get_current_scripted_conversation_line("MUD4_BINOCULAR") >= 3)
			{
				if (!func_2076("MUD4_OBJ_SNP1"))
				{
					if (func_2012(cParam0, "MUD4_OBJ_SNP1", 5, 0, 0))
					{
						func_264(&uLocal_777);
						if (!func_32(&uLocal_777))
						{
							func_33(&uLocal_777, 0);
						}
						func_141(cParam0, 4);
					}
				}
			}
			break;
		case 4:
			if (!func_1461())
			{
				func_264(&uLocal_556);
				func_264(&uLocal_553);
				func_141(cParam0, -1);
			}
			else
			{
				func_264(&uLocal_556);
			}
			break;
		case 5:
			if (!func_1461())
			{
				if (func_1548(cParam0, "MUD4_WARNSHOT", 0))
				{
					func_264(&uLocal_556);
					func_141(cParam0, -1);
				}
			}
			break;
		case 10:
			if (func_1014(&uLocal_556) >= 1.5f)
			{
				if (&iLocal_421[5])
				{
					func_1548(cParam0, "MUD4_SHOT", 0);
				}
				func_264(&uLocal_556);
				iLocal_421[5] = 1;
				func_141(cParam0, 11);
			}
			break;
		case 11:
			if (func_1014(&uLocal_556) >= 3f)
			{
				if (!func_1461())
				{
					func_1548(cParam0, "MUD4_POIS", 0);
					func_264(&uLocal_556);
					func_141(cParam0, 12);
				}
			}
			break;
		case 12:
			if (!func_1461())
			{
				func_264(&uLocal_556);
				func_141(cParam0, 13);
			}
			break;
		case 13:
			break;
		case 30:
			if (!func_1461())
			{
				func_1548(cParam0, "MUD4_HURRY", 0);
				func_264(&uLocal_556);
				func_141(cParam0, 31);
			}
			break;
		case 31:
			if (!func_1461())
			{
				func_264(&uLocal_556);
				func_141(cParam0, 32);
			}
			break;
		case 32:
			break;
		case 35:
			if (func_1014(&uLocal_556) >= 1.5f)
			{
				if (&iLocal_421[6])
				{
					if (!func_1461())
					{
						if (func_1548(cParam0, "MUD4_SHOT2", 0))
						{
							func_264(&uLocal_556);
							iLocal_374[21] = 1;
							func_141(cParam0, 36);
						}
					}
					else
					{
						iLocal_374[21] = 1;
						func_141(cParam0, 36);
					}
				}
				else
				{
					func_264(&uLocal_556);
					iLocal_374[21] = 1;
					func_141(cParam0, 36);
				}
			}
			break;
		case 36:
			break;
		case 40:
			if (func_1461())
			{
				func_53(0, 0);
			}
			else if (func_1548(cParam0, "MUD4_SUCCESS", 0))
			{
				func_264(&uLocal_556);
				func_141(cParam0, 41);
			}
			break;
		case 41:
			if (!func_1461())
			{
				func_264(&uLocal_556);
				func_141(cParam0, 42);
			}
			break;
		case 42:
			break;
		case 45:
			if (!func_1461())
			{
				func_1548(cParam0, "MUD4_FAIL", 0);
				func_264(&uLocal_556);
				func_141(cParam0, 46);
			}
			break;
		case 46:
			if (!func_1461())
			{
				func_264(&uLocal_556);
				func_141(cParam0, 51);
			}
			break;
		case 51:
			break;
	}
}

void func_1468(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (iVar0 == 0)
		{
			if (!is_entity_dead(&(uLocal_121[iVar0])))
			{
				switch (&uLocal_820[iVar0])
				{
					case 0:
						if (!func_14(cParam0, 8))
						{
							func_264(vLocal_568[iVar0]);
							func_1443(uLocal_820[iVar0], 29);
						}
						else
						{
							func_264(vLocal_568[iVar0]);
							func_1443(uLocal_820[iVar0], 28);
						}
						break;
					case 28:
						if (!is_ped_on_mount(&(uLocal_121[iVar0])) && !_is_ped_getting_into_a_mount_seat(&(uLocal_121[iVar0]), true))
						{
							iLocal_374[11] = 0;
							set_blocking_of_non_temporary_events(&(uLocal_121[iVar0]), true);
							open_sequence_task(&iLocal_34);
							task_follow_nav_mesh_to_coord(0, func_1412(3, 1), 1f, 20000, 0.25f, 0, 40000f);
							task_turn_ped_to_face_coord(0, func_1412(3, 10), 0);
							close_sequence_task(iLocal_34);
							task_perform_sequence(&(uLocal_121[iVar0]), iLocal_34);
							clear_sequence_task(&iLocal_34);
							func_264(vLocal_568[iVar0]);
							func_1443(uLocal_820[iVar0], 29);
						}
						break;
					case 29:
						if (!func_434(&(uLocal_121[iVar0]), 242628503))
						{
							task_turn_ped_to_face_entity(&(uLocal_121[0]), &(Local_1105.f_2[0]), -1, 3000f, 0.004363323f, 0.004363323f);
							set_current_ped_weapon(&(uLocal_121[0]), -1569615261, true, 0, false, false);
							func_1510(cParam0, 3);
							func_141(cParam0, 2);
							func_264(vLocal_568[iVar0]);
							func_1443(uLocal_820[iVar0], 30);
						}
						break;
					case 30:
						if (&iLocal_374[21])
						{
							if (func_1456(Global_35, iLocal_209, 0))
							{
								StringCopy(&cLocal_815, "pl_IG3_Quick_Exit", 32);
							}
							else
							{
								StringCopy(&cLocal_815, "pl_IG3_Exit", 32);
							}
							func_1522(3, &cLocal_815);
							func_264(vLocal_568[iVar0]);
							func_1443(uLocal_820[iVar0], 32);
						}
						break;
					case 32:
						if (func_1014(vLocal_568[iVar0]) >= 15f)
						{
							iLocal_2982 = 1;
							func_548(3);
							func_1132(2);
							func_264(vLocal_568[iVar0]);
							func_1443(uLocal_820[iVar0], 33);
						}
						else if (_does_anim_scene_exist(&(uLocal_466[3])))
						{
							if (_is_anim_scene_loaded(&(uLocal_466[3]), true, false))
							{
								if (_is_anim_scene_started(&(uLocal_466[3]), false))
								{
									if (_0xb89fcff19dafff28(&(uLocal_466[3]), func_840(&(uLocal_121[iVar0]))))
									{
										iLocal_2982 = 1;
										func_548(3);
										func_1132(2);
										func_264(vLocal_568[iVar0]);
										func_1443(uLocal_820[iVar0], 33);
									}
								}
								else if (_is_anim_scene_finished(&(uLocal_466[3]), false))
								{
									iLocal_2982 = 1;
									func_548(3);
									func_1132(2);
									func_264(vLocal_568[iVar0]);
									func_1443(uLocal_820[iVar0], 34);
								}
							}
						}
						break;
					case 34:
						break;
					case 39:
						break;
				}
			}
		}
		iVar0++;
	}
}

void func_1469(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		if (iVar816 < 9)
		{
		}
		switch (iVar816)
		{
			case 0:
				iLocal_2093 = func_1242(Global_35, 0, 1, 0);
				if (is_weapon_valid(iVar2090))
				{
				}
				func_264(&uLocal_565);
				func_1039(&uLocal_819, 9);
				break;
			case 2:
				break;
			case 9:
				break;
		}
	}
}

void func_1470(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 <= (3 - 1))
	{
		if (!&iLocal_421[5])
		{
			if (func_521(&(iLocal_150[iVar0]), 0))
			{
				if (has_entity_been_damaged_by_entity(&(iLocal_150[iVar0]), Global_35, 1, 1))
				{
					if (func_521(&(iLocal_154[iVar0]), 0))
					{
						_task_flee_from_ped(&(iLocal_150[iVar0]), Global_35, func_1412(15, 4), 250f, 120000, 1024, 3f, &(iLocal_154[iVar0]));
						_task_flee_from_ped(&(iLocal_154[iVar0]), Global_35, func_1412(15, 4), 250f, 120000, 1024, 3f, 0);
					}
					else
					{
						_task_flee_from_ped(&(iLocal_150[iVar0]), Global_35, func_1412(15, 4), 250f, 120000, 1024, 3f, 0);
					}
					clear_entity_last_damage_entity(&(iLocal_150[iVar0]));
					iLocal_421[5] = 1;
				}
			}
			else
			{
				clear_entity_last_damage_entity(&(iLocal_150[iVar0]));
				if (func_521(&(iLocal_154[iVar0]), 0))
				{
					_task_flee_from_ped(&(iLocal_154[iVar0]), Global_35, func_1412(15, 4), 250f, 120000, 1024, 3f, 0);
				}
				iLocal_421[5] = 1;
			}
			if (func_521(&(iLocal_154[iVar0]), 0))
			{
				if (has_entity_been_damaged_by_entity(&(iLocal_154[iVar0]), Global_35, 1, 1))
				{
					if (!func_1456(&(iLocal_150[iVar0]), &(iLocal_154[iVar0]), 0))
					{
						_task_flee_from_ped(&(iLocal_154[iVar0]), Global_35, func_1412(15, 4), 250f, 120000, 1024, 3f, 0);
					}
					clear_entity_last_damage_entity(&(iLocal_154[iVar0]));
					iLocal_421[5] = 1;
				}
			}
			else
			{
				clear_entity_last_damage_entity(&(iLocal_154[iVar0]));
				iLocal_421[5] = 1;
			}
		}
		else if (!&iLocal_421[6])
		{
			if (has_entity_been_damaged_by_entity(&(iLocal_150[iVar0]), Global_35, 1, 1))
			{
				iLocal_421[6] = 1;
			}
			if (has_entity_been_damaged_by_entity(&(iLocal_154[iVar0]), Global_35, 1, 1))
			{
				iLocal_421[6] = 1;
			}
		}
		if (func_521(&(iLocal_150[iVar0]), 0))
		{
			switch (&uLocal_825[iVar0])
			{
				case 0:
					if (!func_14(cParam0, 8))
					{
						set_ped_reset_flag(&(iLocal_150[iVar0]), 3, true);
						if (!is_entity_dead(&(iLocal_154[iVar0])))
						{
							clear_ped_tasks(&(iLocal_154[iVar0]), 1, 0);
							set_ped_reset_flag(&(iLocal_154[iVar0]), 3, true);
						}
						if (!_0x5102307ce88798eb(&(iLocal_150[iVar0])))
						{
							request_ped_visibility_tracking(&(iLocal_150[iVar0]));
						}
						if (!is_entity_dead(&(iLocal_154[iVar0])))
						{
							if (!_0x5102307ce88798eb(&(iLocal_154[iVar0])))
							{
								request_ped_visibility_tracking(&(iLocal_154[iVar0]));
							}
						}
						func_264(vLocal_640[iVar0]);
						func_2067(uLocal_825[iVar0], 1);
					}
					else
					{
						func_264(vLocal_640[iVar0]);
						func_2067(uLocal_825[iVar0], 6);
					}
					break;
				case 1:
					set_ped_reset_flag(&(iLocal_150[iVar0]), 3, true);
					if (!is_entity_dead(&(iLocal_154[iVar0])))
					{
						set_ped_reset_flag(&(iLocal_154[iVar0]), 3, true);
					}
					if (has_collision_loaded_around_entity(&(iLocal_150[iVar0])))
					{
						func_264(vLocal_640[iVar0]);
						func_2067(uLocal_825[iVar0], 3);
					}
					break;
				case 2:
					set_blocking_of_non_temporary_events(&(iLocal_150[iVar0]), true);
					if (&iLocal_374[20])
					{
						iLocal_17 = 5;
					}
					else
					{
						iLocal_17 = 4;
					}
					func_264(vLocal_640[iVar0]);
					func_2067(uLocal_825[iVar0], 3);
					break;
				case 3:
					if (!is_entity_dead(&(iLocal_154[iVar0])))
					{
						if (is_ped_on_mount(&(iLocal_150[iVar0])))
						{
							if (&iLocal_374[18])
							{
								func_264(vLocal_640[iVar0]);
								func_2067(uLocal_825[iVar0], 22);
							}
							else if (_is_ped_getting_into_a_mount_seat(&(iLocal_150[iVar0]), true))
							{
								func_264(vLocal_640[iVar0]);
								func_2067(uLocal_825[iVar0], 6);
							}
						}
						else if (!func_1001(&(iLocal_150[iVar0]), &(iLocal_154[iVar0]), 15f, 1))
						{
							func_264(vLocal_640[iVar0]);
							func_2067(uLocal_825[iVar0], 22);
						}
					}
					else
					{
						func_264(vLocal_640[iVar0]);
						func_2067(uLocal_825[iVar0], 22);
					}
					break;
				case 6:
					if (&iLocal_374[18])
					{
						func_264(vLocal_640[iVar0]);
						func_2067(uLocal_825[iVar0], 8);
					}
					Local_1033 = "mud4_ride_rancher";
					Local_1033.f_3 = 24584;
					Local_1033.f_12 = 1f;
					if (iVar0 == 0)
					{
						Local_1033.f_9 = 0;
						Local_1033.f_10 = 0f;
						Local_1033.f_11 = 0f;
					}
					else if (iVar0 == 1)
					{
						Local_1033.f_9 = &iLocal_150[0];
						Local_1033.f_10 = -6f;
						Local_1033.f_11 = -9f;
					}
					else if (iVar0 == 2)
					{
						Local_1033.f_9 = &iLocal_150[0];
						Local_1033.f_10 = 6f;
						Local_1033.f_11 = -9f;
					}
					if (!func_434(&(iLocal_150[iVar0]), 658540077))
					{
						task_follow_waypoint_recording_advanced(&(iLocal_150[iVar0]), &Local_1033);
						force_ped_motion_state(&(iLocal_154[iVar0]), -668482597, false, 0, false);
						_0x2208438012482a1a(&(iLocal_154[iVar0]), false, false);
					}
					func_264(vLocal_640[iVar0]);
					func_2067(uLocal_825[iVar0], 7);
					break;
				case 7:
					func_2077(&(iLocal_150[iVar0]));
					if (&iLocal_374[18])
					{
						iLocal_17 = 1;
						if (does_entity_exist(iLocal_219))
						{
							if (&iLocal_150[iVar0] != iLocal_219)
							{
								if (!bVar2978)
								{
									if (!is_entity_dead(&(iLocal_154[iVar0])))
									{
										iLocal_2981 = 1;
										clear_ped_tasks(&(iLocal_150[iVar0]), 1, 0);
										task_horse_action(&(iLocal_154[iVar0]), 1, 0, 0);
										iLocal_221 = &iLocal_150[iVar0];
									}
								}
							}
							func_264(vLocal_640[iVar0]);
							func_2067(uLocal_825[iVar0], 8);
						}
					}
					break;
				case 8:
					func_264(vLocal_640[iVar0]);
					func_2067(uLocal_825[iVar0], 9);
					break;
				case 9:
					if (&iLocal_374[18])
					{
						if (&iLocal_150[iVar0] == iLocal_219)
						{
							func_264(vLocal_640[iVar0]);
							func_2067(uLocal_825[iVar0], 4);
						}
						else
						{
							func_264(vLocal_640[iVar0]);
							func_2067(uLocal_825[iVar0], 22);
						}
					}
					break;
				case 4:
					set_blocking_of_non_temporary_events(&(iLocal_150[iVar0]), true);
					func_264(vLocal_640[iVar0]);
					func_2067(uLocal_825[iVar0], 5);
					break;
				case 5:
					if (!is_ped_on_mount(&(iLocal_150[iVar0])) && !_is_ped_getting_into_a_mount_seat(&(iLocal_150[iVar0]), true))
					{
						func_264(vLocal_640[iVar0]);
						func_2067(uLocal_825[iVar0], 10);
					}
					break;
				case 10:
					set_current_ped_weapon(&(iLocal_150[iVar0]), -183018591, false, 0, false, false);
					func_264(vLocal_640[iVar0]);
					func_2067(uLocal_825[iVar0], 11);
					break;
				case 11:
					if (func_32(vLocal_640[iVar0]))
					{
						if (func_1014(vLocal_640[iVar0]) >= 30f)
						{
							iLocal_374[20] = 1;
							func_264(vLocal_640[iVar0]);
							func_2067(uLocal_825[iVar0], 2);
						}
					}
					if (&iLocal_374[19])
					{
						func_264(vLocal_640[iVar0]);
						func_2067(uLocal_825[iVar0], 2);
					}
					break;
				case 22:
					if (&iLocal_150[iVar0] == iLocal_219)
					{
						if ((_does_anim_scene_exist(&(uLocal_466[16])) && !_is_anim_scene_started(&(uLocal_466[16]), false)) || !_does_anim_scene_exist(&(uLocal_466[16])))
						{
							if (!func_434(&(iLocal_150[iVar0]), 242628503))
							{
								if (!is_entity_dead(&(iLocal_154[iVar0])))
								{
									clear_ped_tasks(&(iLocal_154[iVar0]), 1, 0);
								}
								set_ped_keep_task(&(iLocal_150[iVar0]), true);
								set_blocking_of_non_temporary_events(&(iLocal_150[iVar0]), true);
								open_sequence_task(&iLocal_34);
								_task_flee_from_ped(0, Global_35, func_1412(15, 4), 250f, 120000, 1024, 3f, &(iLocal_154[iVar0]));
								close_sequence_task(iLocal_34);
								task_perform_sequence(&(iLocal_150[iVar0]), iLocal_34);
								clear_sequence_task(&iLocal_34);
							}
							else
							{
								func_2067(uLocal_825[iVar0], 23);
							}
						}
					}
					else if (&iLocal_150[iVar0] == iLocal_221)
					{
						if (!func_434(&(iLocal_154[iVar0]), 1041577989))
						{
							if (!func_434(&(iLocal_150[iVar0]), 242628503))
							{
								if (!is_entity_dead(&(iLocal_154[iVar0])))
								{
									clear_ped_tasks(&(iLocal_154[iVar0]), 1, 0);
								}
								set_ped_keep_task(&(iLocal_150[iVar0]), true);
								set_blocking_of_non_temporary_events(&(iLocal_150[iVar0]), true);
								open_sequence_task(&iLocal_34);
								_task_flee_from_ped(0, Global_35, func_1412(15, 4), 250f, 120000, 1024, 3f, &(iLocal_154[iVar0]));
								close_sequence_task(iLocal_34);
								task_perform_sequence(&(iLocal_150[iVar0]), iLocal_34);
								clear_sequence_task(&iLocal_34);
								func_264(vLocal_640[iVar0]);
							}
						}
					}
					else if (!func_434(&(iLocal_150[iVar0]), 242628503))
					{
						if (!is_entity_dead(&(iLocal_154[iVar0])))
						{
							clear_ped_tasks(&(iLocal_154[iVar0]), 1, 0);
						}
						set_ped_keep_task(&(iLocal_150[iVar0]), true);
						set_blocking_of_non_temporary_events(&(iLocal_150[iVar0]), true);
						open_sequence_task(&iLocal_34);
						_task_flee_from_ped(0, Global_35, func_1412(15, 4), 250f, 120000, 1024, 3f, &(iLocal_154[iVar0]));
						close_sequence_task(iLocal_34);
						task_perform_sequence(&(iLocal_150[iVar0]), iLocal_34);
						clear_sequence_task(&iLocal_34);
						func_264(vLocal_640[iVar0]);
					}
					else
					{
						func_2067(uLocal_825[iVar0], 23);
					}
					break;
				case 23:
					set_ped_reset_flag(&(iLocal_150[iVar0]), 3, true);
					if (!is_entity_dead(&(iLocal_154[iVar0])))
					{
						set_ped_reset_flag(&(iLocal_154[iVar0]), 3, true);
					}
					if (&iLocal_150[iVar0] == iLocal_219 && iLocal_17 == 2)
					{
						func_2067(uLocal_825[iVar0], 4);
					}
					break;
			}
		}
		iVar0++;
	}
}

void func_1471(char[4] cParam0)
{
	if (&uLocal_866[0] == 0)
	{
		func_2078(&Local_1105, "mud4_ride_rancher");
		func_1475(&Local_1105, 0);
	}
	else if (&uLocal_866[0] >= 1)
	{
		if (&uLocal_866[0] < 6 && !&iLocal_374[18])
		{
			func_2079(&Local_1105, 1.01f);
		}
		Var1 = { func_267(5, 0) };
		_0xcf213a5fc3abfc08(Var1, Var1.f_1, 100f);
		func_1490(&Local_1105, 0);
		func_2080(&Local_1105, 0);
	}
	iVar0 = 0;
	while (iVar0 <= (15 - 1))
	{
		if (!is_entity_dead(&(Local_1105.f_2[iVar0])))
		{
			if (&uLocal_866[iVar0] < 6)
			{
			}
			switch (&uLocal_866[iVar0])
			{
				case 0:
					set_ped_reset_flag(&(Local_1105.f_2[iVar0]), 3, true);
					set_ped_config_flag(&(Local_1105.f_2[iVar0]), 138, true);
					func_264(vLocal_594[iVar0]);
					func_2081(uLocal_866[iVar0], 1);
					break;
				case 1:
					set_ped_reset_flag(&(Local_1105.f_2[iVar0]), 3, true);
					if (has_collision_loaded_around_entity(&(Local_1105.f_2[iVar0])))
					{
						func_264(vLocal_594[iVar0]);
						func_2081(uLocal_866[iVar0], 2);
					}
					break;
				case 2:
					set_ped_reset_flag(&(Local_1105.f_2[iVar0]), 3, true);
					if (func_1014(vLocal_594[iVar0]) >= (0.1f + get_random_float_in_range(0.75f, 5f)))
					{
						set_blocking_of_non_temporary_events(&(Local_1105.f_2[iVar0]), true);
						func_264(vLocal_594[iVar0]);
						func_2081(uLocal_866[iVar0], 3);
					}
					break;
				case 3:
					set_ped_reset_flag(&(Local_1105.f_2[iVar0]), 3, true);
					func_264(vLocal_594[iVar0]);
					func_2081(uLocal_866[iVar0], 5);
					break;
				case 5:
					set_ped_reset_flag(&(Local_1105.f_2[iVar0]), 3, true);
					if (_does_volume_exist(&(iLocal_228[46])))
					{
						if (is_entity_in_volume(&(Local_1105.f_2[iVar0]), &(iLocal_228[46]), true, 0))
						{
							set_blocking_of_non_temporary_events(&(Local_1105.f_2[iVar0]), true);
							func_264(vLocal_594[iVar0]);
							func_2081(uLocal_866[iVar0], 6);
						}
					}
					if (&iLocal_374[18])
					{
						if (&Local_1105.f_23[iVar0] != 5)
						{
							clear_ped_tasks(&(Local_1105.f_2[iVar0]), 1, 0);
							task_animal_unalerted(&(Local_1105.f_2[iVar0]), -1, 0, 1, 1);
							func_264(vLocal_594[iVar0]);
							func_2081(uLocal_866[iVar0], 6);
						}
					}
					break;
				case 6:
					break;
			}
		}
		iVar0++;
	}
}

void func_1472()
{
	switch (iLocal_17)
	{
		case 0:
			break;
		case 1:
			if (_does_anim_scene_exist(&(uLocal_466[16])))
			{
				func_2044(16);
				iLocal_17 = 3;
			}
			break;
		case 3:
			if (_does_anim_scene_exist(&(uLocal_466[16])))
			{
				if (!_is_anim_scene_started(&(uLocal_466[16]), false))
				{
					func_1572(iLocal_219, 1);
					set_anim_scene_origin(&(uLocal_466[16]), get_entity_coords(iLocal_219, true, false), get_entity_rotation(iLocal_219, 2), 2);
					start_anim_scene(&(uLocal_466[16]));
				}
				else
				{
					iLocal_17 = 2;
				}
			}
			break;
		case 2:
			if (_get_anim_scene_progress(&(uLocal_466[16])) <= 0.1757656f)
			{
				if (_0x75df9e73f2f005fd(iLocal_220))
				{
					set_entity_can_be_damaged(iLocal_220, false);
				}
			}
			else if (!_0x75df9e73f2f005fd(iLocal_220))
			{
				set_entity_can_be_damaged(iLocal_220, true);
			}
			break;
		case 4:
			if ((has_entity_been_damaged_by_entity(iLocal_220, Global_35, 1, 1) || !func_521(iLocal_220, 0)) || !_0x8d81e7824b7753f7(&(uLocal_466[16]), "s_loop", 1))
			{
				if (func_521(iLocal_220, 0))
				{
					set_blocking_of_non_temporary_events(iLocal_220, true);
					open_sequence_task(&iLocal_34);
					_task_flee_from_ped(0, Global_35, func_1412(15, 4), 250f, 120000, 1024, 3f, 0);
					close_sequence_task(iLocal_34);
					task_perform_sequence(iLocal_220, iLocal_34);
					clear_sequence_task(&iLocal_34);
				}
				if (func_521(iLocal_219, 0))
				{
					set_blocking_of_non_temporary_events(iLocal_219, true);
					open_sequence_task(&iLocal_34);
					_task_flee_from_ped(0, Global_35, func_1412(15, 4), 250f, 120000, 1024, 3f, 0);
					close_sequence_task(iLocal_34);
					task_perform_sequence(iLocal_219, iLocal_34);
					clear_sequence_task(&iLocal_34);
				}
				iLocal_17 = 6;
			}
			else
			{
				func_1549(16, 5);
				iLocal_17 = 6;
			}
			break;
		case 5:
			func_1549(16, 6);
			iLocal_17 = 6;
			break;
		case 6:
			if (func_2046(&(uLocal_466[16])))
			{
				if (_does_anim_scene_exist(&(uLocal_466[16])))
				{
					_delete_anim_scene(&(uLocal_466[16]));
					iLocal_17 = 7;
				}
			}
			break;
	}
}

bool func_1473()
{
	return (Global_1935689->f_1 || &Global_1935689 == 1);
}

bool func_1474()
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		if (func_521(&(iLocal_150[iVar0]), 0))
		{
			if (is_bullet_in_area(get_entity_coords(&(iLocal_150[iVar0]), true, false), 40f, true))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1475(var uParam0, int iParam1)
{
	if (_0x8d913e493bafe0a3(*uParam0))
	{
		_0x1520626ffafffa8f(*uParam0, iParam1);
	}
}

int func_1476(var uParam0, int iParam1, float fParam2, float fParam3, float fParam4, float fParam5, int iParam6)
{
	iVar0 = (iParam1 - func_2082(uParam0));
	if (iVar0 <= 0)
	{
		return 1;
	}
	iVar1 = 0;
	while (iVar1 < iParam1)
	{
		func_2083(uParam0, fParam2, fParam3, fParam4, fParam5, iParam6, 1);
		iVar1++;
	}
	if (func_2082(uParam0) >= iParam1)
	{
		return 1;
	}
	return 0;
}

void func_1477(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (does_entity_exist(&(uParam0->f_2[iVar0])))
		{
			_0xbb1e41dd3d3c6250(&(uParam0->f_2[iVar0]), "SpGatheringAnimal", 0);
		}
		iVar0++;
	}
}

bool func_1478(int iParam0)
{
	return func_436(iLocal_25, iParam0);
}

void func_1479(int iParam0)
{
	if (!func_1478(iParam0))
	{
		func_464(&iLocal_25, iParam0);
	}
}

int func_1480()
{
	return func_1586(&iLocal_150, 2, 1);
}

int func_1481()
{
	return 3;
}

bool func_1482()
{
	if (func_521(iLocal_219, 0))
	{
		if (is_bullet_in_area(get_entity_coords(iLocal_219, true, false), 40f, true))
		{
			return true;
		}
	}
	return false;
}

bool func_1483(char* sParam0)
{
	return func_2084(sParam0);
}

void func_1484(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_1485(var uParam0, int iParam1)
{
	if (!func_2085(uParam0, iParam1))
	{
		return;
	}
	uParam0->f_487 = (uParam0->f_487 - (uParam0->f_487 && iParam1));
}

void func_1486()
{
	func_2086(&Local_1105, uLocal_121[0], "JOHN");
	func_2087(&Local_1105, 0);
	func_2088(&Local_1105, 3, "MUD4_STRAGG", -1);
	func_2088(&Local_1105, 4, "MUD4_TRAMPLE", 4);
	func_2088(&Local_1105, 6, "MUD4_KILL", 4);
	func_2088(&Local_1105, 7, "MUD4_KILLFEW", 4);
	func_2088(&Local_1105, 10, "MUD4_RESPOND", 6);
	func_2088(&Local_1105, 1, "MUD4_WAY", 3);
	func_2088(&Local_1105, 9, "MUD4_BADLY", 6);
	func_2088(&Local_1105, 8, "MUD4_WELL", 3);
	func_2088(&Local_1105, 11, "MUD4_NOHERD", 4);
	func_2089(&Local_1105, 175f);
}

void func_1487(char[4] cParam0)
{
	if (!func_1478(128))
	{
		func_2075(cParam0);
	}
	if (func_2090(&Local_1105))
	{
		if (func_1483(cVar810))
		{
			if (!_0xf01c570e0a0a1e67(cVar810))
			{
				pause_scripted_conversation(cVar810, false, false, false, true);
			}
		}
	}
	else
	{
		func_2060(&(uLocal_121[0]), cVar810, 0, 1);
		if (_0xd89504d9d7d5057d(cVar810) && _0xf01c570e0a0a1e67(cVar810))
		{
			restart_scripted_conversation(cVar810);
		}
	}
	if (func_521(&(uLocal_121[0]), 0))
	{
		if (func_1397(cParam0) == 0)
		{
			fVar1 = 30f;
			fVar2 = 100f;
		}
		else
		{
			fVar1 = 300f;
			fVar2 = 400f;
		}
		if (func_1397(cParam0) == 0)
		{
			if (func_2024(cParam0, 1, fVar1, fVar2, 0, 0, 1, 422991367))
			{
				if (!&iLocal_409[1])
				{
					func_65(7);
					iLocal_409[1] = 1;
					iLocal_421[1] = 1;
				}
			}
			else if (&iLocal_409[1])
			{
				func_1529(7);
				iLocal_409[1] = 0;
			}
		}
		else if (func_1397(cParam0) == 1)
		{
			if (func_2021(cParam0, func_1492(&Local_1105, 0), "MUD4_WARN_ABANDON", "MUD4_FAIL_ABANDON", 300f, 400f, 0, 0, 0, 1, 0))
			{
				if (!&iLocal_409[1])
				{
					func_264(&uLocal_562);
					iLocal_409[1] = 1;
					iLocal_421[1] = 1;
				}
			}
			else if (&iLocal_409[1])
			{
				iLocal_409[1] = 0;
			}
		}
		else if (func_2021(cParam0, func_1492(&Local_1105, 0), "MUD4_WARN_ABANDON", "MUD4_FAIL_ABANDON", 300f, 400f, 0, 0, 0, 1, 0))
		{
			if (!&iLocal_409[1])
			{
				func_264(&uLocal_562);
				iLocal_409[1] = 1;
				iLocal_421[1] = 1;
			}
		}
		else if (&iLocal_409[1])
		{
			iLocal_409[1] = 0;
		}
		if (bVar2980)
		{
			if (&iLocal_409[1])
			{
				if (&iLocal_421[1])
				{
					if (!func_1461())
					{
						iLocal_421[1] = 0;
						func_1548(cParam0, "MUD4_AWAY", 0);
					}
				}
			}
		}
		if (&iLocal_421[5])
		{
			if (!func_1461())
			{
				iLocal_421[5] = 0;
				func_1548(cParam0, "MUD4_RANSH", 0);
				uLocal_508[5] = &uLocal_508[5] + 1;
			}
		}
		if (&uLocal_508[5] < 3)
		{
			if (!bVar441)
			{
				iVar0 = 0;
				while (iVar0 < 15)
				{
					if (func_521(&(Local_1105.f_2[iVar0]), 0))
					{
						if (!func_2091(&(Local_1105.f_2[iVar0]), 1, 1, 1, 0))
						{
							if (!func_436(iLocal_22, 2048))
							{
								func_464(&iLocal_22, 2048);
								return;
							}
						}
						else if (func_436(iLocal_22, 2048))
						{
							func_549(&iLocal_22, 2048);
						}
					}
					iVar0++;
				}
				if (func_436(iLocal_22, 2048))
				{
					if (is_ped_shooting(Global_35) && !_0xbdd9c235d8d1052e(Global_35))
					{
						iLocal_524 = iVar521 + 1;
						if (!&iLocal_409[5])
						{
							if (iVar521 > 1)
							{
								iLocal_409[5] = 1;
							}
						}
					}
				}
			}
			if (&iLocal_409[5])
			{
				iLocal_524 = 0;
				iLocal_409[5] = 0;
				iLocal_421[5] = 1;
			}
		}
	}
	if (func_1414(cParam0) >= 5)
	{
		vVar3 = { func_1492(&Local_1105, 0) };
		if (func_1413(Global_35, vVar3, 1) >= 200f)
		{
			func_2012(cParam0, "MUD4_OBJ_GATHER", 4, 0, 0);
		}
	}
	switch (func_1414(cParam0))
	{
		case 0:
			if (func_1548(cParam0, "MUD4_MOUNTUP", 0))
			{
				func_1529(7);
				func_1501(cParam0, "MUD4_OBJ_MTJ", -1082130432, 0, 0, -1, -1, 0);
				func_141(cParam0, 1);
			}
			break;
		case 1:
			func_218(&iLocal_48);
			if (!func_1483("MUD4_MOUNTUP"))
			{
				if (func_2012(cParam0, "MUD4_OBJ_MTJ", 4, 0, 0))
				{
					func_264(&uLocal_753);
					func_141(cParam0, 2);
				}
			}
			break;
		case 2:
			if (func_1005(Global_35, &(uLocal_121[0]), 1, 1) >= 30f)
			{
				if (!func_1461())
				{
					func_1548(cParam0, "MUD4_ONFOOT", 0);
					func_141(cParam0, 3);
				}
			}
			if (func_1399(&uLocal_753) >= 10f)
			{
				if (!func_1461())
				{
					func_1548(cParam0, "MUD4_HURRYS", 0);
					func_264(&uLocal_753);
				}
			}
			break;
		case 3:
			if (func_1399(&uLocal_753) >= 10f)
			{
				if (!func_1461())
				{
					if (func_1005(Global_35, &(uLocal_121[0]), 1, 1) >= 10f)
					{
						func_1548(cParam0, "MUD4_ONFOOT", 0);
					}
					else
					{
						func_1548(cParam0, "MUD4_HURRYS", 0);
					}
					func_264(&uLocal_753);
				}
			}
			break;
		case 4:
			if (!func_1461())
			{
				if (func_1548(cParam0, "MUD4_IG4", 0))
				{
					func_1501(cParam0, "MUD4_OBJ_HERD", -1082130432, 0, 0, -1, -1, 0);
					func_2092(&Local_1105);
					sLocal_813 = "MUD4_IG4";
					if (!does_blip_exist(iLocal_48))
					{
						iLocal_48 = func_1419(408396114, func_1492(&Local_1105, 0), 1);
					}
					if (func_2012(cParam0, "MUD4_OBJ_HERD", 5, 0, 0))
					{
						func_141(cParam0, -1);
					}
				}
			}
			break;
		case 5:
			func_1501(cParam0, "MUD4_OBJ_GATHER", -1082130432, 0, 0, -1, -1, 0);
			if (!func_1461())
			{
				if (func_1548(cParam0, "MUD4_SCATTER", 0))
				{
					sLocal_813 = "MUD4_SCATTER";
					func_141(cParam0, 6);
				}
			}
			else
			{
				func_1618(cVar810, 1, 0);
			}
			break;
		case 6:
			if (func_2012(cParam0, "MUD4_OBJ_GATHER", 5, 0, 0))
			{
				func_141(cParam0, 7);
			}
			break;
		case 7:
			func_2093(&Local_1105);
			if (bVar2980)
			{
				func_810("MUD4_HLP_HERD1", 10000, 0, 0, 0, 1);
				func_264(&uLocal_753);
				func_141(cParam0, 8);
			}
			break;
		case 8:
			break;
	}
}

void func_1488(char[4] cParam0, bool bParam1)
{
	iVar1 = get_mount(Global_35);
	if (does_entity_exist(iVar1) && iVar1 != iLocal_209)
	{
		iVar2 = iLocal_209;
		iLocal_209 = iVar1;
		func_1004(cParam0, 1);
		if (func_2094(iVar1))
		{
			iVar0 = func_2095(iVar1);
			if (!is_ped_injured(iVar2))
			{
				func_2096(cParam0, iVar2, iVar0);
			}
			if (iVar0 == 1)
			{
				iLocal_125[0] = iVar2;
				if (bParam1)
				{
					task_mount_animal(&(uLocal_121[0]), iVar2, 20000, -1, 1073741824, 1, 0, 0);
				}
			}
			func_2097(cParam0, iVar1);
		}
	}
}

void func_1489(char[4] cParam0)
{
	if (!func_521(&(uLocal_121[0]), 0))
	{
		return;
	}
	switch (iVar821)
	{
		case 34:
			func_2098(&(uLocal_121[0]), -1569615261, 1, 0, 0, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
			set_current_ped_weapon(&(uLocal_121[0]), -1569615261, true, 0, false, false);
			set_blocking_of_non_temporary_events(&(uLocal_121[0]), true);
			open_sequence_task(&iLocal_34);
			task_mount_animal(0, &(iLocal_125[0]), 20000, -1, 1.5f, 1, 0, 0);
			close_sequence_task(iLocal_34);
			task_perform_sequence(&(uLocal_121[0]), iLocal_34);
			clear_sequence_task(&iLocal_34);
			func_264(vLocal_568[0]);
			func_2099(&iLocal_824, 37);
			break;
		case 37:
			if (func_1456(Global_35, iLocal_209, 1) && _is_ped_getting_into_a_mount_seat(&(uLocal_121[0]), true))
			{
				if (!func_1001(&(uLocal_121[0]), Global_35, 3f, 1))
				{
					set_ped_as_group_member(&(uLocal_121[0]), get_player_group(get_player_index()));
					set_group_formation(get_player_group(get_player_index()), 5);
					add_custom_formation_location(get_player_group(get_player_index()), -5f, -2f, 0f, -1);
					_0x40c3524d4ed83554(get_player_group(get_player_index()), 1);
					set_ped_config_flag(get_ped_index_from_entity_index(&(uLocal_121[0])), 279, true);
					_0x8afccc0f18d70018(get_player_group(get_player_index()), 1);
					func_2099(&iLocal_824, 67);
				}
			}
			break;
		case 67:
			if (func_1447(Global_35, func_1492(&Local_1105, 0), 40f, 1, 1) || func_1447(&(uLocal_121[0]), func_1492(&Local_1105, 0), 40f, 1, 1))
			{
				set_blocking_of_non_temporary_events(&(uLocal_121[0]), false);
				clear_ped_tasks(&(uLocal_121[0]), 1, 0);
				func_2064(&(uLocal_121[0]));
				func_2100(1, 0, 0);
				if (!func_1478(128))
				{
					func_1479(128);
				}
				func_1498(&Local_1105, 1);
				func_1499(&Local_1105, 1);
				func_2099(&iLocal_824, 65);
			}
			break;
		case 65:
			break;
	}
}

void func_1490(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (does_entity_exist(&(uParam0->f_2[iVar0])))
		{
			if (!_0x1d1b448d719415ab(&(uParam0->f_2[iVar0])))
			{
			}
			else if (has_bullet_impacted_in_area(get_entity_coords(&(uParam0->f_2[iVar0]), false, false), 1.5f, true, true) || is_bullet_in_area(get_entity_coords(&(uParam0->f_2[iVar0]), false, false), 1f, true))
			{
				if (func_2101(uParam0, 60f, iVar0, 0, 1, 1))
				{
					_0x1a5c5d350068a673(&(uParam0->f_2[iVar0]), 0);
				}
				else
				{
					iVar1 = -1;
					iVar1 = _0xad17a18215dd23d6(&(uParam0->f_2[iVar0]), 0, 0);
					if (iVar1 > -1)
					{
						if (iVar1 > 2000)
						{
							_0x1a5c5d350068a673(&(uParam0->f_2[iVar0]), 0);
						}
						else
						{
							iVar2 = _0x796eecff0c6d39be(&(uParam0->f_2[iVar0]), 0, 0);
							if (iVar2 != 0)
							{
								iVar3 = _0x822a001bcea5bd81(&(uParam0->f_2[iVar0]), iVar2, 0, 0);
							}
							else
							{
								_0x1a5c5d350068a673(&(uParam0->f_2[iVar0]), 0);
							}
							else if (func_2102(uParam0, iVar0))
							{
								if (iVar2 == 1428655956 && !func_434(&(uParam0->f_2[iVar0]), 713668775))
								{
									if (((does_entity_exist(iVar3) && !is_ped_human(get_ped_index_from_entity_index(iVar3))) && !func_1625(iVar3)) && !func_2071(uParam0, 131072))
									{
										if (func_2101(uParam0, 60f, iVar0, iVar3, 1, 0))
										{
											_0x1a5c5d350068a673(&(uParam0->f_2[iVar0]), 0);
										}
										else
										{
											Jump @399; //curOff = 380
											_0x1a5c5d350068a673(&(uParam0->f_2[iVar0]), 0);
											Jump @939; //curOff = 396
											Jump @418; //curOff = 399
											_0x1a5c5d350068a673(&(uParam0->f_2[iVar0]), 0);
											Jump @939; //curOff = 415
											if (iVar2 == 1428655956)
											{
												if (does_entity_exist(iVar3))
												{
													if (is_entity_a_ped(iVar3))
													{
														if ((is_ped_human(get_ped_index_from_entity_index(iVar3)) || func_1625(iVar3)) || func_2071(uParam0, 131072))
														{
															_0x1a5c5d350068a673(&(uParam0->f_2[iVar0]), 0);
														}
														else
														{
															if (iVar2 == -978548489)
															{
																if (does_entity_exist(iVar3))
																{
																	if (is_entity_an_object(iVar3))
																	{
																		_0x1a5c5d350068a673(&(uParam0->f_2[iVar0]), 0);
																		Jump @939; //curOff = 544
																	}
																	else if (func_2103(uParam0, &iVar3))
																	{
																		_0x1a5c5d350068a673(&(uParam0->f_2[iVar0]), 0);
																	}
																	else
																	{
																		Jump @605; //curOff = 577
																		if (!does_entity_exist(iVar3))
																		{
																		}
																		else
																		{
																			vVar4 = { get_entity_coords(iVar3, false, false) };
																		}
																		if (_0x8d913e493bafe0a3(*uParam0) && iVar2 != 151661781)
																		{
																			if (func_2101(uParam0, 60f, iVar0, iVar3, 1, 0))
																			{
																				_0x1a5c5d350068a673(&(uParam0->f_2[iVar0]), 0);
																				Jump @939; //curOff = 661
																			}
																		else
																		{
																			}
																			else
																			{
																				Jump @925; //curOff = 670
																				if (does_entity_exist(iVar3))
																				{
																					_task_smart_flee_style_coord(&(uParam0->f_2[iVar0]), get_entity_coords(iVar3, true, false), 2, 0, 60f, 10000, 0);
																					_0x1a5c5d350068a673(&(uParam0->f_2[iVar0]), 0);
																					Jump @939; //curOff = 726
																				}
																				else if (iVar2 == 151661781)
																				{
																					uParam0->f_23[iVar0] = 10;
																					_task_smart_flee_style_coord(&(uParam0->f_2[iVar0]), get_entity_coords(&(uParam0->f_2[iVar0]), true, false), 4, 0, 600f, -1, 0);
																					_0x3923ec958249657d(&(uParam0->f_2[iVar0]), player_ped_id(), -1082130432);
																					_0xe8f1a5b4ced3725a(&(uParam0->f_2[iVar0]), uParam0->f_613, -1082130432);
																					_0x1a5c5d350068a673(&(uParam0->f_2[iVar0]), 0);
																					Jump @939; //curOff = 845
																				}
																				else
																				{
																					_task_smart_flee_style_coord(&(uParam0->f_2[iVar0]), get_entity_coords(&(uParam0->f_2[iVar0]), true, false), 2, 0, 60f, 10000, 0);
																					_0x3923ec958249657d(&(uParam0->f_2[iVar0]), player_ped_id(), -1082130432);
																					_0x1a5c5d350068a673(&(uParam0->f_2[iVar0]), 0);
																				}
																				else
																				{
																					Jump @939; //curOff = 925
																					func_2104(uParam0, iVar0, iParam1);
																				}
																			}
																			iVar0++;
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
								}
							}
						}
					}
				}
			}
		}
	}
}

void func_1491(var uParam0)
{
	Var0 = -1;
	Var9 = -1;
	iVar18 = 0;
	while (iVar18 < 2)
	{
		if (&uParam0->f_190[iVar18] == 0)
		{
			Var0 = { *uParam0->f_190[iVar18] };
		}
		else if (&uParam0->f_190[iVar18] == 1)
		{
			Var9 = { *uParam0->f_190[iVar18] };
		}
		iVar18++;
	}
	if (Var0 != -1)
	{
		func_2105(uParam0, &Var0, 0);
	}
	if (Var9 != -1)
	{
		func_2105(uParam0, &Var9, 1);
	}
}

Vector3 func_1492(var uParam0, bool bParam1)
{
	if (bParam1 && _0x8d913e493bafe0a3(*uParam0))
	{
		return _0x1da6cb02071055d5(*uParam0);
	}
	vVar0 = { 0f, 0f, 0f };
	fVar4 = 0f;
	iVar3 = 0;
	while (iVar3 <= 19)
	{
		iVar5 = &uParam0->f_2[iVar3];
		if (does_entity_exist(iVar5))
		{
			if (!is_entity_dead(iVar5))
			{
				vVar0 = { vVar0 + get_entity_coords(iVar5, true, false) };
				fVar4 = (fVar4 + 1f);
			}
		}
		iVar3++;
	}
	fVar6 = (1f / fVar4);
	vVar0 = { vVar0 * Vector(fVar6, fVar6, fVar6) };
	return vVar0;
}

bool func_1493(char[4] cParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= (15 - 1))
	{
		if (!is_entity_dead(&(Local_1105.f_2[iVar0])))
		{
			if (func_1005(Global_35, &(Local_1105.f_2[iVar0]), 1, 1) <= 20f)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_1494(var uParam0)
{
	func_1485(uParam0, 1);
	func_1485(uParam0, 2);
	func_1485(uParam0, 4);
	func_1485(uParam0, 8);
	func_2106(uParam0, 16);
	func_1485(uParam0, 16);
	func_520(&(uParam0->f_210.f_37));
	func_520(&(uParam0->f_210.f_58));
	func_520(&(uParam0->f_210.f_66));
	func_520(&(uParam0->f_210.f_69));
	func_520(&(uParam0->f_210.f_72));
	func_520(&(uParam0->f_210.f_77));
	func_520(&(uParam0->f_210.f_85));
	func_520(&(uParam0->f_210.f_88));
}

void func_1495(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!is_entity_dead(&(uParam0->f_2[iVar0])) && !does_blip_exist(&(uParam0->f_358[iVar0])))
		{
			if (func_2107(uParam0, iVar0))
			{
				uParam0->f_358[iVar0] = _blip_add_for_entity(-214162151, &(uParam0->f_2[iVar0]));
			}
			else
			{
				uParam0->f_358[iVar0] = _blip_add_for_entity(-700928964, &(uParam0->f_2[iVar0]));
			}
		}
		else if (!is_entity_dead(&(uParam0->f_2[iVar0])) && does_blip_exist(&(uParam0->f_358[iVar0])))
		{
			if (func_2107(uParam0, iVar0))
			{
				if (!_0xbd62d98799a3daf0(&(uParam0->f_358[iVar0]), -214162151))
				{
				}
			}
			else if (!_0xbd62d98799a3daf0(&(uParam0->f_358[iVar0]), -700928964))
			{
			}
		}
		iVar0++;
	}
}

bool func_1496(var uParam0)
{
	if (!_0x8d913e493bafe0a3(*uParam0))
	{
		return false;
	}
	if (uParam0->f_189 >= 5)
	{
		return true;
	}
	if (uParam0->f_189 < 1)
	{
		uParam0->f_189 = 1;
	}
	if (uParam0->f_209 == -1)
	{
		iVar0 = 0;
		while (iVar0 < 2)
		{
			if (&uParam0->f_190[iVar0] == 0 && does_entity_exist(uParam0->f_190[iVar0]->f_2))
			{
				uParam0->f_209 = iVar0;
			}
			iVar0++;
		}
	}
	if (!_0x36486af7da93a464(*uParam0))
	{
		_0x6c57bea886a20c6b(*uParam0, 1);
	}
	uParam0->f_613 = { func_1492(uParam0, 0) };
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (!is_entity_dead(&(uParam0->f_2[iVar1])) && !does_blip_exist(&(uParam0->f_358[iVar1])))
		{
			if (func_2107(uParam0, iVar1))
			{
				uParam0->f_358[iVar1] = _blip_add_for_entity(-214162151, &(uParam0->f_2[iVar1]));
			}
			else
			{
				uParam0->f_358[iVar1] = _blip_add_for_entity(-700928964, &(uParam0->f_2[iVar1]));
			}
		}
		iVar1++;
	}
	func_1490(uParam0, 0);
	func_2108(uParam0, 0);
	func_2109(uParam0);
	func_2110(uParam0);
	uParam0->f_613 = { func_2111(uParam0) };
	iVar1 = 0;
	while (iVar1 < 20)
	{
		if (!is_entity_dead(&(uParam0->f_2[iVar1])))
		{
			if ((!_0x9e13acc38ba8f9c3(*uParam0, &(uParam0->f_2[iVar1])) && uParam0->f_691 == 1) && &uParam0->f_23[iVar1] == 3)
			{
				if (func_2112(uParam0, uParam0->f_2[iVar1], 0))
				{
				}
			}
			else if (func_434(&(uParam0->f_2[iVar1]), -1846572487))
}