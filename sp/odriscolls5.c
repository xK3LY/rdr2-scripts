void __EntryFunction__()
{
	fLocal_7 = 1f;
	fLocal_8 = 1f;
	iLocal_140 = 1;
	iLocal_141 = 2;
	iLocal_142 = 3;
	iLocal_143 = 4;
	iLocal_144 = 5;
	iLocal_145 = 25;
	sLocal_146 = "odr5_GoToHanging_DutchLead";
	sLocal_147 = "odr5_FollowMan_DutchFollows";
	sLocal_148 = "odr5_FollowMan_ManWalks";
	sLocal_149 = "odr5_FindSniper_ManWalksOff";
	sLocal_150 = "odr5_FindSniper_DutchReturns";
	sLocal_151 = "odr5_KillODriscolls_Wagon";
	sLocal_152 = "odr5_KillODriscolls_GallowsExit";
	sLocal_153 = "odr5_KillODriscolls_Retreat";
	sLocal_154 = "odr5_KillODriscolls_DutchExitsPark";
	cLocal_155 = "pl_crowd_loop";
	cLocal_156 = "pl_crowd_announce";
	cLocal_157 = "pl_crowd_condemn";
	cLocal_158 = "pl_crowd_exits";
	cLocal_159 = "pl_crowd_exits";
	cLocal_160 = "pl_dutch_enter";
	sLocal_161 = "pl_enter";
	cLocal_162 = "pl_sadie_enter";
	sLocal_163 = "PBL3_Enter_Right";
	sLocal_164 = "PBL2_Enter_Front";
	sLocal_165 = "PBL1_Enter_Left";
	sLocal_166 = "pl_IDLE";
	cLocal_167 = "pl_leadin";
	sLocal_168 = "PL_crowd_to_bench";
	sLocal_169 = "PL_crowd_to_bench2_D";
	sLocal_170 = "PL_crowd_to_bench2_S";
	sLocal_171 = "PL_bench2_to_stairs_D";
	sLocal_172 = "PL_bench2_to_stairs_S";
	sLocal_173 = "PL_bench3_to_post_at_exit_S";
	sLocal_174 = "PL_bench3_to_posts_at_exit_D";
	sLocal_175 = "DST5_Sounds";
	sLocal_176 = "Gallows_Walla";
	sLocal_177 = "DUS5_Follow_Dutch_To_Hanging_Scene";
	sLocal_178 = "DUS5_Follow_Duster_Scene";
	sLocal_179 = "PlayerDistanceToTarget";
	sLocal_180 = "DUS5_Following_Target_Group";
	sLocal_181 = "DUS5_Dusters_Leader_Group";
	sLocal_182 = "POLICE_WHISTLE_MULTI";
	sLocal_183 = "NBX_ODRISCOLLS_5_HIPRI";
	sLocal_184 = "NBX_ODRISCOLLS_5_REG";
	sLocal_185 = "NBX_ODRISCOLLS_5_HIPRI_2";
	sLocal_186 = "NBX_ODRISCOLLS_5_REG_2";
	sLocal_187 = "ODRISCOLLS_PARKED_WAGONS";
	fLocal_205 = 20f;
	fLocal_206 = 20f;
	fLocal_207 = 0.5f;
	iLocal_252 = 1;
	iLocal_253 = 1;
	iLocal_254 = 1;
	iLocal_255 = 1;
	iLocal_256 = 1;
	iLocal_415 = 1997738637;
	iLocal_416 = 1653372950;
	iLocal_417 = -1684458716;
	iLocal_418 = 1018353621;
	iLocal_419 = 20;
	iLocal_420 = 1845102363;
	iLocal_421 = 1402226560;
	iLocal_422 = -618550132;
	iLocal_423 = 379542007;
	iLocal_424 = -1666207837;
	iLocal_425 = -1539465244;
	iLocal_426 = -248746141;
	iLocal_427 = 1071795929;
	iLocal_428 = -967333571;
	if (has_force_cleanup_occurred(4642))
	{
		func_1(&uLocal_1824, 1073741824);
		func_2(&uLocal_1824, 1);
		terminate_this_thread();
	}
	while (!func_3(64))
	{
		wait(0);
	}
	func_4(&uScriptParam_0, &uLocal_1824);
	func_5(&uLocal_1824);
	while (!func_6(&uLocal_1824, -2147483648))
	{
		func_7(&uLocal_1824);
		wait(0);
	}
	while (!func_2(&uLocal_1824, 0))
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
	iLocal_138 = func_125(cParam0);
	iLocal_138 = iLocal_138;
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
	if (!func_163(cParam0))
	{
		return false;
	}
	func_164(cParam0, 0);
	func_165(cParam0, 0);
	func_166(cParam0, 0);
	func_167(cParam0, 0);
	func_168(cParam0, 0);
	func_169(0);
	func_170(cParam0, 0, 0);
	func_171(0);
	func_172(cParam0, 0);
	func_173();
	func_174();
	clear_weather_type_persist();
	func_175();
	func_176(cParam0);
	func_177();
	if (func_178(func_22(cParam0)))
	{
		func_179(cParam0->f_607, 0, 12, 0);
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

void func_11(var uParam0, bool bParam1, bool bParam2)
{
	if (bParam1 && !func_10(*uParam0))
	{
		*uParam0 = 0;
		return;
	}
	iVar0 = func_180(*uParam0);
	if ((*Global_1945938)[iVar0]->f_16 != get_id_of_this_thread() && bParam2)
	{
		*uParam0 = 0;
		return;
	}
	func_181(iVar0);
	*uParam0 = 0;
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
	if (iParam0 == iLocal_139)
	{
		func_217(&Var0, func_216(1, 0));
	}
	else if (iParam0 == iLocal_140)
	{
		func_217(&Var0, func_216(2, 0));
	}
	else if (iParam0 == iLocal_141)
	{
		func_217(&Var0, func_216(3, 0));
	}
	else if (iParam0 == iLocal_142)
	{
		func_217(&Var0, func_216(5, 0));
	}
	else if (iParam0 == iLocal_143)
	{
		func_217(&Var0, func_216(6, 0));
	}
	else if (iParam0 == iLocal_144)
	{
		func_217(&Var0, func_216(6, 0));
	}
	else if (iParam0 == iLocal_145)
	{
		func_218(&Var0, 2350.455f, 1331.184f, 101.5137f, 311f);
	}
	return Var0;
}

int func_35(char[4] cParam0)
{
	return func_219(cParam0, func_33(cParam0));
}

void func_36(char[4] cParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Var0 = { Param1 };
	Var0.f_3 = Param1.f_3;
	Var4 = { Param5 };
	Var4.f_3 = Param5.f_3;
	func_201(0);
	func_220(func_12(cParam0->f_607), Var0, Var4, func_132(iParam9), func_132(iParam10));
}

void func_37(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_210((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 9)
		{
			func_221((*uParam0)[iVar0]);
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
			func_222(iVar0, 4096);
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
		func_223(Global_1935630, 4194304);
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
	func_224();
	func_225();
	func_226();
	func_227();
}

void func_43()
{
	if (func_228())
	{
		Global_18 = 0;
		Global_43884 = 0;
		if (!func_29())
		{
			func_229(1);
		}
	}
}

void func_44()
{
	Global_1894899->f_186 = 0;
	func_230();
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
	func_231(1, iParam0, iParam1);
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
	return (func_232() || func_54());
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
	func_233(uParam0);
	func_234(uParam0, 0);
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
		func_235(iVar0);
		iVar0++;
	}
	func_236();
	func_237();
}

bool func_54()
{
	return Global_1894899 & 2 != 0;
}

void func_55(bool bParam0, int iParam1)
{
	if (func_238())
	{
		if (func_239(255))
		{
			if (!func_240(36, 255))
			{
				return;
			}
		}
	}
	bVar0 = bParam0;
	if (!bParam0)
	{
		if (func_241(Global_1894899->f_2) && func_242(Global_1894899->f_2))
		{
			func_243(Global_1894899->f_2, 0);
			if (iParam1 != 0)
			{
				Global_1894899->f_7 = iParam1;
				func_244(16);
			}
		}
		else if (func_241(Global_1894899->f_2) && !func_245(Global_1894899->f_2, 2))
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
		func_246(16);
		func_247();
		if (bVar0)
		{
			func_246(1);
		}
	}
}

void func_56(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_248(cParam0->f_5423[iVar0]))
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
	if (func_249(cParam0->f_5421))
	{
		iVar0 = 0;
		while (iVar0 < func_250(cParam0->f_5421))
		{
			iVar1 = func_251(cParam0->f_5421, iVar0);
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
		if (func_252(iVar1))
		{
			iVar2 = Global_1360165[iVar0];
			func_253(cParam0, iVar1, iVar2, iParam1, bParam2, bParam3, 0);
		}
		iVar0++;
	}
}

void func_58(char[4] cParam0, bool bParam1)
{
	_0x0751d461f06e41ce(get_player_index(), 33, 2, 0);
	iVar0 = func_254(cParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
	}
	iVar1 = func_255(iVar0);
	iVar2 = get_id_of_this_thread();
	bVar3 = false;
	if (is_thread_active(iVar2, false) && func_256(iVar1) == iVar2)
	{
		bVar3 = true;
	}
	if (bVar3)
	{
		if (bParam1)
		{
			func_257(7);
		}
		else
		{
			func_258(iVar0, 0);
		}
		func_259(cParam0, 16);
		set_ped_config_flag(iVar0, 219, false);
	}
}

void func_59(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_261(iParam0, 32);
	func_262();
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
	Var0 = { func_263(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_delete(&Var0);
	}
}

void func_63(int iParam0)
{
	Var0 = { func_264(iParam0) };
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
	func_265(&(cParam0->f_13121));
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
		iVar2 = func_266(iParam0);
		if (iVar2 == 36)
		{
			iVar1 = 99;
			if (func_267(iVar1))
			{
				if (func_268(iVar1, 4))
				{
					func_269(iVar1, 1);
				}
			}
		}
		else if (iVar2 == 38)
		{
			func_270(1);
		}
	}
	else if (iVar0 == 8)
	{
		iVar3 = func_266(iParam0);
		if (iVar3 == 59)
		{
			func_270(1);
		}
		else if (iVar3 == 61)
		{
			func_270(0);
		}
		else if (iVar3 == 83)
		{
			func_270(0);
		}
	}
}

void func_73()
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_267(iVar0))
		{
			if (func_268(iVar0, 4))
			{
				if (func_268(iVar0, 16))
				{
					func_271(iVar0, 1);
				}
				if (func_268(iVar0, 8))
				{
					func_272(iVar0, 1);
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
		if (func_273(cParam0) == 0 && iVar0 == 0)
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
		func_274(iVar3, iVar4);
	}
	if (bVar2)
	{
		func_275(cParam0);
	}
}

void func_75(char[4] cParam0)
{
	iVar0 = 0;
	if (func_276(cParam0))
	{
		fVar1 = to_float((_get_bounty_for_player(get_player_index()) - (*Global_2621440)[0]->f_9.f_20));
		if (fVar1 > 0f)
		{
			fVar2 = (1f + (to_float(get_random_int_in_range(50, 200)) / 1000f));
			iVar0 = (iVar0 + round((fVar1 * fVar2)));
		}
	}
	func_277(iVar0, 0, 1065353216, 1, 0, 0, 1, 752097756);
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
	if (!func_241(iParam0))
	{
		return;
	}
	bVar0 = func_245(iParam0, 67108864);
	if (bParam1)
	{
		if (((!bVar0 && func_278(iParam0) == 1) && iParam0 != 120) && iParam0 != 92)
		{
			func_280(iParam0, func_279());
			func_281(iParam0, 67108864);
		}
	}
	else if (bVar0)
	{
		func_282(iParam0, 67108864);
		func_280(iParam0, -15);
	}
	func_283(iParam0);
}

void func_79(bool bParam0)
{
	if (!bParam0)
	{
		func_284(11);
	}
	else
	{
		func_285(11);
	}
}

void func_80(int iParam0)
{
	if (func_286(iParam0, 0))
	{
		func_287(262144, 5, 0, 1);
		func_288(720f, 1, 0);
	}
	switch (iParam0)
	{
		case 18:
			func_289(101, 7, 1f, 0, 1);
			func_289(89, 7, 1f, 0, 1);
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
	if (func_290(iParam0) == 4)
	{
		func_291(iParam0, func_279());
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
		func_292(0, 2);
		if (!bVar1 && bParam1)
		{
			func_293();
		}
	}
	else
	{
		func_197(0);
	}
	if (!iVar0 == 1 && !iVar0 == 8)
	{
		func_294(iParam0);
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
						if (func_266(iParam0) == 77)
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[76]->f_8), true);
						}
						else
						{
							stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_266(iParam0)]->f_8), true);
						}
					}
					else if ((func_266(iParam0) != 95 && func_266(iParam0) != 82) && !func_295((*Global_1347702)[func_266(iParam0)]->f_12, 512))
					{
						stat_id_set_gxt_label(&Var4, &((*Global_1347702)[func_266(iParam0)]->f_3), true);
					}
				}
			}
			else
			{
				switch (_0x225640e09effdc3f())
				{
					case 0:
						stat_id_set_gxt_label(&Var4, &((*Global_1835011)[func_266(iParam0)]->f_8), true);
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
		func_297(func_266(iParam0), iVar6, func_296());
	}
	else if (iVar0 == 8)
	{
		func_299(func_266(iParam0), iVar6, func_296(), func_298());
	}
	if (!func_187(iParam0) == 5 && !func_187(iParam0) == 6)
	{
		iVar9 = func_300(iParam0, &uVar7, &iVar8);
		if (iVar9 != 176656832)
		{
			func_301(iVar9, uVar7, -469960592, iVar8, 1, 1, 0);
		}
	}
	if (!&Global_1879534 && !Global_1879534->f_1)
	{
		switch (iVar0)
		{
			case 1:
				iVar10 = func_302(func_266(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_303((iVar10 - 20), 0, iVar10);
					iVar11 = func_303((iVar11 - 10), 0, iVar11);
				}
				func_304(1);
				func_305(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				Global_1899528->f_217 = 1;
				break;
			case 4:
				func_305(45, 0, 1);
				break;
			case 8:
				iVar10 = func_306(func_266(iParam0), &iVar11);
				if (!Global_17504.f_9)
				{
					iVar10 = func_303((iVar10 - 20), 0, iVar10);
					iVar11 = func_303((iVar11 - 10), 0, iVar11);
				}
				func_305(iVar10, iVar11, 1);
				Global_17504.f_9 = 0;
				Global_17504.f_10 = 0;
				if (func_307(func_266(iParam0)))
				{
					func_308(14, 0, 0, 0, 0, 0, 1065353216, 0);
				}
				Global_1899528->f_217 = 1;
				break;
			case 9:
				func_305(120, 0, 1);
				break;
			case 2:
				func_305(120, 0, 1);
				break;
			case 6:
				func_305(func_310(func_309(iParam0)), 0, 1);
				break;
			case 5:
				func_305(120, 0, 1);
				break;
		}
	}
	func_199(iParam0, 1);
	func_291(iParam0, func_279());
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
				switch (func_266(iParam0))
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
				if (func_267(func_266(iParam0)) && func_295((*Global_1347702)[func_266(iParam0)]->f_12, 4))
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
				if (func_266(iParam0) != 77)
				{
					Global_1879514->f_1 = iParam0;
					Global_1879514->f_11 = bParam3;
					Global_1879514->f_13 = func_129();
				}
				break;
			case 8:
				if (func_266(iParam0) != 58)
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
				switch (func_266(iParam0))
				{
					case 0:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_ODRISCOLL"));
						_0xd8c7162ab2e2af45(-1753910767);
						break;
					case 1:
						func_311();
						_0xbb697756309d77ee(1);
						break;
					case 4:
						func_312(-1781387050, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(1433048902, 4, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-597058368, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-529638012, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(500564674, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-875449072, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(1237770824, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(236757114, 3, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-601932535, 2, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-1267972061, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(-1267972061);
						func_312(1619534881, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(1619534881);
						func_312(-755457379, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(-755457379);
						func_312(1015404643, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(1015404643);
						func_312(-1724192342, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(-1724192342);
						func_312(1310680212, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(1310680212);
						func_312(-566881549, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(-566881549);
						func_312(-1753730528, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(-1753730528);
						func_312(147796381, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(147796381);
						func_312(-378547623, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(-378547623);
						func_312(829545206, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(829545206);
						func_312(891318243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_313(891318243);
						func_312(-1016714371, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-1838434463, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-1448210800, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-248960099, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_314();
						func_315(967523420);
						func_316();
						func_317();
						break;
					case 5:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOMMY"));
						break;
					case 14:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_LEVITICUS"));
						break;
					case 2:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key(func_318(10, 0)));
						break;
					case 8:
						_0x946d46cd6dfb9742(get_player_index(), 0, 621714131);
						break;
					case 15:
						func_312(1030791766, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						if (!_unlock_is_visible(1231074654))
						{
							_unlock_set_visible(1231074654, true);
							func_319(449, 0);
						}
						break;
					case 10:
						if (!_unlock_is_visible(1880205078))
						{
							_unlock_set_visible(1880205078, true);
							func_319(446, 0);
						}
						break;
					case 16:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_LEIGHGRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("ALLY_ARCHIBALD"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_PROFESSION_GRAY"));
						break;
					case 18:
						func_320(304805134, 1, 1);
						if (!func_321((*Global_1347702)[21]->f_15, 1))
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
						func_322();
						break;
					case 26:
						func_323();
						break;
					case 17:
						func_324(Global_35, 176992230, 0, -358215195, 1, 1);
						if (func_325())
						{
							func_326(1905553950);
						}
						break;
					case 19:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TAVISH_GRAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLAY"));
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_CLIVE"));
						break;
					case 33:
						if (!func_327(-514575035, -1))
						{
							iVar15 = func_279();
							func_328(&iVar15, 0, 0, 0, 2, 0, 0, 0);
							func_329(-514575035, iVar15, 0);
						}
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_EVELYN_MILLER"));
						if (func_325())
						{
							func_326(1529685685);
						}
						break;
					case 34:
						if (func_325())
						{
							func_326(-2082646505);
						}
						break;
					case 28:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_BRONTE"));
						break;
					case 31:
						func_330();
						break;
					case 37:
						func_331();
						if (func_332())
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
						func_333();
						break;
					case 43:
						func_334();
						break;
					case 44:
						if (!func_321((*Global_1347702)[82]->f_15, 1))
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
						if (!func_321((*Global_1347702)[83]->f_15, 1))
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
						func_335();
						break;
					case 59:
						func_336();
						break;
					case 60:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_TOM_DICKENS"));
						break;
					case 61:
						func_337();
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
						func_338();
						if (!_unlock_is_visible(1673898385))
						{
							_unlock_set_visible(1673898385, true);
							func_319(451, 0);
						}
						if (!func_339(-1992824800))
						{
							if (func_339(1520110311))
							{
								iVar16 = func_279();
								func_328(&iVar16, 0, 0, 6, 0, 0, 0, 0);
								func_329(1937177603, iVar16, 1);
							}
						}
						if (func_340(4))
						{
							if (!func_341(684296857, 1, 0))
							{
								iVar17 = func_279();
								func_328(&iVar17, 0, 0, 6, 0, 0, 0, 0);
								func_329(-1439688706, iVar17, 1);
							}
						}
						func_312(1224687176, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						func_312(-4440804, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
						break;
					case 74:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ALBERT_CAKE"));
						func_342(89200);
						func_342(2300);
						func_342(2300);
						break;
					case 68:
						func_343();
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
						func_344();
						func_342(-139100);
						break;
					case 69:
						if (func_321((*Global_1347702)[9]->f_15, 1))
						{
							func_342(-6000);
						}
						break;
					case 70:
						func_342(23400);
						func_342(1900);
						func_342(-15000);
						break;
					case 71:
						func_342(-5500);
						break;
				}
				break;
			case 8:
				switch (func_266(iParam0))
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
						func_345();
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
						func_346();
						break;
					case 66:
						func_347();
						func_348();
						break;
					case 67:
						if (!func_349(6))
						{
							func_350(6);
						}
						if (!func_349(3))
						{
							func_350(3);
						}
						if (func_325())
						{
							func_326(1534638301);
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
						if (func_321((*Global_1835011)[69]->f_1, 1))
						{
							func_351(0);
							func_342(40500);
						}
						else
						{
							func_351(0);
							func_342(46500);
						}
						break;
				}
				break;
			case 6:
				switch (func_266(iParam0))
				{
					case 0:
						switch (func_309(iParam0))
						{
							case 5:
								_0x946d46cd6dfb9742(get_player_index(), 0, 1014740297);
								break;
						}
						break;
				}
				break;
		}
		func_352(iParam0);
		func_353();
		switch (iVar0)
		{
			case 1:
				switch (func_266(iParam0))
				{
					case 4:
						func_354(iParam0, 1000, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 61:
					case 62:
					case 63:
						func_354(iParam0, 300, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 25:
						func_354(iParam0, 150000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 12:
						func_354(iParam0, 120000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 53:
						func_354(iParam0, 90000, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 20:
						func_354(iParam0, 85000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 19:
						func_354(iParam0, 70000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 24:
						iVar18 = func_355(iParam0);
						func_354(iParam0, iVar18, 1, 0.5f, 4, 0, 0, 1);
						break;
					case 28:
						func_354(iParam0, 45000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 34:
						func_354(iParam0, 600000, 1, 0.5f, 4, 0, 0, 1);
						if (!func_341(-2046502963, 1, 0))
						{
							func_312(-2046502963, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
						}
						break;
					case 29:
						func_354(iParam0, 4600, 1, 0f, 3, 0, 0, 1);
						break;
					case 37:
						break;
					case 58:
						break;
					case 57:
						func_354(iParam0, 2100000, 1, 0.9047619f, 8, 0, 0, 1);
						break;
					case 76:
						func_354(iParam0, 2042100, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 72:
						if (func_355(iParam0) == 0)
						{
							func_354(iParam0, 20000, 0, 1065353216, 1, 0, 0, 1);
						}
						else
						{
							func_354(iParam0, 15000, 0, 1065353216, 1, 0, 0, 1);
						}
						break;
				}
				break;
			case 8:
				if (func_295((*Global_1347702)[func_266(iParam0)]->f_12, 536870912))
				{
					func_356(11, 1);
				}
				switch (func_266(iParam0))
				{
					case 109:
						func_354(iParam0, 1500, 0, 1065353216, 1, 0, 0, 1);
						break;
					case 55:
						func_356(8, 1);
						break;
					case 138:
						set_bit(&(Global_40.f_9052), 1);
						set_bit(&(Global_40.f_9052), 3);
						break;
					case 94:
						func_354(iParam0, 30000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 63:
						func_354(iParam0, 60000, 1, 0.5f, 3, 0, 0, 1);
						break;
					case 37:
						func_354(iParam0, 75000, 1, 0.5f, 2, 0, 0, 1);
						break;
					case 116:
						func_354(iParam0, 25000, 1, 0.5f, 1, 0, 0, 1);
						break;
					case 9:
						_0x946d46cd6dfb9742(get_player_index(), 0, get_hash_key("DISCOVERABLE_NAME_ANSEL_ATHERTON"));
						break;
				}
				break;
			case 11:
				if (iParam0 == func_357(0, 10, 11, 2116153146))
				{
					func_354(iParam0, func_355(iParam0), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_357(0, 7, 11, -379687487))
				{
					func_354(iParam0, func_358(9), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_357(0, 8, 11, -1386089015))
				{
					func_354(iParam0, func_358(10), 1, 0.5f, 2, 0, 0, 1);
				}
				else if (iParam0 == func_357(0, 11, 11, -1952009645))
				{
					func_354(iParam0, func_358(8), 1, 0.5f, 3, 0, 0, 1);
				}
				else if (iParam0 == func_357(0, 12, 11, 2065895756))
				{
					func_354(iParam0, func_358(11), 1, 0.5f, 2, 0, 0, 1);
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
						if (iVar0 == 8 && func_266(iParam0) == 58)
						{
							Global_1879514->f_1 = iParam0;
						}
						func_360(func_359(Global_1879514->f_1));
						if (iVar0 == 8 && func_266(iParam0) == 58)
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
						if (func_267(func_266(iParam0)) && func_295((*Global_1347702)[func_266(iParam0)]->f_12, 1))
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
			func_361(bParam2, iVar20);
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
			if ((iVar1 == 1 || iVar1 == 8) || (iVar1 == 11 && iParam0 == func_357(0, 10, 11, 2116153146)))
			{
				Global_1898438 = get_game_timer();
				Global_1879514->f_1 = iParam0;
				Global_1879514->f_19 = func_362();
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
			switch (func_266(iParam0))
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
			switch (func_266(iParam0))
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
	vVar2 = { func_363((*Global_2621440)[0]->f_9.f_7, &uVar0, &uVar1, 0, 1, 1, 0, 0, 0) };
	func_364(vVar2, uVar1, uVar0, 0);
	func_365(vVar2);
	Global_40.f_9.f_15 = func_366(vVar2, 0);
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
	func_367();
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
	func_368(Var10, 0);
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
			func_304(1);
			func_305(15, 0, 1);
			break;
		case 4:
			func_305(10, 0, 1);
			break;
		case 8:
			func_305(10, 0, 1);
			break;
		case 9:
			func_305(10, 0, 1);
			break;
		case 2:
			func_305(10, 0, 1);
			break;
		case 6:
			func_305(10, 0, 1);
			break;
		case 5:
			func_305(10, 0, 1);
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
	if (func_369(Global_1347343->f_11, 536870912))
	{
		return;
	}
	if (bParam3)
	{
		func_370(&(Global_1347343->f_11), 64);
	}
	if (bParam4)
	{
		func_370(&(Global_1347343->f_11), 16384);
	}
	if (func_371() >= 2)
	{
		if (!func_369(Global_1347343->f_11, 16384))
		{
			func_370(&(Global_1347343->f_11), 8);
		}
		func_204(0.88f);
	}
	StringCopy(&(Global_1347343->f_3), sParam2, 64);
	Global_1347343->f_2 = iParam0;
	Global_1347343 = 0;
	Global_1347343->f_1 = iParam1;
	func_223(Global_1935630, 2048);
	func_372(bParam5);
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
			func_373(&(cParam0->f_10792), &(Global_43619[iVar0]), &(Global_43619[iVar0]->f_1), 0);
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
		func_374(cParam0, 67108864);
	}
}

int func_101(char[4] cParam0)
{
	return func_375(&(cParam0->f_7375));
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
	return func_376() != -1;
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
	func_377(cParam0);
	cParam0->f_634[0] = 63087;
	cParam0->f_634[1] = 63087;
	cParam0->f_637 = 0;
	func_379(cParam0, *uParam1);
	func_380(cParam0);
}

void func_109(char[4] cParam0)
{
	func_382(cParam0, func_381(1, 3));
	func_383(cParam0, 56);
	func_384(cParam0);
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
			func_385(iVar0, iVar1);
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
	if (!func_241(iParam0))
	{
		return false;
	}
	return func_245(iParam0, 33554432);
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
	return func_386(cParam0->f_1[func_132(iParam1)]->f_11, iParam2);
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
		func_387(&(cParam0->f_7375));
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
	return func_388(iParam0);
}

bool func_127(struct<4> Param0)
{
	if (func_82(32768))
	{
		return true;
	}
	return func_389(Param0, Param0.f_3);
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
	if (!func_390())
	{
		return false;
	}
	if (!func_321((*Global_1835011)[1]->f_1, 1))
	{
		return true;
	}
	if ((func_321((*Global_1835011)[2]->f_1, 1) && func_321((*Global_1347702)[120]->f_15, 1)) && !func_321((*Global_1835011)[4]->f_1, 1))
	{
		return true;
	}
	if (func_321((*Global_1835011)[37]->f_1, 1) && !func_321((*Global_1835011)[39]->f_1, 1))
	{
		return true;
	}
	if (func_321((*Global_1835011)[57]->f_1, 1) && !func_321((*Global_1835011)[60]->f_1, 1))
	{
		return true;
	}
	if (func_321((*Global_1835011)[26]->f_1, 1) && !func_321((*Global_1347702)[67]->f_15, 1))
	{
		return true;
	}
	if ((func_321((*Global_1835011)[62]->f_1, 1) && func_321((*Global_1835011)[63]->f_1, 1)) && !func_321((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if (func_321((*Global_1835011)[75]->f_1, 1) && !func_321((*Global_1347702)[1]->f_15, 1))
	{
		return true;
	}
	if (func_321((*Global_1835011)[76]->f_1, 1) && !func_321((*Global_1835011)[77]->f_1, 1))
	{
		return true;
	}
	if ((func_321((*Global_1835011)[40]->f_1, 1) && func_321((*Global_1835011)[41]->f_1, 1)) && !func_321((*Global_1835011)[44]->f_1, 1))
	{
		return true;
	}
	if ((func_321((*Global_1835011)[62]->f_1, 1) && func_321((*Global_1835011)[63]->f_1, 1)) && !func_321((*Global_1835011)[64]->f_1, 1))
	{
		return true;
	}
	if ((func_321((*Global_1835011)[65]->f_1, 1) && func_321((*Global_1835011)[66]->f_1, 1)) && !func_321((*Global_1835011)[67]->f_1, 1))
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
	if (func_391(vParam1))
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
		return func_392();
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
		func_393(cParam0->f_607);
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
	func_394(&(cParam0->f_638));
	func_395(&(cParam0->f_819));
	func_396(&(cParam0->f_1020));
	func_397(&(cParam0->f_1081));
	func_398(&(cParam0->f_1126));
	func_399(&(cParam0->f_5147));
	func_400(&(cParam0->f_1124));
	func_401(&(cParam0->f_5188));
	func_402(&(cParam0->f_5239));
	func_403(&(cParam0->f_5249));
	func_404(&(cParam0->f_5265));
	func_405(&(cParam0->f_5286));
}

void func_138(char[4] cParam0)
{
	if (!is_itemset_valid(Local_14))
	{
		Local_14 = create_itemset(true);
	}
	func_406(cParam0, 70776250, 67108863);
	func_406(cParam0, -1970375879, 67108863);
	func_406(cParam0, -1543503143, 67108863);
	func_406(cParam0, -1786946391, 67108863);
	func_406(cParam0, 1651707011, 67108863);
	func_406(cParam0, -1722482035, 67108863);
	func_406(cParam0, -1935733155, 67108863);
	func_406(cParam0, -1448273283, 67108863);
	func_406(cParam0, 1245530084, 67108863);
	func_406(cParam0, 852072701, 67108863);
	func_406(cParam0, -820975767, 67108863);
	func_406(cParam0, -763072541, 67108863);
	func_406(cParam0, -2102436869, 67108863);
	func_406(cParam0, 2133848994, 67108863);
	func_406(cParam0, 1854820959, 67108863);
	func_406(cParam0, 549598920, 67108863);
	func_406(cParam0, -468934984, 67108863);
	func_406(cParam0, 1485366395, 7);
	func_406(cParam0, -1758092337, 524336);
	func_406(cParam0, 653445543, 67108863);
	func_406(cParam0, 928344684, 67108863);
	func_406(cParam0, -2001000389, 67108863);
	func_406(cParam0, -1734227960, 67108863);
	func_406(cParam0, -1039531072, 4);
	func_406(cParam0, 1079491822, 4);
	func_406(cParam0, -1938511850, 4);
	func_406(cParam0, 2024948086, 67108863);
	func_406(cParam0, 70776250, 67108863);
	func_406(cParam0, -1970375879, 67108863);
	func_406(cParam0, -1543503143, 67108863);
	func_406(cParam0, -1786946391, 67108863);
	func_406(cParam0, 1651707011, 67108863);
}

void func_139(char[4] cParam0)
{
	func_407(cParam0, "SCRIPT_STORY@DST5@ig@ig_unapproved", 524336);
	func_408(cParam0, "script@story@dst5@ig@ig_1_CrowdWaits@ig_1_CrowdWaits", uLocal_230[0], 31, 0, 0, 0, 1);
	func_408(cParam0, "script@story@dst5@ig@ig_2_CrowdExits@ig_2_CrowdExits", uLocal_230[1], 15, 0, 0, 0, 1);
	func_408(cParam0, "script@story@dst5@ig@ig_2_CrowdExits@ig_2_CrowdExits_PostMCS3", uLocal_230[2], 16, 0, 0, 0, 1);
	func_408(cParam0, "script@story@dst5@ig@IG_4_Dutch_Arrive_At_Hanging@IG_4_Dutch_Arrive_At_Hanging", uLocal_230[3], 1, 0, 0, 0, 1);
	func_408(cParam0, "script@story@dst5@ig@IG_4_Sadie_Arrive_At_Hanging@IG_4_Sadie_Arrive_At_Hanging", uLocal_230[4], 1, 0, 0, 0, 1);
	func_408(cParam0, "script@story@dst5@ig@IG11_TALK_AT_FOUNTAIN@IG11_TALK_AT_FOUNTAIN@talk_at_fountain_dutch", uLocal_230[6], 2, 0, "Pl_dutch_loop", 0, 1);
	func_408(cParam0, "script@story@dst5@ig@ig11_talk_at_fountain@ig11_talk_at_fountain@talk_at_fountain_odriscolls", uLocal_230[8], 2, 0, "PL_ODRISCOLLS_LOOP", 0, 1);
	func_408(cParam0, "script@story@dst5@ig@IG9_DUTCH_POINTS_AT_LADDER@IG9_DUTCH_POINTS_AT_LADDER", uLocal_230[5], 4, 0, sLocal_161, 0, 1);
	func_408(cParam0, "script@story@dst5@leadin@MCS2@leadin", uLocal_230[9], 2, 0, sLocal_166, 0, 1);
	func_408(cParam0, "script@story@dst5@ig@IG8_DUTCH_AND_SADIE_ESCAPE_PARK@IG8_DUTCH_AND_SADIE_ESCAPE_PARK@crowd_to_bench_trans", uLocal_230[10], 16, 0, sLocal_168, 0, 1);
	func_408(cParam0, "script@story@dst5@ig@IG8_DUTCH_AND_SADIE_ESCAPE_PARK@IG8_DUTCH_AND_SADIE_ESCAPE_PARK@bench_to_bench2_trans", uLocal_230[11], 16, 0, sLocal_169, 0, 1);
	func_408(cParam0, "script@story@dst5@ig@IG8_DUTCH_AND_SADIE_ESCAPE_PARK@IG8_DUTCH_AND_SADIE_ESCAPE_PARK@bench_to_bench2_trans", uLocal_230[12], 16, 0, sLocal_170, 0, 1);
	func_408(cParam0, "script@story@dst5@ig@IG8_DUTCH_AND_SADIE_ESCAPE_PARK@IG8_DUTCH_AND_SADIE_ESCAPE_PARK@bench2_to_stairs_trans", uLocal_230[13], 16, 0, sLocal_171, 0, 1);
	func_408(cParam0, "script@story@dst5@ig@IG8_DUTCH_AND_SADIE_ESCAPE_PARK@IG8_DUTCH_AND_SADIE_ESCAPE_PARK@bench2_to_stairs_trans", uLocal_230[14], 16, 0, sLocal_172, 0, 1);
	func_408(cParam0, "script@story@dst5@ig@IG8_DUTCH_AND_SADIE_ESCAPE_PARK@IG8_DUTCH_AND_SADIE_ESCAPE_PARK@bench3_to_posts_at_exit_trans", uLocal_230[15], 16, 0, sLocal_173, 0, 1);
	func_408(cParam0, "script@story@dst5@ig@IG8_DUTCH_AND_SADIE_ESCAPE_PARK@IG8_DUTCH_AND_SADIE_ESCAPE_PARK@bench3_to_posts_at_exit_trans", uLocal_230[16], 16, 0, sLocal_174, 0, 1);
	func_408(cParam0, "script@story@dst5@ig@IG10_WALK_AND_TALK@A_WNT", uLocal_230[17], 524288, 0, 0, 0, 1);
	func_408(cParam0, "script@story@dst5@ig@IG10_WALK_AND_TALK@B_HANDOVER", uLocal_230[18], 524288, 0, 0, 0, 1);
	func_408(cParam0, "script@story@dst5@ig@ig_skylapse@skytl_1500_clear", uLocal_230[19], 32, 0, 0, 0, 1);
	func_409(cParam0, &(uLocal_230[0]), cLocal_155, 31);
	func_409(cParam0, &(uLocal_230[0]), cLocal_156, 12);
	func_409(cParam0, &(uLocal_230[0]), cLocal_157, 8);
	func_409(cParam0, &(uLocal_230[1]), cLocal_158, 15);
	func_409(cParam0, &(uLocal_230[2]), cLocal_159, 16);
	func_409(cParam0, &(uLocal_230[3]), cLocal_160, 1);
	func_409(cParam0, &(uLocal_230[4]), cLocal_162, 1);
	func_409(cParam0, &(uLocal_230[6]), "PL_DUTCH_EXIT", 2);
	func_409(cParam0, &(uLocal_230[8]), "pl_odriscolls_exit", 2);
	func_409(cParam0, &(uLocal_230[9]), cLocal_167, 2);
	func_410(cParam0, sLocal_146, 1, 2, -1);
	func_410(cParam0, sLocal_147, 2, 2, -1);
	func_410(cParam0, sLocal_148, 2, 2, -1);
	func_410(cParam0, sLocal_149, 4, 2, -1);
	func_410(cParam0, sLocal_150, 4, 2, -1);
	func_410(cParam0, sLocal_151, 16, 2, -1);
	func_410(cParam0, sLocal_152, 16, 2, -1);
	func_410(cParam0, sLocal_154, 16, 2, -1);
	func_410(cParam0, sLocal_153, 32, 2, -1);
	func_406(cParam0, -548150401, 1);
	func_406(cParam0, 1843407141, 1);
	func_406(cParam0, -1883578190, 1);
	func_406(cParam0, 851401507, 1);
	func_406(cParam0, 1610236838, 1);
	func_406(cParam0, 633326690, 1);
	func_406(cParam0, 1954479996, 1);
	func_406(cParam0, iVar421, 524336);
	func_406(cParam0, iVar422, 524336);
	func_406(cParam0, iVar423, 524336);
	func_406(cParam0, iVar424, 524336);
	func_406(cParam0, iVar425, 6);
	func_406(cParam0, 867074004, 524288);
	func_406(cParam0, -1311208351, 524288);
	func_406(cParam0, -1926868415, 524288);
	func_411(cParam0, iVar419, 524344, -1, 0);
	func_411(cParam0, iVar418, 67108863, -1, 0);
}

void func_140(char[4] cParam0, int iParam1, int iParam2)
{
	func_412(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
}

void func_141(char[4] cParam0)
{
}

void func_142(char[4] cParam0, int iParam1)
{
	func_413(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1);
}

void func_143(int iParam0)
{
	Var0 = { func_263(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_144(int iParam0)
{
	Var0 = { func_264(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		_text_database_request(&Var0);
	}
}

void func_145(char[4] cParam0, int iParam1, char* sParam2, bool bParam3)
{
	func_414(&(cParam0->f_5310), iParam1, sParam2, bParam3);
}

void func_146(char[4] cParam0)
{
	if (!func_249(cParam0->f_5421))
	{
		cParam0->f_5421 = { func_415() };
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
	func_416(&(cParam0->f_7375), fParam1);
}

void func_150(char[4] cParam0, float fParam1)
{
	func_417(&(cParam0->f_7375), fParam1);
}

void func_151(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_418(cParam0, iParam1, sParam2, iParam3, iParam4, bParam5, 0);
	func_373(&(cParam0->f_10792), iParam1, sParam2, bParam6);
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
		if (func_419(cParam0, func_35(cParam0), 0))
		{
			func_140(cParam0, func_35(cParam0), 536870912);
		}
	}
	if (func_8(cParam0, 8192))
	{
		if (!func_8(cParam0, 536870912))
		{
			if (func_420(&(cParam0->f_1126), func_33(cParam0)))
			{
				func_99(cParam0, 536870912);
			}
		}
		return;
	}
	bVar0 = false;
	if (func_419(cParam0, func_33(cParam0), 1))
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
	if (func_421(cParam0) < 1)
	{
		func_422(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0);
		func_423(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1);
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
				func_424(cParam0);
			}
		}
		if (func_120(cParam0, 32))
		{
			func_425(cParam0);
		}
	}
	switch (func_421(cParam0))
	{
		case -1:
		case 0:
			func_426(cParam0, 1);
			break;
		case 1:
			if (func_427(cParam0))
			{
				if (func_120(cParam0, 4096))
				{
					func_426(cParam0, 2);
				}
				else
				{
					func_426(cParam0, 3);
				}
			}
			break;
		case 2:
			if (func_428(cParam0))
			{
				func_426(cParam0, 3);
			}
			break;
		case 3:
			if (func_429(cParam0))
			{
				func_426(cParam0, 4);
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
		func_430(cParam0, 0);
		return true;
	}
	if (func_431(cParam0))
	{
		iVar0 = func_33(cParam0);
		func_107(cParam0, func_35(cParam0));
		if (func_33(cParam0) == 26)
		{
			func_430(cParam0, 0);
			return true;
		}
		else if (func_121(cParam0, iVar0, 128))
		{
			func_431(cParam0);
		}
	}
	return false;
}

int func_162(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_10;
}

bool func_163(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		clear_ped_tasks(Global_35, 1, 0);
		set_ped_config_flag(Global_35, 20, false);
		_0x437c08db4febe2bd(Global_35, "stealth", 0f, -1);
		func_432(0);
		func_433(1);
		_0x949b2f9ed2917f5d(Global_35, 15);
		_0x949b2f9ed2917f5d(Global_35, 16);
		_0x949b2f9ed2917f5d(Global_35, 17);
	}
	func_434(1);
	if (func_435(iVar663, 0))
	{
		_0x58f7db5bd8fa2288(iVar663);
		set_ped_config_flag(iVar663, 20, false);
		func_436(iVar663);
	}
	func_253(cParam0, 0, iVar663, 0, 1, 1, 0);
	if (func_435(iVar664, 0))
	{
		func_436(iVar664);
	}
	func_253(cParam0, 11, iVar664, 0, 1, 1, 0);
	if (func_22(cParam0) != 0)
	{
		func_437(7, 0);
	}
	func_438(&(Local_14.f_59), 0);
	func_438(&(Local_14.f_68), 0);
	func_438(&(Local_14.f_98), 0);
	func_438(&(Local_14.f_73), 0);
	func_438(&(Local_14.f_20), 0);
	func_438(&(Local_14.f_24), 0);
	func_438(&(Local_14.f_9), 0);
	func_438(&(Local_14.f_14), 0);
	func_438(&(Local_14.f_78), 0);
	func_438(&(Local_14.f_50), 0);
	func_438(&(Local_14.f_46), 0);
	func_438(&(Local_14.f_3), 0);
	func_438(&(Local_14.f_28), 0);
	func_438(&(Local_14.f_87), 0);
	func_438(&(Local_14.f_103), 0);
	func_438(&(Local_14.f_112), 0);
	if (func_439(138, 1))
	{
		func_440(138, 0, 1, 0, 0);
	}
	return true;
}

void func_164(char[4] cParam0, bool bParam1)
{
	if (bParam1)
	{
		if (func_33(cParam0) == iLocal_139)
		{
			func_441(sLocal_183, sLocal_184);
		}
		if (func_33(cParam0) == iLocal_141 || func_33(cParam0) == iLocal_142)
		{
			func_441(sLocal_185, sLocal_186);
		}
		func_442(sLocal_187, 0);
	}
	else
	{
		func_441(sLocal_184, sLocal_183);
		func_441(sLocal_186, sLocal_185);
		func_442(sLocal_187, 1);
	}
}

void func_165(char[4] cParam0, bool bParam1)
{
	if (bParam1)
	{
		iLocal_619[6] = get_object_index_from_entity_index(func_443(cParam0, 1954479996, 1));
		if (!does_entity_exist(&(iLocal_619[6])))
		{
			iLocal_619[6] = create_object(1954479996, 2795.687f, -1169.549f, 49.8528f, true, true, false, false, true);
			func_418(cParam0, &(iLocal_619[6]), "p_cs_barrag01x", 0, 0, 0, 0);
		}
		iLocal_619[2] = get_object_index_from_entity_index(func_443(cParam0, -1883578190, 1));
		if (!does_entity_exist(&(iLocal_619[2])))
		{
			iLocal_619[2] = create_object(-1883578190, 2795.687f, -1169.549f, 49.8528f, true, true, false, false, true);
			func_418(cParam0, &(iLocal_619[2]), "p_beermugglass01x", 0, 0, 0, 0);
		}
		iLocal_619[1] = get_object_index_from_entity_index(func_443(cParam0, 1843407141, 1));
		if (!does_entity_exist(&(iLocal_619[1])))
		{
			iLocal_619[1] = create_object(1843407141, 2795.687f, -1169.549f, 49.8528f, true, true, false, false, true);
			func_418(cParam0, &(iLocal_619[1]), "p_bottleBeer01x", 0, 0, 0, 0);
		}
		iLocal_619[0] = get_object_index_from_entity_index(func_443(cParam0, -548150401, 1));
		if (!does_entity_exist(&(iLocal_619[0])))
		{
			iLocal_619[0] = create_object(-548150401, 2795.687f, -1169.549f, 49.8528f, true, true, false, false, true);
			func_418(cParam0, &(iLocal_619[0]), "p_cigar02x", 0, 0, 0, 0);
		}
		iLocal_619[5] = get_object_index_from_entity_index(func_443(cParam0, 633326690, 1));
		if (!does_entity_exist(&(iLocal_619[5])))
		{
			iLocal_619[5] = create_object(633326690, 2795.687f, -1169.549f, 49.8528f, true, true, false, false, true);
			func_418(cParam0, &(iLocal_619[5]), "p_cs_dressbox01x", 0, 0, 0, 0);
		}
		iLocal_619[3] = get_object_index_from_entity_index(func_443(cParam0, 851401507, 1));
		if (!does_entity_exist(&(iLocal_619[3])))
		{
			iLocal_619[3] = create_object(851401507, 2795.687f, -1169.549f, 49.8528f, true, true, false, false, true);
			func_418(cParam0, &(iLocal_619[3]), "p_nutBowl01x", 0, 0, 0, 0);
		}
		iLocal_619[4] = get_object_index_from_entity_index(func_443(cParam0, 1610236838, 1));
		if (!does_entity_exist(&(iLocal_619[4])))
		{
			iLocal_619[4] = create_object(1610236838, 2795.687f, -1169.549f, 49.8528f, true, true, false, false, true);
			func_418(cParam0, &(iLocal_619[4]), "p_cs_sacklarge01x", 0, 0, 0, 0);
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 < 7)
		{
			func_444(iLocal_619[iVar0]);
			iVar0++;
		}
	}
}

void func_166(char[4] cParam0, bool bParam1)
{
	if (bParam1)
	{
		func_445(-1, 1);
		func_446(-1, 1);
		if (func_33(cParam0) < iLocal_143)
		{
			func_447(0);
		}
	}
	else
	{
		if (_0x1ff441d7954f8709(iVar623))
		{
			_0xd2b9c78537ed5759(iVar623);
		}
		if (_0x1ff441d7954f8709(iVar624))
		{
			_0xd2b9c78537ed5759(iVar624);
		}
		func_444(&iLocal_634);
		func_444(&iLocal_637);
		func_444(Local_14.f_119[1]);
		func_444(Local_14.f_119[2]);
		func_444(Local_14.f_119[0]);
		func_444(Local_14.f_119[3]);
		func_448(&(Local_14.f_116));
		if (does_pickup_exist(iVar634))
		{
			remove_pickup(iVar634);
		}
		if (does_entity_exist(iVar630))
		{
			delete_object(&iLocal_634);
		}
		if (func_22(cParam0) == 0)
		{
			func_449(&iLocal_635, 1, 1);
			func_449(&iLocal_636, 1, 1);
		}
		else
		{
			func_444(&iLocal_635);
			func_444(&iLocal_636);
		}
		if (does_rope_exist(iVar661))
		{
			if (func_22(cParam0) == 0)
			{
				_0x6076213101a47b3b(&iLocal_665);
			}
			else
			{
				delete_rope(&iLocal_665);
			}
		}
	}
}

void func_167(char[4] cParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = func_33(cParam0);
		switch (iVar0)
		{
			case 1:
				iLocal_586[1] = add_cover_point(func_381(3, 1), func_450(3, 1), 0, 2, 6, false);
				break;
			case 4:
				remove_cover_point(&(iLocal_586[1]));
				iLocal_591[3] = add_cover_point(func_381(8, 2), func_450(8, 2), 2, 0, 0, false);
				iLocal_591[0] = add_cover_point(func_381(8, 5), func_450(8, 5), 1, 0, 7, false);
				iLocal_591[1] = add_cover_point(func_381(8, 1), func_450(8, 1), 0, 0, 6, false);
				iLocal_591[2] = add_cover_point(func_381(8, 0), func_450(8, 0), 0, 2, 6, false);
				iLocal_591[5] = add_cover_point(func_381(8, 11), func_450(8, 11), 3, 0, 1, false);
				iLocal_604 = add_cover_point(func_381(8, 6), func_450(8, 6), 1, 2, 7, false);
				iLocal_605 = add_cover_point(func_381(8, 10), func_450(8, 10), 3, 0, 1, false);
				iLocal_598[0] = add_cover_point(func_381(8, 3), func_450(8, 3), 0, 2, 4, false);
				iLocal_606[1] = add_cover_point(func_381(9, 1), func_450(9, 1), 3, 2, 1, false);
				iLocal_610[0] = add_cover_point(func_381(9, 2), func_450(9, 2), 1, 2, 7, false);
				iLocal_610[1] = add_cover_point(func_381(9, 3), func_450(9, 3), 1, 2, 7, false);
				iLocal_613[0] = add_cover_point(func_381(9, 5), func_450(9, 5), 2, 0, 1, false);
				iLocal_613[1] = add_cover_point(func_381(9, 6), func_450(9, 6), 1, 2, 7, false);
				break;
		}
	}
	else
	{
		iLocal_222 = 0;
		while (iLocal_222 < 4)
		{
			remove_cover_point(&(iLocal_586[iLocal_222]));
			iLocal_222++;
		}
		iLocal_222 = 0;
		while (iLocal_222 < 6)
		{
			remove_cover_point(&(iLocal_591[iLocal_222]));
			iLocal_222++;
		}
		remove_cover_point(iVar600);
		iLocal_222 = 0;
		while (iLocal_222 < 2)
		{
			remove_cover_point(&(iLocal_598[iLocal_222]));
			iLocal_222++;
		}
		iLocal_222 = 0;
		while (iLocal_222 < 2)
		{
			remove_cover_point(&(uLocal_601[iLocal_222]));
			iLocal_222++;
		}
		iLocal_222 = 0;
		while (iLocal_222 < 3)
		{
			remove_cover_point(&(iLocal_606[iLocal_222]));
			iLocal_222++;
		}
		iLocal_222 = 0;
		while (iLocal_222 < 2)
		{
			remove_cover_point(&(iLocal_610[iLocal_222]));
			iLocal_222++;
		}
		iLocal_222 = 0;
		while (iLocal_222 < 2)
		{
			remove_cover_point(&(iLocal_613[iLocal_222]));
			iLocal_222++;
		}
	}
}

bool func_168(char[4] cParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = func_33(cParam0);
		if (!_does_volume_exist(&(iLocal_673[0])))
		{
			iLocal_673[0] = _create_volume_box_with_custom_name(2706.096f, -1172.813f, 50.2741f, 0f, 0f, -180f, 3.764428f, 35.96742f, 10f, "PARKEDCARS");
			_0x424ffcb9f0d2d4b5(&(iLocal_673[0]), 0);
			iLocal_1728[2] = _create_volume_box_with_custom_name(2687.547f, -1116.814f, 49.7234f, 0f, 0f, -178.4447f, 46.9005f, 42.94332f, 14.14464f, "AMBSPAWN_PARK");
			func_451(_0xf70f00013a62f866(&(iLocal_1728[2])), 20f, 0);
			_0x18262cafebb5fbe1(&(iLocal_1728[2]), 0, 0, 0, -1, -1, 0);
			return false;
		}
		switch (iVar0)
		{
			case 0:
				if (!_does_volume_exist(&(iLocal_673[1])))
				{
					iLocal_673[1] = _create_volume_box_with_custom_name(2690.348f, -1117.109f, 50.12177f, 0f, 0f, 90.34937f, 21f, 35f, 4.090512f, "VOL_PARK_WARN");
					iLocal_673[2] = _create_volume_box_with_custom_name(2688.894f, -1118.568f, 50.12177f, 0f, 0f, 90.34937f, 10.13874f, 33.482f, 4.090512f, "VOL_PARK_FAIL");
				}
				if (!_does_volume_exist(&(iLocal_1728[0])))
				{
					iLocal_1728[0] = _create_volume_box_with_custom_name(2765.399f, -1160.723f, 47.13636f, 0f, 0f, 59.47644f, 5.511188f, 66.73001f, 7.323245f, "AMBSPAWN_SIDEWALK_01");
					func_451(_0xf70f00013a62f866(&(iLocal_1728[0])), 20f, 0);
					_0x18262cafebb5fbe1(&(iLocal_1728[0]), 0, 0, 0, -1, -1, 2);
					_0xb56d41a694e42e86(&(iLocal_1728[0]), 0, 0, 0, -1, -1, 0);
					return false;
				}
				if (!_does_volume_exist(&(iLocal_1728[1])))
				{
					iLocal_1728[1] = _create_volume_box_with_custom_name(2724.22f, -1137.608f, 49.96786f, 0f, 0f, 66.35129f, 5.511188f, 29.1493f, 7.323245f, "AMBSPAWN_SIDEWALK_02");
					func_451(_0xf70f00013a62f866(&(iLocal_1728[1])), 20f, 0);
					_0x18262cafebb5fbe1(&(iLocal_1728[1]), 0, 0, 0, -1, -1, 0);
					_0xb56d41a694e42e86(&(iLocal_1728[1]), 0, 0, 0, -1, -1, 2);
					return false;
				}
				iLocal_702[2] = _create_volume_box_with_custom_name(2698.847f, -1130.619f, 50.03326f, 0f, 0f, 90.16438f, 4.886886f, 3.343791f, 2.534014f, "CONV_CROWD");
				break;
			case 1:
				iLocal_222 = 0;
				while (iLocal_222 <= 1)
				{
					func_452(&(iLocal_1728[iLocal_222]));
					iLocal_222++;
				}
				func_452(&(iLocal_702[2]));
				if (!_does_volume_exist(&(iLocal_673[1])))
				{
					iLocal_673[1] = _create_volume_box_with_custom_name(2690.348f, -1117.109f, 50.12177f, 0f, 0f, 90.34937f, 21f, 35f, 4.090512f, "VOL_PARK_WARN");
					iLocal_673[2] = _create_volume_box_with_custom_name(2688.894f, -1118.568f, 50.12177f, 0f, 0f, 90.34937f, 10.13874f, 33.482f, 4.090512f, "VOL_PARK_FAIL");
				}
				if (!_does_volume_exist(&(iLocal_702[4])))
				{
					iLocal_702[4] = _create_volume_box_with_custom_name(2703.836f, -1152.732f, 50.69878f, 0f, 0f, 91.34822f, 6.360026f, 6.268506f, 4.090512f, "CONV_STREET");
					iLocal_702[32] = _create_volume_box_with_custom_name(2702.589f, -1189.114f, 51.43456f, 0f, 0f, 91.34822f, 3.870741f, 3.943851f, 4.090512f, "CONV_GONERIGHT");
					iLocal_673[3] = _create_volume_box_with_custom_name(2697.796f, -1186.716f, 52.22879f, 0f, 0f, 90.34938f, 8.158146f, 8.604899f, 3.068891f, "VOL_ARRIVE_AT_BUILDING");
				}
				break;
			case 2:
				iLocal_222 = 4;
				while (iLocal_222 <= 32)
				{
					func_452(&(iLocal_702[iLocal_222]));
					iLocal_222++;
				}
				func_452(&(iLocal_673[3]));
				if (!_does_volume_exist(&(iLocal_673[1])))
				{
					iLocal_673[1] = _create_volume_box_with_custom_name(2690.348f, -1117.109f, 50.12177f, 0f, 0f, 90.34937f, 21f, 35f, 4.090512f, "VOL_PARK_WARN");
					iLocal_673[2] = _create_volume_box_with_custom_name(2688.894f, -1118.568f, 50.12177f, 0f, 0f, 90.34937f, 10.13874f, 33.482f, 4.090512f, "VOL_PARK_FAIL");
				}
				if (!_does_volume_exist(&(iLocal_702[16])))
				{
					iLocal_702[16] = _create_volume_aggregate_with_custom_name("CONV_FOUND");
					_0x39816f6f94f385ad(&(iLocal_702[16]), 2677.682f, -1159.072f, 67.67216f, 0f, 0f, 90.34937f, 18.28612f, 13.46299f, 10.19117f);
					_0x39816f6f94f385ad(&(iLocal_702[16]), 2686.457f, -1154.836f, 63.34275f, 0f, 0f, 90.34938f, 9.665524f, 31.00999f, 8.027511f);
					_0x39816f6f94f385ad(&(iLocal_702[16]), 2695.667f, -1161.135f, 64.55194f, 0f, 0f, 90.34937f, 9.396994f, 12.28502f, 4.476738f);
					iLocal_673[9] = _create_volume_box_with_custom_name(2693.552f, -1201.108f, 56.47628f, 0f, 0f, -69.55739f, 2.407027f, 1.730303f, 2.221693f, "HDTRK_PAINTING_ETR");
					iLocal_673[10] = _create_volume_box_with_custom_name(2693.552f, -1201.108f, 56.47628f, 0f, 0f, -69.55739f, 3.07027f, 2.530303f, 2.221693f, "HDTRK_PAINTING_EXIT");
					iLocal_673[5] = _create_volume_aggregate_with_custom_name("VOL_APPROACHING_SNIPER");
					_0x39816f6f94f385ad(&(iLocal_673[5]), 2677.737f, -1162.943f, 64.55194f, 0f, 0f, 90.34937f, 6.591059f, 13.50883f, 4.476738f);
					_0x39816f6f94f385ad(&(iLocal_673[5]), 2686.457f, -1154.836f, 63.34275f, 0f, 0f, 90.34938f, 9.665524f, 31.00999f, 8.027511f);
					_0x39816f6f94f385ad(&(iLocal_673[5]), 2695.678f, -1163.208f, 64.55194f, 0f, 0f, 90.34937f, 7.298579f, 12.28502f, 4.476738f);
					iLocal_673[11] = _create_volume_box_with_custom_name(2680.64f, -1188.318f, 57.5878f, 0f, 0f, 89.85715f, 8.561493f, 3.934718f, 12.56759f, "ODR5_VOLUME_SNIPERBLOCK_STAIRS_01");
					iLocal_673[12] = _create_volume_box_with_custom_name(2685.852f, -1197.318f, 59.04204f, 0f, 0f, 89.85716f, 2.841902f, 4.184724f, 7.551317f, "ODR5_VOLUME_SNIPERBLOCK_STAIRS_02");
					iLocal_673[13] = _create_volume_aggregate_with_custom_name("VOL_SNIPERBLOCK_STAIRS_ALL");
					_0x6e0d3c3f828da773(&(iLocal_673[13]), &(iLocal_673[11]));
					_0x6e0d3c3f828da773(&(iLocal_673[13]), &(iLocal_673[12]));
					iLocal_673[4] = _create_volume_box_with_custom_name(2692.669f, -1154.719f, 61.35243f, 0f, 0f, 90.34937f, 9.665524f, 18.02083f, 8.77543f, "VOL_SNIPERS_ROOFTOP");
					iLocal_673[8] = _create_volume_box_with_custom_name(2686.246f, -1179.272f, 61.3484f, 0f, 0f, 90.15024f, 57.91069f, 32.36969f, 31.35245f, "VOL_FIND_SNIPER_ROOF");
					iLocal_673[6] = _create_volume_box_with_custom_name(2686.685f, -1179.029f, 60.5f, 0f, 0f, 90.34937f, 57.95624f, 30.55584f, 23.35069f, "VOLUME_SNIPERBLOCK_WARN");
					iLocal_673[7] = _create_volume_box_with_custom_name(2687.731f, -1185.617f, 61.97495f, 0f, 0f, 90.34937f, 70f, 58f, 30f, "VOLUME_SNIPERBLOCK_FAIL");
				}
				break;
			case 3:
				func_452(&(iLocal_702[16]));
				iLocal_222 = 4;
				while (iLocal_222 <= 13)
				{
					func_452(&(iLocal_673[iLocal_222]));
					iLocal_222++;
				}
				if (!_does_volume_exist(&(iLocal_673[14])))
				{
					iLocal_673[14] = _create_volume_box_with_custom_name(2697.148f, -1154.507f, 61.35243f, 0f, 0f, 90.34937f, 9.415061f, 10.17908f, 8.77543f, "VOL_APPROACH_SNIPER_CENTER");
					iLocal_673[15] = _create_volume_box_with_custom_name(2687.672f, -1154.749f, 61.35243f, 0f, 0f, 90.34937f, 9.665524f, 8.91609f, 8.77543f, "VOL_APPROACH_SNIPER_LEFT");
					iLocal_673[16] = _create_volume_box_with_custom_name(2692.091f, -1157.897f, 60.40808f, 0f, 0f, 0f, 3f, 3.5f, 2f, "ODR5_VOLUME_FIGHT_MELEE_BLOCKER");
					_0xdedbed3020da49dc(&(iLocal_673[16]));
					iLocal_673[17] = _create_volume_box_with_custom_name(2692.162f, -1151.01f, 60.09559f, 0f, 0f, 0f, 18f, 1f, 2f, "ODR5_VOLUME_FIGHT_ROOF_EDGE");
					_0xdedbed3020da49dc(&(iLocal_673[17]));
				}
				break;
			case 4:
				iLocal_222 = 5;
				while (iLocal_222 <= 15)
				{
					func_452(&(iLocal_673[iLocal_222]));
					iLocal_222++;
				}
				if (_does_volume_exist(&(iLocal_673[16])))
				{
					_0xa405bf9f01960c16(&(iLocal_673[16]));
					_delete_volume(&(iLocal_673[16]));
				}
				if (_does_volume_exist(&(iLocal_673[17])))
				{
					_0xa405bf9f01960c16(&(iLocal_673[17]));
					_delete_volume(&(iLocal_673[17]));
				}
				if (!_does_volume_exist(&(iLocal_673[19])))
				{
					iLocal_673[19] = _create_volume_box_with_custom_name(2683.812f, -1118.064f, 50.40498f, 0f, 0f, 90.34937f, 12.63033f, 13.21486f, 8.7341f, "ODR5_VOLUME_PATH_CLEAR_IN_PARK");
					iLocal_673[20] = _create_volume_box_with_custom_name(2686.134f, -1122.624f, 50.55578f, 0f, 0f, -139.7926f, 1.008757f, 2.0198f, 2.208147f, "NAVBLOCKER_CART");
					_0x19c7567d2f2287d6(&(iLocal_673[20]), 7);
					iLocal_673[21] = _create_volume_box_with_custom_name(2694.841f, -1117.378f, 50.79985f, 0f, 0f, 90.34937f, 25.42518f, 49.11801f, 5.510691f, "VOL_PARK");
					iLocal_673[18] = _create_volume_box_with_custom_name(2664.858f, -1114.523f, 50.40498f, 0f, 0f, 90.34937f, 29.16602f, 22.63236f, 8.7341f, "VOL_PARK_LEFT");
					iLocal_696[1] = _create_volume_box_with_custom_name(2690.737f, -1114.158f, 52.82612f, 0f, 0f, 0f, 1.189824f, 1.630763f, 2.221693f, "DEFVOL_CIV_GUARD");
					iLocal_696[3] = _create_volume_box_with_custom_name(2688.64f, -1126.214f, 50.12177f, 0f, 0f, 90.34937f, 8.885431f, 13.17858f, 4.090512f, "DEFVOL_ODR_LOWPARK");
					iLocal_696[4] = _create_volume_box_with_custom_name(2688.64f, -1126.214f, 50.12177f, 0f, 0f, 90.34937f, 8.885431f, 13.17858f, 4.090512f, "DEFVOL_POL_LOWPARK");
					iLocal_696[0] = _create_volume_box_with_custom_name(2689.944f, -1117.209f, 50.39859f, 0f, 0f, 0f, 3.669045f, 2.769582f, 2.221693f, "DEFVOL_ODR_W1M04");
					iLocal_696[2] = _create_volume_box_with_custom_name(2682.816f, -1130.161f, 50.12177f, 0f, 0f, 90.34937f, 1.371434f, 3.345991f, 4.090512f, "DEFVOL_POL_W2M01");
				}
				break;
			case 25:
				break;
		}
	}
	else
	{
		_0x424ffcb9f0d2d4b5(&(iLocal_673[0]), 1);
		_0x2c87c3e1c7b96ee2(&(iLocal_673[20]));
		iLocal_222 = 0;
		while (iLocal_222 < 22)
		{
			if (_does_volume_exist(&(iLocal_673[iLocal_222])))
			{
				if (iLocal_222 == 16)
				{
					_0xa405bf9f01960c16(&(iLocal_673[iLocal_222]));
				}
				_delete_volume(&(iLocal_673[iLocal_222]));
			}
			iLocal_222++;
		}
		iLocal_222 = 0;
		while (iLocal_222 < 5)
		{
			if (_does_volume_exist(&(iLocal_696[iLocal_222])))
			{
				_delete_volume(&(iLocal_696[iLocal_222]));
			}
			iLocal_222++;
		}
		iLocal_222 = 0;
		while (iLocal_222 < 1025)
		{
			if (_does_volume_exist(&(iLocal_702[iLocal_222])))
			{
				_delete_volume(&(iLocal_702[iLocal_222]));
			}
			iLocal_222++;
		}
		iLocal_222 = 0;
		while (iLocal_222 < 3)
		{
			if (_does_volume_exist(&(iLocal_1728[iLocal_222])))
			{
				_delete_volume(&(iLocal_1728[iLocal_222]));
			}
			iLocal_222++;
		}
	}
	return true;
}

void func_169(bool bParam0)
{
	if (bParam0)
	{
		func_453(func_381(0, 0), 20f, 0, 0, 5);
		clear_area(func_381(0, 0), 50f, 40);
	}
	else
	{
		func_454(func_381(0, 0), 20f, 5);
	}
}

bool func_170(char[4] cParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		if (!bParam2)
		{
			iVar0 = func_33(cParam0);
		}
		else
		{
			iVar0 = func_35(cParam0);
		}
		if (!_0x91a5f9cbebb9d936(&(iLocal_577[2])))
		{
			iVar1 = _create_volume_box_with_custom_name(2687.547f, -1116.814f, 49.7234f, 0f, 0f, -178.4445f, 59.11816f, 44.17166f, 14.14464f, "SBIVOL_PARK");
			iLocal_577[2] = func_455(iVar1, 0, 0, 0);
			return false;
		}
		if (!_0x91a5f9cbebb9d936(&(iLocal_577[3])) && _does_volume_exist(&(iLocal_673[0])))
		{
			iLocal_577[3] = func_455(&(iLocal_673[0]), 0, 0, 0);
			return false;
		}
		switch (iVar0)
		{
			case 0:
			case 1:
				if (!_0x91a5f9cbebb9d936(&(iLocal_577[4])))
				{
					if (!_does_volume_exist(&(iLocal_1732[4])))
					{
						iLocal_1732[4] = _create_volume_aggregate_with_custom_name("SBIVOL_WALKING_PATH");
						_0x39816f6f94f385ad(&(iLocal_1732[4]), 2795.052f, -1156.45f, 47.58081f, 0f, 0f, 60.00002f, 10f, 25f, 3.370565f);
						iVar2 = _create_volume_box(2782.086f, -1139.503f, 46.60997f, 0f, 0f, -91.03449f, 1.654806f, 2.14333f, 2.082574f);
						_0xe5ef9de716ff737e(iVar2, 0, 0);
						_0x6e0d3c3f828da773(&(iLocal_1732[4]), iVar2);
						iVar2 = _create_volume_box(2772.689f, -1138.034f, 47.57527f, 0f, 0f, -88.52232f, 1.965405f, 12.72737f, 2.677119f);
						_0xe5ef9de716ff737e(iVar2, 0, 0);
						_0x6e0d3c3f828da773(&(iLocal_1732[4]), iVar2);
						iVar2 = _create_volume_box(2755.2f, -1133.425f, 48.45497f, 0f, 0f, -119.7768f, 2.23325f, 1f, 1.95627f);
						_0xe5ef9de716ff737e(iVar2, 0, 0);
						_0x6e0d3c3f828da773(&(iLocal_1732[4]), iVar2);
						iVar2 = _create_volume_box(2747.329f, -1136.678f, 48.40568f, 0f, 0f, -31.04859f, 1.804507f, 3.792709f, 3.564552f);
						_0xe5ef9de716ff737e(iVar2, 0, 0);
						_0x6e0d3c3f828da773(&(iLocal_1732[4]), iVar2);
						iVar2 = _create_volume_box(2742.652f, -1144.576f, 49.59475f, 0f, 0f, -30.65548f, 2.511255f, 1.969803f, 3.05164f);
						_0xe5ef9de716ff737e(iVar2, 0, 0);
						_0x6e0d3c3f828da773(&(iLocal_1732[4]), iVar2);
						_0x39816f6f94f385ad(&(iLocal_1732[4]), 2705.125f, -1173.89f, 50.04908f, 0f, 0f, 90.18163f, 55.60902f, 6.471973f, 7.084456f);
						_0x39816f6f94f385ad(&(iLocal_1732[4]), 2793.167f, -1146.458f, 47.80318f, 0f, 0f, -165.3302f, 2.159047f, 10.26778f, 4.370565f);
						_0x39816f6f94f385ad(&(iLocal_1732[4]), 2800.399f, -1159.538f, 47.58081f, 0f, 0f, 60.00001f, 4.351249f, 11.94095f, 2.370565f);
					}
					_0xb56d41a694e42e86(&(iLocal_1732[4]), 0, 0, 0, -1, -1, 2);
					iLocal_577[4] = func_455(&(iLocal_1732[4]), 0, 0, 0);
					return false;
				}
				break;
			case 2:
				if (_0x91a5f9cbebb9d936(&(iLocal_577[4])))
				{
					remove_scenario_blocking_area(&(iLocal_577[4]), false);
					_0xe5ef9de716ff737e(&(iLocal_1732[4]), 1, 0);
					iLocal_577[4] = 0;
					_0x74c2b3dc0b294102(&(iLocal_1732[4]));
					func_452(&(iLocal_1732[4]));
				}
				if (!_0x91a5f9cbebb9d936(&(iLocal_577[1])))
				{
					if (!_does_volume_exist(&(iLocal_1732[1])))
					{
						iLocal_1732[1] = _create_volume_box_with_custom_name(2693.12f, -1200.64f, 59.16614f, 0f, 0f, 0f, 19f, 14.5f, 7.5f, "ODR5_SBIVOL_ARTGALLERY");
					}
					iLocal_577[1] = func_455(&(iLocal_1732[1]), 0, 0, 0);
					return false;
				}
				if (!_0x91a5f9cbebb9d936(&(iLocal_577[5])))
				{
					if (!_does_volume_exist(&(iLocal_1732[5])))
					{
						iLocal_1732[5] = _create_volume_box_with_custom_name(2689.768f, -1177.503f, 57.93937f, 0f, 0f, 0f, 14f, 36f, 15f, "ODR5_SBIVOL_COURTYARD");
					}
					iLocal_577[5] = func_455(&(iLocal_1732[5]), 0, 0, 0);
					return false;
				}
				break;
			case 3:
				if (_0x91a5f9cbebb9d936(&(iLocal_577[1])))
				{
					remove_scenario_blocking_area(&(iLocal_577[1]), false);
					iLocal_577[1] = 0;
					func_452(&(iLocal_1732[1]));
				}
				if (_0x91a5f9cbebb9d936(&(iLocal_577[5])))
				{
					remove_scenario_blocking_area(&(iLocal_577[5]), false);
					iLocal_577[5] = 0;
					func_452(&(iLocal_1732[5]));
				}
				break;
			case 5:
				if (!_does_volume_exist(&(iLocal_1732[7])))
				{
					iLocal_1732[7] = _create_volume_box_with_custom_name(2703.573f, -1185.599f, 51.39247f, 0f, 0f, 0f, 2.5f, 14f, 2f, "ODR5_SBIVOL_OUTRO_BIN");
					iLocal_577[7] = func_455(&(iLocal_1732[7]), 0, 0, 0);
					_0xe5ef9de716ff737e(&(iLocal_1732[7]), 0, 0);
				}
				break;
		}
	}
	else
	{
		iLocal_222 = 0;
		while (iLocal_222 < 8)
		{
			if (_0x91a5f9cbebb9d936(&(iLocal_577[iLocal_222])))
			{
				if (iLocal_222 == 4 || iLocal_222 == 7)
				{
					_0xe5ef9de716ff737e(&(iLocal_1732[iLocal_222]), 1, 0);
				}
				_0x74c2b3dc0b294102(&(iLocal_1732[4]));
				remove_scenario_blocking_area(&(iLocal_577[iLocal_222]), false);
			}
			iLocal_222++;
		}
	}
	return true;
}

void func_171(bool bParam0)
{
	if (bParam0)
	{
		if (!_is_imap_active(-670748311))
		{
			_request_imap(-670748311);
		}
		delete_all_trains();
		func_456(154);
		func_456(156);
		func_456(157);
		func_457(155);
		func_458(0.8f);
		_0x7c334ff4d9215912("odr5_gallows_static_cover");
		func_459(297);
		func_460(5, 0);
		func_461(7);
		func_462(1609506757, 1, 0);
	}
	else
	{
		func_457(154);
		func_457(156);
		func_457(157);
		func_456(155);
		pause_clock(false, 0);
		_0x4285804fd65d8066("HAND_SHAKE", 0);
		func_463();
		_0x527b97c203bb8606("odr5_gallows_static_cover");
		func_464(297);
		func_465(7);
		func_466();
		func_462(1609506757, 0, 0);
		func_460(5, 1);
	}
}

void func_172(char[4] cParam0, bool bParam1)
{
	if (bParam1)
	{
		iVar0 = func_33(cParam0);
		switch (iVar0)
		{
			case 0:
				func_467(-1334037078, 0, 0, 0, 1, 0, 0, 0);
				func_467(-1641377529, 0, 0, 0, 1, 0, 0, 0);
				func_467(-74215266, 0, 0, 0, 1, 0, 0, 0);
				func_468(-184942168, 1, 0);
				func_468(1127194130, 1, 0);
				break;
			case 2:
				func_467(35199758, 1, 1f, 0, 1, 0, 0, 0);
				func_467(277751767, 1, -1f, 0, 1, 0, 0, 0);
				func_467(-1974600021, 1, 1f, 0, 1, 0, 0, 0);
				func_467(1402079862, 1, -1f, 0, 1, 0, 0, 0);
				func_467(-400095041, 1, 1f, 0, 1, 0, 0, 0);
				func_467(-1712524704, 1, -1f, 0, 1, 0, 0, 0);
				func_467(1069752686, 1, 1f, 0, 1, 0, 0, 0);
				func_467(-667734154, 1, -1f, 0, 1, 0, 0, 0);
				func_467(-1975504597, 1, 1f, 0, 1, 0, 0, 0);
				func_467(-2138694217, 1, -1f, 0, 1, 0, 0, 0);
				func_467(-1821789490, 1, 0f, 0, 1, 0, 0, 0);
				func_467(-192678651, 1, 0f, 0, 1, 0, 0, 0);
				func_467(-499928700, 1, 0f, 0, 1, 0, 0, 0);
				func_467(-340671360, 1, 0f, 0, 1, 0, 0, 0);
				func_467(-914321480, 1, 0f, 0, 1, 0, 0, 0);
				func_467(1077640496, 1, 0f, 0, 1, 0, 0, 0);
				func_467(1707768866, 1, 0f, 0, 1, 0, 0, 0);
				func_467(-1091163443, 1, 0, 0, 0, 0, 0, 0);
				func_467(-1924413575, 1, 0, 0, 0, 0, 0, 0);
				func_467(-1474167515, 1, 0, 0, 0, 0, 0, 0);
				func_467(2024742464, 1, 0, 0, 0, 0, 0, 0);
				break;
		}
	}
	else
	{
		func_468(-184942168, 0, 0);
		func_468(1127194130, 0, 0);
		func_468(-1334037078, 0, 0);
		func_468(-1641377529, 0, 0);
		func_468(35199758, 0, 0);
		func_468(277751767, 0, 0);
		func_468(-1974600021, 0, 0);
		func_468(1402079862, 0, 0);
		func_468(-400095041, 0, 0);
		func_468(-667734154, 0, 0);
		func_468(-1975504597, 0, 0);
		func_468(-2138694217, 0, 0);
		func_468(-1821789490, 0, 0);
		func_468(-192678651, 0, 0);
		func_468(-499928700, 0, 0);
		func_468(-340671360, 0, 0);
		func_468(-914321480, 0, 0);
		func_468(1077640496, 0, 0);
		func_468(1707768866, 0, 0);
		func_468(-1091163443, 0, 0);
		func_468(-1924413575, 0, 0);
		func_468(-1474167515, 0, 0);
		func_468(2024742464, 0, 0);
	}
}

void func_173()
{
	func_469(sLocal_177, sLocal_180, 0, iVar664);
	func_469(sLocal_178, sLocal_181, 0, &(Local_14.f_46[0]));
	func_470(0);
}

void func_174()
{
	func_471(Local_14.f_83[0], 0);
}

void func_175()
{
	func_472(&iLocal_639);
	func_472(&iLocal_641);
	func_472(&iLocal_640);
	func_473(&iLocal_642);
	func_473(&iLocal_649);
	func_473(&iLocal_652);
	func_473(&iLocal_658);
	func_473(&iLocal_662);
}

void func_176(char[4] cParam0)
{
	if (func_22(cParam0) != 0)
	{
		_0x9851de7aec10b4e1(func_381(6, 4), 200f, 1, 0);
	}
	if (is_gameplay_hint_active())
	{
		stop_gameplay_hint(false);
	}
	_0x437c08db4febe2bd(Global_35, "cautious", 0f, -1);
	_0x437c08db4febe2bd(Global_35, "stealth", 0f, -1);
}

void func_177()
{
	_0x531a78d6bf27014b(sLocal_175);
}

bool func_178(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return true;
	}
	return false;
}

void func_179(var uParam0, int iParam1, int iParam2, int iParam3)
{
	func_474(0, iParam1, 0, iParam2, iParam3);
}

int func_180(int iParam0)
{
	return iParam0;
}

void func_181(int iParam0)
{
	if (!func_475(iParam0))
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
	iVar0 = func_290(iParam0);
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
	iVar0 = func_476(iParam0);
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
	return func_478(func_477(iParam0));
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
		if (func_479())
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
		iVar0 = func_266(&(Global_1898164->f_1[0]));
		if (func_267(iVar0) && func_295((*Global_1347702)[iVar0]->f_12, 131072))
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
			iVar0 = func_266(iParam0);
			return func_480(iVar0);
		case 8:
			iVar1 = func_266(iParam0);
			if (func_295((*Global_1347702)[iVar1]->f_12, 1))
			{
				return func_481(iVar1);
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
		func_482(iVar0, Global_1898077->f_12);
	}
	else
	{
		Global_1898077->f_1 = 0;
		Global_1898077->f_7 = iVar0;
		Global_1898077->f_8 = func_483();
		Global_1898077->f_9 = func_484(Global_1894899->f_2);
		func_485(Global_1898077->f_7, Global_1898077->f_8, Global_1898077->f_9);
	}
	Global_1898077->f_2 = 0;
}

int func_194()
{
	if (!func_321((*Global_1835011)[4]->f_1, 1))
	{
		return 0;
	}
	else if (!func_321((*Global_1347702)[66]->f_15, 1))
	{
		return 1;
	}
	else if (!func_321((*Global_1347702)[67]->f_15, 1))
	{
		return 2;
	}
	else if (!func_321((*Global_1835011)[38]->f_1, 1))
	{
		return 3;
	}
	else if (!func_321((*Global_1347702)[68]->f_15, 1))
	{
		return 4;
	}
	else if (!func_321((*Global_1835011)[59]->f_1, 1))
	{
		return 5;
	}
	else if (!func_321((*Global_1835011)[67]->f_1, 1))
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
	func_486(iParam0, iParam1);
}

int func_196(int iParam0)
{
	return &(Global_1898164->f_1[iParam0]);
}

int func_197(bool bParam0)
{
	if (!bParam0 && func_487(373691918))
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
	if (func_488(iParam0))
	{
		if (bParam1)
		{
			func_489(-525676072);
		}
		else
		{
			func_490(-525676072);
		}
	}
}

int func_200(int iParam0)
{
	return func_492(func_491(iParam0));
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
	return func_493(_0xc17f69e1418cd11f(3));
}

bool func_207()
{
	iVar0 = _0xc17f69e1418cd11f(1);
	return (iVar0 != 0 && _0x59fa676177dbe4c9(iVar0) == 4);
}

int func_208(int iParam0)
{
	iParam0 = func_260(iParam0);
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
	if (!func_494(iParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if ((*Global_40.f_11206[iParam0])[iVar0]->f_3 == iParam1)
		{
			func_495(iParam0, (*Global_40.f_11206[iParam0])[iVar0]);
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
		func_496(sParam0, 1);
		return true;
	}
	if (bParam1)
	{
		if (sParam0->f_9 == 17 || sParam0->f_9 == 19)
		{
			set_audio_flag(sParam0, true);
			func_496(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 18 || sParam0->f_9 == 20)
		{
			set_audio_flag(sParam0, false);
			func_496(sParam0, 1);
			return false;
		}
	}
	else
	{
		if (sParam0->f_9 == 10 || sParam0->f_9 == 12)
		{
			set_audio_flag(sParam0, true);
			func_496(sParam0, 1);
			return false;
		}
		if (sParam0->f_9 == 11 || sParam0->f_9 == 13)
		{
			set_audio_flag(sParam0, false);
			func_496(sParam0, 1);
			return false;
		}
	}
	if (!is_string_null_or_empty(sParam0))
	{
		trigger_music_event(sParam0);
		func_496(sParam0, 1);
		return true;
	}
	func_496(sParam0, 1);
	return false;
}

bool func_212(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_213(var uParam0)
{
	func_497(uParam0, 0f);
}

int func_214(var uParam0)
{
	if (!func_26(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_498(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_499() - round((uParam0->f_1 * 1000f)));
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
		func_500(0);
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
	return func_501(iParam0, iParam1);
}

void func_217(var uParam0, struct<4> Param1)
{
	*uParam0 = { Param1 };
	uParam0->f_3 = Param1.f_3;
}

void func_218(var uParam0, vector3 vParam1, float fParam4)
{
	Var0 = { vParam1 };
	Var0.f_3 = fParam4;
	func_217(uParam0, Var0);
}

int func_219(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_9;
}

void func_220(int iParam0, struct<4> Param1, struct<4> Param5, int iParam9, int iParam10)
{
	Global_1572864->f_8 = iParam0;
	Global_1572864->f_9 = iParam9;
	Global_1572864->f_10 = iParam10;
	StringCopy(&cVar0, "INVALID", 8);
	if (func_188(iParam0) == 1)
	{
		cVar0 = func_110(func_502(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	else if (func_188(iParam0) == 8)
	{
		cVar0 = func_504(func_503(iParam0));
		_0x8ec7890d446bd9c1(&cVar0, 0, Global_1572864->f_9);
	}
	func_505(1, 1);
	func_506(1, Param1, Param1.f_3);
	*Global_1347394 = { Param5 };
	func_64(0);
	func_65(0);
	func_204(1f);
}

void func_221(char* sParam0)
{
	if (is_audio_scene_active(sParam0))
	{
		stop_audio_scene(sParam0);
	}
	func_496(sParam0, 2);
}

void func_222(int iParam0, int iParam1)
{
	if (!func_507(iParam0))
	{
		return;
	}
	Global_40.f_11029[iParam0] = (Global_40.f_11029[iParam0] || iParam1);
}

void func_223(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_224()
{
	Global_1934266->f_78.f_62 = -1;
}

void func_225()
{
	StringCopy(&(Global_1934266->f_78.f_64), "", 24);
}

void func_226()
{
	StringCopy(&(Global_1934266->f_78.f_67), "", 24);
}

void func_227()
{
	Global_1934266->f_78.f_63 = 0;
}

bool func_228()
{
	return func_508(get_id_of_this_thread());
}

void func_229(bool bParam0)
{
	if (bParam0)
	{
		Global_1945938->f_865 = (Global_1945938->f_865 - Global_1945938->f_865 & 2);
	}
	else
	{
		Global_1945938->f_865 |= 2;
	}
	func_509(bParam0);
}

void func_230()
{
	if (!Global_1894899->f_186)
	{
		_0xf5ffb08976911b50(Global_1894899->f_182, Global_1894899->f_183, Global_1894899->f_184, Global_1894899->f_185);
	}
}

void func_231(int iParam0, int iParam1, int iParam2)
{
	_0x36559148b78853b3(iParam0, iParam1, iParam2);
}

bool func_232()
{
	return (Global_1894899 & 1 != 0 && func_77() != -1);
}

void func_233(var uParam0)
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

void func_234(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_235(int iParam0)
{
	if (!func_510(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_46 = 0;
}

void func_236()
{
	func_511(64);
}

void func_237()
{
	Global_1310750->f_16072 = 0;
}

bool func_238()
{
	if (Global_1572887->f_12 == -1)
	{
		return false;
	}
	return Global_1058888->f_4;
}

bool func_239(int iParam0)
{
	return func_240(23, iParam0);
}

bool func_240(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_512(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 == func_513())
	{
		return func_512(&(Global_1109400->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1225639->f_21[iParam1])
	{
		return func_512(&((*Global_1108178)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

bool func_241(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

bool func_242(int iParam0)
{
	if (!func_241(iParam0))
	{
		return false;
	}
	return func_245(iParam0, 8);
}

void func_243(int iParam0, int iParam1)
{
	if (!func_241(iParam0))
	{
		return;
	}
	(*Global_1888801)[iParam0]->f_19 = iParam1;
}

void func_244(int iParam0)
{
	Global_1894899 = (Global_1894899 || iParam0);
}

bool func_245(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		return (Global_23118[iParam0] && iParam1) != 0;
	}
	return (Global_1058888->f_40615[iParam0] && iParam1) != 0;
}

void func_246(int iParam0)
{
	Global_1894899 = (&Global_1894899 - (Global_1894899 && iParam0));
}

bool func_247()
{
	bVar0 = false;
	iVar1 = 0;
	while (iVar1 < 150)
	{
		if (func_245(iVar1, 1))
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
			else if (func_245(iVar1, 2))
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
				func_282(iVar1, 11);
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

bool func_248(var uParam0)
{
	if (func_514(uParam0, 1) || func_514(uParam0, 2))
	{
		return true;
	}
	return false;
}

bool func_249(int iParam0, var uParam1)
{
	return is_itemset_valid(iParam0);
}

int func_250(struct<2> Param0)
{
	if (!func_249(Param0))
	{
		return 0;
	}
	return get_itemset_size(Param0);
}

int func_251(struct<2> Param0, int iParam2)
{
	if (!func_249(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

bool func_252(int iParam0)
{
	if (!func_515(iParam0))
	{
		return false;
	}
	if (!func_516(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_129 == get_id_of_this_thread();
}

void func_253(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (!func_515(iParam1))
	{
		return;
	}
	if (!func_252(iParam1))
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
		func_517(cParam0, iParam2);
		func_518(iParam2);
	}
	func_519(iParam1);
	func_520(iParam1, 0);
	func_521(iParam1, 0, bParam4, bParam5, -1082130432, 1, 1, 0, 0, 0, 0);
	if (bParam5)
	{
	}
}

int func_254(char[4] cParam0)
{
	return cParam0->f_5411;
}

int func_255(int iParam0)
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

int func_256(int iParam0)
{
	iParam0 = func_260(iParam0);
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

void func_257(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = get_id_of_this_thread();
	func_522(iParam0);
	if (func_523(iParam0))
	{
		if (func_256(iParam0) != iVar0)
		{
			return;
		}
	}
	func_524(iParam0);
	func_525(iParam0);
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
			if (!func_526(iVar2))
			{
				set_ped_model_is_suppressed(iVar2, false);
			}
		}
		func_527(iParam0);
	}
}

void func_258(int iParam0, bool bParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return;
	}
	if (!func_528(iParam0))
	{
		return;
	}
	iVar0 = func_255(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (iVar0 >= 7)
	{
		return;
	}
	func_59(iVar0);
	func_522(iVar0);
	iVar1 = get_id_of_this_thread();
	iVar2 = func_256(iVar0);
	if (!bParam1)
	{
		if (iVar1 != iVar2)
		{
			return;
		}
		if (!func_523(iVar0))
		{
			return;
		}
	}
	func_529(iVar0);
	set_ped_keep_task(iParam0, true);
	if (bParam1 && func_20() == -1)
	{
		if (!_0x88ad6cc10d8d35b2(iParam0))
		{
			set_entity_as_mission_entity(iParam0, true, true);
		}
	}
}

void func_259(char[4] cParam0, int iParam1)
{
	cParam0->f_5308 = (cParam0->f_5308 - (cParam0->f_5308 && iParam1));
}

int func_260(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_40.f_1095;
	}
	return iParam0;
}

void func_261(int iParam0, int iParam1)
{
	iParam0 = func_260(iParam0);
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

void func_262()
{
	if (func_530(0))
	{
		func_531(0);
	}
	if (func_530(1))
	{
		func_531(1);
	}
	if (func_530(5))
	{
		func_531(5);
	}
	if (func_530(6))
	{
		func_524(6);
	}
}

struct<2> func_263(int iParam0)
{
	MemCopy(&Var0, {func_110(iParam0)}, 2);
	return Var0;
}

struct<2> func_264(int iParam0)
{
	Var0 = { func_263(iParam0) };
	StringConCat(&Var0, "AUD", 16);
	return Var0;
}

void func_265(var uParam0)
{
	_0xebff94328ff7a18a(-3.141593f, 3.141593f);
	if (_uiprompt_is_valid(uParam0->f_11))
	{
		_uiprompt_delete(uParam0->f_11);
	}
}

int func_266(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -1;
	}
	return func_532(func_477(iParam0));
}

bool func_267(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 200);
}

bool func_268(int iParam0, int iParam1)
{
	return (Global_40.f_490.f_402[iParam0] && iParam1) != 0;
}

void func_269(int iParam0, bool bParam1)
{
	iVar0 = func_533(iParam0);
	if (_uilog_is_entry_registered(iVar0, func_534(iParam0)))
	{
		_uilog_remove_entry(iVar0, func_534(iParam0));
	}
	if (bParam1)
	{
		if (iVar0 == 1)
		{
			if (_uilog_is_entry_registered(2, func_534(iParam0)))
			{
				_uilog_remove_entry(2, func_534(iParam0));
			}
		}
	}
	func_535(iParam0, 4);
	func_535(iParam0, 8);
	func_535(iParam0, 16);
}

void func_270(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 < &Global_1347702)
	{
		if (func_267(iVar0))
		{
			if (func_268(iVar0, 4))
			{
				func_271(iVar0, bParam0);
			}
		}
		iVar0++;
	}
}

void func_271(int iParam0, bool bParam1)
{
	if (!func_268(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_533(iParam0), func_534(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		_uilog_mark_entry_availability(func_533(iParam0), func_534(iParam0), 2, "");
		func_536(iParam0, 16);
	}
	else
	{
		if (func_268(iParam0, 8))
		{
			_uilog_mark_entry_availability(func_533(iParam0), func_534(iParam0), 1, "");
		}
		else
		{
			_uilog_mark_entry_availability(func_533(iParam0), func_534(iParam0), 0, "");
		}
		func_535(iParam0, 16);
	}
}

void func_272(int iParam0, bool bParam1)
{
	if ((*Global_1347702)[iParam0]->f_12 & 67108864 != 0)
	{
		return;
	}
	if (!func_268(iParam0, 4))
	{
		return;
	}
	if (!_uilog_is_entry_registered(func_533(iParam0), func_534(iParam0)))
	{
		return;
	}
	if (bParam1)
	{
		if (func_268(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_533(iParam0), func_534(iParam0), 1, "");
		}
		func_536(iParam0, 8);
	}
	else
	{
		if (func_268(iParam0, 16))
		{
		}
		else
		{
			_uilog_mark_entry_availability(func_533(iParam0), func_534(iParam0), 0, "");
		}
		func_535(iParam0, 8);
	}
}

int func_273(char[4] cParam0)
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

void func_274(int iParam0, int iParam1)
{
	if (func_530(0))
	{
		if (func_537(0))
		{
			func_538(0);
		}
	}
	if (func_530(1))
	{
		if (func_537(1))
		{
			func_538(1);
		}
	}
}

void func_275(char[4] cParam0)
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
		if (func_423(cParam0, 0, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
		{
		}
	}
}

bool func_276(char[4] cParam0)
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

void func_277(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, int iParam6, int iParam7)
{
	if (!bParam1)
	{
		func_539(iParam0, sParam4, iParam5);
	}
	func_540(iParam0, bParam1, fParam2, iParam3, iParam7);
}

int func_278(int iParam0)
{
	if (!func_241(iParam0))
	{
		return 0;
	}
	return (*Global_1888801)[iParam0]->f_20;
}

int func_279()
{
	return &Global_1899515;
}

void func_280(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0]->f_2 = iParam1;
		return;
	}
	Global_1058888->f_40615[iParam0]->f_2 = iParam1;
}

void func_281(int iParam0, int iParam1)
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

void func_282(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_23118[iParam0] = (&Global_23118[iParam0] - (Global_23118[iParam0] && iParam1));
		return;
	}
	Global_1058888->f_40615[iParam0] = (&Global_1058888->f_40615[iParam0] - (Global_1058888->f_40615[iParam0] && iParam1));
}

void func_283(int iParam0)
{
	if (!func_241(iParam0))
	{
		return;
	}
	if (func_541(iParam0))
	{
		func_542(iParam0);
	}
	else
	{
		func_543(iParam0);
	}
}

int func_284(int iParam0)
{
	if (func_544(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

int func_285(int iParam0)
{
	if (func_545(&(Global_1109400->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_286(int iParam0, int iParam1)
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

void func_287(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		iVar1 = 0;
		if (func_546(Global_1310750[iVar0], iParam0))
		{
			if (!func_547(iVar0))
			{
				iVar1 = 1;
			}
			else if (iParam0 == 16777216)
			{
				if (func_548(iVar0) < func_549(iParam1))
				{
					iVar1 = 1;
				}
			}
			func_289(iVar0, iParam1, 1f, (iVar1 || iParam2), bParam3);
		}
		iVar0++;
	}
}

void func_288(float fParam0, bool bParam1, bool bParam2)
{
	fVar0 = func_550();
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

void func_289(int iParam0, int iParam1, float fParam2, bool bParam3, bool bParam4)
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
	func_551(iParam0, bParam3, round((fVar0 * fParam2)), round((fVar1 * fParam2)), round((fVar2 * fParam2)), round((fVar3 * fParam2)), bParam4, 1);
}

int func_290(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -1;
	}
	return func_187(iParam0);
}

void func_291(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_6 = iParam1;
}

int func_292(bool bParam0, int iParam1)
{
	if (!bParam0 && func_487(373691918))
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

void func_293()
{
	Var0 = Global_35;
	Var0.f_12 = 8;
	Var0.f_8 = 0;
	iVar17 = 0;
	while (iVar17 < 27)
	{
		if (func_515(iVar17))
		{
			iVar18 = func_552(iVar17);
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
	func_553(&(Global_1359489->f_55));
	if (func_554(1777191912, 1))
	{
		func_555(1777191912, 1, 0);
	}
}

void func_294(int iParam0)
{
	if (!func_183(iParam0))
	{
		return;
	}
	func_557(iParam0, (func_556(iParam0) + shift_left(1, 16)));
}

bool func_295(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_296()
{
	return func_558() > 0;
}

void func_297(int iParam0, int iParam1, bool bParam2)
{
	switch (iParam0)
	{
		case 67:
			func_559(-1032423150, iParam1);
			break;
		case 18:
			func_559(294066959, iParam1);
			func_559(-1925639563, iParam1);
			func_559(-378582304, iParam1);
			func_559(-338306437, iParam1);
			break;
		case 20:
			func_559(437270255, iParam1);
			break;
		case 2:
			func_559(-304000413, iParam1);
			func_559(-533612796, iParam1);
			func_559(48036954, iParam1);
			break;
		case 23:
			func_559(193108691, iParam1);
			func_559(491732588, iParam1);
			func_559(671962088, iParam1);
			func_560(1);
			break;
		case 16:
			func_559(-1836056650, iParam1);
			func_559(-754657922, iParam1);
			func_559(-1752355838, iParam1);
			func_559(-1375324510, iParam1);
			break;
		case 59:
			func_559(-514392105, iParam1);
			func_559(-822060246, iParam1);
			if (func_561(146))
			{
				func_559(1372748575, iParam1);
			}
			func_560(1);
			break;
		case 76:
			func_559(1991352213, iParam1);
			if (func_562() == 0)
			{
				func_559(1852488616, iParam1);
			}
			else
			{
				func_559(-9866350, iParam1);
			}
			break;
		case 44:
			func_559(863852599, iParam1);
			func_559(1228374935, iParam1);
			func_559(1517889050, iParam1);
			func_559(830657578, iParam1);
			func_559(1901354958, iParam1);
			break;
		case 46:
			func_559(-582805654, iParam1);
			func_559(250378940, iParam1);
			func_559(-2143265426, iParam1);
			break;
		case 17:
			func_559(-941494139, iParam1);
			func_559(1641489521, iParam1);
			break;
		case 19:
			func_559(-1829423531, iParam1);
			func_559(-1590504752, iParam1);
			func_559(1357221321, iParam1);
			break;
		case 21:
			func_559(-1037992610, iParam1);
			func_559(-1286414399, iParam1);
			func_560(0);
			break;
		case 15:
			func_559(-1014460309, iParam1);
			func_559(-1030502825, iParam1);
			break;
		case 33:
			func_559(479388090, iParam1);
			func_559(-1396342239, iParam1);
			func_559(-619618632, iParam1);
			break;
		case 34:
			func_559(1193561641, iParam1);
			break;
		case 64:
			func_559(1363960851, iParam1);
			break;
		case 60:
			func_559(-1232453926, iParam1);
			func_559(-882833584, iParam1);
			break;
		case 73:
			func_559(2023205767, iParam1);
			break;
		case 74:
			func_559(-2135286513, iParam1);
			if (func_562() == 0)
			{
				func_559(33799444, iParam1);
			}
			else
			{
				func_559(-161343203, iParam1);
			}
			break;
		case 8:
			func_559(841639693, iParam1);
			func_559(358952323, iParam1);
			break;
		case 36:
			func_559(852538149, iParam1);
			func_559(689020839, iParam1);
			if (&Global_1357515 == 0)
			{
				func_559(-404049058, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_559(1116039310, iParam1);
			}
			break;
		case 27:
			func_559(107633428, iParam1);
			func_559(335902282, iParam1);
			func_559(575673055, iParam1);
			func_559(-425944207, iParam1);
			break;
		case 28:
			func_559(-1941530250, iParam1);
			func_559(1399269304, iParam1);
			func_559(1839684664, iParam1);
			func_559(923168503, iParam1);
			func_559(-1485078322, iParam1);
			break;
		case 29:
			func_559(574995900, iParam1);
			func_559(-1691275407, iParam1);
			func_559(-1725307861, iParam1);
			break;
		case 31:
			func_559(-2108383238, iParam1);
			func_559(-1321828931, iParam1);
			func_559(-1632118592, iParam1);
			func_559(334938948, iParam1);
			break;
		case 4:
			func_559(115823701, iParam1);
			func_559(-1896939736, iParam1);
			func_559(-1830746356, iParam1);
			func_559(-1235169781, iParam1);
			func_560(0);
			break;
		case 6:
			func_559(1801727621, iParam1);
			if (&Global_1357515 == -1)
			{
				func_559(-999872881, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_559(-1227289741, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_559(-384176140, iParam1);
			}
			break;
		case 25:
			func_559(1056132658, iParam1);
			break;
		case 24:
			if (&Global_1357515 == -1)
			{
				func_559(1343889751, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_559(-948326001, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_559(-1374849484, iParam1);
			}
			break;
		case 48:
			func_559(-1632856601, iParam1);
			if (&Global_1357515 == -1)
			{
				func_559(217772674, iParam1);
			}
			else
			{
				func_559(2071798160, iParam1);
			}
			if (func_563(51))
			{
				func_559(-792802286, iParam1);
			}
			break;
		case 49:
			func_559(-1972727021, iParam1);
			if (&Global_1357515 == 0)
			{
				func_559(-1444030885, iParam1);
			}
			else if (&Global_1357515 == 1)
			{
				func_559(-1272255787, iParam1);
			}
			else if (&Global_1357515 == 2)
			{
				func_559(1402120602, iParam1);
			}
			break;
		case 58:
			func_559(-1661934591, iParam1);
			break;
		case 50:
			func_559(-1713759426, iParam1);
			break;
		case 52:
			func_559(-314799932, iParam1);
			func_559(-462260432, iParam1);
			func_559(822929377, iParam1);
			if (bParam2 == 1)
			{
				func_559(345256028, iParam1);
				func_559(-1635084094, iParam1);
			}
			else
			{
				func_559(114267347, iParam1);
			}
			break;
		case 32:
			func_559(615304157, iParam1);
			break;
		case 47:
			func_559(415434835, iParam1);
			break;
		case 69:
			func_559(1373465877, iParam1);
			if (func_321((*Global_1347702)[9]->f_15, 1))
			{
				func_559(-2058273527, iParam1);
			}
			break;
		case 70:
			func_559(451334985, iParam1);
			if (func_562() == 0)
			{
				func_559(-224150200, iParam1);
			}
			else
			{
				func_559(289012628, iParam1);
			}
			break;
		case 71:
			if (func_562() == 0)
			{
				func_559(-41692120, iParam1);
			}
			else
			{
				func_559(1537840678, iParam1);
			}
			break;
		case 37:
			func_559(1520478365, iParam1);
			break;
		case 9:
			if (&Global_1357515 == -1)
			{
				func_559(1842132550, iParam1);
			}
			else
			{
				func_559(-785735240, iParam1);
			}
			func_559(-1605690566, iParam1);
			break;
		case 13:
			func_559(-731367459, iParam1);
			func_559(224176585, iParam1);
			func_559(-14545580, iParam1);
			break;
		case 53:
			func_559(1095274522, iParam1);
			break;
		case 54:
			func_559(-572027988, iParam1);
			break;
		case 56:
			func_559(1339307101, iParam1);
			func_559(2102267732, iParam1);
			break;
		case 57:
			func_559(710102686, iParam1);
			break;
		case 22:
			func_559(-1754368482, iParam1);
			func_559(-2071408557, iParam1);
			break;
		case 12:
			func_559(-181334543, iParam1);
			break;
		case 0:
			func_559(-2134669864, iParam1);
			func_559(-548289709, iParam1);
			func_559(-911271922, iParam1);
			func_559(-604455775, iParam1);
			break;
		case 1:
			func_560(1);
			break;
		case 3:
			if (func_332())
			{
				if (_journal_can_write_entry(-1478534115))
				{
					func_559(-1286192062, iParam1);
				}
			}
			else if (_journal_can_write_entry(-1286192062))
			{
				func_559(-1478534115, iParam1);
			}
			break;
		default:
			break;
	}
}

bool func_298()
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

void func_299(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	switch (iParam0)
	{
		case 0:
			func_559(-145926707, iParam1);
			func_559(-604922090, iParam1);
			func_559(-848690769, iParam1);
			break;
		case 1:
			func_559(-1477631591, iParam1);
			break;
		case 2:
			func_559(76112544, iParam1);
			break;
		case 9:
			func_559(1396404308, iParam1);
			func_559(-1357381228, iParam1);
			if (func_321((*Global_1835011)[69]->f_1, 1))
			{
				func_559(1902679064, iParam1);
			}
			else
			{
				func_559(-2146422425, iParam1);
			}
			break;
		case 22:
			func_559(-1534761730, iParam1);
			break;
		case 26:
			if (bParam3 == 1)
			{
				func_559(-1934184559, iParam1);
				func_559(1281755988, iParam1);
			}
			else
			{
				func_559(-1745220872, iParam1);
				func_559(-1044976796, iParam1);
			}
			break;
		case 29:
			if (bParam3 == 1)
			{
				func_559(-1641504538, iParam1);
				func_559(-988014485, iParam1);
			}
			else if (func_561(26))
			{
				func_559(-343043950, iParam1);
				func_559(-640062214, iParam1);
			}
			else
			{
				func_559(-1272028496, iParam1);
			}
			break;
		case 32:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_559(-1816782797, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_559(-176175898, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_559(1711460080, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_559(-2108576508, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_559(-1103692224, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_559(1301690984, iParam1);
				}
			}
			else
			{
				func_559(699457343, iParam1);
				if (&Global_1357515 == -1)
				{
					func_559(-908444626, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_559(-1475448104, iParam1);
				}
				else if (&Global_1357515 == 1)
				{
					func_559(1727640249, iParam1);
				}
				else if (&Global_1357515 == 2)
				{
					func_559(-2050867743, iParam1);
				}
				else if (&Global_1357515 == 3)
				{
					func_559(-996445915, iParam1);
				}
				else if (&Global_1357515 == 4)
				{
					func_559(-1868882771, iParam1);
				}
			}
			break;
		case 35:
			if (bParam3 == 1)
			{
				func_559(-754570528, iParam1);
			}
			else
			{
				func_559(1690083163, iParam1);
			}
			break;
		case 36:
			if (bParam3 == 1)
			{
				func_559(-2072125821, iParam1);
			}
			else
			{
				func_559(270040030, iParam1);
			}
			break;
		case 37:
			func_559(-870030001, iParam1);
			break;
		case 53:
			if (bParam3 == 1)
			{
				func_559(-505314737, iParam1);
				func_559(-1853052860, iParam1);
			}
			else
			{
				func_559(-1975624994, iParam1);
				func_559(1648135852, iParam1);
			}
			break;
		case 54:
			if (bParam3 == 1)
			{
				func_559(1690231002, iParam1);
			}
			else
			{
				func_559(517031924, iParam1);
			}
			break;
		case 55:
			if (bParam3 == 1)
			{
				func_559(1225386280, iParam1);
			}
			else if (func_561(54))
			{
				func_559(-283235773, iParam1);
			}
			else
			{
				func_559(701962369, iParam1);
			}
			break;
		case 38:
			if (bParam3 == 1)
			{
				func_559(1355398007, iParam1);
			}
			else
			{
				func_559(-1900349467, iParam1);
			}
			break;
		case 39:
			if (bParam3 == 1)
			{
				func_559(574636806, iParam1);
			}
			else
			{
				func_559(-196256251, iParam1);
			}
			break;
		case 40:
			if (bParam3 == 1)
			{
				func_559(821118338, iParam1);
			}
			else if (func_561(39))
			{
				func_559(846829260, iParam1);
			}
			else
			{
				func_559(-1212247553, iParam1);
			}
			break;
		case 43:
			if (bParam3 == 1)
			{
				if (func_355((*Global_1835011)[33]->f_1) == 1)
				{
					func_559(1422779093, iParam1);
				}
				else
				{
					func_559(-1769536986, iParam1);
				}
			}
			else
			{
				func_559(-600786233, iParam1);
			}
			break;
		case 45:
			if (bParam3 == 1)
			{
				func_559(352134789, iParam1);
			}
			else if (func_561(43))
			{
				func_559(260723113, iParam1);
			}
			else
			{
				func_559(1080243038, iParam1);
			}
			break;
		case 41:
			if (bParam3 == 1)
			{
				func_559(-457958799, iParam1);
			}
			else
			{
				func_559(2076458086, iParam1);
			}
			break;
		case 42:
			if (func_561(41))
			{
				func_559(-546824600, iParam1);
			}
			else
			{
				func_559(-308364587, iParam1);
			}
			break;
		case 49:
			if (bParam3 == 1)
			{
				func_559(1297261593, iParam1);
			}
			else
			{
				func_559(1940089142, iParam1);
			}
			break;
		case 50:
			if (bParam3 == 1)
			{
				func_559(2068484886, iParam1);
			}
			else if (func_561(49))
			{
				func_559(-1489080639, iParam1);
				func_559(-2102244050, iParam1);
			}
			else
			{
				func_559(-1863040467, iParam1);
			}
			break;
		case 51:
			func_559(-2055943209, iParam1);
			break;
		case 58:
			if (func_321((*Global_1347702)[23]->f_15, 1))
			{
				func_559(1650066845, iParam1);
			}
			else
			{
				func_559(151370023, iParam1);
			}
			func_559(1426057961, iParam1);
			func_559(476379584, iParam1);
			break;
		case 59:
			func_559(-1638117866, iParam1);
			break;
		case 62:
			func_559(199541730, iParam1);
			break;
		case 63:
			func_559(1703485804, iParam1);
			func_559(-800449045, iParam1);
			break;
		case 65:
			func_559(-1678210868, iParam1);
			func_559(-1448238026, iParam1);
			func_559(-1200864845, iParam1);
			func_559(1473511536, iParam1);
			break;
		case 66:
			func_559(-1774490051, iParam1);
			func_559(-34645921, iParam1);
			func_559(174027075, iParam1);
			func_559(-1155999, iParam1);
			func_560(1);
			break;
		case 67:
			func_559(701612593, iParam1);
			func_559(-1069631343, iParam1);
			func_559(1673428882, iParam1);
			break;
		case 68:
			func_559(-739133286, iParam1);
			func_559(-2130089358, iParam1);
			func_559(2056190391, iParam1);
			func_559(1941753817, iParam1);
			func_560(0);
			break;
		case 70:
			func_559(-1217555753, iParam1);
			break;
		case 71:
			func_559(697048821, iParam1);
			break;
		case 73:
			func_559(-553148661, iParam1);
			break;
		case 75:
			func_559(1349250531, iParam1);
			break;
		case 77:
			if (bParam3 == 1)
			{
				func_559(1414263863, iParam1);
			}
			else
			{
				func_559(-1772294468, iParam1);
			}
			break;
		case 79:
			if (bParam3 == 1)
			{
				func_559(1835465936, iParam1);
				func_559(523715611, iParam1);
			}
			else if (func_561(78))
			{
				func_559(1420338873, iParam1);
			}
			else
			{
				func_559(-46362051, iParam1);
			}
			break;
		case 80:
			if (bParam3 == 1)
			{
				func_559(10180941, iParam1);
			}
			else if (func_561(79))
			{
				func_559(768420635, iParam1);
			}
			else
			{
				func_559(-1734012650, iParam1);
			}
			break;
		case 85:
			if (bParam3 == 1)
			{
				func_559(-383601523, iParam1);
			}
			else
			{
				func_559(1004812390, iParam1);
			}
			break;
		case 86:
			if (bParam3 == 1)
			{
				func_559(1606472408, iParam1);
			}
			else
			{
				func_559(1405690220, iParam1);
			}
			break;
		case 87:
			if (bParam3 == 1)
			{
				func_559(-203571927, iParam1);
			}
			else
			{
				func_559(640033630, iParam1);
			}
			break;
		case 88:
			if (bParam3 == 1)
			{
				func_559(729886222, iParam1);
			}
			else
			{
				func_559(-158717807, iParam1);
			}
			break;
		case 89:
			if (bParam3 == 1)
			{
				func_559(-714816362, iParam1);
			}
			else
			{
				func_559(1160146336, iParam1);
			}
			break;
		case 92:
			if (bParam3 == 1)
			{
				func_559(-932932179, iParam1);
				func_559(-1458537240, iParam1);
			}
			else
			{
				func_559(-1764383885, iParam1);
				func_559(894349517, iParam1);
			}
			break;
		case 93:
			if (bParam3 == 1)
			{
				func_559(1741466706, iParam1);
			}
			else
			{
				func_559(1405815775, iParam1);
			}
			break;
		case 94:
			func_559(1163067702, iParam1);
			if (&Global_1357515 == -1)
			{
				func_559(1905280979, iParam1);
			}
			else
			{
				func_559(-1966245299, iParam1);
			}
			func_559(721468880, iParam1);
			break;
		case 99:
			func_559(800644248, iParam1);
			break;
		case 101:
			if (bParam3 == 1)
			{
				func_559(1502176860, iParam1);
				if (&Global_1357515 == -1)
				{
					func_559(-1117781095, iParam1);
				}
				else
				{
					func_559(-618709225, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_559(141494548, iParam1);
			}
			else
			{
				func_559(-633957459, iParam1);
			}
			break;
		case 102:
			if (bParam3 == 1)
			{
				func_559(-369525697, iParam1);
			}
			else if (func_561(101))
			{
				func_559(1595015219, iParam1);
			}
			else
			{
				func_559(-321486961, iParam1);
			}
			break;
		case 103:
			func_559(1422724221, iParam1);
			break;
		case 104:
			if (bParam3 == 1)
			{
				func_559(793460477, iParam1);
				func_559(-1610242176, iParam1);
			}
			else if (func_561(103))
			{
				func_559(1830897187, iParam1);
			}
			else
			{
				func_559(1419017828, iParam1);
			}
			break;
		case 105:
			if (bParam3 == 1)
			{
				func_559(1528309077, iParam1);
			}
			else if (func_561(104))
			{
				func_559(1864966105, iParam1);
			}
			else
			{
				func_559(-103336013, iParam1);
			}
			break;
		case 108:
			func_559(1175579551, iParam1);
			break;
		case 109:
			if (bParam3 == 1)
			{
				func_559(-1123227713, iParam1);
				func_559(-889574341, iParam1);
			}
			else
			{
				func_559(2065385917, iParam1);
				func_559(780305039, iParam1);
			}
			break;
		case 110:
			if (bParam3 == 1)
			{
				func_559(-887421691, iParam1);
			}
			else if (func_561(109))
			{
				func_559(-1318117949, iParam1);
			}
			else
			{
				func_559(1632244327, iParam1);
			}
			break;
		case 111:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 0)
				{
					func_559(284822762, iParam1);
				}
				else
				{
					func_559(-1425017554, iParam1);
				}
			}
			else if (func_561(110))
			{
				if (&Global_1357515 == 0)
				{
					func_559(553087292, iParam1);
				}
				else
				{
					func_559(-1766870331, iParam1);
					func_559(1971788022, iParam1);
				}
			}
			else if (&Global_1357515 == 0)
			{
				func_559(-1980598735, iParam1);
			}
			else
			{
				func_559(-442732098, iParam1);
				func_559(1955756409, iParam1);
			}
			break;
		case 115:
			func_559(394303528, iParam1);
			func_559(-2040171028, iParam1);
			break;
		case 143:
			if (bParam3 == 1)
			{
				func_559(1182403394, iParam1);
			}
			else
			{
				func_559(-2116547899, iParam1);
			}
			break;
		case 144:
			if (bParam3 == 1)
			{
				func_559(924445424, iParam1);
			}
			else
			{
				func_559(1227062271, iParam1);
			}
			break;
		case 117:
			if (bParam3 == 1)
			{
				func_559(430755273, iParam1);
				func_559(-1473879802, iParam1);
			}
			else
			{
				func_559(1121266049, iParam1);
			}
			break;
		case 118:
			if (bParam3 == 1)
			{
				func_559(73885747, iParam1);
			}
			else if (func_561(117))
			{
				func_559(1559707913, iParam1);
			}
			else
			{
				func_559(926897873, iParam1);
			}
			break;
		case 119:
			if (bParam3 == 1)
			{
				func_559(-2103887972, iParam1);
			}
			else if (func_561(118))
			{
				func_559(-435828462, iParam1);
			}
			else
			{
				func_559(-516020583, iParam1);
			}
			break;
		case 121:
			if (bParam3 == 1)
			{
				func_559(2054486196, iParam1);
			}
			else
			{
				func_559(1809320262, iParam1);
			}
			break;
		case 122:
			if (bParam3 == 1)
			{
				func_559(-570086056, iParam1);
			}
			else if (func_561(121))
			{
				func_559(32337856, iParam1);
			}
			else
			{
				func_559(-206811842, iParam1);
			}
			break;
		case 124:
			if (bParam3 == 1)
			{
				func_559(813493663, iParam1);
			}
			else if (func_561(122))
			{
				func_559(-2132763590, iParam1);
			}
			else
			{
				func_559(477901035, iParam1);
			}
			break;
		case 125:
			if (bParam3 == 1)
			{
				func_559(-66240572, iParam1);
				func_559(1563075046, iParam1);
			}
			else
			{
				func_559(-787011772, iParam1);
				func_559(-1523377438, iParam1);
			}
			break;
		case 127:
			func_559(61020800, iParam1);
			break;
		case 129:
			func_559(428985222, iParam1);
			break;
		case 131:
			func_559(-1393851036, iParam1);
			break;
		case 133:
			func_559(1559531342, iParam1);
			break;
		case 134:
			func_559(-718846442, iParam1);
			break;
		case 135:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == -1)
				{
					func_559(-1374407408, iParam1);
				}
				else
				{
					func_559(471210931, iParam1);
				}
			}
			else if ((_journal_can_write_entry(1732474719) && _journal_can_write_entry(801682048)) && _journal_can_write_entry(-1986404392))
			{
				if (&Global_1357515 == -1)
				{
					func_559(-472672138, iParam1);
				}
				else
				{
					func_559(-2132098614, iParam1);
				}
			}
			else if (&Global_1357515 == -1)
			{
				func_559(-1678710489, iParam1);
			}
			else
			{
				func_559(1522210661, iParam1);
			}
			break;
		case 136:
			if (bParam3 == 1)
			{
				func_559(1717582460, iParam1);
			}
			else
			{
				func_559(343644664, iParam1);
			}
			break;
		case 137:
			if (bParam3 == 1)
			{
				func_559(1568112362, iParam1);
				func_559(1388317526, iParam1);
			}
			else if (func_561(136))
			{
				func_559(-1597534828, iParam1);
				func_559(-1207918353, iParam1);
			}
			else
			{
				func_559(-1940891082, iParam1);
				func_559(-598277294, iParam1);
			}
			break;
		case 142:
			if (bParam2 == 1)
			{
				func_559(448334530, iParam1);
				func_559(2145375502, iParam1);
			}
			else
			{
				func_559(-1891994685, iParam1);
			}
			break;
		case 146:
			if (bParam3 == 1)
			{
				if (&Global_1357515 == 1)
				{
					func_559(1159121660, iParam1);
				}
				else if (&Global_1357515 == 0)
				{
					func_559(-1968554187, iParam1);
				}
			}
			else if (&Global_1357515 == 1)
			{
				func_559(841927377, iParam1);
			}
			else if (&Global_1357515 == 0)
			{
				func_559(848633571, iParam1);
			}
			break;
		case 147:
			if (bParam3 == 1)
			{
				func_559(-66616327, iParam1);
			}
			else
			{
				func_559(1978361607, iParam1);
			}
			break;
		case 148:
			if (bParam3 == 1)
			{
				func_559(1862916706, iParam1);
			}
			else if (func_561(147))
			{
				func_559(675105199, iParam1);
			}
			else
			{
				func_559(-1993800776, iParam1);
			}
			break;
		case 149:
			if (bParam3 == 1)
			{
				func_559(174409701, iParam1);
			}
			else if (func_561(148))
			{
				func_559(-1730895475, iParam1);
			}
			else
			{
				func_559(-342396910, iParam1);
			}
			break;
		case 150:
			if (bParam3 == 1)
			{
				func_559(1295237052, iParam1);
			}
			else if (func_561(149))
			{
				func_559(-788577684, iParam1);
			}
			else
			{
				func_559(1527015024, iParam1);
			}
			break;
		default:
			break;
	}
}

int func_300(int iParam0, var uParam1, int iParam2)
{
	*uParam1 = 1137976064;
	*iParam2 = -1;
	iVar0 = func_188(iParam0);
	switch (iVar0)
	{
		case 1:
			iVar1 = func_502(iParam0);
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
					if (func_355((*Global_1835011)[9]->f_1) == 0)
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
			iVar2 = func_266(iParam0);
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
			iVar3 = func_266(iParam0);
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

int func_301(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
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
	iVar2 = func_564(iParam0);
	iVar3 = func_565(iParam0);
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
				iVar1 = func_279();
				func_328(&iVar1, 0, 0, iParam3, 0, 0, 0, 0);
			}
			else
			{
				iVar1 = -15;
			}
			Global_40.f_4283.f_6[iVar0]->f_1 = iVar1;
			Global_40.f_4283.f_6[iVar0]->f_4 = iVar2;
			func_566(iParam0, 1);
			if (func_567(iVar2))
			{
				iVar4 = 0;
				while (iVar4 < 60)
				{
					if (Global_40.f_4283.f_6[iVar4]->f_4 == iVar2 && &Global_40.f_4283.f_6[iVar4] != iParam0)
					{
						func_568(Global_40.f_4283.f_6[iVar4], 1, 0);
					}
					iVar4++;
				}
			}
			if (bParam5)
			{
				if (bParam6)
				{
					func_569(1, iParam0);
				}
				else
				{
					func_570(1, iParam0);
				}
			}
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_302(int iParam0, int iParam1)
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

int func_303(int iParam0, int iParam1, int iParam2)
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

void func_304(bool bParam0)
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

void func_305(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0 * 1000;
	if ((iVar0 + get_game_timer()) > Global_1327479->f_4)
	{
		func_571(iParam0, iParam1, bParam2);
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

int func_306(int iParam0, int iParam1)
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

bool func_307(int iParam0)
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

void func_308(int iParam0, int iParam1, int iParam2, char* sParam3, int iParam4, bool bParam5, float fParam6, bool bParam7)
{
	if (func_20() != -1)
	{
		return;
	}
	if ((Global_36616 && func_572(iParam1)) != 0)
	{
		return;
	}
	iVar0 = func_573(iParam0);
	iVar0 = round((IntToFloat(iVar0) * fParam6));
	if ((((((iParam1 != 1142025875 && iParam1 != 1587891565) && iParam1 != -643014279) && iParam1 != -597116214) && iParam1 != 551416228) && iParam1 != -735200598) && iParam1 != -2010847721)
	{
		func_574(iVar0, 0, iParam0, iParam1, sParam3, iParam4, bParam5, bParam7);
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
			func_575(iVar1, iVar0, iParam0, iParam1, iParam4, bParam5);
		}
		else
		{
			func_574(iVar0, 1, iParam0, iParam1, sParam3, iParam4, bParam5, 0);
		}
	}
}

int func_309(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -1;
	}
	return func_576(func_477(iParam0));
}

int func_310(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 120;
	}
	return 60;
}

void func_311()
{
	_sc_feed_submit_preset_message(2, 1);
	if (is_orbis_version())
	{
		iVar0 = func_577(13);
		(*Global_1898441)[iVar0] = 13;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_WIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_WIN2_COM", 24);
	}
}

bool func_312(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5, float fParam6, int iParam7, int iParam8, bool bParam9)
{
	if (!func_578(iParam0, 0))
	{
		return false;
	}
	if (!func_579(iParam0, iParam1, bParam2, iParam5))
	{
		return false;
	}
	if (!func_580(iParam0, &iVar0, iParam1))
	{
		return false;
	}
	func_581(iParam0, bParam2);
	iVar2 = 0;
	if (func_582(iParam0, 0, 0) == 0)
	{
		if (func_583(iParam0))
		{
			iVar5 = func_584(iParam0);
			iVar6 = func_585(iVar5);
			iVar7 = func_586(iVar6) + 1;
			func_587(iVar5);
			if (func_588(38))
			{
				func_319(483, 0);
			}
			else
			{
				func_319(482, 0);
			}
			if (iVar7 == func_589(iVar6))
			{
				func_312(func_590(iVar6), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				if (func_390() && func_591(4))
				{
					if (func_390() && (func_592(38) || func_588(38)))
					{
						func_594(38, func_590(iVar6), 0, 0, func_593(), 0, -1, 0);
						func_595(2);
					}
					else
					{
						func_594(38, func_590(iVar6), 0, 0, func_593(), 0, -1, 0);
						func_595(1);
					}
				}
			}
			else if (func_390() && func_591(4))
			{
				if (func_390() && (func_592(38) || func_588(38)))
				{
					func_594(38, 0, 0, 0, func_593(), 0, -1, 0);
					func_595(2);
				}
				else
				{
					func_594(38, 0, 0, 0, func_593(), 0, -1, 0);
					func_595(1);
				}
			}
			if (func_390() && func_591(4))
			{
				if (!Global_1914319->f_17376)
				{
					if (func_390() && (func_592(38) || func_588(38)))
					{
						func_596(38, _0x13aaecda43318bfe(-2076669067, iVar6), _0xd52d20b0c76bb26d(-2076669067, iVar6), iVar7, 12, 0, iVar6);
					}
					else
					{
						func_596(38, get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_COLLECTABLE_CIGCARD"), iVar7, 12, 0, iVar6);
					}
				}
			}
		}
	}
	if (func_597(iParam0) == -1037537535)
	{
		if ((!func_598(iParam0, 866047851) && !func_598(iParam0, -1979000645)) && !func_598(iParam0, 1248798204))
		{
			bVar3 = true;
		}
	}
	if (func_599(iParam0, 8388608) && !func_600(28))
	{
		func_601(28);
	}
	if (!bVar3)
	{
		if (func_598(iParam0, -1588156645))
		{
			bParam2 = true;
			bVar4 = true;
			if (func_602(iParam0) == -1447088266)
			{
				iVar1 = func_604(func_603(iParam0, 1), 0);
				if (is_weapon_valid(iVar1))
				{
					if (func_20() == -1)
					{
						func_605(iVar1);
					}
					if (func_606(0) && func_607(iVar1, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_608(iParam0, iVar0, iParam5);
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
						func_605(iParam0);
					}
					if (func_606(0) && func_607(iParam0, 0, 0, 1, 0, 0, iParam5, 0))
					{
						func_608(iVar1, iVar0, iParam5);
						if (!bParam9)
						{
							bParam2 = false;
						}
					}
				}
			}
		}
		else if (func_597(iParam0) == -427144552)
		{
			if (!func_609(iParam0, iParam5, &bParam2, bParam3, bParam4))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_597(iParam0) == 307971639 && func_610(iParam0))
		{
			if (!func_611(iParam0, &iVar0, iParam5))
			{
				bParam2 = true;
			}
			bVar4 = true;
		}
		else if (func_598(iParam0, 866047851))
		{
			func_612(iParam0);
		}
		else if (func_598(iParam0, 2000026003))
		{
			func_613(iParam0);
		}
		else if (func_598(iParam0, -103750053))
		{
			func_95(func_614(-1019857971), iVar0);
		}
		else if (iParam0 == 2093098109)
		{
			func_95(func_615(-717883113, 2091222383), iVar0);
		}
		else if (func_598(iParam0, -121341956) && !func_598(iParam0, 606799272))
		{
			if (iParam0 != 191707516 && iParam0 != 1993672959)
			{
				if (func_321((*Global_1835011)[4]->f_1, 1))
				{
					func_319(498, 0);
				}
			}
			if (func_598(iParam0, -2017733358) || func_598(iParam0, -1369131378))
			{
				func_616(iParam0);
			}
		}
		else if (func_598(iParam0, -136654233))
		{
			if (func_598(iParam0, -1021472396))
			{
			}
		}
		else if (func_598(iParam0, -1466706512) && func_598(iParam0, 1147021565))
		{
			func_319(484, 0);
		}
		else if (func_598(iParam0, 1147021565) && func_598(iParam0, -524514947))
		{
		}
		else if (func_598(iParam0, 554195525))
		{
		}
		else if (func_598(iParam0, 589988438))
		{
			if (func_617())
			{
				func_618(1339418451, 0, 1065353216, 1, 0, 0, 0, -1);
				bParam2 = true;
				bVar4 = true;
			}
		}
		else if (func_598(iParam0, 787083290) && func_598(iParam0, 949916894))
		{
			func_619(iParam0);
		}
		else if (func_598(iParam0, -1718133314))
		{
			func_620(iParam0);
		}
		else if (func_598(iParam0, -1738650224))
		{
			func_621(iParam0);
		}
		else if (func_598(iParam0, -1112814642) && func_598(iParam0, 949916894))
		{
			func_622(iParam0);
		}
		else if (iParam0 == -569063887)
		{
			Global_1935496->f_20 = 0;
		}
		else if (func_598(iParam0, 1841149704))
		{
			func_623();
		}
		else if (func_598(iParam0, 606799272))
		{
			func_624(iParam0, iParam1);
			func_625(iParam0);
		}
		else if (func_598(iParam0, -1112814642) && func_598(iParam0, -1697809989))
		{
			func_626(iParam0, 0, 0, 0);
		}
		else if (func_598(iParam0, -2017733358) || func_598(iParam0, -1369131378))
		{
			func_616(iParam0);
		}
		else if (func_598(iParam0, -1921346699))
		{
			if (func_20() != -1)
			{
				return false;
			}
			func_627(iParam0, iParam5, iParam8);
			bParam2 = true;
		}
		else if (func_598(iParam0, 1192444843))
		{
			switch (iParam0)
			{
				case 1815744868:
					if (!func_341(215778062, 1, 0))
					{
						func_312(215778062, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1334018438:
					if (!func_341(670273567, 1, 0))
					{
						func_312(670273567, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 1055480217:
					if (!func_341(-967317137, 1, 0))
					{
						func_312(-967317137, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -978159653:
					if (!func_341(526074061, 1, 0))
					{
						func_312(526074061, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case 2100131425:
					if (!func_341(-1045488665, 1, 0))
					{
						func_312(-1045488665, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
				case -2041382104:
					if (!func_341(471514780, 1, 0))
					{
						func_312(471514780, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
					}
					break;
			}
		}
		else if (func_598(iParam0, -839724752) && func_599(iParam0, 4))
		{
			if (!func_588(42))
			{
				func_628(iParam0);
			}
		}
		else if (func_598(iParam0, 1399091007))
		{
			func_629(iParam0, &iVar2);
			bParam2 = true;
			bVar4 = true;
		}
		else if (func_598(iParam0, 1248798204))
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
				func_312(iVar8, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
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
				func_601(24);
				if (&Global_1946804->f_1497.f_1[27] == &Global_1946804->f_57[27])
				{
					func_630(player_ped_id(), -1185145312, 0, 99217379, 1, 1, 1, 0, 1, 0);
				}
				if (func_631(&iVar9, 0))
				{
					func_607(iVar9, 0, 0, bParam4, 3, 0, 752097756, 0);
				}
				break;
			case 1171350303:
				if (func_20() == -1 && &Global_1946804->f_1497.f_1[25] == &Global_1946804->f_57[25])
				{
					func_630(player_ped_id(), 1171350303, 0, 673166414, 1, 1, 1, 0, 1, 0);
				}
				break;
			case -160924582:
				break;
			case 2131771850:
				func_319(415, 0);
				Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
				func_632();
				Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
				func_633();
				Global_40.f_11095.f_55 = (Global_40.f_11095.f_55 + 0.1f);
				Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
				Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
				Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
				func_634();
				Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
				func_635();
				Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
				Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
				Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
				func_636();
				break;
			case -102111672:
				bParam2 = true;
				bVar4 = true;
				break;
			case -1937935584:
				func_637(499813453, 854119837, 0);
				func_638(499813453, 0);
				func_639(1);
				break;
			case 2127812557:
				func_637(499813453, -1292544588, 0);
				func_638(499813453, 0);
				func_639(2);
				break;
			case 808991383:
				func_637(499813453, -1003325394, 0);
				func_638(499813453, 0);
				func_639(4);
				break;
			case 1134518629:
				func_637(666607663, -335460405, 0);
				func_638(666607663, 0);
				func_640(1);
				break;
			case 902940106:
				func_637(666607663, 903797617, 0);
				func_638(666607663, 0);
				func_640(2);
				break;
			case -418174898:
				func_637(666607663, 669728650, 0);
				func_638(666607663, 0);
				func_640(4);
				break;
			case -648114971:
				func_637(-220219788, 1214120047, 0);
				func_638(-220219788, 0);
				func_641(1);
				break;
			case 211153747:
				func_637(-220219788, 655769340, 0);
				func_638(-220219788, 0);
				func_641(2);
				break;
			case -32876996:
				func_637(-220219788, 885316185, 0);
				func_638(-220219788, 0);
				func_641(4);
				break;
			case 1191437462:
				func_637(218622660, -1491419385, 0);
				func_638(218622660, 0);
				func_642(1);
				break;
			case 1119149048:
				func_637(218622660, 1809565830, 0);
				func_638(218622660, 0);
				func_642(2);
				break;
			case 506073827:
				func_637(390004462, -628873767, 0);
				func_638(390004462, 0);
				func_643(1);
				break;
			case -1876986168:
				func_637(390004462, -405421956, 0);
				func_638(390004462, 0);
				func_643(2);
				break;
			case 2142623221:
				func_637(390004462, -1108972386, 0);
				func_638(390004462, 0);
				func_643(4);
				break;
			case 1508215381:
				func_637(6410548, 1053716392, 0);
				func_638(6410548, 0);
				func_644(1);
				break;
			case -888935280:
				func_637(6410548, 806507056, 0);
				func_638(6410548, 0);
				func_644(2);
				break;
			case -1252474566:
				func_637(6410548, 1571925350, 0);
				func_638(6410548, 0);
				func_644(4);
				break;
			case -1465702449:
				func_637(6410548, 1330352282, 0);
				func_638(6410548, 0);
				func_644(8);
				break;
			case -21093309:
				func_646(242, func_645(-21093309), 0);
				break;
			case 204375141:
				func_646(240, func_645(204375141), 0);
				break;
			case -417963070:
				func_646(241, func_645(-417963070), 0);
				break;
			case -1080874779:
			case -755485480:
			case 230530039:
			case 299161628:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_647(594, 1934060482, 1, 1);
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
					func_647(594, 1110018439, 1, 1);
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
					func_647(594, 1408511260, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1976480343:
			case -953313786:
			case 730856618:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_647(594, -1228016946, 1, 1);
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
					func_647(595, -103579, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case -1977068039:
			case -399865011:
				if (get_game_timer() >= (Global_1935689->f_10197 + 60000))
				{
					func_647(595, -1531530025, 1, 1);
					Global_1935689->f_10197 = get_game_timer();
				}
				break;
			case 80178851:
				func_319(488, 0);
				break;
			case 1613651027:
				func_319(491, 0);
				break;
			case -885810591:
				func_319(485, 0);
				if ((get_random_int_in_range(0, 65536) % 3) == 0)
				{
					func_312(func_648(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				else
				{
					func_312(func_649(), 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
				}
				break;
			case -601932535:
				if (func_600(1))
				{
					func_319(487, 0);
				}
				break;
			case -898386032:
				func_319(486, 0);
				break;
			case -2035110427:
				if (func_20() == -1)
				{
					iParam0 = -1448210800;
				}
				break;
			case 1510719693:
				func_319(496, 0);
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
		func_650(&iVar10);
		if (!func_651(iVar10, iVar0, iParam5))
		{
			return false;
		}
		else if (!func_606(0))
		{
			return true;
		}
		if (func_597(iParam0) == -1037537535)
		{
			func_652(iParam0);
		}
		if (func_598(iParam0, -1979000645))
		{
			func_653(iParam0);
		}
	}
	else if (iVar2 != 0)
	{
		if (func_606(0))
		{
			Var11.f_1 = 10;
			Var11.f_12 = 10;
			_0x48e4d50f87a96aa5(Global_35, 0, 0, iVar2, &Var11, 0);
			iVar34 = 0;
			while (iVar34 < Var11)
			{
				func_312(&(Var11.f_1[iVar34]), &(Var11.f_12[iVar34]), 0, 0, 0, -897553835, 0, 0, 0, 0);
				iVar34++;
			}
		}
		else
		{
			func_654(iVar2, 0);
		}
	}
	Var35 = { func_655(iParam0) };
	if (_stat_id_is_valid(&Var35))
	{
		_0x6a0184e904cdf25e(&Var35, iVar0);
	}
	func_656(iParam0);
	if (fParam6 > 0f)
	{
		if (func_598(iParam0, -839724752))
		{
			func_657(iParam0, fParam6);
		}
	}
	else if (!bParam2)
	{
		bVar37 = iParam5 == 1248274121;
		func_658(iParam0, iVar0, 0, bVar37, 0);
	}
	return true;
}

void func_313(int iParam0)
{
	if (func_598(iParam0, 1989861793))
	{
		iVar0 = func_659(iParam0, 1697966752);
		if (iVar0 != 0)
		{
			Var3 = { func_660(-1591664384, -1591664384, 0, 0, 0, 0, -1, iVar0, 0) };
			if (func_661(Var3, &iVar1, &iVar2, 0))
			{
				bVar13 = false;
				iVar14 = 0;
				while (iVar14 < iVar2)
				{
					iVar15 = func_662(iVar14, iVar1);
					if (iVar15 != iParam0 && func_578(iVar15, 0))
					{
						if (func_663(iVar15, 0, 0, 1, 0))
						{
							bVar13 = true;
						}
					}
					iVar14++;
				}
				func_664(iVar1);
				if (bVar13)
				{
					func_665(iParam0);
				}
				else
				{
					func_319(306, 0);
				}
			}
		}
	}
}

void func_314()
{
	if (func_20() != -1)
	{
		return;
	}
	func_666();
	func_667();
	func_668();
	func_669();
	func_670();
	func_671();
	func_672();
}

void func_315(int iParam0)
{
	func_673(iParam0, 1, 1, -142743235, 1);
	if (func_674(iParam0))
	{
		func_675(iParam0, 1, 1);
	}
	bVar3 = false;
	bVar7 = false;
	iVar8 = func_677(func_676(iParam0), 1);
	if (iVar8 >= 39)
	{
		bVar7 = true;
	}
	func_678(-2124052603);
	iVar1 = 0;
	while (iVar1 < 39)
	{
		vVar4.x = &Global_1946804->f_57[iVar1];
		*Global_1946804->f_1616.f_1[iVar1] = { vVar4 };
		Global_1946804->f_1616.f_1[iVar1]->f_2 = (Global_1946804->f_1497.f_1[iVar1]->f_2 || Global_1946804->f_1378.f_1[iVar1]->f_2);
		iVar1++;
	}
	if (func_679() == -2125499975)
	{
		iVar2 = 2020890174;
	}
	else
	{
		iVar2 = 1105329772;
	}
	func_680(&(Global_1946804->f_1616), iVar2, &uVar9, 1, 0, 0, 0);
	func_680(&(Global_1946804->f_1616), 211609491, &uVar9, 1, 0, 0, 0);
	*Global_1946804->f_1616.f_1[8] = { func_681(8, 0) };
	*Global_1946804->f_1616.f_1[9] = { func_681(9, 0) };
	*Global_1946804->f_1616.f_1[0] = { func_681(0, 0) };
	*Global_1946804->f_1616.f_1[2] = { func_681(2, 0) };
	*Global_1946804->f_1616.f_1[3] = { func_681(3, 0) };
	*Global_1946804->f_1616.f_1[1] = { func_681(1, 0) };
	*Global_1946804->f_1616.f_1[5] = { func_681(5, 0) };
	*Global_1946804->f_1616.f_1[6] = { func_681(6, 0) };
	*Global_1946804->f_1616.f_1[7] = { func_681(7, 0) };
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (bVar7)
		{
			iVar8 = 0;
			while (iVar8 < 39)
			{
				if (iParam0 == func_682(iVar8, iVar0))
				{
					func_683(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
				}
				else
				{
					iVar8++;
				}
			}
		}
		else if (iParam0 == func_682(iVar8, iVar0))
		{
			func_683(Global_1946804->f_1616.f_1[iVar8], iVar8, iVar0);
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

void func_316()
{
	iVar5 = 16;
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_682(iVar5, iVar0);
		if (iVar1 == &Global_1946804->f_57[iVar5] || iVar1 == 0)
		{
			if (func_679() == -2125499975 || func_679() == -449205311)
			{
				vVar2.x = -2018863109;
				vVar2.f_1 = 1530758430;
				func_683(&vVar2, iVar5, iVar0);
			}
			else
			{
				vVar2.x = 1734931872;
				vVar2.f_1 = 1155669136;
				func_683(&vVar2, iVar5, iVar0);
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

void func_317()
{
	_sc_feed_submit_preset_message(2, 2);
	if (is_orbis_version())
	{
		iVar0 = func_577(14);
		(*Global_1898441)[iVar0] = 14;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MUD1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MUD1_COM", 24);
	}
}

char* func_318(int iParam0, bool bParam1)
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
			if ((func_321((*Global_1835011)[59]->f_1, 1) || func_321((*Global_1347702)[1]->f_15, 1)) || func_184((*Global_1347702)[1]->f_15))
			{
				return "COMP_RUFUS";
			}
			else if (func_554(403634348, 1))
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

void func_319(int iParam0, bool bParam1)
{
	func_684(iParam0, &iVar0, &iVar1);
	if (!func_685(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_686(iVar0, iVar1);
}

void func_320(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_677(iParam0, 1);
	func_687(Global_1946804->f_1497.f_1[iVar0], 2, 6);
	func_687(Global_1946804->f_1378.f_1[iVar0], 2, 6);
	if (bParam1)
	{
		Global_1946804->f_1497.f_1[iVar0] = &Global_1946804->f_57[iVar0];
		Global_1946804->f_1497.f_1[iVar0]->f_1 = 0;
		*Global_1946804->f_1378.f_1[iVar0] = { *Global_1946804->f_1497.f_1[iVar0] };
		if (bParam2)
		{
			func_688(17, iParam0, 0, 0, 0);
		}
	}
	if (func_20() == -1)
	{
		iVar1 = 0;
		while (iVar1 < 5)
		{
			func_687(Global_26796.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
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
			func_687(Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0], 2, 6);
			if (bParam1)
			{
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0] = &Global_1946804->f_57[iVar0];
				Global_36638.f_45.f_350.f_26[iVar1]->f_1.f_1[iVar0]->f_1 = 0;
			}
			iVar1++;
		}
	}
}

bool func_321(int iParam0, bool bParam1)
{
	switch (func_290(iParam0))
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

void func_322()
{
	_sc_feed_submit_preset_message(2, 5);
	if (is_orbis_version())
	{
		iVar0 = func_577(17);
		(*Global_1898441)[iVar0] = 17;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA2_COM", 24);
	}
}

void func_323()
{
	_sc_feed_submit_preset_message(2, 6);
	if (is_orbis_version())
	{
		iVar0 = func_577(18);
		(*Global_1898441)[iVar0] = 18;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BRA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BRA3_COM", 24);
	}
}

int func_324(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_689(iParam1, 1, 0) };
		iParam3 = func_690(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	func_691(iParam3);
	return func_630(iParam0, iParam1, iParam2, iParam3, bParam4, bParam5, 1, 0, 1, 0);
}

bool func_325()
{
	return _unlock_is_unlocked(99890643);
}

void func_326(int iParam0)
{
	if (!func_692(iParam0))
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

bool func_327(int iParam0, int iParam1)
{
	if (!func_693(iParam0))
	{
		return false;
	}
	if ((iParam1 == -1 || iParam1 < 0) || iParam1 > 179)
	{
		iParam1 = func_694(iParam0);
	}
	if (iParam1 == -1)
	{
		return false;
	}
	return func_695(Global_40.f_9910[iParam1], 4);
}

void func_328(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	iVar0 = func_696(*iParam0);
	iVar1 = func_697(*iParam0);
	iVar2 = func_698(*iParam0);
	iVar3 = func_699(*iParam0);
	iVar4 = func_700(*iParam0);
	iVar5 = func_701(*iParam0);
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
	iVar6 = func_702(iVar1, iVar0);
	while (iVar2 > iVar6)
	{
		iParam5++;
		iVar2 = (iVar2 - iVar6);
		if (iVar1 > 11)
		{
			iParam6++;
			iVar1 = (iVar1 - 12);
		}
		iVar6 = func_702(iVar1, iVar0);
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
	func_703(iParam0, iVar5, iVar4, iVar3, iVar2, iVar1, iVar0);
}

void func_329(int iParam0, int iParam1, bool bParam2)
{
	if (!func_693(iParam0))
	{
		return;
	}
	if (!func_704(iParam1))
	{
		return;
	}
	if (func_705(iParam1, 1))
	{
		return;
	}
	iVar0 = func_694(iParam0);
	if (iVar0 == -1)
	{
		return;
	}
	if (func_327(iParam0, -1))
	{
		return;
	}
	else
	{
		func_706(Global_40.f_9910[iVar0], 2);
	}
	Global_40.f_9910[iVar0]->f_4 = iParam1;
	if (bParam2)
	{
		if (!func_190(0, 0, 1))
		{
			func_361(0, 17);
		}
	}
}

void func_330()
{
	_sc_feed_submit_preset_message(2, 7);
	if (is_orbis_version())
	{
		iVar0 = func_577(19);
		(*Global_1898441)[iVar0] = 19;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MOB5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MOB5_COM", 24);
	}
}

void func_331()
{
	_sc_feed_submit_preset_message(2, 8);
	if (is_orbis_version())
	{
		iVar0 = func_577(20);
		(*Global_1898441)[iVar0] = 20;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_SAI1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_SAI1_COM", 24);
	}
}

bool func_332()
{
	return _unlock_is_unlocked(-121456797);
}

void func_333()
{
	_sc_feed_submit_preset_message(2, 9);
	if (is_orbis_version())
	{
		iVar0 = func_577(21);
		(*Global_1898441)[iVar0] = 21;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA1_COM", 24);
	}
}

void func_334()
{
	_sc_feed_submit_preset_message(2, 10);
	if (is_orbis_version())
	{
		iVar0 = func_577(22);
		(*Global_1898441)[iVar0] = 22;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_GUA3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_GUA3_COM", 24);
	}
}

void func_335()
{
	_sc_feed_submit_preset_message(2, 12);
	if (is_orbis_version())
	{
		iVar0 = func_577(24);
		(*Global_1898441)[iVar0] = 24;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ODR5_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ODR5_COM", 24);
	}
}

void func_336()
{
	_sc_feed_submit_preset_message(2, 13);
	if (is_orbis_version())
	{
		iVar0 = func_577(25);
		(*Global_1898441)[iVar0] = 25;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN1_COM", 24);
	}
}

void func_337()
{
	_sc_feed_submit_preset_message(2, 14);
	if (is_orbis_version())
	{
		iVar0 = func_577(27);
		(*Global_1898441)[iVar0] = 27;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_MAR51_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_MAR51_COM", 24);
	}
}

void func_338()
{
	_sc_feed_submit_preset_message(2, 15);
	if (is_orbis_version())
	{
		iVar0 = func_577(28);
		(*Global_1898441)[iVar0] = 28;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_ABI21_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_ABI_21_COM", 24);
	}
}

bool func_339(int iParam0)
{
	return _0x9a03f22ad446eeac(iParam0) > 0;
}

bool func_340(int iParam0)
{
	return (Global_40.f_12019.f_4 && iParam0) != 0;
}

bool func_341(int iParam0, int iParam1, bool bParam2)
{
	if (!func_578(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_597(iParam0);
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
		if (!func_707(iParam0, 1))
		{
			return false;
		}
	}
	return func_582(iParam0, 0, bParam2) >= iParam1;
}

void func_342(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (iParam0 < 0)
	{
		func_708(_create_var_string(2, "MISSION_COMPLETE_BANK_FEED", absi(iParam0)), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
		Global_1879514->f_14 = 1;
		Global_1879514->f_15 = 0;
	}
	else
	{
		func_708(_create_var_string(2, "MISSION_COMPLETE_LOAN_FEED", iParam0), "itemtype_textures", get_hash_key("ITEMTYPE_BANK_DEBT"), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Negative", 0, 1);
		Global_1879514->f_14 = 0;
		Global_1879514->f_15 = 1;
	}
}

void func_343()
{
	_sc_feed_submit_preset_message(2, 16);
	if (is_orbis_version())
	{
		iVar0 = func_577(29);
		(*Global_1898441)[iVar0] = 29;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_BEE22_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_BEE22_COM", 24);
	}
}

void func_344()
{
	_sc_feed_submit_preset_message(2, 17);
	if (is_orbis_version())
	{
		iVar0 = func_577(26);
		(*Global_1898441)[iVar0] = 26;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_FIN2_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_FIN2_COM", 24);
	}
}

void func_345()
{
	_sc_feed_submit_preset_message(2, 11);
	if (is_orbis_version())
	{
		iVar0 = func_577(23);
		(*Global_1898441)[iVar0] = 23;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOC_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOC_COM", 24);
	}
}

void func_346()
{
	_sc_feed_submit_preset_message(2, 3);
	if (is_orbis_version())
	{
		iVar0 = func_577(15);
		(*Global_1898441)[iVar0] = 15;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DOW3_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DOW3_COM", 24);
	}
}

void func_347()
{
	_sc_feed_submit_preset_message(2, 4);
	if (is_orbis_version())
	{
		iVar0 = func_577(16);
		(*Global_1898441)[iVar0] = 16;
		StringCopy(&((*Global_1898441)[iVar0]->f_2), "AF_DUT1_TITLE", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_18), "AF_CAP1", 24);
		StringCopy(&((*Global_1898441)[iVar0]->f_21), "AF_DUT1_COM", 24);
	}
}

void func_348()
{
	if (func_709() > 1)
	{
		func_710();
	}
	else
	{
		if (!_unlock_is_visible(-707360575))
		{
			_unlock_set_visible(-707360575, true);
			func_319(444, 1);
		}
		if (!_unlock_is_visible(-1201174711))
		{
			_unlock_set_visible(-1201174711, true);
			func_319(447, 1);
		}
		if (!_unlock_is_visible(151582343))
		{
			_unlock_set_visible(151582343, true);
			func_319(448, 1);
		}
		if (!_unlock_is_visible(-642492359))
		{
			_unlock_set_visible(-642492359, true);
			func_319(450, 1);
		}
		if (!_unlock_is_visible(5171247))
		{
			_unlock_set_visible(5171247, true);
			func_319(452, 1);
		}
	}
}

bool func_349(int iParam0)
{
	return func_711(iParam0, 4, 1);
}

void func_350(int iParam0)
{
	func_712(iParam0, 4, 1);
}

void func_351(int iParam0)
{
	if (iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_40.f_4283.f_326 = iParam0;
	Var0 = { func_94(-160912108) };
	stat_id_set_int(&Var0, iParam0, true);
}

void func_352(int iParam0)
{
	if (func_82(32768))
	{
		return;
	}
	if (!func_183(iParam0))
	{
		return;
	}
	func_223(Global_1935630, 8192);
	iVar2 = 1;
	switch (func_188(iParam0))
	{
		case 1:
			func_95(func_615(909007663, -587839005), 1);
			iVar0 = func_266(iParam0);
			func_95(func_94(-634848880), 1);
			switch (func_480(iVar0))
			{
				case 0:
					func_95(func_615(909007663, 1325140787), 1);
					break;
				case 1:
					func_95(func_615(909007663, 2101241783), 1);
					break;
				case 2:
					func_95(func_615(909007663, -1296936294), 1);
					break;
				case 3:
					func_95(func_615(909007663, -798388728), 1);
					break;
				case 4:
					func_95(func_615(909007663, -1787586531), 1);
					break;
				case 5:
					func_95(func_615(909007663, -1002834519), 1);
					break;
				case 6:
					func_95(func_615(909007663, -50600144), 1);
					break;
				case 7:
					func_95(func_615(909007663, -348503123), 1);
					break;
				case 8:
					func_95(func_615(909007663, -528798161), 1);
					break;
				default:
					iVar2 = 0;
					break;
			}
			if (iVar0 == 7)
			{
				func_95(func_615(909007663, -406093146), 1);
			}
			if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1835011)[iVar0]->f_8))))
			{
				func_95(func_615(909007663, 532323983), 1);
			}
			break;
		case 8:
			iVar1 = func_266(iParam0);
			if (func_295((*Global_1347702)[iVar1]->f_12, 1))
			{
				func_95(func_94(-634848880), 1);
			}
			if (func_295((*Global_1347702)[iVar1]->f_12, 4) || iVar1 == 59)
			{
				if (func_295((*Global_1347702)[iVar1]->f_12, 1))
				{
					func_95(func_615(909007663, -587839005), 1);
				}
				else
				{
					func_95(func_615(909007663, -2049243343), 1);
				}
			}
			if (func_295((*Global_1347702)[iVar1]->f_12, 1))
			{
				switch (func_481(iVar1))
				{
					case 0:
						func_95(func_615(909007663, 1325140787), 1);
						break;
					case 1:
						func_95(func_615(909007663, 2101241783), 1);
						break;
					case 2:
						func_95(func_615(909007663, -1296936294), 1);
						break;
					case 3:
						func_95(func_615(909007663, -798388728), 1);
						break;
					case 4:
						func_95(func_615(909007663, -1787586531), 1);
						break;
					case 5:
						func_95(func_615(909007663, -1002834519), 1);
						break;
					case 6:
						func_95(func_615(909007663, -50600144), 1);
						break;
					case 7:
						func_95(func_615(909007663, -348503123), 1);
						break;
					case 8:
						func_95(func_615(909007663, -528798161), 1);
						break;
					default:
						iVar2 = 0;
						break;
				}
				if (iVar2 && _0xe824ce7d13fcb35e(get_hash_key(&((*Global_1347702)[iVar1]->f_3))))
				{
					func_95(func_615(909007663, 532323983), 1);
				}
			}
			else if (func_295((*Global_1347702)[iVar1]->f_12, 4))
			{
				if (func_295((*Global_1347702)[iVar1]->f_12, 4194304))
				{
				}
				else if (!func_295((*Global_1347702)[iVar1]->f_12, 512))
				{
					func_95(func_615(909007663, 551192206), 1);
				}
				else
				{
					func_95(func_615(909007663, -406093146), 1);
				}
			}
			break;
	}
}

void func_353()
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
	else if ((func_190(0, 0, 1) || func_713()) || func_129())
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
		if (!_spactionproxy_process_action(uVar4, func_714(&uVar4, &iVar1, &iVar2, &iVar3)))
		{
		}
	else
	{
		}
	}
	if (iVar1 == 1)
	{
		func_715(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_SINGLE", 1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	else if (iVar1 > 1)
	{
		func_715(_create_var_string(2, "SHOP_CATALOGUE_DELIVERY"), _create_var_string(2, "SHOP_CATALOGUE_PURCHASE_RECEIVED_PLURAL", iVar1), 908516622, -576888982, -2, 0, 0, 0, 0, 1, 1);
	}
	if (iVar3 > 0)
	{
		func_716(iVar3, 0, 0);
	}
	if (iVar1 > 0)
	{
		func_361(0, -1);
	}
	if (iVar2 > 0)
	{
		func_717("SHOP_CATALOGUE_PURCHASE_FAILED", 10000, 0, 0, 0, 1);
	}
	func_718(1, 0);
	Global_1956575->f_4 = 1;
}

void func_354(int iParam0, int iParam1, bool bParam2, float fParam3, int iParam4, char* sParam5, int iParam6, int iParam7)
{
	if (func_82(32768))
	{
		return;
	}
	func_277(iParam1, bParam2, fParam3, iParam4, sParam5, iParam6, iParam7, 752097756);
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
		func_719(iParam0, iParam1, fParam3, iParam4);
	}
}

int func_355(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -1;
	}
	return func_720(iParam0);
}

int func_356(int iParam0, int iParam1)
{
	if (!func_721(iParam0))
	{
		return 0;
	}
	if (!func_390())
	{
		return 0;
	}
	if (!func_722(iParam0, &iVar0, &iVar1))
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

int func_357(int iParam0, int iParam1, int iParam2, int iParam3)
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
	if (iVar2 >= func_723())
	{
		iVar2 = func_723();
	}
	iVar5 = func_724(iVar3, iVar4, iParam2);
	if (Global_1572887->f_12 == -1)
	{
		iVar0 = iVar1;
		iVar0 = iVar1;
		while (iVar0 <= iVar2)
		{
			iVar6 = iVar0;
			if (func_477(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_477(iVar6) == 0)
			{
				return func_725(iVar3, iVar4, iParam2, iVar0, iParam3);
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
			if (func_477(iVar6) == iVar5)
			{
				return iVar6;
			}
			if (func_477(iVar6) == 0)
			{
				return func_725(iVar3, iVar4, iParam2, iVar0, iParam3);
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
				return func_725(iVar3, iVar4, iParam2, iVar0, 0);
			}
			iVar0++;
		}
	}
	return -1;
}

int func_358(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_726(1330954593, 0, -1);
		case 1:
			return func_726(1330954593, 0, -1);
		case 2:
			return func_726(1330954593, 0, -1) * 2;
		case 4:
			return func_726(1330954593, 0, -1);
		case 5:
			return func_726(1330954593, 0, -1);
		case 6:
			return func_726(1330954593, 0, -1) * 2;
		case 12:
			return 75000;
		case 8:
			return func_726(1330954593, 0, -1) * 3;
		case 9:
			return func_726(1330954593, 0, -1) * 3;
		case 10:
			return func_726(1330954593, 0, -1) * 3;
		case 11:
			return func_726(1330954593, 0, -1);
		default:
			break;
	}
	return 0;
}

char[] func_359(int iParam0)
{
	if (!func_183(iParam0))
	{
		return cVar0;
	}
	switch (func_188(iParam0))
	{
		case 1:
			cVar0 = (*Global_1835011)[func_502(iParam0)]->f_8;
			break;
		case 8:
			cVar0 = (*Global_1347702)[func_266(iParam0)]->f_3;
			break;
		case 11:
			if (iParam0 == func_357(0, 10, 11, 2116153146))
			{
				StringCopy(&cVar0, "CABR01", 8);
			}
			break;
	}
	return cVar0;
}

void func_360(char[4] cParam0)
{
	if (!Global_1879514->f_11)
	{
		iVar0 = func_362();
		iVar1 = get_hash_key(&cParam0);
		if (_0x57e798b54c45ee1a(iVar1) != 5 && iVar0 == 5)
		{
			if (func_188(Global_1879514->f_1) == 1)
			{
				func_356(5, 1);
			}
			else if (func_188(Global_1879514->f_1) == 8 && (func_295((*Global_1347702)[func_266(Global_1879514->f_1)]->f_12, 1) || func_295((*Global_1347702)[func_266(Global_1879514->f_1)]->f_12, 33554432)))
			{
				func_356(5, 1);
			}
		}
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), iVar0);
	}
	else
	{
		_0xe824ce7d13fcb300(get_hash_key(&cParam0), 3);
	}
}

void func_361(bool bParam0, int iParam1)
{
	if (_0x5fc9357c26daefce())
	{
		return;
	}
	Global_0.f_1 = iParam1;
	if (bParam0)
	{
		func_727(&Global_0, 8);
	}
	if (!func_390() || func_20() != -1)
	{
		return;
	}
	func_727(&Global_0, 1);
}

int func_362()
{
	iVar0 = func_728(Global_1879514->f_1);
	if (Global_1425247->f_53)
	{
		return 0;
	}
	if (func_729(iVar0))
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

Vector3 func_363(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, bool bParam9, bool bParam10)
{
	vVar0 = { func_730(vParam0, iParam3, iParam4, iParam5, iParam6, 1, iParam7, bParam8, bParam9, bParam10, -1, 1103626240) };
	if (func_391(vVar0))
	{
		vVar0 = { func_730(vParam0, iParam3, iParam4, 0, 1, 1, iParam7, bParam8, 0, 0, -1, 1103626240) };
	}
	return vVar0;
}

void func_364(vector3 vParam0, int iParam3, var uParam4, int iParam5)
{
	Global_1310720->f_1 = { vParam0 };
	Global_40.f_9.f_10 = uParam4;
	Global_40.f_9.f_11 = iParam3;
	Global_40.f_9.f_12 = iParam5;
}

void func_365(vector3 vParam0)
{
	Global_40.f_9.f_7 = { vParam0 };
}

int func_366(vector3 vParam0, int iParam3)
{
	iVar0 = func_77();
	if (func_241(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1888801)[iVar0]->f_3, vParam0))
		{
			return iVar0;
		}
	}
	return func_731(vParam0, iParam3);
}

void func_367()
{
	func_732();
	func_733();
	func_734();
	_0x11b0a0b282fa9b10(0);
}

void func_368(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1934603->f_161 >= 10)
	{
		return;
	}
	if (!func_735(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_736(&(Param0.f_10)))
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
			func_737(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_369(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_370(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_371()
{
	return Global_1572864->f_12;
}

void func_372(bool bParam0)
{
	if (func_493(Global_1935630->f_3))
	{
		return;
	}
	iVar0 = 1;
	Var1.f_2 = 4;
	Var1 = "HUD_PENALTY_SOUNDSET";
	Var1.f_1 = "HUD_FAIL";
	Var1.f_3 = func_738();
	Var1.f_3.f_3 = iVar0;
	if ((!func_739(Global_1347343->f_2) && !func_369(Global_1347343->f_11, 64)) || func_82(32768))
	{
		Var1.f_7 = func_740();
		Var1.f_7.f_3 = iVar0;
	}
	if (!func_369(Global_1347343->f_11, 1024) && !func_82(32768))
	{
		Var1.f_11 = func_741();
		Var1.f_11.f_3 = iVar0;
	}
	if (func_369(Global_1347343->f_11, 8))
	{
		Var1.f_15 = func_742();
		Var1.f_15.f_3 = iVar0;
	}
	if (Global_1347343->f_1 != 2)
	{
		Global_1935630->f_3 = func_743(&Var1, "REPLAY_T", &(Global_1347343->f_3), 0, 1);
	}
	else
	{
		Global_1935630->f_3 = func_744(&Var1, "REPLAY_T_DEAD", 0, 1);
	}
	set_player_invincible(player_id(), true);
	if (!is_ped_in_any_vehicle(Global_35, false) && !is_entity_attached(Global_35))
	{
		freeze_entity_position(Global_35, true);
	}
	func_370(&(Global_1347343->f_11), 1073741824);
	if (bParam0)
	{
		func_370(&(Global_1347343->f_11), 1048576);
	}
	_0x16e9abdd34ddd931();
}

void func_373(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	func_745(uParam0);
	iVar0 = func_746(uParam0, iParam1);
	if (bParam3)
	{
		if (is_string_null_or_empty(sParam2))
		{
			sParam2 = func_747(iParam1);
		}
		iVar0 = func_748(uParam0, sParam2);
		if (iVar0 == -1)
		{
			iVar0 = func_749(uParam0);
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
		iVar0 = func_749(uParam0);
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
	func_750(uParam0, 2);
}

void func_374(char[4] cParam0, int iParam1)
{
	func_751(&(cParam0->f_7375), iParam1);
}

int func_375(var uParam0)
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

int func_376()
{
	return func_502(func_752());
}

void func_377(char[4] cParam0)
{
	iVar0 = 0;
	while (iVar0 < func_392())
	{
		func_753(cParam0, iVar0);
		iVar0++;
	}
}

int func_378(var uParam0)
{
	uParam0->f_607 = uParam0->f_607;
	return 1;
}

void func_379(char[4] cParam0, var uParam1)
{
	cParam0->f_607 = uParam1;
}

void func_380(char[4] cParam0)
{
	func_759(cParam0, iLocal_139, iLocal_140, 116601, 116778, 116849, 117461, 118513, "DST5_INT", 4162, -1);
	func_759(cParam0, iLocal_140, iLocal_141, 118722, 118832, 118948, 119306, 120952, "DST5_MCS1", 66, -1);
	func_759(cParam0, iLocal_141, iLocal_142, 121090, 121109, 121190, 121337, 122039, "", 64, -1);
	func_759(cParam0, iLocal_142, iLocal_143, 122122, 122156, 122233, 122326, 123012, "", 4193, -1);
	func_759(cParam0, iLocal_143, iLocal_144, 123163, 123183, 123420, 123845, 124871, "DST5_MCS3", 4203, -1);
	func_759(cParam0, iLocal_144, iLocal_145, 125023, 125159, 125297, 125431, 125657, "DST5_EXT", 18, -1);
	func_759(cParam0, iLocal_145, 26, 125726, 125803, 125880, 125934, 126877, "DST5_EXT2", 2, -1);
}

Vector3 func_381(int iParam0, int iParam1)
{
	return func_790(iParam0, iParam1);
}

void func_382(char[4] cParam0, vector3 vParam1)
{
	cParam0->f_5413 = { vParam1 };
}

void func_383(char[4] cParam0, int iParam1)
{
	cParam0->f_13105 = iParam1;
}

void func_384(char[4] cParam0)
{
	_0xed9582b3da8f02b4(cParam0->f_13105);
}

void func_385(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	clear_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

bool func_386(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_387(var uParam0)
{
	if (!func_791(uParam0, 4))
	{
		if (func_792(uParam0->f_860, 16384))
		{
			animpostfx_play("CamTransition01");
		}
		vVar0 = { func_793(uParam0) };
		if (!func_792(uParam0->f_860, 524288))
		{
			func_794(&(uParam0->f_872));
		}
		func_795(&(uParam0->f_860), 0, 2, vVar0.x, vVar0.y, vVar0.z, 0);
		func_796(uParam0, 0f, 0f, 0f);
		func_797(uParam0);
		func_798(uParam0);
		func_799(uParam0, 0f, 0f, 0f, 0, 0);
		func_800(uParam0);
		func_751(uParam0, 4);
		func_801(uParam0, 0);
		func_802(&(Global_1946804->f_1497), Global_35, 1, 64, 1, 1, 1);
		if (_0x927b810e43e99932(&(uParam0->f_873)))
		{
			_0x0a5a4f1979abb40e(&(uParam0->f_873));
		}
	}
}

Vector3 func_388(int iParam0)
{
	if (func_803(iParam0))
	{
		return func_804(iParam0);
	}
	return (*Global_1835011)[iParam0]->f_18;
}

int func_389(vector3 vParam0, var uParam3)
{
	if (_0x1b065a2bf7953815(0) != 1)
	{
		func_505(0, 1);
	}
	else
	{
		return 0;
	}
	iVar0 = func_805(Global_35, 0, 2, 0);
	if (!is_weapon_valid(iVar0))
	{
		iVar0 = func_806(0, 0);
		if (func_692(iVar0))
		{
			set_current_ped_weapon(Global_35, iVar0, true, 2, false, false);
			func_807(1, 0);
		}
	}
	else
	{
		func_807(1, 0);
	}
	func_202(0);
	func_506(0, vParam0, uParam3);
	return 1;
}

bool func_390()
{
	return true;
	if (Global_1572887->f_12 == 0)
	{
		return true;
	}
	return Global_40.f_1;
}

bool func_391(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

int func_392()
{
	return 26;
}

void func_393(int iParam0)
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

void func_394(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_808((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_395(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		func_809((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_396(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		func_810((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_397(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 14)
	{
		func_811((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_398(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		func_812((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_399(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_813((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_400(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
}

void func_401(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		func_814((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_402(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		func_815((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_403(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_816((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_404(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_817((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_405(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		func_818((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_406(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_819(&(cParam0->f_638), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_820(&(cParam0->f_638));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_638[iVar0] = iParam1;
	cParam0->f_638[iVar0]->f_2 = (cParam0->f_638[iVar0]->f_2 || iParam2);
}

void func_407(char[4] cParam0, char[4] cParam1, int iParam2)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_821(&(cParam0->f_1020), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_822(&(cParam0->f_1020));
	}
	if (iVar0 == -1)
	{
		return;
	}
	cParam0->f_1020[iVar0] = cParam1;
	cParam0->f_1020[iVar0]->f_2 = (cParam0->f_1020[iVar0]->f_2 || iParam2);
}

void func_408(char[4] cParam0, char[4] cParam1, var uParam2, int iParam3, int iParam4, char* sParam5, int iParam6, bool bParam7)
{
	if (!func_823(iParam3, func_33(cParam0)) && !func_823(iParam3, func_35(cParam0)))
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
	iVar0 = func_824(&(cParam0->f_1126), cParam1, *uParam2);
	if (iVar0 == -1)
	{
		iVar0 = func_825(&(cParam0->f_1126));
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
		func_826(&(cParam0->f_1126[iVar0]->f_2), 4);
	}
}

void func_409(char[4] cParam0, int iParam1, char* sParam2, int iParam3)
{
	if (!func_823(iParam3, func_33(cParam0)) && !func_823(iParam3, func_35(cParam0)))
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
	iVar0 = func_827(&(cParam0->f_1126), iParam1);
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

void func_410(char[4] cParam0, char[4] cParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_828(&(cParam0->f_819), cParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_829(&(cParam0->f_819));
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

void func_411(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (func_120(cParam0, 2097152))
	{
		return;
	}
	iVar0 = func_830(&(cParam0->f_5188), iParam1);
	if (iVar0 == -1)
	{
		iVar0 = func_831(&(cParam0->f_5188));
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

void func_412(int iParam0, int iParam1)
{
	func_832(iParam0, iParam1);
}

void func_413(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_833((*uParam0)[iVar0]))
		{
			if (func_823((*uParam0)[iVar0]->f_2, iParam12))
			{
				func_834((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_835((*uParam1)[iVar0]))
		{
			if (func_823((*uParam1)[iVar0]->f_4, iParam12))
			{
				func_836((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_837((*uParam2)[iVar0]))
		{
			if (func_823((*uParam2)[iVar0]->f_2, iParam12))
			{
				func_838((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_839((*uParam3)[iVar0]))
		{
			if (func_823((*uParam3)[iVar0]->f_2, iParam12))
			{
				func_840((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_823(uParam4->f_1, iParam12))
	{
		func_841(uParam4);
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_842((*uParam5)[iVar0]))
		{
			if (func_823((*uParam5)[iVar0]->f_3, iParam12))
			{
				func_843((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_842((*uParam5)[iVar0]))
		{
			iVar1 = 0;
			while (iVar1 < 20)
			{
				if (func_844((*uParam5)[iVar0]->f_4[iVar1]))
				{
					if (func_823((*uParam5)[iVar0]->f_4[iVar1]->f_2, iParam12))
					{
						func_845((*uParam5)[iVar0]->f_4[iVar1], (*uParam5)[iVar0]->f_1);
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
		if (func_846((*uParam6)[iVar0]))
		{
			if (func_823((*uParam6)[iVar0]->f_3, iParam12))
			{
				func_847((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_848((*uParam7)[iVar0]))
		{
			if (func_823((*uParam7)[iVar0]->f_4, iParam12))
			{
				func_849((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_850((*uParam8)[iVar0]))
		{
			if (func_823((*uParam8)[iVar0]->f_2, iParam12))
			{
				func_851((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_852((*uParam9)[iVar0]))
		{
			if (func_823((*uParam9)[iVar0]->f_2, iParam12))
			{
				func_853((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_854((*uParam10)[iVar0]))
		{
			if (func_823((*uParam10)[iVar0]->f_3, iParam12))
			{
				func_855((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_856((*uParam11)[iVar0]))
		{
			if (func_823((*uParam11)[iVar0]->f_2, iParam12))
			{
				func_857((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_414(var uParam0, int iParam1, char* sParam2, bool bParam3)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	if (func_858(uParam0, iParam1, sParam2))
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

struct<2> func_415()
{
	Var0 = create_itemset(true);
	return Var0;
}

void func_416(var uParam0, float fParam1)
{
	uParam0->f_794 = fParam1;
}

void func_417(var uParam0, float fParam1)
{
	uParam0->f_795 = fParam1;
}

void func_418(char[4] cParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	func_859(&(cParam0->f_7375), iParam1, sParam2, iParam3, iParam4, bParam5);
	func_373(&(cParam0->f_10792), iParam1, sParam2, bParam6);
}

bool func_419(char[4] cParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (bParam2 && func_23(&(cParam0->f_8269)))
	{
		if (!func_121(cParam0, iParam1, 268435456))
		{
			MemCopy(&cVar1, {func_860(cParam0->f_607)}, 3);
			if (func_861(&(cParam0->f_8269), &cVar1, 0, func_132(iParam1), 1, 0))
			{
				if (func_24(&(cParam0->f_8269)))
				{
					func_862(&(cParam0->f_8269));
				}
				func_140(cParam0, iParam1, 268435456);
			}
			else
			{
				iVar0 = 0;
			}
		}
	}
	if (!func_863(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1))
	{
		iVar0 = 0;
	}
	return iVar0;
}

bool func_420(var uParam0, int iParam1)
{
	iVar1 = 1;
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_842((*uParam0)[iVar0]))
		{
			if (func_823((*uParam0)[iVar0]->f_3, iParam1))
			{
				if ((*uParam0)[iVar0]->f_65 > 0f || func_864((*uParam0)[iVar0]->f_2, 4))
				{
					if (!func_865((*uParam0)[iVar0]))
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

int func_421(char[4] cParam0)
{
	return cParam0->f_596;
}

bool func_422(char[4] cParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, int iParam5)
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
	iVar0 = func_866(func_61(cParam0));
	if (!func_29())
	{
		vVar2 = { func_126(cParam0->f_607) };
	}
	if (func_867(cParam0, iVar0, &uVar1, bParam1, vVar2.x, vVar2.y, vVar2.z, 0, bParam2, iParam3, bParam4, iParam5, 1, 0))
	{
		cParam0->f_5408 = uVar1;
		return true;
	}
	return false;
}

bool func_423(char[4] cParam0, bool bParam1, var uParam2, var uParam3, var uParam4, float fParam5, int iParam6, int iParam7, int iParam8)
{
	if (does_entity_exist(cParam0->f_5411))
	{
		if (!func_120(cParam0, 16777216))
		{
			if (!func_868(cParam0))
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
				iVar12 = func_869(&iVar11, &Var0);
				if (iVar11 != 0)
				{
					func_103(cParam0, 16777216);
					if (iVar11 == 2 && !is_entity_dead(iVar12))
					{
						if (iVar12 == cParam0->f_5411)
						{
							func_103(cParam0, 16777216);
						}
						else if (func_870(iVar12, cParam0->f_5411, 5f, 1))
						{
							if (func_871(iVar12))
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
		if (func_872(&iVar17, func_125(cParam0), vVar14, 0f, 0, 0, 1, 1, 1))
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
		iVar13 = func_869(&iVar29, &Var18);
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
		func_873(cParam0, bParam1);
		if (!func_120(cParam0, 256))
		{
			if (!func_120(cParam0, 32768))
			{
				vVar14.x = uParam2;
				vVar14.f_1 = uParam3;
				vVar14.f_2 = uParam4;
				if ((!func_871(iVar13) || func_874(Global_35, iVar13, 1, 1) > 200f) && !func_391(vVar14))
				{
					if (!func_29())
					{
						freeze_entity_position(iVar13, false);
						func_875(iVar13, vVar14, fParam5, 2, 1073741824);
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

void func_424(char[4] cParam0)
{
	if (!func_120(cParam0, 32) && func_128(cParam0, 3))
	{
		if (func_876(cParam0->f_607, &iVar0, &uVar1))
		{
			set_clock_time(iVar0, 0, 0);
			func_103(cParam0, 32);
		}
	}
	if (!func_120(cParam0, 32))
	{
		if (func_877(&(cParam0->f_609), cParam0->f_607))
		{
			func_103(cParam0, 32);
		}
	}
}

void func_425(char[4] cParam0)
{
	if (!func_120(cParam0, 128))
	{
		if (func_120(cParam0, 16384))
		{
			func_878(cParam0);
			if (func_879(cParam0))
			{
				func_51(&(cParam0->f_10792));
				func_880(cParam0, 2097152);
				func_259(cParam0, 16384);
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
			func_878(cParam0);
			MemCopy(&Var0, {func_155(func_61(cParam0))}, 4);
			if (func_881(cParam0, Var0))
			{
				if (func_421(cParam0) != 4)
				{
					do_screen_fade_out(0);
				}
				func_103(cParam0, 128);
			}
		}
		else
		{
			if (func_421(cParam0) != 4)
			{
				do_screen_fade_out(1);
			}
			func_103(cParam0, 128);
		}
	}
}

void func_426(char[4] cParam0, int iParam1)
{
	cParam0->f_596 = iParam1;
}

bool func_427(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_882(cParam0))
	{
		iVar0 = 0;
	}
	if (!func_422(cParam0, func_128(cParam0, 3), !func_8(cParam0, 2097152), cParam0->f_5410, !func_8(cParam0, 32), 0))
	{
		iVar0 = 0;
	}
	if (!func_423(cParam0, 1, cParam0->f_5413, cParam0->f_5413.f_1, cParam0->f_5413.f_2, cParam0->f_5416, 1, 1, 1))
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
		MemCopy(&cVar1, {func_860(cParam0->f_607)}, 3);
		if (func_883(&(cParam0->f_8269), &cVar1, 0, 1, 1))
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
		if (func_884(&(cParam0->f_13115)) < 30f)
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

bool func_428(char[4] cParam0)
{
	bVar0 = (_has_player_teleport_finished(player_id()) || !is_player_teleport_active());
	if (func_884(&(cParam0->f_603)) >= cParam0->f_13144)
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (is_player_teleport_active())
		{
			stop_player_teleport();
		}
		if ((func_82(32768) && func_885()) && func_884(&(cParam0->f_603)) < (cParam0->f_13144 + 10f))
		{
			return false;
		}
		if (func_120(cParam0, 8) && is_valid_interior(get_interior_at_coords(func_126(cParam0->f_607))))
		{
			unpin_interior(get_interior_at_coords(func_126(cParam0->f_607)));
			func_259(cParam0, 8);
		}
		_set_milliseconds_per_game_minute(2000);
		func_886(0, 0);
		func_259(cParam0, 4096);
		return true;
	}
	return false;
}

bool func_429(char[4] cParam0)
{
	if (func_33(cParam0) < iLocal_145 && !func_386(iLocal_224, 1))
	{
		if (func_887(cParam0))
		{
			func_412(&iLocal_224, 1);
		}
		else
		{
			return false;
		}
	}
	if (!func_386(iLocal_224, 2))
	{
		if (func_888(cParam0))
		{
			func_412(&iLocal_224, 2);
		}
		else
		{
			return false;
		}
	}
	if (func_33(cParam0) < iLocal_143 && func_33(cParam0) > iLocal_139)
	{
		if (!func_386(iLocal_224, 16777216))
		{
			if (func_889())
			{
				func_412(&iLocal_224, 16777216);
			}
			else
			{
				return false;
			}
		}
	}
	if (func_33(cParam0) < iLocal_145 && func_33(cParam0) > iLocal_139)
	{
		if (!func_386(iLocal_224, 8192))
		{
			func_890(Global_35, iVar416);
			if ((func_891(0, iVar663, iVar414) && func_891(11, iVar664, iVar415)) && func_892(Global_35))
			{
				func_412(&iLocal_224, 8192);
			}
			else
			{
				return false;
			}
		}
	}
	if (func_33(cParam0) > iLocal_139 && !func_386(iLocal_224, 32768))
	{
		if (func_893(cParam0))
		{
			func_412(&iLocal_224, 32768);
		}
		else
		{
			return false;
		}
	}
	if (func_33(cParam0) == iLocal_144)
	{
		if (!func_386(iLocal_229, 32768))
		{
			if (func_894(-1, 0))
			{
				func_412(&iLocal_229, 32768);
			}
			return false;
		}
	}
	if (!func_895(cParam0))
	{
		return false;
	}
	func_896(cParam0);
	if (func_33(cParam0) > iLocal_139)
	{
		func_897(cParam0);
	}
	func_164(cParam0, 1);
	if (func_33(cParam0) == iLocal_139)
	{
		func_165(cParam0, 1);
		_set_weather_type(1632247697, false, true, true, 25f, false);
	}
	else
	{
		_set_weather_type(1632247697, true, true, false, 0f, false);
	}
	func_166(cParam0, 1);
	func_169(1);
	func_171(1);
	func_899(cParam0, 145852);
	func_901(cParam0, 145959);
	func_903(cParam0, 147873);
	return true;
}

void func_430(char[4] cParam0, int iParam1)
{
	func_66(iParam1);
	cParam0->f_10783 = iParam1;
}

bool func_431(char[4] cParam0)
{
	func_904(cParam0);
	func_905(cParam0);
	iVar0 = func_33(cParam0);
	iVar1 = func_35(cParam0);
	iVar2 = func_162(cParam0, iVar0);
	if (func_8(cParam0, 2097152))
	{
		if (iVar2 == 7 || iVar2 < 3)
		{
			func_879(cParam0);
		}
	}
	func_906(cParam0);
	func_907(cParam0);
	func_908(cParam0);
	func_909(cParam0);
	func_910(cParam0);
	func_911(cParam0);
	if (iVar2 != 5 && iVar2 != 6)
	{
		func_912(cParam0);
	}
	if ((func_33(cParam0) == 0 && iVar2 < 3) && func_273(cParam0) == 0)
	{
		func_425(cParam0);
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
			if (func_913(cParam0, iVar0, 0))
			{
				if (func_914(cParam0, func_33(cParam0)) != -1 && _0x62de46f061caa468() < func_914(cParam0, func_33(cParam0)))
				{
					_0xf008e0ba1fe1d644((func_914(cParam0, func_33(cParam0)) - _0x62de46f061caa468()));
				}
				if ((func_33(cParam0) == 25 || func_33(cParam0) == 26) && func_82(32768))
				{
					func_374(cParam0, 524288);
				}
				if (func_120(cParam0, 4))
				{
					if (!func_8(cParam0, 4))
					{
						func_915(cParam0, iVar0);
						func_99(cParam0, 4);
					}
					func_916(cParam0);
					func_917(cParam0, iVar0, 1);
				}
				else
				{
					func_917(cParam0, iVar0, 1);
				}
			}
			break;
		case 1:
			if (func_882(cParam0))
			{
				if (func_918(cParam0))
				{
					if (func_8(cParam0, 4))
					{
						func_880(cParam0, 4);
					}
					func_917(cParam0, iVar0, 2);
				}
			}
			else if (func_919(cParam0) >= cParam0->f_13144)
			{
				if (func_8(cParam0, 4))
				{
					func_880(cParam0, 4);
				}
				func_917(cParam0, iVar0, 2);
			}
			break;
		case 2:
			if (func_913(cParam0, iVar0, 2))
			{
				if (!func_920(cParam0))
				{
					func_917(cParam0, iVar0, 4);
					if (func_921(cParam0, iVar0, iVar1))
					{
						func_917(cParam0, iVar0, 5);
					}
				}
				else
				{
					func_922(cParam0);
					func_917(cParam0, iVar0, 3);
					if (func_923(cParam0, iVar0))
					{
						func_917(cParam0, iVar0, 4);
						if (func_921(cParam0, iVar0, iVar1))
						{
							func_917(cParam0, iVar0, 5);
						}
					}
				}
			}
			else if (func_924(cParam0))
			{
				func_923(cParam0, iVar0);
			}
			break;
		case 3:
			if (func_923(cParam0, iVar0))
			{
				func_917(cParam0, iVar0, 4);
				if (func_921(cParam0, iVar0, iVar1))
				{
					func_917(cParam0, iVar0, 5);
				}
			}
			break;
		case 4:
			if (func_921(cParam0, iVar0, iVar1))
			{
				func_917(cParam0, iVar0, 5);
			}
			break;
		case 5:
			if (!func_20() == 0)
			{
				func_925(cParam0);
				func_926(cParam0, iVar0);
				func_927(cParam0);
				func_928(cParam0);
				if (func_121(cParam0, iVar1, 2))
				{
					if (func_929(cParam0, iVar1))
					{
						func_930(cParam0, iVar1);
					}
				}
			}
			if (func_913(cParam0, iVar0, 5))
			{
				if (func_913(cParam0, iVar0, 7))
				{
					if (!func_121(cParam0, func_33(cParam0), 67108864))
					{
						func_931(cParam0, func_33(cParam0));
					}
					func_932(cParam0, iVar1);
					func_905(cParam0);
					return true;
				}
				else
				{
					func_917(cParam0, iVar0, 7);
				}
			}
			else
			{
				if (!func_121(cParam0, func_33(cParam0), 4194304))
				{
					if ((!is_screen_faded_in() && !is_screen_fading_in()) && !func_121(cParam0, func_33(cParam0), 16))
					{
						do_screen_fade_in(0);
						func_933(0);
					}
					func_140(cParam0, func_33(cParam0), 4194304);
				}
				if ((func_934(get_player_index(), 0, 0, 1) && !func_120(cParam0, 8192)) && !func_121(cParam0, func_33(cParam0), 8))
				{
					func_47(1, 0);
					func_935("MISSION_WANTED", 7500, 0, 1, 0, 0, -1, -1, 0);
					if (func_936(cParam0))
					{
						func_917(cParam0, iVar0, 6);
					}
				}
				if (func_8(cParam0, 268435456))
				{
					if (_0x1b065a2bf7953815(1) != 1)
					{
						func_36(cParam0, func_34(iVar0), func_34(iVar1), iVar0, iVar1);
						func_880(cParam0, 268435456);
					}
				}
				if (func_120(cParam0, 1048576))
				{
					if (func_127(func_34(0)))
					{
						func_259(cParam0, 1048576);
					}
				}
			}
			break;
		case 6:
			if (!func_20() == 0)
			{
				func_925(cParam0);
				func_926(cParam0, iVar0);
				func_927(cParam0);
				func_928(cParam0);
				if (func_121(cParam0, func_35(cParam0), 2))
				{
					if (func_929(cParam0, func_35(cParam0)))
					{
						func_930(cParam0, func_35(cParam0));
					}
				}
			}
			if ((!func_934(get_player_index(), 0, 0, 1) || func_120(cParam0, 8192)) || func_121(cParam0, func_33(cParam0), 8))
			{
				if (func_913(cParam0, iVar0, 5))
				{
					if (func_937(cParam0))
					{
						func_917(cParam0, iVar0, 7);
					}
				}
				else
				{
					func_937(cParam0);
					func_917(cParam0, iVar0, 5);
				}
			}
			else
			{
				func_913(cParam0, iVar0, 5);
				func_938(cParam0);
			}
			break;
		case 7:
			if (func_913(cParam0, iVar0, 7))
			{
				if (!func_121(cParam0, func_33(cParam0), 67108864))
				{
					func_931(cParam0, func_33(cParam0));
				}
				func_932(cParam0, iVar1);
				func_905(cParam0);
				return true;
			}
			break;
		default:
			func_917(cParam0, iVar0, 7);
			break;
	}
	return false;
}

void func_432(bool bParam0)
{
	if (func_435(Global_35, 0))
	{
		_set_ped_infinite_ammo_clip(Global_35, bParam0);
	}
}

void func_433(bool bParam0)
{
	if (!bParam0)
	{
		func_939(0);
	}
	Global_1935689->f_2 = bParam0;
}

void func_434(bool bParam0)
{
	if (bParam0 == func_940())
	{
		return;
	}
	if (bParam0)
	{
		func_489(81053684);
		if (!func_488(func_196(0)))
		{
			func_489(-525676072);
		}
	}
	else
	{
		func_490(81053684);
		func_490(-525676072);
	}
	Global_1946804->f_2792 = bParam0;
}

bool func_435(int iParam0, int iParam1)
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
	if (func_386(iVar0, 1))
	{
		if (is_ped_fatally_injured(iParam0))
		{
			return false;
		}
	}
	if (func_386(iVar0, 2))
	{
		if (_is_ped_hogtied(iParam0))
		{
			return false;
		}
	}
	if (func_386(iVar0, 8))
	{
		if (get_ped_config_flag(iParam0, 11, false))
		{
			return false;
		}
	}
	if (func_386(iVar0, 16))
	{
		if (!is_ped_on_mount(iParam0) && !is_ped_in_any_vehicle(iParam0, false))
		{
			return false;
		}
	}
	if (func_386(iVar0, 32))
	{
		if (is_entity_in_water(iParam0))
		{
			return false;
		}
	}
	if (func_386(iVar0, 64))
	{
		if (_0xb655db7582aec805(iParam0))
		{
			return false;
		}
	}
	if (func_386(iVar0, 128))
	{
		if (is_ped_ragdoll(iParam0))
		{
			return false;
		}
	}
	if (func_386(iVar0, 256))
	{
		if (!_0xa0bc8faed8cfeb3c(iParam0))
		{
			return false;
		}
	}
	return true;
}

void func_436(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request");
	if (_is_metaped_outfit_request_valid(iVar0))
	{
		_release_metaped_outfit_request(iVar0);
	}
	decor_remove(iParam0, "metaped_outfit_request");
	decor_remove(iParam0, "metaped_outfit_request_name");
}

void func_437(int iParam0, bool bParam1)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_59(iParam0);
	func_524(iParam0);
	func_525(iParam0);
	func_522(iParam0);
	if (func_523(iParam0))
	{
		iVar0 = get_id_of_this_thread();
		if (func_256(iParam0) != iVar0)
		{
			return;
		}
	}
	func_941(iParam0, 4);
	if (bParam1)
	{
		func_941(iParam0, 16);
	}
}

void func_438(var uParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 <= (*uParam0 - 1))
	{
		if (bParam1)
		{
			func_942((*uParam0)[iVar0], 1, 0, 1);
		}
		else
		{
			func_943((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_439(int iParam0, bool bParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_944(iParam0))
	{
		return false;
	}
	if (!func_945(iParam0) && bParam1)
	{
		return false;
	}
	return func_946(iParam0, 1);
}

void func_440(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_944(iParam0))
	{
		return;
	}
	if (!func_946(iParam0, 1))
	{
		return;
	}
	if (!func_946(iParam0, 2))
	{
		return;
	}
	if ((!bParam4 && !func_945(iParam0)) && func_947(iParam0))
	{
		return;
	}
	func_948(iParam0, 1);
	func_949(iParam0);
	if (func_951(func_950(iParam0)))
	{
		iVar0 = func_952(iParam0);
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
		func_948(iParam0, 16);
	}
	if (func_946(iParam0, 128) && !bParam3)
	{
		func_953(iParam0, 0);
	}
}

void func_441(char* sParam0, char* sParam1)
{
	if (is_scenario_group_enabled(sParam1))
	{
		set_scenario_group_enabled(sParam1, false);
	}
	if (!is_scenario_group_enabled(sParam0))
	{
		set_scenario_group_enabled(sParam0, true);
		force_scenario_group_priority(sParam0, 1);
	}
}

void func_442(char* sParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!is_scenario_group_enabled(sParam0))
		{
			set_scenario_group_enabled(sParam0, true);
		}
	}
	else if (is_scenario_group_enabled(sParam0))
	{
		set_scenario_group_enabled(sParam0, false);
	}
}

int func_443(char[4] cParam0, int iParam1, bool bParam2)
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
			if (!decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_954()) && get_entity_model(iVar1) == iParam1)
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

void func_444(int* iParam0)
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

void func_445(int iParam0, bool bParam1)
{
	if (!is_itemset_valid(Local_14.f_118))
	{
		Local_14.f_118 = create_itemset(true);
	}
	if (!does_entity_exist(&(Local_14.f_119[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_119[0] = create_object(-1970375879, 2690.961f, -1111.024f, 48.9121f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_119[0]), 0f, 0f, 177.9751f, 2, true);
		freeze_entity_position(&(Local_14.f_119[0]), bParam1);
	}
	func_955(&(Local_14.f_119[0]), Local_14);
	func_955(&(Local_14.f_119[0]), Local_14.f_118);
	if (!does_entity_exist(&(Local_14.f_119[1])) && (iParam0 == -1 || iParam0 == 1))
	{
		Local_14.f_119[1] = create_object(-1543503143, 2690.021f, -1112.87f, 48.9029f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_119[1]), 0f, 0f, -98.0252f, 2, true);
		freeze_entity_position(&(Local_14.f_119[1]), bParam1);
	}
	func_955(&(Local_14.f_119[1]), Local_14);
	func_955(&(Local_14.f_119[1]), Local_14.f_118);
	if (!does_entity_exist(&(Local_14.f_119[2])) && (iParam0 == -1 || iParam0 == 2))
	{
		Local_14.f_119[2] = create_object(-1786946391, 2690.393f, -1112.239f, 48.9029f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_119[2]), 0f, 0f, 179.9751f, 2, true);
		freeze_entity_position(&(Local_14.f_119[2]), bParam1);
	}
	func_955(&(Local_14.f_119[2]), Local_14);
	func_955(&(Local_14.f_119[2]), Local_14.f_118);
	if (!does_entity_exist(&(Local_14.f_119[3])) && (iParam0 == -1 || iParam0 == 3))
	{
		Local_14.f_119[3] = create_object(1651707011, 2689.211f, -1113.914f, 53.6104f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_119[3]), 0f, 90f, -92f, 2, true);
		freeze_entity_position(&(Local_14.f_119[3]), bParam1);
	}
	func_955(&(Local_14.f_119[3]), Local_14);
	func_955(&(Local_14.f_119[3]), Local_14.f_118);
}

void func_446(int iParam0, bool bParam1)
{
	if (!is_itemset_valid(Local_14.f_115))
	{
		Local_14.f_115 = create_itemset(true);
	}
	if (!does_entity_exist(&(Local_14.f_116[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_116[0] = create_object(70776250, 2689.752f, -1151.268f, 59.6555f, true, true, false, false, true);
		set_entity_rotation(&(Local_14.f_116[0]), 0f, 0f, -74.0358f, 2, true);
		freeze_entity_position(&(Local_14.f_116[0]), bParam1);
	}
	func_955(&(Local_14.f_116[0]), Local_14);
	func_955(&(Local_14.f_116[0]), Local_14.f_115);
}

void func_447(bool bParam0)
{
	vVar0 = { 2690.5f, -1151.3f, 59.675f };
	vVar3 = { 90f, 0f, 160f };
	if (bParam0)
	{
		func_412(&iVar6, 2);
		if (!does_pickup_exist(iVar635))
		{
			iLocal_638 = create_pickup_rotate(1875878693, vVar0, vVar3, iVar6, 60, 2, true, 0, 0, 0f, 0);
		}
	}
	else if (!does_entity_exist(iVar631))
	{
		iLocal_634 = _create_weapon_object(iVar418, 10, vVar0, true, 1f);
		set_entity_coords(iVar631, vVar0, true, false, true, true);
		set_entity_rotation(iVar631, vVar3, 2, true);
		freeze_entity_position(iVar631, true);
	}
}

void func_448(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_444((*uParam0)[iVar0]);
		iVar0++;
	}
}

void func_449(int* iParam0, bool bParam1, bool bParam2)
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

float func_450(int iParam0, int iParam1)
{
	return func_956(iParam0, iParam1);
}

void func_451(vector3 vParam0, float fParam3, bool bParam4)
{
	iVar0 = 16384;
	if (bParam4)
	{
		iVar0 |= 524288;
	}
	clear_area(vParam0, fParam3, iVar0);
}

void func_452(int iParam0)
{
	if (_does_volume_exist(iParam0))
	{
		_delete_volume(iParam0);
	}
}

void func_453(vector3 vParam0, float fParam3, int iParam4, int iParam5, int iParam6)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_957(vVar0, vVar3, 0f) };
	vVar9 = { func_958(vVar0, vVar3, 0f) };
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

void func_454(vector3 vParam0, float fParam3, int iParam4)
{
	vVar3 = { _get_object_offset_from_coords(vParam0, 0f, fParam3, fParam3, fParam3) };
	vVar0 = { _get_object_offset_from_coords(vParam0, 0f, -fParam3, -fParam3, -fParam3) };
	vVar6 = { func_957(vVar0, vVar3, 0f) };
	vVar9 = { func_958(vVar0, vVar3, 0f) };
	if (iParam4 == 5)
	{
		set_roads_back_to_original(vVar6, vVar9, 0, 1);
	}
	else
	{
		_0x6c3f12eceb6d2e2a(vVar6, vVar9, iParam4, 1);
	}
}

int func_455(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!_does_volume_exist(iParam0))
	{
		return uVar0;
	}
	func_959(iParam0, bParam2);
	_0x18262cafebb5fbe1(iParam0, iParam3, 0, 0, -1, -1, 0);
	_0xb56d41a694e42e86(iParam0, iParam3, 0, 0, -1, -1, 2);
	uVar0 = _0x4c39c95ae5db1329(iParam0, bParam2, 15);
	return uVar0;
}

void func_456(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	set_bit(Global_1934765->f_21[iVar1], iVar2);
}

void func_457(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	clear_bit(Global_1934765->f_21[iVar1], iVar2);
}

void func_458(float fParam0)
{
	func_960(ceil((to_float(300) - (to_float(300) * fParam0))));
}

int func_459(int iParam0)
{
	if (!func_944(iParam0))
	{
		return 0;
	}
	if (!func_951(func_950(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_952(iParam0)))
	{
		return 0;
	}
	if (network_is_in_session())
	{
		if (!network_has_control_of_entity(_0x31c70a716cae1fee(func_952(iParam0))))
		{
			return 1;
		}
	}
	iVar0 = _0x31c70a716cae1fee(func_952(iParam0));
	if (does_entity_exist(iVar0))
	{
		if (!_0x88ad6cc10d8d35b2(iVar0))
		{
			set_entity_as_mission_entity(iVar0, true, true);
		}
	}
	_0x7b204f88f6c3d287(func_952(iParam0));
	return 1;
}

void func_460(int iParam0, bool bParam1)
{
	if (!func_241(iParam0))
	{
		return;
	}
	iVar1 = 0;
	while (iVar1 < 35)
	{
		iVar0 = func_961(iParam0, iVar1);
		if (func_962(iVar0))
		{
			func_963(iVar0, bParam1);
		}
		iVar1++;
	}
}

void func_461(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_941(iParam0, 64);
	func_262();
}

void func_462(int iParam0, bool bParam1, bool bParam2)
{
	if (!bParam2)
	{
	}
	switch (iParam0)
	{
		case 1497516462:
			func_964(1497516462);
			func_965(2016141805);
			func_965(1010885152);
			func_965(-502324015);
			break;
		case 2016141805:
			func_965(1497516462);
			func_964(2016141805);
			func_965(1010885152);
			func_965(-502324015);
			break;
		case 1010885152:
			func_965(1497516462);
			func_965(2016141805);
			func_964(1010885152);
			func_965(-502324015);
			break;
		case -502324015:
			func_965(1497516462);
			func_965(2016141805);
			func_965(1010885152);
			func_964(-502324015);
			break;
		case -1056767524:
		case -538889627:
		case -538880323:
			func_965(-538889627);
			func_965(-538880323);
			func_965(-1056767524);
			func_964(iParam0);
			break;
		case -2038424081:
		case -1187950766:
		case -939420910:
		case 356365161:
		case 459290420:
		case 753127042:
		case 1884271742:
			func_966();
			func_964(iParam0);
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
			func_967();
			func_964(iParam0);
			break;
		case 2019386373:
			func_965(-664252410);
			func_965(2109952320);
			func_964(2019386373);
			break;
		case -664252410:
			func_965(2019386373);
			func_965(2109952320);
			func_964(-664252410);
			break;
		case 2109952320:
			func_965(2019386373);
			func_965(-664252410);
			func_964(2109952320);
			break;
		case -1674179981:
			func_965(-1835851517);
			func_965(-1838352012);
			func_964(-1674179981);
			break;
		case -1835851517:
			func_965(-1674179981);
			func_965(-1838352012);
			func_964(-1835851517);
			break;
		case -1838352012:
			func_965(-1674179981);
			func_965(-1835851517);
			func_964(-1838352012);
			break;
		case -1717960576:
			func_965(210001842);
			func_964(-1717960576);
			break;
		case 210001842:
			func_965(-1717960576);
			func_964(210001842);
			break;
		case -150493654:
			func_965(-1271608261);
			func_965(1846061697);
			func_965(-1145519186);
			func_964(-150493654);
			break;
		case -1271608261:
			func_965(-150493654);
			func_965(1846061697);
			func_965(-1145519186);
			func_964(-1271608261);
			break;
		case 1846061697:
			func_965(-150493654);
			func_965(-1271608261);
			func_965(-1145519186);
			func_964(1846061697);
			break;
		case -1145519186:
			func_965(-150493654);
			func_965(-1271608261);
			func_965(1846061697);
			func_964(-1145519186);
			break;
		case 1766284049:
			func_965(280705402);
			func_965(1926308480);
			func_964(1766284049);
			break;
		case 280705402:
			func_965(1766284049);
			func_965(1926308480);
			func_964(280705402);
			break;
		case 1926308480:
			func_965(1766284049);
			func_965(280705402);
			func_964(1926308480);
			break;
		case 1609506757:
			if (bParam1)
			{
				func_965(439465264);
				func_964(1609506757);
			}
			else
			{
				func_965(1609506757);
				func_965(439465264);
			}
			break;
		case 439465264:
			if (func_487(1609506757))
			{
				if (bParam1)
				{
					func_964(439465264);
				}
				else
				{
					func_965(439465264);
				}
			}
			break;
		case 1822001510:
			func_965(-1612662716);
			func_964(1822001510);
			break;
		case -1612662716:
			func_965(1822001510);
			func_964(-1612662716);
			break;
		case 1306158345:
			func_965(1952610440);
			func_965(-223469678);
			func_965(-404698347);
			func_965(1517904467);
			func_964(1306158345);
			break;
		case 1952610440:
			func_965(1306158345);
			func_965(-223469678);
			func_965(-404698347);
			func_965(1517904467);
			func_964(1952610440);
			break;
		case -223469678:
			func_965(1306158345);
			func_965(1952610440);
			func_965(-404698347);
			func_965(1517904467);
			func_964(-223469678);
			break;
		case -404698347:
			func_965(1306158345);
			func_965(1952610440);
			func_965(-223469678);
			func_965(1517904467);
			func_964(-404698347);
			break;
		case 1517904467:
			func_965(1306158345);
			func_965(1952610440);
			func_965(-223469678);
			func_965(-404698347);
			func_964(1517904467);
			break;
		case 1376646519:
			func_965(931649776);
			func_965(-434590080);
			func_965(1743048395);
			func_965(449774763);
			func_964(1376646519);
			break;
		case 931649776:
			func_965(1376646519);
			func_965(-434590080);
			func_965(1743048395);
			func_965(449774763);
			func_964(931649776);
			break;
		case -434590080:
			func_965(1376646519);
			func_965(931649776);
			func_965(1743048395);
			func_965(449774763);
			func_964(-434590080);
			break;
		case 1743048395:
			func_965(1376646519);
			func_965(931649776);
			func_965(-434590080);
			func_965(449774763);
			func_964(1743048395);
			break;
		case 449774763:
			func_965(1376646519);
			func_965(931649776);
			func_965(-434590080);
			func_965(1743048395);
			func_964(449774763);
			break;
		case -1414537028:
			func_965(38162571);
			func_965(1350391819);
			func_965(54073871);
			func_964(-1414537028);
			break;
		case 38162571:
			func_965(-1414537028);
			func_965(1350391819);
			func_965(54073871);
			func_964(38162571);
			break;
		case 1350391819:
			func_965(-1414537028);
			func_965(38162571);
			func_965(54073871);
			func_964(1350391819);
			break;
		case 54073871:
			func_965(-1414537028);
			func_965(38162571);
			func_965(1350391819);
			func_964(54073871);
			break;
		case 198200492:
			func_964(198200492);
			func_965(-1124061431);
			func_965(52706132);
			func_965(-259123672);
			break;
		case -1124061431:
			func_965(198200492);
			func_964(-1124061431);
			func_965(52706132);
			func_965(-259123672);
			break;
		case 52706132:
			func_965(198200492);
			func_965(-1124061431);
			func_964(52706132);
			func_965(-259123672);
			break;
		case -259123672:
			func_965(198200492);
			func_965(-1124061431);
			func_965(52706132);
			func_964(-259123672);
			break;
		case -919512195:
			func_964(-919512195);
			func_965(-1925798111);
			func_965(420709909);
			func_965(1703426636);
			break;
		case -1925798111:
			func_964(-1925798111);
			func_965(-919512195);
			func_965(420709909);
			func_965(1703426636);
			break;
		case 420709909:
			func_964(420709909);
			func_965(-919512195);
			func_965(-1925798111);
			func_965(1703426636);
			break;
		case 1703426636:
			func_964(1703426636);
			func_965(-919512195);
			func_965(-1925798111);
			func_965(420709909);
			break;
		case -1223121209:
			func_964(-1223121209);
			func_965(630808005);
			break;
		case 630808005:
			func_964(630808005);
			func_965(-1223121209);
			break;
		case 1453909576:
			func_964(1453909576);
			func_965(1643531967);
			break;
		case 1643531967:
			func_964(1643531967);
			func_965(1453909576);
			break;
		case 0:
			func_964(0);
			func_965(473295046);
			func_965(-1738165526);
			break;
		case 473295046:
			func_964(473295046);
			func_965(0);
			func_965(-1738165526);
			break;
		case -1738165526:
			func_964(-1738165526);
			func_965(0);
			func_965(473295046);
			break;
		case 932909855:
			func_964(932909855);
			func_965(2051822093);
			break;
		case 2051822093:
			func_964(2051822093);
			func_965(932909855);
			break;
		case 405586984:
			func_964(405586984);
			func_965(1509509592);
			func_965(-959357075);
			func_965(-1311865656);
			break;
		case 1509509592:
			func_964(1509509592);
			func_965(405586984);
			func_965(-959357075);
			func_965(-1311865656);
			break;
		case -959357075:
			func_964(-959357075);
			func_965(1509509592);
			func_965(405586984);
			func_965(-1311865656);
			break;
		case -1311865656:
			func_964(-1311865656);
			func_965(1509509592);
			func_965(-959357075);
			func_965(405586984);
			break;
		case -524145696:
			if (bParam1)
			{
				func_964(-524145696);
			}
			else
			{
				func_965(-524145696);
			}
			func_965(1626481264);
			func_965(282809459);
			break;
		case 282809459:
			func_964(282809459);
			func_965(1626481264);
			func_965(-524145696);
			break;
		case 1626481264:
			func_964(1626481264);
			func_965(-524145696);
			func_965(282809459);
			break;
		case 885203519:
			if (bParam1)
			{
				func_964(885203519);
			}
			else
			{
				func_965(885203519);
			}
			break;
		case -1080627546:
			if (bParam1)
			{
				func_964(-1080627546);
			}
			else
			{
				func_965(-1080627546);
			}
			break;
		default:
			if (bParam1)
			{
				if (!func_487(iParam0))
				{
					func_964(iParam0);
				}
			}
			else if (func_487(iParam0))
			{
				func_965(iParam0);
			}
			break;
	}
}

void func_463()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (&Global_1934765->f_275[iVar0] == get_id_of_this_thread())
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + Global_1934765->f_275[iVar0]->f_1);
			Global_1934765->f_275[iVar0] = 0;
			Global_1934765->f_275[iVar0]->f_1 = 0;
			func_968();
			return;
		}
		iVar0++;
	}
}

int func_464(int iParam0)
{
	if (!func_944(iParam0))
	{
		return 0;
	}
	if (!func_951(func_950(iParam0)))
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_952(iParam0)))
	{
		return 0;
	}
	_0x4f81ead1de8fa19b(func_952(iParam0));
	return 1;
}

void func_465(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_261(iParam0, 64);
	func_262();
}

void func_466()
{
	_0x949b2f9ed2917f5d(Global_35, 8);
	_0x949b2f9ed2917f5d(Global_35, 22);
	_0x949b2f9ed2917f5d(Global_35, 23);
	_0x949b2f9ed2917f5d(Global_35, 21);
	_0x949b2f9ed2917f5d(Global_35, 10);
	_0x949b2f9ed2917f5d(Global_35, 7);
	_0x949b2f9ed2917f5d(Global_35, 15);
	_0x949b2f9ed2917f5d(Global_35, 16);
	_0x949b2f9ed2917f5d(Global_35, 17);
	_0x949b2f9ed2917f5d(Global_35, 28);
	_0x949b2f9ed2917f5d(Global_35, 4);
	_0x789dabd18e9024db(Global_35, 0, 1);
	set_ped_config_flag(Global_35, 43, false);
	set_ped_config_flag(Global_35, 258, false);
	set_ped_config_flag(Global_35, 254, false);
	set_ped_config_flag(Global_35, 20, false);
}

void func_467(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, float fParam5, int iParam6, bool bParam7)
{
	func_969(iParam0, 0, 0);
	if (func_970(iParam0))
	{
		door_system_set_open_ratio(iParam0, iParam2, iParam6);
		if (fParam5 > 0f)
		{
			door_system_set_automatic_rate(iParam0, fParam5);
		}
		if (bParam3)
		{
			func_971(iParam0, iParam2, 1, iParam6);
		}
		else if (bParam1)
		{
			if (bParam4)
			{
				func_972(iParam0, 1);
			}
			else
			{
				func_973(iParam0, 1);
			}
		}
		else
		{
			func_974(iParam0, 1);
		}
		if (bParam7)
		{
			_0x276aaf0f1c7f2494(iParam0, 1);
		}
	}
	else if (func_975())
	{
	}
	else if (network_is_in_session())
	{
	}
}

void func_468(int iParam0, int iParam1, bool bParam2)
{
	func_969(iParam0, 0, 0);
	if (func_970(iParam0))
	{
		if (door_system_get_door_state(iParam0) != iParam1 || bParam2)
		{
			door_system_set_door_state(iParam0, iParam1);
		}
	}
}

void func_469(char* sParam0, char* sParam1, bool bParam2, int iParam3)
{
	if (bParam2)
	{
		start_audio_scene(sParam0);
		set_audio_scene_variable(sParam0, sLocal_179, 1f);
		if (does_entity_exist(iParam3))
		{
			add_entity_to_audio_mix_group(iParam3, sParam1, 1f);
		}
	}
	else
	{
		stop_audio_scene(sParam0);
		if (does_entity_exist(iParam3))
		{
			remove_entity_from_audio_mix_group(iParam3, 0f);
		}
	}
}

void func_470(bool bParam0)
{
	if (bParam0)
	{
		play_stream_from_position(func_381(1, 7), uVar254);
	}
	else
	{
		stop_stream(uVar254);
	}
}

void func_471(int* iParam0, bool bParam1)
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
		func_976(iParam0);
		delete_vehicle(iParam0);
	}
}

void func_472(int* iParam0)
{
	if (does_blip_exist(*iParam0))
	{
		remove_blip(iParam0);
	}
}

void func_473(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < *iParam0)
	{
		func_472((*iParam0)[iVar0]);
		iVar0++;
	}
}

void func_474(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	func_977(Global_1393447, 1);
	func_978();
	func_979();
	func_980((to_float(200) / 3f));
	if (iParam0 != 8)
	{
		Global_1392135->f_54 = (func_499() / 1000);
		if (Global_1392135->f_1 & 4 != 0)
		{
			Global_1392135->f_1 = (Global_1392135->f_1 - Global_1392135->f_1 & 4);
		}
		func_981();
		if (iParam1 == -1)
		{
			if (func_982(iParam0, 1))
			{
				func_287(16777216, 2, 0, 1);
				iVar0 = floor(240f);
			}
			else if (func_982(iParam0, 2))
			{
				func_287(16777216, 0, 0, 1);
				iVar0 = floor(60f);
			}
			else if (func_982(iParam0, 4))
			{
				func_287(16777216, 5, 0, 1);
				iVar0 = floor(900f);
			}
			Global_1392135->f_4 = (Global_1392135->f_54 + iVar0);
		}
		else
		{
			func_983(iParam1, iParam2, iParam3, iParam4);
			Global_1392135->f_5[iParam1] = (((Global_1392135->f_54 + iParam2) + iParam3 * 60) + iParam4 * 3600);
		}
		func_288(to_float(iVar0), 1, 0);
	}
	else
	{
		func_288((to_float(200) / 3f), 1, 0);
	}
}

bool func_475(int iParam0)
{
	return func_984(iParam0, 2);
}

int func_476(int iParam0)
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

int func_477(int iParam0)
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

int func_478(int iParam0)
{
	return iParam0 & 31;
}

bool func_479()
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

int func_480(int iParam0)
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

int func_481(int iParam0)
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

void func_482(int iParam0, var uParam1)
{
	Var0 = iParam0;
	Var0.f_1 = uParam1;
	network_set_rich_presence(4, &Var0, 2, 2);
}

int func_483()
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

int func_484(int iParam0)
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

void func_485(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_486(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_1 = iParam1;
		return;
	}
	if (iParam1 == 0 || iParam1 == -1)
	{
		func_985(iParam0);
	}
	else
	{
		func_986(iParam0, iParam1);
	}
	func_987();
}

bool func_487(int iParam0)
{
	iVar0 = func_988(iParam0, 1);
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	if (Global_1572887->f_12 == -1)
	{
		return is_bit_set(&(Global_40.f_283[iVar1]), iVar2);
	}
	return is_bit_set(&(Global_1058888->f_40567[iVar1]), iVar2);
}

bool func_488(int iParam0)
{
	if (!func_183(iParam0))
	{
		return false;
	}
	switch (func_188(iParam0))
	{
		case 1:
			switch (func_266(iParam0))
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
			switch (func_266(iParam0))
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

void func_489(int iParam0)
{
	iVar2 = func_989(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_602(iVar1) == iParam0)
		{
			_0x6a564540fac12211(iVar2, iVar1);
		}
		iVar0++;
	}
	func_991(func_990(iParam0), 6);
}

void func_490(int iParam0)
{
	iVar2 = func_989(0);
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_602(iVar1) == iParam0)
		{
			_0x766315a564594401(iVar2, iVar1, 0);
		}
		iVar0++;
	}
	func_992(func_990(iParam0), 6);
}

int func_491(int iParam0)
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

int func_492(int iParam0)
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
	func_993(iParam0, Global_1898164->f_162);
	return 1;
}

bool func_493(int iParam0)
{
	return iParam0 != 0;
}

bool func_494(int iParam0)
{
	if (iParam0 != -1)
	{
		return true;
	}
	return false;
}

void func_495(int iParam0, var uParam1)
{
	if (!func_494(iParam0))
	{
		return;
	}
	if (*uParam1 == -1600776215)
	{
		return;
	}
	func_994(iParam0, *uParam1, 0);
	func_995(uParam1);
	Global_1935183->f_24 = 1;
}

void func_496(char* sParam0, int iParam1)
{
	sParam0->f_8 = (sParam0->f_8 || iParam1);
}

void func_497(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_550() - fParam1);
	func_996(uParam0, 1);
	func_997(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_498(var uParam0)
{
	return func_212(*uParam0, 2);
}

int func_499()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_500(bool bParam0)
{
	if (func_998())
	{
		Global_1357509 = 1;
	}
	if (func_999(-92416669))
	{
	}
	if (bParam0 && Global_1935630->f_44 == -1016714371)
	{
		set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
		Global_1935630->f_44 = -1569615261;
	}
}

struct<4> func_501(int iParam0, int iParam1)
{
	Var0 = { func_790(iParam0, iParam1) };
	Var0.f_3 = func_956(iParam0, iParam1);
	return Var0;
}

int func_502(int iParam0)
{
	if (func_188(iParam0) == 1)
	{
		return func_266(iParam0);
	}
	return -1;
}

int func_503(int iParam0)
{
	if (func_188(iParam0) == 8)
	{
		return func_266(iParam0);
	}
	return -1;
}

char[] func_504(int iParam0)
{
	if (!func_267(iParam0))
	{
		return uVar0;
	}
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return uVar0;
}

void func_505(int iParam0, bool bParam1)
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
		func_1000(1, bParam1);
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
		(*Global_2621440)[iParam0]->f_9.f_14 = func_279();
	}
}

void func_506(int iParam0, vector3 vParam1, var uParam4)
{
	(*Global_2621440)[iParam0]->f_9.f_7 = { vParam1 };
	(*Global_2621440)[iParam0]->f_9.f_13 = uParam4;
	(*Global_2621440)[iParam0]->f_9 = 5;
	(*Global_2621440)[iParam0]->f_9.f_15 = func_366(vParam1, 1);
}

bool func_507(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 13)
	{
		return false;
	}
	return true;
}

bool func_508(int iParam0)
{
	return Global_43884 == iParam0;
}

void func_509(bool bParam0)
{
	Global_1935496->f_18 = !bParam0;
}

bool func_510(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 120);
}

void func_511(int iParam0)
{
	Global_1310750->f_16035 = (Global_1310750->f_16035 - (Global_1310750->f_16035 && iParam0));
}

bool func_512(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_513()
{
	return Global_1109400->f_245;
}

bool func_514(var uParam0, int iParam1)
{
	return func_386(uParam0->f_64, iParam1);
}

bool func_515(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 27)
	{
		return false;
	}
	return true;
}

bool func_516(int iParam0)
{
	return func_711(iParam0, 16, 1);
}

void func_517(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_1001(cParam0, iParam1, &iVar0))
	{
		return;
	}
	if (is_entity_an_object(iParam1) && func_1002(cParam0, get_object_index_from_entity_index(iParam1)))
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

void func_518(int iParam0)
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

void func_519(int iParam0)
{
	func_1003(iParam0, 8, 0);
}

void func_520(int iParam0, bool bParam1)
{
	if (!func_1004(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		if (func_1005(&((*Global_1360165)[iParam0]->f_12), 1))
		{
			func_1003(iParam0, 1, 0);
		}
	}
	func_1003(iParam0, 16, bParam1);
}

void func_521(int iParam0, bool bParam1, bool bParam2, bool bParam3, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (!func_515(iParam0))
	{
		return;
	}
	if (func_516(iParam0))
	{
		if ((*Global_1360165)[iParam0]->f_129 != 0 && (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread())
		{
			return;
		}
	}
	if (bParam10)
	{
		func_1006(iParam0, 56, 1);
		func_27(&(Global_1359489->f_40), 1);
	}
	func_520(iParam0, 0);
	func_1003(iParam0, 4, 0);
	func_519(iParam0);
	func_1007(iParam0);
	func_1008(iParam0, 37, 1);
	bVar0 = func_435(Global_1360165[iParam0], 0);
	iVar1 = func_1009(iParam0, 0);
	bVar2 = _0x800df3fc913355f3(iVar1);
	if (get_ped_config_flag(Global_1360165[iParam0], 503, true) && Global_1359489->f_16 & 8388608 == 0)
	{
		set_ped_config_flag(Global_1360165[iParam0], 503, false);
	}
	if (func_1010(iParam0, 64, 1))
	{
		func_1008(iParam0, 64, 1);
	}
	if (bParam3)
	{
		func_1008(iParam0, 33, 1);
		func_1008(iParam0, 34, 1);
		func_1011(iParam0, 1056964608, -1, 1061158912);
		func_1012(iParam0, 1, 1, 0);
		if (bParam6)
		{
			func_1006(iParam0, 30, 1);
		}
		if (bParam7)
		{
			func_1006(iParam0, 35, 1);
			if (bParam8)
			{
				func_1006(iParam0, 62, 1);
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
		func_1008(iParam0, 28, 1);
	}
	else
	{
		if (!bVar0)
		{
			set_ped_keep_task(Global_1360165[iParam0], true);
		}
		func_1006(iParam0, 33, 1);
		func_1012(iParam0, 0, 1, 0);
		if (fParam4 > 0f)
		{
			(*Global_1360165)[iParam0]->f_133 = fParam4;
			func_27(&((*Global_1360165)[iParam0]->f_130), 1);
		}
		else
		{
			func_553(&((*Global_1360165)[iParam0]->f_130));
		}
		if (bParam9)
		{
			func_1006(iParam0, 34, 1);
		}
	}
	if (bParam1 || bParam2)
	{
		if (does_entity_exist(Global_1360165[iParam0]))
		{
			func_1014(iParam0, bParam2, bParam2, bParam2, 0);
		}
	}
	else if (bVar0)
	{
		set_ped_can_use_auto_conversation_lookat(Global_1360165[iParam0], false);
	}
	if (func_1010(iParam0, 45, 1))
	{
		func_1008(iParam0, 45, 1);
	}
	func_1015(iParam0, 16, 1);
	func_1008(iParam0, 44, 1);
	(*Global_1360165)[iParam0]->f_129 = 0;
	Global_40.f_4942[iParam0]->f_4 = 0;
	if (bParam5)
	{
		if (func_435(func_1016(iParam0), 0))
		{
			func_1017(0, iParam0, bParam3, 0, bParam2);
		}
	}
}

void func_522(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	iVar0 = func_256(iParam0);
	if (!_does_thread_exist(iVar0))
	{
		func_529(iParam0);
	}
	else if (!is_thread_active(iVar0, false))
	{
		func_529(iParam0);
	}
}

bool func_523(int iParam0)
{
	iParam0 = func_260(iParam0);
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

void func_524(int iParam0)
{
	iParam0 = func_260(iParam0);
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

void func_525(int iParam0)
{
	iParam0 = func_260(iParam0);
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

bool func_526(int iParam0)
{
	if (!func_1018(iParam0))
	{
		return false;
	}
	if (!func_325())
	{
		return true;
	}
	return false;
}

void func_527(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_530(iParam0))
	{
		return;
	}
	iVar0 = func_208(iParam0);
	func_1019(iParam0);
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	iVar1 = get_entity_model(iVar0);
	if (_0xaa9f048dcf69b6dc(iVar1))
	{
		if (!func_526(iVar1))
		{
			set_ped_model_is_suppressed(iVar1, false);
		}
	}
	delete_ped(&iVar0);
	func_1020(iParam0, 0);
	func_529(iParam0);
}

bool func_528(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
	}
	iVar0 = func_255(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	return true;
}

void func_529(int iParam0)
{
	iParam0 = func_260(iParam0);
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

bool func_530(int iParam0)
{
	iParam0 = func_260(iParam0);
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

void func_531(int iParam0)
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
	if (func_1021(iParam0, 64))
	{
		func_524(iParam0);
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
	bVar3 = func_600(42);
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
				func_1022(&((*Global_1900383)[iParam0]->f_27));
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
		func_524(iParam0);
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
		if (func_1023(1) < 1)
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
		func_1024(&((*Global_1900383)[iParam0]->f_26), bVar6);
	}
	if (!does_blip_exist((*Global_1900383)[iParam0]->f_26))
	{
		return;
	}
	bVar8 = false;
	if (func_1021(iParam0, 32))
	{
		bVar8 = true;
	}
	bVar9 = is_ped_in_writhe(iVar0);
	bVar10 = false;
	iVar11 = func_1025(iParam0);
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
	fVar15 = func_1026(vVar12, Global_36);
	bVar16 = false;
	if (fVar15 > func_1027(iParam0))
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
		func_1028((*Global_1900383)[iParam0]->f_26);
		func_1029((*Global_1900383)[iParam0]->f_26);
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
	if (func_871(iVar0) && !bVar9)
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
	iVar21 = func_1023(iParam0);
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

int func_532(int iParam0)
{
	return shift_right(iParam0, 5) & 1023;
}

int func_533(int iParam0)
{
	if ((*Global_1347702)[iParam0]->f_12 & 1 != 0 || (*Global_1347702)[iParam0]->f_12 & 33554432 != 0)
	{
		return 1;
	}
	return 3;
}

int func_534(int iParam0)
{
	uVar0 = (*Global_1347702)[iParam0]->f_3;
	return get_hash_key(&uVar0);
}

void func_535(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (&Global_40.f_490.f_402[iParam0] - (Global_40.f_490.f_402[iParam0] && iParam1));
}

void func_536(int iParam0, int iParam1)
{
	Global_40.f_490.f_402[iParam0] = (Global_40.f_490.f_402[iParam0] || iParam1);
}

bool func_537(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_530(iParam0))
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

void func_538(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	if (!func_530(iParam0))
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

void func_539(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_EARN";
	}
	func_708(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
}

void func_540(int iParam0, bool bParam1, float fParam2, int iParam3, int iParam4)
{
	if (iParam0 <= 0)
	{
		return;
	}
	if (bParam1)
	{
		iVar0 = round((to_float(iParam0) * fParam2));
		iVar1 = ((iParam0 - iVar0) / iParam3);
		if (func_1030())
		{
			iVar2 = floor((to_float(iVar1) * 0.1f));
		}
		iParam0 = (iParam0 + iVar2);
		iVar1 = (iVar1 + iVar2);
		func_708(_create_var_string(2, "FEED_GANG_TOTAL_EARN", iParam0), "ITEMTYPE_TEXTURES", -1957849484, 0, 109029619, 0, 0, 0, 1);
		iParam0 = (iParam0 - iVar0);
		if (iVar0 > 0)
		{
			func_1031(iVar0);
			func_1032(iVar0, 0, 0);
		}
		func_708(_create_var_string(2, "FEED_GANG_PLAYER_EARN", iVar1), "ITEMTYPE_TEXTURES", 1831944558, 0, 109029619, 0, 0, 0, 1);
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

bool func_541(int iParam0)
{
	if (!func_241(iParam0))
	{
		return false;
	}
	return func_245(iParam0, 67108864);
}

void func_542(int iParam0)
{
	StringCopy(&cVar0, func_1033(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1034(cVar0);
	_0x563fcb6620523917(get_hash_key(sVar8), -1482012664);
}

void func_543(int iParam0)
{
	StringCopy(&cVar0, func_1033(iParam0), 64);
	StringConCat(&cVar0, "_OUTLINE", 64);
	sVar8 = func_1034(cVar0);
	iVar9 = get_hash_key(sVar8);
	if (_0xe38450dbcbc70e3d(iVar9, -1305340593) || _0xe38450dbcbc70e3d(iVar9, -1482012664))
	{
		_0x6786d7afac3162b3(iVar9);
	}
}

bool func_544(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_545(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_546(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_547(int iParam0)
{
	if (!func_510(iParam0))
	{
		return true;
	}
	return Global_17504.f_42[iParam0]->f_4 > 0;
}

int func_548(int iParam0)
{
	if (func_510(iParam0))
	{
		return Global_17504.f_42[iParam0]->f_4;
	}
	return 0;
}

int func_549(int iParam0)
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

float func_550()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

void func_551(int iParam0, bool bParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = (((iParam2 + (60 * iParam3)) + (3600 * iParam4)) + (86400 * iParam5));
	if (func_1035(iParam0) == 1 && bParam7)
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

int func_552(int iParam0)
{
	if (!func_1004(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist(Global_1360165[iParam0]))
	{
		(*Global_1360165)[iParam0] = 0;
	}
	return Global_1360165[iParam0];
}

void func_553(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_554(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return func_1036(iParam0);
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

int func_555(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (&Global_40.f_4283.f_6[iVar0] == iParam0)
		{
			func_568(Global_40.f_4283.f_6[iVar0], bParam1, bParam2);
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_556(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_2;
	}
	return -1;
}

void func_557(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_2 = iParam1;
}

int func_558()
{
	return Global_40.f_11095.f_35;
}

void func_559(int iParam0, int iParam1)
{
	if (iParam1 == 1)
	{
		func_1037(iParam0, 0);
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
		func_560(1);
		Global_40.f_11922[0] = iParam0;
	}
}

void func_560(int iParam0)
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
			func_1037(&(Global_40.f_11922[iVar0]), 0);
			Global_40.f_11922[iVar0] = 0;
			iVar1 = 1;
		}
		iVar0++;
	}
	if (iVar1 == 1)
	{
		func_1038(1);
	}
}

bool func_561(int iParam0)
{
	return Global_40.f_490.f_402[iParam0] & 1 != 0;
}

int func_562()
{
	iVar0 = func_1039((*Global_1347702)[9]->f_15);
	iVar1 = func_1039((*Global_1835011)[69]->f_1);
	if (func_1040(iVar0, iVar1, 1))
	{
		return 0;
	}
	return 1;
}

bool func_563(int iParam0)
{
	if (!func_182(iParam0))
	{
		return false;
	}
	return func_321((*Global_1835011)[iParam0]->f_1, 1);
}

int func_564(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 0;
	if (func_1041(Var0, 70005598, &iVar6, 0))
	{
		iVar5 = func_1042(iVar6);
	}
	return iVar5;
}

int func_565(int iParam0)
{
	Var0 = Global_1357549->f_576;
	Var0.f_1 = 0;
	Var0.f_3 = iParam0;
	iVar5 = 1;
	if (func_1043(Var0, -1875502208, &iVar5, 0))
	{
	}
	return iVar5;
}

void func_566(int iParam0, bool bParam1)
{
	func_1044(iParam0, &iVar0, &iVar1);
	if (bParam1)
	{
		set_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
	else
	{
		clear_bit(Global_1357549->f_1848[iVar0], iVar1);
	}
}

bool func_567(int iParam0)
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

void func_568(var uParam0, bool bParam1, bool bParam2)
{
	if (*uParam0 == 176656832)
	{
		return;
	}
	func_566(*uParam0, 0);
	if (bParam1)
	{
		if (bParam2)
		{
			func_569(2, *uParam0);
		}
		else
		{
			func_570(2, *uParam0);
		}
	}
	func_1045(uParam0);
}

void func_569(int iParam0, int iParam1)
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

void func_570(int iParam0, int iParam1)
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

void func_571(int iParam0, int iParam1, bool bParam2)
{
	Global_1327479->f_4 = get_game_timer();
	func_1046(iParam0, iParam1, bParam2);
}

int func_572(int iParam0)
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

int func_573(int iParam0)
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

void func_574(int iParam0, bool bParam1, int iParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7)
{
	iVar0 = func_1047();
	if (iParam3 == 1142025875 || iParam3 == 1587891565)
	{
		if (bParam6)
		{
			iParam0 = func_1048(iParam0);
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
	if (func_600(6))
	{
		iVar2 = 320;
		iVar3 = -320;
		if (!func_1049())
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
	Global_40.f_11095.f_35 = func_303(Global_40.f_11095.f_35, iVar3, iVar2);
	iVar1 = func_1047();
	if ((iVar1 != iVar0 && (iVar1 != 0 || iParam3 == -1091304842)) || bParam7)
	{
		iVar6 = func_1050(iVar1);
		func_1052(func_1051(), 0, 4000);
		func_1053(Global_40.f_11095.f_35);
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
		func_1054(0);
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
				if (iParam0 > func_573(14))
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
					sParam4 = func_1055(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_708(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_708(_create_var_string(2, "PLAYER_HONOR_CHANGE_POS_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_GOOD"), 0, 109029619, "Honor_Display_Sounds", sVar7, 0, 1);
				}
			}
		}
		else
		{
			func_95(func_94(-1636809477), 1);
			Global_1347477->f_204 = 0;
			if (!bParam1)
			{
				if (iParam0 < func_573(4))
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
					sParam4 = func_1055(iParam3);
				}
				if (is_string_null_or_empty(sParam4))
				{
					func_708(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
				}
				else
				{
					func_708(_create_var_string(2, "PLAYER_HONOR_CHANGE_NEG_EVENT"), "ITEMTYPE_TEXTURES", get_hash_key("TRANSACTION_HONOR_BAD"), 1, 859817522, "Honor_Display_Sounds", sVar7, 0, 1);
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
		func_356(10, 1);
	}
}

void func_575(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	Global_1347477->f_155[iParam0] = iParam1;
	Global_1347477->f_155[iParam0]->f_2 = iParam2;
	Global_1347477->f_155[iParam0]->f_3 = iParam3;
	Global_1347477->f_155[iParam0]->f_4 = iParam4;
	Global_1347477->f_155[iParam0]->f_5 = bParam5;
	Global_1347477->f_155[iParam0]->f_1 = get_game_timer() + 500;
}

int func_576(int iParam0)
{
	return shift_right(iParam0, 15) & 16383;
}

int func_577(int iParam0)
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

bool func_578(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

bool func_579(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_20() == -1)
	{
		if (func_1056(iParam0) && func_1057(iParam0))
		{
			func_1058(iParam0, iParam1, 1, &bParam2, iParam3);
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

bool func_580(int iParam0, int iParam1, int iParam2)
{
	*iParam1 = iParam2;
	func_1059(iParam0, iParam1);
	Var0 = { func_689(iParam0, 0, 1) };
	iVar5 = func_1060(iParam0, &Var0, 0, 0);
	iVar6 = func_1061(iParam0, 0);
	if ((iVar5 > 1 && !func_129()) && (iVar6 + iParam2) >= iVar5)
	{
		if (func_598(iParam0, -2051813666))
		{
			func_319(583, 1);
		}
		else
		{
			func_319(582, 0);
		}
	}
	if (func_1062(iParam0, &Var0, *iParam1, 0, 0))
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

void func_581(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		return;
	}
	switch (func_659(iParam0, -949239683))
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

int func_582(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_578(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_597(iParam0);
	if (iVar0 == 307971639 || (bParam1 && iVar0 == -427144552))
	{
		iVar1 = func_1063(iParam0, 1);
		if (iVar1 != 0)
		{
			return get_ped_ammo_by_type(Global_35, iVar1);
		}
	}
	else if (iVar0 == -427144552)
	{
		return func_1064(iParam0, 0);
	}
	iVar2 = _0xe787f05dfc977bde(func_989(bParam2), iParam0, 0);
	return iVar2;
}

bool func_583(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_584(iParam0) != 0;
}

int func_584(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1065())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_1066(iVar0))
		{
			return iVar0;
		}
		iVar1++;
	}
	return 0;
}

int func_585(int iParam0)
{
	return _0x6052b4de6657684f(iParam0);
}

int func_586(int iParam0)
{
	iVar1 = 0;
	while (iVar1 < func_1065())
	{
		iVar0 = _0x126cbebba46693cf(iVar1, -2076669067, 0);
		if (iParam0 == func_585(iVar0))
		{
			if (func_341(func_1066(iVar0), 1, 0))
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	return iVar2;
}

void func_587(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
	func_1067(48);
	func_361(0, -1);
}

bool func_588(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_321((*Global_1347702)[iParam0]->f_15, 1);
}

int func_589(int iParam0)
{
	return _0x62cab7db62ead434(-2076669067, iParam0);
}

int func_590(int iParam0)
{
	return _0x93f2e7b5db85657b(-2076669067, iParam0);
}

bool func_591(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	return func_321((*Global_1835011)[iParam0]->f_1, 1);
}

bool func_592(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_267(iParam0))
	{
		return false;
	}
	return func_184((*Global_1347702)[iParam0]->f_15);
}

int func_593()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 12)
	{
		if (func_341(func_1068(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_594(int iParam0, int iParam1, int iParam2, int iParam3, char* sParam4, bool bParam5, int iParam6, bool bParam7)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "MISSION_RCCIG";
			sVar1 = "SP_MISSIONS_13";
			if (func_390() && (func_592(38) || func_588(38)))
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
			if (func_390() && (func_592(39) || func_588(39)))
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
			iVar9 = func_1069(iParam3, 19);
			iVar14 = -1531394072;
			iVar11 = get_hash_key("BLIP_RC_COLLECTABLE_EXOTICS");
			iVar13 = 911890963;
			break;
		case 41:
			if (func_390() && (func_592(41) || func_588(41)))
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
			if (func_390() && (func_592(49) || func_588(49)))
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
			iVar9 = func_1069(iParam3, 20);
			iVar14 = 678508515;
			iVar11 = 1986498931;
			iVar13 = -1424865411;
			break;
	}
	sVar2 = func_1070(iParam0, iVar14, iParam6, sVar2, sParam4, iVar10, iParam3);
	if (iParam6 == 8)
	{
		iVar11 = get_hash_key("TOAST_MEDAL_COLLECTABLE");
		iVar12 = get_hash_key("hud_toasts");
	}
	else
	{
		iVar12 = get_hash_key("toast_log_blips");
	}
	if (func_1071(iParam0, iVar13, iVar14))
	{
	}
	if (func_1072(iParam0, iVar13, vVar6, sVar4, sVar3))
	{
	}
	if (func_1073(iParam0, iVar13, sVar2, sVar5, sVar0, sVar1, iVar11, iVar12))
	{
	}
	if (func_1074(iParam0, iVar13, iVar14, iParam3, iParam1, iParam6, iVar9, iParam2, iVar10, bParam5))
	{
	}
	if (func_1075(iParam0, iVar13, iVar14, iParam6))
	{
	}
	if (func_1076(iParam0, iVar13, iVar14, iParam6, bParam7))
	{
	}
}

void func_595(int iParam0)
{
	Global_40.f_12004 = (Global_40.f_12004 || iParam0);
}

void func_596(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	switch (iParam0)
	{
		case 38:
			sVar0 = "COL_CC_TITLE";
			sVar3 = "COL_CC_CARD_FOUND";
			iVar7 = -2076669067;
			if (func_390() && (func_592(38) || func_588(38)))
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
			if (func_390() && (func_592(39) || func_588(39)))
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
			if (func_390() && (func_592(49) || func_588(49)))
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
		if (func_390() && (func_592(38) || func_588(38)))
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
			func_1077(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 1)
		{
			sVar3 = "COL_CC_CARD_POSTED_OBJ";
			func_1077(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else if (iParam5 == 0)
		{
			func_715(_create_var_string(2, sVar0), _create_var_string(2, func_1078(func_590(iParam6))), iVar5, iVar4, -2, 0, 0, 0, 0, 1, 1);
			func_1077(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			sVar1 = "COL_CC_INTRO";
			func_1077(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == -440187297)
	{
		if (func_390() && (func_592(39) || func_588(39)))
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
			func_1077(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1077(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else if (iVar7 == 2103522376)
	{
		if (func_390() && (func_592(49) || func_588(49)))
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
			func_1077(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1077(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
	else
	{
		_uilog_set_pending_details_id(1, iVar6);
		if (iParam5 == 1)
		{
			func_1077(_create_var_string(2, sVar0), _create_var_string(2, sVar3, iParam3, iParam4), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
		else
		{
			func_1077(_create_var_string(2, sVar0), _create_var_string(2, sVar1), iVar5, iVar4, 1433015236, _create_var_string(2, sVar2), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
		}
	}
}

int func_597(int iParam0)
{
	if (!func_578(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_598(int iParam0, int iParam1)
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

bool func_599(int iParam0, int iParam1)
{
	if (!func_578(iParam0, 0))
	{
		return false;
	}
	return _0x245d07651b1d183b(iParam0, iParam1);
}

bool func_600(int iParam0)
{
	if (!func_1079(iParam0))
	{
		return false;
	}
	return func_1080(iParam0);
}

void func_601(int iParam0)
{
	if (!func_1079(iParam0))
	{
		return;
	}
	func_1081(iParam0);
	func_1082(iParam0);
}

int func_602(int iParam0)
{
	if (!func_578(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_603(int iParam0, bool bParam1)
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
	if (func_578(iVar0, 0))
	{
		if (bParam1)
		{
			if (func_1083(iVar0) || func_122(iVar0))
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

int func_604(int iParam0, bool bParam1)
{
	if (!func_578(iParam0, 0))
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

void func_605(int iParam0)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	if (!func_692(iParam0))
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

bool func_606(bool bParam0)
{
	if (func_20() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_989(bParam0));
}

bool func_607(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5, int iParam6, bool bParam7)
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
		Var0 = { func_689(iParam0, 0, 1) };
		iVar5 = 1728382685;
		Var6.f_9 = -1591664384;
		iVar28 = 0;
		while (iVar28 < 4)
		{
			iVar5 = func_1084((386 + iVar28), 1);
			if (func_1085(iParam0, &Var0, iVar5, 0))
			{
				if (func_1086(iParam0, &Var6, iVar5))
				{
					Var29 = { func_1087(iParam0, Var0, iVar5, 0) };
					func_1088(iParam0, &Var29, &Var0, 1, -142743235, 1, 0);
				}
				else
				{
					iVar28++;
				}
				if (func_606(0))
				{
					_give_weapon_to_ped_2(Global_35, iParam0, 0, bParam2, bParam3, iParam4, bParam5, 0.5f, 1f, iParam6, bParam7, 0f, false);
					if (!has_ped_got_weapon(Global_35, iParam0, 0, false))
					{
						return false;
					}
					func_608(_get_ammo_type_for_weapon(iParam0), iParam1, iParam6);
					func_1089(iParam0, iParam1);
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

bool func_608(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 < 1)
	{
		return true;
	}
	if (!func_610(iParam0))
	{
		return false;
	}
	if (!func_606(0))
	{
		return false;
	}
	_add_ammo_to_ped_by_type(Global_35, iParam0, iParam1, iParam2);
	return true;
}

bool func_609(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	iVar0 = func_604(iParam0, 0);
	if (is_weapon_valid(iVar0))
	{
		if (func_20() == -1)
		{
			func_605(iVar0);
			if (iParam1 == 1248274121)
			{
				func_1090(iVar0);
			}
		}
		if (!func_1062(iParam0, &uVar1, 1, 0, 0))
		{
			func_1058(iParam0, 1, 0, bParam2, iParam1);
			iVar6 = func_1091(iVar0);
			if (_is_weapon_sniper(iVar0))
			{
				func_607(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == -1415022764 || iVar0 == -160924582)
			{
				func_607(iVar0, 0, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (iVar0 == 2055893578)
			{
				func_607(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
			}
			else if (_is_weapon_melee(iVar0))
			{
				if (iVar0 == 494733111 && !func_1049())
				{
					return false;
				}
				if (_0x2c83212a7aa51d3d(iParam0))
				{
				}
				else if (!func_1092(iVar0))
				{
					func_607(iVar0, 1, bParam3, bParam4, 0, 0, iParam1, 0);
				}
				else
				{
					func_607(iVar0, _get_weapon_clip_size(iVar0) * 4, bParam3, bParam4, 0, 0, iParam1, 0);
				}
			}
			else if (_is_weapon_one_handed(iVar0))
			{
				iVar7 = func_1093(Global_35, 2, 0, 1);
				if ((((func_692(iVar7) && !Global_43891) && iVar7 != iVar0) && !func_600(24)) && bParam4)
				{
					_0xe9bd19f8121ade3e(Global_35, iVar7);
				}
				bVar8 = true;
				if (func_692(iVar7) && func_600(24))
				{
					if (!func_607(iVar0, iVar6, bParam3, bParam4, 3, bVar8, iParam1, 0))
					{
						return false;
					}
				}
				else if (!func_607(iVar0, iVar6, bParam3, bParam4, 0, bVar8, iParam1, 0))
				{
					return false;
				}
			}
			else if (!func_607(iVar0, iVar6, bParam3, bParam4, 0, 0, iParam1, 0))
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
		func_319(480, 1);
	}
	return true;
}

bool func_610(int iParam0)
{
	return _is_ammo_valid(iParam0);
}

bool func_611(int iParam0, int iParam1, int iParam2)
{
	if (!func_610(iParam0))
	{
		return false;
	}
	iVar4 = _get_weapon_type_from_ammo_type(iParam0);
	iVar3 = get_ped_ammo_by_type(Global_35, iParam0);
	if (func_692(iVar4))
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
	if (func_341(611073244, 1, 0) && iParam2 == -897553835)
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
		func_646(func_1094(iParam0), func_645(iParam0), 1);
		return false;
	}
	if (iVar2 == (iVar3 + iVar0))
	{
		if (func_20() == -1)
		{
			if (func_321((*Global_1835011)[14]->f_1, 1))
			{
				func_319(416, 0);
			}
		}
	}
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_606(0))
	{
		if (func_608(iParam0, iVar0, iParam2))
		{
			*iParam1 = iVar0;
			return true;
		}
	}
	else
	{
		return func_651(iParam0, *iParam1, iParam2);
	}
	return false;
}

void func_612(int iParam0)
{
	if ((iParam0 == -615217896 && !func_332()) || iParam0 != -615217896)
	{
		if (func_1095(Global_35, iParam0, &uVar0))
		{
			func_630(player_ped_id(), iParam0, 0, -358215195, 1, 1, 1, 0, 1, 1);
		}
	}
	switch (iParam0)
	{
		case -62615415:
			Global_40.f_11095.f_50 = (Global_40.f_11095.f_50 + 0.1f);
			func_636();
			break;
		case -832719552:
			Global_40.f_11095.f_49 = (Global_40.f_11095.f_49 + 0.1f);
			func_636();
			break;
		case -1941112926:
			Global_40.f_11095.f_51 = (Global_40.f_11095.f_51 + 0.1f);
			func_636();
			break;
		case -615217896:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_634();
			break;
		case -121629511:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.2f);
			func_632();
			break;
	}
}

void func_613(int iParam0)
{
	switch (iParam0)
	{
		case -224110471:
			Global_40.f_11095.f_60 = (Global_40.f_11095.f_60 + 0.1f);
			func_632();
			break;
		case 1289585739:
			Global_40.f_11095.f_61 = (Global_40.f_11095.f_61 + 0.1f);
			func_633();
			break;
		case 1441506783:
			Global_40.f_11095.f_57 = (Global_40.f_11095.f_57 + 0.1f);
			break;
		case 780305678:
			Global_40.f_11095.f_56 = (Global_40.f_11095.f_56 + 0.1f);
			break;
		case -935153695:
			Global_40.f_11095.f_58 = (Global_40.f_11095.f_58 + 0.5f);
			func_634();
			break;
		case 655868243:
			Global_40.f_11095.f_63 = (Global_40.f_11095.f_63 + 0.1f);
			func_635();
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
			func_636();
			break;
		case -569248339:
			Global_40.f_11095.f_64 = (Global_40.f_11095.f_64 + 0.3f);
			func_1096();
			break;
		case -1196089647:
			Global_40.f_11095.f_68 = (Global_40.f_11095.f_68 + 0.1f);
			break;
		case -982895431:
			Global_40.f_11095.f_69 = (Global_40.f_11095.f_69 + 0.1f);
			func_1097();
			break;
		case -1056342069:
			Global_40.f_11095.f_70 = (Global_40.f_11095.f_70 + 0.2f);
			break;
	}
}

struct<2> func_614(int iParam0)
{
	Var0.f_1 = iParam0;
	return Var0;
}

struct<2> func_615(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_616(int iParam0)
{
	bVar0 = func_598(iParam0, -2017733358);
	if (func_1098() < 3)
	{
		if (bVar0)
		{
			if (func_1100(func_1099(iParam0), iParam0))
			{
				func_646(79, func_645(func_1099(iParam0)), 1);
			}
			else
			{
				func_646(78, func_645(func_1099(iParam0)), 1);
			}
		}
		else
		{
			func_646(80, func_645(func_1101(iParam0)), 1);
		}
	}
}

bool func_617()
{
	if (((((func_1102(839908568, 400) || func_1102(-1134030454, 400)) || func_1102(623353496, 400)) || func_1102(-344413337, 400)) || func_1102(-1664948962, 400)) || func_1102(1795228059, 400))
	{
		return true;
	}
	return false;
}

int func_618(int iParam0, bool bParam1, float fParam2, int iParam3, char* sParam4, int iParam5, bool bParam6, int iParam7)
{
	iVar0 = func_726(iParam0, bParam6, iParam7);
	if (!bParam1)
	{
		func_539(iVar0, sParam4, iParam5);
	}
	iVar1 = 752097756;
	if (bParam6)
	{
		iVar1 = -897553835;
	}
	func_540(iVar0, bParam1, fParam2, iParam3, iVar1);
	return iVar0;
}

void func_619(int iParam0)
{
	switch (iParam0)
	{
		case -625427311:
			func_594(51, 0, 0, 1520110311, 0, 0, 4, 0);
			func_596(51, 0, 0, 0, 0, -1, 0);
			func_1103(8192);
			break;
		case 581047644:
			func_594(51, 0, 0, -1992824800, 0, 0, 1, 0);
			func_596(51, 0, 0, 0, 0, -1, 0);
			func_1103(524288);
			break;
		case -644199619:
			func_594(39, 0, 0, 0, 0, 0, 1, 0);
			func_596(39, 0, 0, 0, 0, -1, 0);
			func_1104(16);
			break;
		case 684296857:
			func_594(41, 0, 0, 0, 0, 0, 1, 0);
			func_596(41, 0, 0, 0, 0, -1, 0);
			func_1105(8);
			break;
		case 466137807:
			func_594(49, 0, 0, 0, 0, 0, 1, 0);
			func_596(49, 0, 0, 0, 0, -1, 0);
			func_1106(16);
			break;
		case -1087522507:
			func_594(43, 0, 0, -1791518714, func_1107(1), 0, -1, 0);
			func_1108(1);
			break;
		case -405829000:
			func_594(43, 0, 0, -2087881550, func_1107(2), 0, -1, 0);
			func_1108(2);
			break;
		case 378660860:
			func_594(43, 0, 0, 1908068621, func_1107(4), 0, -1, 0);
			func_1108(4);
			break;
		case 1566111097:
			func_594(43, 0, 0, 1611247019, func_1107(8), 0, -1, 0);
			func_1108(8);
			break;
		case 1276007140:
			func_594(43, 0, 0, 1319635688, func_1107(16), 0, -1, 0);
			func_1108(16);
			break;
	}
}

void func_620(int iParam0)
{
	if (func_1109() == 1)
	{
		if (func_588(39))
		{
			func_319(342, 0);
		}
		else
		{
			func_319(343, 0);
			func_1104(1);
		}
	}
	if (func_1109() >= 30)
	{
		func_319(344, 0);
	}
	func_594(39, 0, 0, 0, 0, 0, -1, 0);
	func_596(39, 0, 0, func_1109(), 30, 1, 0);
}

void func_621(int iParam0)
{
	if (func_1110() == 1)
	{
		if (func_588(49))
		{
			func_319(409, 0);
		}
		else
		{
			func_319(410, 0);
			func_1106(1);
		}
	}
	if (func_1110() >= 10)
	{
		func_319(411, 0);
	}
	func_594(49, 0, 0, 0, 0, 0, -1, 0);
	func_596(49, 0, 0, func_1110(), 10, 1, 0);
}

void func_622(int iParam0)
{
	switch (iParam0)
	{
		case 1369162587:
			_0x3ea62e56f386c997(-949689219, 1);
			func_319(437, 0);
			func_319(440, 0);
			func_1111(-949689219, 444160793, &sVar0, 1, 0, 0);
			func_594(51, 0, 0, -949689219, sVar0, 0, -1, 0);
			func_596(51, 0, 0, sVar0, func_1069(-949689219, 20), 1, 0);
			func_1103(1);
			func_462(-748969569, 0, 0);
			break;
		case 1610047510:
			_0x3ea62e56f386c997(-1248968496, 1);
			func_1111(-1248968496, -1969404854, &sVar0, 1, 0, 0);
			func_594(51, 0, 0, -1248968496, sVar0, 0, -1, 0);
			func_596(51, 0, 0, sVar0, func_1069(-1248968496, 20), 1, 0);
			func_1103(8);
			break;
		case 1317879106:
			_0x3ea62e56f386c997(1706369307, 1);
			func_1111(1706369307, -832850511, &sVar0, 1, 0, 0);
			func_594(51, 0, 0, 1706369307, sVar0, 0, -1, 0);
			func_596(51, 0, 0, sVar0, func_1069(1706369307, 20), 1, 0);
			func_1103(64);
			break;
		case 1062444751:
			_0x3ea62e56f386c997(1520110311, 1);
			func_1111(1520110311, -100913452, &sVar0, 1, 0, 0);
			func_594(51, 0, 0, 1520110311, sVar0, 0, -1, 0);
			func_596(51, 0, 0, sVar0, func_1069(1520110311, 20), 1, 0);
			func_1103(512);
			break;
		case 754186760:
			_0x3ea62e56f386c997(-1992824800, 1);
			func_319(438, 0);
			func_1111(-1992824800, 905173572, &sVar0, 1, 0, 0);
			func_594(51, 0, 0, -1992824800, sVar0, 0, -1, 0);
			func_596(51, 0, 0, sVar0, func_1069(-1992824800, 20), 1, 0);
			func_1103(32768);
			break;
		default:
			func_319(439, 0);
			break;
	}
}

void func_623()
{
	if (chal_get_num_ranks_completed(-1278339625) < 2)
	{
		chal_add_goal_progress_int(-1278339625, -1316535105, 1);
	}
}

void func_624(int iParam0, int iParam1)
{
	iVar1 = 0;
	if (func_20() == -1)
	{
		if (!func_588(43))
		{
			if (iParam0 == 281887510)
			{
				func_319(348, 0);
			}
			else if (iParam0 == -164081697)
			{
				func_319(350, 0);
			}
			else if (iParam0 == -1161319399)
			{
				func_319(352, 0);
			}
			else if (iParam0 == 728781265)
			{
				func_319(400, 0);
			}
		}
		else if (func_598(iParam0, 412399755))
		{
			func_1112(-1791518714);
			if (func_1113() == 0)
			{
				func_361(0, 10);
				iVar1 = func_1114(iParam0, iParam1, 1);
				if (((iParam0 == 281887510 || iParam0 == -164081697) || iParam0 == -1161319399) || iParam0 == 728781265)
				{
					if (func_1115(iParam0) < func_1116(iParam0))
					{
						func_594(43, iParam0, iParam1, -1791518714, iVar1, 0, -1, 0);
						func_596(43, 0, 0, iVar1, 30, 1, 0);
					}
				}
			}
		}
		if (!func_588(44))
		{
			if (iParam0 == -222563712)
			{
				func_319(354, 0);
			}
			else if (iParam0 == 1794857344)
			{
				func_319(399, 0);
			}
			else if (iParam0 == 1952409553)
			{
				func_319(401, 0);
			}
		}
		else if (func_598(iParam0, 709057512))
		{
			func_1112(-2087881550);
			if (func_1113() == 1)
			{
				func_361(0, 10);
				iVar1 = func_1114(iParam0, iParam1, 2);
				if ((iParam0 == -222563712 || iParam0 == 1794857344) || iParam0 == 1952409553)
				{
					if (func_1115(iParam0) < func_1116(iParam0))
					{
						func_594(43, iParam0, iParam1, -2087881550, iVar1, 0, -1, 0);
						func_596(43, 0, 0, iVar1, 37, 1, 0);
					}
				}
			}
		}
		if (!func_588(45))
		{
			if (iParam0 == 2116770557)
			{
				func_319(359, 0);
			}
			else if (iParam0 == -651064726)
			{
				func_319(394, 0);
			}
			else if (iParam0 == -404270094)
			{
				func_319(395, 0);
			}
			else if (iParam0 == 2093126853)
			{
				func_319(398, 0);
			}
		}
		else if (func_598(iParam0, -1478961327))
		{
			func_1112(1908068621);
			if (func_1113() == 2)
			{
				func_361(0, 10);
				iVar1 = func_1114(iParam0, iParam1, 4);
				if (iParam0 == 2116770557)
				{
					if (!func_1117(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
					{
						func_1118(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
						func_1067(48);
					}
					if (func_1115(iParam0) < func_1116(iParam0))
					{
						func_594(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_596(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
				else if ((iParam0 == -651064726 || iParam0 == -404270094) || iParam0 == 2093126853)
				{
					if (func_1115(iParam0) < func_1116(iParam0))
					{
						func_594(43, iParam0, iParam1, 1908068621, iVar1, 0, -1, 0);
						func_596(43, 0, 0, iVar1, 40, 1, 0);
					}
				}
			}
		}
		if (!func_588(46))
		{
			if (iParam0 == 2085530337)
			{
				func_319(356, 0);
			}
			else if (iParam0 == -150591160)
			{
				func_319(402, 0);
			}
			else if (iParam0 == -323969289)
			{
				func_319(404, 0);
			}
			else if (iParam0 == 1504361882)
			{
				func_319(406, 0);
			}
		}
		else if (func_598(iParam0, -1238404098))
		{
			func_1112(1611247019);
			if (func_1113() == 3)
			{
				func_361(0, 10);
				iVar1 = func_1114(iParam0, iParam1, 8);
				if (((iParam0 == 2085530337 || iParam0 == -150591160) || iParam0 == -323969289) || iParam0 == 1504361882)
				{
					if (func_1115(iParam0) < func_1116(iParam0))
					{
						func_594(43, iParam0, iParam1, 1611247019, iVar1, 0, -1, 0);
						func_596(43, 0, 0, iVar1, 50, 1, 0);
					}
				}
			}
		}
		if (!func_588(47))
		{
			if (iParam0 == -1521783510)
			{
				func_319(396, 0);
			}
			else if (iParam0 == 1714875242)
			{
				func_319(397, 0);
			}
			else if (iParam0 == 927763737)
			{
				func_319(405, 0);
			}
			else if (iParam0 == 1019229063)
			{
				func_319(403, 0);
			}
		}
		else if (func_598(iParam0, 1160548794))
		{
			func_1112(1319635688);
			if (func_1113() == 4)
			{
				func_361(0, 10);
				iVar1 = func_1114(iParam0, iParam1, 16);
				if (((iParam0 == -1521783510 || iParam0 == 1714875242) || iParam0 == 927763737) || iParam0 == 1019229063)
				{
					if (func_1115(iParam0) < func_1116(iParam0))
					{
						func_594(43, iParam0, iParam1, 1319635688, iVar1, 0, -1, 0);
						func_596(43, 0, 0, iVar1, 25, 1, 0);
					}
				}
			}
		}
	}
}

void func_625(int iParam0)
{
	if (iParam0 == 2116770557)
	{
		if (!func_1117(_0x126cbebba46693cf(iVar0, 2114735110, 0)) >= 25)
		{
			func_1118(_0x126cbebba46693cf(iVar0, 2114735110, 0), 1);
			func_1067(48);
		}
	}
}

void func_626(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar0 = _0x126cbebba46693cf(iVar1, 678508515, -1160144609);
		if (func_341(func_1119(iVar0, 10), 1, 0))
		{
			if (bParam2)
			{
				func_1120(iParam0, iVar0, sVar2, iParam1, bParam2);
			}
			else
			{
				func_1121(iParam0, iVar0, bParam3);
			}
		}
		iVar1++;
	}
}

void func_627(int iParam0, int iParam1, int iParam2)
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
				func_618(0, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, iVar0);
				return;
			}
		}
	}
	switch (iParam0)
	{
		case 489075255:
			func_618(-949580860, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1394529493:
			func_618(-1171997683, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1262623627:
			func_618(-2140931002, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1124867377:
			func_618(-1116228267, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1790920086:
			func_618(2112896861, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -2001202686:
			func_618(-1915150712, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1111063991:
			func_618(994220262, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1576210101:
			func_618(-1388440107, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 675090918:
			func_618(-1531790128, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 355838765:
			func_618(1351791770, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -343824903:
			func_618(-161493966, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1142684684:
			func_618(668131102, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1243851340:
			if (!func_1122())
			{
				func_618(1330954593, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			}
			break;
		case -525490740:
			func_618(817681514, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case -1736635264:
			func_618(1404311868, 0, 1065353216, 1, 0, 0, iParam1 == -897553835, -1);
			break;
		case 1302860970:
			func_618(-175152067, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1027115192:
			func_618(-526915387, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1064332555:
			func_618(101362741, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1954478446:
			func_618(1458818027, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -518592739:
			func_618(-1957208512, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -2010073778:
			func_618(2066857461, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -700133011:
			func_618(803940201, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case -1415414735:
			func_618(-1717765429, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 2045548742:
			func_618(1379920914, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
		case 830381058:
			func_618(447209691, 0, 1065353216, 1, 0, 0, 0, -1);
			break;
	}
}

void func_628(int iParam0)
{
	if (func_588(41))
	{
		func_319(363, 0);
	}
	else
	{
		func_319(362, 0);
	}
	switch (iParam0)
	{
		case 323124696:
			func_1123(-1865241121);
			func_1124(-642026005);
			func_1125(-642026005);
			func_361(0, 10);
			break;
		case -2108314374:
			func_1123(2117142684);
			func_1124(-940584364);
			func_1125(-940584364);
			func_361(0, 10);
			break;
		case -1193798153:
			func_1123(-1409326024);
			func_1124(1972645282);
			func_1125(1972645282);
			func_361(0, 10);
			break;
		case -787702678:
			func_1123(-641744968);
			func_1124(1667205433);
			func_1125(1667205433);
			func_361(0, 10);
			break;
		case -804542901:
			func_1123(-946988203);
			func_1124(1362715885);
			func_1125(1362715885);
			func_361(0, 10);
			break;
		case -1696275132:
			func_1123(-646136018);
			func_1124(1053540370);
			func_1125(1053540370);
			func_361(0, 10);
			break;
		case -161595323:
			func_1123(-955835837);
			func_1124(-1100103852);
			func_1125(-1100103852);
			func_361(0, 10);
			break;
		case -1114363619:
			func_1123(-179276075);
			func_1124(-1409869209);
			func_1125(-1409869209);
			func_361(0, 10);
			break;
		case -368407134:
			func_1123(-492711560);
			func_1124(-1760235357);
			func_1125(-1760235357);
			func_361(0, 10);
			break;
		case 1997759228:
			func_1123(1764383959);
			func_1124(-138366827);
			func_1125(-138366827);
			func_361(0, 10);
			break;
		case 1265573293:
			func_1123(317501533);
			func_1124(-1261163843);
			func_1125(-1261163843);
			func_361(0, 10);
			break;
		case -1030441283:
			func_1123(817753087);
			func_1124(-963523016);
			func_1125(-963523016);
			func_361(0, 10);
			break;
		case -1490884871:
			func_1123(576606016);
			func_1124(560825326);
			func_1125(560825326);
			func_361(0, 10);
			break;
		case -395458616:
			func_1123(814934957);
			func_1124(858269539);
			func_1125(858269539);
			break;
	}
}

void func_629(int iParam0, int iParam1)
{
	func_1126(iParam0, iParam1, &uVar0);
}

int func_630(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_689(iParam1, 1, 0) };
		iParam3 = func_690(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1127(iParam1, iParam2, func_677(iParam3, 1), bParam4, bParam9))
	{
		return 0;
	}
	func_1128(1, (func_20() == -1 && bParam5), 1);
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam8 && iParam1 != &Global_1946804->f_57[func_677(iParam3, 1)])
			{
				func_688(31, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1129(32768) && iParam1 != &Global_1946804->f_57[func_677(iParam3, 1)])
			{
				func_1130();
				func_688(22, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		if (bParam7)
		{
			func_688(22, iParam3, 0, 0, 0);
		}
		return 1;
	}
	iVar5 = func_1131(iParam3);
	if (is_ped_a_player(iParam0))
	{
		func_688(19, 0, iVar5, 0, 0);
		if ((iParam3 == 1742327865 || iParam3 == 1108822547) || iParam3 == 1145151482)
		{
			func_1132(0);
			func_1133(36, 0, 0);
		}
	}
	else
	{
		iVar5 |= 1;
		func_688(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

bool func_631(int iParam0, bool bParam1)
{
	Var3.f_9 = -1591664384;
	bVar17 = false;
	*iParam0 = 0;
	iVar18 = func_1093(get_player_ped(get_player_index()), 2, 1, 0);
	iVar19 = func_1093(get_player_ped(get_player_index()), 3, 1, 0);
	if (func_1134("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (func_1135(&Var3, iVar2, iVar0, iVar1))
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
						func_1136(iVar0);
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

void func_632()
{
	_0x11a7ff918ef6bc66(player_id(), (1f - Global_40.f_11095.f_60));
}

void func_633()
{
	fVar0 = Global_40.f_11095.f_62;
	fVar1 = (Global_40.f_11095.f_62 + Global_40.f_11095.f_61);
	_0x497a6539bb0e8787(player_id(), (1f - fVar0), (1f - fVar1));
}

void func_634()
{
	_0xe0d6c2a146a5c993(player_id(), (1f / (1f + Global_40.f_11095.f_58)));
}

void func_635()
{
	_0xb427911ea6dffef3(player_id(), (1f - Global_40.f_11095.f_63));
}

void func_636()
{
	func_1137();
	func_1138();
	func_1139();
}

void func_637(int iParam0, int iParam1, bool bParam2)
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

void func_638(int iParam0, bool bParam1)
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
	func_1077(_create_var_string(2, sVar1), _create_var_string(2, sVar2), get_hash_key("toast_log_blips"), get_hash_key("BLIP_RC_TREASURE_HUNTER"), 1433015236, _create_var_string(2, sVar3), -1507719118, -2, "Mission_Complete_Sounds", "Mission_Complete_Enter", 0, 0, 1, 1);
}

void func_639(int iParam0)
{
	Global_40.f_12004.f_7 = (Global_40.f_12004.f_7 || iParam0);
}

void func_640(int iParam0)
{
	Global_40.f_12004.f_8 = (Global_40.f_12004.f_8 || iParam0);
}

void func_641(int iParam0)
{
	Global_40.f_12004.f_9 = (Global_40.f_12004.f_9 || iParam0);
}

void func_642(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 || iParam0);
}

void func_643(int iParam0)
{
	Global_40.f_12004.f_11 = (Global_40.f_12004.f_11 || iParam0);
}

void func_644(int iParam0)
{
	Global_40.f_12004.f_12 = (Global_40.f_12004.f_12 || iParam0);
}

int func_645(int iParam0)
{
	if (!func_578(iParam0, 0))
	{
		return 0;
	}
	return iParam0;
}

void func_646(int iParam0, int iParam1, bool bParam2)
{
	func_684(iParam0, &iVar0, &iVar1);
	if (!func_685(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1140(iParam0, 1024))
	{
		return;
	}
	func_686(iVar0, iVar1);
	Global_1905944->f_22[iParam0]->f_3[0] = iParam1;
	Global_1905944->f_22[iParam0]->f_3[0]->f_1 = 2;
}

void func_647(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	func_684(iParam0, &iVar0, &iVar1);
	if (!func_685(iParam0, iVar0, iVar1, bParam2))
	{
		return;
	}
	if (!func_1140(iParam0, 1024))
	{
		return;
	}
	func_686(iVar0, iVar1);
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

int func_648()
{
	iVar0 = _0x5461c821d00fe15a(-2076669067, 0);
	if (iVar0 == func_1065())
	{
		return func_649();
	}
	iVar4 = (func_1065() - iVar0);
	iVar5 = get_random_int_in_range(0, iVar4);
	iVar2 = 0;
	while (iVar2 < func_1065())
	{
		iVar1 = _0x126cbebba46693cf(iVar2, -2076669067, 0);
		if (!func_1141(iVar1))
		{
			if (iVar5 == iVar3)
			{
				return func_1066(iVar1);
			}
			iVar3++;
		}
		iVar2++;
	}
	return 0;
}

int func_649()
{
	iVar0 = get_random_int_in_range(0, func_1065());
	return func_1066(_0x126cbebba46693cf(iVar0, -2076669067, 0));
}

void func_650(int iParam0)
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

bool func_651(int iParam0, int iParam1, int iParam2)
{
	if (!func_578(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_689(iParam0, 0, 1) };
	Var5 = { func_1087(iParam0, Var0, Var0.f_4, 0) };
	return func_1142(iParam0, &Var5, &Var0, iParam1, iParam2, 0);
}

void func_652(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	switch (func_602(iParam0))
	{
		case 81053684:
			if (iParam0 == -1623728698 && func_1143(81053684, 0) <= 0)
			{
				func_688(32, iParam0, 0, 0, 0);
			}
			break;
		case -2061583405:
			if (iParam0 == -1535516064 || iParam0 == -763730846)
			{
				func_688(32, iParam0, 0, 0, 0);
			}
			break;
		case -999503751:
			iVar0 = func_1144(iParam0);
			if (func_1145(iVar0))
			{
				func_1146(iVar0, (iVar0 >= 0 && iVar0 <= 5), 1);
			}
			else
			{
				func_688(30, iParam0, 0, 0, 0);
			}
			if (func_679() == -2125499975 || func_679() == -449205311)
			{
				switch (iParam0)
				{
					case 624063935:
					case 1160643979:
					case 1661121390:
						func_688(32, iParam0, 0, 0, 0);
						break;
				}
			}
			else if (func_679() == 1160113249)
			{
				switch (iParam0)
				{
					case -361635024:
						func_688(32, iParam0, 0, 0, 0);
						break;
				}
			}
			break;
		case -525676072:
			if (!func_1147(-525676072, 0))
			{
				if (func_1148(-525676072, &iVar1))
				{
					func_688(33, iVar1, 0, 0, 0);
				}
			}
			func_688(32, iParam0, 0, 0, 0);
			break;
	}
	if ((iParam0 == 899611344 || iParam0 == -1515874150) || iParam0 == -1185145312)
	{
		if (!func_1149(99217379))
		{
			func_630(Global_35, iParam0, 0, 99217379, 1, 1, 1, 0, 1, 1);
		}
		func_601(24);
		if (func_631(&iVar2, 0))
		{
			func_607(iVar2, 0, 0, 1, 3, 0, 752097756, 0);
		}
	}
}

void func_653(int iParam0)
{
	if (func_598(iParam0, 943695443))
	{
		func_1150(0, iParam0);
	}
	else if (func_598(iParam0, -2096528786))
	{
		func_1150(1, iParam0);
	}
	else if (func_598(iParam0, -1094167013))
	{
		func_1150(2, iParam0);
	}
	else if (func_598(iParam0, 1936654645))
	{
		func_1150(3, iParam0);
	}
	else if (func_598(iParam0, 1306489306))
	{
		func_1150(4, iParam0);
	}
	else if (func_598(iParam0, 435762317))
	{
		func_1150(5, iParam0);
	}
	else if (func_598(iParam0, 1259363210))
	{
		func_1150(6, iParam0);
	}
	else if (func_598(iParam0, 881398259))
	{
		func_1150(7, iParam0);
	}
	else if (func_598(iParam0, -541549214))
	{
		func_1150(8, iParam0);
	}
	else if (func_598(iParam0, 130796156))
	{
		func_1150(-1, iParam0);
	}
}

int func_654(int iParam0, int iParam1)
{
	Var4.f_1 = 10;
	func_1151(&Var4, 1356624740);
	return func_1152(iParam0, &Var4, &uVar0, iParam1);
}

struct<2> func_655(int iParam0)
{
	if (!func_578(iParam0, 0))
	{
		return Var0;
	}
	if (func_598(iParam0, -305066475))
	{
		if (func_20() == -1)
		{
			if (func_598(iParam0, -537818634))
			{
				return func_94(189951448);
			}
			else
			{
				return func_94(1176172851);
			}
		}
	}
	else if (func_598(iParam0, -537818634))
	{
		return func_94(-963660207);
	}
	if (func_598(iParam0, 2084895747))
	{
		return func_94(1694039471);
	}
	return Var2;
}

void func_656(int iParam0)
{
	switch (iParam0)
	{
		case 236757114:
			if (func_20() == -1)
			{
				if (func_321((*Global_1835011)[4]->f_1, 1))
				{
					func_319(109, 1);
				}
			}
			break;
	}
}

void func_657(int iParam0, char* sParam1)
{
	sVar0 = func_1154(func_1153(0));
	func_708(_create_var_string(38, "ITEM_CAUGHT_PUMP", sParam1, sVar0), "inventory_items", func_1155(iParam0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

void func_658(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (iParam0 == 1662813436)
	{
		return;
	}
	if (!func_578(iParam0, 0))
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
	if (!func_1156())
	{
		func_1157(iParam0, iParam1, bParam2, bParam4);
		return;
	}
	bVar0 = false;
	iVar1 = absi(iParam1);
	StringCopy(&cVar2, func_1158(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
	if (iParam1 > 0)
	{
	}
	else
	{
		if (bParam3 || bParam4)
		{
			StringCopy(&cVar2, func_1158(iVar1 == 1, "ITEM_GET_PUMP", "ITEM_GET_PUMP_MULT"), 32);
		}
		else if (bParam2 && func_599(iParam0, 2097152))
		{
			StringCopy(&cVar2, "ITEM_READ_PUMP_MULT", 32);
		}
		bVar0 = true;
	}
	iVar6 = func_597(iParam0);
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
	else if (!func_1159(iParam0, &Var7, iVar11, iVar10, 0, -401018458))
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
	sVar15 = func_1160(_create_var_string(10, &cVar2, _create_var_string(0, func_645(iParam0)), iVar1), iVar12);
	if (((((iParam1 == 1 || func_598(iParam0, 1443104131)) || iParam0 == -885810591) || iParam0 == -1424823393) || iParam0 == 1463786584) || iParam0 == 1358243310)
	{
		sVar15 = _create_var_string(0, func_645(iParam0));
	}
	func_708(sVar15, Var7.f_1, get_hash_key(Var7), iVar14, iVar12, "Transaction_Feed_Sounds", sVar13, 0, 1);
}

int func_659(int iParam0, int iParam1)
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

struct<10> func_660(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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

bool func_661(var uParam0, var uParam1, var uParam2, int iParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, int iParam10, int iParam11, int iParam12)
{
	*iParam10 = _item_database_create_item_collection(&uParam0, iParam11, iParam12);
	if (*iParam10 >= 0)
	{
		return true;
	}
	return false;
}

int func_662(int iParam0, int iParam1)
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

bool func_663(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!func_578(iParam0, 0))
	{
		return false;
	}
	if (iParam1 != 0 && !func_1161(iParam0, iParam1, 1))
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
				if (Var2.f_2 == 1644203656 && func_1161(iParam0, Var2, 1))
				{
					if (func_1162(iParam0, Var2))
					{
						bVar0 = true;
					}
				}
			}
			iVar49++;
		}
	}
	else if (func_1162(iParam0, iParam1))
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam2)
		{
			func_319(206, 0);
		}
	}
	if (bParam3)
	{
		if (!func_190(0, 0, 1))
		{
			func_361(1, 5);
		}
	}
	if (bVar0)
	{
		return true;
	}
	return false;
}

int func_664(int iParam0)
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

void func_665(int iParam0)
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
		func_319(iVar0, 0);
	}
}

void func_666()
{
	bVar0 = is_dlc_present(33819255);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(-121456797))
		{
			_0xe824ce7d13fcb300(2116153146, 0);
			func_1163(0);
			_unlock_set_unlocked(-121456797, false);
			func_1164();
		}
		return;
	}
	if (!func_321((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	func_1165();
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
	func_1163(1);
}

void func_667()
{
	if (!func_321((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(304788622))
	{
		return;
	}
	func_312(1351927599, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	_unlock_set_unlocked(304788622, true);
	if (_unlock_is_unlocked(-1968398307))
	{
		return;
	}
	_unlock_set_unlocked(-1968398307, true);
}

void func_668()
{
	bVar0 = is_dlc_present(-751383868);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(1244328330))
		{
			func_1166(0);
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
	if (!func_321((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(1244328330, true);
	func_1166(1);
}

void func_669()
{
	bVar0 = is_dlc_present(-1499823613);
	if (!bVar0)
	{
		if (_unlock_is_unlocked(398807247))
		{
			func_1167(15000, 0, 0, 0, 1);
			func_1166(0);
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
	if (!func_321((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	_unlock_set_unlocked(398807247, true);
	func_277(15000, 0, 1065353216, 1, 0, 0, 1, 752097756);
	func_1166(1);
}

void func_670()
{
	bVar0 = is_dlc_present(-679138445);
	if (bVar0)
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if ((!func_341(1191437462, 1, 0) && !func_184((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_312(1191437462, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1168(1))
			{
				func_642(1);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if ((!func_341(1119149048, 1, 0) && !func_184((*Global_1835011)[23]->f_1)) && !Global_43891)
			{
				func_312(1119149048, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
			}
			if (!func_1168(2))
			{
				func_642(2);
			}
		}
		if (_0xf83d3dda4d3c8169(2056119786) > 0 && !func_1168(4))
		{
			func_642(4);
		}
		if (func_1168(0))
		{
			func_1169(0);
		}
	}
	else
	{
		if (_0xf83d3dda4d3c8169(-1491419385) > 0)
		{
			if (func_341(1191437462, 1, 0))
			{
				func_673(1191437462, 1, 1, -142743235, 0);
			}
		}
		if (_0xf83d3dda4d3c8169(1809565830) > 0)
		{
			if (func_341(1119149048, 1, 0))
			{
				func_673(1119149048, 1, 1, -142743235, 0);
			}
		}
		if (func_1168(1))
		{
			func_1169(1);
		}
		if (func_1168(2))
		{
			func_1169(2);
		}
		if (func_1168(4))
		{
			func_1169(4);
		}
		if (!func_1168(0))
		{
			func_642(0);
		}
	}
}

void func_671()
{
	bVar0 = _unlock_is_unlocked(240039223);
	if (!bVar0)
	{
		return;
	}
	if (!func_321((*Global_1835011)[4]->f_1, 1))
	{
		return;
	}
	if (_unlock_is_unlocked(-236259196))
	{
		return;
	}
	Var1 = { func_1170() };
	if (!_0xb881ca836cc4b6d4(&Var1))
	{
		func_605(127400949);
		if (func_607(127400949, 0, 0, 0, 0, 0, 752097756, 0))
		{
			Var1 = { func_1170() };
		}
	}
	if (_0xb881ca836cc4b6d4(&Var1))
	{
		func_1171(-2055673461, Var1, 1423542233);
		func_1171(-202131179, Var1, -1264898804);
		func_1171(2013836545, Var1, 1592019450);
		func_1171(1497476650, Var1, 1117400455);
		func_1171(1063571467, Var1, 1150213537);
		func_1171(2107224237, Var1, 1598825281);
		func_1171(1747981656, Var1, -712527121);
		func_1171(-1371140647, Var1, 454332195);
		func_1171(-19142973, Var1, 256105670);
		func_1171(-2074737817, Var1, -1328061889);
		func_1171(-1114256243, Var1, -782241404);
		func_1171(-1653277288, Var1, 1669853467);
		func_1171(1869398132, Var1, -1559225678);
		func_1171(459868358, Var1, -266425508);
		if (!_0x3ab6c7b0bb0df4b1(Global_35, -1) && !func_29())
		{
			get_current_ped_weapon(Global_35, &iVar15, false, 2, false);
			get_current_ped_weapon(Global_35, &iVar16, false, 0, false);
			if (func_692(iVar16))
			{
				if (iVar16 != 127400949)
				{
					if (_is_weapon_one_handed(iVar16))
					{
						if (func_600(24))
						{
							set_current_ped_weapon(Global_35, iVar16, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 0, false, false);
					}
					else if (_is_weapon_two_handed(iVar16))
					{
						if ((func_600(24) && func_692(iVar15)) && iVar15 != 127400949)
						{
							set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
						}
						set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
					}
				}
			}
			else if (!func_692(iVar15))
			{
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
			else if (iVar15 != 127400949)
			{
				if (func_600(24))
				{
					set_current_ped_weapon(Global_35, iVar15, true, 3, false, false);
				}
				set_current_ped_weapon(Global_35, 127400949, true, 2, false, false);
			}
		}
		_unlock_set_unlocked(-236259196, true);
	}
}

void func_672()
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

int func_673(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_578(iParam0, 0))
	{
		return 0;
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1063(iParam0, 1);
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
			func_658(iParam0, -iParam1, bVar0, bVar1, bVar2);
		}
		return 0;
	}
	if (!func_341(iParam0, 1, bParam4))
	{
		return 0;
	}
	Var5 = { func_655(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_582(iParam0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_582(iParam0, 0, 0) - iParam1) < 0)
		{
			func_673(iParam0, func_582(iParam0, 0, 0), bParam2, iParam3, bParam4);
			return 0;
		}
	}
	if (func_597(iParam0) == -427144552)
	{
		if (!func_1172(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1173(iParam0, iParam1, iParam3, bParam2, bParam4))
	{
		return 0;
	}
	if (iParam0 == -569063887)
	{
		Global_1935496->f_20 = 0;
	}
	if (!func_606(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_658(iParam0, -iParam1, bVar0, bVar1, bVar2);
	}
	func_1174(iParam0, iParam1);
	return 1;
}

bool func_674(int iParam0)
{
	switch (func_602(iParam0))
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

void func_675(int iParam0, bool bParam1, bool bParam2)
{
	switch (func_602(iParam0))
	{
		case -2061583405:
			bVar0 = func_1175(iParam0, &(Global_1946804->f_2657.f_21));
			break;
		case 81053684:
			bVar0 = func_1175(iParam0, &(Global_1946804->f_2657.f_23));
			break;
		case -999503751:
			bVar0 = func_1175(iParam0, &(Global_1946804->f_2657.f_20));
			break;
		case -525676072:
			bVar0 = func_1175(iParam0, &(Global_1946804->f_2657.f_22));
			break;
		case -1719060085:
			bVar0 = func_1175(iParam0, &(Global_1946804->f_2657.f_24));
			break;
		case -413129408:
			bVar0 = func_1175(iParam0, &(Global_1946804->f_2657.f_25));
			break;
	}
	if (!bVar0)
	{
		return;
	}
	if (bParam2)
	{
		func_1176();
	}
	if (bParam1)
	{
		func_1177(0, 0);
	}
}

int func_676(int iParam0)
{
	Var0 = { func_689(iParam0, 1, 0) };
	return func_690(Var0.f_4);
}

int func_677(int iParam0, int iParam1)
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

void func_678(int iParam0)
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
		iVar0 = func_677(iVar1, 1);
		if (iVar0 < 0 || iVar0 >= 39)
		{
		}
		else
		{
			func_1178(Global_1946804->f_1378.f_1[iVar0], 2, 6);
		}
	}
}

int func_679()
{
	return Global_1946804->f_1;
}

bool func_680(var uParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, int iParam6)
{
	Var4 = func_1179(iParam6);
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
		func_1181(uParam0, func_1180(iVar0), 1);
	}
	while (_0xed4413cee1bf142c(&Var4))
	{
		if (!_0x44b3a36933ac009c(&iVar0, &Var4, 1409451727))
		{
		}
		else
		{
			iVar3 = iVar0;
			iVar1 = func_677(iVar3, 1);
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
							if (func_1182(iVar3) && func_1183(&(uParam0->f_1[iVar1]), iVar3, &iVar0))
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
							func_1184(uParam0, &(uParam0->f_1[&Global_1946804->f_2612[iVar1]]), &(Global_1946804->f_2612[iVar1]), 0, 0);
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

Vector3 func_681(int iParam0, int iParam1)
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

int func_682(int iParam0, int iParam1)
{
	vVar0 = { func_681(iParam0, iParam1) };
	return vVar0.x;
}

void func_683(var uParam0, int iParam1, int iParam2)
{
	*Global_26796.f_26[iParam2]->f_1.f_1[iParam1] = { *uParam0 };
	Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 = (Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 - Global_26796.f_26[iParam2]->f_1.f_1[iParam1]->f_2 & 1);
}

void func_684(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_685(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 21)
	{
		return false;
	}
	if (func_1185(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_1186(iParam0))
	{
		return false;
	}
	if (func_1187(iParam0))
	{
		return false;
	}
	if ((Global_1898164->f_163 && !func_1140(iParam0, 1)) || func_82(32768))
	{
		if (!func_1140(iParam0, 262144) || !Global_1905944->f_5696)
		{
			return false;
		}
	}
	if (!func_1188())
	{
		return false;
	}
	return true;
}

void func_686(int iParam0, int iParam1)
{
	uVar0 = Global_1905944[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1905944)[iParam0] = uVar0;
}

void func_687(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 - (uParam0->f_2 && iParam1));
}

void func_688(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1189(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1190(Var0);
}

struct<5> func_689(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_1191(bParam1) };
	Var0.f_4 = 1084182731;
	switch (func_597(iParam0))
	{
		case -1037537535:
			if (!_inventory_fits_slot_id(iParam0, 1034665895))
			{
				Var0 = { func_1087(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else
			{
				Var0.f_4 = 1034665895;
			}
			break;
		case -427144552:
			Var0 = { func_1192(bParam1) };
			if (bParam2 && func_1193(iParam0, 1))
			{
				Var5.f_9 = -1591664384;
				if (!func_1085(iParam0, &Var0, 1728382685, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_1085(iParam0, &Var0, -649335959, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_1086(iParam0, &Var5, 1728382685))
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
			Var0 = { func_1194(bParam1) };
			switch (func_602(iParam0))
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
			if (func_1195(iParam0, -1823706425))
			{
				Var0 = { func_1087(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_1195(iParam0, -1483207246))
			{
				Var0 = { func_1087(889965687, Var0, 1034665895, bParam1) };
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
				if (!func_1196(Var0, &Var27, bParam1, 0))
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

int func_690(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1946804->f_57[iVar0]->f_8 == iParam0)
		{
			return func_1197(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

void func_691(int iParam0)
{
	func_1178(Global_1946804->f_1497.f_1[func_677(iParam0, 1)], 2, 6);
	func_1178(Global_1946804->f_1378.f_1[func_677(iParam0, 1)], 2, 6);
}

bool func_692(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

bool func_693(int iParam0)
{
	return iParam0 != 0;
}

int func_694(int iParam0)
{
	iVar0 = -1;
	if (!func_693(iParam0))
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

bool func_695(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

int func_696(int iParam0)
{
	return (shift_right(iParam0, 26) & 31 * func_1198(is_bit_set(iParam0, 31), -1, 1)) + 1898;
}

int func_697(int iParam0)
{
	return shift_right(iParam0, 22) & 15;
}

int func_698(int iParam0)
{
	return shift_right(iParam0, 17) & 31;
}

int func_699(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

int func_700(int iParam0)
{
	return shift_right(iParam0, 6) & 63;
}

int func_701(int iParam0)
{
	return shift_right(iParam0, 0) & 63;
}

int func_702(int iParam0, int iParam1)
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

void func_703(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
{
	func_1199(iParam0, iParam6);
	func_1200(iParam0, iParam5);
	func_1201(iParam0, iParam4);
	func_1202(iParam0, iParam3);
	func_1203(iParam0, iParam2);
	func_1204(iParam0, iParam1);
}

bool func_704(int iParam0)
{
	if (iParam0 == -15)
	{
		return false;
	}
	iVar0 = func_701(iParam0);
	if (iVar0 < 0 || iVar0 >= 60)
	{
		return false;
	}
	iVar1 = func_700(iParam0);
	if (iVar1 < 0 || iVar1 >= 60)
	{
		return false;
	}
	iVar2 = func_699(iParam0);
	if (iVar2 < 0 || iVar2 > 23)
	{
		return false;
	}
	iVar3 = func_696(iParam0);
	if ((iVar3 <= 0 || iVar3 > 1930) || iVar3 < 1866)
	{
		return false;
	}
	iVar4 = func_697(iParam0);
	if (iVar4 < 0 || iVar4 > 11)
	{
		return false;
	}
	iVar5 = func_698(iParam0);
	if (iVar5 < 1 || iVar5 > func_702(iVar4, iVar3))
	{
		return false;
	}
	return true;
}

bool func_705(int iParam0, bool bParam1)
{
	return func_1040(func_279(), iParam0, bParam1);
}

void func_706(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

bool func_707(int iParam0, int iParam1)
{
	if (!func_578(iParam0, 0))
	{
		return false;
	}
	if (Global_1935630->f_12)
	{
		return false;
	}
	iVar0 = func_1063(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_1134("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1135(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_692(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_1136(iVar1);
				return true;
			}
			iVar3++;
		}
		func_1136(iVar1);
	}
	return false;
}

var func_708(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8)
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
	func_1205(sParam0, sParam1, iParam2);
	return uVar20;
}

int func_709()
{
	iVar1 = 0;
	while (iVar1 < 5)
	{
		iVar2 = func_1206(iVar1);
		if (!_unlock_is_visible(func_1207(iVar2)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_710()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar1 = func_1206(iVar0);
		if (!_unlock_is_visible(func_1207(iVar1)))
		{
			_unlock_set_visible(func_1207(iVar1), true);
		}
		iVar0++;
	}
}

bool func_711(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1004(iParam0))
		{
			return false;
		}
	}
	return (Global_40.f_4942[iParam0] && iParam1) != 0;
}

void func_712(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_515(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (Global_40.f_4942[iParam0] || iParam1);
}

bool func_713()
{
	return (func_191(&Global_1935630, 4096) || _get_number_of_references_of_script_with_name_hash(1637780761) > 0);
}

int func_714(var uParam0, int iParam1, int iParam2, int iParam3)
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
	if (!func_578(iVar0, 0))
	{
		return 0;
	}
	if (!func_1208(iVar0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	iVar3 = 1;
	func_1209(iVar0, iVar1, &iVar3, 0);
	iVar4 = (iVar2 * iVar3);
	if (func_598(iVar0, 58855631))
	{
		iVar4 = iVar2;
	}
	Var5 = { func_689(iVar0, 0, 1) };
	iVar10 = func_1210(iVar0, &Var5, 0, 0);
	if (iVar10 == 0)
	{
		return 0;
	}
	else if (iVar10 < iVar4)
	{
		iVar2 = ceil((to_float(iVar10) / to_float(iVar3)));
		iVar4 = iVar10;
	}
	iVar11 = (func_1211(iVar0, iVar1, 1, 0, 0) * iVar2);
	if (iVar11 <= 0)
	{
		return 0;
	}
	if (!func_1212(iVar11))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	if (!func_312(iVar0, iVar4, 1, 0, 0, 1248274121, 0, 0, 0, 0))
	{
		*iParam2 = (*iParam2 + iVar2);
		return 0;
	}
	func_1167(iVar11, 0, 0, 0, 1);
	*iParam3 = (*iParam3 + iVar11);
	*iParam1 = (*iParam1 + iVar2);
	return 1;
}

var func_715(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
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

void func_716(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_MONEY_SPEND";
	}
	func_708(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 1831944558, 1, 859817522, 0, 0, 0, 1);
}

var func_717(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

void func_718(bool bParam0, bool bParam1)
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

void func_719(int iParam0, int iParam1, float fParam2, int iParam3)
{
	iVar0 = floor((to_float(iParam1) * fParam2));
	iVar1 = ((iParam1 - iVar0) / iParam3);
	if (func_1030())
	{
		iVar2 = floor((to_float(iVar1) * 0.1f));
		_uilog_add_total_take_entry(1072517412, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	else
	{
		_uilog_add_total_take_entry(2067252994, 908516622, _create_var_string(2, "MISSION_COMPLETE_TAKE_GANG"), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", iVar0), -1689362167);
	}
	iVar3 = iVar1;
	if (func_1030())
	{
		iVar3 = (iVar3 + iVar2);
	}
	_0xe6dc9b21ac7a8729(func_186(iParam0), iVar3, iVar1, iParam3);
	iVar4 = func_266(iParam0);
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
					func_1213(1, iVar1);
					func_1213(8, iVar1);
					func_1213(7, iVar1);
					break;
				case 12:
					func_1213(6, iVar1);
					break;
				case 53:
					func_1213(3, iVar1);
					func_1213(7, iVar1);
					func_1213(4, iVar1);
					break;
				case 20:
					func_1213(8, iVar1);
					break;
				case 19:
					func_1213(1, iVar1);
					func_1213(2, iVar1);
					break;
				case 24:
					func_1213(3, iVar1);
					func_1213(9, iVar1);
					func_1213(20, iVar1);
					break;
				case 28:
					func_1213(1, iVar1);
					break;
				case 34:
					func_1213(23, iVar1);
					func_1213(2, iVar1);
					func_1213(18, iVar1);
					break;
				case 29:
					func_1213(0, iVar1);
					func_1213(9, iVar1);
					break;
				case 37:
					break;
				case 58:
					break;
				case 57:
					func_1213(0, iVar1);
					func_1213(3, iVar1);
					func_1213(2, iVar1);
					func_1213(11, iVar1);
					func_1213(6, iVar1);
					func_1213(25, iVar1);
					func_1213(24, iVar1);
					break;
			}
			break;
		case 8:
			switch (iVar4)
			{
				case 94:
					func_1213(5, iVar1);
					break;
				case 63:
					func_1213(1, iVar1);
					func_1213(3, iVar1);
					break;
				case 37:
					func_1213(23, iVar1);
					break;
				case 116:
					break;
			}
			break;
		case 11:
			if (iParam0 == func_357(0, 10, 11, 2116153146))
			{
				func_1213(7, iVar1);
				func_1213(4, iVar1);
			}
			else if (iParam0 == func_357(0, 7, 11, -379687487))
			{
				func_1213(8, iVar1);
				func_1213(15, iVar1);
			}
			else if (iParam0 == func_357(0, 8, 11, -1386089015))
			{
				func_1213(3, iVar1);
			}
			else if (iParam0 == func_357(0, 11, 11, -1952009645))
			{
				func_1213(6, iVar1);
				func_1213(3, iVar1);
			}
			else if (iParam0 == func_357(0, 12, 11, 2065895756))
			{
				func_1213(9, iVar1);
			}
			break;
	}
	_uilog_set_total_take_summary(_create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL", iParam1), _create_var_string(2, "MISSION_COMPLETE_TAKE_TOTAL_GANG", func_1214()));
	if (!func_1215(629))
	{
		func_319(629, 0);
	}
}

int func_720(int iParam0)
{
	if (Global_1572887->f_12 == -1)
	{
		return Global_12106[iParam0]->f_3;
	}
	return 0;
}

bool func_721(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 17)
	{
		return false;
	}
	return true;
}

bool func_722(int iParam0, int iParam1, int iParam2)
{
	if (!func_721(iParam0))
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

int func_723()
{
	if (Global_1572887->f_12 == -1)
	{
		return 771;
	}
	return 20001;
}

int func_724(int iParam0, int iParam1, int iParam2)
{
	return ((iParam2 & 31 || shift_left(iParam0 & 1023, 5)) || shift_left(iParam1 & 16383, 15));
}

int func_725(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (!func_1216(iParam2))
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
	if (iParam3 < 0 || iParam3 > func_723())
	{
		return -1;
	}
	iVar0 = func_724(iParam0, iParam1, iParam2);
	iVar1 = iParam3;
	func_486(iVar1, 0);
	func_557(iVar1, 0);
	func_1217(iVar1, 0);
	func_1218(iVar1, 0);
	func_1219(iVar1, iVar0);
	if (iParam4 != 0)
	{
		func_1220(iVar1, iParam4);
	}
	return iVar1;
}

int func_726(int iParam0, bool bParam1, int iParam2)
{
	if (iParam2 != -1)
	{
		return iParam2;
	}
	fVar0 = 1f;
	if (bParam1 && func_341(1811977508, 1, 0))
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
			if (func_578(iVar25, 0) && func_598(iVar25, -1921346699))
			{
				return ceil((IntToFloat(&Var1.f_12[iVar24]) * fVar0));
			}
		}
		iVar24++;
	}
	return 0;
}

void func_727(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_728(int iParam0)
{
	if (!func_183(iParam0))
	{
		return 0;
	}
	cVar0 = func_359(iParam0);
	if (is_string_null_or_empty(&cVar0))
	{
		return 0;
	}
	iVar1 = get_hash_key(&cVar0);
	iVar2 = iVar1;
	return iVar2;
}

bool func_729(int iParam0)
{
	return _0x4dac398297981b87(iParam0);
}

Vector3 func_730(vector3 vParam0, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, bool bParam13)
{
	bVar2 = 9999999f;
	func_1221(&bVar12, &uVar13);
	bVar14 = false;
	if (bVar12)
	{
		if (func_1222() == 0 && !func_1223(0))
		{
			bVar14 = true;
		}
	}
	if (!func_1224(15, &Var15))
	{
		return 0f, 0f, 0f;
	}
	_0x748c5f51a18cb8f0(0);
	Var20 = { Var15 };
	if (bParam7)
	{
		bVar10 = func_1225();
		if (_does_volume_exist(bVar10))
		{
		}
	}
	if (!func_1226(Global_1310720->f_21))
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
			vVar7 = { func_1227(iVar0, iVar1) };
			bVar11 = func_1228(iVar0, iVar1);
			bVar3 = vdist(vParam0, vVar7);
			if (((((bVar3 < bVar2 && bVar3 > bParam10) && !func_391(vVar7)) && func_1229(iVar0, bParam8, iParam12)) && !func_1230(iVar0)) || bVar11)
			{
				if (func_1231(vVar7, iVar0, iVar1, iParam5, iParam6, bVar14, bVar10, bParam9, bParam13))
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

int func_731(vector3 vParam0, bool bParam3)
{
	iVar0 = func_1232(vParam0);
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

void func_732()
{
	disable_script_brain_set(1);
}

void func_733()
{
}

void func_734()
{
	disable_script_brain_set(2);
}

bool func_735(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_736(char* sParam0)
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

void func_737(int iParam0)
{
	if (func_735(iParam0, 1))
	{
		func_1233(1);
	}
}

int func_738()
{
	return -1904156936;
}

bool func_739(int iParam0)
{
	if (!func_183(iParam0))
	{
		return false;
	}
	switch (func_188(iParam0))
	{
		case 1:
			iVar0 = func_266(iParam0);
			return (((((((((((((iVar0 == 38 || iVar0 == 39) || iVar0 == 43) || iVar0 == 0) || iVar0 == 1) || iVar0 == 3) || iVar0 == 4) || iVar0 == 60) || iVar0 == 59) || iVar0 == 77) || iVar0 == 64) || iVar0 == 44) || iVar0 == 42) || iVar0 == 67);
		case 8:
			iVar1 = func_266(iParam0);
			return (((iVar1 == 67 || iVar1 == 82) || iVar1 == 83) || iVar1 == 1);
	}
	return false;
}

int func_740()
{
	return 166188472;
}

int func_741()
{
	return 2015838421;
}

int func_742()
{
	return 207908017;
}

var func_743(var uParam0, char* sParam1, var uParam2, int iParam3, int iParam4)
{
	vVar0.x = iParam3;
	vVar0.f_1 = sParam1;
	vVar0.f_2 = uParam2;
	uVar3 = _0x9f2cc2439a04e7ba(uParam0, &vVar0, iParam4);
	return uVar3;
}

var func_744(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	Var0 = iParam2;
	Var0.f_1 = sParam1;
	uVar3 = _0x815c4065ae6e6071(uParam0, &Var0, iParam3);
	return uVar3;
}

void func_745(var uParam0)
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

int func_746(var uParam0, int iParam1)
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

char* func_747(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	if (is_entity_a_ped(iParam0))
	{
		return func_1234(get_ped_index_from_entity_index(iParam0));
	}
	else if (is_entity_an_object(iParam0))
	{
		return func_1235(get_object_index_from_entity_index(iParam0));
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		return func_1236(get_vehicle_index_from_entity_index(iParam0));
	}
	return "";
}

int func_748(var uParam0, char* sParam1)
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

int func_749(var uParam0)
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

void func_750(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 || iParam1);
}

void func_751(var uParam0, int iParam1)
{
	uParam0->f_8 = (uParam0->f_8 || iParam1);
}

int func_752()
{
	return Global_1572864->f_8;
}

void func_753(char[4] cParam0, int iParam1)
{
	func_1237(cParam0, iParam1);
	func_1238(cParam0, iParam1, 26);
}

int func_754(char[4] cParam0)
{
	if (is_entity_dead(iVar668))
	{
		iLocal_671 = func_1239(138, 1, 0, 0, 1, 1);
		return 0;
	}
	else
	{
		func_151(cParam0, iVar668, 0, 0, 0, 0, 0);
	}
	if (func_120(cParam0, 4))
	{
		iVar0 = _create_volume_box_with_custom_name(2793.85f, -1169.772f, 47.924f, 0f, 0f, 59.47334f, 7.5f, 7f, 3.115668f, "m_sbiIntroBlockingVolume");
		_0x2fcd528a397e5c88(iVar0, 16384);
		func_1240(Global_35, func_216(1, 0), 2, 1073741824);
		func_1240(iVar663, func_216(1, 1), 2, 1073741824);
		func_1240(iVar664, func_216(1, 2), 2, 1073741824);
		func_1241();
	}
	return 1;
}

int func_755(char[4] cParam0)
{
	if (!func_170(cParam0, 1, 0))
	{
		return 0;
	}
	if (Global_40.f_7729 != iVar416)
	{
		func_1242(Global_35);
	}
	func_172(cParam0, 1);
	func_1243(cParam0, "ODR5_OBJ_FLW", -1082130432, 0, 0, -1, -1, 0);
	return 1;
}

int func_756(char[4] cParam0)
{
	if (!func_168(cParam0, 1))
	{
		return 0;
	}
	func_469(sLocal_177, sLocal_180, 1, iVar663);
	func_1244(0);
	if (func_439(138, 1))
	{
		func_440(138, 1, 1, 0, 0);
	}
	func_1245(&cLocal_261);
	_get_anim_scene_entity_matrix(&(uLocal_230[3]), func_1234(iVar663), &vLocal_277, true, cLocal_160, 2);
	_get_anim_scene_entity_matrix(&(uLocal_230[4]), func_1234(iVar664), &vLocal_289, true, cLocal_162, 2);
	set_ped_config_flag(iVar663, 301, true);
	set_ped_config_flag(iVar664, 301, true);
	set_audio_flag("OpenWorldMusicOnMission", true);
	func_467(2076072835, 1, -1f, 1, 0, 0, 0, 0);
	func_1246(1f);
	func_27(&uLocal_557, 0);
	func_165(cParam0, 0);
	_0x437c08db4febe2bd(Global_35, "cautious", 0.6f, -1);
	func_1247(cParam0);
	func_99(cParam0, 33554432);
	func_140(cParam0, func_33(cParam0), 65536);
	func_1248(cParam0, sLocal_163);
	func_1248(cParam0, sLocal_165);
	func_1248(cParam0, sLocal_164);
	func_1250(cParam0, func_1249(sLocal_163));
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
	if (!func_386(iLocal_228, 1))
	{
		func_1251(iVar663, iVar664, &Var0, 0f, 0f, 0f, sLocal_146, 1032, 1, 3.5f, 1f, 1073069561, 1f, 1092616192, -1, 1, 1, 0, 4194304, 1);
		force_ped_motion_state(iVar663, -668482597, false, 0, false);
		func_412(&iLocal_228, 1);
	}
	if (!func_386(iLocal_228, 2))
	{
		func_1251(iVar664, Global_35, &Var0, 0f, 0f, 0f, sLocal_146, 1032, 1, 4.5f, 2f, 1073069561, 1f, 1092616192, -1, 1, 1, 0, 4194304, 1);
		func_1252(Global_35, iVar664, &Var0, -1082130432, 0, 0, -1082130432, -1082130432, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 1, 0, -1, 1, -1082130432, -1082130432, 1);
		force_ped_motion_state(iVar664, -668482597, false, 0, false);
		func_412(&iLocal_228, 2);
	}
	remove_all_shocking_events(false);
	_0xeacebaae0a33fb3f(player_id());
	return 1;
}

int func_757(char[4] cParam0)
{
	set_ped_reset_flag(Global_35, 175, true);
	disable_control_action(0, -822242784, false);
	switch (func_1253(cParam0))
	{
		case 0:
			func_1243(cParam0, "ODR5_OBJ_FLW", -1082130432, 0, 0, -1, -1, 0);
			func_1254(cParam0, iVar663, 1105014447, 422991367, 1, 1);
			func_135(cParam0, 1);
			break;
		case 1:
			if (iVar407 == 0 && func_1255(cParam0, "ODR5_LTSGO", 0))
			{
				func_135(cParam0, 2);
			}
			break;
		case 2:
			if (iVar407 == 0 && func_1256(cParam0, "ODR5_WALK", 0, 0, 0))
			{
				func_135(cParam0, 51);
			}
			break;
		case 5:
			if (func_874(Global_35, iVar663, 1, 1) < 20f && !func_1257())
			{
				func_1258(cParam0, "ODR5_NEARSQU", 0, 0);
				func_135(cParam0, 51);
			}
			break;
		case 6:
			if ((func_874(Global_35, iVar663, 1, 1) < 20f && func_874(Global_35, iVar664, 1, 1) > 10f) && !func_1257())
			{
				func_1258(cParam0, "ODR5_NEARSQU", 1, 0);
				func_135(cParam0, 51);
			}
			break;
		case 10:
			if (func_874(Global_35, iVar663, 1, 1) < 40f)
			{
				if (func_1256(cParam0, "ODR5_NEARSQU_B", 0, 20f, 0))
				{
					func_135(cParam0, 51);
				}
			}
			break;
	}
	func_1259();
	func_1261(cParam0, func_1260(cParam0), 15f, 45f, 0, 0, 1, 422991367);
	func_1262(sLocal_177, iVar663, 40f, 5f, 0);
	if (func_1263(cParam0) > 0)
	{
		func_1264(cParam0);
	}
	func_1265(cParam0);
	func_1266(cParam0);
	func_1267(cParam0, 1, 1, 1);
	func_1268(cParam0);
	switch (func_1263(cParam0))
	{
		case 0:
			if (func_1269(&uLocal_557) < 5f)
			{
				func_1246(1f);
			}
			func_1270(iVar663, iVar664, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			func_1270(iVar664, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			func_1271(Global_35, iVar664, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			func_1272(&cLocal_261, iVar664);
			if (!func_386(iLocal_224, 16777216))
			{
				if (func_889())
				{
					func_412(&iLocal_224, 16777216);
				}
			}
			if ((func_1253(cParam0) > 1 && func_893(cParam0)) && func_386(iLocal_224, 16777216))
			{
				func_897(cParam0);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			if (func_1269(&uLocal_557) < 5f)
			{
				func_1246(1f);
			}
			func_1270(iVar663, iVar664, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			func_1270(iVar664, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			func_1271(Global_35, iVar664, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			func_1272(&cLocal_261, iVar664);
			if (func_435(iVar663, 0) && get_ped_waypoint_progress(iVar663) > 79)
			{
				func_135(cParam0, 5);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			func_1270(iVar664, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			func_1271(Global_35, iVar664, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			func_1272(&cLocal_261, iVar664);
			if (func_435(iVar663, 0) && get_ped_waypoint_progress(iVar663) > 84)
			{
				func_1246(0.8f);
			}
			if (&iLocal_337[1] == 37)
			{
				func_1273(cParam0);
				func_1274(Global_35, 1);
				func_1275(iVar663, 1);
				func_1275(iVar664, 1);
				func_1276(&cLocal_261);
				func_135(cParam0, 6);
				func_134(cParam0, 4);
			}
			break;
		case 4:
			func_1277(1, 0, 1, 1, 1, 1, 1);
			if (_0xa24c1d341c6e0d53(0, 0, 0))
			{
				func_1246(0.8f);
			}
			else
			{
				func_1246(0.5f);
			}
			func_1278();
			if (!func_386(iLocal_224, 128))
			{
				if (func_1279(cParam0, 0))
				{
					func_1280(cParam0, 0);
					if (!func_1257())
					{
						return 1;
					}
				}
			}
			break;
	}
	return 0;
}

int func_758(char[4] cParam0)
{
	func_553(&uLocal_557);
	set_audio_flag("OpenWorldMusicOnMission", false);
	func_1281(cParam0, iVar663, 1);
	func_441(sLocal_184, sLocal_183);
	func_469(sLocal_177, sLocal_180, 0, iVar663);
	func_1282();
	set_ped_config_flag(iVar663, 301, false);
	set_ped_config_flag(iVar664, 301, false);
	return 1;
}

void func_759(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, char* sParam8, int iParam9, int iParam10)
{
	func_140(cParam0, iParam1, iParam9);
	func_1283(cParam0, iParam1);
	func_1238(cParam0, iParam1, iParam2);
	func_1284(cParam0, &iParam3, iParam1, 0);
	func_1284(cParam0, &iParam4, iParam1, 2);
	func_1284(cParam0, &iParam5, iParam1, 4);
	func_1284(cParam0, &iParam6, iParam1, 5);
	func_1284(cParam0, &iParam7, iParam1, 7);
	func_917(cParam0, iParam1, 0);
	StringCopy(&cVar0, sParam8, 32);
	func_1285(cParam0, iParam1, cVar0);
	func_1286(cParam0, iParam1, iParam10);
}

int func_760(char[4] cParam0)
{
	func_1240(Global_35, func_216(2, 6), 2, 1073741824);
	func_1240(iVar663, func_216(2, 5), 2, 1073741824);
	func_1240(iVar664, func_216(2, 3), 2, 1073741824);
	func_1240(&(Local_14.f_46[0]), func_216(2, 4), 2, 1073741824);
	func_1287(1);
	func_1264(cParam0);
	func_1288(cParam0, "PBL3_Enter_Right");
	return 1;
}

int func_761(char[4] cParam0)
{
	if (!func_168(cParam0, 1))
	{
		return 0;
	}
	func_453(func_381(0, 1), 20f, 0, 0, 5);
	clear_area(func_381(0, 1), 50f, 40);
	func_167(cParam0, 1);
	func_1273(cParam0);
	func_1289(0);
	func_1287(3);
	func_1264(cParam0);
	func_441(sLocal_185, sLocal_186);
	func_1243(cParam0, "ODR5_OBJ_FLD", -1082130432, 0, 0, -1, -1, 0);
	return 1;
}

int func_762(char[4] cParam0)
{
	if (!func_170(cParam0, 1, 0))
	{
		return 0;
	}
	if (func_435(iVar663, 0))
	{
		_0x94a3c1b804d291ec(iVar663, 0, 0, 0, 1);
	}
	func_1290(cParam0);
	func_1289(1);
	func_1287(2);
	func_1291(1);
	func_27(&uLocal_453, 0);
	func_469(sLocal_178, sLocal_181, 1, &(Local_14.f_46[0]));
	func_1292(cParam0);
	_0x437c08db4febe2bd(Global_35, "cautious", 0.6f, -1);
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
	func_1251(iVar663, Global_35, &Var0, 0f, 0f, 0f, sLocal_147, 25608, 1, 5f, -1082130432, 1073069561, 1f, 1092616192, -1, 1, 0, 0, 0, 1);
	func_1252(Global_35, iVar663, &Var0, -1082130432, 0, 0, -1082130432, -1082130432, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 1, 0, -1, 1, -1082130432, -1082130432, 1);
	func_1245(&cLocal_261);
	set_ped_config_flag(iVar663, 301, true);
	remove_all_shocking_events(false);
	_0xeacebaae0a33fb3f(player_id());
	return 1;
}

int func_763(char[4] cParam0)
{
	switch (func_1253(cParam0))
	{
		case 0:
			func_1243(cParam0, "ODR5_OBJ_FLD", -1082130432, 0, 0, -1, -1, 0);
			iLocal_639 = _blip_add_for_entity(831283580, &(Local_14.f_46[0]));
			_blip_set_modifier(iVar636, 1995761918);
			iLocal_260 = create_itemset(true);
			func_955(&(Local_14.f_46[0]), iVar257);
			func_213(&uLocal_432);
			func_135(cParam0, 5);
			break;
		case 5:
			if (func_1269(&uLocal_432) > 1.75f && !func_1257())
			{
				task_look_at_entity(&(Local_14.f_112[0]), Global_35, 3500, 48, 51, 1);
				func_145(cParam0, &(Local_14.f_112[0]), "ODR5_COP1", 0);
				iVar0 = func_371();
				if ((iVar0 % 2) == 0)
				{
					func_1256(cParam0, "ODR5_AMBCOP", 1, 0, 0);
				}
				else
				{
					func_1256(cParam0, "ODR5_AMBCOP2", 1, 0, 0);
				}
				func_135(cParam0, 10);
			}
			break;
		case 10:
			if (iVar407 == 0 && func_1256(cParam0, "ODR5_STREET", 0, 1f, 0))
			{
				if (func_874(Global_35, iVar663, 1, 1) > 15f)
				{
					func_1256(cParam0, "ODR5_OBJ_FLD", 4, 0, 0);
				}
				func_135(cParam0, 51);
			}
			break;
		case 15:
			if (!func_1257())
			{
				func_135(cParam0, 16);
			}
			else if (func_1293("ODR5_STREET"))
			{
				pause_scripted_conversation("ODR5_STREET", true, false, false, false);
				if (func_1294("ODR5_STREET"))
				{
					func_135(cParam0, 16);
				}
			}
			break;
		case 16:
			if (func_1256(cParam0, "ODR5_GONERIGHT", 0, 0, 0))
			{
				func_135(cParam0, 17);
			}
			break;
		case 17:
			if (!func_1293("ODR5_GONERIGHT"))
			{
				if (func_1294("ODR5_STREET"))
				{
					restart_scripted_conversation("ODR5_STREET");
				}
				func_135(cParam0, 51);
			}
			break;
		case 18:
			if (func_1256(cParam0, "ODR5_ALLEY", 0, 0, 0))
			{
				func_135(cParam0, 51);
			}
			break;
	}
	func_1295(cParam0, func_1260(cParam0), sLocal_147, 15f, 45f, iVar257, 0, 1, 1117126656, 422991367);
	func_1266(cParam0);
	func_1296();
	func_1262(sLocal_178, &(Local_14.f_46[0]), 90f, 30f, 0);
	func_1264(cParam0);
	func_1297(cParam0);
	func_1298(cParam0);
	func_1299(0);
	func_1267(cParam0, 1, 1, 1);
	func_1268(cParam0);
	if ((func_435(iVar663, 0) && func_435(&(Local_14.f_46[0]), 0)) && has_entity_clear_los_to_entity_in_front(iVar663, &(Local_14.f_46[0]), 17))
	{
		func_1300(cParam0, &(Local_14.f_46[0]), &(iLocal_702[32]), 32, 15, "MISSION_MESSAGE_15");
	}
	set_ped_reset_flag(Global_35, 175, true);
	switch (func_1263(cParam0))
	{
		case 0:
			func_1270(iVar663, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			func_1271(Global_35, iVar663, 1, 1, 1, 1, 1, 1, 0, 1, 1);
			func_1272(&cLocal_261, iVar663);
			if (iVar337 == 27)
			{
				func_134(cParam0, 1);
			}
			break;
		case 1:
			func_1270(iVar663, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			func_1271(Global_35, iVar663, 1, 1, 1, 1, 1, 1, 0, 1, 1);
			func_1272(&cLocal_261, iVar663);
			if (((&iLocal_337[0] == 15 || &iLocal_337[0] == 16) || &iLocal_337[0] == 37) || &iLocal_337[0] == 38)
			{
				if (!_0x91a5f9cbebb9d936(&(iLocal_577[5])))
				{
					if (!_does_volume_exist(&(iLocal_1732[5])))
					{
						iLocal_1732[5] = _create_volume_box_with_custom_name(2689.768f, -1177.503f, 57.93937f, 0f, 0f, 0f, 14f, 36f, 16f, "ODR5_SBIVOL_COURTYARD");
					}
					iLocal_577[5] = func_455(&(iLocal_1732[5]), 0, 0, 0);
				}
				set_ped_max_move_blend_ratio(Global_35, 1f);
				func_1274(Global_35, 1);
				func_1275(iVar663, 1);
				func_1276(&cLocal_261);
				func_134(cParam0, 2);
			}
			break;
		case 2:
			set_ped_max_move_blend_ratio(Global_35, 1f);
			func_1277(1, 1, 1, 1, 1, 1, 1);
			if (func_1301())
			{
				if ((func_386(iLocal_224, 64) && func_386(iLocal_224, 1024)) && func_386(iLocal_224, 4096))
				{
					func_1302();
					func_412(&iLocal_224, -2147483648);
					_set_anim_scene_playback_list_bool(&(uLocal_230[8]), "PL_ODRISCOLLS_EXIT", true);
					set_bit(&(Global_1956580->f_1), 6);
					func_472(&iLocal_639);
					func_134(cParam0, 3);
				}
			}
			break;
		case 3:
			_0xc9caeaeec1256e54(1331687942);
			_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			disable_control_action(0, -562475458, false);
			if (func_386(iLocal_224, -2147483648))
			{
				func_1303();
				if (_is_anim_scene_active(&(uLocal_230[8])))
				{
					func_1304();
					_set_anim_scene_playback_list_bool(&(uLocal_230[6]), "PL_DUTCH_EXIT", true);
					func_1305(&iLocal_224, -2147483648);
				}
				if (_0x005e6f28dd7ed58d(&(uLocal_230[8]), "G_M_M_UNIDUSTER_04"))
				{
					force_ped_motion_state(&(Local_14.f_46[0]), -668482597, false, 1, false);
					func_1306();
					task_follow_waypoint_recording(0, sLocal_149, 0, 25610, -1, 0, 0, -1);
					task_smart_flee_ped(0, Global_35, 9999f, -1, 0, 1f, 0);
					func_1307(&(Local_14.f_46[0]), 0, -1082130432, -1082130432);
				}
				if (_0x005e6f28dd7ed58d(&(uLocal_230[8]), "G_M_M_UNIDUSTER_04^1"))
				{
					force_ped_motion_state(&(Local_14.f_50[0]), -668482597, false, 1, false);
					func_1306();
					task_follow_to_offset_of_entity(0, &(Local_14.f_46[0]), -0.5f, -1f, 0f, 1f, -1, 1036831949, 1, 1, 0, 0, 1);
					func_1307(&(Local_14.f_50[0]), 0, -1082130432, -1082130432);
				}
			}
			if ((_is_anim_scene_started(&(uLocal_230[6]), false) && _0x8d81e7824b7753f7(&(uLocal_230[6]), "S_DUTCH_EXIT", 1)) && _get_anim_scene_progress(&(uLocal_230[6])) > 0.9f)
			{
				if (func_435(Global_35, 0))
				{
					_0x437c08db4febe2bd(Global_35, "cautious", 0f, -1);
					_0x437c08db4febe2bd(Global_35, "stealth", 1f, -1);
					set_ped_config_flag(Global_35, 43, false);
					clear_bit(&(Global_1956580->f_1), 6);
					set_player_control(player_id(), true, 0, false);
				}
				func_134(cParam0, 4);
			}
			break;
		case 4:
			if (_0x005e6f28dd7ed58d(&(uLocal_230[6]), "IG_Dutch"))
			{
				force_ped_motion_state(iVar663, -668482597, false, 1, false);
				_0x437c08db4febe2bd(iVar663, "stealth", 1f, -1);
				func_1308();
				return 1;
			}
			break;
	}
	return 0;
}

int func_764(var uParam0)
{
	if (func_435(Global_35, 0))
	{
		_0x437c08db4febe2bd(Global_35, "stealth", 0f, -1);
		set_ped_config_flag(Global_35, 43, false);
	}
	func_1309(Local_14.f_112[0], 0);
	func_1309(Local_14.f_112[1], 0);
	func_1309(Local_14.f_46[0], 0);
	func_1309(Local_14.f_50[0], 0);
	func_454(func_381(0, 1), 20f, 5);
	func_469(sLocal_178, sLocal_181, 0, &(Local_14.f_46[0]));
	func_1282();
	set_ped_config_flag(iVar663, 301, false);
	return 1;
}

int func_765(char[4] cParam0)
{
	func_1310(cParam0);
	func_1308();
	return 1;
}

int func_766(char[4] cParam0)
{
	if (!func_168(cParam0, 1))
	{
		return 0;
	}
	if (!func_8(cParam0, 8))
	{
		func_1291(1);
	}
	func_1311(cParam0, &(Local_14.f_46[0]));
	func_140(cParam0, func_33(cParam0), 256);
	func_1312(0);
	func_172(cParam0, 1);
	return 1;
}

int func_767(char[4] cParam0)
{
	if (!func_170(cParam0, 1, 0))
	{
		return 0;
	}
	func_468(-1974600021, 0, 0);
	func_468(1402079862, 0, 0);
	func_468(-400095041, 0, 0);
	func_468(-1712524704, 0, 0);
	func_468(1069752686, 0, 0);
	func_468(-667734154, 0, 0);
	func_468(-439457722, 0, 0);
	func_468(1544967384, 0, 0);
	func_468(-1975504597, 0, 0);
	func_468(-2138694217, 0, 0);
	func_447(0);
	func_553(&uLocal_560);
	return 1;
}

int func_768(char[4] cParam0)
{
	switch (func_1253(cParam0))
	{
		case 0:
			func_1256(cParam0, "ODR5_OBJ_GOTOROOF", 4, 0, 0);
			iLocal_639 = func_1313(408396114, &(iLocal_673[13]), 1);
			func_135(cParam0, 51);
			break;
		case 1:
			func_1256(cParam0, "ODR5_LOOKSNIPE", 1, 0, 0);
			func_135(cParam0, -1);
			break;
		case 2:
			func_1256(cParam0, "ODR5_ROOF", 1, 0, 0);
			func_135(cParam0, -1);
			break;
		case 5:
			func_1314();
			func_1256(cParam0, "ODR5_SNIPECASE", 1, 0, 0);
			func_135(cParam0, 6);
			break;
	}
	if (func_1315(cParam0, &(iLocal_673[6]), &(iLocal_673[7]), "ODR5_WRN_SPLC", "ODR5_FAIL_SPLC", 0, 0, 1, 408396114))
	{
		if (does_blip_exist(iVar636))
		{
			func_472(&iLocal_639);
		}
		if (does_blip_exist(iVar637))
		{
			func_472(&iLocal_640);
		}
		if ((func_435(Global_35, 0) && func_435(iVar663, 0)) && func_874(Global_35, iVar663, 1, 1) < 7.5f)
		{
			if (!func_26(&uLocal_560) || func_1316(&uLocal_560, 15f))
			{
				if (func_1255(cParam0, "ODR5_LADDERDAWD", 0))
				{
					func_213(&uLocal_560);
				}
			}
		}
	}
	else if (iVar356 >= 8)
	{
		if (!does_blip_exist(iVar637))
		{
			iLocal_640 = func_1317(408396114, &(Local_14.f_116[0]), 1);
		}
	}
	else if (iVar356 >= 6)
	{
		if (!does_blip_exist(iVar636))
		{
			iLocal_639 = func_1313(408396114, &(iLocal_673[4]), 1);
		}
	}
	else if (iVar356 >= 5)
	{
		if (!does_blip_exist(iVar636))
		{
			iLocal_639 = func_1313(408396114, &(iLocal_673[12]), 1);
		}
	}
	else if (iVar356 >= 4)
	{
		if (!does_blip_exist(iVar636))
		{
			iLocal_639 = func_1313(408396114, &(iLocal_673[11]), 1);
		}
	}
	else if (!does_blip_exist(iVar636))
	{
		iLocal_639 = func_1313(408396114, &(iLocal_673[13]), 1);
	}
	switch (func_1263(cParam0))
	{
		case 0:
			func_1264(cParam0);
			func_1318(cParam0);
			func_1319(cParam0);
			func_1320(cParam0);
			func_1267(cParam0, 1, 0, 1);
			func_1268(cParam0);
			func_1321();
			if (is_entity_in_volume(Global_35, &(iLocal_673[4]), true, 0) && !func_26(&uLocal_429))
			{
				vVar0 = { get_entity_coords(Global_35, true, false) };
				if (vVar0.z < 61.5f)
				{
					func_213(&uLocal_429);
				}
			}
			if (func_1269(&uLocal_429) > 0.7f)
			{
				if (func_1322(cParam0))
				{
					set_player_control(player_id(), false, 2048, false);
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_769(var uParam0)
{
	set_player_control(player_id(), true, 0, false);
	func_553(&uLocal_539);
	func_553(&uLocal_429);
	func_943(Local_14.f_103[2]);
	func_943(Local_14.f_46[0]);
	func_943(Local_14.f_50[0]);
	func_444(&iLocal_637);
	func_1291(0);
	func_1282();
	return 1;
}

int func_770(char[4] cParam0)
{
	func_1264(cParam0);
	func_1323(cParam0);
	set_player_control(player_id(), false, 2048, false);
	return 1;
}

int func_771(char[4] cParam0)
{
	if (!func_168(cParam0, 1))
	{
		return 0;
	}
	if (!func_8(cParam0, 8))
	{
		func_1310(cParam0);
		func_1312(1);
	}
	func_1323(cParam0);
	func_412(&iLocal_225, 1);
	func_1264(cParam0);
	set_player_control(player_id(), true, 0, false);
	return 1;
}

int func_772(char[4] cParam0)
{
	if (!func_170(cParam0, 1, 0))
	{
		return 0;
	}
	func_99(cParam0, 4194304);
	func_99(cParam0, 33554432);
	func_1292(cParam0);
	func_1323(cParam0);
	func_1264(cParam0);
	_0xb8de69d9473b7593(Global_35, 16);
	_0xb8de69d9473b7593(Global_35, 17);
	_0xeae3b5b019c8d23f(Global_35, 262143);
	return 1;
}

int func_773(char[4] cParam0)
{
	switch (func_1253(cParam0))
	{
		case 0:
			if (!does_blip_exist(iVar637))
			{
				func_1243(cParam0, "ODR5_OBJ_APRCHSNPR", -1082130432, 0, 0, -1, -1, 0);
				iLocal_640 = func_1317(408396114, &(Local_14.f_116[0]), 1);
			}
			break;
		case 1:
			if (does_blip_exist(iVar637))
			{
				func_472(&iLocal_640);
			}
			if (does_blip_exist(iVar636))
			{
				func_472(&iLocal_639);
			}
			if (!does_blip_exist(iVar637))
			{
				iLocal_640 = _blip_add_for_entity(831283580, &(Local_14.f_24[0]));
			}
			func_1243(cParam0, "ODR5_OBJ_KILLSNPR", -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, 51);
			break;
		case 5:
			if (!func_1257() && func_1256(cParam0, "ODR5_BREAKHOLD", 0, 0, 0))
			{
				func_135(cParam0, 51);
			}
			break;
		case 10:
			func_1243(cParam0, "ODR5_OBJ_OBSHNG", -1082130432, 0, 0, -1, -1, 0);
			func_135(cParam0, 11);
			break;
		case 11:
			if (func_1256(cParam0, "ODR5_SNIPEDEAD", 0, 2f, 0))
			{
				func_1324(cParam0, "ODR5_OBJ_OBSHNG", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				func_135(cParam0, 51);
			}
			break;
	}
	func_1267(cParam0, 0, 0, 0);
	func_1325(cParam0);
	func_1264(cParam0);
	func_1323(cParam0);
	disable_control_action(0, -1404316431, false);
	disable_control_action(0, -562475458, false);
	disable_control_action(0, -640622144, false);
	_uiprompt_disable_prompt_type_this_frame(3);
	switch (func_1263(cParam0))
	{
		case 0:
			if (!func_386(iLocal_224, 536870912))
			{
				if (iVar339 == 11 || is_entity_dead(&(Local_14.f_24[0])))
				{
					if (does_entity_exist(iVar631))
					{
						delete_object(&iLocal_634);
					}
					func_447(1);
					func_412(&iLocal_224, 536870912);
				}
			}
			if (is_entity_dead(&(Local_14.f_24[0])))
			{
				func_601(5);
				if (does_pickup_exist(iVar635) && !has_pickup_been_collected(iVar635))
				{
					iLocal_640 = _blip_add_for_coord(1664425300, get_pickup_coords(iVar635));
					_blip_set_modifier(iVar637, -401963276);
				}
				func_135(cParam0, 10);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			_0xc3abcfbc7d74afa5(Global_35, 9, 1);
			if (does_pickup_exist(iVar635) && has_pickup_been_collected(iVar635))
			{
				_set_blip_flash_style(iVar637, -401963276);
				func_472(&iLocal_640);
			}
			if (func_1326(cParam0, "DST5_MCS3"))
			{
				if (iVar406 > 1)
				{
					return 0;
				}
				if (func_386(iLocal_224, 524288) && !func_1293("ODR5_SNIPEDEAD"))
				{
					return 1;
				}
			}
			break;
	}
	return 0;
}

int func_774(char[4] cParam0)
{
	func_880(cParam0, 4194304);
	if (does_blip_exist(iVar637))
	{
		_set_blip_flash_style(iVar637, -401963276);
		func_472(&iLocal_640);
	}
	if (does_pickup_exist(iVar635))
	{
		remove_pickup(iVar635);
	}
	func_441(sLocal_186, sLocal_185);
	set_ped_config_flag(&(Local_14.f_24[0]), 249, false);
	func_470(0);
	if (func_435(Global_35, 0))
	{
		set_player_can_use_cover(player_id(), true);
		_0x4e806a395d43a458(1);
		set_ped_config_flag(Global_35, 258, false);
	}
	func_1282();
	_0x949b2f9ed2917f5d(Global_35, 16);
	_0x949b2f9ed2917f5d(Global_35, 17);
	return 1;
}

int func_775(char[4] cParam0)
{
	func_1310(cParam0);
	func_1327(0);
	return 1;
}

int func_776(char[4] cParam0)
{
	if (!func_1328(cParam0))
	{
		return 0;
	}
	if (!func_168(cParam0, 1))
	{
		return 0;
	}
	func_1329(iVar663);
	func_1287(13);
	func_1264(cParam0);
	func_444(&iLocal_634);
	func_458(0.54f);
	iLocal_616 = add_cover_point(func_381(7, 2), func_450(7, 2), 1, 2, 5, false);
	func_1330(1);
	func_1331(cParam0);
	func_451(func_381(6, 0), 1000f, 0);
	func_1332(func_381(6, 0), 1000f, 0, 0, 0, 0, 0);
	_0x94a3c1b804d291ec(iVar664, 1, 0, 0, 1);
	_0x94a3c1b804d291ec(iVar663, 1, 0, 0, 1);
	if (func_435(Global_35, 0))
	{
		_set_entity_health(Global_35, get_ped_max_health(Global_35), 0);
	}
	func_167(cParam0, 1);
	func_1333(&(Local_14.f_9[0]), 0, 1);
	func_1333(&(Local_14.f_9[1]), 0, 1);
	_0xe9b3fec825668291(Global_35, 1402226560, 5f);
	return 1;
}

int func_777(char[4] cParam0)
{
	func_1334();
	if (!func_170(cParam0, 1, 0))
	{
		return 0;
	}
	if (!bLocal_220)
	{
		func_1335(1);
		bLocal_220 = true;
		return 0;
	}
	if (!bLocal_221)
	{
		func_1336();
		bLocal_221 = true;
		return 0;
	}
	set_bit(&(Global_1956580->f_1), 6);
	_set_ped_crouch_movement(Global_35, false, 0, true);
	func_1287(15);
	func_1264(cParam0);
	set_relationship_between_groups(6, -1996978098, 707888648);
	set_relationship_between_groups(6, -1996978098, 1030835986);
	set_relationship_between_groups(6, 707888648, -1996978098);
	set_relationship_between_groups(3, 707888648, 1030835986);
	set_relationship_between_groups(6, 1030835986, -1996978098);
	set_relationship_between_groups(3, 1030835986, 707888648);
	func_1337();
	func_213(&uLocal_548);
	func_444(Local_14.f_119[1]);
	func_444(Local_14.f_119[2]);
	func_444(Local_14.f_119[0]);
	func_444(Local_14.f_119[3]);
	func_1309(Local_14.f_3[0], 0);
	func_1309(Local_14.f_3[1], 0);
	func_432(1);
	set_current_ped_weapon(iVar663, -95736505, true, 0, false, false);
	set_current_ped_weapon(iVar664, 1240907314, true, 0, false, false);
	func_433(0);
	func_1292(cParam0);
	func_99(cParam0, 33554432);
	_0x7d654266025e921b(176660218);
	set_entity_invincible(Global_35, true);
	set_ped_config_flag(Global_35, 254, false);
	if (does_entity_exist(iVar626) && !is_entity_dead(iVar626))
	{
		set_entity_coords(iVar626, 2688.434f, -1113.461f, 51.3415f, true, false, true, true);
		set_entity_rotation(iVar626, 89.9f, 60.22f, -60.22f, 2, true);
	}
	return 1;
}

int func_778(char[4] cParam0)
{
	switch (func_1253(cParam0))
	{
		case 0:
			func_1314();
			func_1256(cParam0, "ODR5_DUTCHHELP", 1, 0, 0);
			func_1254(cParam0, iVar663, 1105014447, 422991367, 1, 1);
			func_1254(cParam0, iVar664, 1105014447, 422991367, 1, 1);
			func_135(cParam0, 1);
			break;
		case 1:
			if (func_1256(cParam0, "ODR5_OBJ_PROTECT", 4, 0, 0))
			{
				func_135(cParam0, 51);
			}
			break;
		case 5:
			if (func_1256(cParam0, "ODR5_REINFO", 0, 0, 0))
			{
				func_135(cParam0, 51);
			}
			break;
		case 7:
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
				case 2:
					if (iLocal_253 <= iLocal_254)
					{
						func_135(cParam0, 8);
						if (iLocal_253 == iLocal_252)
						{
							iLocal_253++;
						}
					}
					break;
				case 1:
				case 3:
					if (iLocal_254 <= iLocal_253)
					{
						func_135(cParam0, 9);
						if (iLocal_254 == iLocal_252)
						{
							iLocal_254++;
						}
					}
					break;
				case 4:
					func_135(cParam0, 6);
					break;
			}
			break;
		case 6:
			if (func_1256(cParam0, "ODR5_ARTYL", 0, 0, 0))
			{
				func_135(cParam0, 51);
			}
			break;
		case 8:
			if (func_1256(cParam0, "ODR5_STAYCLOSE", 0, 0, 0))
			{
				func_135(cParam0, 51);
			}
			break;
		case 9:
			if ((func_1338() && func_1256(cParam0, "ODR5_OMW", 0, 0, 0)) || func_1256(cParam0, "ODR5_SADIERUN", 0, 0, 0))
			{
				func_135(cParam0, 51);
			}
			break;
		case 10:
			switch (get_random_int_in_range(0, 5))
			{
				case 0:
				case 2:
					if (iLocal_253 <= iLocal_254)
					{
						func_135(cParam0, 11);
						if (iLocal_253 == iLocal_252)
						{
							iLocal_253++;
						}
					}
					break;
				case 1:
				case 3:
					if (iLocal_254 <= iLocal_253)
					{
						func_135(cParam0, 12);
						if (iLocal_254 == iLocal_252)
						{
							iLocal_254++;
						}
					}
					break;
				case 4:
					func_135(cParam0, 13);
					break;
			}
			break;
		case 11:
			if (func_386(iLocal_226, 4096) || (func_386(iLocal_226, 2048) && func_1339(&(Local_14.f_98), 0) == 0))
			{
				if (func_1256(cParam0, "ODR5_KILLWAG", 0, 0, 0))
				{
					func_135(cParam0, 51);
				}
			}
			else if (func_386(iLocal_226, 2048) && func_1339(&(Local_14.f_98), 0) > 0)
			{
				if (func_1256(cParam0, "ODR5_DUTCHGATE", 0, 0, 0))
				{
					func_135(cParam0, 51);
				}
			}
			else
			{
				switch (get_random_int_in_range(0, 5))
				{
					case 0:
						if (func_1256(cParam0, "ODR5_HOLDUP", 0, 0, 0))
						{
							func_135(cParam0, 51);
						}
						break;
					case 1:
						if (func_1256(cParam0, "ODR5_DPATH", 0, 0, 0))
						{
							func_135(cParam0, 51);
						}
						break;
					case 2:
						if (func_1256(cParam0, "ODR5_WATCHIT", 0, 0, 0))
						{
							func_135(cParam0, 51);
						}
						break;
					case 3:
						if (func_1256(cParam0, "ODR5_ARTPATH", 0, 0, 0))
						{
							func_135(cParam0, 51);
						}
						break;
				}
			}
			break;
		case 12:
			if (func_1256(cParam0, "ODR5_SPATH", 0, 0, 0))
			{
				func_135(cParam0, 51);
			}
			break;
		case 13:
			if (func_1256(cParam0, "ODR5_ARTCOVER", 0, 0, 0))
			{
				func_135(cParam0, 51);
			}
			break;
	}
	if (func_435(Global_35, 0))
	{
		set_ped_reset_flag(Global_35, 25, true);
	}
	func_1340();
	func_1264(cParam0);
	func_1341();
	func_1342(cParam0);
	func_1343(cParam0);
	func_1344();
	func_1345(cParam0);
	func_1334();
	func_1346();
	func_1347(cParam0);
	switch (func_1263(cParam0))
	{
		case 0:
			if ((func_386(iLocal_226, 8192) && !func_1257()) && func_386(iLocal_224, 2097152))
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				return 1;
			}
			break;
	}
	return 0;
}

int func_779(char[4] cParam0)
{
	set_player_forced_aim(player_id(), false, 0, -1, false);
	clear_bit(&(Global_1956580->f_1), 6);
	func_438(&(Local_14.f_14), 0);
	func_438(&(Local_14.f_78), 0);
	_0x94a3c1b804d291ec(iVar664, 0, 0, 0, 1);
	_0x94a3c1b804d291ec(iVar663, 0, 0, 0, 1);
	set_entity_invincible(Global_35, false);
	func_1281(cParam0, iVar663, 1);
	func_1281(cParam0, iVar664, 1);
	_0x9851de7aec10b4e1(2689.475f, -1116.645f, 49.6782f, 2f, 1, 0);
	func_432(0);
	_0x50b72a754ee64a71(176660218);
	func_1282();
	remove_cover_point(iVar613);
	func_433(1);
	return 1;
}

int func_780(var uParam0)
{
	if (iVar624 == 0)
	{
		uLocal_627 = _0x6f3068258a499e52(uVar421, 2688.435f, -1113.968f, 51.849f, 9);
	}
	if (!_0x1ff441d7954f8709(iVar624))
	{
		return 0;
	}
	if (!does_entity_exist(iVar626))
	{
		uLocal_629 = _0x4735e2a4bb83d9da(iVar624);
		return 0;
	}
	else
	{
		set_entity_coords(iVar626, 2688.434f, -1113.461f, 51.3415f, true, false, true, true);
		set_entity_rotation(iVar626, 89.9f, 60.22f, -60.22f, 2, true);
	}
	return 1;
}

int func_781(char[4] cParam0)
{
	if (!func_170(cParam0, 1, 0))
	{
		return 0;
	}
	func_1340();
	func_438(&(Local_14.f_14), 0);
	func_438(&(Local_14.f_78), 0);
	func_438(&(Local_14.f_54), 0);
	if (does_rope_exist(iVar662))
	{
		delete_rope(&iLocal_665);
	}
	func_1348(&iLocal_635, 0, 1, 1);
	func_1349(cParam0);
	func_1292(cParam0);
	func_374(cParam0, 524288);
	func_1350(cParam0, 1);
	_0x9851de7aec10b4e1(2689.573f, -1119.497f, 49.8193f, 0.6f, 1, 0);
	return 1;
}

int func_782(var uParam0)
{
	start_anim_scene(&(uLocal_230[19]));
	iVar0 = func_279();
	func_1202(&iVar0, 15);
	func_1203(&iVar0, 0);
	func_1351(iVar0);
	func_875(Global_35, 2350.455f, 1331.184f, 101.5137f, 311.7128f, 2, 1073741824);
	func_875(iVar666, 2349.853f, 1333.84f, 102.3434f, 294.5476f, 2, 1073741824);
	func_1340();
	_0xc9caeaeec1256e54(-1679307491);
	start_audio_scene("Mission_Transition_Clouds_Scene");
	return 1;
}

int func_783(char[4] cParam0)
{
	_0xc9caeaeec1256e54(-1679307491);
	_0x5651516d947abc53();
	func_1340();
	switch (func_1263(cParam0))
	{
		case 0:
			if (_is_anim_scene_started(&(uLocal_230[19]), false))
			{
				do_screen_fade_in(0);
				func_134(cParam0, 1);
			}
			break;
		case 1:
			bVar0 = _is_anim_scene_finished(&(uLocal_230[19]), false);
			if (bVar0 && !is_screen_faded_out())
			{
				do_screen_fade_out(0);
			}
			if ((!func_386(iLocal_228, 64) && func_1352(1073741824)) && func_1353(1, 0, 1))
			{
				func_412(&iLocal_228, 64);
			}
			if ((func_867(cParam0, 22, &uLocal_668, 0, 2354.059f, 1341.043f, 104.316f, 296.0671f, 1, 0, 1, 0, 1, 1) && func_386(iLocal_228, 64)) && bVar0)
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_784(var uParam0)
{
	func_1340();
	func_875(iVar665, 2354.059f, 1341.043f, 104.316f, 296.0671f, 2, 1073741824);
	stop_audio_scene("Mission_Transition_Clouds_Scene");
	func_1354(6, 1);
	_0xc9caeaeec1256e54(-1679307491);
	return 1;
}

int func_785(var uParam0)
{
	iVar0 = func_279();
	func_1202(&iVar0, 15);
	func_1203(&iVar0, 0);
	func_1351(iVar0);
	func_875(iVar666, 2349.853f, 1333.84f, 102.3434f, 294.5476f, 2, 1073741824);
	func_1353(1, 0, 0);
	return 1;
}

int func_786(char[4] cParam0)
{
	if (!func_867(cParam0, 22, &uLocal_668, 0, 2354.059f, 1341.043f, 104.316f, 296.0671f, 1, 0, 1, 0, 1, 1))
	{
		return 0;
	}
	func_1355(0);
	func_151(cParam0, iVar666, "Horse_01", 0, 0, 0, 0);
	return 1;
}

int func_787(var uParam0)
{
	func_1356(100f, 0, 0, 1);
	func_1357(100f, 0, 0, 1);
	func_1358(100f, 0, 0, 1);
	func_465(7);
	func_1359();
	return 1;
}

int func_788(char[4] cParam0)
{
	if (func_82(32768))
	{
		return 1;
	}
	disable_control_action(0, -822242784, false);
	set_ped_max_move_blend_ratio(Global_35, 1f);
	switch (func_1263(cParam0))
	{
		case 0:
			if (!func_386(iLocal_228, 32))
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
				func_1251(Global_35, iVar665, &Var0, 0f, 0f, 0f, 0, 0, 1, 1069547520, -1082130432, 1073069561, 1056964608, 1092616192, -1, 1, 0, 0, 0, 1);
				func_1252(iVar665, Global_35, &Var0, 1.1f, 0, 0, -1082130432, -1082130432, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
			}
			func_134(cParam0, 1);
			break;
		case 1:
			func_1270(Global_35, iVar665, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			func_1271(iVar665, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (func_1360() && func_874(Global_35, iVar665, 1, 1) < 4f)
			{
				func_1361();
				start_anim_scene(&(uLocal_230[17]));
				func_134(cParam0, 2);
			}
			break;
		case 2:
			func_1270(Global_35, iVar665, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			func_1271(iVar665, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			if (_is_anim_scene_active(&(uLocal_230[17])))
			{
				func_1274(iVar665, 1);
				func_1275(Global_35, 1);
				set_player_control(player_id(), false, 256, false);
				fVar38 = func_1362(Global_35, iVar665, 1);
				vVar39 = { get_entity_coords(Global_35, false, false) - Vector(1f, 0f, 0f) };
				set_anim_scene_origin(&(uLocal_230[18]), vVar39, 0f, 0f, fVar38, 2);
				start_anim_scene(&(uLocal_230[18]));
				func_134(cParam0, 5);
			}
			break;
		case 5:
			if (_0x005e6f28dd7ed58d(&(uLocal_230[18]), "TILLY"))
			{
				task_smart_flee_ped(iVar665, Global_35, 200f, -1, 0, 1f, 0);
				func_134(cParam0, 6);
			}
			break;
		case 6:
			if (_is_anim_scene_active(&(uLocal_230[18])) || _get_anim_scene_progress(&(uLocal_230[18])) > 0.92f)
			{
				_0xcf69ea05cd9c33c9();
				_task_item_interaction_2(Global_35, iVar411, iVar628, 2120637577, -1424266966, 1, 0, -1f);
				Global_1911772 = iVar411;
				Global_36615 = get_game_timer() + 5000;
				set_player_control(player_id(), true, 0, false);
				func_134(cParam0, 7);
			}
			break;
		case 7:
			if (_get_item_interaction_from_ped(Global_35) == -1424266966)
			{
				if (_is_anim_scene_started(&(uLocal_230[18]), false))
				{
					_0xcf69ea05cd9c33c9();
					func_253(cParam0, 22, iVar665, 0, 0, 1, 0);
					func_1348(&iLocal_632, 0, 1, 1);
					abort_anim_scene(&(uLocal_230[18]), false);
				}
				switch (iVar411)
				{
					case -595619260:
						sVar42 = "MRY41_LETT_ALT1";
						break;
					case -904734609:
						sVar42 = "MRY41_LETT_ALT2";
						break;
					case 1760651454:
						sVar42 = "MRY41_LETT_ALT3";
						break;
				}
				if (func_1255(cParam0, sVar42, 0))
				{
					func_134(cParam0, 8);
				}
			}
			else
			{
				_0xcf69ea05cd9c33c9();
			}
			break;
		case 8:
			_0x8910c24b7e0046ec();
			if (_get_item_interaction_from_ped(Global_35) == 1918075176)
			{
				func_47(0, 0);
				func_134(cParam0, 9);
			}
			break;
		case 9:
			if (!_0x038b1f1674f0e242(Global_35))
			{
				func_1363();
				return 1;
			}
			break;
	}
	return 0;
}

int func_789(var uParam0)
{
	func_1354(6, 1);
	return 1;
}

Vector3 func_790(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 2710.708f, -1122.594f, 49.0474f;
				case 1:
					return 2697.561f, -1139.911f, 49.4905f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 2802.026f, -1161.394f, 46.7758f;
				case 1:
					return 2798.213f, -1158.69f, 46.7759f;
				case 2:
					return 2799.757f, -1159.833f, 46.7759f;
				case 3:
					return 2794.135f, -1179.04f, 46.4996f;
				case 4:
					return 2693.501f, -1130.129f, 49.4639f;
				case 5:
					return 2694.358f, -1130.113f, 49.4487f;
				case 6:
					return 2695.115f, -1130.808f, 49.4249f;
				case 7:
					return 2688.295f, -1119.553f, 49.6781f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return 2696.096f, -1131.199f, 49.3031f;
				case 1:
					return 2694.827f, -1131.199f, 49.3274f;
				case 2:
					return 2689.187f, -1130.128f, 49.4279f;
				case 3:
					return 2694.365f, -1130.438f, 49.4512f;
				case 4:
					return 2699.78f, -1146.585f, 49.4769f;
				case 5:
					return 2695.779f, -1137.046f, 49.471f;
				case 6:
					return 2694.65f, -1134.369f, 49.4936f;
				case 7:
					return 2688.509f, -1145.198f, 49.5824f;
				case 8:
					return 2719.188f, -1144.196f, 49.143f;
				case 9:
					return 2694.459f, -1145.215f, 49.5726f;
				case 10:
					return 2696.505f, -1187.08f, 51.0904f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 2696.489f, -1186.897f, 51.0907f;
				case 1:
					return 2696.531f, -1189.88f, 51.0768f;
				case 2:
					return 2690.538f, -1188.225f, 51.9485f;
				case 3:
					return 2690.151f, -1189.241f, 51.9552f;
				case 4:
					return 2683.193f, -1194.1f, 51.9541f;
				case 5:
					return 2697.168f, -1188.653f, 51.0843f;
				case 6:
					return 2694.613f, -1189.191f, 51.0842f;
				case 7:
					return 2691.9f, -1189.249f, 51.9113f;
				case 8:
					return 2691.018f, -1187.877f, 51.952f;
				case 9:
					return 2698.763f, -1192.71f, 61.4177f;
				case 10:
					return 2673.929f, -1194.461f, 51.9542f;
				case 11:
					return 2675.709f, -1194.523f, 51.9542f;
				case 12:
					return 2686.102f, -1194.855f, 55.4104f;
				case 13:
					return 2701.282f, -1196.626f, 55.4693f;
				case 14:
					return 2682.166f, -1194.83f, 51.9542f;
				case 15:
					return 2699.897f, -1204.574f, 55.4693f;
				case 16:
					return 2693.336f, -1205.799f, 55.4693f;
				case 17:
					return 2685.953f, -1200.795f, 55.4701f;
				case 18:
					return 2693.747f, -1201.252f, 55.4693f;
				case 19:
					return 2694.359f, -1200.998f, 56.7193f;
				case 20:
					return 2696.695f, -1206.589f, 55.4693f;
				case 21:
					return 2684.005f, -1186.432f, 51.9661f;
				case 22:
					return 2679.491f, -1185.674f, 56.3488f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 2367.361f, 1342.905f, 105.1301f;
				case 1:
					return 2366.575f, 1345.369f, 105.1396f;
				case 2:
					return 2367.938f, 1340.719f, 105.1503f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 2693.464f, -1154.079f, 59.6472f;
				case 1:
					return 2693.509f, -1130.431f, 49.4697f;
				case 2:
					return 2689.314f, -1153.835f, 59.6472f;
				case 3:
					return 2694.869f, -1159.064f, 59.6555f;
				case 4:
					return 2683.65f, -1154.801f, 59.6555f;
				case 5:
					return 2690.994f, -1151.705f, 59.6281f;
				case 6:
					return 2693.99f, -1154.127f, 59.6289f;
				case 7:
					return 2694.89f, -1157.947f, 60.8792f;
				case 8:
					return 2684.739f, -1154.657f, 60.8792f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 2690.965f, -1151.058f, 59.6468f;
				case 1:
					return 2692.673f, -1155.175f, 59.4182f;
				case 2:
					return 2689.343f, -1113.925f, 50.678f;
				case 3:
					return 2688.391f, -1111.939f, 51.8665f;
				case 4:
					return 2690.011f, -1114.93f, 51.8665f;
				case 5:
					return 2689.127f, -1119.844f, 49.6781f;
				case 6:
					return 2690.231f, -1119.594f, 49.6781f;
				case 7:
					return 2666.943f, -1116.673f, 49.569f;
				case 8:
					return 2685.726f, -1129.652f, 49.6176f;
				case 9:
					return 2688.414f, -1114.074f, 51.8667f;
				case 10:
					return 2691.014f, -1113.457f, 51.8667f;
				case 11:
					return 2671.721f, -1116.346f, 49.6077f;
				case 12:
					return 2680.412f, -1109.361f, 49.5182f;
				case 13:
					return 2698.507f, -1125.529f, 50.4934f;
				case 14:
					return 2696.836f, -1119.918f, 52.3605f;
				case 15:
					return 2701.189f, -1123.957f, 50.8605f;
				case 16:
					return 2697.009f, -1118.52f, 50.3605f;
				case 17:
					return 2682.757f, -1130.79f, 49.6844f;
				case 18:
					return 2672.171f, -1126.642f, 49.6989f;
				case 19:
					return 2670.663f, -1120.354f, 49.6204f;
				case 20:
					return 2689.203f, -1113.923f, 54.4281f;
				case 21:
					return 2668.581f, -1116.641f, 49.5373f;
				case 22:
					return 2685.735f, -1117.871f, 49.6781f;
				case 23:
					return 2655.584f, -1127.314f, 49.8445f;
				case 24:
					return 2686.635f, -1119.867f, 49.6781f;
				case 25:
					return 2681.305f, -1119.135f, 50.1544f;
				case 26:
					return 2692.884f, -1121.149f, 49.68f;
				case 27:
					return 2691.643f, -1121.606f, 49.68f;
				case 28:
					return 2698.103f, -1112.993f, 49.676f;
				case 29:
					return 2690.729f, -1115.04f, 51.8839f;
				case 30:
					return 2691.503f, -1117.034f, 49.6782f;
				case 31:
					return 2689.584f, -1116.918f, 49.6782f;
				case 32:
					return 2697.327f, -1127.66f, 50.3936f;
				case 33:
					return 2699.198f, -1125.177f, 50.1266f;
				case 34:
					return 2669.167f, -1111.574f, 49.527f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 2699.902f, -1125.166f, 49.7453f;
				case 1:
					return 2698.811f, -1126.109f, 49.7539f;
				case 2:
					return 2693.738f, -1115.301f, 49.6781f;
				case 3:
					return 2693.825f, -1114.113f, 49.6781f;
				case 4:
					return 2681.412f, -1118.086f, 49.6781f;
				case 5:
					return 2681.917f, -1119.464f, 49.6742f;
				case 6:
					return 2676.241f, -1114.457f, 49.8502f;
				case 7:
					return 2676.25f, -1117.911f, 49.8571f;
				case 8:
					return 2698.611f, -1117.83f, 49.5789f;
				case 9:
					return 2697.915f, -1119.665f, 49.5969f;
				case 10:
					return 2688.669f, -1116.518f, 49.6781f;
				case 11:
					return 2688.14f, -1114.882f, 49.6138f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 2685.716f, -1129.367f, 49.6025f;
				case 1:
					return 2685.163f, -1122.911f, 49.6973f;
				case 2:
					return 2678.412f, -1112.861f, 49.7891f;
				case 3:
					return 2665.639f, -1115.578f, 50.1741f;
				case 4:
					return 2667.51f, -1121.554f, 49.7012f;
				case 5:
					return 2680.054f, -1118.614f, 49.667f;
				case 6:
					return 2690.084f, -1129.346f, 49.5394f;
				case 7:
					return 2674.456f, -1118.092f, 49.8702f;
				case 8:
					return 2674.451f, -1114.417f, 49.839f;
				case 9:
					return 2687.858f, -1116.138f, 49.6752f;
				case 10:
					return 2686.522f, -1116.967f, 49.6781f;
				case 11:
					return 2697.003f, -1118.504f, 50.09f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 2693.742f, -1115.673f, 49.6781f;
				case 1:
					return 2698.997f, -1112.315f, 49.636f;
				case 2:
					return 2683.822f, -1130.347f, 49.6428f;
				case 3:
					return 2686.683f, -1130.348f, 49.6262f;
				case 4:
					return 2690.609f, -1114.235f, 51.8795f;
				case 5:
					return 2680.957f, -1130.104f, 49.6226f;
				case 6:
					return 2690.867f, -1130.347f, 49.5278f;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_791(var uParam0, int iParam1)
{
	return (uParam0->f_8 && iParam1) != 0;
}

bool func_792(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

Vector3 func_793(var uParam0)
{
	return uParam0->f_862;
}

void func_794(var uParam0)
{
	if (func_1364(&iVar0))
	{
		if (func_578(iVar0, 0))
		{
			if (func_602(iVar0) == -525676072)
			{
				_set_ped_component_disabled(Global_35, 1249071452, 0);
				func_630(Global_35, -2065815962, 0, 1108822547, 0, 1, 0, 0, 0, 0);
			}
			else
			{
				_set_ped_component_disabled(Global_35, 1606587013, 0);
			}
			if (!func_578(*uParam0, 0))
			{
				*uParam0 = iVar0;
			}
		}
	}
}

void func_795(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	Global_16 = 1;
	if (!network_is_game_in_progress())
	{
		func_119(0, 0);
		func_1365(-1);
	}
	func_1366(1);
	set_entity_invincible(Global_35, true);
	if (!func_792(*iParam0, 32))
	{
		iParam1 |= 16;
	}
	if (!func_792(*iParam0, 64))
	{
		iParam1 |= 8;
	}
	if (!func_792(*iParam0, 128))
	{
		iParam1 |= 32;
	}
	if (func_792(*iParam0, 131072))
	{
		iParam1 |= 2048;
	}
	if (!func_792(*iParam0, 32768))
	{
		set_player_control(get_player_index(), false, iParam1, true);
	}
	if (!func_792(*iParam0, 1))
	{
		_0xf239400e16c23e08(0, 0);
	}
	if (!func_792(*iParam0, 65536))
	{
		set_everyone_ignore_player(player_id(), true);
	}
	if (!func_792(*iParam0, 4) && !func_792(*iParam0, 2))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_792(*iParam0, 2048))
	{
		func_807(0, 0);
	}
	if (func_792(*iParam0, 8))
	{
		clear_ped_tasks_immediately(Global_35, false, true);
	}
	if (func_792(*iParam0, 256))
	{
		_hide_ped_weapons(Global_35, 2, true);
	}
	if (func_792(*iParam0, 8192))
	{
		func_1367();
	}
	if (!func_792(*iParam0, 262144))
	{
		set_ped_reset_flag(Global_35, 264, true);
	}
	if (!func_792(*iParam0, 512))
	{
		if (is_gameplay_hint_active())
		{
			stop_gameplay_hint(false);
		}
	}
	if (!func_792(*iParam0, 1024))
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
		if (!func_792(*iParam0, 16))
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
						if (func_1368() == iVar7)
						{
							bVar8 = true;
						}
					}
					vVar3.x = iParam3;
					vVar3.f_1 = iParam4;
					vVar3.f_2 = iParam5;
					if (func_391(vVar3))
					{
						vVar3 = { get_offset_from_entity_in_world_coords(Global_35, 0f, IntToFloat((-1 + iVar2)), 0f) };
						func_1369(&vVar3, 50, 10, 0);
					}
					_0xed00d72f81cf7278(iVar7, 0, 1);
					set_entity_coords(iVar7, vVar3, false, true, true, true);
					if (bVar8)
					{
						func_1370(2);
						func_1371(-1);
						func_1372(vVar3);
						func_1374(func_1373());
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
	if (!func_792(*iParam0, 4096))
	{
		func_1375(Global_35);
	}
	if (!func_792(*iParam0, 1048576))
	{
		_0xdd1232b332cbb9e7(7, 1, 0);
	}
	if (!func_792(*iParam0, 2097152))
	{
		if (func_1376() || _0x50f124e6ef188b22(Global_35))
		{
			func_1377(1);
		}
	}
	if (Global_1359489->f_16 & 4194304 == 0)
	{
		Global_1359489->f_16 |= 4194304;
	}
	*iParam0 = 0;
}

void func_796(var uParam0, vector3 vParam1)
{
	uParam0->f_862 = { vParam1 };
}

void func_797(var uParam0)
{
	if (func_791(uParam0, 2048) && !func_391(func_1378(uParam0)))
	{
		bVar0 = _does_volume_exist(uParam0->f_4);
		iVar1 = _get_last_mount(Global_35);
		if ((!is_entity_dead(iVar1) && ((bVar0 && is_entity_in_volume(iVar1, uParam0->f_4, true, 0)) || func_791(uParam0, -2147483648))) && get_mount(Global_35) != iVar1)
		{
			iVar2 = 2;
			if (is_ped_in_writhe(iVar1))
			{
				iVar2 |= 32;
			}
			func_875(iVar1, func_1378(uParam0), func_1379(uParam0), iVar2, 1073741824);
		}
		iVar3 = get_players_last_vehicle();
		if ((!is_entity_dead(iVar3) && ((bVar0 && is_entity_in_volume(iVar3, uParam0->f_4, true, 0)) || func_791(uParam0, -2147483648))) && !is_ped_in_vehicle(Global_35, iVar3, true))
		{
			func_875(iVar3, func_1378(uParam0), func_1379(uParam0), 2, 1073741824);
		}
	}
}

void func_798(var uParam0)
{
	if ((func_791(uParam0, 268435456) && !func_391(func_1378(uParam0))) && is_ped_in_any_vehicle(Global_35, false))
	{
		iVar0 = get_vehicle_ped_is_using(Global_35);
		if (!is_entity_dead(iVar0))
		{
			vVar1 = { func_1378(uParam0) };
			func_875(iVar0, vVar1, func_1380(vVar1, Global_36, 1), 2, 1073741824);
			set_vehicle_on_ground_properly(iVar0, 0f);
			set_entity_velocity(iVar0, 0f, 0f, 0f);
			set_vehicle_forward_speed(iVar0, 0f);
		}
	}
}

void func_799(var uParam0, vector3 vParam1, int iParam4, bool bParam5)
{
	uParam0->f_865 = { vParam1 };
	uParam0->f_868 = iParam4;
	if (func_391(vParam1))
	{
		func_1381(uParam0, 2048, 1);
	}
	else
	{
		func_751(uParam0, 2048);
		if (bParam5)
		{
			func_751(uParam0, -2147483648);
		}
	}
}

void func_800(var uParam0)
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
					if (!func_1382(uParam0->f_13[iVar0], 8))
					{
						if (func_692(func_1093(iVar1, 0, 1, 0)))
						{
							if (!func_1383(uParam0, get_current_ped_weapon_entity_index(iVar1, 0)))
							{
								set_current_ped_weapon(iVar1, -1569615261, true, 0, false, false);
							}
						}
						if (func_692(func_1093(iVar1, 1, 1, 0)))
						{
							if (!func_1383(uParam0, get_current_ped_weapon_entity_index(iVar1, 1)))
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

void func_801(var uParam0, bool bParam1)
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

void func_802(var uParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
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
			func_1189(262144);
		}
	}
	else
	{
		bParam6 = false;
		if (iParam3 == -1 || iParam3 == 8)
		{
			func_1384(iParam1, 29, bVar4, 1, 0);
			func_1384(iParam1, 31, bVar4, 1, 0);
			func_1384(iParam1, 30, bVar4, 1, 0);
			func_1384(iParam1, 22, bVar4, 1, 0);
			func_1384(iParam1, 37, bVar4, 1, 0);
		}
	}
	if ((func_1129(32768) && func_1385(1108822547, 8)) && func_1386(10, iParam3))
	{
		func_1387(iParam1, 0, 1);
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
			iVar3 = func_1197(iVar1, 1);
			if (func_1385(iVar3, 8))
			{
			}
			else if (&Global_1946804->f_57[iVar1]->f_2[0] == -1802376732 || &uParam0->f_1[iVar1] == 0)
			{
			}
			else
			{
				iVar2 = &uParam0->f_1[iVar1];
				if (!func_1386(iVar1, iParam3))
				{
				}
				else if ((func_1385(iVar3, 6) || &uParam0->f_1[iVar1] == &Global_1946804->f_57[iVar1]) || uParam0->f_1[iVar1]->f_1 == 289238755)
				{
					if (!func_1385(iVar3, 1) || bParam2)
					{
						Global_1946804->f_857++;
						if (!bParam6)
						{
							func_1384(iParam1, iVar1, bVar4, 1, 0);
						}
						if (uParam0->f_1[iVar1]->f_1 == 289238755)
						{
							Global_1946804->f_2456[iVar1]->f_1 = 289238755;
						}
						func_1388(iVar3, 1, 6);
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
								func_1384(iParam1, iVar1, bVar4, 1, &(uParam0->f_1[iVar1]));
							}
							Global_1946804->f_2456[iVar1] = &uParam0->f_1[iVar1];
							Global_1946804->f_2456[iVar1]->f_1 = uParam0->f_1[iVar1]->f_1;
							if (func_1385(iVar3, 1))
							{
								func_1389(iVar3, 1, 6);
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

bool func_803(int iParam0)
{
	switch (iParam0)
	{
		case 14:
		case 34:
			return !func_1390((*Global_1835011)[iParam0]);
	}
	return false;
}

Vector3 func_804(int iParam0)
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

int func_805(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

int func_806(int iParam0, int iParam1)
{
	return func_1391(&uVar0, iParam0, iParam1);
}

void func_807(bool bParam0, bool bParam1)
{
	iVar2 = 0;
	while (iVar2 < 29)
	{
		iVar4 = iVar2;
		if (get_current_ped_weapon(Global_35, &iVar3, false, iVar4, true))
		{
			if (func_692(iVar3) && _0x705be297eebdb95d(iVar3))
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
		func_1392(1);
	}
}

void func_808(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_809(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_1 = 0;
}

void func_810(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
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
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_813(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_814(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_815(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_816(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

void func_817(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_818(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
}

int func_819(var uParam0, int iParam1)
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

int func_820(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_833((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_821(var uParam0, char* sParam1)
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

int func_822(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!func_837((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_823(int iParam0, int iParam1)
{
	iVar0 = func_1393(iParam1);
	return (iParam0 && iVar0) != 0;
}

int func_824(var uParam0, char* sParam1, int iParam2)
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

int func_825(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 60)
	{
		if (!func_842((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_826(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_827(var uParam0, int iParam1)
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

int func_828(var uParam0, char* sParam1)
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

int func_829(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 40)
	{
		if (!func_835((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_830(var uParam0, int iParam1)
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

int func_831(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!func_848((*uParam0)[iVar0]))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_832(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_833(var uParam0)
{
	return *uParam0 != 0;
}

void func_834(var uParam0)
{
	if (!func_864(uParam0->f_1, 1))
	{
		request_model(*uParam0, false);
		func_826(&(uParam0->f_1), 1);
	}
}

bool func_835(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_836(var uParam0)
{
	if (!func_864(uParam0->f_3, 1))
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
		func_826(&(uParam0->f_3), 1);
	}
}

bool func_837(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_838(var uParam0)
{
	if (!func_864(uParam0->f_1, 1))
	{
		request_anim_dict(*uParam0);
		func_826(&(uParam0->f_1), 1);
	}
}

bool func_839(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

bool func_840(var uParam0)
{
	if (func_864(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_864(uParam0->f_1, 1))
	{
		func_1394(uParam0);
	}
	if (_0x85b8f04555ab49b8(*uParam0))
	{
		func_826(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_841(var uParam0)
{
	if (func_864(*uParam0, 2))
	{
		return true;
	}
	if (!func_864(*uParam0, 1))
	{
		func_1395(uParam0);
	}
	if (has_ptfx_asset_loaded())
	{
		func_826(uParam0, 2);
		return true;
	}
	return false;
}

bool func_842(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_843(var uParam0)
{
	if (!func_864(uParam0->f_2, 1))
	{
		if (func_1396(uParam0))
		{
			if (_is_anim_scene_metadata_loaded(uParam0->f_1, false))
			{
				sVar0 = func_1397(get_entity_model(Global_35));
				if (_0x6f1f0b17109309da(uParam0->f_1, sVar0))
				{
					set_anim_scene_entity(uParam0->f_1, sVar0, Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_zero") && func_298())
				{
					set_anim_scene_entity(uParam0->f_1, "player_zero", Global_35, 0);
				}
				else if (_0x6f1f0b17109309da(uParam0->f_1, "player_three") && func_1049())
				{
					set_anim_scene_entity(uParam0->f_1, "player_three", Global_35, 0);
				}
				load_anim_scene(uParam0->f_1);
				func_826(&(uParam0->f_2), 1);
			}
		}
	}
}

bool func_844(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_845(var uParam0, int iParam1)
{
	if (!func_864(uParam0->f_1, 1))
	{
		if (!_is_anim_scene_loaded(iParam1, true, false))
		{
			return;
		}
		_0xdf7b5144e25cd3fe(iParam1, *uParam0);
		func_826(&(uParam0->f_1), 1);
	}
}

bool func_846(var uParam0)
{
	return *uParam0 != 0;
}

void func_847(var uParam0)
{
	if (!func_864(uParam0->f_2, 1))
	{
		_request_propset(*uParam0);
		func_826(&(uParam0->f_2), 1);
	}
}

bool func_848(var uParam0)
{
	return *uParam0 != 0;
}

void func_849(var uParam0)
{
	if (!func_864(uParam0->f_3, 1))
	{
		_0x72d4cb5db927009c(*uParam0, uParam0->f_1, uParam0->f_2);
		func_826(&(uParam0->f_3), 1);
	}
}

bool func_850(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_851(var uParam0)
{
	if (!func_864(uParam0->f_1, 1))
	{
		request_script_audio_bank(*uParam0);
		func_826(&(uParam0->f_1), 1);
	}
}

bool func_852(var uParam0)
{
	return func_1398(*uParam0);
}

void func_853(var uParam0)
{
	if (!func_864(uParam0->f_1, 1))
	{
		_request_imap(*uParam0);
		func_826(&(uParam0->f_1), 1);
	}
}

bool func_854(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_855(var uParam0)
{
	if (!func_864(uParam0->f_2, 1))
	{
		_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2);
		func_826(&(uParam0->f_2), 1);
	}
}

bool func_856(var uParam0)
{
	return !is_string_null_or_empty(*uParam0);
}

void func_857(var uParam0)
{
	if (!func_864(uParam0->f_1, 1))
	{
		_0x2b6529c54d29037a(*uParam0);
		func_826(&(uParam0->f_1), 1);
	}
}

bool func_858(var uParam0, int iParam1, char* sParam2)
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

void func_859(var uParam0, int iParam1, char* sParam2, int iParam3, int iParam4, bool bParam5)
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
		sParam2 = func_747(iParam1);
	}
	if (is_string_null_or_empty(sParam2))
	{
		if (does_entity_exist(iParam1))
		{
		}
		return;
	}
	iVar0 = func_1399(uParam0, iParam1);
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
		iVar1 = func_1400(uParam0, sParam2);
		if (does_entity_exist(iVar1) && iVar1 != iParam1)
		{
			func_1401(uParam0, iVar1);
		}
	}
	if (iVar0 == -1)
	{
		iVar0 = func_1402(uParam0);
	}
	if (iVar0 != -1)
	{
		uParam0->f_13[iVar0] = iParam1;
		StringCopy(&(uParam0->f_13[iVar0]->f_1), sParam2, 64);
		uParam0->f_13[iVar0]->f_9 = iParam3;
		uParam0->f_13[iVar0]->f_10 = iParam4;
		if (bParam5)
		{
			func_1403(uParam0->f_13[iVar0], 2);
		}
		else
		{
			func_1404(uParam0->f_13[iVar0], 2);
		}
	}
}

struct<4> func_860(int iParam0)
{
	if (!func_182(iParam0))
	{
		return Var0;
	}
	return (*Global_1835011)[iParam0]->f_3;
}

bool func_861(var uParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (!bParam4 && !uParam0->f_2501)
	{
		if (!func_883(uParam0, sParam1, iParam2, bParam4, bParam5))
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
			if (func_1405(uParam0, 0))
			{
				if (func_1406(uParam0, iParam2, iParam3, &cVar2, &iVar1, &iVar18))
				{
					if (func_1407(uParam0, 1, &iVar0))
					{
					}
					if (func_1408(uParam0, 3, &cVar2))
					{
					}
					if (func_1407(uParam0, 4, &iVar1))
					{
						cVar2.f_8 = iVar1;
					}
					if (func_1407(uParam0, 7, &(cVar2.f_12)))
					{
					}
					if (func_1407(uParam0, 8, &iVar1))
					{
						cVar2.f_10 = iVar1;
					}
					if (func_1407(uParam0, 10, &(cVar2.f_14)))
					{
					}
					if (func_1407(uParam0, 11, &iVar1))
					{
						cVar2.f_15 = iVar1;
					}
					if (iVar18 == 0)
					{
						if (iVar0 < 40 && uParam0->f_2504 < 40)
						{
							if (!func_1409(uParam0, &cVar2, uParam0->f_2504))
							{
								*(*uParam0)[uParam0->f_2504] = { cVar2 };
								func_496((*uParam0)[uParam0->f_2504], 1048576);
								uParam0->f_2504++;
							}
						}
					}
					else if (iVar18 == 3)
					{
						if (iVar0 < 40 && uParam0->f_2505 < 40)
						{
							*uParam0->f_641[uParam0->f_2505] = { cVar2 };
							func_496(uParam0->f_641[uParam0->f_2505], 1048576);
							uParam0->f_2505++;
						}
					}
					else if (iVar18 == 1)
					{
						if (iVar0 < 60 && uParam0->f_2506 < 60)
						{
							*uParam0->f_1282[uParam0->f_2506] = { cVar2 };
							func_496(uParam0->f_1282[uParam0->f_2506], 1048576);
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
						if (!func_1409(&(uParam0->f_2243), &cVar2, uParam0->f_2507))
						{
							*uParam0->f_2243[uParam0->f_2507] = { cVar2 };
							func_496(uParam0->f_2243[uParam0->f_2507], 1048576);
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
			if (func_1405(uParam0, 12))
			{
				if (func_1407(uParam0, 13, &iVar0))
				{
				}
				if (func_1407(uParam0, 14, &iVar1))
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

void func_862(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if ((func_210((*uParam0)[iVar0], 1048576) && (*uParam0)[iVar0]->f_9 == 8) && !func_210((*uParam0)[iVar0], 1))
		{
			func_1410((*uParam0)[iVar0]);
		}
		iVar0++;
	}
}

bool func_863(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < *uParam0)
	{
		if (func_833((*uParam0)[iVar1]))
		{
			if (func_823((*uParam0)[iVar1]->f_2, iParam12))
			{
				if (!func_1411((*uParam0)[iVar1]))
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
		if (func_835((*uParam1)[iVar1]))
		{
			if (func_823((*uParam1)[iVar1]->f_4, iParam12))
			{
				if (!func_1412((*uParam1)[iVar1]))
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
		if (func_837((*uParam2)[iVar1]))
		{
			if (func_823((*uParam2)[iVar1]->f_2, iParam12))
			{
				if (!func_1413((*uParam2)[iVar1]))
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
		if (func_839((*uParam3)[iVar1]))
		{
			if (func_823((*uParam3)[iVar1]->f_2, iParam12))
			{
				if (!func_840((*uParam3)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	if (func_823(uParam4->f_1, iParam12))
	{
		if (!func_841(uParam4))
		{
			iVar0 = 0;
		}
	}
	iVar1 = 0;
	while (iVar1 < *uParam5)
	{
		if (func_842((*uParam5)[iVar1]))
		{
			if (func_823((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1396((*uParam5)[iVar1]))
				{
					if (!func_865((*uParam5)[iVar1]))
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
		if (func_842((*uParam5)[iVar1]))
		{
			if (func_823((*uParam5)[iVar1]->f_3, iParam12))
			{
				if (func_1396((*uParam5)[iVar1]))
				{
					if (func_865((*uParam5)[iVar1]))
					{
						iVar2 = 0;
						while (iVar2 < 20)
						{
							if (func_844((*uParam5)[iVar1]->f_4[iVar2]))
							{
								if (!func_1414((*uParam5)[iVar1]->f_4[iVar2], (*uParam5)[iVar1]->f_1))
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
		if (func_846((*uParam6)[iVar1]))
		{
			if (func_823((*uParam6)[iVar1]->f_3, iParam12))
			{
				if (!func_1415((*uParam6)[iVar1]))
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
		if (func_848((*uParam7)[iVar1]))
		{
			if (func_823((*uParam7)[iVar1]->f_4, iParam12))
			{
				if (!func_1416((*uParam7)[iVar1]))
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
		if (func_850((*uParam8)[iVar1]))
		{
			if (func_823((*uParam8)[iVar1]->f_2, iParam12))
			{
				if (!func_1417((*uParam8)[iVar1]))
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
		if (func_852((*uParam9)[iVar1]))
		{
			if (func_823((*uParam9)[iVar1]->f_2, iParam12))
			{
				if (!func_1418((*uParam9)[iVar1]))
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
		if (func_854((*uParam10)[iVar1]))
		{
			if (func_823((*uParam10)[iVar1]->f_3, iParam12))
			{
				if (!func_1419((*uParam10)[iVar1]))
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
		if (func_856((*uParam11)[iVar1]))
		{
			if (func_823((*uParam11)[iVar1]->f_2, iParam12))
			{
				if (!func_1420((*uParam11)[iVar1]))
				{
					iVar0 = 0;
				}
			}
		}
		iVar1++;
	}
	return iVar0;
}

bool func_864(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_865(var uParam0)
{
	if (func_864(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_864(uParam0->f_2, 1))
	{
		func_843(uParam0);
	}
	if (_is_anim_scene_loaded(uParam0->f_1, true, false))
	{
		func_826(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

int func_866(int iParam0)
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

bool func_867(char[4] cParam0, int iParam1, var uParam2, bool bParam3, float fParam4, float fParam5, float fParam6, float fParam7, bool bParam8, int iParam9, bool bParam10, int iParam11, bool bParam12, bool bParam13)
{
	if (!func_515(iParam1))
	{
		return false;
	}
	if ((!is_entity_dead(*uParam2) && func_252(iParam1)) && func_1421(iParam1) == *uParam2)
	{
		return true;
	}
	*uParam2 = func_1422(iParam1, 1, 0, fParam4, fParam5, fParam6, fParam7, bParam8, 1, 0, 0, bParam10, 0, iParam9, 0, 0, 0, iParam11, 1, 1, bParam13, 0, 1, 0, 1);
	if (does_entity_exist(*uParam2))
	{
		func_1423(cParam0, *uParam2, iParam1, bParam3, (bParam8 && bParam12), bParam10, bParam13);
		func_1424(iParam1);
		return true;
	}
	return false;
}

bool func_868(char[4] cParam0)
{
	if (!func_391(cParam0->f_5417))
	{
		return true;
	}
	switch (cParam0->f_607)
	{
		case 7:
			func_1425(cParam0, -271.1003f, 798.9771f, 118.0088f, 359.8847f);
			break;
		case 15:
			func_1425(cParam0, -101.4083f, -34.0691f, 94.9419f, 43.5697f);
			break;
		case 8:
			func_1425(cParam0, 884.1405f, 1283.638f, 233.1437f, 288.539f);
			break;
		case 25:
			func_1425(cParam0, 1154.01f, -87.7217f, 87.745f, 333.9165f);
			break;
		case 14:
			func_1425(cParam0, -257.4742f, 716.4608f, 114.3661f, 298.3928f);
			break;
		case 9:
			func_1425(cParam0, -113.3479f, -14.8907f, 96.1036f, 66.3363f);
			break;
		case 13:
			func_1425(cParam0, -893.1545f, -1097.781f, 59.3724f, 67.7581f);
			break;
		case 11:
			func_1425(cParam0, -1528.842f, -315.0988f, 143.0872f, 97.0964f);
			break;
		case 26:
			func_1425(cParam0, 705.8042f, -1230.294f, 44.2243f, 60.9884f);
			break;
		case 53:
			func_1425(cParam0, 705.8099f, -1229.4f, 44.2311f, 67.5463f);
			break;
		case 16:
			func_1425(cParam0, 667.7685f, -1211.293f, 45.3101f, 92.5271f);
			break;
		case 17:
			func_1425(cParam0, 1339.753f, -1305.21f, 75.5849f, 337.5673f);
			break;
		case 19:
			func_1425(cParam0, 1857.32f, -1367.512f, 41.2697f, 162.265f);
			break;
		case 24:
			func_1425(cParam0, 691.6649f, -1235.476f, 43.3174f, 227.0576f);
			break;
		case 23:
			func_1425(cParam0, 676.2985f, -1227.818f, 43.598f, 352.091f);
			break;
		case 22:
			func_1425(cParam0, 663.6722f, -1229.636f, 43.3769f, 171.6396f);
			break;
		case 36:
			func_1425(cParam0, 2647.098f, -1270.327f, 51.0841f, 113.0633f);
			break;
		case 28:
			func_1425(cParam0, 2413.412f, -1220.656f, 44.9084f, 0.0301f);
			break;
		case 30:
			func_1425(cParam0, 1853.05f, -1835.788f, 42.0957f, 29.7034f);
			break;
		case 37:
			func_1425(cParam0, 1842.425f, -1833.848f, 43.2426f, 0.0743f);
			break;
		case 45:
			func_1425(cParam0, 2824.987f, -1165.335f, 47.3695f, 190.1776f);
			break;
		case 48:
			func_1425(cParam0, 483.1636f, 2222.628f, 246.0867f, 109.4105f);
			break;
		case 49:
			func_1425(cParam0, 2376.538f, 1339.845f, 105.3362f, 193.8848f);
			break;
		case 50:
			func_1425(cParam0, 2377.94f, 1338.177f, 105.4092f, 196.4492f);
			break;
		case 51:
			func_1425(cParam0, 491.0881f, 2221.171f, 246.1786f, 246.5501f);
			break;
		case 55:
			func_1425(cParam0, 2774.684f, 513.5845f, 66.9882f, 355.826f);
			break;
		case 76:
			func_1425(cParam0, -1616.827f, -1379.19f, 81.8942f, 339.9481f);
			break;
		case 73:
			func_1425(cParam0, -1611.214f, -1344.436f, 81.8767f, 359.9349f);
			break;
		case 75:
			func_1425(cParam0, -1678.714f, -1378.879f, 83.969f, 347.6046f);
			break;
		case 69:
			func_1425(cParam0, -302.3015f, 786.3279f, 116.9486f, 185.0768f);
			break;
		case 70:
			func_1425(cParam0, -1566.102f, -1448.615f, 90.6887f, 291.3719f);
			break;
		case 71:
			func_1425(cParam0, -1625.965f, -1395.404f, 81.6263f, 114.6379f);
			break;
		case 72:
			func_1425(cParam0, -835.0144f, -1343.726f, 42.473f, 0.0002f);
			break;
	}
	return !func_391(cParam0->f_5417);
}

int func_869(int iParam0, var uParam1)
{
	uParam1->f_10 = func_260(uParam1->f_10);
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
		if (func_391(uParam1->f_6))
		{
		}
	}
	bVar0 = func_390();
	if (*uParam1)
	{
		if (bVar0 && !func_321((*Global_1835011)[4]->f_1, 1))
		{
			if (func_1426(5))
			{
				func_527(5);
				func_1427(5);
				func_1371(0);
				func_1370(0);
			}
		}
	}
	if (func_1428(Global_36) == 8)
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_321((*Global_1835011)[37]->f_1, 1)) && !func_321((*Global_1835011)[43]->f_1, 1))
	{
		*iParam0 = 1;
		return 0;
	}
	if ((bVar0 && func_321((*Global_1835011)[43]->f_1, 1)) && !func_321((*Global_1835011)[44]->f_1, 1))
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
	if (func_530(iVar1))
	{
		bVar3 = true;
		if (func_1429(iVar1))
		{
			bVar4 = true;
		}
		if (func_537(iVar1))
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
				func_538(uParam1->f_10);
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
			if (!func_1426(0) && func_1426(1))
			{
				func_1430(1, 0);
				*iParam0 = 0;
				return 0;
			}
		}
	}
	if (uParam1->f_4)
	{
		if (uParam1->f_10 == 0)
		{
			if (func_1431())
			{
				func_1432();
			}
			func_1371(0);
			func_1370(0);
			func_1372(uParam1->f_6);
		}
	}
	if (!func_530(uParam1->f_10))
	{
		if (*uParam1)
		{
			if ((func_1433(uParam1->f_10) == 0 || func_1434(uParam1->f_10) == 0) || func_1435(uParam1->f_10) == 0)
			{
				func_1436(uParam1->f_10);
			}
			func_1437(uParam1->f_10);
			func_1438(uParam1->f_10, uParam1->f_6, uParam1->f_9);
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
	if (func_530(iVar1))
	{
		bVar3 = true;
		if (func_1429(iVar1))
		{
			bVar4 = true;
		}
		if (func_537(iVar1))
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
			if (!func_391(uParam1->f_6))
			{
				set_entity_coords(iVar2, uParam1->f_6, false, true, true, true);
				set_entity_heading(iVar2, uParam1->f_9);
				_0x9587913b9e772d29(iVar2, 0);
			}
		}
	}
	if (func_1439(uParam1->f_10))
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
			Var8 = { func_1440(uParam1->f_10) };
			Var10 = { func_1441() };
			func_1442(iVar2, &Var8, &Var10, 0);
			_set_ped_as_saddle_horse_for_player(iVar6, iVar2);
			set_ped_config_flag(iVar2, 186, false);
		}
	}
	if (!uParam1->f_1)
	{
		*iParam0 = 2;
		return iVar2;
	}
	if (!func_523(uParam1->f_10))
	{
		set_entity_as_mission_entity(iVar2, true, true);
		func_1443(uParam1->f_10);
		if (uParam1->f_2 && !func_391(uParam1->f_6))
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
	func_522(uParam1->f_10);
	if (func_523(uParam1->f_10))
	{
		iVar16 = func_256(uParam1->f_10);
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

bool func_870(int iParam0, int iParam1, float fParam2, bool bParam3)
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

bool func_871(int iParam0)
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

bool func_872(int iParam0, int iParam1, vector3 vParam2, float fParam5, bool bParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10)
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
	if (!func_1444(iParam1))
	{
		return false;
	}
	iVar0 = func_1445(iParam1, vParam2, fParam5, iParam8, 1, bParam6, bParam7);
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

void func_873(char[4] cParam0, bool bParam1)
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

float func_874(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

void func_875(int iParam0, vector3 vParam1, float fParam4, int iParam5, int iParam6)
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
	if (iParam0 == func_1446(Global_35) && is_player_teleport_active())
	{
	}
	if (func_1447(iParam0))
	{
		if (func_871(get_ped_index_from_entity_index(iParam0)))
		{
			_0x0348469daa17576c(iParam0);
		}
	}
	if (func_386(iParam5, 4) && is_entity_a_ped(iParam0))
	{
		iVar1 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_on_vehicle(iVar1, false))
		{
			iVar0 = get_vehicle_ped_is_in(iVar1, true);
			if (does_entity_exist(iVar0) && !is_entity_dead(iVar0))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_875(iVar0, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
		else if (is_ped_on_mount(iVar1))
		{
			iVar2 = get_mount(iVar1);
			if (does_entity_exist(iVar2) && !is_entity_dead(iVar2))
			{
				iParam5 = (iParam5 - iParam5 & 4);
				func_875(iVar2, vParam1, fParam4, iParam5, iParam6);
			}
			return;
		}
	}
	if (!func_386(iParam5, 32))
	{
		if (bVar4 && is_entity_attached(iParam0))
		{
			clear_ped_tasks_immediately(get_ped_index_from_entity_index(iParam0), false, true);
		}
	}
	if (func_386(iParam5, 2))
	{
		if (is_entity_a_vehicle(iParam0))
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_386(iParam5, 32), true);
		}
		else
		{
			_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_386(iParam5, 32), true);
			_0x9587913b9e772d29(iParam0, 0);
		}
	}
	else if (func_386(iParam5, 129))
	{
		if (func_386(iParam5, 128))
		{
			if (get_water_height_no_waves(vParam1, &uVar5))
			{
				vParam1.f_2 = uVar5;
			}
		}
		set_entity_coords_no_offset(iParam0, vParam1, func_386(iParam5, 32), true, true);
		set_entity_heading(iParam0, fParam4);
	}
	else
	{
		_set_entity_coords_and_heading(iParam0, vParam1, fParam4, true, func_386(iParam5, 32), true);
	}
	if (bVar4)
	{
		if (!func_386(iParam5, 16))
		{
			_set_ped_crouch_movement(get_ped_index_from_entity_index(iParam0), bVar3, 0, false);
		}
		if (func_1447(iParam0))
		{
			iVar6 = get_ped_index_from_entity_index(iParam0);
			_0x0348469daa17576c(iVar6);
			if (!func_386(iParam5, 32))
			{
				clear_ped_tasks(iVar6, 1, 0);
				task_stand_still(iVar6, -1);
			}
		}
		set_ped_cloth_package_index(get_ped_index_from_entity_index(iParam0), 1);
		if (get_ped_index_from_entity_index(iParam0) == Global_35 && !func_386(iParam5, 64))
		{
			if (!is_screen_faded_out())
			{
			}
			set_gameplay_cam_relative_heading(0f, 1f);
			set_gameplay_cam_relative_pitch(0f, 1f);
		}
	}
}

bool func_876(int iParam0, int iParam1, int iParam2)
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

bool func_877(var uParam0, int iParam1)
{
	switch (func_1448(uParam0))
	{
		case 0:
			if (!func_1449(iParam1, &(uParam0->f_8), &(uParam0->f_6)))
			{
				return true;
			}
			func_1450(uParam0, 1);
			break;
		case 1:
			func_1451(uParam0);
			render_script_cams(true, false, 3000, true, false, 0);
			iVar0 = 0;
			func_795(&iVar0, 0, 2, 0, 0, 0, 0);
			func_1450(uParam0, 2);
			break;
		case 2:
			if (func_1452(uParam0))
			{
				func_451(uParam0->f_8, 5000f, 0);
				_0x4759cc730f947c81();
				func_27(&(uParam0->f_3), 1);
				func_1450(uParam0, 3);
			}
			break;
		case 3:
			if (func_884(&(uParam0->f_3)) >= 1f)
			{
				func_1450(uParam0, 4);
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
			func_1453(&iVar1, 0);
			release_script_audio_bank();
			func_1450(uParam0, 0);
			return true;
	}
	return false;
}

void func_878(char[4] cParam0)
{
	if (!func_120(cParam0, 524288))
	{
		MemCopy(&uVar0, {func_110(cParam0->f_607)}, 8);
		func_1454(&uVar0, 15000, 0, 0, 0, 1);
		func_103(cParam0, 524288);
	}
}

bool func_879(char[4] cParam0)
{
	iVar0 = func_35(cParam0);
	if (func_162(cParam0, func_33(cParam0)) <= 3)
	{
		iVar0 = func_33(cParam0);
	}
	Var1 = { func_1455(cParam0, iVar0) };
	if (func_1457(&(cParam0->f_10792), Var1, func_1456(&(cParam0->f_10792)), 0))
	{
		func_140(cParam0, func_33(cParam0), 262144);
		if (func_1458(&(cParam0->f_10792), 524288))
		{
			func_374(cParam0, 67108864);
			func_1459(&(cParam0->f_10792), 524288);
		}
		func_1460(&(cParam0->f_7375), &(cParam0->f_10792));
		return true;
	}
	return false;
}

void func_880(char[4] cParam0, int iParam1)
{
	cParam0->f_5307 = (cParam0->f_5307 - (cParam0->f_5307 && iParam1));
}

bool func_881(char[4] cParam0, struct<4> Param1)
{
	if (is_string_null_or_empty(&Param1))
	{
		return true;
	}
	if (func_8(cParam0, 16777216))
	{
		func_1461(cParam0);
		func_1462(cParam0);
		return true;
	}
	if (func_1463(Param1, &(cParam0->f_7375), cParam0))
	{
		return true;
	}
	if (func_154(cParam0) == 0)
	{
		func_905(cParam0);
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
			func_1464(cParam0);
			func_880(cParam0, 524288);
			func_1247(cParam0);
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

bool func_882(char[4] cParam0)
{
	iVar0 = 1;
	if (!func_1465(func_61(cParam0), func_120(cParam0, 65536)))
	{
		iVar0 = 0;
	}
	Var1 = { func_1466(func_61(cParam0)) };
	if (!is_string_null_or_empty(&Var1))
	{
		if (!func_1467(func_61(cParam0)))
		{
			iVar0 = 0;
		}
	}
	if (!func_419(cParam0, func_33(cParam0), 1))
	{
		iVar0 = 0;
	}
	if (func_120(cParam0, 4) && !_0x5e420ff293ee5472())
	{
		iVar0 = 0;
	}
	MemCopy(&cVar9, {func_860(cParam0->f_607)}, 3);
	if (!func_23(&(cParam0->f_8269)))
	{
		if (!func_883(&(cParam0->f_8269), &cVar9, 0, 1, 1))
		{
			iVar0 = 0;
		}
	}
	return iVar0;
}

bool func_883(var uParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4)
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
	func_1468(uParam0);
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

float func_884(var uParam0)
{
	if (!func_26(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_498(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_550() - uParam0->f_1);
}

bool func_885()
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

void func_886(float fParam0, float fParam1)
{
	set_gameplay_cam_relative_heading(fParam0, 1f);
	set_gameplay_cam_relative_pitch(fParam1, 1f);
}

bool func_887(char[4] cParam0)
{
	if (!does_entity_exist(iVar663))
	{
		uLocal_666 = func_159(cParam0);
	}
	vVar0 = { func_381(1, 2) };
	if (!does_entity_exist(iVar664))
	{
		if (func_867(cParam0, 11, &uLocal_667, 0, vVar0.x, vVar0.y, vVar0.z, 0, 1, 0, 1, 0, 1, 1))
		{
			if (!func_924(cParam0))
			{
				func_1240(iVar664, func_216(1, 2), 2, 1073741824);
			}
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_888(char[4] cParam0)
{
	if (!does_entity_exist(iVar666))
	{
		iLocal_669 = func_254(cParam0);
	}
	if (!does_entity_exist(iVar666))
	{
	}
	if (does_entity_exist(iVar666))
	{
		return true;
	}
	return false;
}

bool func_889()
{
	if (_0xd9130842d7226045(sLocal_175, 0) && load_stream(sLocal_176, sLocal_175))
	{
		uLocal_257 = _0x0556c784fa056628(sLocal_176, sLocal_175);
		return true;
	}
	return false;
}

int func_890(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_1469(iParam1);
	if (!func_1470(iParam0, iVar0))
	{
		return 1;
	}
	if (decor_exist_on(iParam0, "metaped_outfit_request") && decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		iVar2 = decor_get_int(iParam0, "metaped_outfit_request");
		iVar1 = decor_get_int(iParam0, "metaped_outfit_request_name");
		if (iVar1 == iVar0 && _is_metaped_outfit_request_valid(iVar2))
		{
			return 1;
		}
		else
		{
			func_436(iParam0);
		}
	}
	iVar3 = _request_metaped_outfit(get_entity_model(iParam0), iVar0);
	decor_set_int(iParam0, "metaped_outfit_request", iVar3);
	decor_set_int(iParam0, "metaped_outfit_request_name", iVar0);
	return 1;
}

int func_891(int iParam0, int iParam1, int iParam2)
{
	if (func_1471(iParam0, iParam2))
	{
		func_1472(iParam0, iParam1, iParam2);
		if (!func_892(iParam1))
		{
			return 0;
		}
	}
	return 1;
}

bool func_892(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return true;
	}
	if (!decor_exist_on(iParam0, "metaped_outfit_request") || !decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		return true;
	}
	iVar0 = decor_get_int(iParam0, "metaped_outfit_request_name");
	if (!func_1470(iParam0, iVar0))
	{
		return true;
	}
	iVar1 = decor_get_int(iParam0, "metaped_outfit_request");
	return _0x610438375e5d1801(iVar1);
}

bool func_893(char[4] cParam0)
{
	if (!func_386(iLocal_229, 1))
	{
		if (func_1473(cParam0))
		{
			func_412(&iLocal_229, 1);
		}
		return false;
	}
	if (func_33(cParam0) < iLocal_145)
	{
		if (!func_386(iLocal_229, 32))
		{
			if (func_1474())
			{
				func_412(&iLocal_229, 32);
			}
			return false;
		}
		if (func_33(cParam0) < iLocal_144 && !func_386(iLocal_229, 16))
		{
			if (func_1475())
			{
				func_412(&iLocal_229, 16);
			}
			return false;
		}
		if (func_33(cParam0) < iLocal_141)
		{
			if (!func_386(iLocal_229, 2))
			{
				if (func_1476())
				{
					func_412(&iLocal_229, 2);
				}
				return false;
			}
		}
		if (func_33(cParam0) == iLocal_140)
		{
			if (!func_386(iLocal_229, 8))
			{
				if (func_1477())
				{
					func_412(&iLocal_229, 8);
				}
				return false;
			}
		}
		if (func_33(cParam0) > iLocal_141)
		{
			if (!func_386(iLocal_229, 4))
			{
				if (func_1322(cParam0))
				{
					func_412(&iLocal_229, 4);
				}
				return false;
			}
		}
		if (func_33(cParam0) <= iLocal_143)
		{
			if (!func_386(iLocal_229, 2048))
			{
				if (func_1478(cParam0))
				{
					func_412(&iLocal_229, 2048);
				}
				return false;
			}
		}
		if (func_33(cParam0) <= iLocal_143)
		{
			if (!func_386(iLocal_229, 4096))
			{
				if (func_1479(cParam0))
				{
					func_412(&iLocal_229, 4096);
				}
				return false;
			}
		}
		if (func_33(cParam0) <= iLocal_140)
		{
			if (!func_386(iLocal_229, 16384))
			{
				if (func_1480())
				{
					func_412(&iLocal_229, 16384);
				}
				return false;
			}
		}
		if (func_33(cParam0) <= iLocal_143)
		{
			if (!func_386(iLocal_229, 256))
			{
				if (func_1481(cParam0))
				{
					func_412(&iLocal_229, 256);
				}
				return false;
			}
		}
		if (func_33(cParam0) > iLocal_143)
		{
			if (!func_386(iLocal_229, 512))
			{
				if (func_1482())
				{
					func_412(&iLocal_229, 512);
				}
				return false;
			}
		}
		if (func_33(cParam0) > iLocal_143)
		{
			func_1483();
			func_1484();
			func_1337();
		}
		if (func_33(cParam0) > iLocal_141)
		{
			func_1485();
		}
		if (func_33(cParam0) > iLocal_142)
		{
			func_1486();
		}
	}
	return true;
}

bool func_894(int iParam0, bool bParam1)
{
	if (!func_249(Local_14.f_81))
	{
		Local_14.f_81 = { func_415() };
	}
	if (func_1487(&(Local_14.f_81), 1))
	{
		return true;
	}
	if (!does_entity_exist(&(Local_14.f_83[0])) && (iParam0 == -1 || iParam0 == 0))
	{
		Local_14.f_83[0] = create_vehicle(-1758092337, 2665.826f, -1157.086f, 51.1131f, 359.4932f, true, true, false, false);
		func_1488(Local_14.f_81, &(Local_14.f_83[0]));
		func_955(&(Local_14.f_83[0]), Local_14);
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
	func_1489(&(Local_14.f_81), 1);
	return true;
}

bool func_895(char[4] cParam0)
{
	if (!is_entity_dead(Global_35))
	{
		func_145(cParam0, Global_35, "ARTHUR", 0);
		func_151(cParam0, Global_35, 0, 0, 0, 0, 0);
		func_1490();
	}
	if (func_33(cParam0) > iLocal_139 && func_33(cParam0) < iLocal_145)
	{
		func_1241();
	}
	if (func_33(cParam0) > iLocal_139 && func_33(cParam0) < iLocal_145)
	{
		if (Global_40.f_7729 != iVar416)
		{
			func_1242(Global_35);
			func_1491(Global_35, iVar416, 0, 1, 0);
		}
	}
	if (func_33(cParam0) == iLocal_143)
	{
		func_605(1402226560);
		func_1492(Global_35, iVar418, 30, 1, 0, 1056964608, 1065353216, 0);
	}
	else if (func_33(cParam0) > iLocal_143)
	{
		func_605(1402226560);
		func_1492(Global_35, iVar418, 30, 0, 9, 1056964608, 1065353216, 0);
	}
	func_434(0);
	if (func_33(cParam0) < iLocal_145)
	{
		if (!is_entity_dead(iVar663))
		{
			func_1493(cParam0, iVar663, 256);
			func_145(cParam0, iVar663, "DUTCH", 0);
			func_151(cParam0, iVar663, 0, 0, 0, 0, 0);
			func_1494(cParam0, iVar663, 2, "w_revolver_schofield01", 0, 0);
			func_1494(cParam0, iVar663, 3, "w_revolver_cattleman01", 0, 0);
			set_blocking_of_non_temporary_events(iVar663, true);
		}
		if (func_33(cParam0) > iLocal_139 || (func_33(cParam0) == iLocal_139 && func_120(cParam0, 4)))
		{
			func_1495(0, iVar414, 1);
			func_1496(0, iVar663, iVar414, 1);
		}
		if (func_33(cParam0) > iLocal_143)
		{
			func_1329(iVar663);
		}
		if (!is_entity_dead(iVar664))
		{
			func_1493(cParam0, iVar664, 256);
			func_145(cParam0, iVar664, "SADIE_ADLER", 0);
			func_151(cParam0, iVar664, 0, 0, 0, 0, 0);
			func_1497(iVar664, 2077870112);
			func_1494(cParam0, iVar664, 2, "w_revolver_cattleman01^1", 0, 0);
			func_1494(cParam0, iVar664, 4, "W_MELEE_KNIFE02", 0, 0);
			set_blocking_of_non_temporary_events(iVar664, true);
		}
		if (func_33(cParam0) > iLocal_139 || (func_33(cParam0) == iLocal_139 && func_120(cParam0, 4)))
		{
			func_1495(11, iVar415, 1);
			func_1496(11, iVar664, iVar415, 1);
		}
	}
	if (!is_entity_dead(iVar666))
	{
		func_1240(iVar666, func_216(1, 3), 2, 1073741824);
		set_animal_tuning_bool_param(iVar666, 48, true);
		task_stand_still(iVar666, -1);
		set_blocking_of_non_temporary_events(iVar666, true);
	}
	return true;
}

void func_896(char[4] cParam0)
{
	if (func_33(cParam0) == iLocal_139)
	{
		iLocal_572 = func_279();
		if (func_128(cParam0, 2) || func_120(cParam0, 4))
		{
			set_clock_time(13, 0, 0);
		}
	}
	else if (func_33(cParam0) == iLocal_140)
	{
		set_clock_time(14, 0, 0);
	}
	else if (func_33(cParam0) == iLocal_141 || func_33(cParam0) == iLocal_142)
	{
		set_clock_time(15, 0, 0);
	}
	else if (func_33(cParam0) == iLocal_143)
	{
		set_clock_time(15, 0, 0);
	}
	else if (func_33(cParam0) >= iLocal_144)
	{
		set_clock_time(16, 0, 0);
	}
}

void func_897(char[4] cParam0)
{
	if (func_33(cParam0) < iLocal_143)
	{
		func_470(1);
	}
}

int func_898(char[4] cParam0)
{
	func_1305(&iLocal_228, 1);
	func_1305(&iLocal_228, 2);
	func_1305(&iLocal_228, 4);
	func_1305(&iLocal_228, 8);
	if (func_33(cParam0) == iLocal_143)
	{
		if (does_pickup_exist(iVar635))
		{
			remove_pickup(iVar635);
		}
		if (does_entity_exist(iVar631))
		{
			delete_object(&iLocal_634);
		}
	}
	return 1;
}

void func_899(char[4] cParam0, int iParam1)
{
	cParam0->f_8265 = iParam1;
	func_103(cParam0, 2048);
}

int func_900(char[4] cParam0)
{
	if (func_33(cParam0) == iLocal_139)
	{
		Var12.f_4 = 1065353216;
		Var12.f_5 = 1065353216;
		Var12.f_9 = 1065353216;
		Var12.f_10 = 1065353216;
		Var12.f_14 = 1065353216;
		Var12.f_15 = 1065353216;
		Var12.f_17 = 1040187392;
		Var12.f_18 = 1040187392;
		Var12.f_19 = -1;
		Var12.f_26 = -1082130432;
		if (!func_386(iLocal_228, 1))
		{
			if (func_1498(cParam0, iVar663, 0, 0, 1, 1))
			{
				func_1251(iVar663, iVar664, &Var12, 0f, 0f, 0f, sLocal_146, 1032, 1, 3.5f, 1f, 1073069561, 1f, 1092616192, -1, 1, 1, 0, 4194304, 1);
				force_ped_motion_state(iVar663, -668482597, false, 0, false);
				func_412(&iLocal_228, 1);
			}
		}
		if (!func_386(iLocal_228, 2))
		{
			if (func_1498(cParam0, iVar664, 0, 0, 1, 1))
			{
				func_1251(iVar664, Global_35, &Var12, 0f, 0f, 0f, sLocal_146, 1032, 1, 4.5f, 2f, 1073069561, 1f, 1092616192, -1, 1, 1, 0, 4194304, 1);
				force_ped_motion_state(iVar664, -668482597, false, 0, false);
				func_412(&iLocal_228, 2);
			}
		}
		if (!func_386(iLocal_228, 4))
		{
			if (func_1498(cParam0, Global_35, 0, 0, 1, 1))
			{
				func_1499(-668482597, 4000, 0, 1, 0, 62f, 0, 0);
				func_1252(Global_35, iVar664, &Var12, -1082130432, 0, 0, -1082130432, -1082130432, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 1, 0, -1, 1, -1082130432, -1082130432, 1);
				func_412(&iLocal_228, 4);
			}
		}
		if (func_8(cParam0, 524288) && !func_386(iLocal_228, 67108864))
		{
			func_412(&iLocal_228, 67108864);
		}
		if (!func_386(iLocal_228, 67108864))
		{
			if (_get_anim_scene_time(cParam0->f_7375.f_804) > 57f)
			{
				func_1241();
				func_412(&iLocal_228, 67108864);
			}
		}
		if (!func_386(iLocal_228, 16))
		{
			fVar50 = (_get_anim_scene_duration(cParam0->f_7375.f_804) - _get_anim_scene_time(cParam0->f_7375.f_804));
			if (fVar50 < 12.5f)
			{
				func_1500();
				func_1491(Global_35, iVar416, 0, 1, 0);
				func_1495(11, iVar415, 1);
				func_1495(0, iVar414, 1);
				func_412(&iLocal_228, 16);
			}
		}
		if (func_386(iLocal_228, 4))
		{
			func_1246(1f);
		}
	}
	else if (func_33(cParam0) == iLocal_140)
	{
		if (func_1498(cParam0, Global_35, 0, 0, 1, 1))
		{
			func_1499(-668482597, 3000, 0, 0, 1, 0, 0, 0);
		}
		if (func_1498(cParam0, iVar663, 0, 0, 1, 1))
		{
			force_ped_motion_state(iVar663, -668482597, false, 0, false);
			set_current_ped_weapon(iVar663, -1569615261, false, 0, false, false);
			set_current_ped_weapon(iVar663, -1569615261, false, 1, false, false);
			_0x94a3c1b804d291ec(iVar663, 0, 0, 0, 0);
			func_1306();
			task_follow_waypoint_recording(0, sLocal_147, 0, 8, -1, 0, 0, -1);
			func_1307(iVar663, 0, -1082130432, -1082130432);
		}
		if (func_1498(cParam0, iVar664, 0, 0, 1, 1))
		{
			func_1240(iVar664, func_216(2, 3), 2, 1073741824);
			func_1306();
			_task_start_scenario_in_place(0, -1124614608, -1, false, 0, -1f, false);
			func_1307(iVar664, 0, -1082130432, -1082130432);
		}
		if (func_1498(cParam0, &(Local_14.f_46[0]), "G_M_M_UNIDUSTER_04^2", 0, 1, 1))
		{
			_get_anim_scene_entity_matrix(&(uLocal_230[9]), "G_M_M_UNIDUSTER_04", &Var0, true, cLocal_167, 2);
			force_ped_motion_state(&(Local_14.f_46[0]), -668482597, false, 0, false);
			func_1306();
			task_follow_waypoint_recording(0, sLocal_148, 0, 9224, -1, 0, 0, -1);
			task_follow_nav_mesh_to_coord(0, Var0, 1f, 20000, 0.25f, 0, Var0.f_3.f_2);
			func_1307(&(Local_14.f_46[0]), 0, -1082130432, -1082130432);
		}
		if (!func_386(iLocal_224, 33554432))
		{
			if (func_120(cParam0, 4) || func_791(&(cParam0->f_7375), 512))
			{
				func_1501(1);
				func_412(&iLocal_224, 33554432);
			}
			else if (_get_anim_scene_time(cParam0->f_7375.f_804) > 37.5f)
			{
				func_1501(0);
				func_412(&iLocal_224, 33554432);
			}
		}
	}
	else if (func_33(cParam0) == iLocal_143)
	{
		if (_does_anim_scene_exist(&(uLocal_230[0])))
		{
			if (_is_anim_scene_started(&(uLocal_230[0]), false) || _is_anim_scene_paused(&(uLocal_230[0])))
			{
				abort_anim_scene(&(uLocal_230[0]), true);
			}
			_delete_anim_scene(&(uLocal_230[0]));
		}
		if (!func_120(cParam0, 4))
		{
			if (!func_386(iLocal_224, 16))
			{
				func_1335(0);
				func_412(&iLocal_224, 16);
			}
		}
		if (func_1498(cParam0, &(Local_14.f_20[0]), 0, 0, 1, 1))
		{
			func_1240(&(Local_14.f_20[0]), func_216(6, 2), 0, 1073741824);
			freeze_entity_position(&(Local_14.f_20[0]), true);
		}
		_0xe9b3fec825668291(Global_35, 1402226560, 5f);
		if (_0x005e6f28dd7ed58d(Global_43800, "ARTHUR"))
		{
			func_1334();
		}
		if (func_1498(cParam0, iVar663, 0, 0, 1, 1))
		{
			func_1502(uLocal_230[10], sLocal_168);
		}
	}
	else if (func_33(cParam0) == iLocal_144)
	{
		if (func_1498(cParam0, iVar663, 0, 0, 1, 1))
		{
			func_253(cParam0, 0, iVar663, 0, 1, 0, 0);
			func_1503(0);
		}
		if (func_1498(cParam0, iVar664, 0, 0, 1, 1))
		{
			func_253(cParam0, 11, iVar664, 0, 1, 1, 0);
		}
		if (func_1498(cParam0, iVar666, "Horse_01", 0, 1, 1))
		{
			func_1504(iVar666, func_381(4, 2), 1f, 1);
		}
		if (!func_386(iLocal_224, 2048))
		{
			func_1505();
			if (func_791(&(cParam0->f_7375), 512) || func_120(cParam0, 4))
			{
				func_1506(Global_35, 1);
				func_412(&iLocal_224, 2048);
			}
			if (_does_anim_scene_exist(cParam0->f_7375.f_804) && _get_anim_scene_time(cParam0->f_7375.f_804) > 10f)
			{
				if (func_1507())
				{
					func_1506(Global_35, 1);
					func_412(&iLocal_224, 2048);
				}
				else
				{
					return 0;
				}
			}
		}
		else
		{
			_0x1b70811d3bf75db9(1, 0);
		}
	}
	else if (func_33(cParam0) == iLocal_145)
	{
		if (_get_anim_scene_progress(cParam0->f_7375.f_804) > 0.65f && !func_386(iLocal_228, 32))
		{
			Var51.f_4 = 1065353216;
			Var51.f_5 = 1065353216;
			Var51.f_9 = 1065353216;
			Var51.f_10 = 1065353216;
			Var51.f_14 = 1065353216;
			Var51.f_15 = 1065353216;
			Var51.f_17 = 1040187392;
			Var51.f_18 = 1040187392;
			Var51.f_19 = -1;
			Var51.f_26 = -1082130432;
			func_1251(Global_35, iVar665, &Var51, 0f, 0f, 0f, 0, 0, 1, 1069547520, -1082130432, 1073069561, 1056964608, 1092616192, -1, 1, 0, 0, 0, 1);
			func_1252(iVar665, Global_35, &Var51, 2f, 0, 0, -1082130432, -1082130432, 1, 8, 0, 0, 1069547520, 1073741824, 1050253722, 1067030938, 0, 0, -1, 1, -1082130432, -1082130432, 1);
			func_412(&iLocal_228, 32);
		}
		if (func_1498(cParam0, Global_35, 0, 0, 1, 1))
		{
			func_1499(-668482597, 2000, 0, 1, 1, 0, 0, 0);
		}
	}
	return 1;
}

void func_901(char[4] cParam0, int iParam1)
{
	cParam0->f_8266 = iParam1;
	func_103(cParam0, 1024);
}

int func_902(char[4] cParam0)
{
	if (func_33(cParam0) == iLocal_139)
	{
		func_1491(Global_35, iVar416, 0, 1, 0);
		if (Global_40.f_4942[11]->f_3 != iVar415)
		{
			func_1495(11, iVar415, 1);
		}
		if (Global_40.f_4942[0]->f_3 != iVar414)
		{
			func_1495(0, iVar414, 1);
		}
		func_1499(-668482597, 4000, 0, 1, 1, 0, 0, 0);
		func_1241();
		_set_weather_type(1632247697, true, true, false, 0f, false);
		func_1500();
	}
	else if (func_33(cParam0) == iLocal_140)
	{
		func_1240(iVar663, func_216(2, 5), 2, 1073741824);
		force_ped_motion_state(iVar663, -668482597, false, 0, false);
		func_1499(-668482597, 4000, 0, 1, 1, 0, 0, 0);
	}
	else if (func_33(cParam0) == iLocal_143)
	{
		func_1240(&(Local_14.f_20[0]), func_216(6, 2), 0, 1073741824);
		freeze_entity_position(&(Local_14.f_20[0]), true);
		_0xe9b3fec825668291(Global_35, 1402226560, 5f);
	}
	return 1;
}

void func_903(char[4] cParam0, int iParam1)
{
	cParam0->f_8267 = iParam1;
	func_103(cParam0, 131072);
}

void func_904(char[4] cParam0)
{
	func_1508(cParam0);
	func_1509(cParam0);
	func_1510(cParam0);
	func_1511();
	func_1512(1);
	bLocal_219 = false;
}

void func_905(char[4] cParam0)
{
	if (!func_23(&(cParam0->f_8269)))
	{
		return;
	}
	if (!func_121(cParam0, func_33(cParam0), 268435456))
	{
		return;
	}
	func_1513(cParam0);
}

void func_906(char[4] cParam0)
{
	if (!func_8(cParam0, 8388608))
	{
		if (func_162(cParam0, func_33(cParam0)) == 5 || func_162(cParam0, func_33(cParam0)) == 6)
		{
			if (!func_206())
			{
				if (func_884(&(cParam0->f_13112)) < 5f)
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

void func_907(char[4] cParam0)
{
	if (func_121(cParam0, func_33(cParam0), 8388608))
	{
		if (func_1514(cParam0))
		{
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1515();
		}
		else
		{
			_display_hud_component(-1679307491);
			func_1516(cParam0, func_33(cParam0), 8388608);
		}
	}
}

void func_908(char[4] cParam0)
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
		if (func_232() || func_54())
		{
			func_99(cParam0, 1048576);
		}
	}
	else if (!func_232() && !func_54())
	{
		func_880(cParam0, 1048576);
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
			func_880(cParam0, 134217728);
		}
	}
}

void func_909(char[4] cParam0)
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

void func_910(char[4] cParam0)
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

void func_911(char[4] cParam0)
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

int func_912(char[4] cParam0)
{
	if ((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_248(cParam0->f_5423[iVar0]))
		{
			func_1517(cParam0->f_5423[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_913(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1518(iVar0))
	{
		return false;
	}
	iVar1 = func_1519(iParam2);
	if (!func_1520(iVar1))
	{
		return false;
	}
	if (!func_1521(cParam0, iParam1, iParam2))
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

int func_914(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_21;
}

int func_915(char[4] cParam0, int iParam1)
{
	return 1;
}

void func_916(char[4] cParam0)
{
	if (!func_20() == 0 || network_is_host_of_this_script())
	{
		func_213(&(cParam0->f_603));
	}
}

void func_917(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_10 = iParam2;
	settimera(0);
}

bool func_918(char[4] cParam0)
{
	if (!is_screen_faded_out())
	{
		return true;
	}
	if (!func_26(&(cParam0->f_13109)))
	{
		func_27(&(cParam0->f_13109), 0);
	}
	else if (func_884(&(cParam0->f_13109)) >= 10f)
	{
		return true;
	}
	iVar0 = 1;
	if (func_249(cParam0->f_5421))
	{
		iVar1 = 0;
		while (iVar1 < func_250(cParam0->f_5421))
		{
			iVar2 = func_251(cParam0->f_5421, iVar1);
			if (does_entity_exist(iVar2))
			{
				if (is_entity_a_ped(iVar2))
				{
					iVar3 = func_1522(cParam0->f_5421, iVar1);
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

float func_919(char[4] cParam0)
{
	return func_884(&(cParam0->f_603));
}

bool func_920(char[4] cParam0)
{
	if ((func_120(cParam0, 4) || func_120(cParam0, 128)) && !func_102())
	{
		return false;
	}
	return true;
}

bool func_921(char[4] cParam0, int iParam1, int iParam2)
{
	if (func_8(cParam0, -2147483648))
	{
		return true;
	}
	if (func_913(cParam0, iParam1, 4))
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
		func_1523(cParam0);
		if (func_1524(cParam0))
		{
			func_1525(cParam0);
		}
		if (func_121(cParam0, func_33(cParam0), 33554432) && func_8(cParam0, 524288))
		{
			_uilog_print_cached_objective();
		}
		func_880(cParam0, 524288);
		func_1526(&(cParam0->f_7375), 4);
		if (func_1514(cParam0))
		{
			func_140(cParam0, func_33(cParam0), 8388608);
			_hide_hud_component(-1679307491);
			_uiprompt_enable_prompt_type_this_frame(6);
			func_1515();
		}
		return true;
	}
	return false;
}

void func_922(char[4] cParam0)
{
	func_1527(cParam0);
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

bool func_923(char[4] cParam0, int iParam1)
{
	if (func_120(cParam0, 16384))
	{
		if (func_879(cParam0))
		{
			func_51(&(cParam0->f_10792));
			func_880(cParam0, 2097152);
			func_259(cParam0, 16384);
			func_103(cParam0, 128);
			return true;
		}
		return false;
	}
	if (!func_8(cParam0, 4))
	{
		func_915(cParam0, iParam1);
		func_99(cParam0, 4);
	}
	Var0 = { func_1455(cParam0, iParam1) };
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		if (func_8(cParam0, 2097152))
		{
			if (func_879(cParam0))
			{
				func_880(cParam0, 2097152);
				func_881(cParam0, Var0);
			}
			return false;
		}
		else
		{
			return func_881(cParam0, Var0);
		}
	}
	else if (func_8(cParam0, 2097152))
	{
		if (func_879(cParam0))
		{
			func_880(cParam0, 2097152);
			func_1462(cParam0);
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_121(cParam0, func_33(cParam0), 2))
	{
		return func_881(cParam0, Var0);
	}
	return true;
}

bool func_924(char[4] cParam0)
{
	return func_1528(&(cParam0->f_7375));
}

void func_925(char[4] cParam0)
{
	if (((!does_entity_exist(Global_35) || Global_1935630->f_12) || is_ped_fatally_injured(Global_35)) || get_entity_health(Global_35) <= 0)
	{
		if (func_1529(cParam0))
		{
			func_430(cParam0, 2);
			StringCopy(&cVar0, "PLAYER_DEAD", 64);
			if (get_ped_config_flag(Global_35, 11, true))
			{
				StringCopy(&cVar0, "PLAYER_KO", 64);
			}
			func_1530(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

int func_926(char[4] cParam0, int iParam1)
{
	if (((func_20() != -1 || func_33(cParam0) == 25) || func_33(cParam0) == 26) || Global_1935630->f_12)
	{
		return 0;
	}
	bVar0 = func_121(cParam0, func_33(cParam0), 1);
	iVar1 = 0;
	while (iVar1 < cParam0->f_13145)
	{
		if (func_248(cParam0->f_5423[iVar1]))
		{
			if (func_1531(cParam0->f_5423[iVar1]->f_7, iParam1))
			{
				func_1532(cParam0, cParam0->f_5423[iVar1], bVar0);
			}
		}
		iVar1++;
	}
	return 0;
}

void func_927(char[4] cParam0)
{
	if ((is_screen_faded_out() && !is_player_playing(player_id())) && is_player_being_arrested(player_id(), false))
	{
		if (func_1533(cParam0))
		{
			func_430(cParam0, 6);
			StringCopy(&cVar0, "PLAYER_ARRESTED", 64);
			func_1530(cParam0, cVar0);
			func_160(cParam0, 2);
		}
	}
}

void func_928(char[4] cParam0)
{
	switch (func_1534(&iVar0))
	{
		case 1:
			func_1535(cParam0, Var1, 1, 0);
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

bool func_929(char[4] cParam0, int iParam1)
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

int func_930(char[4] cParam0, int iParam1)
{
	if (func_8(cParam0, 16777216))
	{
		func_1461(cParam0);
		func_880(cParam0, 65536);
		return 0;
	}
	if (!func_121(cParam0, iParam1, 2))
	{
		return 0;
	}
	Var0 = { func_1455(cParam0, iParam1) };
	if (func_1326(cParam0, &Var0))
	{
		if (!func_8(cParam0, 65536))
		{
			func_99(cParam0, 65536);
		}
		return 1;
	}
	return 0;
}

void func_931(char[4] cParam0, int iParam1)
{
	func_1536(&(cParam0->f_638), &(cParam0->f_819), &(cParam0->f_1020), &(cParam0->f_1081), &(cParam0->f_1124), &(cParam0->f_1126), &(cParam0->f_5147), &(cParam0->f_5188), &(cParam0->f_5239), &(cParam0->f_5249), &(cParam0->f_5265), &(cParam0->f_5286), iParam1, func_219(cParam0, iParam1));
}

void func_932(char[4] cParam0, int iParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 67108864))
	{
		if (does_blip_exist(cParam0->f_5303))
		{
			remove_blip(&(cParam0->f_5303));
		}
		cParam0->f_7374 = 0;
		func_917(cParam0, iParam1, 2);
		func_134(cParam0, 0);
		func_135(cParam0, 0);
		func_99(cParam0, 8);
		func_880(cParam0, -2147483648);
		func_140(cParam0, func_33(cParam0), 67108864);
		func_880(cParam0, 4);
		func_880(cParam0, 8192);
		func_880(cParam0, 536870912);
		func_259(cParam0, 4);
		func_65(0);
		func_64(0);
		func_880(cParam0, 2);
		func_45();
		cParam0->f_5302 = 0;
		func_1537(cParam0);
		if ((func_35(cParam0) == 25 || func_35(cParam0) == 26) && func_82(32768))
		{
			func_374(cParam0, 524288);
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

void func_933(bool bParam0)
{
	if (!func_190(0, 0, 1) || bParam0)
	{
		iVar0 = func_1047();
		iVar1 = func_1050(iVar0);
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

int func_934(int iParam0, bool bParam1, bool bParam2, bool bParam3)
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

var func_935(char* sParam0, int iParam1, bool bParam2, bool bParam3, char* sParam4, char* sParam5, char* sParam6, char* sParam7, int iParam8)
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

bool func_936(char[4] cParam0)
{
	return true;
}

bool func_937(char[4] cParam0)
{
	return true;
}

int func_938(char[4] cParam0)
{
	return 1;
}

void func_939(bool bParam0)
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

bool func_940()
{
	return func_1543();
}

void func_941(int iParam0, int iParam1)
{
	iParam0 = func_260(iParam0);
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

void func_942(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
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

void func_943(int* iParam0)
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

bool func_944(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 954);
}

bool func_945(int iParam0)
{
	if (!func_944(iParam0))
	{
		return false;
	}
	return (*Global_1895087)[iParam0]->f_2 == get_id_of_this_thread();
}

bool func_946(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (!func_944(iParam0))
	{
		return false;
	}
	return (Global_24887[iParam0] && iParam1) != 0;
}

bool func_947(int iParam0)
{
	if (!func_944(iParam0))
	{
		return false;
	}
	return _does_thread_exist((*Global_1895087)[iParam0]->f_2);
}

void func_948(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_944(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (&Global_24887[iParam0] - (Global_24887[iParam0] && iParam1));
}

void func_949(int iParam0)
{
	if (!func_944(iParam0))
	{
		return;
	}
	iVar0 = func_1544(iParam0);
	if (does_entity_exist(iVar0))
	{
		if (does_entity_belong_to_this_script(iVar0, false))
		{
			set_ped_as_no_longer_needed(&iVar0);
		}
	}
	(*Global_1895087)[iParam0]->f_2 = 0;
}

int func_950(int iParam0)
{
	if (!func_944(iParam0))
	{
		return 0;
	}
	return Global_1895087[iParam0];
}

bool func_951(int iParam0)
{
	return iParam0 != 0;
}

int func_952(int iParam0)
{
	if (!func_944(iParam0))
	{
		return 0;
	}
	return (*Global_1895087)[iParam0]->f_1;
}

int func_953(int iParam0, bool bParam1)
{
	if (!func_944(iParam0))
	{
		return 0;
	}
	if (!func_946(iParam0, 2))
	{
		return 0;
	}
	if (func_950(iParam0) == 0)
	{
		return 1;
	}
	if (!_0x800df3fc913355f3(func_952(iParam0)))
	{
		return 1;
	}
	if (func_946(iParam0, 1) && !bParam1)
	{
		func_1545(iParam0, 128);
		return 1;
	}
	func_948(iParam0, 129);
	func_949(iParam0);
	_0xfc77c5b44d5ff7c0(func_952(iParam0));
	func_1546(iParam0, 0);
	return 1;
}

char* func_954()
{
	return "cutDeleteMe";
}

void func_955(int iParam0, int iParam1)
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

float func_956(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return 537.6164f;
				case 1:
					return 447.9932f;
			}
			break;
		case 1:
			switch (iParam1)
			{
				case 0:
					return 419.7219f;
				case 1:
					return 51.0652f;
				case 2:
					return 49.0652f;
				case 3:
					return -36.9348f;
				case 4:
					return 179.0138f;
				case 5:
					return 179.0138f;
				case 6:
					return 89.0138f;
				case 7:
					return 180.8351f;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 0:
					return -270.9348f;
				case 1:
					return -416.9348f;
				case 2:
					return -178.9348f;
				case 3:
					return 179.0652f;
				case 4:
					return 210.3555f;
				case 5:
					return 204.3555f;
				case 6:
					return 206.3555f;
				case 7:
					return 268.2578f;
				case 8:
					return 266.2578f;
				case 9:
					return 270.6465f;
				case 10:
					return 86.7572f;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 0:
					return 89.0652f;
				case 1:
					return 93.0652f;
				case 2:
					return 113.0652f;
				case 3:
					return 45.0652f;
				case 4:
					return 89.7219f;
				case 5:
					return 87.99f;
				case 6:
					return 450.1758f;
				case 7:
					return 90.9435f;
				case 8:
					return 88.9435f;
				case 9:
					return 359.5267f;
				case 10:
					return 449.1779f;
				case 11:
					return 449.1779f;
				case 12:
					return 270.2619f;
				case 13:
					return 306.203f;
				case 14:
					return 265.3984f;
				case 15:
					return 183.7572f;
				case 16:
					return 239.7572f;
				case 17:
					return 59.7572f;
				case 18:
					return 295.0299f;
				case 19:
					return 269.4708f;
				case 20:
					return 144.7195f;
				case 21:
					return -92.3653f;
				case 22:
					return 177.732f;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 0:
					return 377.7282f;
				case 1:
					return 195.6202f;
				case 2:
					return 281.9138f;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 0:
					return 27.0652f;
				case 1:
					return 179.0652f;
				case 2:
					return 304.1921f;
				case 3:
					return 359.0652f;
				case 4:
					return 277.0652f;
				case 5:
					return 130.8034f;
				case 6:
					return 91.3605f;
				case 7:
					return 97.1137f;
				case 8:
					return 97.1137f;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 0:
					return 1.0652f;
				case 1:
					return 31.0652f;
				case 2:
					return 179.13f;
				case 3:
					return -94.2359f;
				case 4:
					return -14.2359f;
				case 5:
					return 231.0652f;
				case 6:
					return 241.0652f;
				case 7:
					return 3.2052f;
				case 8:
					return -86.9348f;
				case 9:
					return 179.2122f;
				case 10:
					return 179.2122f;
				case 11:
					return 275.2995f;
				case 12:
					return 179.066f;
				case 13:
					return 38.9611f;
				case 14:
					return 438.7946f;
				case 15:
					return 424.7946f;
				case 16:
					return 440.7946f;
				case 17:
					return 89.6282f;
				case 18:
					return 38.2936f;
				case 19:
					return 6.2936f;
				case 20:
					return 179.13f;
				case 21:
					return 457.8902f;
				case 22:
					return 90.0692f;
				case 23:
					return 90.8511f;
				case 24:
					return -83.9717f;
				case 25:
					return 102.0283f;
				case 26:
					return 257.484f;
				case 27:
					return 223.484f;
				case 28:
					return 185.0318f;
				case 29:
					return 230.3712f;
				case 30:
					return 84.5814f;
				case 31:
					return -92.5989f;
				case 32:
					return 381.8157f;
				case 33:
					return 42.6108f;
				case 34:
					return 93.5312f;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 0:
					return 399.5046f;
				case 1:
					return 399.5046f;
				case 2:
					return 91.0652f;
				case 3:
					return 89.0652f;
				case 4:
					return 467.8902f;
				case 5:
					return 469.8902f;
				case 6:
					return 449.5074f;
				case 7:
					return 90.0452f;
				case 8:
					return 71.0892f;
				case 9:
					return 69.0892f;
				case 10:
					return 114f;
				case 11:
					return 108f;
			}
			break;
		case 8:
			switch (iParam1)
			{
				case 0:
					return 269.5046f;
				case 1:
					return 307.5107f;
				case 2:
					return 267.5107f;
				case 3:
					return 275.5107f;
				case 4:
					return 277.5107f;
				case 5:
					return 289.5107f;
				case 6:
					return 269.8889f;
				case 7:
					return 272.0452f;
				case 8:
					return 270.0452f;
				case 9:
					return 245.541f;
				case 10:
					return -72.5765f;
				case 11:
					return 246.5814f;
			}
			break;
		case 9:
			switch (iParam1)
			{
				case 0:
					return 451.5107f;
				case 1:
					return 593.5107f;
				case 2:
					return 359.5107f;
				case 3:
					return 357.5107f;
				case 4:
					return 179.0892f;
				case 5:
					return 357.5529f;
				case 6:
					return 358.5478f;
			}
			break;
	}
	return 0f;
}

Vector3 func_957(vector3 vParam0, vector3 vParam3, float fParam6)
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

Vector3 func_958(vector3 vParam0, vector3 vParam3, float fParam6)
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

void func_959(int iParam0, bool bParam1)
{
	iVar0 = 16384;
	if (bParam1)
	{
		iVar0 |= 524288;
	}
	_0x2fcd528a397e5c88(iParam0, iVar0);
}

void func_960(int iParam0)
{
	if (iParam0 > 150)
	{
		iParam0 = 150;
	}
	if (iParam0 > (Global_1934765->f_286 - 150))
	{
	}
	if (func_1547(&iVar0))
	{
		if (Global_1934765->f_275[iVar0]->f_1 != iParam0)
		{
			Global_1934765->f_286 = (Global_1934765->f_286 + Global_1934765->f_275[iVar0]->f_1);
			Global_1934765->f_275[iVar0]->f_1 = iParam0;
			Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
			_0x2f9ac754fe179d58(func_1548());
		}
		return;
	}
	iVar0 = func_1549();
	if (iVar0 == -1)
	{
		return;
	}
	Global_1934765->f_275[iVar0]->f_1 = iParam0;
	Global_1934765->f_275[iVar0] = get_id_of_this_thread();
	Global_1934765->f_286 = (Global_1934765->f_286 - iParam0);
	_0x2f9ac754fe179d58(func_1548());
}

int func_961(int iParam0, int iParam1)
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

bool func_962(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 153);
}

void func_963(int iParam0, bool bParam1)
{
	if (!func_962(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1550(iParam0, 1);
	}
	else
	{
		func_1551(iParam0, 1);
	}
	func_1553(func_1552(iParam0), bParam1);
}

void func_964(int iParam0)
{
	iVar0 = func_988(iParam0, 1);
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

void func_965(int iParam0)
{
	iVar0 = func_988(iParam0, 1);
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

void func_966()
{
	func_965(-939420910);
	func_965(-1187950766);
	func_965(356365161);
	func_965(753127042);
	func_965(-2038424081);
	func_965(1884271742);
	func_965(459290420);
}

void func_967()
{
	func_965(704802028);
	func_965(588987611);
	func_965(2008888900);
	func_965(1649996811);
	func_965(227918160);
	func_965(168171957);
	func_965(1193080109);
	func_965(-491981251);
	func_965(-639037538);
	func_965(-618620429);
}

void func_968()
{
	if (Global_1934765->f_286 > 300)
	{
		Global_1934765->f_286 = 300;
	}
	_0x2f9ac754fe179d58(func_1548());
}

int func_969(int iParam0, bool bParam1, bool bParam2)
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

bool func_970(int iParam0)
{
	if (func_1554(iParam0))
	{
		return is_door_registered_with_system(iParam0);
	}
	return false;
}

void func_971(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (func_970(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam2)
		{
			door_system_set_door_state(iParam0, 1);
		}
		door_system_set_open_ratio(iParam0, iParam1, iParam3);
	}
}

void func_972(int iParam0, bool bParam1)
{
	if (func_970(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 2 || bParam1)
		{
			door_system_set_door_state(iParam0, 2);
		}
	}
}

void func_973(int iParam0, bool bParam1)
{
	if (func_970(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 1 || bParam1)
		{
			door_system_set_door_state(iParam0, 1);
		}
	}
}

void func_974(int iParam0, bool bParam1)
{
	if (func_970(iParam0))
	{
		if (door_system_get_door_state(iParam0) != 0 || bParam1)
		{
			door_system_set_door_state(iParam0, 0);
		}
	}
}

bool func_975()
{
	return true;
}

void func_976(int* iParam0)
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
					func_875(&(iVar1[iVar0]), get_offset_from_entity_in_world_coords(*iParam0, 3f, 3f, 0f), get_entity_heading(*iParam0), 2, 1073741824);
				}
			}
		}
		iVar0++;
	}
}

void func_977(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_978()
{
	iVar0 = 3;
	while (iVar0 <= 5)
	{
		if (!func_1555(iVar0, 128))
		{
			func_1556(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_979()
{
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		if (!func_1555(iVar0, 128) && func_1555(iVar0, 1))
		{
			func_1556(iVar0, 4096);
		}
		iVar0++;
	}
}

void func_980(float fParam0)
{
	iVar0 = floor((fParam0 * 1000f));
	if (Global_1393237->f_3 < (get_game_timer() + iVar0))
	{
		Global_1393237->f_3 = (get_game_timer() + iVar0);
	}
}

void func_981()
{
	iVar0 = 0;
	while (iVar0 < 120)
	{
		if (func_1557(iVar0, 16777216))
		{
			if (!func_1558(iVar0))
			{
				func_1559(iVar0, 4096);
			}
		}
		iVar0++;
	}
}

bool func_982(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

void func_983(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = ((iParam1 + (60 * iParam2)) + (3600 * iParam3));
	iVar1 = (iVar0 / 2);
	iVar2 = (iVar1 / 60);
	iVar3 = (iVar1 - iVar2 * 60);
	iVar4 = 0;
	switch (iParam0)
	{
		case 0:
			func_551(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(99, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(44, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 1:
			func_551(5, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(6, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(13, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(25, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(29, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(46, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(67, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(9, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 2:
			func_551(3, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(11, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(18, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(92, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(95, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(96, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(101, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(51, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 3:
			func_551(53, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(54, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(52, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(56, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 4:
			func_551(70, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(63, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(35, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
		case 5:
			func_551(117, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(75, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(76, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(64, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(15, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(108, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			func_551(12, 1, iVar4, iVar3, iVar2, 0, 1, 1);
			break;
	}
}

bool func_984(int iParam0, int iParam1)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return ((*Global_1945938)[iParam0]->f_1 && iParam1) != 0;
}

int func_985(int iParam0)
{
	iVar0 = func_476(iParam0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return func_1560(iVar0);
}

int func_986(int iParam0, int iParam1)
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
			func_1561(iVar2);
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

void func_987()
{
	iVar0 = 0;
	while (iVar0 < Global_1058888->f_40501)
	{
		iVar0++;
	}
}

int func_988(int iParam0, int iParam1)
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

int func_989(bool bParam0)
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

int func_990(int iParam0)
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

void func_991(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 - (Global_1946804->f_2657.f_26.f_6 && iParam0));
}

void func_992(int iParam0, int iParam1)
{
	Global_1946804->f_2657.f_26.f_6 = (Global_1946804->f_2657.f_26.f_6 || iParam0);
}

void func_993(int iParam0, int iParam1)
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
			func_1562((iVar0 - 1), iVar0);
			iVar0 = (iVar0 - 1);
		}
	}
	else
	{
		iVar0 = iParam0;
		while (iVar0 < iParam1)
		{
			func_1562(iVar0, iVar0 + 1);
			iVar0++;
		}
	}
	if (func_183(&(Global_1898164->f_1[0])))
	{
		func_195(&(Global_1898164->f_1[0]), 3);
	}
}

void func_994(int iParam0, int iParam1, bool bParam2)
{
	if (!func_494(iParam0))
	{
		return;
	}
	func_1563(iParam1, &iVar0, &iVar1);
	if (bParam2)
	{
		set_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
	else
	{
		clear_bit((*Global_1935183->f_73[iParam0])[iVar0], iVar1);
	}
}

void func_995(var uParam0)
{
	Var0 = -1600776215;
	Var0.f_1 = 820723243;
	Var0.f_2 = 1;
	*uParam0 = { Var0 };
}

void func_996(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

void func_997(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_998()
{
	if (_get_number_of_references_of_script_with_name_hash(-92416669) > 0)
	{
		return true;
	}
	return false;
}

bool func_999(int iParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1934603->f_161)
	{
		if (iParam0 == get_hash_key(&((*Global_1934603)[iVar0]->f_10)))
		{
			func_1564(iVar0);
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1000(bool bParam0, bool bParam1)
{
	if (func_20() == -1)
	{
		func_1565();
	}
	else
	{
		return;
	}
	func_1566();
	Global_40.f_9.f_14 = func_279();
	Global_40.f_9.f_20 = _get_bounty_for_player(get_player_index());
	Global_40.f_11999 = _0xb00ce33465b5406d(1, "startup");
	if (bParam0 && !bParam1)
	{
		if (func_1567())
		{
			func_365(Global_1310720->f_1);
		}
		else if (func_1568() == func_366(Global_36, 1) && func_1569() != 2)
		{
			func_365(Global_40.f_6);
			Global_40.f_9 = 1;
		}
		else
		{
			func_365(Global_36);
		}
		func_1570(Global_36, &vVar0, &uVar4);
		if (!func_1567())
		{
			if (func_1571(vVar0, Global_36) < func_1571(Global_40.f_9.f_7, Global_36))
			{
				func_365(vVar0);
				Global_40.f_9 = uVar4;
			}
			else
			{
				Global_40.f_9 = 0;
			}
		}
		Global_40.f_9.f_15 = func_366(Global_40.f_9.f_7, 1);
	}
	else if (!bParam0)
	{
		func_1570(Global_36, &(Global_40.f_9.f_7), &(Global_40.f_9));
		override_save_house(true, Global_40.f_9.f_7, 0f, true, &vVar0, &uVar3);
	}
	if (!bParam1)
	{
		func_223(Global_1935630, 8192);
	}
	func_1572();
}

bool func_1001(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (func_248(cParam0->f_5423[iVar0]))
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

bool func_1002(char[4] cParam0, int iParam1)
{
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < cParam0->f_13145)
	{
		if (((func_248(cParam0->f_5423[iVar0]) && is_entity_an_object(&(cParam0->f_5423[iVar0]))) && get_object_index_from_entity_index(&(cParam0->f_5423[iVar0])) != iParam1) && get_entity_model(&(cParam0->f_5423[iVar0])) == get_entity_model(iParam1))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_1003(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1004(iParam0))
	{
		return;
	}
	func_1573(&((*Global_1360165)[iParam0]->f_13), iParam1, bParam2);
}

bool func_1004(int iParam0)
{
	return iParam0 > -1;
}

bool func_1005(var uParam0, int iParam1)
{
	return (*uParam0 && iParam1) != 0;
}

void func_1006(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1004(iParam0))
		{
			return;
		}
	}
	func_1574(iParam1, &iVar0, &iVar1);
	set_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

void func_1007(int iParam0)
{
	func_1006(iParam0, 36, 1);
}

void func_1008(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1004(iParam0))
		{
			return;
		}
	}
	func_1574(iParam1, &iVar0, &iVar1);
	clear_bit((*Global_1360165)[iParam0]->f_58[iVar0], iVar1);
}

int func_1009(int iParam0, bool bParam1)
{
	if (!func_515(iParam0))
	{
		return 0;
	}
	if (bParam1)
	{
		if (!_0x800df3fc913355f3((*Global_1360165)[iParam0]->f_1))
		{
			func_1575(iParam0);
		}
	}
	return (*Global_1360165)[iParam0]->f_1;
}

bool func_1010(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1004(iParam0))
		{
			return false;
		}
	}
	func_1574(iParam1, &iVar0, &iVar1);
	return is_bit_set(&((*Global_1360165)[iParam0]->f_58[iVar0]), iVar1);
}

void func_1011(int iParam0, int iParam1, int iParam2, int iParam3)
{
	if (func_515(iParam0))
	{
		iVar1 = func_552(iParam0);
		if (!is_entity_dead(iVar1))
		{
			iVar0 = get_ped_max_health(iVar1);
			set_ped_config_flag(iVar1, 179, true);
			func_1576(iParam0);
		}
	}
	if (func_1010(iParam0, 5, 1))
	{
		set_ped_config_flag(func_552(iParam0), 137, true);
	}
}

void func_1012(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (!func_1004(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		func_1008(iParam0, 50, 1);
		func_1008(iParam0, 48, 1);
		func_1008(iParam0, 49, 1);
		func_1008(iParam0, 51, 1);
		func_1008(iParam0, 52, 1);
		func_1008(iParam0, 54, 1);
		func_1008(iParam0, 55, 1);
	}
	else
	{
		func_1006(iParam0, 50, 1);
		func_1006(iParam0, 48, 1);
		func_1006(iParam0, 49, 1);
		func_1006(iParam0, 51, 1);
		if (bParam3)
		{
			func_1006(iParam0, 54, 1);
		}
		else
		{
			func_1008(iParam0, 54, 1);
		}
		if (!bParam2)
		{
			func_1006(iParam0, 52, 1);
			if (bParam3)
			{
				func_1006(iParam0, 55, 1);
			}
		}
		else
		{
			func_1008(iParam0, 52, 1);
			if (!bParam3)
			{
				func_1008(iParam0, 55, 1);
			}
		}
	}
}

void func_1013(int iParam0, bool bParam1)
{
	if (!func_1004(iParam0))
	{
		return;
	}
	if (bParam1)
	{
		set_ped_config_flag(func_552(iParam0), 204, true);
	}
	else
	{
		set_ped_config_flag(func_552(iParam0), 204, false);
	}
}

void func_1014(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_515(iParam0))
	{
		return;
	}
	if (func_516(iParam0))
	{
		if (!func_252(iParam0))
		{
			return;
		}
		if (!bParam1)
		{
			return;
		}
	}
	if (func_1010(iParam0, 32, 1))
	{
		if (!bParam2)
		{
			return;
		}
	}
	iVar0 = func_1009(iParam0, 0);
	if (!_is_base_a_persistent_character(iVar0))
	{
		return;
	}
	iVar1 = func_552(iParam0);
	if (((does_entity_exist(iVar1) && func_1577(iParam0) < 10000f) && !bParam3) && !is_screen_faded_out())
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
		func_1006(iParam0, 2, 1);
	}
	else
	{
		func_1578(iParam0);
		func_1006(iParam0, 1, 1);
	}
}

void func_1015(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_515(iParam0))
		{
			return;
		}
	}
	Global_40.f_4942[iParam0] = (&Global_40.f_4942[iParam0] - (Global_40.f_4942[iParam0] && iParam1));
}

int func_1016(int iParam0)
{
	if (!func_515(iParam0))
	{
		return 0;
	}
	if (!does_entity_exist((*Global_1360165)[iParam0]->f_70))
	{
		(*Global_1360165)[iParam0]->f_70 = 0;
	}
	return (*Global_1360165)[iParam0]->f_70;
}

void func_1017(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_1004(iParam1))
	{
		return;
	}
	iVar0 = func_1016(iParam1);
	if (func_1579(iParam1))
	{
		if (!func_1580(iParam1))
		{
			return;
		}
	}
	func_1008(iParam1, 39, 1);
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
			func_1006(iParam1, 43, 1);
		}
		if (bParam4)
		{
			func_1582(iParam1, 0, 1, 1, 1);
		}
	}
}

bool func_1018(int iParam0)
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

void func_1019(int iParam0)
{
	iParam0 = func_260(iParam0);
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

void func_1020(int iParam0, int iParam1)
{
	iParam0 = func_260(iParam0);
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

bool func_1021(int iParam0, int iParam1)
{
	iParam0 = func_260(iParam0);
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

void func_1022(var uParam0)
{
	if (network_is_game_in_progress())
	{
		_set_blip_name_from_player_string(*uParam0, func_1585(func_1584(255), 109029619));
	}
	else if (func_298())
	{
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_ARTHUR");
	}
	else
	{
		func_1049();
		set_blip_name_from_text_file(*uParam0, "SADDLE_BLIP_JOHN");
	}
}

int func_1023(int iParam0)
{
	iParam0 = func_260(iParam0);
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

void func_1024(var uParam0, bool bParam1)
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
		else if (func_298())
		{
			sVar0 = "HORSE_BLIP_ARTHUR";
		}
		else if (func_1049())
		{
			sVar0 = "HORSE_BLIP_JOHN";
		}
		if (compare_strings(sVar0, "", false, -1) != 0)
		{
			set_blip_name_from_text_file(*uParam0, sVar0);
		}
	}
}

int func_1025(int iParam0)
{
	iParam0 = func_260(iParam0);
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

float func_1026(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

float func_1027(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return -1f;
	}
	if (iParam0 >= 7)
	{
		return -1f;
	}
	iVar0 = func_1433(iParam0);
	if (!is_model_valid(iVar0))
	{
		return -1f;
	}
	iVar1 = func_1023(iParam0);
	iVar2 = get_default_max_attribute_rank(iVar0, 7);
	fVar3 = _0xeb67d4e056c85a81(iVar1);
	fVar4 = _0x78d8c1d4eb80c588(iVar1);
	if (iVar1 >= iVar2)
	{
		return fVar3;
	}
	iVar5 = func_1023(iParam0) + 1;
	fVar6 = func_1586(iParam0);
	fVar7 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar1));
	fVar8 = to_float(get_default_attribute_points_needed_for_rank(iVar0, 7, iVar5));
	fVar9 = (fVar6 - fVar7);
	fVar10 = (fVar8 - fVar7);
	fVar11 = (fVar9 / fVar10);
	fVar12 = func_1587(fVar3, fVar4, fVar11);
	return fVar12;
}

void func_1028(int iParam0)
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

void func_1029(int iParam0)
{
	_set_blip_flash_style(iParam0, 673950256);
	_set_blip_flash_style(iParam0, 561559387);
	_set_blip_flash_style(iParam0, -201249929);
}

bool func_1030()
{
	if (func_332())
	{
		return _get_special_edition_cash_camp_bonus_enabled();
	}
	return false;
}

void func_1031(int iParam0)
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

void func_1032(int iParam0, char* sParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return;
	}
	if (is_string_null_or_empty(sParam1))
	{
		sParam1 = "FEED_GANG_MONEY_EARN";
	}
	if (func_1030())
	{
		func_708(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", -329231034, 0, -585750914, 0, 0, 0, 1);
	}
	else
	{
		func_708(_create_var_string(2, sParam1, iParam0), "ITEMTYPE_TEXTURES", 2124880615, 0, -585750914, 0, 0, 0, 1);
	}
}

char* func_1033(int iParam0)
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

char* func_1034(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

int func_1035(int iParam0)
{
	return Global_17504.f_42[iParam0]->f_5;
}

bool func_1036(int iParam0)
{
	func_1044(iParam0, &iVar0, &iVar1);
	return is_bit_set(&(Global_1357549->f_1866[iVar0]), iVar1);
}

void func_1037(int iParam0, int iParam1)
{
	_journal_write_entry(iParam0);
	if (iParam1 == 1)
	{
		func_1038(1);
	}
}

void func_1038(bool bParam0)
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

int func_1039(int iParam0)
{
	if (!func_183(iParam0))
	{
		return -15;
	}
	return func_1591(iParam0);
}

bool func_1040(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_704(iParam1) || !func_704(iParam0))
		{
			return true;
		}
	}
	return iParam0 > iParam1;
}

bool func_1041(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1042(int iParam0)
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

bool func_1043(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1044(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_1592(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1045(var uParam0)
{
	*uParam0 = 176656832;
	uParam0->f_1 = -15;
	uParam0->f_2 = 1017034651;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
}

void func_1046(int iParam0, int iParam1, bool bParam2)
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

int func_1047()
{
	iVar0 = func_558();
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

int func_1048(int iParam0)
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

bool func_1049()
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

int func_1050(int iParam0)
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

int func_1051()
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

void func_1052(int iParam0, bool bParam1, int iParam2)
{
	func_1593((get_game_timer() + iParam2), !bParam1);
	_databinding_write_data_int(Global_1955569->f_1.f_2.f_1, iParam0);
	func_1594(iParam0);
}

void func_1053(int iParam0)
{
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_16[2]), false);
	_databinding_write_data_bool(&(Global_1955569->f_5.f_2[0]->f_32[2]), true);
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_20[2]), func_1595(iParam0));
	_databinding_write_data_string(&(Global_1955569->f_5.f_2[0]->f_24[2]), "pausemenu_player");
}

void func_1054(bool bParam0)
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
				if (!func_578(iVar2, 0))
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
							if (func_597(iVar2) == -1013984273)
							{
								if (iVar0 == 1014511709)
								{
									bVar3 = func_1047() <= -160;
								}
								else if (iVar0 == -1712679084)
								{
									bVar3 = func_1047() >= 160;
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

char* func_1055(int iParam0)
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

bool func_1056(int iParam0)
{
	return func_597(iParam0) == -427144552;
}

bool func_1057(int iParam0)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_599(iParam0, 1048576))
	{
		return false;
	}
	if (is_weapon_valid(iParam0))
	{
		return func_1062(iParam0, &uVar0, 1, 0, 0);
	}
	return func_341(iParam0, 1, 0);
}

void func_1058(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (func_597(iParam0) != -427144552)
	{
		return;
	}
	iVar0 = func_604(iParam0, 0);
	if (!is_weapon_valid(iVar0))
	{
		return;
	}
	if (bParam2 || !func_122(iVar0))
	{
		if (func_20() == -1)
		{
			func_605(iVar0);
		}
		if (bParam2 || (!has_ped_got_weapon(Global_35, iVar0, 0, false) && func_582(iParam0, 0, 0) == 0))
		{
			if (!*bParam3 && !iParam4 == 1248274121)
			{
				func_658(iParam0, iParam1, 0, 0, 0);
				play_sound_frontend("REWARD_NEW_GUN", "HUD_REWARD_SOUNDSET", true, 0);
				*bParam3 = 1;
			}
		}
	}
}

void func_1059(int iParam0, int iParam1)
{
	if (func_598(iParam0, 58855631))
	{
		func_1209(iParam0, -915411861, &iVar0, 1);
		*iParam1 = (*iParam1 * iVar0);
	}
}

int func_1060(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	if (!func_578(iParam0, 0))
	{
		return 0;
	}
	if (!func_606(0))
	{
		bParam2 = true;
	}
	if (bParam2)
	{
		return _0xe80e50bee276a54a(iParam0, uParam1->f_4);
	}
	return _0xaddd1e7c0ecf7d95(func_989(bParam3), iParam0);
}

int func_1061(int iParam0, bool bParam1)
{
	if (func_610(iParam0))
	{
		return get_ped_ammo_by_type(Global_35, iParam0);
	}
	return _0xe787f05dfc977bde(func_989(bParam1), iParam0, 0);
}

bool func_1062(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1600(&iParam0);
	if (!func_578(iParam0, 0))
	{
		return false;
	}
	if (!func_606(0))
	{
		bParam3 = true;
	}
	if (func_1056(iParam0) && _0x705be297eebdb95d(iParam0))
	{
		if (_is_weapon_one_handed(iParam0))
		{
			Var0 = { func_1192(0) };
			Var4.f_9 = -1591664384;
			if (!func_1085(iParam0, &Var0, 1728382685, 0))
			{
				return false;
			}
			else if (func_1086(iParam0, &Var4, 1728382685))
			{
				return false;
			}
			if (func_1193(iParam0, 1))
			{
				if (!func_1085(iParam0, &Var0, -649335959, 0))
				{
					return false;
				}
				else if (func_1086(iParam0, &Var4, -649335959))
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
	iVar27 = func_1060(iParam0, uParam1, bParam3, bParam4);
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
		iVar28 = _0xe787f05dfc977bde(func_989(bParam4), iParam0, 0);
	}
	if ((iVar28 + iParam2) > iVar27)
	{
		return true;
	}
	return false;
}

int func_1063(int iParam0, int iParam1)
{
	if (!func_578(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_597(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_598(iParam0, 1399091007))
	{
		func_1126(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1064(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_1603(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam1)
	{
		func_1604(&Var0, func_1192(0));
	}
	if (!func_1605(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_1136(iVar14);
	return uVar15;
}

int func_1065()
{
	return _0x62cab7db62ead434(-2076669067, 0);
}

int func_1066(int iParam0)
{
	return _0xec3959e9950bf56b(iParam0);
}

void func_1067(int iParam0)
{
	if (func_20() != -1)
	{
		return;
	}
	iVar0 = func_1606(iParam0);
	fVar1 = func_1607(iParam0);
	if ((Global_1347477->f_117 || !func_600(31)) || !func_1608(iVar0))
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
	func_708(_create_var_string(6, func_1611(iParam0), fVar1), "itemtype_textures", func_1612(iVar0), 0, 109029619, "Transaction_Feed_Sounds", "Transaction_Positive", 0, 1);
}

int func_1068(int iParam0)
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

int func_1069(int iParam0, int iParam1)
{
	if (!func_1224(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_int(&uVar5, &Var0);
	return uVar5;
}

char* func_1070(int iParam0, int iParam1, int iParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6)
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
			else if (func_593() >= 12)
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
			else if (func_1109() >= 30)
			{
				sParam3 = _create_var_string(2, "COL_DB_POSTED_OBJ", func_1615(), 30);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_DB_FOUND_OBJ", func_1109(), 30);
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
			else if (func_1110() >= 10)
			{
				sParam3 = _create_var_string(2, "COL_RC_POSTED_OBJ", func_1617(), 10);
			}
			else
			{
				sParam3 = _create_var_string(2, "COL_RC_FOUND_OBJ", func_1110(), 10);
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
				sParam3 = _create_var_string(2, "COL_TX_CARCASS_COLLECTED_OBJ", sParam4, func_1069(iParam6, 20));
			}
			break;
	}
	return sParam3;
}

bool func_1071(int iParam0, int iParam1, int iParam2)
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

bool func_1072(int iParam0, int iParam1, vector3 vParam2, char* sParam5, char* sParam6)
{
	if (!_uilog_is_entry_registered(3, iParam1))
	{
		_uilog_add_entry_hash(3, iParam1, vParam2, get_hash_key(sParam5), get_hash_key(sParam6), 0);
	}
	return true;
}

bool func_1073(int iParam0, int iParam1, char* sParam2, char* sParam3, char* sParam4, char* sParam5, int iParam6, int iParam7)
{
	_uilog_add_or_update_objective(3, iParam1, get_hash_key(sParam2), sParam2, false, false, false);
	_uilog_set_entry_pinned(3, iParam1, true);
	_uilog_set_entry_brief_texture(3, iParam1, get_hash_key(sParam4), get_hash_key(sParam5));
	_uilog_set_entry_icon_texture(3, iParam1, iParam6, iParam7);
	_uilog_update_entry_subheader(3, iParam1, _create_var_string(2, sParam3));
	return true;
}

bool func_1074(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, bool bParam9)
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
				bVar1 = (func_341(iVar2, 1, 0) || func_1620(func_1619(iVar2)));
			}
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			_uilog_add_or_update_objective(3, iParam1, get_hash_key(func_1078(func_1618(iVar0))), func_1078(func_1618(iVar0)), bVar1, true, false);
		}
		if (iParam2 == -440187297)
		{
			if (iVar0 == 0)
			{
				bVar1 = func_1109() >= iParam8;
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
			iVar2 = func_1119(iParam3, func_1622(iVar0));
			if (iParam5 == 8)
			{
				bVar1 = true;
			}
			else if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1115(iVar2) - iParam7) >= func_1069(iParam3, func_1623(iVar0));
				}
				else
				{
					bVar1 = func_1115(iVar2) >= func_1069(iParam3, func_1623(iVar0));
				}
			}
			else if (iParam4 == iVar2)
			{
				bVar1 = (func_1115(iVar2) + iParam7) >= func_1069(iParam3, func_1623(iVar0));
			}
			else
			{
				bVar1 = func_1115(iVar2) >= func_1069(iParam3, func_1623(iVar0));
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
				bVar1 = func_1110() >= iParam8;
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
			iVar2 = func_1119(iParam3, func_1622(iVar0));
			if (bParam9)
			{
				if (iParam4 == iVar2)
				{
					bVar1 = (func_1115(iVar2) - iParam7) >= true;
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

bool func_1075(int iParam0, int iParam1, int iParam2, int iParam3)
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

bool func_1076(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (func_183(func_196(0)) && ((func_1630(0) == 1 || func_1630(0) == 8) || func_1630(0) == 6))
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

var func_1077(char* sParam0, char* sParam1, int iParam2, int iParam3, int iParam4, char* sParam5, int iParam6, int iParam7, char* sParam8, char* sParam9, int iParam10, int iParam11, int iParam12, int iParam13)
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

char* func_1078(int iParam0)
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

bool func_1079(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return true;
}

bool func_1080(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	return is_bit_set(&(Global_40.f_7857[iVar1]), iVar2);
}

void func_1081(int iParam0)
{
	iVar0 = iParam0;
	iVar1 = (iVar0 / 31);
	iVar2 = (iVar0 % 31);
	uVar3 = &Global_40.f_7857[iVar1];
	set_bit(&uVar3, iVar2);
	Global_40.f_7857[iVar1] = uVar3;
}

void func_1082(int iParam0)
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
			func_1631(1);
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
			func_1632(1);
			break;
		case 19:
			_uitutorial_set_rpg_icon_visibility(1, 0);
			_uitutorial_set_rpg_icon_visibility(0, 0);
			func_1632(2);
			break;
		case 20:
			_uitutorial_set_rpg_icon_visibility(3, 0);
			_uitutorial_set_rpg_icon_visibility(2, 0);
			func_1632(3);
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
			func_1633(1);
			break;
		case 34:
			func_1634(1);
			break;
		case 35:
			func_1635(1);
			break;
		case 36:
			break;
		case 37:
			func_1636(0);
			break;
		case 38:
			func_1637(0);
			break;
		case 39:
			func_1638(0);
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
			if ((!&Global_1879534 && func_390()) && _is_deadeye_ability_locked(get_player_index(), 2))
			{
				func_715("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_MANUAL_PAINT", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_level(get_player_index(), 2);
			func_319(586, 0);
			break;
		case 3:
			if ((!&Global_1879534 && func_390()) && _is_deadeye_ability_locked(get_player_index(), 3))
			{
				func_715("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_STAY_ACTIVE", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_level(get_player_index(), 3);
			func_319(587, 0);
			break;
		case 4:
			if ((!&Global_1879534 && func_390()) && _is_deadeye_ability_locked(get_player_index(), 4))
			{
				func_715("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_FATAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_level(get_player_index(), 4);
			func_319(588, 0);
			break;
		case 5:
			if ((!&Global_1879534 && func_390()) && _is_deadeye_ability_locked(get_player_index(), 5))
			{
				func_715("DEADEYE_ABILITY_UNLOCK", "DEADEYE_ABILITY_CRITICAL", 908516622, 1963346246, -2, 0, 0, 0, 0, 1, 1);
			}
			_set_deadeye_ability_locked(get_player_index(), 1, false);
			_set_deadeye_ability_locked(get_player_index(), 2, false);
			_set_deadeye_ability_locked(get_player_index(), 3, false);
			_set_deadeye_ability_locked(get_player_index(), 4, false);
			_set_deadeye_ability_locked(get_player_index(), 5, false);
			_set_deadeye_ability_level(get_player_index(), 5);
			func_319(589, 0);
			break;
		case 24:
			_unlock_set_unlocked(-200143754, true);
			_unlock_set_visible(-200143754, true);
			_0x83b8d50eb9446bba(player_ped_id(), 1);
			if (func_20() == -1)
			{
				if (!func_1149(99217379) || func_1639(99217379) == 2110595215)
				{
					if (func_1049())
					{
						iVar0 = -1515874150;
					}
					else
					{
						iVar0 = 899611344;
					}
					if (!func_341(iVar0, 1, 0))
					{
						func_651(iVar0, 1, 752097756);
					}
					func_630(Global_35, iVar0, 0, 99217379, 1, 1, 1, 0, 1, 1);
				}
			}
			break;
		case 48:
			if (func_20() == -1)
			{
				if (!func_341(1013902307, 1, 0))
				{
					func_651(1013902307, 1, 752097756);
				}
			}
			break;
		case 50:
			if (func_20() == -1)
			{
				if (!func_341(1013902307, 1, 0))
				{
					func_651(1013902307, 1, 752097756);
				}
				if (!func_341(142640135, 1, 0))
				{
					func_651(142640135, 1, 752097756);
				}
			}
			break;
		case 49:
			if (func_20() == -1)
			{
				if (!func_341(786809402, 1, 0))
				{
					func_651(786809402, 1, 752097756);
				}
			}
			break;
		case 51:
			if (func_20() == -1)
			{
				if (!func_341(786809402, 1, 0))
				{
					func_651(786809402, 1, 752097756);
				}
				if (!func_341(-518019409, 1, 0))
				{
					func_651(-518019409, 1, 752097756);
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
			func_1640();
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

bool func_1083(int iParam0)
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

int func_1084(int iParam0, int iParam1)
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

bool func_1085(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	return func_1602(iParam0, *uParam1, iParam2, bParam3) > 0;
}

bool func_1086(int iParam0, var uParam1, int iParam2)
{
	if (func_1641(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

struct<4> func_1087(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_578(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_989(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

bool func_1088(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(uParam1))
	{
		return false;
	}
	if (func_1642(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1196(*uParam1, &Var0, bParam6, 0))
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
	if (!func_606(bParam6))
	{
		iVar14 = -1;
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_989(bParam6), uParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

void func_1089(int iParam0, int iParam1)
{
	if ((get_ammo_in_clip(Global_35, &iVar0, iParam0) && iVar0 < iParam1) && iVar0 < _get_weapon_clip_size(iParam0))
	{
		iVar1 = func_1643(_get_weapon_clip_size(iParam0), iParam1);
		set_ammo_in_clip(Global_35, iParam0, iVar1);
	}
}

void func_1090(int iParam0)
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
	iVar2 = func_279();
	func_328(&iVar2, 0, 0, 0, 1, 0, 0, 0);
	decor_set_int(Global_35, sVar1, iVar2);
}

int func_1091(int iParam0)
{
	if (func_1644(iParam0))
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

bool func_1092(int iParam0)
{
	return _is_ammo_valid(_get_ammo_type_for_weapon(iParam0));
}

int func_1093(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar0 = 0;
	if (!is_entity_dead(iParam0))
	{
		get_current_ped_weapon(iParam0, &iVar0, bParam2, iParam1, bParam3);
	}
	return iVar0;
}

int func_1094(int iParam0)
{
	iVar0 = _get_weapon_type_from_ammo_type(iParam0);
	if (_0x705be297eebdb95d(iVar0))
	{
		if (_is_weapon_two_handed(iVar0))
		{
			if (!func_600(50))
			{
				if (!func_600(48))
				{
					return 133;
				}
				return 135;
			}
		}
		else if (_is_weapon_one_handed(iVar0))
		{
			if (!func_600(51))
			{
				if (!func_600(49))
				{
					return 134;
				}
				return 136;
			}
		}
	}
	return 137;
}

bool func_1095(int iParam0, int iParam1, var uParam2)
{
	if (!func_578(iParam1, 0))
	{
		return false;
	}
	if (func_597(iParam1) != -1037537535)
	{
		return false;
	}
	bVar1 = func_20() != -1;
	iVar2 = _get_metaped_type(iParam0);
	if (func_602(iParam1) == -999503751)
	{
		return true;
	}
	iVar4 = func_676(iParam1);
	if (iVar4 == -358215195)
	{
		*uParam2 = 2084739242;
		return false;
	}
	bVar7 = false;
	iVar8 = iParam1;
	if (func_598(iParam1, 866047851))
	{
		iVar5 = func_677(iVar4, 1);
		if (func_1645(&(Global_1946804->f_1497)) >= 2 && &Global_1946804->f_1497.f_1[iVar5] != iVar8)
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
			iVar3 = func_602(&(Global_1946804->f_1497.f_1[iVar5]));
			if (bVar7 && iVar3 == -525676072)
			{
				*uParam2 = -1938792745;
				return false;
			}
			break;
		case -1944638739:
			iVar5 = 35;
			if (&Global_1946804->f_1497.f_1[iVar5] != &Global_1946804->f_57[iVar5] && func_598(iParam1, -1638171711))
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
			if (func_1646(1868067663, &uVar0))
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
				iVar10 = func_1647(iVar8, iVar4, iVar2, bVar1);
				iVar9 = func_1647(&(Global_1946804->f_1497.f_1[iVar5]), iVar4, iVar2, bVar1);
				if (((iVar11 + iVar10) - iVar9) > 31)
				{
					*uParam2 = -1608241763;
					return false;
				}
				Jump @776; //curOff = 583
				iVar3 = func_602(iParam1);
				iVar5 = 36;
				iVar6 = 35;
				if (iParam1 != &Global_1946804->f_57[iVar6] && func_598(&(Global_1946804->f_1497.f_1[iVar5]), -1638171711))
				{
					*uParam2 = -357399012;
					return false;
				}
				if (iVar3 == 1769055947 || iVar3 == 1545016984)
				{
				}
				else
				{
					if (iParam1 != &Global_1946804->f_57[iVar6] && func_1648(&(Global_1946804->f_1497.f_1[iVar5])))
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

void func_1096()
{
	_0xfe7c9cf376d23342(player_id(), (1f - (Global_40.f_11095.f_64 + Global_1347477->f_175)));
}

void func_1097()
{
	fVar0 = Global_40.f_11095.f_44;
	fVar1 = Global_40.f_11095.f_45;
	set_player_health_recharge_multiplier(player_id(), (1f - (fVar0 - Global_40.f_11095.f_69)));
	_0x08e22898a6af4905(player_id(), (1f - fVar0));
	_0xfeca17cf3343694b(player_id(), (1f - fVar0));
	_0xbbadfb5e5e5766fb(player_id(), (1f - fVar1));
}

int func_1098()
{
	iVar1 = 0;
	while (iVar1 < 26)
	{
		if (func_341(func_1649(iVar1), 1, 0))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1099(int iParam0)
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

bool func_1100(int iParam0, int iParam1)
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
	if (func_341(iVar0, 1, 0) && func_341(iVar1, 1, 0))
	{
		return true;
	}
	return false;
}

int func_1101(int iParam0)
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

bool func_1102(int iParam0, int iParam1)
{
	iVar0 = func_1650(iParam0);
	if (iVar0 != -15)
	{
		func_328(&iVar0, 0, iParam1, 0, 0, 0, 0, 0);
		return !func_705(iVar0, 1);
	}
	return false;
}

void func_1103(int iParam0)
{
	Global_40.f_12004.f_6 = (Global_40.f_12004.f_6 || iParam0);
}

void func_1104(int iParam0)
{
	Global_40.f_12004.f_1 = (Global_40.f_12004.f_1 || iParam0);
}

void func_1105(int iParam0)
{
	Global_40.f_12004.f_3 = (Global_40.f_12004.f_3 || iParam0);
}

void func_1106(int iParam0)
{
	Global_40.f_12004.f_5 = (Global_40.f_12004.f_5 || iParam0);
}

int func_1107(int iParam0)
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
	iVar1 = func_1115(iVar9);
	iVar2 = func_1115(iVar10);
	iVar3 = func_1115(iVar11);
	iVar5 = func_1116(iVar9);
	iVar6 = func_1116(iVar10);
	iVar7 = func_1116(iVar11);
	if (iParam0 != 2)
	{
		iVar4 = func_1115(iVar12);
		iVar8 = func_1116(iVar12);
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

void func_1108(int iParam0)
{
	Global_40.f_12004.f_2 = (Global_40.f_12004.f_2 || iParam0);
}

int func_1109()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 30)
	{
		if (func_1651(_0x126cbebba46693cf(iVar1, -440187297, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1110()
{
	return _0x5461c821d00fe15a(2103522376, 0);
}

bool func_1111(int iParam0, int iParam1, char* sParam2, bool bParam3, int iParam4, bool bParam5)
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

void func_1112(int iParam0)
{
	if (!func_1652(iParam0))
	{
		func_1654(func_1653(iParam0));
	}
}

int func_1113()
{
	iVar0 = 0;
	iVar1 = 0;
	while (iVar1 < 5)
	{
		if (func_1652(_0x126cbebba46693cf(iVar1, -1531394072, 0)))
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

int func_1114(int iParam0, int iParam1, int iParam2)
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
	iVar1 = func_1115(iVar9);
	iVar2 = func_1115(iVar10);
	iVar3 = func_1115(iVar11);
	iVar5 = func_1116(iVar9);
	iVar6 = func_1116(iVar10);
	iVar7 = func_1116(iVar11);
	if (iParam2 != 2)
	{
		iVar4 = func_1115(iVar12);
		iVar8 = func_1116(iVar12);
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

int func_1115(int iParam0)
{
	if (func_341(iParam0, 1, 0))
	{
		iVar0 = func_582(iParam0, 0, 0);
	}
	return iVar0;
}

int func_1116(int iParam0)
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

int func_1117(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0);
}

void func_1118(int iParam0, int iParam1)
{
	_0x3ea62e56f386c997(iParam0, iParam1);
}

int func_1119(int iParam0, int iParam1)
{
	if (!func_1224(17, &Var0))
	{
		return 0;
	}
	Var0.f_2 = iParam1;
	Var0.f_3 = iParam0;
	_datafile_get_hash(&uVar5, &Var0);
	return uVar5;
}

void func_1120(int iParam0, int iParam1, char* sParam2, int iParam3, bool bParam4)
{
	if ((((iParam0 == func_1119(iParam1, 5) || iParam0 == func_1119(iParam1, 6)) || iParam0 == func_1119(iParam1, 7)) || iParam0 == func_1119(iParam1, 8)) || iParam0 == func_1119(iParam1, 9))
	{
		func_1111(iParam1, iParam0, &sParam2, 0, iParam3, bParam4);
		func_594(51, 0, 0, iParam1, sParam2, 0, -1, 0);
		func_596(51, 0, 0, 0, 0, -1, 0);
	}
}

void func_1121(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if ((((iParam0 == func_1119(iParam1, 5) || iParam0 == func_1119(iParam1, 6)) || iParam0 == func_1119(iParam1, 7)) || iParam0 == func_1119(iParam1, 8)) || iParam0 == func_1119(iParam1, 9))
	{
		if (func_1111(iParam1, iParam0, &iVar0, 0, 0, 0))
		{
			func_594(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_596(51, 0, 0, iVar0, func_1069(iParam1, 20), 1, 0);
			}
		}
		else
		{
			func_594(51, iParam0, 0, iParam1, iVar0, 0, -1, 0);
			if (!bParam2)
			{
				func_596(51, 0, 0, iVar0, func_1069(iParam1, 20), 1, 0);
			}
		}
	}
}

bool func_1122()
{
	if (func_184((*Global_1347702)[37]->f_15) && Global_1392388->f_7)
	{
		return true;
	}
	return false;
}

void func_1123(int iParam0)
{
	_0x3ea62e56f386c997(iParam0, 1);
}

void func_1124(int iParam0)
{
	if (!func_1655(iParam0))
	{
		_0x3ea62e56f386c997(iParam0, 1);
	}
}

void func_1125(int iParam0)
{
	_0x398fab9c96a81924(iParam0, 1);
}

void func_1126(int iParam0, int iParam1, var uParam2)
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

bool func_1127(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	func_1656();
	if (iParam2 == 39)
	{
		Var0 = { func_689(iParam0, 1, 0) };
		iParam2 = func_677(func_690(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_598(iParam0, 866047851) && func_1645(&(Global_1946804->f_1378)) >= 2)
	{
		return false;
	}
	if ((func_1129(32768) && iParam2 == 10) && iParam0 != &Global_1946804->f_57[iParam2])
	{
		func_1657(func_1197(iParam2, 1));
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	func_1658(iParam2);
	func_1659(iParam2, iVar5);
	if (&Global_1946804->f_1378.f_1[iParam2] != &Global_1946804->f_57[iParam2] && Global_1946804->f_57[iParam2]->f_1 > 1)
	{
		func_1178(Global_1946804->f_1378.f_1[iParam2], 4, 6);
		func_1178(Global_1946804->f_1497.f_1[iParam2], 4, 6);
	}
	func_1184(&(Global_1946804->f_1378), iParam0, iParam2, bParam4, 1);
	if (iParam1 == 0)
	{
		iParam1 = Global_1946804->f_1378.f_1[iParam2]->f_1;
	}
	Global_1946804->f_1378.f_1[iParam2] = iParam0;
	Global_1946804->f_1378.f_1[iParam2]->f_1 = func_1660(iParam0, iParam2, iParam1, func_20() != -1);
	if (bParam4)
	{
		func_1661(&(Global_1946804->f_1378), 1, 3);
	}
	else
	{
		func_1661(&(Global_1946804->f_1378), 1, 0);
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
				func_1389(func_1197(&(Global_1946804->f_2589.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1128(bool bParam0, bool bParam1, bool bParam2)
{
	func_1662(&(Global_1946804->f_2589), bParam0, bParam1, bParam2);
}

bool func_1129(int iParam0)
{
	return (Global_1946804 && iParam0) != 0;
}

void func_1130()
{
	func_1663(&(Global_1946804->f_2776));
	func_1664(32768);
	func_1389(1108822547, 8, 6);
}

int func_1131(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_677(iParam0, 1);
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

void func_1132(int iParam0)
{
	if (func_1665(iParam0, 4096))
	{
		Global_1946804->f_858++;
	}
	if (Global_1946804->f_858 <= 0)
	{
		return;
	}
	Var0.f_1 = iParam0;
	Var0 = 34;
	func_1666(Var0);
}

void func_1133(int iParam0, int iParam1, int iParam2)
{
	Var0.f_1 = iParam2;
	Var0 = iParam0;
	Var0.f_2 = iParam1;
	func_1666(Var0);
}

bool func_1134(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_989(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

bool func_1135(var uParam0, int iParam1, int iParam2, int iParam3)
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

int func_1136(int iParam0)
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

float func_1137()
{
	if (func_1667())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 2) || Global_40.f_11095.f_46 == 0)
	{
		return func_1668(2);
	}
	if (Global_1347477->f_119)
	{
		return func_1668(2);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_46) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1669();
	fVar2 = func_1670();
	fVar3 = func_1671();
	fVar4 = func_1672();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_50)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1673()));
	fVar7 = (func_1668(2) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1674(3, round((to_float(iVar8) * fVar10)), 0);
	func_1675(3, fVar9, fVar9 > 100f);
	return func_1676(fVar7, -100f, 100f);
}

float func_1138()
{
	if (func_1667())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 1) || Global_40.f_11095.f_47 == 0)
	{
		return func_1668(1);
	}
	if (Global_1347477->f_119)
	{
		return func_1668(1);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_47) * 60f);
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1669();
	fVar2 = func_1670();
	fVar3 = func_1671();
	fVar4 = func_1672();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_51)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1673()));
	fVar7 = (func_1668(1) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1674(2, round((to_float(iVar8) * fVar10)), 0);
	func_1675(2, fVar9, fVar9 > 100f);
	return func_1676(fVar7, -100f, 100f);
}

float func_1139()
{
	if (func_1667())
	{
		return 0f;
	}
	if (_0x200373a8df081f22(Global_35, 0) || Global_40.f_11095.f_48 == 0)
	{
		return func_1668(0);
	}
	fVar0 = (IntToFloat(Global_40.f_11095.f_48) * 60f);
	if (func_1677())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_54 + 1f));
	}
	else if (func_1678())
	{
		fVar0 = ((10f * 60f) * (Global_40.f_11095.f_53 + 1f));
	}
	else if (Global_1347477->f_119)
	{
		return func_1668(0);
	}
	if (Global_40.f_11095.f_43)
	{
		fVar0 = (10f * 60f);
	}
	fVar0 = (fVar0 / to_float(7));
	fVar1 = func_1669();
	fVar2 = func_1670();
	fVar3 = func_1671();
	fVar4 = func_1672();
	fVar5 = (1f / (1f - ((((fVar1 + fVar2) + fVar3) + fVar4) + Global_40.f_11095.f_49)));
	fVar0 = (fVar0 * fVar5);
	fVar6 = (200f / fVar0);
	fVar6 = (fVar6 * (30f / func_1673()));
	fVar7 = (func_1668(0) - fVar6);
	iVar8 = round(((fVar0 / 60f) * to_float(7)));
	fVar9 = (100f * (to_float(90) / to_float(iVar8)));
	fVar10 = ((fVar7 + 100f) / 200f);
	func_1674(1, round((to_float(iVar8) * fVar10)), 0);
	func_1675(1, fVar9, fVar9 > 100f);
	if (fVar7 <= -100f && _get_player_health(player_id()) < 1f)
	{
		return func_1668(0);
	}
	return func_1676(fVar7, -100f, 100f);
}

bool func_1140(int iParam0, int iParam1)
{
	return (Global_1905944->f_22[iParam0]->f_2 && iParam1) != 0;
}

bool func_1141(int iParam0)
{
	return _0xf83d3dda4d3c8169(iParam0) > 0;
}

bool func_1142(int iParam0, var uParam1, var uParam2, int iParam3, int iParam4, bool bParam5)
{
	if (!func_578(iParam0, 0))
	{
	}
	if (!_0xb881ca836cc4b6d4(uParam2))
	{
		return false;
	}
	if (func_1062(iParam0, uParam2, iParam3, bParam5, 0))
	{
		return false;
	}
	if (!func_606(0))
	{
		return false;
	}
	if (!_0xcb5d11f9508a928d(func_989(0), uParam1, uParam2, iParam0, uParam2->f_4, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1143(int iParam0, bool bParam1)
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
				return func_1679();
			}
			break;
	}
	return 0;
}

int func_1144(int iParam0)
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

bool func_1145(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 95)
	{
		return false;
	}
	return true;
}

void func_1146(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_1145(iParam0))
	{
		return;
	}
	if (func_1680(iParam0))
	{
		return;
	}
	if (!func_1681(iParam0))
	{
		func_1682(iParam0, 1, 0);
	}
	iVar0 = func_1683(iParam0);
	if (iVar0 != 0 && !(iParam0 >= 0 && iParam0 <= 5))
	{
		if (func_1684(iParam0, 512))
		{
			func_688(30, iVar0, 0, 0, 0);
		}
	}
	if ((!func_207() && !bParam1) && !func_190(0, 0, 1))
	{
		func_717(_create_var_string(10, "OUT_JOURN_DONE", _create_var_string(0, iVar0)), 10000, 0, 0, 0, 1);
	}
	func_1685(iParam0, 6);
	if (bParam2)
	{
		if (!func_190(0, 0, 1))
		{
			func_361(1, 4);
		}
	}
}

bool func_1147(int iParam0, bool bParam1)
{
	return func_1143(iParam0, 0) < func_1686(iParam0, bParam1);
}

bool func_1148(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < Global_1946804->f_2657.f_19)
	{
		iVar1 = &Global_1946804->f_2657[iVar0];
		if (func_602(iVar1) == iParam0)
		{
			*iParam1 = iVar1;
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1149(int iParam0)
{
	if (iParam0 == -358215195)
	{
		return false;
	}
	return &Global_1946804->f_1497.f_1[func_677(iParam0, 1)] != &Global_1946804->f_57[func_677(iParam0, 1)];
}

void func_1150(int iParam0, int iParam1)
{
	if (func_598(iParam1, 130796156))
	{
		func_1687(iParam1, 0);
	}
	else if (func_598(iParam1, 930141731))
	{
		func_1687(iParam1, 1);
		func_1688(iParam0);
	}
}

void func_1151(var uParam0, int iParam1)
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

int func_1152(int iParam0, var uParam1, var uParam2, int iParam3)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	if (!_cashinventory_is_session_ready())
	{
		return 0;
	}
	func_1689(uParam1);
	if (!_0x77b299e8799b1332(&uVar0, &(uParam1->f_1), uParam2))
	{
		return 0;
	}
	Var1.f_2.f_1 = 10;
	Var1 = iParam3;
	Var1.f_2 = { *uParam1 };
	func_1690(uParam2, iParam0, Var1);
	return 1;
}

int func_1153(int iParam0)
{
	return &(Global_1900073->f_159[iParam0]);
}

char* func_1154(int iParam0)
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

int func_1155(int iParam0)
{
	if (!func_1691(iParam0, &uVar0, 805880880, 0, 0, -401018458))
	{
		return -1102349958;
	}
	return uVar0;
}

bool func_1156()
{
	return !&Global_1911774;
}

void func_1157(int iParam0, int iParam1, bool bParam2, bool bParam3)
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

char* func_1158(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

bool func_1159(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

char* func_1160(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

bool func_1161(int iParam0, int iParam1, bool bParam2)
{
	if ((bParam2 && func_20() == 0) && !_unlock_is_visible(iParam0))
	{
		return false;
	}
	if (!func_1692(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1162(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return false;
	}
	if (func_1692(iParam0, iParam1, &uVar2, &iVar1))
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

void func_1163(bool bParam0)
{
	if (bParam0)
	{
		func_312(2032023096, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(-615217896, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(655868243, 1, 1, 0, 0, 752097756, 0, 0, 0, 0);
		func_1164();
		_unlock_set_unlocked(645322743, true);
	}
	else
	{
		func_1693(2032023096);
		func_315(-615217896);
		func_673(655868243, 1, 1, -142743235, 1);
		func_1695(146323340, func_1694());
		Var0 = { func_1441() };
		if (func_1696(&Var0) == -1387633835)
		{
			func_1697(&Var0);
			func_1698(Var0);
		}
		iVar7 = -868094182;
		iVar8 = 1074477367;
		iVar9 = 1;
		func_1699(&iVar7, &iVar8, &iVar9);
		iVar6 = 0;
		while (iVar6 < 7)
		{
			if (func_1434(iVar6) == 2010625508)
			{
				func_1700(iVar6, iVar7);
				func_1701(iVar6, iVar8);
				func_1702(iVar6, iVar9);
				func_1703(iVar6, 0);
				if (func_1704(iVar6))
				{
					func_1705(iVar6);
				}
				iVar10 = func_1706(iVar8);
				func_1707(iVar6, iVar10);
			}
			iVar6++;
		}
		_unlock_set_unlocked(645322743, false);
	}
}

int func_1164()
{
	if (!func_1708(-1898635967, func_1694(), 1))
	{
		return 0;
	}
	if (func_332())
	{
		if (!func_1708(146323340, func_1694(), 0))
		{
			return 0;
		}
	}
	return 1;
}

void func_1165()
{
	func_326(34411519);
	func_326(834124286);
	func_326(-570967010);
}

void func_1166(bool bParam0)
{
	if (bParam0)
	{
		if (_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_312(-1080874779, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(-223790555, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(1566032147, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(891311852, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(-1353737667, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(-330313895, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(-2051332199, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(1237770824, 5, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(-1795542128, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(-1757588258, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		func_312(-1921080134, 3, 0, 0, 0, 752097756, 0, 0, 0, 0);
		_unlock_set_unlocked(-1426541042, true);
	}
	else
	{
		if (!_unlock_is_unlocked(-1426541042))
		{
			return;
		}
		func_673(-1080874779, 3, 1, -142743235, 1);
		func_673(-223790555, 3, 1, -142743235, 1);
		func_673(1566032147, 3, 1, -142743235, 1);
		func_673(891311852, 5, 1, -142743235, 1);
		func_673(-1353737667, 5, 1, -142743235, 1);
		func_673(-330313895, 5, 1, -142743235, 1);
		func_673(-2051332199, 5, 1, -142743235, 1);
		func_673(1237770824, 5, 1, -142743235, 1);
		func_673(-1795542128, 3, 1, -142743235, 1);
		func_673(-1757588258, 3, 1, -142743235, 1);
		func_673(-1921080134, 10, 1, -142743235, 1);
		iVar1 = -868094182;
		iVar2 = 1074477367;
		iVar3 = 1;
		func_1699(&iVar1, &iVar2, &iVar3);
		iVar0 = 0;
		while (iVar0 < 7)
		{
			if (func_1434(iVar0) == 153881023)
			{
				func_1700(iVar0, iVar1);
				func_1701(iVar0, iVar2);
				func_1702(iVar0, iVar3);
				func_1703(iVar0, 0);
				if (func_1704(iVar0))
				{
					func_1705(iVar0);
				}
				iVar4 = func_1706(iVar2);
				func_1707(iVar0, iVar4);
			}
			iVar0++;
		}
		func_1164();
		_unlock_set_unlocked(-1426541042, false);
	}
}

void func_1167(int iParam0, char* sParam1, int iParam2, bool bParam3, int iParam4)
{
	func_1709(iParam0);
	if (bParam3)
	{
		func_716(iParam0, sParam1, iParam2);
	}
}

bool func_1168(int iParam0)
{
	return (Global_40.f_12004.f_10 && iParam0) != 0;
}

void func_1169(int iParam0)
{
	Global_40.f_12004.f_10 = (Global_40.f_12004.f_10 - (Global_40.f_12004.f_10 && iParam0));
}

struct<14> func_1170()
{
	Var3.f_9 = -1591664384;
	Var17.f_9 = -1591664384;
	if (func_1134("ALL WEAPONS", &iVar0, &iVar1, -1591664384, 0))
	{
		iVar2 = 0;
		while (iVar2 < iVar1)
		{
			if (!func_1135(&Var3, iVar2, iVar0, iVar1))
			{
				Jump @136; //curOff = 80
			}
			else if (Var3.f_4 != 127400949)
			{
			}
			else if (func_1086(Var3.f_4, &Var17, Var3.f_9))
			{
			}
			else
			{
				func_1136(iVar0);
				return Var3;
			}
			iVar2++;
		}
		func_1136(iVar0);
	}
	Var39.f_9 = -1591664384;
	return Var39;
}

void func_1171(int iParam0, struct<4> Param1, int iParam5)
{
	Var0 = { Param1 };
	Var0.f_4 = iParam5;
	Var5.f_9 = -1591664384;
	if (func_1710(Param1, iParam5, &Var5, 0))
	{
		func_1088(Var5.f_4, &Var5, &Var0, -1, -142743235, 1, 0);
	}
	func_1142(iParam0, &Var19, &Var0, 1, 752097756, 0);
	func_1711(Var19, 1);
}

bool func_1172(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!is_weapon_valid(iParam0))
	{
		return false;
	}
	Var0 = { func_1603(iParam0, -1591664384, -1591664384, -1591664384, 0, 0) };
	if (bParam2)
	{
		func_1604(&Var0, func_1192(0));
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
			if (!func_1135(&Var16, iVar35, iVar14, iVar15))
			{
			}
			else
			{
				Var30.f_4 = Var16.f_9;
				Var30 = { Var16.f_5 };
				if (func_1088(iParam0, &Var16, &Var30, 1, iParam3, 0, 0))
				{
					iVar36++;
				}
			}
			iVar35++;
		}
	}
	func_1136(iVar14);
	if (iVar36 < iParam1)
	{
	}
	return true;
}

bool func_1173(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_578(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	Var0 = { func_689(iParam0, bParam4, 1) };
	if (Var0.f_4 == 1084182731)
	{
		return func_1712(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var5 = { func_1087(iParam0, Var0, Var0.f_4, bParam4) };
	return func_1088(iParam0, &Var5, &Var0, iParam1, iParam2, bParam3, bParam4);
}

void func_1174(int iParam0, int iParam1)
{
	if (!Global_1901328->f_94)
	{
		if (func_598(iParam0, 606799272))
		{
			func_1713(iParam0, iParam1);
		}
		if (func_598(iParam0, -1112814642) && func_598(iParam0, -1697809989))
		{
			func_626(iParam0, iParam1, 1, 0);
		}
	}
}

int func_1175(int iParam0, var uParam1)
{
	iVar1 = iParam0;
	if (!func_1714(iVar1, &iVar0))
	{
		return 0;
	}
	if (Global_1946804->f_2657.f_19 == 1)
	{
		Global_1946804->f_2657.f_19 = 0;
		*uParam1 = 0;
		if (func_602(iParam0) != -999503751)
		{
			func_1715(&(Global_1946804->f_2657.f_26), 0, Global_1946804->f_2657.f_19);
		}
		Global_1946804->f_2657[0] = 0;
		return 1;
	}
	Global_1946804->f_2657.f_19 = (Global_1946804->f_2657.f_19 - 1);
	*uParam1 = (*uParam1 - 1);
	Global_1946804->f_2657[iVar0] = &Global_1946804->f_2657[Global_1946804->f_2657.f_19];
	Global_1946804->f_2657[Global_1946804->f_2657.f_19] = 0;
	if (func_602(iParam0) != -999503751)
	{
		func_1715(&(Global_1946804->f_2657.f_26), iVar0, Global_1946804->f_2657.f_19);
	}
	func_1716(iParam0, 1);
	return 1;
}

void func_1176()
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

void func_1177(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1717(0);
	}
	if (bParam0)
	{
		func_1189(8);
		func_1189(512);
	}
	else
	{
		func_1189(8);
		func_1189(16);
	}
}

void func_1178(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

int func_1179(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_679();
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

int func_1180(int iParam0)
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

void func_1181(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (func_1718(uParam0->f_1[iVar0], 2))
		{
			iVar7 = func_1197(iVar0, 1);
			if (func_1386(iVar0, iParam1))
			{
				vVar4 = { func_681(iVar0, -1) };
				if ((vVar4.x != &Global_1946804->f_57[iVar0] && vVar4.x != 0) && (&uParam0->f_1[iVar0] != vVar4.x || uParam0->f_1[iVar0]->f_1 != vVar4.y))
				{
					*uParam0->f_1[iVar0] = { vVar4 };
				}
				if (func_1385(iVar7, 4))
				{
					func_1389(iVar7, 4, 6);
				}
			}
			else
			{
				func_1388(iVar7, 4, 6);
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

bool func_1182(int iParam0)
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
	func_1719(&(Global_1946804->f_964), iVar0, -367421157, 1409451727, 1, iParam0);
	_0x91ded5dd64bb2691(&(Global_1946804->f_964));
	if (!_0x44b3a36933ac009c(&uVar1, &(Global_1946804->f_964), 1409451727))
	{
		return false;
	}
	return true;
}

bool func_1183(int iParam0, int iParam1, int iParam2)
{
	*iParam2 = 1155669136;
	return true;
}

void func_1184(var uParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = 12;
	iVar2 = func_602(&(uParam0->f_1[iParam2]));
	iVar3 = 0;
	if (bParam3)
	{
		iVar3 = 3;
	}
	if (func_1386(iParam2, 65536) && &uParam0->f_1[iVar1] == -452402570)
	{
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1659(iVar1, iVar3);
		}
	}
	if (func_1149(-1586649372) && func_1386(iParam2, 524288))
	{
		iVar1 = 33;
		uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
		uParam0->f_1[iVar1]->f_1 = 0;
		if (bParam4)
		{
			func_1659(iVar1, iVar3);
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
						func_1659(iVar1, iVar3);
					}
				}
			}
			func_1720(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
			break;
		case 688587926:
			func_1720(uParam0, 0, (1 && bParam4), (1 && bParam4), bParam3);
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
						func_1659(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 525
				func_1720(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				iVar1 = 16;
				if (uParam0->f_1[iVar1]->f_1 == 1155669136)
				{
					uParam0->f_1[iVar1]->f_1 = -1539589426;
					if (bParam4)
					{
						func_1659(iVar1, iVar3);
					}
				}
				if (uParam0->f_1[iVar1]->f_1 == 1530758430)
				{
					uParam0->f_1[iVar1]->f_1 = 1334603721;
					if (bParam4)
					{
						func_1659(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 656
				func_1720(uParam0, (1 && bParam4), (1 && bParam4), (1 && bParam4), bParam3);
				Jump @1415; //curOff = 691
				func_1720(uParam0, (1 && bParam4), (1 && bParam4), 0, bParam3);
				iVar1 = 22;
				if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
				{
					uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
					uParam0->f_1[iVar1]->f_1 = 0;
					if (bParam4)
					{
						func_1659(iVar1, iVar3);
					}
				}
				Jump @1415; //curOff = 786
				func_1720(uParam0, (1 && bParam4), 0, 1, bParam3);
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
							func_1659(iVar1, iVar3);
						}
					}
					iVar1 = 38;
					if (&uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1])
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1659(iVar1, iVar3);
						}
					}
					iVar1 = 35;
					if (-923693316 == func_602(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1659(iVar1, iVar3);
						}
					}
				}
				else
				{
					iVar1 = 35;
					if ((func_1648(iParam1) && &uParam0->f_1[iVar1] != &Global_1946804->f_57[iVar1]) && -923693316 == func_602(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1659(iVar1, iVar3);
						}
					}
				}
				Jump @1415; //curOff = 1130
				iVar1 = 36;
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && func_598(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1659(iVar1, iVar3);
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
						func_1659(iVar1, iVar3);
					}
				}
				if (&uParam0->f_1[iParam2] != &Global_1946804->f_57[iParam2] && (func_1648(&(Global_1946804->f_1497.f_1[iVar1])) || func_598(&(Global_1946804->f_1497.f_1[iVar1]), -1638171711)))
				{
					uParam0->f_1[iParam2] = &Global_1946804->f_57[iParam2];
					uParam0->f_1[iParam2]->f_1 = 0;
					if (bParam4)
					{
						func_1659(iVar1, iVar3);
					}
				}
			}
			switch (func_602(iParam1))
			{
				case 81053684:
					iVar1 = 10;
					if (-525676072 == func_602(&(uParam0->f_1[iVar1])))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1659(iVar1, iVar3);
						}
					}
					break;
				case -525676072:
					iVar1 = 12;
					if (81053684 == func_602(&(uParam0->f_1[iVar1])) || func_598(&(uParam0->f_1[iVar1]), 866047851))
					{
						uParam0->f_1[iVar1] = &Global_1946804->f_57[iVar1];
						uParam0->f_1[iVar1]->f_1 = 0;
						if (bParam4)
						{
							func_1659(iVar1, iVar3);
						}
					}
					break;
			}
			default:
				break;
	}
}

bool func_1185(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return is_bit_set(&(Global_36638.f_1444[iParam0]), iParam1);
	}
	return is_bit_set(&(Global_40.f_7832[iParam0]), iParam1);
}

bool func_1186(int iParam0)
{
	if (func_20() != -1)
	{
		if (func_1140(iParam0, 4))
		{
			return false;
		}
	}
	else if (func_1140(iParam0, 2))
	{
		return false;
	}
	return true;
}

bool func_1187(int iParam0)
{
	iVar1 = get_cloud_time_as_int();
	if (!func_1140(iParam0, 65536) && !func_1140(iParam0, 32768))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < Global_40.f_7756)
	{
		if (Global_40.f_7756[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (func_1140(iParam0, 131072))
			{
				iVar3 = 2;
			}
			iVar2 = (&Global_40.f_7756[iVar0] - iVar1);
			if (Global_40.f_7756[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && func_1140(iParam0, 32768))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_1188()
{
	return Global_1905944->f_5694;
}

void func_1189(int iParam0)
{
	Global_1946804 = (Global_1946804 || iParam0);
}

void func_1190(struct<4> Param0)
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
			if (func_1721(Param0))
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
			func_1722(Param0);
			*Global_1946804->f_668[Global_1946804->f_856] = { Param0 };
			Global_1946804->f_850++;
			Global_1946804->f_856 = (Global_1946804->f_856 + 1 % 25);
			func_1189(8);
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
			if (func_1721(Param0))
			{
				return;
			}
			func_1722(Param0);
			*Global_1946804->f_567[Global_1946804->f_851] = { Param0 };
			Global_1946804->f_851++;
			func_1189(8);
			break;
		case 30:
		case 31:
		case 32:
		case 33:
		case 35:
		case 36:
			func_1133(Param0, Param0.f_1, Param0.f_2);
			break;
	}
}

struct<4> func_1191(bool bParam0)
{
	return func_1087(1328661203, func_1723(), -1591664384, bParam0);
}

struct<4> func_1192(bool bParam0)
{
	iVar0 = func_989(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224215))
		{
			*Global_1224215 = { func_1087(923904168, func_1191(bParam0), -740156546, bParam0) };
		}
		return *Global_1224215;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224223))
		{
			*Global_1224223 = { func_1087(923904168, func_1191(bParam0), -740156546, 0) };
		}
		return *Global_1224223;
	}
	return func_1087(923904168, func_1191(bParam0), -740156546, 0);
}

bool func_1193(int iParam0, bool bParam1)
{
	if (func_602(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_600(24);
		}
		else
		{
			return true;
		}
	}
	return false;
}

struct<4> func_1194(bool bParam0)
{
	iVar0 = func_989(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(Global_1224219))
		{
			*Global_1224219 = { func_1087(271701509, func_1191(bParam0), 12999093, 0) };
		}
		return *Global_1224219;
	}
	return func_1087(271701509, func_1191(bParam0), 12999093, 0);
}

bool func_1195(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_602(iParam0);
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

bool func_1196(var uParam0, var uParam1, bool bParam2, int iParam3, var uParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return false;
	}
	if (!_0x9700e8efc4ab9089(func_989(bParam5), &uParam0, uParam4, !bParam6))
	{
		return false;
	}
	return true;
}

int func_1197(int iParam0, int iParam1)
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

int func_1198(bool bParam0, int iParam1, int iParam2)
{
	if (bParam0)
	{
		return iParam1;
	}
	return iParam2;
}

void func_1199(int iParam0, int iParam1)
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

void func_1200(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 11)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 62914560);
	*iParam0 = (*iParam0 || shift_left(iParam1, 22));
}

void func_1201(int iParam0, int iParam1)
{
	iVar0 = func_697(*iParam0);
	iVar1 = func_696(*iParam0);
	if (iParam1 < 1 || iParam1 > func_702(iVar0, iVar1))
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4063232);
	*iParam0 = (*iParam0 || shift_left(iParam1, 17));
}

void func_1202(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 23)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 126976);
	*iParam0 = (*iParam0 || shift_left(iParam1, 12));
}

void func_1203(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 4032);
	*iParam0 = (*iParam0 || shift_left(iParam1, 6));
}

void func_1204(int iParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 >= 60)
	{
		return;
	}
	*iParam0 = (*iParam0 - *iParam0 & 63);
	*iParam0 = (*iParam0 || shift_left(iParam1, 0));
}

void func_1205(char* sParam0, char* sParam1, int iParam2)
{
	_0x74bcceb233ad95b2(-466562563, get_hash_key(sParam0));
	_0x74bcceb233ad95b2(1885309238, get_hash_key(sParam1));
	_0x74bcceb233ad95b2(-826961056, iParam2);
}

int func_1206(int iParam0)
{
	return floor(pow(2f, to_float(iParam0)));
}

int func_1207(int iParam0)
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

bool func_1208(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_20() == -1)
	{
		if (func_1056(iParam0))
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

int func_1209(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!func_578(iParam0, 0))
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

int func_1210(int iParam0, var uParam1, bool bParam2, bool bParam3)
{
	func_1600(&iParam0);
	if (!func_578(iParam0, 0))
	{
		return 0;
	}
	if (!func_606(0))
	{
		bParam2 = true;
	}
	iVar0 = func_1060(iParam0, uParam1, bParam2, bParam3);
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
		iVar1 = _0xe787f05dfc977bde(func_989(bParam3), iParam0, 0);
	}
	if (iVar0 > iVar1)
	{
		return (iVar0 - iVar1);
	}
	return 0;
}

int func_1211(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (func_598(iParam0, -5284486))
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
		if (func_1724(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
		iVar64 = func_659(iParam0, 862142561);
		if (iVar64 != 0)
		{
			Var50.f_8 = iVar64;
			iVar61 = _item_database_create_item_collection(&Var50, &iVar60, 1);
			if (iVar61 != -1)
			{
				iVar62 = 0;
				while (iVar62 < iVar60)
				{
					iVar63 = func_662(iVar62, iVar61);
					if (func_578(iVar63, 0) && iVar63 != iParam0)
					{
						if (bParam4)
						{
							iVar49 = (iVar49 + func_1211(iVar63, -915411861, 1, 0, 0));
						}
						else
						{
							Var35 = iVar63;
							iVar33 = _0x640f890c3e5a3ffd(1, &Var35, &iVar34);
							if (iVar33 != -1)
							{
								if (iVar34 == 0)
								{
									iVar49 = (iVar49 + func_1211(iVar63, -915411861, 1, 0, 0));
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
	if (!func_1724(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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

bool func_1212(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	return iParam0 <= func_1725(1);
}

void func_1213(int iParam0, char* sParam1)
{
	if (iParam0 != 18 && iParam0 != 7)
	{
		_uilog_add_total_take_entry(get_hash_key(func_1726(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP", _create_var_string(2, func_318(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
	else
	{
		_uilog_add_total_take_entry(get_hash_key(func_1726(iParam0)), 1997120069, _create_var_string(10, "MISSION_COMPLETE_TAKE_COMP_NOS", _create_var_string(2, func_318(iParam0, 0))), _create_var_string(2, "MISSION_COMPLETE_TAKE_AMOUNT", sParam1), 601389479);
	}
}

var func_1214()
{
	return Global_40.f_4283.f_325;
}

bool func_1215(int iParam0)
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

bool func_1216(int iParam0)
{
	return (iParam0 > 0 && iParam0 < 13);
}

void func_1217(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_3 = iParam1;
}

void func_1218(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 != -1)
	{
		return;
	}
	Global_12106[iParam0]->f_4 = iParam1;
}

void func_1219(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0] = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0] = iParam1;
}

void func_1220(int iParam0, int iParam1)
{
	if (Global_1572887->f_12 == -1)
	{
		Global_12106[iParam0]->f_5 = iParam1;
		return;
	}
	Global_1058888->f_498[iParam0]->f_1 = iParam1;
}

int func_1221(bool bParam0, var uParam1)
{
	*bParam0 = 0;
	*uParam1 = 0;
	bVar0 = func_390();
	bVar1 = false;
	if (bVar0 && !func_1727(4))
	{
		bVar1 = true;
	}
	if ((bVar0 && func_1727(37)) && !func_1727(43))
	{
		*bParam0 = 0;
		*uParam1 = 0;
		return 0;
	}
	bVar2 = false;
	if ((bVar0 && func_1727(43)) && !func_1727(44))
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
		if (func_1435(0) == 1)
		{
			*bParam0 = 1;
		}
		if (func_1435(1) == 1)
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

int func_1222()
{
	return Global_40.f_1095.f_3054;
}

bool func_1223(int iParam0)
{
	iParam0 = func_260(iParam0);
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

bool func_1224(int iParam0, var uParam1)
{
	if (!func_1728(iParam0))
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

int func_1225()
{
	if (func_390())
	{
		if (!func_1727(3))
		{
			return func_1729(43);
		}
		if (func_1727(38) && !func_1727(43))
		{
			return func_1730(8);
		}
	}
	return 0;
}

bool func_1226(int iParam0)
{
	if (!func_241(iParam0))
	{
		return false;
	}
	return (((*Global_1888801)[iParam0]->f_20 == 1 || (*Global_1888801)[iParam0]->f_20 == 2) && !func_1731(iParam0));
}

Vector3 func_1227(int iParam0, int iParam1)
{
	func_1224(15, &Var0);
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

int func_1228(int iParam0, int iParam1)
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
	iVar0 = func_961(Global_1310720->f_21, 2);
	if (iVar0 == -1)
	{
		return 0;
	}
	func_1224(15, &Var1);
	Var1.f_2 = -1999103282;
	Var1.f_3 = iParam0;
	Var1.f_4 = iParam1;
	if (_datafile_get_data_node_index(&(Var1.f_1), &Var1))
	{
		Var1.f_2 = 383290544;
		_datafile_get_hash(&iVar6, &Var1);
		if (func_1732(iVar0) == iVar6)
		{
			return 1;
		}
	}
	return 0;
}

bool func_1229(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_1733(iParam0);
	if (func_487(373691918) && Global_1310720->f_12)
	{
		return iVar0 == 4;
	}
	if (iParam2 != -1)
	{
		return iVar0 == iParam2;
	}
	return (bParam1 || iVar0 == -1);
}

bool func_1230(int iParam0)
{
	if (!func_1224(15, &Var0))
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

bool func_1231(vector3 vParam0, int iParam3, int iParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (bParam5)
	{
		if (func_1734(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!bParam7 || func_1735(5))
	{
		if (func_1736(iParam3, iParam4))
		{
			return false;
		}
	}
	iVar0 = func_1428(vParam0);
	if (bParam6)
	{
		iVar1 = func_366(vParam0, 1);
		if (func_116(iVar1) || func_1737(iVar0, 1))
		{
			return false;
		}
	}
	if (!func_1738(iParam3, iParam4))
	{
		return false;
	}
	if (!func_1739())
	{
		if (func_1740(iParam3, iParam4))
		{
			return false;
		}
	}
	if (!_does_volume_exist(bParam8))
	{
		if (!func_1741(iVar0))
		{
			return false;
		}
		if (Global_1310720->f_23 >= 3)
		{
			if (Global_1310720->f_21 != -1)
			{
				if (Global_1310720->f_21 == func_366(vParam0, 0))
				{
					return false;
				}
			}
		}
	}
	if (!func_1742(iParam3, iParam4))
	{
		return false;
	}
	if (func_1743(0) == 3)
	{
		if (((vParam0.x > -1480f && vParam0.x < -1475f) && vParam0.y > -359f) && vParam0.y < -354f)
		{
			return false;
		}
	}
	if (!func_1744(65536, 2))
	{
		if (((vParam0.x > 1673f && vParam0.x < 1676f) && vParam0.y > -1888f) && vParam0.y < -1885f)
		{
			return false;
		}
	}
	if (func_390())
	{
		if (_does_volume_exist(bParam8))
		{
			if (!_0xf256a75210c5c0eb(bParam8, vParam0))
			{
				return false;
			}
		}
		if (func_1745(vParam0, bParam10) || func_1746(vParam0, bParam10))
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

int func_1232(vector3 vParam0)
{
	iVar0 = func_1747(vParam0, 0f, 0f, 0, 2);
	return func_1747(vParam0, (*Global_1894052)[iVar0]->f_1, (*Global_1894052)[iVar0]->f_2, Global_1894052[iVar0], 4);
}

void func_1233(int iParam0)
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

char* func_1234(int iParam0)
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
	return func_1397(iVar0);
}

char* func_1235(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return "";
	}
	iVar0 = get_entity_model(iParam0);
	return func_1748(iVar0);
}

char* func_1236(int iParam0)
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

void func_1237(char[4] cParam0, int iParam1)
{
	iVar0 = func_132(iParam1);
	if (!func_1518(iVar0))
	{
		return;
	}
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 7)
	{
		(*cParam0->f_1[iVar0])[iVar1] = 63087;
		clear_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
		iVar1++;
	}
}

void func_1238(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (func_1518(iVar0))
	{
		cParam0->f_1[iVar0]->f_9 = iParam2;
	}
}

int func_1239(int iParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5)
{
	if (!func_1749(iParam0, 1))
	{
		return 0;
	}
	if (func_951(func_950(iParam0)))
	{
		iVar1 = func_952(iParam0);
		if (!_0x800df3fc913355f3(iVar1))
		{
			return 0;
		}
		if (bParam1)
		{
			if (_0xeb98b38ca60742d7(iVar1))
			{
				_0x49a8c2cd97815215(iVar1);
			}
		}
		_0x6759bee6762e140b(iVar1);
		iVar0 = _0x0cadc3a977997472(iVar1, 0);
		if (!does_entity_exist(iVar0))
		{
			return 0;
		}
	}
	if ((bParam4 && !func_945(iParam0)) && !is_entity_dead(iVar0))
	{
		set_ped_config_flag(iVar0, 171, bParam5);
		set_entity_as_mission_entity(iVar0, true, true);
	}
	func_1545(iParam0, 1);
	func_1750(iParam0);
	if (bParam3)
	{
		func_1545(iParam0, 16);
	}
	if (!bParam2)
	{
	}
	return iVar0;
}

void func_1240(int iParam0, struct<4> Param1, int iParam5, float fParam6)
{
	func_875(iParam0, Param1, Param1.f_3, iParam5, fParam6);
}

void func_1241()
{
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_1093(Global_35, iVar0, 0, 1);
		if (is_weapon_valid(iVar1))
		{
			if ((_is_weapon_two_handed(iVar1) || func_1644(iVar1)) || iVar0 == 3)
			{
				_0xe9bd19f8121ade3e(Global_35, iVar1);
			}
		}
		iVar0++;
	}
}

void func_1242(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = Global_35;
	}
	func_1751();
	Global_1905942 = Global_40.f_7729;
	if (func_1129(32768))
	{
		func_1752(&(Global_1946804->f_1735.f_120));
		func_1130();
	}
	if (Global_40.f_7729 <= -1)
	{
		Global_1905942 = 0;
		func_1753(iParam0, &Global_1905942, &(Global_1946804->f_1735), 0, Global_1946804->f_1497, 0);
	}
	else if (Global_40.f_7729 <= 5)
	{
		func_1753(iParam0, &Global_1905942, &(Global_1946804->f_1735), 0, Global_1946804->f_1497, 0);
	}
	else
	{
		func_1753(iParam0, &Global_1905942, &(Global_1946804->f_1735), 0, 0, 0);
	}
}

void func_1243(char[4] cParam0, char* sParam1, float fParam2, char* sParam3, char* sParam4, char* sParam5, char* sParam6, int iParam7)
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

void func_1244(int iParam0)
{
	func_1754(0, iParam0);
	func_1754(1, iParam0);
}

void func_1245(char* sParam0)
{
	StringCopy(sParam0, "walk_and_talk", 64);
	StringCopy(&(sParam0->f_8), "WALK_AND_TALK_REQUEST", 64);
	_0x6a4d224fc7643941(sParam0);
}

void func_1246(float fParam0)
{
	if (func_435(Global_35, 0))
	{
		set_ped_max_move_blend_ratio(Global_35, fParam0);
	}
}

void func_1247(char[4] cParam0)
{
	func_1755(&(cParam0->f_7375));
}

void func_1248(char[4] cParam0, char[4] cParam1)
{
	func_1756(&(cParam0->f_7375), cParam1, func_162(cParam0, func_33(cParam0)) != 5);
}

struct<8> func_1249(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_1250(char[4] cParam0, struct<8> Param1)
{
	func_1757(&(cParam0->f_7375), Param1);
}

void func_1251(int iParam0, int iParam1, var uParam2, vector3 vParam3, char* sParam6, int iParam7, int iParam8, float fParam9, float fParam10, int iParam11, float fParam12, int iParam13, int iParam14, bool bParam15, int iParam16, int iParam17, int iParam18, bool bParam19)
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
	else if (!func_1758(vParam3, 0f, 0f, 0f))
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
		func_1759(iParam0, iParam1, iParam14);
	}
}

void func_1252(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10, int iParam11, int iParam12, int iParam13, int iParam14, int iParam15, int iParam16, int iParam17, int iParam18, bool bParam19, int iParam20, int iParam21, bool bParam22)
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
		func_1759(iParam0, iParam1, iParam18);
	}
}

int func_1253(char[4] cParam0)
{
	return cParam0->f_599;
}

int func_1254(char[4] cParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5)
{
	if (is_entity_dead(iParam1))
	{
		return iVar0;
	}
	bVar1 = func_1760(cParam0, iParam1);
	bVar2 = (is_entity_a_ped(iParam1) && func_1761(get_ped_index_from_entity_index(iParam1)));
	if (bVar2)
	{
		iVar3 = func_1762(get_ped_index_from_entity_index(iParam1));
	}
	if (bVar1)
	{
		func_1493(cParam0, iParam1, 128);
		if (bParam4)
		{
			func_1493(cParam0, iParam1, 1024);
		}
	}
	if (is_entity_a_ped(iParam1) && bParam4)
	{
		iVar0 = get_blip_from_entity(iParam1);
		if (bVar2)
		{
			func_1763(iVar3);
			if (does_blip_exist(iVar0))
			{
				_blip_set_modifier(iVar0, -546708623);
				if (bParam5)
				{
					_blip_set_modifier(iVar0, 231194138);
				}
			}
		}
		else if (func_1760(cParam0, iParam1) && does_blip_exist(iVar0))
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
		if (func_1001(cParam0, iParam1, &iVar4))
		{
			func_1517(cParam0->f_5423[iVar4]);
		}
	}
	if (bVar2)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_1764(iVar3);
	}
	return iVar0;
}

bool func_1255(char[4] cParam0, char* sParam1, bool bParam2)
{
	StringCopy(&cVar0, sParam1, 24);
	if (func_1765(&(cParam0->f_5310), cVar0, 0, -1, bParam2, 0))
	{
		return true;
	}
	return false;
}

bool func_1256(char[4] cParam0, char* sParam1, int iParam2, float fParam3, char* sParam4)
{
	if (iParam2 == 0 || iParam2 == 4)
	{
		if (func_1257() || func_206())
		{
			return false;
		}
	}
	else if (iParam2 == 7 && func_207())
	{
		return false;
	}
	else if (iParam2 == 6 && func_1766(sParam1))
	{
		func_553(&(cParam0->f_13106));
		return true;
	}
	if (iParam2 != 2 && iParam2 != 3)
	{
		func_27(&(cParam0->f_13106), 0);
	}
	if ((func_1767(&(cParam0->f_13106), fParam3) || fParam3 <= 0f) || (iParam2 == 2 && iParam2 == 3))
	{
		switch (iParam2)
		{
			case 0:
				if (!func_1255(cParam0, sParam1, 0))
				{
					return false;
				}
				break;
			case 1:
				func_1255(cParam0, sParam1, 0);
				break;
			case 2:
			case 3:
				bVar0 = iParam2 == 2;
				if (!is_string_null_or_empty(sParam4))
				{
					if (_0x1ecc76792f661cf5(sParam4))
					{
						pause_scripted_conversation(sParam4, bVar0, true, false, true);
						func_553(&(cParam0->f_13106));
						return false;
					}
					else if (!_0xd89504d9d7d5057d(sParam4) || !_0xf01c570e0a0a1e67(sParam4))
					{
						if (iParam2 == 3)
						{
							func_1255(cParam0, sParam1, 0);
						}
						else if (!func_1255(cParam0, sParam1, 0))
						{
							return false;
						}
					}
					if (_0xd89504d9d7d5057d(sParam4) && _0xf01c570e0a0a1e67(sParam4))
					{
						if (!func_26(&(cParam0->f_13106)) && func_1255(cParam0, sParam1, 0))
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
					func_1255(cParam0, sParam1, 0);
				}
				else if (!func_1255(cParam0, sParam1, 0))
				{
					return false;
				}
				break;
			case 4:
			case 6:
				func_1324(cParam0, sParam1, 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
				break;
			case 5:
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1324(cParam0, sParam1, 0, 7500, 1, -1082130432, 0, 0, -1, -1, 0);
				break;
			case 7:
				func_717(sParam1, 10000, 0, 0, 0, 1);
				break;
			case 8:
				func_113(1);
				func_717(sParam1, 10000, 0, 0, 0, 1);
				break;
			case 9:
				func_113(1);
				func_1768(sParam1, 0, 0, 1);
				break;
		}
		func_553(&(cParam0->f_13106));
		return true;
	}
	return false;
}

bool func_1257()
{
	return func_1769(1);
}

void func_1258(char[4] cParam0, char* sParam1, int iParam2, bool bParam3)
{
	StringCopy(&cVar0, sParam1, 24);
	func_1765(&(cParam0->f_5310), cVar0, 1, iParam2, bParam3, 0);
}

void func_1259()
{
	if (!func_1293("ODR5_WALK"))
	{
		return;
	}
	iVar0 = get_current_scripted_conversation_line("ODR5_WALK");
	switch (iVar410)
	{
		case 0:
			iVar1 = func_1770("ODR5_WALK", iVar0);
			if ((iVar0 == 0 && iVar1 > 0) && iVar1 < 5000)
			{
				task_look_at_entity(uVar665, Global_35, 2500, 1024, 51, 1);
				iLocal_412 = 1;
			}
			break;
		case 1:
			if (iVar0 == 1)
			{
				task_look_at_entity(uVar665, Global_35, 3000, 1024, 51, 1);
				iLocal_412 = 3;
			}
			break;
		case 3:
			if (iVar0 == 4)
			{
				task_look_at_entity(uVar665, Global_35, 2500, 1024, 51, 1);
				iLocal_412 = 5;
			}
			break;
		case 5:
			if (iVar0 == 5)
			{
				task_look_at_entity(uVar664, uVar665, 2000, 1024, 51, 1);
				iLocal_412 = 7;
			}
			break;
		case 7:
			if (iVar0 == 8)
			{
				task_look_at_entity(uVar664, Global_35, 3000, 1024, 51, 1);
				iLocal_412 = 9;
			}
			break;
		case 9:
			if (iVar0 == 10)
			{
				task_look_at_entity(uVar664, Global_35, 2000, 1024, 51, 1);
				iLocal_412 = 11;
			}
			break;
		case 11:
			if (iVar0 == 13)
			{
				task_look_at_entity(uVar664, Global_35, 2000, 1024, 51, 1);
				iLocal_412 = 13;
			}
			break;
		case 13:
			if (iVar0 == 15)
			{
				task_look_at_entity(uVar665, uVar664, 1200, 1024, 51, 1);
				iLocal_412 = 15;
			}
			break;
		case 15:
			if (iVar0 == 16)
			{
				task_look_at_entity(uVar665, Global_35, 2000, 1024, 51, 1);
				iLocal_412 = 17;
			}
			break;
		case 17:
			if (iVar0 == 17)
			{
				task_look_at_entity(uVar664, Global_35, 1200, 1024, 51, 1);
				iLocal_412 = 19;
			}
			break;
	}
}

int func_1260(char[4] cParam0)
{
	return func_866(cParam0->f_607);
}

bool func_1261(char[4] cParam0, int iParam1, char[4] cParam2, int iParam3, int iParam4, float fParam5, float fParam6, int iParam7)
{
	Var0 = { func_1771(iParam1) };
	Var8 = { func_1772(iParam1) };
	return func_1773(cParam0, func_552(iParam1), &Var0, &Var8, cParam2, iParam3, iParam4, fParam5, fParam6, iParam7, 1);
}

void func_1262(char* sParam0, int iParam1, float fParam2, float fParam3, bool bParam4)
{
	if (!is_audio_scene_active(sParam0))
	{
		return;
	}
	if (is_entity_dead(Global_35))
	{
		return;
	}
	if (is_entity_dead(iParam1))
	{
		return;
	}
	fVar2 = func_874(Global_35, iParam1, 1, 1);
	if (fVar2 < fParam3)
	{
		fVar3 = 1f;
	}
	else if (fVar2 > fParam2)
	{
		fVar3 = 0f;
	}
	else
	{
		fVar0 = (fParam2 - fParam3);
		fVar1 = (1f / fVar0);
		fVar3 = ((fParam2 - fVar2) * fVar1);
	}
	set_audio_scene_variable(sParam0, sLocal_179, fVar3);
	if (bParam4)
	{
	}
}

int func_1263(char[4] cParam0)
{
	return cParam0->f_598;
}

void func_1264(char[4] cParam0)
{
	if (bLocal_215)
	{
	}
	if (func_386(iLocal_225, 4))
	{
		if (!func_386(iLocal_225, 8))
		{
			func_1287(5);
			func_412(&iLocal_225, 8);
		}
	}
	if (func_386(iLocal_225, 1))
	{
		if (!func_386(iLocal_225, 2))
		{
			func_1287(7);
			func_412(&iLocal_225, 2);
		}
	}
	switch (iVar333)
	{
		case 0:
			func_1287(1);
			break;
		case 1:
			func_1774(uLocal_230[0], 0);
			if (!_is_anim_scene_started(&(uLocal_230[0]), false))
			{
				_set_anim_scene_playback_list_bool(&(uLocal_230[0]), cLocal_155, true);
				start_anim_scene(&(uLocal_230[0]));
			}
			func_1287(2);
			break;
		case 2:
			break;
		case 3:
			func_1287(4);
			break;
		case 4:
			break;
		case 5:
			if (func_435(&(Local_14.f_9[0]), 0))
			{
				func_1306();
				task_pause(0, 500);
				task_cower(0, -1, 0, 0);
				func_1307(&(Local_14.f_9[0]), 1, -1082130432, -1082130432);
			}
			if (func_435(&(Local_14.f_9[0]), 0))
			{
				func_1306();
				task_pause(0, 1000);
				task_cower(0, -1, 0, 0);
				func_1307(&(Local_14.f_9[1]), 1, -1082130432, -1082130432);
			}
			func_470(0);
			func_1774(uLocal_230[1], 0);
			_set_anim_scene_playback_list_bool(&(uLocal_230[1]), cLocal_158, true);
			start_anim_scene(&(uLocal_230[1]));
			func_1287(6);
			break;
		case 6:
			iLocal_222 = 0;
			while (iLocal_222 < 3)
			{
				if (func_435(&(Local_14.f_3[iLocal_222]), 0))
				{
					if (!_0x3ab6c7b0bb0df4b1(&(Local_14.f_3[iLocal_222]), &(uLocal_230[1])) && get_script_task_status(&(Local_14.f_3[iLocal_222]), 242628503, true) != 1)
					{
						func_1306();
						task_smart_flee_coord(0, func_1775(1, 0), 9999f, -1, false, 1077936128);
						func_1307(&(Local_14.f_3[iLocal_222]), 1, -1082130432, -1082130432);
					}
				}
				iLocal_222++;
			}
			iLocal_222 = 0;
			while (iLocal_222 < 15)
			{
				if (func_435(&(Local_14.f_28[iLocal_222]), 0))
				{
					if (!_0x3ab6c7b0bb0df4b1(&(Local_14.f_28[iLocal_222]), &(uLocal_230[1])) && get_script_task_status(&(Local_14.f_28[iLocal_222]), 242628503, true) != 1)
					{
						func_1306();
						task_smart_flee_coord(0, func_1775(1, 0), 9999f, -1, false, 1077936128);
						func_1307(&(Local_14.f_28[iLocal_222]), 1, -1082130432, -1082130432);
					}
				}
				iLocal_222++;
			}
			iLocal_222 = 0;
			while (iLocal_222 < 8)
			{
				if (func_435(&(Local_14.f_87[iLocal_222]), 0))
				{
					if (!_0x3ab6c7b0bb0df4b1(&(Local_14.f_87[iLocal_222]), &(uLocal_230[1])) && get_script_task_status(&(Local_14.f_87[iLocal_222]), 242628503, true) != 1)
					{
						func_1306();
						task_smart_flee_coord(0, func_1775(1, 0), 9999f, -1, false, 1077936128);
						func_1307(&(Local_14.f_87[iLocal_222]), 1, -1082130432, -1082130432);
					}
				}
				iLocal_222++;
			}
			break;
		case 7:
			if (!_is_anim_scene_started(&(uLocal_230[0]), false))
			{
				func_1774(uLocal_230[0], 0);
				start_anim_scene(&(uLocal_230[0]));
			}
			_set_anim_scene_playback_list_bool(&(uLocal_230[0]), cLocal_156, true);
			func_1287(9);
			break;
		case 8:
			if (!_is_anim_scene_started(&(uLocal_230[0]), false))
			{
				func_1774(uLocal_230[0], 0);
				start_anim_scene(&(uLocal_230[0]));
			}
			_set_anim_scene_playback_list_bool(&(uLocal_230[0]), cLocal_156, true);
			func_1287(9);
			break;
		case 9:
			func_1776();
			if (!func_386(iLocal_224, 4194304))
			{
				if (_get_anim_scene_progress(&(uLocal_230[0])) > 0.9f)
				{
					func_412(&iLocal_224, 4194304);
				}
			}
			if (func_33(cParam0) == iLocal_142 && !func_435(&(Local_14.f_24[0]), 0))
			{
				if (!is_entity_dead(&(Local_14.f_3[1])))
				{
					if (has_anim_event_fired(&(Local_14.f_3[1]), -473102286))
					{
						func_1287(10);
					}
					else if (has_anim_event_fired(&(Local_14.f_3[1]), 938156377))
					{
						func_1287(10);
					}
					else if (has_anim_event_fired(&(Local_14.f_3[1]), 1870026007))
					{
						func_1287(10);
					}
					else if (has_anim_event_fired(&(Local_14.f_3[1]), -1796006207))
					{
						func_1287(10);
					}
					else if (has_anim_event_fired(&(Local_14.f_3[1]), -854940993))
					{
						func_1287(10);
					}
				}
			}
			if (func_386(iLocal_225, 16))
			{
				func_1287(11);
			}
			if (_get_anim_scene_progress(&(uLocal_230[0])) > 0.98f)
			{
				func_1287(11);
			}
			break;
		case 10:
			func_1776();
			iVar0 = func_1770("ODR5_IG1_SPEECH", 6);
			if (iVar0 < 90)
			{
				func_1287(13);
				func_412(&iLocal_224, 524288);
			}
			break;
		case 11:
			func_1776();
			_set_anim_scene_playback_list_bool(&(uLocal_230[0]), cLocal_157, true);
			func_1287(12);
			break;
		case 12:
			func_1776();
			if (_is_anim_scene_active(&(uLocal_230[0])))
			{
				set_anim_scene_paused(&(uLocal_230[0]), true);
				func_412(&iLocal_224, 524288);
				func_1287(17);
			}
			break;
		case 13:
			if (_is_anim_scene_started(&(uLocal_230[0]), false))
			{
				set_anim_scene_paused(&(uLocal_230[0]), true);
			}
			func_1287(14);
			break;
		case 14:
			break;
		case 15:
			func_1774(uLocal_230[2], 0);
			_set_anim_scene_playback_list_bool(&(uLocal_230[2]), cLocal_159, true);
			start_anim_scene(&(uLocal_230[2]));
			func_1287(16);
			break;
		case 16:
			if (_is_anim_scene_finished(&(uLocal_230[2]), false))
			{
				func_1287(17);
			}
			break;
		case 17:
			break;
	}
}

int func_1265(char[4] cParam0)
{
	if ((!func_435(iVar663, 0) || !func_435(iVar664, 0)) || !func_435(Global_35, 0))
	{
		return 0;
	}
	if (bLocal_208)
	{
	}
	if (func_386(iLocal_224, 128) && &iLocal_337[0] != 50)
	{
		func_1244(50);
	}
	switch (&iLocal_337[0])
	{
		case 0:
			func_553(vLocal_456[0]);
			func_213(&uLocal_450);
			func_1754(0, 1);
			break;
		case 1:
			func_1754(0, 2);
			break;
		case 2:
			fVar1 = func_1777(iVar663, vLocal_277, 1);
			if (fVar1 < 1f)
			{
				if (fVar1 > fLocal_206)
				{
					func_1754(0, 37);
				}
				fLocal_206 = fVar1;
			}
			if (func_1777(iVar663, func_381(1, 4), 1) < 3f)
			{
				func_1754(0, 7);
			}
			break;
		case 37:
			if (_0x6f1f0b17109309da(&(uLocal_230[3]), func_1234(iVar663)))
			{
				set_anim_scene_entity(&(uLocal_230[3]), func_1234(iVar663), iVar663, 0);
			}
			_set_anim_scene_playback_list_bool(&(uLocal_230[3]), cLocal_160, true);
			start_anim_scene(&(uLocal_230[3]));
			func_1754(0, 38);
			break;
		case 38:
			if ((_0x8d81e7824b7753f7(&(uLocal_230[3]), "s_dutch_enter", 1) && _get_anim_scene_time(&(uLocal_230[3])) > 5.64f) || _0x8d81e7824b7753f7(&(uLocal_230[3]), "s_dutch_loop_base", 1))
			{
				func_1754(0, 7);
			}
			break;
		case 7:
			func_1754(0, 8);
			break;
		case 8:
			break;
	}
	switch (&iLocal_337[1])
	{
		case 0:
			func_1754(1, 1);
			break;
		case 1:
			func_1754(1, 2);
			break;
		case 2:
			fVar1 = func_1777(iVar664, vLocal_289, 1);
			if (fVar1 < 1f)
			{
				if (fVar1 > fLocal_205)
				{
					func_1754(1, 37);
				}
				fLocal_205 = fVar1;
			}
			break;
		case 37:
			if (_0x6f1f0b17109309da(&(uLocal_230[4]), func_1234(iVar664)))
			{
				set_anim_scene_entity(&(uLocal_230[4]), func_1234(iVar664), iVar664, 0);
			}
			_set_anim_scene_playback_list_bool(&(uLocal_230[4]), cLocal_162, true);
			start_anim_scene(&(uLocal_230[4]));
			func_1754(1, 38);
			break;
		case 38:
			if (_0x8d81e7824b7753f7(&(uLocal_230[4]), "s_sadie_loop_base", 1))
			{
				func_1754(1, 7);
			}
			break;
		case 7:
			func_1754(1, 8);
			break;
		case 8:
			break;
	}
	return 0;
}

int func_1266(char[4] cParam0)
{
	if (!func_435(iVar663, 0) || !func_435(Global_35, 0))
	{
		return 0;
	}
	iVar0 = func_33(cParam0);
	switch (iVar0)
	{
		case 0:
			if (!func_1778("ODR5_WALK"))
			{
				sVar1 = "ODR5_LTSGO";
			}
			else
			{
				sVar1 = "ODR5_WALK";
			}
			sVar2 = "ODR5_DALLY";
			sVar3 = "ODR5_CATCHUP";
			break;
		case 1:
			sVar1 = "ODR5_STREET";
			if (func_874(Global_35, iVar664, 1, 1) < 8f)
			{
				sVar2 = "ODR5_ARTHSADIE";
			}
			else
			{
				sVar2 = "ODR5_ARTHDELAY";
			}
			sVar3 = "";
			break;
	}
	switch (iVar407)
	{
		case 0:
			if (func_1779(iVar663, 985146578) && get_ped_desired_move_blend_ratio(iVar663) < 0.1f)
			{
				if (!func_26(&uLocal_560) || func_1767(&uLocal_560, 5f))
				{
					func_553(&uLocal_560);
					func_1780(1);
				}
			}
			break;
		case 1:
			if ((func_1778(sVar1) && func_1293(sVar1)) && !func_1294(sVar1))
			{
				iLocal_1823 = get_current_scripted_conversation_line(sVar1);
				uLocal_1822 = func_1781(sVar1, iVar1820);
				pause_scripted_conversation(sVar1, true, false, false, false);
			}
			else if (get_ped_desired_move_blend_ratio(iVar663) > 0.1f)
			{
				restart_scripted_conversation(sVar1);
				func_1780(0);
				func_213(&uLocal_560);
			}
			else
			{
				if (iVar1819 <= 0)
				{
					func_553(&uLocal_560);
				}
				else
				{
					func_213(&uLocal_560);
				}
				func_1780(2);
			}
			break;
		case 2:
			if ((!func_26(&uLocal_560) || func_214(&uLocal_560) > iVar1819) && func_1255(cParam0, sVar2, 0))
			{
				func_1780(3);
				func_213(&uLocal_560);
			}
			break;
		case 3:
			if (func_1316(&uLocal_560, 20f))
			{
				func_1780(2);
			}
			if (get_ped_desired_move_blend_ratio(iVar663) > 0.1f)
			{
				if (!func_1293(sVar2) && (iVar0 == 1 || func_1255(cParam0, sVar3, 0)))
				{
					func_553(&uLocal_560);
					func_1780(4);
				}
			}
			break;
		case 4:
			if (iVar0 == 1 || !func_1293(sVar3))
			{
				if (func_1778(sVar1))
				{
					restart_scripted_conversation(sVar1);
				}
				func_1780(0);
				func_213(&uLocal_560);
			}
			break;
	}
	return 1;
}

void func_1267(char[4] cParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bLocal_212)
	{
	}
	if (func_386(iLocal_224, 256) && iVar401 != 10)
	{
		func_1782(&uLocal_407, 10);
	}
	switch (iVar401)
	{
		case 0:
			func_553(&uLocal_441);
			func_1782(&uLocal_407, 1);
			break;
		case 1:
			if (does_entity_exist(&(Local_14.f_20[0])) && (func_1783(&(Local_14.f_20[0]), 1) || has_entity_been_damaged_by_entity(&(Local_14.f_20[0]), Global_35, 1, 1)))
			{
				set_entity_collision(&(Local_14.f_20[0]), false, false);
				sLocal_190 = "ODR5_FAIL_ESC";
				func_1782(&uLocal_407, 9);
			}
			else if ((func_1784(Global_35) || (_does_volume_exist(&(iLocal_673[7])) && _is_explosion_in_volume(-1, &(iLocal_673[7])))) || (bParam1 && ((_get_lassoed_entity(Global_35) != 0 || _0x336b3d200ab007cb(Global_35, get_entity_coords(Global_35, true, false), 10f, 512) > 0) || _0x336b3d200ab007cb(iVar660, get_entity_coords(iVar660, true, false), 10f, 512) > 0)))
			{
				sLocal_190 = "ODR5_FAIL_POL";
				if (bParam2)
				{
					func_1782(&uLocal_407, 2);
				}
				else
				{
					func_1782(&uLocal_407, 7);
				}
			}
			else if (bParam1)
			{
				if (_0x72ad59f7b7fb6e24(get_player_index(), 500) && _0x1a6e84f13c952094(get_player_index(), 500, &uVar3))
				{
					if (&uVar3[0] != iVar660 && &uVar3[0] != iVar661)
					{
						sLocal_190 = "ODR5_FAIL_AMB";
						if (bParam2)
						{
							func_1782(&uLocal_407, 2);
						}
						else
						{
							func_1782(&uLocal_407, 7);
						}
					}
				}
			}
			else if (func_33(cParam0) == 3 && Global_36.f_2 < 59f)
			{
				sLocal_190 = "ODR5_FAIL_SPLC";
				func_1782(&uLocal_407, 9);
			}
			bVar7 = false;
			if (bParam3 && (get_frame_count() % 15) == 0)
			{
				iVar8 = create_itemset(true);
				iVar10 = _0x59b57c4b06531e1e(Global_36, 25f, iVar8, 1);
				iVar11 = 0;
				while (iVar11 < iVar10)
				{
					iVar9 = get_indexed_item_in_itemset(iVar11, iVar8);
					iVar12 = iVar9;
					if (!does_entity_exist(iVar12) || !is_entity_a_ped(iVar12))
					{
					}
					else if (!is_ped_human(iVar12) && !func_1785(iVar12))
					{
					}
					else if (((iVar12 == &Local_14.f_112[0] || iVar12 == &Local_14.f_112[1]) || iVar12 == &Local_14.f_46[0]) || iVar12 == &Local_14.f_50[0])
					{
					}
					else if (is_ped_fleeing(iVar12) && has_entity_clear_los_to_entity(iVar12, Global_35, 17))
					{
						bVar7 = true;
					}
					else
					{
						iVar11++;
					}
				}
				destroy_itemset(iVar8);
			}
			if (bVar7)
			{
				sLocal_190 = "ODR5_FAIL_DET";
				func_1782(&uLocal_407, 9);
			}
			break;
		case 2:
			func_1314();
			func_135(cParam0, 51);
			func_412(&iLocal_224, 128);
			func_412(&iLocal_225, 4);
			func_213(&uLocal_441);
			func_1306();
			task_turn_ped_to_face_entity(0, Global_35, 0, -1082130432, -1082130432, -1082130432);
			func_1307(iVar660, 1, -1082130432, -1082130432);
			func_1782(&uLocal_407, 3);
			break;
		case 3:
			if (func_1269(&uLocal_441) > 0.75f)
			{
				func_1782(&uLocal_407, 4);
			}
			break;
		case 4:
			func_213(&uLocal_447);
			func_1256(cParam0, "ODR5_ASHOOT", 0, 0, 0);
			func_1782(&uLocal_407, 5);
			break;
		case 5:
			if (func_1316(&uLocal_447, 1f))
			{
				vVar0 = { get_entity_coords(Global_35, true, false) };
				_play_sound_from_position(sLocal_182, vVar0, sLocal_175, false, 0, true, 0);
			}
			if (!func_1293("ODR5_ASHOOT"))
			{
				func_1782(&uLocal_407, 7);
			}
			break;
		case 7:
			func_213(&uLocal_441);
			func_1782(&uLocal_407, 8);
			break;
		case 8:
			if (func_1316(&uLocal_441, 1f))
			{
				func_1782(&uLocal_407, 9);
			}
			break;
		case 9:
			func_1786(cParam0, sLocal_190, "", 1, 0);
			func_1782(&uLocal_407, 10);
			break;
	}
}

void func_1268(char[4] cParam0)
{
	if (bLocal_213)
	{
	}
	uLocal_670 = func_1787();
	switch (iVar405)
	{
		case 0:
			func_553(&uLocal_444);
			func_1782(&uLocal_408, 1);
			break;
		case 1:
			if (is_entity_in_volume(Global_35, &(iLocal_673[1]), true, 0))
			{
				if (!func_386(iLocal_224, 512))
				{
					func_1256(cParam0, "ODR5_OBJ_LVPRK", 4, 0, 0);
					func_1256(cParam0, "ODR5_HELP_LVPRK", 9, 0, 0);
					func_412(&iLocal_224, 512);
				}
			}
			else if (!func_206())
			{
				if (func_386(iLocal_224, 512))
				{
					func_113(1);
					_0xdd1232b332cbb9e7(3, 1, 0);
					func_1305(&iLocal_224, 512);
				}
			}
			if (is_entity_in_volume(Global_35, &(iLocal_673[2]), true, 0))
			{
				func_1782(&uLocal_408, 2);
			}
			break;
		case 2:
			func_1314();
			func_135(cParam0, 51);
			func_412(&iLocal_224, 128);
			func_213(&uLocal_444);
			func_145(cParam0, iVar667, "ODR5_DSTRFLW", 0);
			func_145(cParam0, &(Local_14.f_87[1]), "ODR5_CROWD_F", 0);
			func_1492(iVar667, 379542007, 10, 0, 0, 1056964608, 1065353216, 0);
			set_current_ped_weapon(iVar667, 379542007, false, 0, false, false);
			func_1306();
			task_turn_ped_to_face_entity(0, Global_35, 0, -1082130432, -1082130432, -1082130432);
			task_swap_weapon(0, 1, 0, 0, 0);
			task_aim_at_entity(0, Global_35, -1, 0, 0);
			func_1307(iVar667, 1, -1082130432, -1082130432);
			func_1782(&uLocal_408, 3);
			break;
		case 3:
			if (func_1269(&uLocal_444) > 0.5f)
			{
				func_1782(&uLocal_408, 4);
			}
			break;
		case 4:
			func_1256(cParam0, "ODR5_GOONSEE", 1, 0, 0);
			func_1782(&uLocal_408, 5);
			break;
		case 5:
			if (!func_1293("ODR5_GOONSEE"))
			{
				func_412(&iLocal_225, 4);
				func_1782(&uLocal_408, 7);
			}
			break;
		case 7:
			func_213(&uLocal_444);
			func_1782(&uLocal_408, 8);
			break;
		case 8:
			if (func_1316(&uLocal_444, 3f))
			{
				func_1782(&uLocal_408, 9);
			}
			break;
		case 9:
			func_1786(cParam0, "ODR5_FAIL_DET", "", 1, 0);
			func_1782(&uLocal_408, 10);
			break;
	}
}

float func_1269(var uParam0)
{
	if (!func_26(uParam0))
	{
		return 0f;
	}
	if (func_498(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_550() - uParam0->f_1);
}

void func_1270(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
		func_1277(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			set_ped_reset_flag(iParam0, 188, true);
		}
	}
}

void func_1271(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
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
		func_1277(bParam4, bParam5, bParam6, bParam7, bParam3, bParam9, bParam10);
		if (bParam2)
		{
			set_ped_reset_flag(iParam0, 188, true);
		}
	}
}

void func_1272(char* sParam0, int iParam1)
{
	if (_0xdd0b7c5ae58f721d(sParam0) && !_0x927b810e43e99932(sParam0))
	{
		_0xb8b207c34285e978(sParam0);
		iVar0[0] = iParam1;
		_0xfeb8646818294c75(sParam0, &iVar0);
	}
}

void func_1273(char[4] cParam0)
{
	func_151(cParam0, Global_35, 0, 0, 0, 0, 0);
	func_151(cParam0, iVar663, 0, 0, 0, 0, 0);
	func_151(cParam0, iVar664, 0, 0, 0, 0, 0);
	func_151(cParam0, &(Local_14.f_9[0]), "g_m_m_uniduster_04^3", 0, 0, 0, 0);
	func_151(cParam0, &(Local_14.f_9[1]), "g_m_m_uniduster_04^1", 0, 0, 0, 0);
	func_151(cParam0, &(Local_14.f_46[0]), "G_M_M_UNIDUSTER_04^2", 0, 0, 0, 0);
}

void func_1274(int iParam0, bool bParam1)
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

void func_1275(int iParam0, bool bParam1)
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

void func_1276(char* sParam0)
{
	if (_0x927b810e43e99932(sParam0))
	{
		_0x0a5a4f1979abb40e(sParam0);
	}
	_0x798be43c9393632b(sParam0);
}

void func_1277(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (bParam5)
	{
		disable_control_action(0, -640622144, false);
	}
	disable_control_action(0, -562475458, false);
	disable_control_action(0, -128997553, false);
	disable_control_action(0, 130948705, false);
	if (is_ped_on_mount(Global_35))
	{
		disable_control_action(0, 1632043089, false);
		disable_control_action(0, 1623727326, false);
		disable_control_action(0, -922478227, false);
	}
	if (bParam0)
	{
		disable_control_action(0, -1404316431, false);
		disable_control_action(0, 1287709438, false);
		disable_control_action(0, -1304887797, false);
	}
	if (bParam3)
	{
		disable_control_action(0, -1292666904, false);
		disable_control_action(0, 578288361, false);
		if (is_ped_on_mount(Global_35))
		{
			disable_control_action(0, 440314811, false);
			disable_control_action(0, 2028806450, false);
			disable_control_action(0, 371916472, false);
		}
	}
	if (bParam4)
	{
		disable_control_action(0, -620139643, false);
	}
	func_1512(0);
	if (bParam1)
	{
		disable_control_action(0, -822242784, false);
	}
	if (!is_ped_injured(Global_35))
	{
		if (bParam2)
		{
			set_ped_reset_flag(Global_35, 129, true);
			set_ped_reset_flag(Global_35, 189, true);
		}
		if (bParam6)
		{
			if (!get_ped_config_flag(Global_35, 43, true))
			{
				set_ped_config_flag(Global_35, 43, true);
			}
		}
	}
}

void func_1278()
{
	fVar0 = func_1362(iVar664, Global_35, 1);
	switch (iVar411)
	{
		case 0:
			_0xdf7b5144e25cd3fe(&(uLocal_230[3]), "pl_callover_front01");
			_0xdf7b5144e25cd3fe(&(uLocal_230[3]), "pl_callover_front02");
			_0xdf7b5144e25cd3fe(&(uLocal_230[3]), "pl_callover_right01");
			_0xdf7b5144e25cd3fe(&(uLocal_230[3]), "pl_callover_right02");
			func_1788(1);
			func_213(&uLocal_569);
			break;
		case 1:
			if (((_0x23e33cb9f4a3f547(&(uLocal_230[3]), "pl_callover_front01") && _0x23e33cb9f4a3f547(&(uLocal_230[3]), "pl_callover_front02")) && _0x23e33cb9f4a3f547(&(uLocal_230[3]), "pl_callover_right01")) && _0x23e33cb9f4a3f547(&(uLocal_230[3]), "pl_callover_right02"))
			{
				func_1788(2);
			}
			break;
		case 2:
			if (func_1269(&uLocal_569) > 30f)
			{
				if (fVar0 < 135f && fVar0 > 0f)
				{
					if (func_1338())
					{
						_set_anim_scene_playback_list_bool(&(uLocal_230[3]), "pl_callover_right01", true);
					}
					else
					{
						_set_anim_scene_playback_list_bool(&(uLocal_230[3]), "pl_callover_right02", true);
					}
				}
				else if (fVar0 > 135f && fVar0 < 240f)
				{
					if (func_1338())
					{
						_set_anim_scene_playback_list_bool(&(uLocal_230[3]), "pl_callover_front01", true);
					}
					else
					{
						_set_anim_scene_playback_list_bool(&(uLocal_230[3]), "pl_callover_front02", true);
					}
				}
				func_1788(3);
			}
			break;
		case 3:
			if (_0x8d81e7824b7753f7(&(uLocal_230[3]), "s_dutch_loop_base", 1))
			{
				func_1788(0);
			}
			break;
	}
}

bool func_1279(char[4] cParam0, bool bParam1)
{
	func_879(cParam0);
	if (((bParam1 && func_1789(&(cParam0->f_10792)) != 11) && !func_1458(&(cParam0->f_10792), 131072)) && !func_1458(&(cParam0->f_10792), 32768))
	{
		return false;
	}
	return func_1790(&(cParam0->f_10792));
}

void func_1280(char[4] cParam0, int iParam1)
{
	Var0 = { func_1791(&(cParam0->f_7375)) };
	if ((((func_1458(&(cParam0->f_10792), 32768) && _does_anim_scene_exist(cParam0->f_7375.f_804)) && _is_anim_scene_loaded(cParam0->f_7375.f_804, true, false)) && _0xa9016536015de29d(cParam0->f_7375.f_804, &Var0)) && _0x23e33cb9f4a3f547(cParam0->f_7375.f_804, &Var0))
	{
		func_1792(cParam0, &Var0);
		func_1793(cParam0);
	}
	else
	{
		if (iParam1 == 1 && func_120(cParam0, 16384))
		{
			func_1794(&(cParam0->f_10792), Global_43805);
			func_750(&(cParam0->f_10792), 8);
		}
		func_234(&(cParam0->f_10792), iParam1);
		func_879(cParam0);
		func_99(cParam0, 2097152);
	}
}

void func_1281(char[4] cParam0, int iParam1, bool bParam2)
{
	if (is_entity_dead(iParam1))
	{
		return;
	}
	bVar0 = (is_entity_a_ped(iParam1) && func_1761(get_ped_index_from_entity_index(iParam1)));
	if (bVar0)
	{
		iVar1 = func_1762(get_ped_index_from_entity_index(iParam1));
	}
	if (is_entity_a_ped(iParam1))
	{
		iVar2 = get_ped_index_from_entity_index(iParam1);
		if (bVar0)
		{
			func_519(iVar1);
			if (does_blip_exist(get_blip_from_entity(iVar2)))
			{
				_set_blip_flash_style(get_blip_from_entity(iVar2), -546708623);
				_set_blip_flash_style(get_blip_from_entity(iVar2), 231194138);
			}
		}
		else if (func_1760(cParam0, iParam1) && does_blip_exist(get_blip_from_entity(iParam1)))
		{
			_set_blip_flash_style(get_blip_from_entity(iParam1), -546708623);
			_set_blip_flash_style(get_blip_from_entity(iParam1), 231194138);
		}
		else
		{
			func_1795(iParam1);
		}
	}
	if (func_1760(cParam0, iParam1))
	{
		func_1796(cParam0, iParam1, 1024);
		if (bParam2)
		{
			func_1493(cParam0, iParam1, 128);
		}
		else
		{
			func_1796(cParam0, iParam1, 128);
		}
		if (func_1001(cParam0, iParam1, &iVar3))
		{
			func_1517(cParam0->f_5423[iVar3]);
		}
	}
	if (bVar0)
	{
		set_this_script_can_remove_blips_created_by_any_script(true);
		func_1764(iVar1);
	}
}

void func_1282()
{
	func_1314();
	func_1244(0);
	func_1797(0);
	func_1327(0);
	func_1798(0);
	func_1782(&uLocal_407, 0);
	func_1782(&uLocal_408, 0);
	func_1799(&uLocal_359, 0);
	stop_gameplay_hint(false);
	func_553(&uLocal_438);
	func_553(&uLocal_435);
	func_553(&uLocal_429);
	func_553(&uLocal_450);
	iLocal_412 = 1;
	iLocal_410 = 0;
}

void func_1283(char[4] cParam0, int iParam1)
{
	cParam0->f_1[func_132(iParam1)]->f_12 = 1;
}

void func_1284(char[4] cParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = func_132(iParam2);
	if (!func_1518(iVar0))
	{
		return;
	}
	iVar1 = func_1519(iParam3);
	if (!func_1520(iVar1))
	{
		return;
	}
	(*cParam0->f_1[iVar0])[iVar1] = *iParam1;
	set_bit(&(cParam0->f_1[iVar0]->f_17), iVar1);
}

void func_1285(char[4] cParam0, int iParam1, char[16] cParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_13 = { cParam2 };
}

void func_1286(char[4] cParam0, int iParam1, int iParam2)
{
	cParam0->f_1[func_132(iParam1)]->f_21 = iParam2;
}

void func_1287(int iParam0)
{
	iLocal_336 = iParam0;
}

void func_1288(char[4] cParam0, char[4] cParam1)
{
	func_1800(&(cParam0->f_7375), cParam1);
	func_374(cParam0, 33554432);
}

void func_1289(bool bParam0)
{
	func_1801(&(Local_14.f_87[1]), bParam0);
	func_1801(&(Local_14.f_87[2]), bParam0);
	func_1801(&(Local_14.f_28[9]), bParam0);
	func_1801(&(Local_14.f_28[12]), bParam0);
	func_1801(&(Local_14.f_28[10]), bParam0);
	func_1801(&(Local_14.f_28[14]), bParam0);
	func_1801(&(Local_14.f_59[0]), bParam0);
	if (bParam0)
	{
	}
}

void func_1290(char[4] cParam0)
{
	func_1311(cParam0, &(Local_14.f_9[0]));
	func_1311(cParam0, &(Local_14.f_9[1]));
	func_1311(cParam0, &(Local_14.f_46[0]));
}

void func_1291(bool bParam0)
{
	if (!is_entity_dead(Global_35))
	{
		set_ped_config_flag(Global_35, 20, bParam0);
	}
	if (!is_entity_dead(iVar663))
	{
		set_ped_config_flag(iVar663, 20, bParam0);
	}
	if (!is_entity_dead(iVar664))
	{
		set_ped_config_flag(iVar664, 20, bParam0);
	}
}

void func_1292(char[4] cParam0)
{
	func_1802(&(cParam0->f_7375));
}

bool func_1293(char* sParam0)
{
	return func_1803(sParam0);
}

bool func_1294(char* sParam0)
{
	return func_1804(sParam0);
}

bool func_1295(char[4] cParam0, int iParam1, char* sParam2, char* sParam3, int iParam4, int iParam5, float fParam6, float fParam7, int iParam8, int iParam9)
{
	iVar1 = func_552(iParam1);
	if (!does_entity_exist(iVar1))
	{
		return false;
	}
	if (is_entity_dead(iVar1))
	{
		return false;
	}
	if (!get_is_waypoint_recording_loaded(sParam2))
	{
		return false;
	}
	StringCopy(&cVar2, func_1805(iParam1), 64);
	Var10 = { func_1772(iParam1) };
	if (func_1806(iVar1, player_ped_id(), sParam2, iParam8))
	{
		StringConCat(&cVar2, "_CATCH_UP", 64);
	}
	else
	{
		StringConCat(&cVar2, "_RETURN", 64);
	}
	bVar0 = func_1807(cParam0, get_entity_coords(iVar1, true, false), &cVar2, &Var10, 1, sParam3, iParam4, fParam6, fParam7);
	if (func_22(cParam0) != 1 && func_8(cParam0, 64))
	{
		func_1808(cParam0, iVar1, iParam9, bVar0, iParam5);
		func_880(cParam0, 64);
	}
	return bVar0;
}

void func_1296()
{
	if (!func_1293("ODR5_STREET"))
	{
		return;
	}
	iVar0 = get_current_scripted_conversation_line("ODR5_STREET");
	switch (iVar410)
	{
		case 0:
			if (iVar0 == 0)
			{
				task_look_at_entity(uVar664, Global_35, 4000, 1024, 51, 1);
				iLocal_412 = 1;
			}
			break;
		case 1:
			if (iVar0 == 1)
			{
				task_look_at_entity(Global_35, uVar664, 3000, 1024, 51, 1);
				iLocal_412 = 3;
			}
			break;
		case 3:
			if (iVar0 == 2)
			{
				task_look_at_entity(uVar664, Global_35, 2500, 1024, 51, 1);
				iLocal_412 = 5;
			}
			break;
		case 5:
			if (iVar0 == 4)
			{
				task_look_at_entity(uVar664, Global_35, 2000, 1024, 51, 1);
				iLocal_412 = 7;
			}
			break;
	}
}

int func_1297(char[4] cParam0)
{
	if ((!func_435(iVar663, 0) || !func_435(iVar664, 0)) || !func_435(Global_35, 0))
	{
		return 0;
	}
	if (bLocal_208)
	{
	}
	if (func_386(iLocal_224, 128) && &iLocal_337[0] != 50)
	{
		func_1244(50);
	}
	if (func_386(iLocal_224, 256))
	{
		if (&iLocal_337[0] != 41 && &iLocal_337[0] != 42)
		{
			func_1754(0, 41);
		}
	}
	switch (&iLocal_337[0])
	{
		case 0:
			func_213(vLocal_456[0]);
			func_1754(0, 10);
			break;
		case 10:
			func_1754(0, 11);
			break;
		case 11:
			func_1270(iVar663, Global_35, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			func_1271(Global_35, iVar663, 1, 1, 1, 0, 1, 1, 0, 1, 1);
			func_1272(&cLocal_261, iVar663);
			if (func_1777(iVar663, func_381(3, 1), 1) < 10f)
			{
				func_1754(0, 15);
				func_135(cParam0, 18);
			}
			break;
		case 15:
			func_1306();
			task_follow_nav_mesh_to_coord(0, func_381(3, 1), 1.5f, 20000, 2f, 4194305, 40000f);
			task_seek_cover_to_cover_point(0, &(iLocal_586[1]), func_381(3, 3), -1, 0, 0, 0);
			task_stay_in_cover(0);
			func_1307(iVar663, 0, -1082130432, -1082130432);
			func_1754(0, 16);
			break;
		case 16:
			if (is_ped_in_cover(iVar663, 0, 0))
			{
				func_1754(0, 37);
			}
			break;
		case 37:
			func_412(&iLocal_224, 4096);
			func_1809(uLocal_230[6]);
			start_anim_scene(&(uLocal_230[6]));
			func_1754(0, 38);
			break;
		case 38:
			break;
	}
	switch (&iLocal_337[1])
	{
		case 0:
			func_1754(1, 1);
			break;
		case 1:
			func_1754(1, 2);
			break;
		case 2:
			if (get_script_task_status(iVar664, 242628503, true) == 8)
			{
				func_1754(1, 7);
			}
			break;
		case 7:
			func_1754(1, 8);
			break;
		case 8:
			break;
	}
	return 0;
}

void func_1298(char[4] cParam0)
{
	if (!func_435(&(Local_14.f_46[0]), 0))
	{
		if (iVar337 != 56 && iVar337 != 4)
		{
			func_1810(&uLocal_340, 56);
		}
	}
	_get_anim_scene_entity_matrix(&(uLocal_230[9]), "G_M_M_UNIDUSTER_04", &vVar2, true, cLocal_167, 2);
	if (bLocal_210)
	{
	}
	if (!func_386(iLocal_224, 8388608))
	{
		if (func_1811(&(Local_14.f_46[0]), &(iLocal_673[3]), 1, 0))
		{
			func_412(&iLocal_224, 8388608);
		}
	}
	switch (iVar337)
	{
		case 0:
			func_213(&uLocal_463);
			func_213(&uLocal_450);
			func_1810(&uLocal_340, 1);
			break;
		case 1:
			func_1810(&uLocal_340, 2);
			break;
		case 2:
			if (is_waypoint_playback_going_on_for_ped(&(Local_14.f_46[0]), 0))
			{
				if (func_874(Global_35, &(Local_14.f_46[0]), 1, 1) < 15f)
				{
					_0xf60165e1d2c5370b(Global_35, &uVar0, &fVar1);
					if (fVar1 < (1f + 0.25f) && fVar1 > 0.55f)
					{
						waypoint_playback_override_speed(&(Local_14.f_46[0]), (fVar1 + 0.1f), 0, -1082130432, 0);
					}
					else
					{
						waypoint_playback_override_speed(&(Local_14.f_46[0]), 1f, 0, -1082130432, 0);
					}
				}
				else
				{
					waypoint_playback_use_default_speed(&(Local_14.f_46[0]));
				}
			}
			if (func_1777(&(Local_14.f_46[0]), vVar2, 1) < 0.5f)
			{
				func_1810(&uLocal_340, 26);
			}
			break;
		case 26:
			func_412(&iLocal_224, 1048576);
			func_1810(&uLocal_340, 27);
			break;
		case 27:
			break;
	}
	switch (iVar338)
	{
		case 0:
			if (func_1477())
			{
				func_1810(&uLocal_341, 24);
			}
			break;
		case 24:
			func_1812();
			func_1809(uLocal_230[8]);
			_set_anim_scene_playback_list_bool(&(uLocal_230[9]), sLocal_166, true);
			start_anim_scene(&(uLocal_230[9]));
			func_1810(&uLocal_341, 25);
			break;
		case 25:
			if (func_386(iLocal_224, 1048576))
			{
				func_1810(&uLocal_341, 26);
			}
			break;
		case 26:
			_set_anim_scene_playback_list_bool(&(uLocal_230[9]), cLocal_167, true);
			func_1810(&uLocal_341, 27);
			break;
		case 27:
			if (_0x8d81e7824b7753f7(&(uLocal_230[9]), "s_idle_bothdusters", 1))
			{
				abort_anim_scene(&(uLocal_230[9]), true);
				start_anim_scene(&(uLocal_230[8]));
				func_1810(&uLocal_341, 28);
			}
			break;
		case 28:
			func_412(&iLocal_224, 1024);
			func_1810(&uLocal_341, 29);
			break;
		case 29:
			break;
	}
}

void func_1299(bool bParam0)
{
	if (!func_435(Global_35, 0))
	{
		return;
	}
	if (bParam0)
	{
	}
	switch (iVar300)
	{
		case 0:
			if (func_386(iLocal_224, 8388608) && is_entity_in_volume(Global_35, &(iLocal_673[3]), true, 0))
			{
				_disable_first_person_cam_this_frame_2();
				_0x437c08db4febe2bd(Global_35, "stealth", 1f, -1);
				vVar0 = { func_381(2, 10) };
				fVar3 = func_450(2, 10);
				iLocal_617 = add_cover_point(vVar0, fVar3, 1, 2, 5, false);
				func_1813(1);
			}
			break;
		case 1:
			_disable_first_person_cam_this_frame_2();
			func_1813(2);
			break;
		case 2:
			_disable_first_person_cam_this_frame_2();
			func_1813(3);
			break;
		case 3:
			set_player_control(player_id(), false, 256, false);
			set_ped_max_move_blend_ratio(Global_35, 1f);
			_disable_first_person_cam_this_frame_2();
			Var4.f_10 = -1082130432;
			Var4 = Global_35;
			Var4.f_14 = { 2697.246f, -1187.471f, 51.0918f };
			Var4.f_3 = uVar614;
			Var4.f_4 = 1;
			Var4.f_7 = 1;
			Var4.f_8 = 0;
			Var4.f_9 = 0f;
			Var4.f_5 = -1;
			Var4.f_10 = 1f;
			task_enter_cover(&Var4);
			func_412(&iLocal_224, 64);
			func_1813(4);
			break;
		case 4:
			_disable_first_person_cam_this_frame_2();
			set_ped_max_move_blend_ratio(Global_35, 1f);
			break;
	}
}

int func_1300(char[4] cParam0, int iParam1, int iParam2, int iParam3, int iParam4, char* sParam5)
{
	if (!func_386(iLocal_227, iParam3))
	{
		if (!is_entity_dead(iParam1))
		{
			if (is_entity_in_volume(iParam1, iParam2, true, 0))
			{
				func_135(cParam0, iParam4);
				func_412(&iLocal_227, iParam3);
				return 1;
			}
		}
	}
	return 0;
}

bool func_1301()
{
	if (is_string_null_or_empty(&Local_304))
	{
		StringCopy(&Local_304, "odr5_cover_orbit_cam", 64);
		StringCopy(&(Local_304.f_8), "ODR5_COVER_ORBIT_REQUEST", 64);
		_0x6a4d224fc7643941(&Local_304);
	}
	if (!_0xdd0b7c5ae58f721d(&Local_304))
	{
		return false;
	}
	else
	{
		return true;
	}
	return false;
}

void func_1302()
{
	_0xb8b207c34285e978(&Local_304);
	Local_304.f_16 = Global_35;
}

void func_1303()
{
	if (_0x927b810e43e99932(&Local_304))
	{
		_0xac77757c05de9e5a(&Local_304);
		_0x8370d34bd2e60b73();
	}
}

void func_1304()
{
	if ((!is_string_null_or_empty(&Local_304) && !is_string_null_or_empty(&(Local_304.f_8))) && _0x927b810e43e99932(&Local_304))
	{
		_0x0a5a4f1979abb40e(&Local_304);
		StringCopy(&(Local_304.f_8), "", 64);
	}
	if (!is_string_null_or_empty(&Local_304) && _0xdd0b7c5ae58f721d(&Local_304))
	{
		_0x798be43c9393632b(&Local_304);
		StringCopy(&Local_304, "", 64);
	}
}

void func_1305(int iParam0, int iParam1)
{
	func_1814(iParam0, iParam1);
}

void func_1306()
{
	open_sequence_task(&uLocal_618);
}

void func_1307(int iParam0, bool bParam1, float fParam2, float fParam3)
{
	if (func_435(iParam0, 0))
	{
		if (bParam1)
		{
			clear_ped_tasks(iParam0, 1, 0);
		}
		close_sequence_task(iVar612);
		if (fParam2 == -1f && fParam3 == -1f)
		{
			task_perform_sequence(iParam0, iVar612);
		}
		else
		{
			_task_perform_sequence_2(iParam0, iVar612, fParam2, fParam3);
		}
		clear_sequence_task(&uLocal_618);
	}
	else
	{
		close_sequence_task(iVar612);
		clear_sequence_task(&uLocal_618);
	}
}

void func_1308()
{
	set_anim_scene_entity(&(uLocal_230[5]), "IG_Dutch", iVar664, 0);
	_set_anim_scene_playback_list_bool(&(uLocal_230[5]), sLocal_161, true);
	task_enter_anim_scene(iVar664, &(uLocal_230[5]), "IG_Dutch", sLocal_161, 1069379748, 1, 9, 20000, -1082130432);
}

void func_1309(int* iParam0, bool bParam1)
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

void func_1310(char[4] cParam0)
{
	if (func_33(cParam0) == iLocal_139)
	{
	}
	else if (func_33(cParam0) == iLocal_140)
	{
		func_1240(Global_35, func_216(2, 0), 2, 1073741824);
		func_1815(iVar663, func_216(2, 1), 1, 1);
		func_1815(iVar664, func_216(2, 3), 1, 1);
	}
	else if (func_33(cParam0) == iLocal_141)
	{
		func_1240(Global_35, func_216(3, 8), 2, 1073741824);
		func_1815(iVar663, func_216(3, 7), 1, 0);
		func_1815(iVar664, func_216(1, 5), 1, 1);
	}
	else if (func_33(cParam0) == iLocal_142)
	{
		func_1240(Global_35, func_216(5, 2), 2, 1073741824);
		func_1815(iVar663, func_216(5, 1), 1, 1);
		func_1815(iVar664, func_216(1, 5), 1, 1);
	}
	else if (func_33(cParam0) == iLocal_143)
	{
		func_1815(iVar663, func_216(6, 6), 1, 1);
		func_1815(iVar664, func_216(6, 5), 1, 1);
	}
	else if (func_33(cParam0) == iLocal_145)
	{
		func_1240(Global_35, func_216(4, 0), 2, 1073741824);
		func_1815(iVar663, func_216(6, 6), 1, 1);
		func_1815(iVar664, func_216(6, 5), 1, 1);
	}
}

void func_1311(char[4] cParam0, int iParam1)
{
	func_1401(&(cParam0->f_7375), iParam1);
	func_1816(&(cParam0->f_10792), iParam1);
}

void func_1312(bool bParam0)
{
	if (!is_entity_dead(iVar664))
	{
		_task_start_scenario_in_place(iVar664, -1124614608, 0, true, 0, -1f, false);
	}
	if (bParam0 && !is_entity_dead(iVar663))
	{
		_task_start_scenario_in_place(iVar663, -1124614608, 0, true, 0, -1f, false);
	}
}

int func_1313(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = _0xa6ef0c54a3443e70(iParam0, bParam1);
	if (bParam2)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

void func_1314()
{
	func_113(1);
	func_47(0, 0);
}

bool func_1315(char[4] cParam0, bool bParam1, bool bParam2, char* sParam3, char* sParam4, int iParam5, bool bParam6, bool bParam7, int iParam8)
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
		func_1786(cParam0, sParam4, "", 1, 0);
		return true;
	}
	else if (!_0xf256a75210c5c0eb(bParam1, Global_36))
	{
		if (!func_1817(cParam0, 16))
		{
			func_1818(cParam0, sParam3, bParam6);
			if (does_blip_exist(cParam0->f_5303))
			{
				remove_blip(&(cParam0->f_5303));
			}
			cParam0->f_5303 = _0xa6ef0c54a3443e70(iParam8, bParam1);
			if (is_itemset_valid(iParam5))
			{
				func_1819(&iParam5, 0);
			}
			func_1820(cParam0, 16);
			func_1821(cParam0, 0, 0);
		}
		return true;
	}
	else if (func_1817(cParam0, 16))
	{
		if (does_blip_exist(cParam0->f_5303))
		{
			remove_blip(&(cParam0->f_5303));
			if (is_itemset_valid(iParam5))
			{
				func_1819(&iParam5, 1);
			}
			func_1821(cParam0, 1, 0);
		}
		func_1822(cParam0, 16);
		if (!func_1823(cParam0))
		{
			if (bParam7)
			{
				_0xdd1232b332cbb9e7(3, 1, 0);
				func_1824(cParam0);
			}
		}
		else
		{
			func_1825(cParam0);
		}
	}
	return false;
}

bool func_1316(var uParam0, float fParam1)
{
	if (func_1767(uParam0, fParam1))
	{
		func_553(uParam0);
		return true;
	}
	return false;
}

int func_1317(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = _blip_add_for_entity(iParam0, iParam1);
	if (bParam2)
	{
		_blip_set_modifier(iVar0, 231194138);
	}
	return iVar0;
}

void func_1318(char[4] cParam0)
{
	fVar3 = 53.7f;
	fVar4 = 56.5f;
	fVar5 = 60.2f;
	vVar0 = { get_entity_coords(Global_35, true, false) };
	if (bLocal_214)
	{
	}
	switch (iVar356)
	{
		case 0:
			iLocal_251 = 0;
			func_213(&uLocal_539);
			func_1799(&uLocal_359, 1);
			break;
		case 1:
			func_1799(&uLocal_359, 2);
			break;
		case 2:
			if (iLocal_251 == 0)
			{
				if ((func_1269(&uLocal_539) > 20f && !func_1811(Global_35, &(iLocal_673[13]), 1, 0)) && vVar0.z < fVar5)
				{
					func_1256(cParam0, "ODR5_OBJ_GOTOROOF", 4, 0, 0);
					func_213(&uLocal_539);
					iLocal_251++;
				}
			}
			else if (iLocal_251 == 1 || iLocal_251 == 2)
			{
				if ((func_1269(&uLocal_539) > 30f && !func_1811(Global_35, &(iLocal_673[13]), 1, 0)) && vVar0.z < fVar5)
				{
					func_1256(cParam0, "ODR5_OBJ_GOTOROOF", 4, 0, 0);
					func_1256(cParam0, "ODR5_HELP_SNPR1", 8, 0, 0);
					func_213(&uLocal_539);
					iLocal_251++;
				}
			}
			else if ((func_1316(&uLocal_539, 30f) && !func_1811(Global_35, &(iLocal_673[13]), 1, 0)) && vVar0.z < fVar5)
			{
				func_1256(cParam0, "ODR5_OBJ_GOTOROOF", 4, 0, 0);
				func_1256(cParam0, "ODR5_HELP_SNPR3", 9, 0, 0);
				func_553(&uLocal_539);
			}
			if ((func_1811(Global_35, &(iLocal_673[11]), 1, 0) && vVar0.z > fVar3) || (func_1811(Global_35, &(iLocal_673[12]), 1, 0) && vVar0.z > fVar4))
			{
				func_135(cParam0, 1);
				func_1799(&uLocal_359, 3);
			}
			if (func_1811(Global_35, &(iLocal_673[8]), 1, 0) && vVar0.z > fVar5)
			{
				func_135(cParam0, 1);
				func_1799(&uLocal_359, 6);
			}
			break;
		case 3:
			_set_blip_flash_style(iVar636, 0);
			func_472(&iLocal_639);
			if (func_1811(Global_35, &(iLocal_673[11]), 1, 0))
			{
				iLocal_639 = func_1313(408396114, &(iLocal_673[11]), 1);
				func_1799(&uLocal_359, 4);
			}
			else if (func_1811(Global_35, &(iLocal_673[12]), 1, 0))
			{
				iLocal_639 = func_1313(408396114, &(iLocal_673[12]), 1);
				func_1799(&uLocal_359, 5);
			}
			else
			{
				func_1799(&uLocal_359, 6);
			}
			break;
		case 4:
			if (func_1811(Global_35, &(iLocal_673[8]), 1, 0) && vVar0.z > fVar5)
			{
				func_1799(&uLocal_359, 6);
			}
			break;
		case 5:
			if (func_1811(Global_35, &(iLocal_673[8]), 1, 0) && vVar0.z > fVar5)
			{
				func_1799(&uLocal_359, 6);
			}
			break;
		case 6:
			func_1314();
			func_472(&iLocal_639);
			iLocal_639 = func_1313(408396114, &(iLocal_673[4]), 1);
			func_1324(cParam0, "ODR5_OBJ_APRCHSNPR", 0, 7500, 0, -1082130432, 0, 0, -1, -1, 0);
			func_1799(&uLocal_359, 7);
			break;
		case 7:
			if (has_entity_clear_los_to_entity_in_front(Global_35, &(Local_14.f_116[0]), 17) && func_874(Global_35, &(Local_14.f_116[0]), 1, 1) < 25f)
			{
				func_1799(&uLocal_359, 8);
				func_472(&iLocal_639);
				iLocal_640 = func_1317(408396114, &(Local_14.f_116[0]), 1);
				func_412(&iLocal_224, 8);
			}
			break;
		case 8:
			func_135(cParam0, 5);
			set_gameplay_coord_hint(func_1826(0, 0), 2000, 2000, 2000, 0);
			func_412(&iLocal_224, 1073741824);
			func_1799(&uLocal_359, 9);
			break;
		case 9:
			break;
	}
}

void func_1319(char[4] cParam0)
{
	iLocal_222 = 0;
	while (iLocal_222 < 6)
	{
		if (&uLocal_389[iLocal_222] != 19)
		{
			if (does_entity_exist(&(Local_14.f_103[iLocal_222])) && !func_435(&(Local_14.f_103[iLocal_222]), 0))
			{
				func_1827(uLocal_389[iLocal_222], 19);
			}
		}
		iLocal_222++;
	}
	if (bLocal_209)
	{
	}
	if (!func_386(iLocal_229, 8192))
	{
		if (func_1828(cParam0))
		{
			func_412(&iLocal_229, 8192);
		}
	}
	iLocal_222 = 0;
	while (iLocal_222 < 6)
	{
		switch (&uLocal_389[iLocal_222])
		{
			case 0:
				if (func_386(iLocal_229, 8192))
				{
					func_1827(uLocal_389[iLocal_222], 3);
				}
				break;
			case 3:
				if (iLocal_222 == 0)
				{
					func_1829(Local_1785[0], "odr5_use_qn", 0, -163964935, 0, 0, 0, 0, 0);
				}
				else if (iLocal_222 == 1)
				{
					func_1829(Local_1803[0], "odr5_use_qn", 0, -163964935, 0, 0, 0, 0, 0);
				}
				if (is_ped_male(&(Local_14.f_103[iLocal_222])))
				{
					if (iLocal_222 == 0)
					{
						func_1240(&(Local_14.f_103[iLocal_222]), func_216(3, 22), 2, 1073741824);
						clear_ped_tasks(&(Local_14.f_103[iLocal_222]), 1, 0);
						func_1306();
						task_follow_nav_mesh_to_coord(0, func_381(3, 21), 1f, 20000, 0.25f, 0, func_450(3, 21));
						_task_start_scenario_in_place(0, -22664287, -1, true, 0, -1f, false);
						func_1307(&(Local_14.f_103[iLocal_222]), 1, -1082130432, -1082130432);
					}
					else
					{
						_task_start_scenario_in_place(&(Local_14.f_103[iLocal_222]), 830847823, 0, true, 0, -1f, false);
					}
				}
				else
				{
					_task_start_scenario_in_place(&(Local_14.f_103[iLocal_222]), -1982207864, 0, true, 0, -1f, false);
				}
				request_ped_visibility_tracking(&(Local_14.f_103[iLocal_222]));
				func_1827(uLocal_389[iLocal_222], 4);
				break;
			case 4:
				if (iLocal_222 == 0)
				{
					iVar5 = func_1830(Local_14.f_103[iLocal_222], Local_1742[iLocal_222], 5f, &Local_1785, 0, 3, 0, 0, 268435456, 0, 0, 2, -1082130432);
				}
				else if (iLocal_222 == 1)
				{
					iVar5 = func_1830(Local_14.f_103[iLocal_222], Local_1742[iLocal_222], 5f, &Local_1803, 0, 3, 0, 0, 268435456, 0, 0, 2, -1082130432);
				}
				else
				{
					if (func_874(Global_35, &(Local_14.f_103[iLocal_222]), 1, 1) < 3f)
					{
						if (is_tracked_ped_visible(&(Local_14.f_103[iLocal_222])))
						{
							func_47(0, 0);
							func_1827(uLocal_389[iLocal_222], 5);
						}
					}
					iVar5 = -1;
				}
				if (iVar5 == 0)
				{
					func_1827(uLocal_389[iLocal_222], 5);
				}
				break;
			case 5:
				if (!func_1257() && !func_206())
				{
					set_ped_config_flag(&(Local_14.f_103[iLocal_222]), 178, true);
					func_1306();
					task_turn_ped_to_face_entity(0, Global_35, -1, -1082130432, -1082130432, -1082130432);
					func_1307(&(Local_14.f_103[iLocal_222]), 1, -1082130432, -1082130432);
					switch (iLocal_222)
					{
						case 1:
							func_145(cParam0, &(Local_14.f_103[iLocal_222]), "ODR5_CIVILIAN_F1", 0);
							break;
						case 2:
							func_145(cParam0, &(Local_14.f_103[iLocal_222]), "ODR5_CROWD_F", 0);
							break;
						case 4:
							func_145(cParam0, &(Local_14.f_103[iLocal_222]), "ODR5_CROWD_F2", 0);
							break;
						case 0:
							func_145(cParam0, &(Local_14.f_103[iLocal_222]), "ODR5_CIVILIAN_M1", 0);
							break;
						case 3:
							func_145(cParam0, &(Local_14.f_103[iLocal_222]), "ODR5_CROWD_M", 0);
							break;
						case 5:
							func_145(cParam0, &(Local_14.f_103[iLocal_222]), "ODR5_CROWD_M2", 0);
							break;
					}
					sVar4 = func_1831(iLocal_222);
					if (!is_string_null_or_empty(sVar4))
					{
						func_1256(cParam0, sVar4, 1, 0, 0);
					}
					func_1827(uLocal_389[iLocal_222], 6);
				}
				break;
			case 6:
				if (!func_1257())
				{
					func_1827(uLocal_389[iLocal_222], 1);
				}
				break;
			case 1:
				if (iLocal_222 == 0)
				{
					func_1306();
					if (func_1777(&(Local_14.f_103[iLocal_222]), func_381(3, 21), 1) > 1.2f)
					{
						func_1832(0, func_216(3, 21), 1f, 20000, 1048576000, 0);
					}
					_task_start_scenario_in_place(0, -22664287, -1, true, 0, -1f, false);
					func_1307(&(Local_14.f_103[iLocal_222]), 1, -1082130432, -1082130432);
				}
				else
				{
					if (func_1338())
					{
						Var0 = { func_1833(iLocal_222) };
					}
					else
					{
						Var0 = { func_1834(16, iLocal_222) };
					}
					func_1306();
					task_turn_ped_to_face_entity(0, Global_35, 1000, -1082130432, -1082130432, -1082130432);
					task_follow_nav_mesh_to_coord(0, Var0, 1f, 20000, 0.25f, 0, Var0.f_3);
					if (is_ped_male(&(Local_14.f_103[iLocal_222])))
					{
						_task_start_scenario_in_place(0, 830847823, 0, true, 0, -1f, false);
					}
					else
					{
						_task_start_scenario_in_place(0, -1982207864, 0, true, 0, -1f, false);
					}
					func_1307(&(Local_14.f_103[iLocal_222]), 1, -1082130432, -1082130432);
				}
				func_1827(uLocal_389[iLocal_222], 2);
				break;
			case 19:
				break;
		}
		iLocal_222++;
	}
}

void func_1320(char[4] cParam0)
{
	if (!func_435(iVar663, 0) && &iLocal_337[0] != 49)
	{
		func_1754(0, 49);
	}
	if (!func_435(iVar664, 0) && &iLocal_337[1] != 49)
	{
		func_1754(1, 49);
	}
	sVar0 = "s_point_at_ladder_loop";
	if (bLocal_208)
	{
	}
	switch (&iLocal_337[0])
	{
		case 0:
			func_1754(0, 1);
			break;
		case 1:
			_0xdf7b5144e25cd3fe(&(uLocal_230[5]), sLocal_188);
			func_1754(0, 2);
			break;
		case 2:
			if (_0x8d81e7824b7753f7(&(uLocal_230[5]), sVar0, 1))
			{
				func_1754(0, 48);
			}
			break;
		case 48:
			if (_0x005e6f28dd7ed58d(&(uLocal_230[5]), "IG_Dutch") || !_is_anim_scene_started(&(uLocal_230[5]), false))
			{
				func_135(cParam0, 2);
				func_1754(0, 3);
			}
			break;
		case 3:
			if (_0x5102307ce88798eb(iVar663))
			{
				_0x3088634cf8c819cf(iVar663);
			}
			_0x411189e51b8020ba(iVar663, "stealth");
			func_1306();
			task_follow_waypoint_recording(0, sLocal_150, 0, 27656, -1, 0, 0, -1);
			func_1835(0, -1124614608, func_381(5, 1), func_450(5, 1), -1, 1, 0, 0, -1082130432);
			func_1307(iVar663, 1, -1082130432, -1082130432);
			func_1754(0, 8);
			break;
		case 8:
			break;
	}
	switch (&iLocal_337[1])
	{
		case 0:
			func_213(vLocal_456[1]);
			func_1754(1, 7);
			break;
		case 7:
			func_1306();
			_task_start_scenario_in_place(0, -22664287, 0, true, 0, -1f, false);
			func_1307(iVar664, 1, -1082130432, -1082130432);
			func_1754(1, 8);
			break;
		case 8:
			break;
	}
}

void func_1321()
{
	if (bLocal_214)
	{
	}
	switch (iVar333)
	{
		case 0:
			func_1836(1);
			break;
		case 1:
			iLocal_1741 = 0;
			vLocal_191 = { 0f, 0f, 0f };
			func_1836(2);
			break;
		case 2:
			if (func_1811(Global_35, &(iLocal_673[9]), 1, 0))
			{
				iLocal_1741 = &iLocal_673[10];
				vLocal_191 = { func_381(3, 19) };
				func_1836(3);
			}
			break;
		case 3:
			func_1837(vLocal_191, 1);
			func_1836(4);
			break;
		case 4:
			if (!func_1811(Global_35, iVar1739, 1, 0))
			{
				func_1836(5);
			}
			break;
		case 5:
			func_1837(vLocal_191, 0);
			func_1836(1);
			break;
	}
}

bool func_1322(char[4] cParam0)
{
	switch (iVar1818)
	{
		case 0:
			if (func_1838(-1, 0))
			{
				iLocal_1821 = 1;
			}
			break;
		case 1:
			if (func_1839(&(Local_14.f_24[0]), iVar413))
			{
				func_1840(&(Local_14.f_24[0]), iVar413);
				iLocal_1821 = 2;
			}
			break;
		case 2:
			clear_ped_tasks(&(Local_14.f_24[0]), 1, 0);
			func_145(cParam0, &(Local_14.f_24[0]), "ODR5_SNIPER", 0);
			set_ped_relationship_group_hash(&(Local_14.f_24[0]), -1976316465);
			remove_all_ped_weapons(&(Local_14.f_24[0]), true, true);
			set_blocking_of_non_temporary_events(&(Local_14.f_24[0]), true);
			func_1492(&(Local_14.f_24[0]), iVar419, 1, 0, 0, 1056964608, 1065353216, 0);
			iLocal_1821 = 3;
			break;
		case 3:
			if (!is_entity_dead(&(Local_14.f_24[0])))
			{
				func_1492(&(Local_14.f_24[0]), 379542007, 1, 0, 2, 1056964608, 1065353216, 0);
				set_ped_config_flag(&(Local_14.f_24[0]), 186, false);
				iLocal_1821 = 4;
				return true;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

void func_1323(char[4] cParam0)
{
	if (!func_435(&(Local_14.f_24[0]), 0))
	{
		if (iVar339 != 56)
		{
			func_135(cParam0, 11);
			set_ped_config_flag(Global_35, 258, false);
			func_1810(&uLocal_342, 56);
		}
	}
	if (bLocal_210)
	{
	}
	switch (iVar339)
	{
		case 0:
			set_ped_relationship_group_hash(&(Local_14.f_24[0]), 1269650476);
			set_ped_combat_attributes(&(Local_14.f_24[0]), 46, true);
			func_1810(&uLocal_342, 9);
			set_current_ped_weapon(&(Local_14.f_24[0]), iVar419, true, 0, false, false);
			func_213(&uLocal_542);
			break;
		case 9:
			bVar3 = false;
			if (((func_1811(Global_35, &(iLocal_673[14]), 1, 0) && !func_1841(func_381(5, 3), 0f, 1f, 0f, 1f)) && !func_1841(func_381(5, 7), 0f, 1f, 0f, 1f)) && !func_1842(Global_35, func_381(5, 3), 2.5f, 1, 1))
			{
				_play_sound_from_position("door_open_close", 2695.134f, -1159.084f, 59.6305f, sLocal_175, false, 0, true, 0);
				func_1240(&(Local_14.f_24[0]), func_216(5, 3), 2, 1073741824);
				bVar3 = true;
			}
			else if (((func_1811(Global_35, &(iLocal_673[15]), 1, 0) && !func_1841(func_381(5, 4), 0f, 1f, 0f, 1f)) && !func_1841(func_381(5, 8), 0f, 1f, 0f, 1f)) && !func_1842(Global_35, func_381(5, 4), 2.5f, 1, 1))
			{
				_play_sound_from_position("door_open_close", 2683.751f, -1154.865f, 59.6291f, sLocal_175, false, 0, true, 0);
				func_1240(&(Local_14.f_24[0]), func_216(5, 4), 2, 1073741824);
				bVar3 = true;
			}
			if (func_1269(&uLocal_542) > 30f)
			{
				set_gameplay_entity_hint(&(Local_14.f_20[0]), 0f, 0f, 0f, true, 2000, 2000, 2000, 0);
				func_553(&uLocal_542);
			}
			if (bVar3)
			{
				if (is_gameplay_hint_active())
				{
					stop_gameplay_hint(false);
				}
				set_current_ped_weapon(&(Local_14.f_24[0]), iVar419, true, 0, false, false);
				task_grapple(&(Local_14.f_24[0]), Global_35, 0, 1, 2f, 1, 0);
				force_ped_motion_state(&(Local_14.f_24[0]), -530524, false, 0, false);
				set_entity_invincible(&(Local_14.f_24[0]), false);
				_0xb8de69d9473b7593(Global_35, 8);
				_0xb8de69d9473b7593(Global_35, 22);
				_0xb8de69d9473b7593(Global_35, 23);
				_0xb8de69d9473b7593(Global_35, 21);
				_0xb8de69d9473b7593(Global_35, 10);
				_0xb8de69d9473b7593(Global_35, 7);
				_0xb8de69d9473b7593(Global_35, 15);
				_0xb8de69d9473b7593(Global_35, 16);
				_0xb8de69d9473b7593(Global_35, 17);
				_0xb8de69d9473b7593(Global_35, 28);
				_0xb8de69d9473b7593(Global_35, 4);
				set_ped_drops_weapons_when_dead(&(Local_14.f_24[0]), false);
				func_1314();
				func_213(&uLocal_542);
				func_1810(&uLocal_342, 11);
				_0x789dabd18e9024db(&(Local_14.f_24[0]), 11, 0);
			}
			break;
		case 11:
			if (!_0x0e99e3bf11bb6367(&(Local_14.f_24[0])))
			{
				if (func_1269(&uLocal_542) > 4f && func_874(Global_35, &(Local_14.f_24[0]), 1, 1) < 1f)
				{
					set_ped_max_move_blend_ratio(Global_35, 0.5f);
					task_grapple(&(Local_14.f_24[0]), Global_35, 0, 1, 1f, 1, 0);
					func_213(&uLocal_542);
				}
				else if (func_1269(&uLocal_542) > 8f)
				{
					set_ped_max_move_blend_ratio(Global_35, 1f);
					task_grapple(&(Local_14.f_24[0]), Global_35, 0, 1, 2f, 1, 0);
					func_213(&uLocal_542);
				}
				else
				{
					set_ped_max_move_blend_ratio(Global_35, 1f);
				}
			}
			if (_0x0e99e3bf11bb6367(&(Local_14.f_24[0])))
			{
				func_1843(1);
				_0x789dabd18e9024db(&(Local_14.f_24[0]), 4, 0);
				func_135(cParam0, 1);
				func_213(&uLocal_542);
				func_1810(&uLocal_342, 12);
				set_ped_config_flag(&(Local_14.f_24[0]), 169, false);
			}
			break;
		case 12:
			func_1843(1);
			bVar4 = func_1269(&uLocal_542) > 8f;
			bVar5 = !func_1293("ODR5_STARTA");
			bVar6 = _0xf3c873ed0c595109(&(Local_14.f_24[0])) & 4 == false;
			if (!bVar6 && (bVar5 || bVar4))
			{
				func_1843(1);
				_0x949b2f9ed2917f5d(Global_35, 8);
				_0x949b2f9ed2917f5d(Global_35, 22);
				_0x949b2f9ed2917f5d(Global_35, 23);
				_0x949b2f9ed2917f5d(Global_35, 21);
				_0x949b2f9ed2917f5d(Global_35, 10);
				_0x949b2f9ed2917f5d(Global_35, 7);
				_0xeae3b5b019c8d23f(Global_35, 1);
				_0xeae3b5b019c8d23f(&(Local_14.f_24[0]), 17);
				_0x789dabd18e9024db(&(Local_14.f_24[0]), 3072, 0);
				func_1314();
				func_213(&uLocal_542);
				func_1810(&uLocal_342, 13);
			}
			break;
		case 13:
			if (_0x0e99e3bf11bb6367(&(Local_14.f_24[0])))
			{
				if (_0x2311f15d971aa680(&(Local_14.f_24[0])) == 8 || func_1269(&uLocal_542) > 3.5f)
				{
					if (_0x2311f15d971aa680(&(Local_14.f_24[0])) != 8)
					{
						_0xeae3b5b019c8d23f(&(Local_14.f_24[0]), 4);
					}
				}
				else
				{
					_0x789dabd18e9024db(&(Local_14.f_24[0]), 3072, 0);
				}
			}
			if (!_0x0e99e3bf11bb6367(&(Local_14.f_24[0])))
			{
				func_135(cParam0, 5);
				if (!has_ped_got_weapon(Global_35, iVar419, 0, false))
				{
					func_1492(Global_35, iVar419, 1, 0, 4, 1056964608, 1065353216, 0);
				}
				set_current_ped_weapon(Global_35, iVar419, false, 4, true, false);
				set_current_ped_weapon(Global_35, -1569615261, true, 0, false, false);
				func_1810(&uLocal_342, 7);
				_0x949b2f9ed2917f5d(Global_35, 15);
				_0x949b2f9ed2917f5d(Global_35, 16);
				_0x949b2f9ed2917f5d(Global_35, 17);
				_0x949b2f9ed2917f5d(Global_35, 28);
				_0x949b2f9ed2917f5d(Global_35, 4);
				func_213(&uLocal_542);
			}
			break;
		case 7:
			_0xb8de69d9473b7593(&(Local_14.f_24[0]), 1);
			set_current_ped_weapon(&(Local_14.f_24[0]), iVar419, true, 0, false, false);
			func_1844(&(Local_14.f_24[0]), 0);
			_0x18ff3110cf47115d(&(Local_14.f_24[0]), 7, 0);
			set_ped_combat_attributes(&(Local_14.f_24[0]), 5, true);
			set_ped_combat_attributes(&(Local_14.f_24[0]), 93, true);
			set_combat_float(&(Local_14.f_24[0]), 7, 0.8f);
			set_entity_is_target_priority(&(Local_14.f_24[0]), true, 0f);
			task_swap_weapon(&(Local_14.f_24[0]), 1, 1, 0, 0);
			set_ped_config_flag(Global_35, 258, true);
			func_213(&uLocal_542);
			func_1810(&uLocal_342, 8);
			break;
		case 8:
			if (func_1269(&uLocal_542) > 0.7f)
			{
				if (!has_ped_got_weapon(Global_35, iVar419, 0, false))
				{
					func_1492(Global_35, iVar419, 1, 0, 4, 1056964608, 1065353216, 0);
				}
				set_current_ped_weapon(Global_35, iVar419, false, 4, true, false);
				func_553(&uLocal_542);
				task_swap_weapon(Global_35, 1, 1, 0, 0);
			}
			if (!func_1293("ODR5_STARTA") && !func_1293("ODR5_BREAKHOLD"))
			{
				if (!func_26(&uLocal_545))
				{
					func_27(&uLocal_545, 0);
					fLocal_204 = get_random_float_in_range(6f, 11f);
				}
				if (func_1269(&uLocal_545) > fLocal_204)
				{
					func_1256(cParam0, "ODR5_SPOT", 1, 0, 0);
					fLocal_204 = get_random_float_in_range(6f, 11f);
					func_213(&uLocal_545);
				}
			}
			else if (func_26(&uLocal_545))
			{
				func_553(&uLocal_545);
			}
			vVar0 = { get_entity_coords(&(Local_14.f_24[0]), true, false) };
			if (vVar0.z < 59f)
			{
				func_1845(&(Local_14.f_24[0]), 1, 0);
				func_1810(&uLocal_342, 56);
			}
			break;
	}
}

var func_1324(char[4] cParam0, char* sParam1, int iParam2, int iParam3, bool bParam4, float fParam5, char* sParam6, char* sParam7, char* sParam8, char* sParam9, int iParam10)
{
	func_1243(cParam0, sParam1, fParam5, sParam6, sParam7, sParam8, sParam9, iParam10);
	if (bParam4)
	{
		_uilog_set_has_displayed_cached_objective();
		uVar0 = func_935(sParam1, iParam3, bParam4, 1, sParam6, sParam7, sParam8, sParam9, iParam10);
	}
	else if (!func_1846(cParam0, sParam1))
	{
		sVar1 = func_1542(iParam10, sParam1, sParam6, sParam7, sParam8, sParam9);
		_uilog_set_has_displayed_cached_objective();
		uVar0 = func_1541(sVar1, iParam3, 0, 0, 0, 1);
	}
	return uVar0;
}

void func_1325(char[4] cParam0)
{
	switch (iVar406)
	{
		case 0:
			func_1782(&uLocal_409, 1);
			break;
		case 1:
			if ((iVar339 != 56 && _is_anim_scene_started(&(uLocal_230[0]), false)) && _0x1f0e401031e20146(&(uLocal_230[0]), cLocal_157))
			{
				func_1782(&uLocal_409, 6);
			}
			break;
		case 6:
			iLocal_222 = 0;
			while (iLocal_222 < 6)
			{
				if (func_435(&(Local_14.f_59[iLocal_222]), 0))
				{
					if (iLocal_222 < 2)
					{
						task_shoot_at_entity(&(Local_14.f_59[iLocal_222]), &(Local_14.f_3[1]), -1, -687903391, 0);
					}
					else
					{
						task_shoot_at_entity(&(Local_14.f_59[iLocal_222]), &(Local_14.f_3[2]), -1, -687903391, 0);
					}
				}
				iLocal_222++;
			}
			func_213(&uLocal_444);
			func_1782(&uLocal_409, 7);
			break;
		case 7:
			iLocal_222 = 0;
			while (iLocal_222 < 6)
			{
				if (func_435(&(Local_14.f_59[iLocal_222]), 0) && is_ped_shooting(&(Local_14.f_59[iLocal_222])))
				{
					func_1774(uLocal_230[1], 1);
					_set_anim_scene_playback_list_bool(&(uLocal_230[1]), cLocal_158, true);
					start_anim_scene(&(uLocal_230[1]));
					func_1782(&uLocal_409, 8);
					func_213(&uLocal_444);
				}
				else
				{
					iLocal_222++;
				}
			}
			break;
		case 8:
			if (func_1316(&uLocal_444, 0.7f))
			{
				func_1782(&uLocal_409, 9);
			}
			break;
		case 9:
			func_1786(cParam0, "ODR5_FAIL_SPLC", "", 1, 0);
			func_1782(&uLocal_409, 10);
			break;
	}
}

bool func_1326(char[4] cParam0, char[4] cParam1)
{
	if (!func_121(cParam0, func_33(cParam0), 256))
	{
		if (!func_121(cParam0, func_33(cParam0), 65536))
		{
			if (func_1847(cParam1))
			{
				func_140(cParam0, func_33(cParam0), 131072);
			}
			func_140(cParam0, func_33(cParam0), 65536);
		}
		if (func_121(cParam0, func_33(cParam0), 131072))
		{
			if (!func_1458(&(cParam0->f_10792), 1))
			{
				return false;
			}
			else
			{
				func_1848(&(cParam0->f_7375), &(cParam0->f_10792));
				func_140(cParam0, func_33(cParam0), 256);
			}
		}
		else
		{
			func_140(cParam0, func_33(cParam0), 256);
		}
	}
	return func_1849(&(cParam0->f_7375), cParam1, (func_8(cParam0, 33554432) || (is_screen_faded_out() && !func_8(cParam0, 1073741824))), 1);
}

void func_1327(int iParam0)
{
	iLocal_222 = 0;
	while (iLocal_222 < 3)
	{
		func_1850(uLocal_397[iLocal_222], iParam0);
		iLocal_222++;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 2)
	{
		func_1850(uLocal_401[iLocal_222], iParam0);
		iLocal_222++;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 2)
	{
		func_1850(uLocal_404[iLocal_222], iParam0);
		iLocal_222++;
	}
}

bool func_1328(char[4] cParam0)
{
	if (iVar624 == 0 && iVar625 == 0)
	{
		uLocal_627 = _0x6f3068258a499e52(uVar421, 2688.435f, -1113.968f, 51.849f, 9);
		uLocal_628 = _0x6f3068258a499e52(uVar422, 2691.003f, -1113.486f, 51.8719f, 9);
	}
	if (!_0x1ff441d7954f8709(iVar624) || !_0x1ff441d7954f8709(iVar625))
	{
		return false;
	}
	uLocal_629 = _0x4735e2a4bb83d9da(iVar624);
	uLocal_630 = _0x4735e2a4bb83d9da(iVar625);
	if (does_entity_exist(iVar626))
	{
		func_418(cParam0, iVar626, "s_gallowdoornbx01x", 0, 0, 0, 0);
	}
	if (does_entity_exist(iVar627))
	{
		func_418(cParam0, iVar627, "s_gallowlevernbx01x", 0, 0, 0, 0);
	}
	func_151(cParam0, Global_35, 0, 0, 0, 0, 0);
	func_151(cParam0, iVar663, 0, 0, 0, 0, 0);
	func_151(cParam0, iVar664, 0, 0, 0, 0, 0);
	func_151(cParam0, &(Local_14.f_20[0]), "ColmODriscoll", 0, 0, 1, 0);
	func_151(cParam0, &(Local_14.f_3[1]), "A_M_M_MiddleSDTownfolk_01", 0, 0, 0, 0);
	func_151(cParam0, &(Local_14.f_3[0]), "A_M_M_MiddleSDTownfolk_01^1", 0, 0, 0, 0);
	func_151(cParam0, &(Local_14.f_3[2]), "S_M_M_AmbientSDPolice_01", 0, 0, 0, 0);
	func_1851(cParam0, &(Local_14.f_3[2]), 8);
	func_151(cParam0, &(Local_14.f_9[1]), "g_m_m_uniduster_04", 0, 0, 0, 0);
	func_151(cParam0, &(Local_14.f_9[0]), "g_m_m_uniduster_04^1", 0, 0, 0, 0);
	func_418(cParam0, &(Local_14.f_119[2]), "p_cs_scroll01x", 0, 0, 0, 0);
	func_418(cParam0, &(Local_14.f_119[0]), "s_ropehogtiehandsmedium01x", 0, 0, 0, 0);
	func_418(cParam0, &(Local_14.f_119[3]), "p_cs_noose01x", 0, 0, 0, 0);
	if (does_entity_exist(&(Local_14.f_119[1])))
	{
		set_entity_visible(&(Local_14.f_119[1]), false);
	}
	return true;
}

void func_1329(int iParam0)
{
	if (is_entity_dead(iParam0))
	{
		return;
	}
	_set_ped_component_disabled(iParam0, -1725579161, 1);
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1330(bool bParam0)
{
	if (!is_entity_dead(iVar663))
	{
		if (bParam0)
		{
			clear_ped_tasks(iVar663, 1, 0);
			_set_entity_health(iVar663, get_entity_max_health(iVar663, false), 0);
			_0x2ba918c823b8ba56(iVar663, 0.2f);
			_0xc2266aa617668ad3(iVar663, 0f);
		}
		else
		{
			_0xc2266aa617668ad3(iVar663, 0.3f);
		}
	}
	if (!is_entity_dead(iVar664))
	{
		if (bParam0)
		{
			clear_ped_tasks(iVar664, 1, 0);
			_set_entity_health(iVar664, get_entity_max_health(iVar664, false), 0);
			_0x2ba918c823b8ba56(iVar664, 0.2f);
			_0xc2266aa617668ad3(iVar664, 0f);
		}
		else
		{
			_0xc2266aa617668ad3(iVar664, 0.3f);
		}
	}
}

void func_1331(char[4] cParam0)
{
	if (!is_entity_dead(&(Local_14.f_20[0])))
	{
		clear_ped_tasks_immediately(&(Local_14.f_20[0]), false, true);
	}
	else
	{
		func_1786(cParam0, "ODR5_FAIL_ESC", "", 1, 0);
	}
	func_1309(Local_14.f_46[0], 0);
}

void func_1332(vector3 vParam0, float fParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
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

void func_1333(int iParam0, int iParam1, bool bParam2)
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

void func_1334()
{
	if (bLocal_217)
	{
	}
	switch (iVar394)
	{
		case 0:
			func_1852(get_entity_coords(iVar664, true, false));
			set_current_ped_weapon(Global_35, 1402226560, true, 0, false, false);
			set_player_control(player_id(), false, 0, false);
			set_player_forced_aim(player_id(), true, iVar664, 30226, false);
			_0x2208438012482a1a(Global_35, true, false);
			force_ped_motion_state(Global_35, 1063765679, false, 1, false);
			_0x9f9a829c6751f3c7(player_id(), 6, 1);
			func_1853(1);
			break;
		case 1:
			shake_gameplay_cam("HAND_SHAKE", fLocal_207);
			func_1853(2);
			break;
		case 2:
			if (func_1777(iVar664, func_381(7, 0), 1) < 1.4f)
			{
				func_213(&uLocal_542);
				func_1330(0);
				func_213(&uLocal_542);
				func_1853(5);
			}
			break;
		case 5:
			set_player_forced_aim(player_id(), true, 0, -1, false);
			set_player_control(player_id(), true, 0, false);
			func_1853(6);
			break;
		case 6:
			if (func_1316(&uLocal_542, 0.9f))
			{
				_0x4285804fd65d8066("HAND_SHAKE", 0);
			}
			set_player_forced_aim(player_id(), true, 0, -1, false);
			break;
		case 7:
			set_player_forced_aim(player_id(), false, 0, -1, false);
			func_1853(8);
			break;
	}
}

void func_1335(bool bParam0)
{
	iLocal_222 = 0;
	while (iLocal_222 < 15)
	{
		if (!is_entity_dead(&(Local_14.f_28[iLocal_222])))
		{
			set_entity_visible(&(Local_14.f_28[iLocal_222]), bParam0);
		}
		iLocal_222++;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 8)
	{
		if (!is_entity_dead(&(Local_14.f_87[iLocal_222])))
		{
			set_entity_visible(&(Local_14.f_87[iLocal_222]), bParam0);
		}
		iLocal_222++;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 3)
	{
		if (!is_entity_dead(&(Local_14.f_14[iLocal_222])))
		{
			set_entity_visible(&(Local_14.f_14[iLocal_222]), bParam0);
		}
		iLocal_222++;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 6)
	{
		if (!is_entity_dead(&(Local_14.f_59[iLocal_222])))
		{
			set_entity_visible(&(Local_14.f_59[iLocal_222]), bParam0);
		}
		iLocal_222++;
	}
	if (bParam0)
	{
	}
}

void func_1336()
{
	if (!is_entity_dead(&(Local_14.f_20[0])))
	{
		if (!does_entity_exist(iVar633))
		{
			iLocal_635 = create_object(iVar424, 2689.21f, -1113.91f, 48.86f, true, true, false, false, true);
			attach_entity_to_entity(iVar633, &(Local_14.f_20[0]), get_ped_bone_index(&(Local_14.f_20[0]), 14284), 0.05f, -0.025f, 0f, 28.4f, 94.3f, 347.4f, false, false, false, false, 2, true, false, false);
		}
		if (!does_entity_exist(iVar634))
		{
			iLocal_636 = create_object(iVar425, func_381(6, 20), true, true, false, false, true);
			set_entity_visible(iVar634, false);
			freeze_entity_position(iVar634, true);
		}
		fVar0 = func_874(iVar633, iVar634, 1, 1);
		iLocal_665 = _add_rope_2(func_381(6, 20), 0f, 0f, 0f, fVar0, 6, true, -1, -1f);
		_0x462ff2a432733a44(iVar663, iVar634, &(Local_14.f_20[0]), 0f, 0f, 0f, 0f, 0f, 0f, 0, "SKEL_Neck1");
		_0x3c6490d940ff5d0b(iVar663, 0, "SKEL_Neck1", fVar0, 1);
		rope_force_length(iVar663, fVar0);
		freeze_entity_position(&(Local_14.f_20[0]), false);
		func_1845(&(Local_14.f_20[0]), 0, 0);
	}
}

void func_1337()
{
	iLocal_222 = 0;
	while (iLocal_222 < 2)
	{
		if (!is_entity_dead(&(Local_14.f_9[iLocal_222])))
		{
			if (iLocal_222 == 0)
			{
				task_play_anim(&(Local_14.f_9[iLocal_222]), "SCRIPT_STORY@DST5@ig@ig_unapproved", "dead_e", 8f, -8f, -1, 131072, 0f, false, 0, false, 0, false);
			}
			else
			{
				task_play_anim(&(Local_14.f_9[iLocal_222]), "SCRIPT_STORY@DST5@ig@ig_unapproved", "dead_c", 8f, -8f, -1, 131072, 0f, false, 0, false, 0, false);
			}
		}
		iLocal_222++;
	}
}

bool func_1338()
{
	if (is_bit_set(get_random_int_in_range(0, 65536), 0))
	{
		return true;
	}
	return false;
}

int func_1339(var uParam0, int iParam1)
{
	iVar0 = *uParam0;
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		if (func_435(uParam0[iVar1], iParam1))
		{
			iVar2++;
		}
		iVar1++;
	}
	return iVar2;
}

void func_1340()
{
	if (func_435(Global_35, 0))
	{
		disable_control_action(0, -640622144, false);
		disable_control_action(0, -620139643, false);
		disable_control_action(0, -1304887797, false);
		disable_control_action(0, -1404316431, false);
		disable_control_action(0, -562475458, false);
		disable_control_action(0, 1301263553, false);
		disable_control_action(0, -39308912, false);
		disable_control_action(0, 1287709438, false);
		disable_control_action(0, -1046962283, false);
		disable_control_action(0, 2110430325, false);
		disable_control_action(0, -1220818313, false);
		disable_control_action(0, -2102806696, false);
		disable_control_action(0, -654888872, false);
		disable_control_action(0, -209515122, false);
		disable_control_action(0, -399233038, false);
		disable_control_action(0, 1934388793, false);
		disable_control_action(0, -2131587435, false);
		disable_control_action(0, -1591726981, false);
	}
}

void func_1341()
{
	iLocal_222 = 0;
	while (iLocal_222 < 3)
	{
		if (&uLocal_360[iLocal_222] != 19)
		{
			if (does_entity_exist(&(Local_14.f_3[iLocal_222])) && !func_435(&(Local_14.f_3[iLocal_222]), 0))
			{
				func_1827(uLocal_360[iLocal_222], 19);
			}
		}
		if (&uLocal_360[iLocal_222] != 21)
		{
			if (!does_entity_exist(&(Local_14.f_3[iLocal_222])))
			{
				func_1827(uLocal_360[iLocal_222], 21);
			}
		}
		iLocal_222++;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 15)
	{
		if (&uLocal_364[iLocal_222] != 19)
		{
			if (does_entity_exist(&(Local_14.f_28[iLocal_222])) && !func_435(&(Local_14.f_28[iLocal_222]), 0))
			{
				func_1827(uLocal_364[iLocal_222], 19);
			}
		}
		iLocal_222++;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 8)
	{
		if (&uLocal_380[iLocal_222] != 19)
		{
			if (does_entity_exist(&(Local_14.f_87[iLocal_222])) && !func_435(&(Local_14.f_87[iLocal_222]), 0))
			{
				func_1827(uLocal_380[iLocal_222], 19);
			}
		}
		iLocal_222++;
	}
	if (bLocal_209)
	{
	}
	iLocal_222 = 0;
	while (iLocal_222 < 3)
	{
		switch (&uLocal_360[iLocal_222])
		{
			case 0:
				func_1827(uLocal_360[iLocal_222], 1);
				break;
			case 1:
				if (_is_anim_scene_started(&(uLocal_230[2]), false))
				{
					if (iLocal_222 == 2)
					{
						func_1827(uLocal_360[iLocal_222], 13);
					}
					else
					{
						func_1827(uLocal_360[iLocal_222], 2);
					}
				}
				break;
			case 2:
				if (!_0x3ab6c7b0bb0df4b1(&(Local_14.f_3[iLocal_222]), &(uLocal_230[2])))
				{
					func_1827(uLocal_360[iLocal_222], 9);
				}
				break;
			case 13:
				set_ped_relationship_group_hash(&(Local_14.f_3[iLocal_222]), 707888648);
				func_1854(&(Local_14.f_3[iLocal_222]), &(iLocal_696[1]), 0, 0);
				request_ped_visibility_tracking(&(Local_14.f_3[iLocal_222]));
				set_ped_accuracy(&(Local_14.f_3[iLocal_222]), 1);
				task_combat_hated_targets_around_ped(&(Local_14.f_3[iLocal_222]), 200f, 0, 0);
				func_1827(uLocal_360[iLocal_222], 14);
				func_213(&uLocal_536);
				break;
			case 14:
				if (func_1811(&(Local_14.f_3[iLocal_222]), &(iLocal_696[1]), 1, 0))
				{
					func_1845(&(Local_14.f_3[iLocal_222]), 0, 0);
					func_1827(uLocal_360[iLocal_222], 19);
				}
				break;
			case 16:
				func_1855();
				break;
			case 9:
				func_1306();
				task_follow_waypoint_recording(0, sLocal_152, 0, 16904, -1, 0, 0, -1);
				task_smart_flee_coord(0, func_1775(1, 0), 9999f, -1, 28928, 1077936128);
				func_1307(&(Local_14.f_3[iLocal_222]), 1, -1082130432, -1082130432);
				func_1827(uLocal_360[iLocal_222], 10);
				break;
			case 10:
				if (func_1777(&(Local_14.f_3[iLocal_222]), func_1775(1, 0), 1) > 200f)
				{
					func_1827(uLocal_360[iLocal_222], 20);
				}
				break;
			case 20:
				func_1309(Local_14.f_3[iLocal_222], 0);
				func_1827(uLocal_360[iLocal_222], 21);
				break;
		}
		iLocal_222++;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 15)
	{
		switch (&uLocal_364[iLocal_222])
		{
			case 0:
				func_1827(uLocal_364[iLocal_222], 1);
				break;
			case 1:
				if (_is_anim_scene_started(&(uLocal_230[2]), false))
				{
					func_1827(uLocal_364[iLocal_222], 2);
				}
				break;
			case 2:
				if (!_0x3ab6c7b0bb0df4b1(&(Local_14.f_28[iLocal_222]), &(uLocal_230[2])))
				{
					force_ped_motion_state(&(Local_14.f_28[iLocal_222]), -530524, false, 0, false);
					task_smart_flee_coord(&(Local_14.f_28[iLocal_222]), func_1775(1, 0), 9999f, -1, 28928, 1077936128);
					func_1827(uLocal_364[iLocal_222], 10);
				}
				break;
			case 10:
				if (func_1777(&(Local_14.f_28[iLocal_222]), func_1775(1, 0), 1) > 200f)
				{
					func_1827(uLocal_364[iLocal_222], 20);
				}
				break;
			case 20:
				func_1309(Local_14.f_28[iLocal_222], 0);
				func_1827(uLocal_364[iLocal_222], 21);
				break;
			case 19:
				break;
			case 21:
				break;
		}
		iLocal_222++;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 8)
	{
		switch (&uLocal_380[iLocal_222])
		{
			case 0:
				func_1827(uLocal_380[iLocal_222], 1);
				break;
			case 1:
				if (_is_anim_scene_started(&(uLocal_230[2]), false))
				{
					func_1827(uLocal_380[iLocal_222], 2);
				}
				break;
			case 2:
				if (!_0x3ab6c7b0bb0df4b1(&(Local_14.f_87[iLocal_222]), &(uLocal_230[2])))
				{
					force_ped_motion_state(&(Local_14.f_87[iLocal_222]), -530524, false, 0, false);
					task_smart_flee_coord(&(Local_14.f_87[iLocal_222]), func_1775(1, 0), 9999f, -1, 28928, 1077936128);
					func_1827(uLocal_380[iLocal_222], 10);
				}
				break;
			case 10:
				if (func_1777(&(Local_14.f_87[iLocal_222]), func_1775(1, 0), 1) > 200f)
				{
					func_1827(uLocal_380[iLocal_222], 20);
				}
				break;
			case 20:
				func_1309(Local_14.f_87[iLocal_222], 0);
				func_1827(uLocal_380[iLocal_222], 21);
				break;
			case 19:
				break;
			case 21:
				break;
		}
		iLocal_222++;
	}
}

int func_1342(char[4] cParam0)
{
	if (!func_435(iVar663, 0) || !func_435(iVar664, 0))
	{
		return 0;
	}
	sVar0 = "IG_Dutch";
	sVar1 = "IG_MrsAdler";
	if (bLocal_208)
	{
	}
	bVar2 = func_1856(&uLocal_563, 30f);
	if (bVar2)
	{
		func_1857(cParam0, iVar663, 1, 1);
		func_1857(cParam0, iVar664, 1, 1);
	}
	else
	{
		func_1857(cParam0, iVar663, 0, 1);
		func_1857(cParam0, iVar664, 0, 1);
	}
	if (!func_386(iLocal_226, 256))
	{
		if (!func_386(iLocal_226, 8192))
		{
			if (func_1269(&uLocal_548) > 0.2f)
			{
				if (!func_435(&(Local_14.f_59[5]), 0))
				{
					set_entity_is_target_priority(&(Local_14.f_59[1]), true, 50f);
					set_entity_is_target_priority(&(Local_14.f_59[2]), true, 50f);
					set_entity_is_target_priority(&(Local_14.f_59[4]), true, 50f);
					func_213(vLocal_456[0]);
					func_1754(0, 14);
					func_213(vLocal_456[1]);
					func_1754(1, 14);
					func_213(&uLocal_548);
					func_412(&iLocal_226, 256);
					func_213(&uLocal_551);
					func_1305(&iLocal_226, 16777216);
					func_135(cParam0, 7);
				}
			}
		}
	}
	if (((func_386(iLocal_226, 256) && &iLocal_337[0] == 18) && &iLocal_337[1] == 18) && !func_386(iLocal_226, 512))
	{
		if (!func_386(iLocal_226, 8192))
		{
			if (func_1269(&uLocal_548) > 0.2f)
			{
				if (!func_435(&(Local_14.f_59[1]), 0) && !func_435(&(Local_14.f_59[4]), 0))
				{
					set_entity_is_target_priority(&(Local_14.f_59[3]), true, 50f);
					func_213(vLocal_456[0]);
					func_1754(0, 19);
					func_213(vLocal_456[1]);
					func_1754(1, 19);
					func_213(&uLocal_548);
					func_412(&iLocal_226, 512);
					func_213(&uLocal_551);
					func_1305(&iLocal_226, 16777216);
					func_135(cParam0, 7);
				}
			}
		}
	}
	if (func_386(iLocal_226, 512) && !func_386(iLocal_226, 1024))
	{
		if (!func_386(iLocal_226, 8192))
		{
			if (func_1269(&uLocal_548) > 0.2f)
			{
				if (!func_435(&(Local_14.f_59[3]), 0) && !func_435(&(Local_14.f_59[2]), 0))
				{
					set_entity_is_target_priority(&(Local_14.f_59[0]), true, 50f);
					func_213(vLocal_456[0]);
					func_1754(0, 24);
					func_213(vLocal_456[1]);
					func_1754(1, 24);
					func_213(&uLocal_548);
					func_412(&iLocal_226, 1024);
					func_213(&uLocal_551);
					func_1305(&iLocal_226, 16777216);
					func_135(cParam0, 7);
				}
			}
		}
	}
	if (func_386(iLocal_226, 1024) && !func_386(iLocal_226, 2048))
	{
		if (!func_386(iLocal_226, 8192))
		{
			if (func_1269(&uLocal_548) > 0.2f)
			{
				if ((func_1339(&(Local_14.f_59), 0) == 0 && !func_386(iLocal_226, 1073741824)) || (func_386(iLocal_226, 1073741824) && !func_435(&(Local_14.f_98[0]), 0)))
				{
					set_entity_is_target_priority(&(Local_14.f_98[0]), true, 50f);
					set_entity_is_target_priority(&(Local_14.f_98[1]), true, 50f);
					func_213(vLocal_456[0]);
					func_1754(0, 28);
					func_213(vLocal_456[1]);
					func_1754(1, 28);
					func_213(&uLocal_548);
					func_412(&iLocal_226, 2048);
					func_213(&uLocal_551);
					func_1305(&iLocal_226, 16777216);
					func_135(cParam0, 7);
				}
			}
		}
	}
	if (((func_386(iLocal_226, 2048) && &iLocal_337[0] == 31) && &iLocal_337[1] == 31) && !func_386(iLocal_226, 4096))
	{
		if (!func_386(iLocal_226, 8192))
		{
			if (func_1269(&uLocal_548) > 0.2f)
			{
				if (((!func_386(iLocal_226, 33554432) && !func_1858(&(iLocal_673[19]))) && func_1339(&(Local_14.f_98), 0) == 0) && (!func_435(&(Local_14.f_68[1]), 0) || func_1842(&(Local_14.f_68[1]), func_381(8, 4), 1.5f, 1, 1)))
				{
					func_213(vLocal_456[0]);
					func_1754(0, 32);
					func_213(vLocal_456[1]);
					func_1754(1, 32);
					func_213(&uLocal_548);
					func_412(&iLocal_226, 4096);
					func_213(&uLocal_551);
					func_1305(&iLocal_226, 16777216);
				}
			}
		}
	}
	if (!func_386(iLocal_226, 8192))
	{
		if (func_1269(&uLocal_548) > 0.2f && (func_386(iLocal_226, 33554432) || ((func_1859(Local_14.f_57, 0) + func_1859(Local_14.f_66, 0)) + func_1859(Local_14.f_96, 0)) == 0))
		{
			switch (get_random_int_in_range(0, 3))
			{
				case 0:
					bVar3 = func_1256(cParam0, "ODR5_WAGON", 0, 0, 0);
					break;
				case 1:
					bVar3 = func_1256(cParam0, "ODR5_MOVEWAG", 0, 0, 0);
					break;
				case 2:
					bVar3 = func_1256(cParam0, "ODR5_CLEAR", 0, 0, 0);
					break;
			}
			if (bVar3)
			{
				func_213(vLocal_456[0]);
				func_1754(0, 43);
				func_213(vLocal_456[1]);
				func_1754(1, 43);
				func_412(&iLocal_226, 8192);
			}
		}
	}
	if ((!bVar2 && !func_386(iLocal_226, 16777216)) && (func_1269(&uLocal_551) > 20f || (&iLocal_337[0] == 18 && func_1269(&uLocal_551) > 12f)))
	{
		switch (&iLocal_337[0])
		{
			case 13:
				_0xc2266aa617668ad3(&(Local_14.f_59[5]), 10f);
				func_412(&iLocal_226, 16777216);
				break;
			case 18:
				_0xc2266aa617668ad3(&(Local_14.f_59[1]), 10f);
				func_1860(&(Local_14.f_59[1]), 1);
				_0xc2266aa617668ad3(&(Local_14.f_59[4]), 10f);
				func_1860(&(Local_14.f_59[4]), 1);
				func_412(&iLocal_226, 16777216);
				break;
			case 23:
				_0xc2266aa617668ad3(&(Local_14.f_59[3]), 10f);
				_0xc2266aa617668ad3(&(Local_14.f_59[2]), 10f);
				func_1860(&(Local_14.f_59[2]), 1);
				func_412(&iLocal_226, 16777216);
				break;
			case 27:
				_0xc2266aa617668ad3(&(Local_14.f_59[0]), 10f);
				func_412(&iLocal_226, 16777216);
				break;
			case 31:
				_0xc2266aa617668ad3(&(Local_14.f_98[0]), 10f);
				_0xc2266aa617668ad3(&(Local_14.f_98[1]), 10f);
				func_412(&iLocal_226, 16777216);
				break;
			case 36:
				_0xc2266aa617668ad3(&(Local_14.f_68[0]), 10f);
				_0xc2266aa617668ad3(&(Local_14.f_68[1]), 10f);
				func_412(&iLocal_226, 16777216);
				break;
			default:
				func_213(&uLocal_551);
				break;
		}
	}
	switch (&iLocal_337[0])
	{
		case 0:
			set_ped_config_flag(iVar663, 252, false);
			set_ped_config_flag(iVar663, 345, true);
			set_combat_float(iVar663, 5, 0f);
			set_combat_float(iVar663, 53, 0f);
			set_combat_float(iVar663, 58, 0f);
			set_combat_float(iVar663, 1, 1f);
			set_ped_combat_attributes(iVar663, 119, true);
			_0x12990818c1d35886(iVar663, 0, 1065353216);
			_0x20e54854def6a54a(iVar663, -1413485146);
			func_1754(0, 10);
			break;
		case 10:
			func_1754(0, 11);
			break;
		case 11:
			if (_0x005e6f28dd7ed58d(&(uLocal_230[10]), sVar0) || !_is_anim_scene_started(&(uLocal_230[10]), false))
			{
				func_1861(iVar663, func_381(7, 0), 1f, 0, 0);
				func_1306();
				task_put_ped_directly_into_cover(0, func_381(7, 0), 5000, 0, 0, 1, 0, 0, 0, 1, 0);
				task_combat_hated_targets_around_ped(0, 15f, 0, 2);
				task_stay_in_cover(0);
				func_1307(iVar663, 0, -1082130432, -1082130432);
				func_1754(0, 12);
			}
			break;
		case 12:
			func_213(&uLocal_551);
			func_1754(0, 13);
			break;
		case 13:
			break;
		case 14:
			if (_is_anim_scene_started(&(uLocal_230[10]), false))
			{
				abort_anim_scene(&(uLocal_230[10]), false);
			}
			func_1306();
			task_put_ped_directly_into_cover(0, func_381(7, 0), 5000, 0, 0, 1, 0, 0, 1, 0, 0);
			task_stay_in_cover(0);
			func_1307(iVar663, 0, -1082130432, -1082130432);
			func_213(vLocal_456[0]);
			func_1754(0, 15);
			break;
		case 15:
			if ((func_1767(vLocal_456[0], 0.1f) && is_ped_in_cover(iVar663, 1, 0)) || func_1767(vLocal_456[0], 1f))
			{
				func_1502(uLocal_230[11], sLocal_169);
				func_1754(0, 16);
			}
			break;
		case 16:
			if (_0x005e6f28dd7ed58d(&(uLocal_230[11]), sVar0) || !_is_anim_scene_started(&(uLocal_230[11]), false))
			{
				func_1861(iVar663, func_381(7, 8), 1f, 1, 0);
				func_1306();
				task_put_ped_directly_into_cover(0, func_381(7, 8), 5000, 0, 0, 1, 0, 0, 0, 0, 0);
				task_combat_hated_targets_around_ped(0, 15f, 0, 2);
				task_stay_in_cover(0);
				func_1307(iVar663, 1, -1082130432, -1082130432);
				func_1754(0, 17);
			}
			break;
		case 17:
			func_135(cParam0, 10);
			func_1754(0, 18);
			break;
		case 18:
			break;
		case 19:
			func_1306();
			task_put_ped_directly_into_cover(0, func_381(7, 8), 5000, 0, 0, 1, 0, 0, 1, 0, 0);
			task_stay_in_cover(0);
			func_1307(iVar663, 0, -1082130432, -1082130432);
			func_213(vLocal_456[0]);
			func_1754(0, 20);
			break;
		case 20:
			if ((func_1767(vLocal_456[0], 0.1f) && is_ped_in_cover(iVar663, 1, 0)) || func_1767(vLocal_456[0], 1f))
			{
				func_1502(uLocal_230[13], sLocal_171);
				func_1754(0, 21);
			}
			break;
		case 21:
			if (_0x005e6f28dd7ed58d(&(uLocal_230[13]), sVar1) || !_is_anim_scene_started(&(uLocal_230[13]), false))
			{
				func_1861(iVar663, func_381(7, 2), 1f, 0, 0);
				func_1306();
				task_put_ped_directly_into_cover(0, func_381(7, 2), 5000, 0, 0, 0, 0, iVar613, 0, 0, 0);
				task_combat_hated_targets_around_ped(0, 15f, 0, 2);
				task_stay_in_cover(0);
				func_1307(iVar663, 1, -1082130432, -1082130432);
				func_1754(0, 22);
			}
			break;
		case 22:
			func_412(&iLocal_226, 67108864);
			func_135(cParam0, 10);
			func_1754(0, 23);
			break;
		case 23:
			break;
		case 24:
			func_1861(iVar663, func_381(7, 10), 1f, 0, 0);
			func_1306();
			task_follow_nav_mesh_to_coord(0, func_381(7, 10), 2f, 20000, 3.5f, 0, 40000f);
			task_put_ped_directly_into_cover(0, func_381(7, 10), 300, 1, 0.4f, 0, 0, 0, 0, 0, 0);
			task_combat_hated_targets_around_ped(0, 15f, 0, 2);
			task_stay_in_cover(0);
			func_1307(iVar663, 0, -1082130432, -1082130432);
			func_1754(0, 25);
			break;
		case 25:
			if (func_1777(iVar663, func_381(7, 10), 1) < 2f)
			{
				func_1754(0, 26);
			}
			break;
		case 26:
			func_1306();
			if (func_435(&(Local_14.f_78[0]), 0))
			{
				task_combat_ped_timed(0, &(Local_14.f_78[0]), 10000, 16777216);
			}
			if (func_435(&(Local_14.f_78[1]), 0))
			{
				task_combat_ped_timed(0, &(Local_14.f_78[1]), 10000, 16777216);
			}
			task_combat_hated_targets_around_ped(0, 15f, 0, 2);
			task_stay_in_cover(0);
			func_1307(iVar663, 0, -1082130432, -1082130432);
			func_135(cParam0, 10);
			func_1754(0, 27);
			break;
		case 27:
			break;
		case 28:
			func_1861(iVar663, func_381(7, 4), 1f, 0, 0);
			func_1306();
			task_follow_nav_mesh_to_coord(0, func_381(7, 4), 2f, 20000, 4f, 0, 40000f);
			task_put_ped_directly_into_cover(0, func_381(7, 4), 300, 1, 0.4f, 0, 0, 0, 0, 0, 0);
			task_combat_hated_targets_around_ped(0, 15f, 0, 2);
			task_stay_in_cover(0);
			func_1307(iVar663, 0, -1082130432, -1082130432);
			func_213(vLocal_456[0]);
			func_1754(0, 29);
			break;
		case 29:
			if (func_1777(iVar663, func_381(7, 4), 1) < 2f)
			{
				func_1754(0, 30);
			}
			break;
		case 30:
			func_135(cParam0, 10);
			func_1754(0, 31);
			break;
		case 31:
			break;
		case 32:
			func_1306();
			task_put_ped_directly_into_cover(0, func_381(7, 4), 300, 1, 0.4f, 1, 0, 0, 0, 0, 0);
			task_stay_in_cover(0);
			func_1307(iVar663, 0, -1082130432, -1082130432);
			func_213(vLocal_456[0]);
			func_1754(0, 33);
			break;
		case 33:
			if ((func_1767(vLocal_456[0], 0.1f) && is_ped_in_cover(iVar663, 1, 0)) || func_1767(vLocal_456[0], 1f))
			{
				func_1502(uLocal_230[15], sLocal_173);
				func_213(vLocal_456[0]);
				func_1754(0, 34);
			}
			break;
		case 34:
			if (_0x005e6f28dd7ed58d(&(uLocal_230[15]), sVar1) || !_is_anim_scene_started(&(uLocal_230[15]), false))
			{
				func_1861(iVar663, func_381(7, 6), 1f, 0, 0);
				func_1306();
				task_put_ped_directly_into_cover(0, func_381(7, 6), 5000, 0, 0, 0, 0, 0, 0, 0, 0);
				task_combat_hated_targets_around_ped(0, 15f, 0, 2);
				task_stay_in_cover(0);
				func_1307(iVar663, 1, -1082130432, -1082130432);
				func_1754(0, 35);
			}
			break;
		case 35:
			func_135(cParam0, 10);
			func_1754(0, 36);
			break;
		case 36:
			break;
		case 43:
			remove_ped_defensive_area(iVar663, false);
			func_1306();
			task_follow_waypoint_recording(0, sLocal_154, 0, 10248, -1, 0, 0, -1);
			if (!is_entity_dead(&(Local_14.f_83[0])) && is_vehicle_driveable(&(Local_14.f_83[0]), false, false))
			{
				task_enter_vehicle(0, &(Local_14.f_83[0]), 20000, -1, 2f, 1, 0);
			}
			else
			{
				task_smart_flee_ped(0, Global_35, 9999f, -1, 16640, 3f, 0);
			}
			func_1307(iVar663, 1, -1082130432, -1082130432);
			func_213(vLocal_456[0]);
			func_1754(0, 44);
			break;
		case 44:
			if (func_435(iVar669, 0) && func_1777(iVar663, func_381(6, 11), 1) < 9f)
			{
				if (is_waypoint_playback_going_on_for_ped(iVar663, 0))
				{
					waypoint_playback_override_speed(iVar663, 2f, 0, -1082130432, 0);
					if (!waypoint_playback_get_is_shooting(iVar663))
					{
						waypoint_playback_start_shooting_at_entity(iVar663, iVar669, 0, -957453492, -1082130432);
					}
				}
			}
			else if (is_waypoint_playback_going_on_for_ped(iVar663, 0))
			{
				waypoint_playback_override_speed(iVar663, 3f, 0, -1082130432, 0);
				if (waypoint_playback_get_is_shooting(iVar663))
				{
					waypoint_playback_stop_aiming_or_shooting(iVar663);
				}
			}
			if (func_1269(vLocal_456[0]) > 15f)
			{
				if (func_1777(&(Local_14.f_83[0]), func_381(6, 7), 1) > 5f)
				{
					func_1240(&(Local_14.f_83[0]), func_216(6, 7), 2, 1073741824);
				}
				func_1862(&uLocal_666, Local_14.f_83[0], -1, 1);
				func_1862(&uLocal_667, Local_14.f_83[0], 0, 1);
				func_1754(0, 45);
			}
			if (func_1777(iVar663, func_381(6, 21), 1) < 1.5f || is_ped_in_vehicle(iVar663, &(Local_14.f_83[0]), false))
			{
				func_1754(0, 45);
			}
			break;
		case 45:
			func_412(&iLocal_224, 2097152);
			func_1754(0, 46);
			break;
		case 46:
			break;
	}
	switch (&iLocal_337[1])
	{
		case 0:
			set_ped_config_flag(iVar664, 252, false);
			set_ped_config_flag(iVar664, 345, true);
			set_combat_float(iVar664, 5, 0f);
			set_combat_float(iVar664, 53, 0f);
			set_combat_float(iVar664, 58, 0f);
			set_ped_combat_attributes(iVar664, 119, true);
			_0x12990818c1d35886(iVar664, 0, 1065353216);
			_0x20e54854def6a54a(iVar664, -1413485146);
			func_1754(1, 10);
			break;
		case 10:
			func_1754(1, 11);
			break;
		case 11:
			if (_0x005e6f28dd7ed58d(&(uLocal_230[10]), sVar1) || !_is_anim_scene_started(&(uLocal_230[10]), false))
			{
				func_1861(iVar664, func_381(7, 1), 1f, 0, 0);
				func_1306();
				task_put_ped_directly_into_cover(0, func_381(7, 1), -1, 0, 0, 1, 1, 0, 0, 1, 0);
				task_combat_hated_targets_around_ped(0, 15f, 0, 2);
				task_stay_in_cover(0);
				func_1307(iVar664, 1, -1082130432, -1082130432);
				func_1754(1, 12);
			}
			break;
		case 12:
			func_1754(1, 13);
			break;
		case 13:
			if ((!func_435(&(Local_14.f_59[5]), 0) && func_435(&(Local_14.f_59[4]), 0)) || (!func_435(&(Local_14.f_59[4]), 0) && func_435(&(Local_14.f_59[5]), 0)))
			{
				func_213(vLocal_456[1]);
				func_1754(1, 39);
			}
			break;
		case 39:
			if (func_1269(vLocal_456[1]) > 0.3f)
			{
				clear_ped_tasks(iVar664, 1, 0);
				if (func_435(&(Local_14.f_59[4]), 0))
				{
					_0x1f44b7e283c09ede(iVar664, 75f, 1500);
					task_combat_ped(iVar664, &(Local_14.f_59[4]), 16777216, 0);
					func_1860(&(Local_14.f_59[4]), 1);
					_0x3088634cf8c819cf(&(Local_14.f_59[4]));
				}
				else if (func_435(&(Local_14.f_59[5]), 0))
				{
					_0x1f44b7e283c09ede(iVar664, 75f, 1500);
					task_combat_ped(iVar664, &(Local_14.f_59[5]), 16777216, 0);
					func_1860(&(Local_14.f_59[5]), 1);
					_0x3088634cf8c819cf(&(Local_14.f_59[5]));
				}
				else
				{
					task_combat_hated_targets_around_ped(iVar664, 15f, 0, 2);
				}
				func_1754(1, 40);
			}
			break;
		case 40:
			if (!func_435(&(Local_14.f_59[5]), 0) && !func_435(&(Local_14.f_59[4]), 0))
			{
				set_ped_accuracy(iVar664, 45);
				func_1306();
				task_combat_hated_targets_around_ped(0, 15f, 0, 2);
				task_stay_in_cover(0);
				func_1307(iVar664, 0, -1082130432, -1082130432);
				func_1754(1, 42);
			}
			break;
		case 42:
			break;
		case 14:
			func_1306();
			task_put_ped_directly_into_cover(0, func_381(7, 1), -1, 0, 0, 1, 1, 0, 0, 1, 0);
			task_stay_in_cover(0);
			func_1307(iVar664, 0, -1082130432, -1082130432);
			func_213(vLocal_456[1]);
			func_1754(1, 15);
			break;
		case 15:
			if (func_1269(vLocal_456[1]) > 0.1f)
			{
				if ((is_ped_in_cover(iVar664, 1, 0) && func_1777(iVar663, func_381(7, 0), 1) > 1.2f) || func_1269(vLocal_456[1]) > 6f)
				{
					func_1502(uLocal_230[12], sLocal_170);
					func_1754(1, 16);
				}
			}
			break;
		case 16:
			if (_0x005e6f28dd7ed58d(&(uLocal_230[12]), sVar1) || !_is_anim_scene_started(&(uLocal_230[12]), false))
			{
				func_1861(iVar664, func_381(7, 9), 1f, 1, 0);
				func_1306();
				task_put_ped_directly_into_cover(0, func_381(7, 9), 4000, 0, 0, 0, 0, 0, 0, 0, 0);
				task_combat_hated_targets_around_ped(0, 15f, 0, 2);
				task_stay_in_cover(0);
				func_1307(iVar664, 1, -1082130432, -1082130432);
				func_1754(1, 17);
			}
			break;
		case 17:
			func_1754(1, 18);
			break;
		case 18:
			break;
		case 19:
			func_1306();
			task_put_ped_directly_into_cover(0, func_381(7, 9), -1, 0, 0, 1, 1, 0, 0, 1, 0);
			task_stay_in_cover(0);
			func_1307(iVar664, 0, -1082130432, -1082130432);
			func_213(vLocal_456[1]);
			func_1754(1, 20);
			break;
		case 20:
			if (func_1269(vLocal_456[1]) > 0.2f)
			{
				if ((is_ped_in_cover(iVar664, 1, 0) && func_1777(iVar663, func_381(7, 8), 1) > 1.2f) || func_1269(vLocal_456[1]) > 5f)
				{
					func_1502(uLocal_230[14], sLocal_172);
					func_1754(1, 21);
				}
			}
			break;
		case 21:
			if (_0x005e6f28dd7ed58d(&(uLocal_230[14]), sVar1) || !_is_anim_scene_started(&(uLocal_230[14]), false))
			{
				func_1861(iVar664, func_381(7, 3), 1f, 0, 0);
				func_1306();
				task_put_ped_directly_into_cover(0, func_381(7, 3), 4000, 0, 0, 0, 0, 0, 0, 0, 0);
				task_combat_hated_targets_around_ped(0, 15f, 0, 2);
				task_stay_in_cover(0);
				func_1307(iVar664, 1, -1082130432, -1082130432);
				func_1754(1, 22);
			}
			break;
		case 22:
			func_1754(1, 23);
			break;
		case 23:
			break;
		case 24:
			if (func_1269(vLocal_456[1]) > 0.1f)
			{
				func_1861(iVar664, func_381(7, 11), 1f, 0, 0);
				func_1306();
				task_follow_nav_mesh_to_coord(0, func_381(7, 11), 2f, 20000, 3.5f, 0, 40000f);
				task_put_ped_directly_into_cover(0, func_381(7, 11), 300, 1, 0.4f, 0, 0, 0, 0, 0, 0);
				task_combat_hated_targets_around_ped(0, 15f, 0, 2);
				task_stay_in_cover(0);
				func_1307(iVar664, 0, -1082130432, -1082130432);
				func_1754(1, 25);
			}
			break;
		case 25:
			if (func_1777(iVar664, func_381(7, 10), 1) < 2f)
			{
				func_1754(1, 26);
			}
			break;
		case 26:
			func_1306();
			if (func_435(&(Local_14.f_59[0]), 0))
			{
				task_combat_ped_timed(0, &(Local_14.f_59[3]), 10000, 16777216);
			}
			if (func_435(&(Local_14.f_59[1]), 0))
			{
				task_combat_ped_timed(0, &(Local_14.f_59[1]), 10000, 16777216);
			}
			task_combat_hated_targets_around_ped(0, 15f, 0, 2);
			task_stay_in_cover(0);
			func_1307(iVar664, 0, -1082130432, -1082130432);
			func_1754(1, 27);
			break;
		case 27:
			break;
		case 28:
			if (func_1269(vLocal_456[1]) > 0.1f)
			{
				func_1861(iVar664, func_381(7, 5), 1f, 0, 0);
				func_1306();
				task_follow_nav_mesh_to_coord(0, func_381(7, 5), 2f, 20000, 3.5f, 0, 40000f);
				task_put_ped_directly_into_cover(0, func_381(7, 5), 300, 1, 0.4f, 0, 0, 0, 0, 0, 0);
				task_combat_hated_targets_around_ped(0, 15f, 0, 2);
				task_stay_in_cover(0);
				func_1307(iVar664, 0, -1082130432, -1082130432);
				func_213(vLocal_456[1]);
				func_1754(1, 29);
			}
			break;
		case 29:
			if (func_1777(iVar664, func_381(7, 5), 1) < 2f)
			{
				func_1754(1, 30);
			}
			break;
		case 30:
			func_1754(1, 31);
			break;
		case 31:
			break;
		case 32:
			func_1306();
			task_put_ped_directly_into_cover(0, func_381(7, 5), -1, 0, 0, 1, 1, 0, 0, 1, 0);
			task_stay_in_cover(0);
			func_1307(iVar664, 0, -1082130432, -1082130432);
			func_213(vLocal_456[1]);
			func_1754(1, 33);
			break;
		case 33:
			if (func_1269(vLocal_456[1]) > 0.1f)
			{
				if ((is_ped_in_cover(iVar664, 1, 0) && func_1777(iVar663, func_381(7, 4), 1) > 1.2f) || func_1269(vLocal_456[1]) > 6f)
				{
					func_1502(uLocal_230[16], sLocal_174);
					func_1754(1, 34);
				}
			}
			break;
		case 34:
			if (_0x005e6f28dd7ed58d(&(uLocal_230[16]), sVar1) || !_is_anim_scene_started(&(uLocal_230[16]), false))
			{
				func_1861(iVar664, func_381(7, 7), 1f, 0, 0);
				func_1306();
				task_put_ped_directly_into_cover(0, func_381(7, 7), 4000, 0, 0, 0, 0, 0, 0, 0, 0);
				task_combat_hated_targets_around_ped(0, 15f, 0, 2);
				task_stay_in_cover(0);
				func_1307(iVar664, 1, -1082130432, -1082130432);
				func_1754(1, 35);
			}
			break;
		case 35:
			func_1754(1, 36);
			break;
		case 36:
			break;
		case 43:
			if (func_1269(vLocal_456[1]) > 0.2f)
			{
				remove_ped_defensive_area(iVar664, false);
				func_1306();
				if (!is_entity_dead(&(Local_14.f_83[0])))
				{
					task_follow_nav_mesh_to_coord(0, func_381(6, 34), 3f, 20000, 0.25f, 0, 40000f);
					task_turn_ped_to_face_entity(0, iVar663, -1, -1082130432, -1082130432, -1082130432);
				}
				else
				{
					task_follow_to_offset_of_entity(0, iVar663, 0.5f, -3f, 0f, 2f, -1, 1036831949, 1, 1, 0, 0, 1);
				}
				func_1307(iVar664, 0, -1082130432, -1082130432);
				func_1754(1, 44);
			}
			break;
		case 44:
			if (func_1777(iVar664, func_381(6, 34), 1) < 1.5f)
			{
				func_1754(1, 45);
			}
			break;
		case 45:
			func_1754(1, 46);
			break;
		case 46:
			break;
	}
	return 0;
}

int func_1343(char[4] cParam0)
{
	iLocal_222 = 0;
	while (iLocal_222 < 6)
	{
		if (&uLocal_343[iLocal_222] != 56)
		{
			if (does_entity_exist(&(Local_14.f_59[iLocal_222])) && !func_435(&(Local_14.f_59[iLocal_222]), 0))
			{
				func_1810(uLocal_343[iLocal_222], 56);
			}
		}
		iLocal_222++;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 2)
	{
		if (&uLocal_350[iLocal_222] != 56)
		{
			if (does_entity_exist(&(Local_14.f_68[iLocal_222])) && !func_435(&(Local_14.f_68[iLocal_222]), 0))
			{
				if (is_ped_in_any_vehicle(&(Local_14.f_68[iLocal_222]), false))
				{
					knock_ped_off_vehicle(&(Local_14.f_68[iLocal_222]));
				}
				func_1810(uLocal_350[iLocal_222], 56);
			}
		}
		iLocal_222++;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 2)
	{
		if (&uLocal_353[iLocal_222] != 56)
		{
			if (does_entity_exist(&(Local_14.f_98[iLocal_222])) && !func_435(&(Local_14.f_98[iLocal_222]), 0))
			{
				func_1810(uLocal_353[iLocal_222], 56);
			}
		}
		iLocal_222++;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 2)
	{
		if (&uLocal_356[iLocal_222] != 56)
		{
			if (does_entity_exist(&(Local_14.f_73[iLocal_222])) && !func_435(&(Local_14.f_73[iLocal_222]), 0))
			{
				func_1810(uLocal_356[iLocal_222], 56);
			}
		}
		iLocal_222++;
	}
	if (bLocal_210)
	{
	}
	if (!func_386(iLocal_226, 2) && !bLocal_219)
	{
		if ((func_1339(&(Local_14.f_59), 0) == 0 || (func_386(iLocal_226, 4) && func_1339(&(Local_14.f_98), 0) == 0)) || func_386(iLocal_226, 2048))
		{
			bLocal_219 = true;
			if (func_1863())
			{
				iLocal_222 = 0;
				while (iLocal_222 < 2)
				{
					func_1810(uLocal_350[iLocal_222], 19);
					iLocal_222++;
				}
				func_135(cParam0, 5);
				func_412(&iLocal_226, 2);
			}
		}
	}
	if (!func_386(iLocal_226, 4) && !bLocal_219)
	{
		if (func_1339(&(Local_14.f_59), 0) <= 2)
		{
			bLocal_219 = true;
			if (func_1864())
			{
				iLocal_222 = 0;
				while (iLocal_222 < 2)
				{
					func_1810(uLocal_353[iLocal_222], 19);
					iLocal_222++;
				}
				func_412(&iLocal_226, 4);
			}
		}
	}
	if (!func_386(iLocal_226, 536870912) && !bLocal_219)
	{
		if (func_386(iLocal_226, 64))
		{
			vVar10 = { func_1775(11, 0) };
			vVar10.f_2 = (vVar10.z + 1.5f);
			if (!func_1841(vVar10, 0f, 1f, 0f, 1f))
			{
				bLocal_219 = true;
				if (func_1865())
				{
					iLocal_222 = 0;
					while (iLocal_222 < 2)
					{
						func_1810(uLocal_356[iLocal_222], 19);
						iLocal_222++;
					}
					func_412(&iLocal_226, 536870912);
				}
			}
		}
	}
	if (func_386(iLocal_226, 2) && func_386(iLocal_226, 4))
	{
		if (!func_386(iLocal_226, 33554432))
		{
			if (((func_1859(Local_14.f_57, 0) + func_1859(Local_14.f_66, 0)) + func_1859(Local_14.f_96, 0)) == 1)
			{
				iLocal_222 = 0;
				while (iLocal_222 < 6)
				{
					if (func_435(&(Local_14.f_59[iLocal_222]), 0))
					{
						uLocal_672 = &Local_14.f_59[iLocal_222];
						func_1810(uLocal_343[iLocal_222], 54);
					}
					iLocal_222++;
				}
				iLocal_222 = 0;
				while (iLocal_222 < 2)
				{
					if (func_435(&(Local_14.f_68[iLocal_222]), 0))
					{
						uLocal_672 = &Local_14.f_68[iLocal_222];
						func_213(vLocal_491[iLocal_222]);
						func_1810(uLocal_350[iLocal_222], 54);
					}
					iLocal_222++;
				}
				iLocal_222 = 0;
				while (iLocal_222 < 2)
				{
					if (func_435(&(Local_14.f_73[iLocal_222]), 0))
					{
						uLocal_672 = &Local_14.f_73[iLocal_222];
						func_213(vLocal_505[iLocal_222]);
						func_1810(uLocal_356[iLocal_222], 54);
					}
					iLocal_222++;
				}
				iLocal_222 = 0;
				while (iLocal_222 < 2)
				{
					if (func_435(&(Local_14.f_98[iLocal_222]), 0))
					{
						uLocal_672 = &Local_14.f_98[iLocal_222];
						func_213(vLocal_498[iLocal_222]);
						func_1810(uLocal_353[iLocal_222], 54);
					}
					iLocal_222++;
				}
				func_412(&iLocal_226, 33554432);
			}
		}
	}
	if (!func_386(iLocal_226, 128))
	{
		if (((func_1859(Local_14.f_57, 0) == 0 && func_1859(Local_14.f_66, 0) == 0) && func_1859(Local_14.f_96, 0) == 0) && func_1859(Local_14.f_71, 0) == 0)
		{
			func_412(&iLocal_226, 128);
		}
	}
	iLocal_222 = 0;
	while (iLocal_222 < 6)
	{
		switch (&uLocal_343[iLocal_222])
		{
			case 0:
				vLocal_573 = { func_1866(iLocal_222) };
				if (iLocal_222 == 4)
				{
					func_875(&(Local_14.f_59[iLocal_222]), 2696.442f, -1116.918f, 49.6782f, 97.3316f, 2, 1073741824);
					set_ped_config_flag(&(Local_14.f_59[iLocal_222]), 277, true);
					func_1854(&(Local_14.f_59[iLocal_222]), &(iLocal_696[0]), 0, 0);
				}
				else if (iLocal_222 == 5)
				{
					func_1861(&(Local_14.f_59[iLocal_222]), vLocal_573, 1f, 1, 0);
				}
				else
				{
					func_1861(&(Local_14.f_59[iLocal_222]), vLocal_573, 1f, 0, 0);
				}
				set_ped_relationship_group_hash(&(Local_14.f_59[iLocal_222]), -1996978098);
				set_ped_config_flag(&(Local_14.f_59[iLocal_222]), 143, true);
				request_ped_visibility_tracking(&(Local_14.f_59[iLocal_222]));
				set_combat_float(&(Local_14.f_59[iLocal_222]), 53, 0f);
				set_combat_float(&(Local_14.f_59[iLocal_222]), 58, 0f);
				if (iLocal_222 == 3)
				{
					set_ped_config_flag(&(Local_14.f_59[iLocal_222]), 252, false);
					set_ped_config_flag(&(Local_14.f_59[iLocal_222]), 345, true);
					func_1492(&(Local_14.f_59[iLocal_222]), iVar420, 100, 1, 0, 1056964608, 1065353216, 0);
					set_ped_config_flag(&(Local_14.f_59[iLocal_222]), 249, true);
				}
				iLocal_642[iLocal_222] = _blip_add_for_entity(831283580, &(Local_14.f_59[iLocal_222]));
				_blip_set_modifier(&(iLocal_642[iLocal_222]), -1034486097);
				func_1810(uLocal_343[iLocal_222], 24);
				break;
			case 24:
				if (_is_anim_scene_started(&(uLocal_230[2]), false))
				{
					func_1810(uLocal_343[iLocal_222], 25);
				}
				break;
			case 25:
				if (!_0x3ab6c7b0bb0df4b1(&(Local_14.f_59[iLocal_222]), &(uLocal_230[2])))
				{
					if (iLocal_222 == 4)
					{
						func_1810(uLocal_343[iLocal_222], 42);
					}
					else if (iLocal_222 == 5)
					{
						func_1810(uLocal_343[iLocal_222], 46);
					}
					else
					{
						func_1810(uLocal_343[iLocal_222], 36);
					}
				}
				break;
			case 36:
				func_1306();
				if (iLocal_222 == 3)
				{
					task_follow_nav_mesh_to_coord(0, get_scripted_cover_point_coords(&(iLocal_591[iLocal_222])), 2f, 20000, 2.5f, 0, 40000f);
				}
				task_seek_cover_to_cover_point(0, &(iLocal_591[iLocal_222]), get_entity_coords(iVar663, true, false), -1, 0, 1, 0);
				task_combat_hated_targets_in_area(0, get_entity_coords(&(Local_14.f_59[iLocal_222]), true, false), 200f, 0, 0);
				func_1307(&(Local_14.f_59[iLocal_222]), 1, -1082130432, -1082130432);
				func_1810(uLocal_343[iLocal_222], 37);
				break;
			case 37:
				if (func_1777(&(Local_14.f_59[iLocal_222]), get_scripted_cover_point_coords(&(iLocal_591[iLocal_222])), 1) < 2f)
				{
					func_1810(uLocal_343[iLocal_222], 40);
				}
				break;
			case 42:
				if (func_435(&(Local_14.f_14[0]), 0))
				{
					remove_ped_defensive_area(&(Local_14.f_59[iLocal_222]), false);
					_0x789dabd18e9024db(&(Local_14.f_59[iLocal_222]), 27, 0);
					task_melee(&(Local_14.f_59[iLocal_222]), &(Local_14.f_14[0]), -754963320, 1, 1, 3f, 0, -1082130432);
					func_213(&uLocal_469);
					func_1810(uLocal_343[iLocal_222], 43);
				}
				else
				{
					func_1810(uLocal_343[iLocal_222], 40);
				}
				break;
			case 43:
				if (!_is_anim_scene_started(&(uLocal_230[10]), false))
				{
					if (!_0x0e99e3bf11bb6367(&(Local_14.f_59[iLocal_222])))
					{
						func_1845(&(Local_14.f_14[0]), 0, 0);
						func_1810(uLocal_343[iLocal_222], 40);
					}
					if (is_tracked_ped_visible(&(Local_14.f_59[iLocal_222])))
					{
						func_1810(uLocal_343[iLocal_222], 44);
					}
				}
				break;
			case 44:
				_0xeae3b5b019c8d23f(&(Local_14.f_59[iLocal_222]), 5);
				_0xc48af420371c7407(&(Local_14.f_59[iLocal_222]), 389775169);
				func_213(&uLocal_469);
				func_1810(uLocal_343[iLocal_222], 45);
				break;
			case 45:
				if (!func_435(&(Local_14.f_14[0]), 0))
				{
					set_ped_config_flag(&(Local_14.f_59[iLocal_222]), 277, false);
					func_1810(uLocal_343[iLocal_222], 40);
				}
				break;
			case 46:
				if (!func_435(&(Local_14.f_14[1]), 0))
				{
					func_1810(uLocal_343[iLocal_222], 40);
				}
				else
				{
					_0x1f44b7e283c09ede(&(Local_14.f_59[iLocal_222]), 1f, 2500);
					task_combat_ped(&(Local_14.f_59[iLocal_222]), &(Local_14.f_14[1]), 16777216, 0);
					func_1810(uLocal_343[iLocal_222], 47);
				}
				break;
			case 47:
				if (!func_435(&(Local_14.f_14[1]), 0))
				{
					if (&iLocal_337[0] != 13)
					{
						_0x1f44b7e283c09ede(&(Local_14.f_59[iLocal_222]), 1f, 2500);
					}
					func_1810(uLocal_343[iLocal_222], 40);
				}
				break;
			case 40:
				register_target(&(Local_14.f_59[iLocal_222]), iVar663, 1);
				register_target(&(Local_14.f_59[iLocal_222]), iVar664, 1);
				set_ped_config_flag(&(Local_14.f_59[iLocal_222]), 143, false);
				_0x8b1e8e35a6e814ea(&(Local_14.f_59[iLocal_222]), 2097011006, -1082130432);
				task_combat_hated_targets_in_area(&(Local_14.f_59[iLocal_222]), get_entity_coords(&(Local_14.f_59[iLocal_222]), true, false), 200f, 0, 0);
				if (iLocal_222 == 4)
				{
					func_1854(&(Local_14.f_59[iLocal_222]), &(iLocal_696[0]), 0, 0);
				}
				func_1810(uLocal_343[iLocal_222], 41);
				break;
			case 41:
				if (func_386(iLocal_226, 67108864))
				{
					if (func_1811(&(Local_14.f_59[iLocal_222]), &(iLocal_696[3]), 1, 0))
					{
						uVar0[iLocal_222] = _0xef2e6f870783369b(&(Local_14.f_59[iLocal_222]), 0);
						if (&uVar0[iLocal_222] != &iLocal_696[3])
						{
							set_ped_combat_range(&(Local_14.f_59[iLocal_222]), 1);
							func_1860(&(Local_14.f_59[iLocal_222]), 1);
							func_1854(&(Local_14.f_59[iLocal_222]), &(iLocal_696[3]), 1, 0);
							set_ped_combat_movement(&(Local_14.f_59[iLocal_222]), 2);
						}
					}
				}
				if (!func_386(iLocal_226, 524288))
				{
					if (iLocal_222 == 3 && func_386(iLocal_226, 512))
					{
						func_1861(&(Local_14.f_59[iLocal_222]), get_scripted_cover_point_coords(iVar602), 1f, 0, 0);
						func_412(&iLocal_226, 524288);
					}
				}
				if (iLocal_222 == 2)
				{
					if (!func_386(iLocal_226, 32768) && func_386(iLocal_226, 512))
					{
						func_1810(uLocal_343[iLocal_222], 48);
						func_412(&iLocal_226, 32768);
					}
				}
				if (func_1867(iLocal_222))
				{
					func_1810(uLocal_343[iLocal_222], 52);
				}
				break;
			case 52:
				set_ped_accuracy(&(Local_14.f_59[iLocal_222]), 1);
				set_ped_combat_range(&(Local_14.f_59[iLocal_222]), 3);
				switch (get_random_int_in_range(0, 3))
				{
					case 0:
						vVar7 = { Global_36 + Vector(0f, 5f, 0f) };
						break;
					case 1:
						vVar7 = { Global_36 + Vector(0f, -5f, 0f) };
						break;
					case 2:
						vVar7 = { Global_36 + Vector(5f, 5f, 0f) };
						break;
				}
				func_213(&uLocal_566);
				task_shoot_at_coord(&(Local_14.f_59[iLocal_222]), vVar7, 5000, -687903391, 1);
				func_1810(uLocal_343[iLocal_222], 53);
				break;
			case 53:
				if (!func_1779(&(Local_14.f_59[iLocal_222]), -653332088))
				{
					set_ped_combat_range(&(Local_14.f_59[iLocal_222]), 1);
					set_ped_accuracy(&(Local_14.f_59[iLocal_222]), 15);
					func_1810(uLocal_343[iLocal_222], 40);
					func_213(&uLocal_566);
				}
				break;
			case 48:
				if (func_435(&(Local_14.f_59[3]), 0))
				{
					func_1861(&(Local_14.f_59[iLocal_222]), func_381(8, 6), 1f, 0, 0);
					func_213(&uLocal_466);
				}
				else
				{
					func_1861(&(Local_14.f_59[iLocal_222]), get_scripted_cover_point_coords(iVar602), 1f, 0, 0);
				}
				func_1306();
				if (func_435(&(Local_14.f_59[3]), 0))
				{
					task_seek_cover_to_cover_point(0, iVar601, func_381(7, 2), -1, 0, 1, 0);
				}
				else
				{
					task_go_to_coord_while_aiming_at_entity(0, func_381(8, 0), iVar663, 2f, 1, 1056964608, 1082130432, 1, 0, 0, -687903391, 20000, 0);
					task_seek_cover_to_cover_point(0, iVar602, func_381(7, 2), -1, 0, 1, 0);
				}
				task_combat_hated_targets_around_ped(0, 200f, 0, 0);
				func_1307(&(Local_14.f_59[iLocal_222]), 0, -1082130432, -1082130432);
				func_1810(uLocal_343[iLocal_222], 49);
				break;
			case 49:
				if (func_1269(&uLocal_466) > 10f)
				{
					if (func_386(iLocal_226, 67108864))
					{
						uVar0[iLocal_222] = _0xef2e6f870783369b(&(Local_14.f_59[iLocal_222]), 0);
						if (&uVar0[iLocal_222] != &iLocal_696[3])
						{
							set_ped_combat_range(&(Local_14.f_59[iLocal_222]), 1);
							func_1860(&(Local_14.f_59[iLocal_222]), 1);
							func_1854(&(Local_14.f_59[iLocal_222]), &(iLocal_696[3]), 1, 0);
							set_ped_combat_movement(&(Local_14.f_59[iLocal_222]), 2);
						}
					}
				}
				break;
			case 54:
				if (func_1269(vLocal_472[iLocal_222]) > 1f)
				{
					if (func_1338())
					{
						func_145(cParam0, &(Local_14.f_59[iLocal_222]), "ODR_PED1", 0);
						func_1256(cParam0, "ODR5_G1FLEE", 1, 0, 0);
					}
					else
					{
						func_145(cParam0, &(Local_14.f_59[iLocal_222]), "ODR_PED2", 0);
						func_1256(cParam0, "ODR5_G2FLEE", 1, 0, 0);
					}
					func_1860(&(Local_14.f_59[iLocal_222]), 1);
					_blip_set_modifier(&(iLocal_642[iLocal_222]), -1269631044);
					remove_ped_defensive_area(&(Local_14.f_59[iLocal_222]), false);
					func_1306();
					task_follow_nav_mesh_to_coord(0, func_381(6, 23), 2f, 20000, 8f, 0, 40000f);
					task_smart_flee_ped(0, iVar663, 9999f, -1, 0, 3f, 0);
					func_1307(&(Local_14.f_59[iLocal_222]), 1, -1082130432, -1082130432);
					func_1810(uLocal_343[iLocal_222], 55);
				}
				break;
			case 55:
				break;
		}
		iLocal_222++;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 2)
	{
		switch (&uLocal_350[iLocal_222])
		{
			case 0:
				func_1810(uLocal_350[iLocal_222], 18);
				break;
			case 18:
				break;
			case 19:
				set_entity_visible(&(Local_14.f_68[iLocal_222]), true);
				vLocal_573 = { func_1868(iLocal_222) };
				func_1861(&(Local_14.f_68[iLocal_222]), vLocal_573, 1f, 0, 0);
				set_ped_relationship_group_hash(&(Local_14.f_68[iLocal_222]), -1996978098);
				set_ped_config_flag(&(Local_14.f_68[iLocal_222]), 143, true);
				set_ped_config_flag(&(Local_14.f_68[iLocal_222]), 22, true);
				request_ped_visibility_tracking(&(Local_14.f_68[iLocal_222]));
				set_combat_float(&(Local_14.f_68[iLocal_222]), 53, 0f);
				set_combat_float(&(Local_14.f_68[iLocal_222]), 58, 0f);
				set_ped_can_be_knocked_off_vehicle(&(Local_14.f_68[iLocal_222]), 2);
				set_ped_combat_attributes(&(Local_14.f_68[iLocal_222]), 0, false);
				iLocal_649[iLocal_222] = _blip_add_for_entity(831283580, &(Local_14.f_68[iLocal_222]));
				_blip_set_modifier(&(iLocal_649[iLocal_222]), -1034486097);
				if (iLocal_222 == 0)
				{
					func_1810(uLocal_350[iLocal_222], 30);
				}
				else
				{
					func_1810(uLocal_350[iLocal_222], 32);
				}
				break;
			case 30:
				if (!is_entity_dead(&(Local_14.f_83[0])))
				{
					if (iLocal_222 == 0)
					{
						func_1862(Local_14.f_68[0], Local_14.f_83[0], -1, 1);
						func_1306();
						task_vehicle_follow_waypoint_recording(0, &(Local_14.f_83[0]), sLocal_151, 0, 0, 0, -1, -1082130432, 0, 1073741824, 0);
						func_1307(&(Local_14.f_68[iLocal_222]), 1, -1082130432, -1082130432);
					}
					func_213(vLocal_491[iLocal_222]);
					func_1810(uLocal_350[iLocal_222], 31);
				}
				else
				{
					func_1810(uLocal_350[iLocal_222], 36);
				}
				break;
			case 31:
				if (is_entity_dead(&(Local_14.f_83[0])) || is_entity_in_volume(&(Local_14.f_83[0]), &(iLocal_673[18]), true, 0))
				{
					func_412(&iLocal_226, 32);
					func_1810(uLocal_350[iLocal_222], 34);
				}
				break;
			case 32:
				func_1810(uLocal_350[iLocal_222], 33);
				break;
			case 33:
				if (!func_1869(&(Local_14.f_68[iLocal_222]), &(Local_14.f_83[0]), 0))
				{
					func_1862(Local_14.f_68[iLocal_222], Local_14.f_83[0], func_1870(iLocal_222), 1);
				}
				if (func_386(iLocal_226, 32) || (!func_435(&(Local_14.f_68[0]), 0) && (is_entity_dead(&(Local_14.f_83[0])) || is_entity_in_volume(&(Local_14.f_83[0]), &(iLocal_673[18]), true, 0))))
				{
					func_1810(uLocal_350[iLocal_222], 34);
				}
				break;
			case 34:
				task_leave_any_vehicle(&(Local_14.f_68[iLocal_222]), 0, 64);
				func_1810(uLocal_350[iLocal_222], 35);
				break;
			case 35:
				if (!is_ped_in_any_vehicle(&(Local_14.f_68[iLocal_222]), false))
				{
					func_1810(uLocal_350[iLocal_222], 36);
				}
				break;
			case 36:
				set_ped_config_flag(&(Local_14.f_68[iLocal_222]), 143, false);
				task_combat_hated_targets_around_ped(&(Local_14.f_68[iLocal_222]), 200f, 0, 0);
				func_1810(uLocal_350[iLocal_222], 37);
				break;
			case 37:
				vLocal_573 = { func_1868(iLocal_222) };
				if (func_1777(&(Local_14.f_68[iLocal_222]), vLocal_573, 1) < 2f)
				{
					func_1810(uLocal_350[iLocal_222], 40);
				}
				break;
			case 40:
				register_target(&(Local_14.f_68[iLocal_222]), iVar663, 1);
				register_target(&(Local_14.f_68[iLocal_222]), iVar664, 1);
				task_combat_hated_targets_around_ped(&(Local_14.f_68[iLocal_222]), 200f, 0, 0);
				func_1810(uLocal_350[iLocal_222], 41);
				break;
			case 54:
				if (func_1269(vLocal_491[iLocal_222]) > 1f)
				{
					if (func_1338())
					{
						func_145(cParam0, &(Local_14.f_68[iLocal_222]), "ODR_PED1", 0);
						func_1256(cParam0, "ODR5_G1FLEE", 1, 0, 0);
					}
					else
					{
						func_145(cParam0, &(Local_14.f_68[iLocal_222]), "ODR_PED2", 0);
						func_1256(cParam0, "ODR5_G2FLEE", 1, 0, 0);
					}
					func_1860(&(Local_14.f_68[iLocal_222]), 1);
					_blip_set_modifier(&(iLocal_649[iLocal_222]), -1269631044);
					remove_ped_defensive_area(&(Local_14.f_68[iLocal_222]), false);
					func_1306();
					if (is_ped_in_any_vehicle(&(Local_14.f_68[iLocal_222]), false))
					{
						task_leave_any_vehicle(0, 0, 0);
					}
					task_follow_nav_mesh_to_coord(0, func_381(6, 23), 2f, 20000, 8f, 0, 40000f);
					task_smart_flee_ped(0, iVar663, 9999f, -1, 0, 3f, 0);
					func_1307(&(Local_14.f_68[iLocal_222]), 1, -1082130432, -1082130432);
					func_1810(uLocal_350[iLocal_222], 55);
				}
				break;
		}
		iLocal_222++;
	}
	if (!is_entity_dead(&(Local_14.f_83[0])) && is_entity_in_volume(&(Local_14.f_83[0]), &(iLocal_673[18]), true, 0))
	{
		bring_vehicle_to_halt(&(Local_14.f_83[0]), 15f, -1, false);
	}
	iLocal_222 = 0;
	while (iLocal_222 < 2)
	{
		switch (&uLocal_353[iLocal_222])
		{
			case 0:
				func_1810(uLocal_353[iLocal_222], 18);
				break;
			case 18:
				break;
			case 19:
				vLocal_573 = { func_1871(iLocal_222) };
				if (iLocal_222 == 1 || func_435(&(Local_14.f_59[0]), 0))
				{
					func_1861(&(Local_14.f_98[iLocal_222]), vLocal_573, 0.75f, 0, 0);
				}
				else
				{
					func_1861(&(Local_14.f_98[iLocal_222]), func_381(8, 5), 0.75f, 0, 0);
				}
				if (iLocal_222 == 1)
				{
					func_1860(&(Local_14.f_98[iLocal_222]), 1);
				}
				func_1492(&(Local_14.f_98[iLocal_222]), 379542007, -1, 1, 0, 1056964608, 1065353216, 0);
				set_ped_relationship_group_hash(&(Local_14.f_98[iLocal_222]), -1996978098);
				set_ped_config_flag(&(Local_14.f_98[iLocal_222]), 143, true);
				set_ped_config_flag(&(Local_14.f_98[iLocal_222]), 249, false);
				request_ped_visibility_tracking(&(Local_14.f_98[iLocal_222]));
				set_combat_float(&(Local_14.f_98[iLocal_222]), 53, 0f);
				set_combat_float(&(Local_14.f_98[iLocal_222]), 58, 0f);
				iLocal_652[iLocal_222] = _blip_add_for_entity(831283580, &(Local_14.f_98[iLocal_222]));
				_blip_set_modifier(&(iLocal_652[iLocal_222]), -1034486097);
				func_213(vLocal_498[iLocal_222]);
				func_1810(uLocal_353[iLocal_222], 36);
				break;
			case 36:
				vLocal_573 = { func_1871(iLocal_222) };
				func_1306();
				if (iLocal_222 == 1)
				{
					task_stand_still(0, 4500);
					task_follow_nav_mesh_to_coord(0, func_381(8, 7), 2f, 20000, 3f, 0, 40000f);
				}
				else if (func_435(&(Local_14.f_59[0]), 0))
				{
					task_go_to_coord_while_aiming_at_coord(0, func_381(8, 8), func_381(7, 6), 3f, 0, 5f, 1082130432, 1, 0, 0, -687903391, 0);
				}
				else
				{
					task_go_to_coord_while_aiming_at_coord(0, func_381(8, 5), func_381(7, 6), 3f, 0, 5f, 1082130432, 1, 0, 0, -687903391, 0);
					func_412(&iLocal_226, 1073741824);
				}
				task_combat_hated_targets_around_ped(0, 200f, 0, 0);
				func_1307(&(Local_14.f_98[iLocal_222]), 1, -1082130432, -1082130432);
				func_1810(uLocal_353[iLocal_222], 37);
				break;
			case 37:
				vLocal_573 = { func_1871(iLocal_222) };
				if (func_1777(&(Local_14.f_98[iLocal_222]), vLocal_573, 1) < 4f)
				{
					func_1810(uLocal_353[iLocal_222], 40);
				}
				break;
			case 40:
				if (!func_1779(&(Local_14.f_98[iLocal_222]), -1442466670))
				{
					task_combat_hated_targets_around_ped(&(Local_14.f_98[iLocal_222]), 200f, 0, 0);
				}
				register_target(&(Local_14.f_98[iLocal_222]), iVar663, 1);
				register_target(&(Local_14.f_98[iLocal_222]), iVar664, 1);
				set_ped_config_flag(&(Local_14.f_98[iLocal_222]), 143, false);
				func_213(vLocal_498[iLocal_222]);
				func_1810(uLocal_353[iLocal_222], 41);
				break;
			case 41:
				if (func_1872(iLocal_222))
				{
					func_1810(uLocal_353[iLocal_222], 52);
				}
				break;
			case 52:
				set_ped_accuracy(&(Local_14.f_98[iLocal_222]), 1);
				set_ped_combat_range(&(Local_14.f_98[iLocal_222]), 3);
				switch (get_random_int_in_range(0, 3))
				{
					case 0:
						vVar7 = { Global_36 + Vector(0f, 5f, 0f) };
						break;
					case 1:
						vVar7 = { Global_36 + Vector(0f, -5f, 0f) };
						break;
					case 2:
						vVar7 = { Global_36 + Vector(5f, 5f, 0f) };
						break;
				}
				func_213(&uLocal_566);
				task_shoot_at_coord(&(Local_14.f_98[iLocal_222]), vVar7, 5000, -687903391, 1);
				func_1810(uLocal_353[iLocal_222], 53);
				break;
			case 53:
				if (!func_1779(&(Local_14.f_98[iLocal_222]), -653332088))
				{
					set_ped_combat_range(&(Local_14.f_98[iLocal_222]), 1);
					set_ped_accuracy(&(Local_14.f_98[iLocal_222]), 15);
					func_1810(uLocal_353[iLocal_222], 40);
					func_213(&uLocal_566);
				}
				break;
			case 54:
				if (func_1269(vLocal_498[iLocal_222]) > 1f)
				{
					if (func_1338())
					{
						func_145(cParam0, &(Local_14.f_98[iLocal_222]), "ODR_PED1", 0);
						func_1256(cParam0, "ODR5_G1FLEE", 1, 0, 0);
					}
					else
					{
						func_145(cParam0, &(Local_14.f_98[iLocal_222]), "ODR_PED2", 0);
						func_1256(cParam0, "ODR5_G2FLEE", 1, 0, 0);
					}
					func_1860(&(Local_14.f_98[iLocal_222]), 1);
					_blip_set_modifier(&(iLocal_652[iLocal_222]), -1269631044);
					remove_ped_defensive_area(&(Local_14.f_98[iLocal_222]), false);
					func_1306();
					task_follow_nav_mesh_to_coord(0, func_381(6, 23), 2f, 20000, 8f, 0, 40000f);
					task_smart_flee_ped(0, iVar663, 9999f, -1, 0, 3f, 0);
					func_1307(&(Local_14.f_98[iLocal_222]), 1, -1082130432, -1082130432);
					func_1810(uLocal_353[iLocal_222], 55);
				}
				break;
			case 55:
				break;
		}
		iLocal_222++;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 2)
	{
		switch (&uLocal_356[iLocal_222])
		{
			case 0:
				func_1810(uLocal_356[iLocal_222], 18);
				break;
			case 19:
				vLocal_573 = { func_1873(iLocal_222) };
				func_1861(&(Local_14.f_73[iLocal_222]), vLocal_573, 1f, 1, 0);
				func_1492(&(Local_14.f_73[iLocal_222]), 379542007, -1, 1, 0, 1056964608, 1065353216, 0);
				set_ped_relationship_group_hash(&(Local_14.f_73[iLocal_222]), -1996978098);
				set_ped_config_flag(&(Local_14.f_73[iLocal_222]), 143, true);
				set_ped_config_flag(&(Local_14.f_73[iLocal_222]), 249, false);
				request_ped_visibility_tracking(&(Local_14.f_73[iLocal_222]));
				func_1860(&(Local_14.f_73[iLocal_222]), 1);
				set_entity_only_damaged_by_player(&(Local_14.f_73[iLocal_222]), true);
				set_ped_accuracy(&(Local_14.f_73[iLocal_222]), 75);
				set_combat_float(&(Local_14.f_73[iLocal_222]), 53, 0f);
				set_combat_float(&(Local_14.f_73[iLocal_222]), 58, 0f);
				iLocal_655[iLocal_222] = _blip_add_for_entity(831283580, &(Local_14.f_73[iLocal_222]));
				_blip_set_modifier(&(iLocal_655[iLocal_222]), -1034486097);
				func_213(vLocal_505[iLocal_222]);
				func_1810(uLocal_356[iLocal_222], 50);
				Jump @6825; //curOff = 6473
				if (func_435(&(Local_14.f_78[iLocal_222]), 0))
				{
					task_combat_ped(&(Local_14.f_73[iLocal_222]), &(Local_14.f_78[iLocal_222]), 0, 0);
				}
				func_1810(uLocal_356[iLocal_222], 51);
				Jump @6825; //curOff = 6527
				if (!func_435(&(Local_14.f_78[iLocal_222]), 0))
				{
					set_ped_accuracy(&(Local_14.f_73[iLocal_222]), 15);
					func_1810(uLocal_356[iLocal_222], 40);
				}
				Jump @6825; //curOff = 6574
				register_target(&(Local_14.f_73[iLocal_222]), iVar663, 1);
				register_target(&(Local_14.f_73[iLocal_222]), iVar664, 1);
				task_combat_hated_targets_around_ped(&(Local_14.f_73[iLocal_222]), 200f, 0, 0);
				set_ped_config_flag(&(Local_14.f_73[iLocal_222]), 143, false);
				func_213(vLocal_505[iLocal_222]);
				func_1810(uLocal_356[iLocal_222], 41);
				func_1860(&(Local_14.f_73[iLocal_222]), 1);
				set_entity_only_damaged_by_player(&(Local_14.f_73[iLocal_222]), false);
				Jump @6825; //curOff = 6693
				Jump @6825; //curOff = 6696
				if (func_1269(vLocal_505[iLocal_222]) > 2f)
				{
					func_1860(&(Local_14.f_73[iLocal_222]), 1);
					_blip_set_modifier(&(iLocal_655[iLocal_222]), -1269631044);
					remove_ped_defensive_area(&(Local_14.f_73[iLocal_222]), false);
					func_1306();
					task_smart_flee_ped(0, iVar663, 9999f, -1, 0, 3f, 0);
					func_1307(&(Local_14.f_73[iLocal_222]), 1, -1082130432, -1082130432);
					func_1810(uLocal_356[iLocal_222], 55);
				}
				iLocal_222++;
			}
			return 0;
		}

int func_1344()
{
	if (bLocal_211)
	{
	}
	if (!func_386(iLocal_226, 8) && !bLocal_219)
	{
		if (func_386(iLocal_226, 67108864) || func_1339(&(Local_14.f_59), 0) <= 1)
		{
			bLocal_219 = true;
			if (func_1482())
			{
				iLocal_222 = 0;
				while (iLocal_222 < 2)
				{
					func_1850(uLocal_401[iLocal_222], 2);
					iLocal_222++;
				}
				func_412(&iLocal_226, 8);
			}
		}
	}
	if (!func_386(iLocal_226, 16) && !bLocal_219)
	{
		if (((func_386(iLocal_226, 8) && func_1339(&(Local_14.f_78), 0) == 0) && (!func_435(&(Local_14.f_73[0]), 0) || !_0xc8ccdb712fbcba92(&(Local_14.f_73[0])))) && (!func_435(&(Local_14.f_73[1]), 0) || !_0xc8ccdb712fbcba92(&(Local_14.f_73[1]))))
		{
			bLocal_219 = true;
			if (func_1874())
			{
				iLocal_222 = 0;
				while (iLocal_222 < 2)
				{
					func_1850(uLocal_404[iLocal_222], 0);
					iLocal_222++;
				}
				func_412(&iLocal_226, 16);
			}
		}
	}
	if (func_386(iLocal_226, 128) && !func_386(iLocal_226, 1048576))
	{
		func_1327(23);
		func_412(&iLocal_226, 1048576);
	}
	iLocal_222 = 0;
	while (iLocal_222 < 3)
	{
		if (&uLocal_397[iLocal_222] != 28)
		{
			if (does_entity_exist(&(Local_14.f_14[iLocal_222])) && !func_435(&(Local_14.f_14[iLocal_222]), 0))
			{
				func_1850(uLocal_397[iLocal_222], 28);
			}
		}
		iLocal_222++;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 2)
	{
		if (&uLocal_401[iLocal_222] != 28)
		{
			if (does_entity_exist(&(Local_14.f_78[iLocal_222])) && !func_435(&(Local_14.f_78[iLocal_222]), 0))
			{
				func_1850(uLocal_401[iLocal_222], 28);
			}
		}
		iLocal_222++;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 2)
	{
		if (&uLocal_404[iLocal_222] != 28)
		{
			if (does_entity_exist(&(Local_14.f_54[iLocal_222])) && !func_435(&(Local_14.f_54[iLocal_222]), 0))
			{
				func_1850(uLocal_404[iLocal_222], 28);
			}
		}
		iLocal_222++;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 3)
	{
		switch (&uLocal_397[iLocal_222])
		{
			case 0:
				if (iLocal_222 == 0)
				{
					vLocal_573 = { func_216(6, 31) };
					func_875(&(Local_14.f_14[iLocal_222]), 2691.533f, -1117.238f, 49.6782f, 259.8285f, 2, 1073741824);
					set_ped_config_flag(&(Local_14.f_14[iLocal_222]), 277, true);
					_0xb8de69d9473b7593(&(Local_14.f_14[iLocal_222]), 8);
					_0xb8de69d9473b7593(&(Local_14.f_14[iLocal_222]), 10);
					_0xb8de69d9473b7593(&(Local_14.f_14[iLocal_222]), 11);
					set_blocking_of_non_temporary_events(&(Local_14.f_14[iLocal_222]), true);
					func_1850(uLocal_397[iLocal_222], 19);
				}
				else
				{
					vLocal_573 = { func_1875(iLocal_222) };
					func_1861(&(Local_14.f_14[iLocal_222]), vLocal_573, 1f, 0, 0);
					set_ped_relationship_group_hash(&(Local_14.f_14[iLocal_222]), 707888648);
					set_ped_combat_attributes(&(Local_14.f_14[iLocal_222]), 22, false);
					set_combat_float(&(Local_14.f_14[iLocal_222]), 40, 0f);
					func_1492(&(Local_14.f_14[iLocal_222]), 379542007, -1, 1, 0, 1056964608, 1065353216, 0);
					set_ped_infinite_ammo(&(Local_14.f_14[iLocal_222]), true, 379542007);
					iLocal_658[iLocal_222] = _blip_add_for_entity(-1595050198, &(Local_14.f_14[iLocal_222]));
					if (iLocal_222 == 1)
					{
						func_1850(uLocal_397[iLocal_222], 15);
						func_1860(&(Local_14.f_14[iLocal_222]), 1);
						_0xc2266aa617668ad3(&(Local_14.f_14[iLocal_222]), 2f);
						set_entity_only_damaged_by_player(&(Local_14.f_14[iLocal_222]), false);
					}
					else
					{
						func_1850(uLocal_397[iLocal_222], 3);
					}
				}
				break;
			case 19:
				task_aim_at_entity(&(Local_14.f_14[iLocal_222]), &(Local_14.f_59[4]), -1, 0, 0);
				func_1850(uLocal_397[iLocal_222], 20);
				break;
			case 3:
				if (_is_anim_scene_started(&(uLocal_230[2]), false))
				{
					func_1850(uLocal_397[iLocal_222], 4);
				}
				break;
			case 4:
				if (!_0x3ab6c7b0bb0df4b1(&(Local_14.f_14[iLocal_222]), &(uLocal_230[2])))
				{
					if (iLocal_222 == 2)
					{
						func_1240(&(Local_14.f_14[iLocal_222]), func_216(6, 24), 2, 1073741824);
						func_1845(&(Local_14.f_14[iLocal_222]), 0, 0);
					}
					else
					{
						func_1850(uLocal_397[iLocal_222], 15);
					}
				}
				break;
			case 15:
				func_1306();
				task_follow_nav_mesh_to_coord(0, get_scripted_cover_point_coords(&(iLocal_606[iLocal_222])), 2f, 20000, 2.5f, 0, 40000f);
				task_seek_cover_to_cover_point(0, &(iLocal_606[iLocal_222]), get_entity_coords(iVar664, true, false), -1, 0, 1, 0);
				task_combat_hated_targets_around_ped(0, 200f, 0, 0);
				func_1307(&(Local_14.f_14[iLocal_222]), 1, -1082130432, -1082130432);
				func_213(vLocal_512[iLocal_222]);
				func_1850(uLocal_397[iLocal_222], 16);
				break;
			case 16:
				if (func_1777(&(Local_14.f_14[iLocal_222]), get_scripted_cover_point_coords(&(iLocal_606[iLocal_222])), 1) < 2f)
				{
					func_1850(uLocal_397[iLocal_222], 17);
				}
				break;
			case 17:
				task_combat_hated_targets_around_ped(&(Local_14.f_14[iLocal_222]), 200f, 0, 0);
				func_213(vLocal_512[iLocal_222]);
				if (iLocal_222 == 1)
				{
					fLocal_194[iLocal_222] = 13f;
				}
				else
				{
					fLocal_194[iLocal_222] = get_random_float_in_range(7.5f, 15f);
				}
				func_1850(uLocal_397[iLocal_222], 18);
				break;
			case 18:
				if (iLocal_222 == 0)
				{
					if (!func_435(&(Local_14.f_59[4]), 0))
					{
						func_1845(&(Local_14.f_14[iLocal_222]), 0, 0);
					}
				}
				if (!is_ped_in_combat(&(Local_14.f_14[iLocal_222]), 0))
				{
					func_1850(uLocal_397[iLocal_222], 17);
				}
				if (func_1316(vLocal_512[iLocal_222], &(fLocal_194[iLocal_222])))
				{
					func_1845(&(Local_14.f_14[iLocal_222]), 0, 0);
				}
				break;
		}
		iLocal_222++;
	}
	if (func_386(iLocal_226, 8))
	{
		iLocal_222 = 0;
		while (iLocal_222 < 2)
		{
			switch (&uLocal_401[iLocal_222])
			{
				case 0:
					func_1850(uLocal_401[iLocal_222], 1);
					break;
				case 1:
					break;
				case 2:
					if (!func_26(vLocal_522[iLocal_222]))
					{
						func_213(vLocal_522[iLocal_222]);
					}
					if (func_1269(vLocal_522[iLocal_222]) > 1f)
					{
						set_entity_visible(&(Local_14.f_78[iLocal_222]), true);
						set_entity_invincible(&(Local_14.f_78[iLocal_222]), false);
						freeze_entity_position(&(Local_14.f_78[iLocal_222]), false);
						vLocal_573 = { func_1876(iLocal_222) };
						if (iLocal_222 == 0)
						{
							func_1854(&(Local_14.f_78[iLocal_222]), &(iLocal_696[2]), 0, 0);
						}
						else
						{
							func_1861(&(Local_14.f_78[iLocal_222]), vLocal_573, 1f, 1, 0);
						}
						set_ped_relationship_group_hash(&(Local_14.f_78[iLocal_222]), 707888648);
						set_ped_combat_attributes(&(Local_14.f_78[iLocal_222]), 22, false);
						set_combat_float(&(Local_14.f_78[iLocal_222]), 40, 0f);
						_0x8b1e8e35a6e814ea(&(Local_14.f_78[iLocal_222]), 2097011006, -1082130432);
						func_1492(&(Local_14.f_78[iLocal_222]), -183018591, -1, 1, 0, 1056964608, 1065353216, 0);
						set_ped_config_flag(&(Local_14.f_78[iLocal_222]), 249, false);
						request_ped_visibility_tracking(&(Local_14.f_78[iLocal_222]));
						func_213(vLocal_522[iLocal_222]);
						iLocal_662[iLocal_222] = _blip_add_for_entity(-1595050198, &(Local_14.f_78[iLocal_222]));
						if (iLocal_222 == 0)
						{
							_play_sound_from_position(sLocal_182, func_1775(10, 0), "MOB2_SOUNDSET", false, 0, true, 0);
						}
						func_1850(uLocal_401[iLocal_222], 15);
					}
					break;
				case 15:
					func_1306();
					task_go_to_coord_while_aiming_at_coord(0, get_scripted_cover_point_coords(&(iLocal_610[iLocal_222])), func_381(8, 0), 2f, 1, 3f, 1082130432, 1, 0, 0, -687903391, 0);
					task_combat_hated_targets_around_ped(0, 200f, 0, 0);
					func_1307(&(Local_14.f_78[iLocal_222]), 1, -1082130432, -1082130432);
					func_1850(uLocal_401[iLocal_222], 16);
					break;
				case 16:
					if (func_1777(&(Local_14.f_78[iLocal_222]), get_scripted_cover_point_coords(&(iLocal_610[iLocal_222])), 1) < 2f)
					{
						func_1850(uLocal_401[iLocal_222], 17);
					}
					break;
				case 17:
					fLocal_198[iLocal_222] = get_random_float_in_range(10f, 12.5f);
					func_213(vLocal_522[iLocal_222]);
					request_ped_visibility_tracking(&(Local_14.f_78[iLocal_222]));
					func_1850(uLocal_401[iLocal_222], 18);
					break;
				case 18:
					if (!func_386(iLocal_226, 64))
					{
						bVar6 = is_tracked_ped_visible(&(Local_14.f_78[iLocal_222]));
						if (bVar6)
						{
							bVar6 = (bVar6 && func_1841(get_entity_coords(&(Local_14.f_78[iLocal_222]), true, false), 1050253722, 1060320051, 0, 1061158912));
						}
						if (bVar6)
						{
							func_1850(uLocal_401[iLocal_222], 21);
							func_412(&iLocal_226, 64);
						}
					}
					else
					{
						func_1850(uLocal_401[iLocal_222], 21);
					}
					if (func_1269(vLocal_522[iLocal_222]) > &fLocal_198[iLocal_222])
					{
						uVar0[iLocal_222] = _0xef2e6f870783369b(&(Local_14.f_78[iLocal_222]), 0);
						if (&uVar0[iLocal_222] != &iLocal_696[4])
						{
							set_ped_combat_range(&(Local_14.f_78[iLocal_222]), 1);
							func_1854(&(Local_14.f_78[iLocal_222]), &(iLocal_696[4]), 1, 0);
							set_ped_combat_movement(&(Local_14.f_78[iLocal_222]), 2);
						}
					}
					break;
				case 21:
					_0x3088634cf8c819cf(&(Local_14.f_78[iLocal_222]));
					func_1860(&(Local_14.f_78[iLocal_222]), 1);
					set_entity_only_damaged_by_player(&(Local_14.f_78[iLocal_222]), false);
					func_1850(uLocal_401[iLocal_222], 22);
					break;
				case 22:
					break;
				case 23:
					if (func_1338())
					{
						func_1850(uLocal_401[iLocal_222], 24);
					}
					else
					{
						func_1850(uLocal_401[iLocal_222], 26);
					}
					break;
				case 24:
					func_1306();
					if (!is_ped_in_cover(&(Local_14.f_78[iLocal_222]), 0, 0))
					{
						task_go_to_coord_while_aiming_at_coord(0, get_scripted_cover_point_coords(&(iLocal_610[iLocal_222])), func_381(8, 0), 2f, 0, 2f, 1082130432, 1, 0, 0, -687903391, 0);
						task_put_ped_directly_into_cover(0, get_scripted_cover_point_coords(&(iLocal_610[iLocal_222])), -1, 0, 0.125f, 0, 0, &(iLocal_610[iLocal_222]), 1, 0, 0);
					}
					task_stay_in_cover(0);
					func_1307(&(Local_14.f_78[iLocal_222]), 1, -1082130432, -1082130432);
					func_1850(uLocal_401[iLocal_222], 25);
					break;
				case 25:
					break;
				case 26:
					func_1306();
					task_go_to_coord_while_aiming_at_entity(0, func_1877(&(iLocal_673[21]), 100, 0, 1), iVar664, 1f, 0, 2f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
					task_aim_gun_at_entity(0, iVar664, -1, 0, 1);
					func_1307(&(Local_14.f_78[iLocal_222]), 1, -1082130432, -1082130432);
					func_1850(uLocal_401[iLocal_222], 27);
					break;
				case 27:
					break;
				case 28:
					if (_0x5102307ce88798eb(&(Local_14.f_78[iLocal_222])))
					{
						_0x3088634cf8c819cf(&(Local_14.f_78[iLocal_222]));
					}
					break;
			}
			iLocal_222++;
		}
	}
	if (func_386(iLocal_226, 16))
	{
		iLocal_222 = 0;
		while (iLocal_222 < 2)
		{
			switch (&uLocal_404[iLocal_222])
			{
				case 0:
					func_1850(uLocal_404[iLocal_222], 1);
					if (!func_26(vLocal_529[iLocal_222]))
					{
						func_213(vLocal_529[iLocal_222]);
					}
					break;
				case 1:
					if (!func_1841(func_381(9, 3), 0.2f, 0.8f, 0f, 1f) || func_1269(vLocal_529[iLocal_222]) > 4f)
					{
						func_1850(uLocal_404[iLocal_222], 2);
						func_553(vLocal_529[iLocal_222]);
					}
					break;
				case 2:
					if (!func_26(vLocal_529[iLocal_222]))
					{
						func_213(vLocal_529[iLocal_222]);
					}
					if (func_214(vLocal_529[iLocal_222]) > func_1878(iLocal_222))
					{
						set_entity_visible(&(Local_14.f_54[iLocal_222]), true);
						set_entity_invincible(&(Local_14.f_54[iLocal_222]), false);
						freeze_entity_position(&(Local_14.f_54[iLocal_222]), false);
						vLocal_573 = { func_1879(iLocal_222) };
						func_1861(&(Local_14.f_54[iLocal_222]), vLocal_573, 1f, 1, 0);
						set_ped_relationship_group_hash(&(Local_14.f_54[iLocal_222]), 707888648);
						set_ped_combat_attributes(&(Local_14.f_54[iLocal_222]), 22, false);
						set_combat_float(&(Local_14.f_54[iLocal_222]), 40, 0f);
						_0x8b1e8e35a6e814ea(&(Local_14.f_54[iLocal_222]), 2097011006, -1082130432);
						func_1492(&(Local_14.f_54[iLocal_222]), -183018591, -1, 1, 0, 1056964608, 1065353216, 0);
						set_ped_config_flag(&(Local_14.f_54[iLocal_222]), 249, false);
						set_ped_config_flag(&(Local_14.f_54[iLocal_222]), 252, false);
						request_ped_visibility_tracking(&(Local_14.f_54[iLocal_222]));
						func_213(vLocal_529[iLocal_222]);
						_blip_add_for_entity(-1595050198, &(Local_14.f_54[iLocal_222]));
						if (iLocal_222 == 0)
						{
							_play_sound_from_position(sLocal_182, func_1775(15, 0), "MOB2_SOUNDSET", false, 0, true, 0);
						}
						func_1850(uLocal_404[iLocal_222], 15);
					}
					break;
				case 15:
					func_1306();
					task_go_to_coord_while_aiming_at_coord(0, get_scripted_cover_point_coords(&(iLocal_613[iLocal_222])), func_381(8, 0), 2f, 1, 3f, 1082130432, 1, 0, 0, -687903391, 0);
					task_combat_hated_targets_around_ped(0, 200f, 0, 0);
					func_1307(&(Local_14.f_54[iLocal_222]), 1, -1082130432, -1082130432);
					func_1850(uLocal_404[iLocal_222], 16);
					break;
				case 16:
					if (func_1777(&(Local_14.f_54[iLocal_222]), get_scripted_cover_point_coords(&(iLocal_613[iLocal_222])), 1) < 2f)
					{
						func_1850(uLocal_404[iLocal_222], 17);
					}
					break;
				case 17:
					fLocal_201[iLocal_222] = get_random_float_in_range(10f, 12.5f);
					func_213(vLocal_529[iLocal_222]);
					func_1850(uLocal_404[iLocal_222], 18);
					break;
				case 18:
					if (func_1269(vLocal_529[iLocal_222]) > &fLocal_201[iLocal_222])
					{
						uVar3[iLocal_222] = _0xef2e6f870783369b(&(Local_14.f_54[iLocal_222]), 0);
						if (&uVar3[iLocal_222] != &iLocal_696[4])
						{
							set_ped_combat_range(&(Local_14.f_54[iLocal_222]), 1);
							func_1854(&(Local_14.f_54[iLocal_222]), &(iLocal_696[4]), 1, 0);
							set_ped_combat_movement(&(Local_14.f_54[iLocal_222]), 2);
						}
					}
					break;
				case 23:
					if (func_1338())
					{
						func_1850(uLocal_404[iLocal_222], 24);
					}
					else
					{
						func_1850(uLocal_404[iLocal_222], 26);
					}
					break;
				case 24:
					func_1306();
					if (!is_ped_in_cover(&(Local_14.f_54[iLocal_222]), 0, 0))
					{
						task_go_to_coord_while_aiming_at_coord(0, get_scripted_cover_point_coords(&(iLocal_613[iLocal_222])), func_381(8, 0), 2f, 0, 2f, 1082130432, 1, 0, 0, -687903391, 0);
						task_put_ped_directly_into_cover(0, get_scripted_cover_point_coords(&(iLocal_613[iLocal_222])), -1, 0, 0.125f, 0, 0, &(iLocal_613[iLocal_222]), 1, 0, 0);
					}
					task_stay_in_cover(0);
					func_1307(&(Local_14.f_54[iLocal_222]), 1, -1082130432, -1082130432);
					func_1850(uLocal_404[iLocal_222], 25);
					break;
				case 25:
					break;
				case 26:
					func_1306();
					task_go_to_coord_while_aiming_at_entity(0, func_1877(&(iLocal_673[21]), 100, 0, 1), iVar664, 1f, 0, 2f, 1082130432, 1, 0, 0, -687903391, 20000, 0);
					task_aim_gun_at_entity(0, iVar664, -1, 0, 1);
					func_1307(&(Local_14.f_54[iLocal_222]), 1, -1082130432, -1082130432);
					func_1850(uLocal_404[iLocal_222], 27);
					break;
				case 27:
					break;
			}
			iLocal_222++;
		}
	}
	return 0;
}

void func_1345(char[4] cParam0)
{
	if (func_386(iLocal_226, 33554432))
	{
		return;
	}
	if (bLocal_216)
	{
	}
	switch (iVar298)
	{
		case 0:
			iLocal_252 = 1;
			iLocal_253 = 2;
			iLocal_254 = 1;
			iLocal_255 = 1;
			iLocal_256 = 1;
			func_1880(1);
			break;
		case 1:
			func_213(&uLocal_545);
			func_1880(2);
			break;
		case 2:
			if (func_1269(&uLocal_545) > 10f)
			{
				func_1880(3);
			}
			break;
		case 3:
			iVar6 = get_random_int_in_range(0, 6);
			switch (iVar6)
			{
				case 0:
					if (iLocal_253 == iLocal_252)
					{
						sLocal_189 = "ODR5_SNIPETHEM";
						iLocal_253++;
						func_1880(4);
					}
					break;
				case 1:
					if (iLocal_254 == iLocal_252)
					{
						sLocal_189 = "ODR5_SADIEKILL";
						iLocal_254++;
						func_1880(4);
					}
					break;
				case 2:
				case 4:
					if (iLocal_255 <= iLocal_252 * 2)
					{
						iVar4 = func_1881();
						if (does_entity_exist(iVar4))
						{
							if (!func_386(iLocal_226, 268435456))
							{
								func_145(cParam0, iVar4, "ODR_PED1", 0);
								sLocal_189 = "ODR5_G1ATKS";
								func_412(&iLocal_226, 268435456);
							}
							else if (!func_386(iLocal_226, 134217728) && !does_entity_exist(func_1882()))
							{
								func_145(cParam0, iVar4, "ODR_PED2", 0);
								sLocal_189 = "ODR5_G2ATKS";
								func_412(&iLocal_226, 134217728);
							}
							else if (func_1338())
							{
								func_145(cParam0, iVar4, "ODR5_ODR1", 0);
								sLocal_189 = "ODR5_OSHOUT1";
							}
							else
							{
								func_145(cParam0, iVar4, "ODR5_ODR2", 0);
								sLocal_189 = "ODR5_OSHOUT2";
							}
							iLocal_255++;
							bLocal_218 = true;
							func_1880(4);
							Jump @593; //curOff = 466
						}
						else
						{
							iLocal_255++;
						}
						else
						{
							Jump @593; //curOff = 481
							if (iVar253 <= iLocal_252 * 2)
							{
								iVar5 = func_1882();
								if (does_entity_exist(iVar5))
								{
									if (func_1338())
									{
										func_145(cParam0, iVar5, "ODR5_COP1", 0);
										sLocal_189 = "ODR5_CSHOUT1";
									}
									else
									{
										func_145(cParam0, iVar5, "ODR5_COP2", 0);
										sLocal_189 = "ODR5_CSHOUT2";
									}
									iLocal_256 = iVar253 + 1;
									func_1880(4);
									bLocal_218 = true;
									Jump @593; //curOff = 573
								}
								else
								{
									iLocal_256 = iVar253 + 1;
								}
							else
							{
								}
								Jump @884; //curOff = 593
								if ((bLocal_218 && func_1256(cParam0, sLocal_189, 1, 0, 0)) || func_1256(cParam0, sLocal_189, 0, 0, 0))
								{
									func_1880(5);
								}
								Jump @884; //curOff = 639
								if (!func_1293(sLocal_189))
								{
									func_1880(6);
								}
								Jump @884; //curOff = 657
								if (((iLocal_253 > iLocal_252 && iLocal_254 > iLocal_252) && iLocal_255 > iLocal_252 * 2) && iVar253 > iLocal_252 * 2)
								{
									iLocal_252++;
								}
								sLocal_189 = "";
								fLocal_204 = get_random_float_in_range(3f, 7f);
								func_213(&uLocal_545);
								func_1880(7);
								Jump @884; //curOff = 735
								if (func_1257())
								{
									func_213(&uLocal_545);
								}
								if (func_1269(&uLocal_545) > fLocal_204)
								{
									func_1880(3);
								}
								if ((iLocal_253 < iLocal_252 + 1 && (get_frame_count() % 4) == 0) && !func_1257())
								{
									if (_0x1a6e84f13c952094(player_id(), 1000, &uVar0))
									{
										if (does_entity_exist(&(uVar0[0])) && get_entity_model(&(uVar0[0])) == -763072541)
										{
											sLocal_189 = "ODR5_THANKS";
											func_553(&uLocal_545);
											iLocal_253++;
											func_1880(4);
										}
									}
								}
								Jump @884; //curOff = 875
							}
						}
					}
					default:
						break;
			}
			default:
				break;
	}
}

void func_1346()
{
	fVar1 = 0.75f;
	if (!func_26(&uLocal_554))
	{
		func_27(&uLocal_554, 0);
	}
	switch (iVar300)
	{
		case 0:
			if (func_1269(&uLocal_554) > fVar1)
			{
				iVar0 = 0;
				while (iVar0 < 6)
				{
					if (iVar0 != 5 && (iVar0 != 4 || !func_435(&(Local_14.f_14[0]), 0)))
					{
						func_1883(iVar0);
					}
					iVar0++;
				}
				func_213(&uLocal_554);
				func_1884(1);
			}
			break;
		case 1:
			if (func_1269(&uLocal_554) > fVar1)
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_1885(iVar0);
					iVar0++;
				}
				func_213(&uLocal_554);
				func_1884(2);
			}
			break;
		case 2:
			if (func_1269(&uLocal_554) > fVar1)
			{
				iVar0 = 0;
				while (iVar0 < 2)
				{
					func_1886(iVar0);
					iVar0++;
				}
				func_213(&uLocal_554);
				func_1884(6);
			}
			break;
		case 6:
			if (func_1269(&uLocal_554) > fVar1)
			{
				if (func_1859(Local_14.f_71, 0) == 0)
				{
					iVar0 = 0;
					while (iVar0 < 2)
					{
						func_1887(&(Local_14.f_54[iVar0]));
						iVar0++;
					}
				}
				func_213(&uLocal_554);
				func_1884(7);
			}
			break;
		case 7:
			if (func_1269(&uLocal_554) > fVar1)
			{
				func_1887(&(Local_14.f_3[2]));
				func_213(&uLocal_554);
				func_1884(0);
			}
			break;
	}
}

void func_1347(char[4] cParam0)
{
	if (does_entity_exist(&(Local_14.f_83[0])) && (is_entity_dead(&(Local_14.f_83[0])) || !is_vehicle_driveable(&(Local_14.f_83[0]), false, false)))
	{
		func_1786(cParam0, "ODR5_FAIL_HORS", "", 1, 0);
	}
}

void func_1348(int* iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam1)
	{
		func_449(iParam0, bParam2, bParam3);
	}
	else
	{
		func_444(iParam0);
	}
}

void func_1349(char[4] cParam0)
{
	func_151(cParam0, Global_35, 0, 0, 0, 0, 0);
	func_151(cParam0, iVar663, 0, 0, 0, 0, 0);
	func_151(cParam0, iVar664, 0, 0, 0, 0, 0);
	func_1311(cParam0, &(Local_14.f_20[0]));
	func_151(cParam0, &(Local_14.f_20[0]), "ColmODriscoll", 0, 0, 1, 1);
	func_151(cParam0, iVar666, "Horse_01", 0, 0, 0, 0);
	func_418(cParam0, &(Local_14.f_83[0]), "WAGON05X", 0, 0, 0, 0);
}

void func_1350(char[4] cParam0, int iParam1)
{
	func_1888(&(cParam0->f_7375.f_861), iParam1);
}

void func_1351(int iParam0)
{
	set_clock_time(func_699(iParam0), func_700(iParam0), func_701(iParam0));
	set_clock_date(func_698(iParam0), func_697(iParam0), func_696(iParam0));
}

bool func_1352(int iParam0)
{
	switch (func_20())
	{
		case -1:
			return (Global_1357549->f_1495 && iParam0) != 0;
	}
	return false;
}

bool func_1353(bool bParam0, bool bParam1, bool bParam2)
{
	iVar0 = 1;
	iVar1 = 0;
	while (iVar1 < 27)
	{
		if (!func_1889(iVar1, bParam0, bParam1, bParam2))
		{
			iVar0 = 0;
		}
		iVar1++;
	}
	return iVar0;
}

void func_1354(int iParam0, bool bParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	switch (&Global_40.f_9536[iParam0])
	{
		case -1:
			Global_40.f_9536[iParam0] = 0;
			if (bParam1)
			{
				iVar0 = func_1890();
				if (iVar0 != -1)
				{
					if (Global_40.f_9479[iVar0]->f_1 == -1)
					{
						Global_40.f_9479[iVar0]->f_1 = iParam0;
					}
					else if (Global_40.f_9479[iVar0]->f_2 == -1)
					{
						Global_40.f_9479[iVar0]->f_2 = iParam0;
					}
					else
					{
						Global_40.f_9479[iVar0]->f_2 = Global_40.f_9479[iVar0]->f_1;
						Global_40.f_9479[iVar0]->f_1 = iParam0;
					}
				}
			}
			break;
		case 0:
			break;
		case 1:
			break;
	}
}

void func_1355(bool bParam0)
{
	if (Global_43891)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 30)
	{
		iVar1 = func_1093(Global_35, iVar0, 0, 1);
		if (is_weapon_valid(iVar1))
		{
			if (_is_weapon_two_handed(iVar1) || func_1644(iVar1))
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

void func_1356(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_20() == 0)
	{
		func_1891(0, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_1668(0);
	if (bParam1)
	{
		func_1892(fVar0);
	}
	if (fVar0 >= (100f - 1f))
	{
		func_1893();
	}
	if (bParam2)
	{
		fParam0 = func_1894(0, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_1895(0, func_1676(fParam0, -100f, 100f), bParam1);
}

void func_1357(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_20() == 0)
	{
		func_1891(1, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_1668(1);
	if (bParam1)
	{
		func_1892(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_1894(1, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_1895(1, func_1676(fParam0, -100f, 100f), bParam1);
}

void func_1358(float fParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_20() == 0)
	{
		func_1891(2, (fParam0 / 2f), bParam1, 1, bParam2);
		return;
	}
	fVar0 = func_1668(2);
	if (bParam1)
	{
		func_1892(fVar0);
	}
	if (bParam2)
	{
		fParam0 = func_1894(2, fParam0, bParam3);
	}
	fParam0 = (fParam0 + fVar0);
	func_1895(2, func_1676(fParam0, -100f, 100f), bParam1);
}

void func_1359()
{
	if (func_355((*Global_1835011)[36]->f_1) == 1)
	{
		iLocal_414 = 1760651454;
	}
	else if (func_1727(36))
	{
		iLocal_414 = -595619260;
	}
	else
	{
		iLocal_414 = -904734609;
	}
}

bool func_1360()
{
	iVar0 = 1;
	if (!does_entity_exist(iVar630))
	{
		iLocal_632 = create_object(-1926868415, Global_36 + Vector(-1.5f, 0f, 0f), true, true, false, false, true);
		iVar0 = 0;
	}
	if (!does_entity_exist(iVar631))
	{
		iLocal_633 = create_object(-1311208351, Global_36 + Vector(-1.5f, 0f, 0f), true, true, false, false, true);
		iVar0 = 0;
	}
	if (!does_entity_exist(iVar629))
	{
		switch (iVar412)
		{
			case -595619260:
				iVar1 = 1742282011;
				break;
			case -904734609:
				iVar1 = 2005127812;
				break;
			case 1760651454:
				iVar1 = 6771503;
				break;
		}
		if (_does_streamed_txd_exist(iVar1))
		{
			_request_streamed_txd(iVar1, true);
			if (_has_streamed_txd_loaded(iVar1))
			{
				iLocal_631 = create_object(867074004, Global_36 + Vector(-1.5f, 0f, 0f), true, true, false, false, true);
				_set_apply_object_txd(iVar629, iVar1, 0, 0);
				_set_streamed_txd_as_no_longer_needed(iVar1);
				iVar0 = 0;
			}
			else
			{
				iVar0 = 0;
			}
		}
		else
		{
			iLocal_631 = create_object(867074004, Global_36 + Vector(-1.5f, 0f, 0f), true, true, false, false, true);
			iVar0 = 0;
		}
	}
	return iVar0;
}

void func_1361()
{
	func_1896(uLocal_230[17], "TILLY", &uLocal_668);
	func_1896(uLocal_230[18], "TILLY", &uLocal_668);
	func_1896(uLocal_230[17], "ARTHUR", &Global_35);
	func_1896(uLocal_230[18], "ARTHUR", &Global_35);
	func_1897(uLocal_230[18], "LETTER", &iLocal_631);
	func_1897(uLocal_230[18], "RING", &iLocal_632);
	func_1897(uLocal_230[18], "ENVELOPE", &iLocal_633);
}

float func_1362(int iParam0, int iParam1, int iParam2)
{
	vVar0 = { get_entity_coords(iParam0, false, false) };
	vVar3 = { get_entity_coords(iParam1, false, false) };
	return func_1380(vVar0, vVar3, iParam2);
}

void func_1363()
{
	func_1348(&iLocal_631, 0, 1, 1);
	func_1348(&iLocal_632, 0, 1, 1);
	func_1348(&iLocal_633, 1, 1, 1);
	func_312(733596224, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	func_312(-2030370717, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
	func_312(iVar412, 1, 0, 0, 0, 752097756, 0, 0, 0, 0);
}

bool func_1364(int iParam0)
{
	if (-1829635046 == func_1898(81053684))
	{
		if (func_1899(iParam0))
		{
			return true;
		}
	}
	else if (func_1646(-525676072, iParam0))
	{
		if (func_1899(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_1365(int iParam0)
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

void func_1366(int iParam0)
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

void func_1367()
{
	iVar0 = func_1093(Global_35, 9, 1, 0);
	if (func_692(iVar0))
	{
		return;
	}
	iVar0 = func_1093(Global_35, 7, 1, 0);
	if (func_692(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 8, false, false);
	}
	iVar0 = func_1093(Global_35, 0, 1, 0);
	if (func_692(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1093(Global_35, 1, 1, 0);
	if (func_692(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1093(Global_35, 18, 1, 0);
	if (func_692(iVar0) && _is_weapon_two_handed(iVar0))
	{
		set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		return;
	}
	iVar0 = func_1900();
	if (func_692(iVar0))
	{
		if (has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1901(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
		return;
	}
	iVar0 = func_1902(6291456, 0);
	if (func_692(iVar0))
	{
		if (!has_ped_got_weapon(Global_35, iVar0, 0, true))
		{
			func_1901(Global_35, iVar0, 1, 0, 9, 0, 0, 1056964608, 1065353216, -1, 0, 0, 0, 0);
		}
		else
		{
			set_current_ped_weapon(Global_35, iVar0, true, 9, false, false);
		}
	}
}

int func_1368()
{
	return Global_1900383->f_393;
}

int func_1369(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (func_1758(*uParam0, 0f, 0f, 0f))
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

void func_1370(int iParam0)
{
	Global_40.f_1095.f_3054.f_1 = iParam0;
}

void func_1371(int iParam0)
{
	Global_40.f_1095.f_3054 = iParam0;
}

void func_1372(vector3 vParam0)
{
	Global_40.f_1095.f_3054.f_77 = { vParam0 };
}

var func_1373()
{
	return &Global_1899515;
}

void func_1374(var uParam0)
{
	Global_40.f_1095.f_3054.f_2 = uParam0;
}

void func_1375(int iParam0)
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

bool func_1376()
{
	return (func_1903() || func_1904());
}

void func_1377(bool bParam0)
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
	func_1905(0f);
	Global_1935436->f_11 = 1;
	if (func_298())
	{
		set_ambient_voice_name(Global_35, "ARTHUR");
	}
	else
	{
		set_ambient_voice_name(Global_35, "JOHN_PLAYER");
	}
	if (animpostfx_is_running("PlayerDrunk01"))
	{
		func_1906();
	}
	if (is_gameplay_cam_shaking())
	{
		stop_gameplay_cam_shaking(false);
	}
}

Vector3 func_1378(var uParam0)
{
	return uParam0->f_865;
}

float func_1379(var uParam0)
{
	return uParam0->f_868;
}

float func_1380(struct<2> Param0, int iParam2, struct<2> Param3, var uParam5, int iParam6)
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

void func_1381(var uParam0, int iParam1, bool bParam2)
{
	uParam0->f_8 = (uParam0->f_8 - (uParam0->f_8 && iParam1));
	if (((iParam1 == 512 && bParam2) && _does_anim_scene_exist(uParam0->f_804)) && _0xef324e9550a394d5(uParam0->f_804))
	{
		_0x8a8208ae92bf87a5(uParam0->f_804);
	}
}

bool func_1382(var uParam0, int iParam1)
{
	return (uParam0->f_11 && iParam1) != 0;
}

bool func_1383(var uParam0, int iParam1)
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

void func_1384(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	iVar2 = func_1197(iParam1, 1);
	if (!bParam2 && iVar2 == 1367443060)
	{
		bParam3 = false;
	}
	if (iParam4 != 0)
	{
		if (iVar2 == 1108822547)
		{
			iVar1 = func_1907(iParam4);
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

bool func_1385(int iParam0, int iParam1)
{
	return ((Global_1946804->f_57[func_677(iParam0, 1)])->f_10 && iParam1) != 0;
}

bool func_1386(int iParam0, int iParam1)
{
	return (Global_1946804->f_57[iParam0]->f_9 && iParam1) != 0;
}

void func_1387(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 10;
	if (func_1385(1108822547, 6))
	{
		if (bParam2)
		{
			func_1384(iParam0, iVar0, func_20() != -1, 0, 0);
			func_1388(1108822547, 1, 6);
		}
		else
		{
			return;
		}
	}
	else
	{
		_0xbc6df00d7a4a6819(iParam0, Global_1946804->f_2776.f_1, &(Global_1946804->f_2776.f_3[0]), &(Global_1946804->f_2776.f_3[1]), &(Global_1946804->f_2776.f_3[2]), Global_1946804->f_2776.f_8, Global_1946804->f_2776.f_9, Global_1946804->f_2776.f_10, Global_1946804->f_2776.f_11);
		func_1389(1108822547, 1, 6);
	}
	Global_1946804->f_857++;
	if (!bParam1)
	{
		return;
	}
	_update_ped_variation(iParam0, false, true, true, true, false);
}

void func_1388(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_677(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_677(iParam0, 1)])->f_10 || iParam1);
}

void func_1389(int iParam0, int iParam1, int iParam2)
{
	(Global_1946804->f_57[func_677(iParam0, 1)])->f_10 = ((Global_1946804->f_57[func_677(iParam0, 1)])->f_10 - ((Global_1946804->f_57[func_677(iParam0, 1)])->f_10 && iParam1));
}

bool func_1390(var uParam0)
{
	if (func_1908(&(uParam0->f_29), 62))
	{
		switch (func_1909())
		{
			case 1:
				if (!func_1908(&(uParam0->f_29), 6))
				{
					return false;
				}
				break;
			case 2:
				if (!func_1908(&(uParam0->f_29), 8))
				{
					return false;
				}
				break;
			case 4:
				if (!func_1908(&(uParam0->f_29), 16))
				{
					return false;
				}
				break;
			case 8:
				if (!func_1908(&(uParam0->f_29), 32))
				{
					if (func_1908(&(uParam0->f_29), 2))
					{
						if (func_699(func_279()) < 5)
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

int func_1391(var uParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	Var4.f_9 = -1591664384;
	bVar18 = func_1910(iParam1, 128);
	Var23.f_9 = -1591664384;
	if (func_1134("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1135(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_692(Var4.f_4))
			{
			}
			else if (!_0x705be297eebdb95d(Var4.f_4))
			{
			}
			else if (iParam2 != 0 && Var4.f_4 == iParam2)
			{
			}
			else if ((!func_1910(iParam1, 512) && func_1641(Var4.f_4, &uVar19, &Var23, 1728382685)) && !Var23.f_21)
			{
			}
			else if (!bVar18 || _0xf29a186ed428b552(Global_35, Var4.f_4))
			{
				if (((_is_weapon_one_handed(Var4.f_4) && (!_is_weapon_shotgun(Var4.f_4) || func_1910(iParam1, 32))) && (!_is_weapon_pistol(Var4.f_4) || !func_1910(iParam1, 16777216))) && (!_is_weapon_revolver(Var4.f_4) || !func_1910(iParam1, 33554432)))
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
		func_1136(iVar1);
	}
	if (func_692(iVar0))
	{
	}
	else if (!func_1910(iParam1, 512))
	{
		iParam1 |= 512;
		return func_1391(uParam0, iParam1, iParam2);
	}
	else if (func_1910(iParam1, 256))
	{
		iVar0 = -1569615261;
	}
	return iVar0;
}

void func_1392(int iParam0)
{
	_0x51345ae20f22c261(player_id(), to_float(iParam0 * 14), 0, 0, 0);
}

int func_1393(int iParam0)
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

void func_1394(var uParam0)
{
	if (!func_864(uParam0->f_1, 1))
	{
		_0x03ddbf2d73799f9e(*uParam0);
		func_826(&(uParam0->f_1), 1);
	}
}

void func_1395(var uParam0)
{
	if (!func_864(*uParam0, 1))
	{
		request_ptfx_asset();
		func_826(uParam0, 1);
	}
}

bool func_1396(var uParam0)
{
	if (func_864(uParam0->f_2, 1))
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

char* func_1397(int iParam0)
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

bool func_1398(int iParam0)
{
	return iParam0 != 0;
}

int func_1399(var uParam0, int iParam1)
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

int func_1400(var uParam0, char* sParam1)
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

void func_1401(var uParam0, int iParam1)
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

int func_1402(var uParam0)
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

void func_1403(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 || iParam1);
}

void func_1404(var uParam0, int iParam1)
{
	uParam0->f_11 = (uParam0->f_11 - (uParam0->f_11 && iParam1));
}

bool func_1405(var uParam0, int iParam1)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_2495.f_1), &(uParam0->f_2495));
}

bool func_1406(var uParam0, int iParam1, int iParam2, char[4] cParam3, int iParam4, int iParam5)
{
	if (iParam2 == -1)
	{
		if (func_1407(uParam0, 2, iParam4))
		{
			*iParam5 = *iParam4;
		}
		if (func_1407(uParam0, 6, &(cParam3->f_11)))
		{
		}
		if (func_1407(uParam0, 9, &(cParam3->f_13)))
		{
		}
		if (func_1407(uParam0, 5, iParam4))
		{
			cParam3->f_9 = *iParam4;
		}
		return true;
	}
	if (func_1407(uParam0, 2, iParam4))
	{
		*iParam5 = *iParam4;
	}
	if (func_1407(uParam0, 6, &(cParam3->f_11)))
	{
	}
	if (func_1407(uParam0, 5, iParam4))
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
			if (func_1407(uParam0, 9, &(cParam3->f_13)))
			{
			}
			return true;
		}
		return false;
	}
	if (func_1407(uParam0, 9, &(cParam3->f_13)))
	{
	}
	return (iParam2 >= cParam3->f_11 && iParam2 <= cParam3->f_13);
}

bool func_1407(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_int(iParam2, &(uParam0->f_2495));
}

bool func_1408(var uParam0, int iParam1, char[4] cParam2)
{
	uParam0->f_2495.f_2 = iParam1;
	return _datafile_get_string(cParam2, &(uParam0->f_2495));
}

bool func_1409(var uParam0, char* sParam1, int iParam2)
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

void func_1410(char* sParam0)
{
	if (!is_audio_scene_active(sParam0))
	{
		start_audio_scene(sParam0);
	}
	func_496(sParam0, 1);
}

bool func_1411(var uParam0)
{
	if (func_864(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_864(uParam0->f_1, 1))
	{
		func_834(uParam0);
	}
	if (has_model_loaded(*uParam0))
	{
		func_826(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1412(var uParam0)
{
	if (func_864(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_864(uParam0->f_3, 1))
	{
		func_836(uParam0);
	}
	switch (uParam0->f_1)
	{
		case 2:
			if (get_is_waypoint_recording_loaded(*uParam0))
			{
				func_826(&(uParam0->f_3), 2);
				return true;
			}
			break;
		case 1:
			if (has_vehicle_recording_been_loaded(uParam0->f_2, *uParam0))
			{
				func_826(&(uParam0->f_3), 2);
				return true;
			}
			break;
	}
	return false;
}

bool func_1413(var uParam0)
{
	if (func_864(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_864(uParam0->f_1, 1))
	{
		func_838(uParam0);
	}
	if (has_anim_dict_loaded(*uParam0))
	{
		func_826(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1414(var uParam0, int iParam1)
{
	if (func_864(uParam0->f_1, 2))
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
	if (!func_864(uParam0->f_1, 1))
	{
		func_845(uParam0, iParam1);
	}
	if (_0x23e33cb9f4a3f547(iParam1, *uParam0))
	{
		func_826(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1415(var uParam0)
{
	if (func_864(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_864(uParam0->f_2, 1))
	{
		func_847(uParam0);
	}
	if (_has_propset_loaded(*uParam0))
	{
		func_826(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1416(var uParam0)
{
	if (func_864(uParam0->f_3, 2))
	{
		return true;
	}
	if (!func_864(uParam0->f_3, 1))
	{
		func_849(uParam0);
	}
	if (_0xff07cf465f48b830(*uParam0))
	{
		func_826(&(uParam0->f_3), 2);
		return true;
	}
	return false;
}

bool func_1417(var uParam0)
{
	if (func_864(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_864(uParam0->f_1, 1))
	{
		func_851(uParam0);
	}
	if (request_script_audio_bank(*uParam0))
	{
		func_826(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1418(var uParam0)
{
	if (func_864(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_864(uParam0->f_1, 1))
	{
		func_853(uParam0);
	}
	if (_is_imap_active(*uParam0))
	{
		func_826(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

bool func_1419(var uParam0)
{
	if (func_864(uParam0->f_2, 2))
	{
		return true;
	}
	if (!func_864(uParam0->f_2, 1))
	{
		func_855(uParam0);
	}
	if (_0xe368e8422c860ba7(*uParam0, uParam0->f_1, -2))
	{
		func_826(&(uParam0->f_2), 2);
		return true;
	}
	return false;
}

bool func_1420(var uParam0)
{
	if (func_864(uParam0->f_1, 2))
	{
		return true;
	}
	if (!func_864(uParam0->f_1, 1))
	{
		func_857(uParam0);
	}
	if (_0x2c04d89a0fb4e244(*uParam0))
	{
		func_826(&(uParam0->f_1), 2);
		return true;
	}
	return false;
}

int func_1421(int iParam0)
{
	if (func_515(iParam0))
	{
		return Global_1360165[iParam0];
	}
	return 0;
}

int func_1422(int iParam0, bool bParam1, int iParam2, float fParam3, float fParam4, float fParam5, float fParam6, bool bParam7, int iParam8, bool bParam9, bool bParam10, bool bParam11, int iParam12, int iParam13, bool bParam14, bool bParam15, bool bParam16, int iParam17, bool bParam18, bool bParam19, bool bParam20, bool bParam21, bool bParam22, bool bParam23, bool bParam24)
{
	if (!func_515(iParam0))
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
			if (func_1010(iParam0, 2, 1))
			{
				func_1008(iParam0, 2, 1);
			}
			if (func_711(iParam0, 16, 1))
			{
				if (*Global_1360165)[iParam0]->f_129 != get_id_of_this_thread()
				{
					if (bParam14)
					{
						func_1006(iParam0, 29, 1);
						return 0;
					}
					if (is_thread_active((*Global_1360165)[iParam0]->f_129, false))
					{
					}
					else
					{
						func_521(iParam0, 0, 0, 1, -1082130432, 1, 1, 0, 0, 0, 0);
					}
					return 0;
				}
				else if (func_435(Global_1360165[iParam0], 0))
				{
					return Global_1360165[iParam0];
				}
			}
			if (func_435(Global_1360165[iParam0], 0))
			{
				if (is_scripted_speech_playing(Global_1360165[iParam0]))
				{
					return 0;
				}
				if (is_ped_ragdoll(Global_1360165[iParam0]))
				{
					if (bParam1)
					{
						func_1911(iParam0, 1, "Stealing, but companion is a ragdoll");
					}
					else
					{
						return 0;
					}
				}
				func_1006(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1912(iParam0, 2);
				return 0;
			}
			else if (bParam1)
			{
				func_1006(iParam0, 44, 1);
				(*Global_1360165)[iParam0]->f_1156 = get_id_of_this_thread();
				func_1912(iParam0, 1);
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
			if (!func_1010(iParam0, 44, 0))
			{
				func_1006(iParam0, 44, 0);
			}
			if (func_1913(iParam0, vVar0, iParam13, 0, 1, iParam17, bParam20, -1, 1, 0))
			{
				func_1912(iParam0, 2);
			}
			break;
		case 2:
			set_ped_config_flag(Global_1360165[iParam0], 171, true);
			if (!_0x88ad6cc10d8d35b2(Global_1360165[iParam0]))
			{
				set_entity_as_mission_entity(Global_1360165[iParam0], true, true);
			}
			func_1008(iParam0, 18, 1);
			set_entity_visible(Global_1360165[iParam0], true);
			set_ped_relationship_group_hash(Global_1360165[iParam0], 1030835986);
			_0xf74e134f40192884(Global_1360165[iParam0], 0);
			_0x6759bee6762e140b((*Global_1360165)[iParam0]->f_1);
			set_ped_config_flag(Global_1360165[iParam0], 130, false);
			func_1012(iParam0, bParam9, 1, 0);
			if (bParam22)
			{
				func_1914(iParam0, 0, 0, 1);
			}
			func_1008(iParam0, 33, 1);
			func_1008(iParam0, 34, 1);
			func_1008(iParam0, 29, 1);
			if (!func_391(vVar0) && bParam7)
			{
				func_1912(iParam0, 3);
			}
			else if (iParam13 != 0)
			{
				func_1912(iParam0, 4);
			}
			else
			{
				func_1912(iParam0, 5);
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
						func_1911(iParam0, 1, "Teleporting a stolen companion using a scenario.");
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
				func_875(Global_1360165[iParam0], vVar0, fParam6, 2, 1073741824);
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
				func_1912(iParam0, 4);
			}
			else
			{
				func_1912(iParam0, 5);
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
				if (func_1471(iParam0, iParam13))
				{
					if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
					{
						func_1495(iParam0, iParam13, 0);
						func_1496(iParam0, Global_1360165[iParam0], iParam13, 1);
						if (func_1010(iParam0, 25, 0))
						{
							func_1008(iParam0, 25, 0);
						}
						func_1006(iParam0, 66, 0);
						func_1912(iParam0, 5);
						(*Global_1360165)[iParam0]->f_63 = iParam13;
					}
					else
					{
						return 0;
					}
				}
				else
				{
					func_1912(iParam0, 5);
				}
				func_1006(iParam0, 28, 1);
			}
			else
			{
				func_1912(iParam0, 5);
			}
			break;
		case 5:
			if (_0xa0bc8faed8cfeb3c(Global_1360165[iParam0]))
			{
				func_1912(iParam0, 6);
			}
			break;
		case 6:
			if (func_435(Global_1360165[iParam0], 0))
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
					func_1915(iParam0);
				}
				if (bParam21)
				{
					clear_ped_secondary_task(Global_1360165[iParam0]);
					func_1916(Global_1360165[iParam0], 1);
				}
			}
			func_1912(iParam0, 7);
		case 7:
			func_1012(iParam0, bParam9, bParam15, 0);
			func_1003(iParam0, 4, bParam11);
			func_1007(iParam0);
			if (bParam20)
			{
				if (func_1917(Global_1360165[iParam0]))
				{
				}
			}
			func_1918(iParam0, Global_1360165[iParam0]);
			if (!bParam23 && !get_ped_config_flag(Global_1360165[iParam0], 503, true))
			{
				set_ped_config_flag(Global_1360165[iParam0], 503, true);
			}
			Global_40.f_4942[iParam0]->f_4 = Global_40.f_4942[iParam0]->f_3;
			func_1912(iParam0, 0);
			func_712(iParam0, 16, 1);
			func_1008(iParam0, 44, 1);
			(*Global_1360165)[iParam0]->f_1156 = 0;
			(*Global_1360165)[iParam0]->f_129 = get_id_of_this_thread();
			return Global_1360165[iParam0];
	}
	return 0;
}

void func_1423(char[4] cParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_1919(iParam1, bParam3, bParam4, bParam6);
	if (!func_120(cParam0, 512))
	{
		if (func_120(cParam0, 4) && bParam4)
		{
			vVar0 = { get_offset_from_entity_in_world_coords(Global_35, 5f, 0f, 0f) };
			func_1920(iParam1, vVar0);
		}
	}
	else
	{
		Stack.Push(cParam0);
		Call_Loc(cParam0->f_10781);
	}
	func_1921(cParam0, iParam1, iParam2, func_318(iParam2, 0));
	func_1493(cParam0, iParam1, 512);
	if (bParam5)
	{
		func_1493(cParam0, iParam1, 128);
	}
	else
	{
		func_1796(cParam0, iParam1, 128);
	}
	switch (iParam2)
	{
		case 1:
		case default:
	}
}

void func_1424(int iParam0)
{
	if (!func_515(iParam0))
	{
		return;
	}
	iVar0 = func_552(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	_0x406ccf555b04fad3(iVar0, 0, 0f);
}

void func_1425(char[4] cParam0, vector3 vParam1, float fParam4)
{
	cParam0->f_5417 = { vParam1 };
	cParam0->f_5420 = fParam4;
}

bool func_1426(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (func_1435(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1427(int iParam0)
{
	iParam0 = func_260(iParam0);
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
	func_1922(&Var0);
	func_1923(iParam0, Var0);
	func_1924(&(Global_40.f_1095.f_1[iParam0]->f_15));
	func_1925(&(Global_40.f_1095.f_1[iParam0]->f_298));
	func_1926(&(Global_40.f_1095.f_1[iParam0]->f_356));
	func_1927(&(Global_40.f_1095.f_1[iParam0]->f_372));
	iVar2 = 0;
	while (iVar2 < 2)
	{
		func_1928(iVar2, Global_40.f_1095.f_1[iParam0]->f_398[iVar2]);
		iVar2++;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		func_1929(iVar3, Global_40.f_1095.f_1[iParam0]->f_407[iVar3]);
		iVar3++;
	}
	func_1930(&(Global_40.f_1095.f_1[iParam0]->f_420));
	func_1931(&(Global_40.f_1095.f_1[iParam0]->f_422));
	func_1932(&(Global_40.f_1095.f_1[iParam0]->f_425));
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

int func_1428(vector3 vParam0)
{
	return func_1933(_get_map_zone_at_coords(vParam0, 10));
}

bool func_1429(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	if (!func_530(iParam0))
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

void func_1430(int iParam0, int iParam1)
{
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
	}
	func_524(iParam0);
	func_524(iParam0);
	func_1934(iParam0, iParam1);
	func_1935(iParam0, iParam1);
	func_1936(iParam0, iParam1);
	iVar1 = func_208(iParam0);
	if (does_entity_exist(iVar1))
	{
		if (iParam0 == 0 || iParam0 == 1)
		{
			func_1937(iVar1);
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
			func_1937(iVar3);
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
	func_262();
}

bool func_1431()
{
	iVar0 = func_1368();
	if (does_entity_exist(iVar0))
	{
		return true;
	}
	return false;
}

void func_1432()
{
	iVar0 = func_1368();
	if (!does_entity_exist(iVar0))
	{
		return;
	}
	if (!_0x88ad6cc10d8d35b2(iVar0))
	{
		set_entity_as_mission_entity(iVar0, true, true);
	}
	delete_object(&iVar0);
	func_1938(0);
}

int func_1433(int iParam0)
{
	iParam0 = func_260(iParam0);
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

int func_1434(int iParam0)
{
	iParam0 = func_260(iParam0);
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

int func_1435(int iParam0)
{
	iParam0 = func_260(iParam0);
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

void func_1436(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_1699(&iVar0, &iVar1, &iVar2);
	func_1700(iParam0, iVar0);
	func_1701(iParam0, iVar1);
	func_1702(iParam0, iVar2);
	func_1939(iParam0, 1);
	func_1940(iParam0, 1);
}

void func_1437(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return;
	}
	if (iParam0 >= 7)
	{
		return;
	}
	func_941(iParam0, 1);
}

void func_1438(int iParam0, vector3 vParam1, var uParam4)
{
	iParam0 = func_260(iParam0);
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

bool func_1439(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	return func_1021(iParam0, 1);
}

struct<2> func_1440(int iParam0)
{
	iParam0 = func_260(iParam0);
	if (iParam0 == -1)
	{
		return Var0;
	}
	if (iParam0 >= 7)
	{
		return Var0;
	}
	if (!func_1941(iParam0, &uVar2))
	{
	}
	if (!func_1942(iParam0, &uVar3))
	{
	}
	Var0 = uVar2;
	Var0.f_1 = uVar3;
	return Var0;
}

struct<6> func_1441()
{
	if (func_1943(-997150586, &uVar6))
	{
		Var0.f_4 = uVar6;
	}
	if (func_1943(-1189569496, &uVar7))
	{
		Var0 = uVar7;
	}
	if (func_1943(325139909, &uVar8))
	{
		Var0.f_2 = uVar8;
	}
	if (func_1943(1310070322, &uVar9))
	{
		Var0.f_5 = uVar9;
	}
	if (func_1943(986998820, &uVar10))
	{
		Var0.f_3 = uVar10;
	}
	if (func_1943(-415648720, &uVar11))
	{
		Var0.f_1 = uVar11;
	}
	return Var0;
}

void func_1442(int iParam0, var uParam1, var uParam2, int iParam3)
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
	func_1944(iParam0);
	func_1945(iParam0, uParam1);
	func_1946(iParam0);
	func_1947(iParam0, uParam2);
	if (iParam3 != 0)
	{
		func_1948(iParam0, iParam3, 0);
	}
	_update_ped_variation(iParam0, false, true, true, true, true);
}

void func_1443(int iParam0)
{
	iParam0 = func_260(iParam0);
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

bool func_1444(int iParam0)
{
	if (iParam0 == 0)
	{
		return true;
	}
	request_model(iParam0, false);
	return has_model_loaded(iParam0);
}

int func_1445(int iParam0, vector3 vParam1, float fParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	iVar0 = create_ped(iParam0, vParam1, fParam4, bParam6, bParam7, false, false);
	if (bParam5)
	{
		_set_random_outfit_variation(iVar0, true);
	}
	return iVar0;
}

int func_1446(var uParam0)
{
	return uParam0;
}

bool func_1447(int iParam0)
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

int func_1448(var uParam0)
{
	return *uParam0;
}

bool func_1449(int iParam0, var uParam1, int iParam2)
{
	return false;
	if (iParam0 <= -1 || iParam0 > 80)
	{
		return false;
	}
	*uParam1 = { func_1949(iParam0) };
	if (func_1758(*uParam1, 0f, 0f, 0f))
	{
		return false;
	}
	if (!func_876(iParam0, iParam2, &iVar0))
	{
		return false;
	}
	if (func_1950(*iParam2, iVar0))
	{
		return false;
	}
	return true;
}

void func_1450(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

void func_1451(var uParam0)
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

bool func_1452(var uParam0)
{
	switch (func_1951(uParam0))
	{
		case 0:
			uParam0->f_24 = func_279();
			iVar4 = func_279();
			func_1202(&iVar4, uParam0->f_6);
			func_1203(&iVar4, 0);
			func_1204(&iVar4, 0);
			if (func_1040(uParam0->f_24, iVar4, 1))
			{
				func_328(&iVar4, 0, 0, 0, 1, 0, 0, 0);
			}
			func_1952(uParam0->f_24, iVar4, &iVar0, &iVar1, &iVar2, &uVar3, &uVar3, &uVar3);
			uParam0->f_7 = ((iVar0 + iVar1 * 60) + iVar2 * 3600);
			func_1953(uParam0, 1);
			break;
		case 1:
			fVar5 = func_1954(uParam0, -1082130432);
			if (fVar5 >= 0.5f)
			{
				func_1953(uParam0, 2);
			}
			break;
		case 2:
			fVar5 = func_1954(uParam0, -1082130432);
			if (fVar5 >= 0.99f || fVar5 == -1f)
			{
				iVar4 = uParam0->f_24;
				func_328(&iVar4, uParam0->f_7, 0, 0, 0, 0, 0, 0);
				set_clock_time(func_699(iVar4), func_700(iVar4), func_701(iVar4));
				func_1955(get_clock_hours());
				func_1353(1, 0, 0);
				return true;
			}
			break;
	}
	return false;
}

void func_1453(int iParam0, int iParam1)
{
	if (Global_1935630->f_12)
	{
		return;
	}
	func_1956(2000);
	Global_16 = 0;
	func_1957();
	set_entity_invincible(Global_35, func_1958(*iParam0, 8));
	if (!func_1958(*iParam0, 1))
	{
		set_player_control(get_player_index(), true, 0, false);
	}
	_0xa0cefcea390aab9b(0);
	set_all_random_peds_flee(player_id(), false);
	set_everyone_ignore_player(player_id(), false);
	if (func_1958(*iParam0, 2) || func_1958(*iParam0, 4))
	{
		_hide_hud_component(-1679307491);
	}
	else
	{
		_display_hud_component(-1679307491);
	}
	if (!func_1958(*iParam0, 16))
	{
		func_229(1);
	}
	if (func_1958(*iParam0, 32))
	{
		func_630(Global_35, -383172193, 0, 1742327865, 0, 1, 0, 0, 1, 0);
		func_1959(-1623728698, 0);
	}
	func_802(&(Global_1946804->f_1497), Global_35, 1, 49217, 1, 1, 1);
	if (Global_1359489->f_16 & 4194304 != 0)
	{
		Global_1359489->f_16 = (Global_1359489->f_16 - Global_1359489->f_16 & 4194304);
	}
	*iParam0 = 0;
}

var func_1454(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

struct<4> func_1455(char[4] cParam0, int iParam1)
{
	return cParam0->f_1[func_132(iParam1)]->f_13;
}

int func_1456(var uParam0)
{
	return *uParam0;
}

bool func_1457(var uParam0, struct<4> Param1, int iParam5, bool bParam6)
{
	if (func_1458(uParam0, 32768))
	{
		return true;
	}
	if (func_1960(uParam0) >= 3)
	{
		uParam0->f_2286 = func_934(get_player_index(), 0, 0, 1);
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
		func_1961(uParam0);
	}
	if (func_1960(uParam0) < 10)
	{
		if (func_1960(uParam0) == 3)
		{
			func_1962(uParam0, iParam5, bParam6);
		}
		else if (func_1960(uParam0) > 3)
		{
			if (func_1456(uParam0) == 0)
			{
				if (!func_1458(uParam0, 524288))
				{
					func_1963(uParam0);
				}
				else if (is_screen_faded_out())
				{
					func_1964(uParam0, 4);
					func_1965(uParam0, 10);
					func_1966(uParam0, iParam5);
					return true;
				}
			}
			if (!func_1458(uParam0, 67108864) && !Global_1935630->f_12)
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			if (!func_1967(uParam0->f_1406[uParam0->f_2074], 16))
			{
				disable_control_action(0, -1404316431, false);
				disable_control_action(0, -1304887797, false);
			}
			_0x8910c24b7e0046ec();
			func_1512(0);
			func_1968();
			disable_control_action(0, -1722177808, false);
			disable_control_action(0, 1644850270, false);
			disable_control_action(0, 2139949496, false);
			if (uParam0->f_2074 >= 0)
			{
				if (!func_1967(uParam0->f_1406[uParam0->f_2078], 32768))
				{
					_uiprompt_enable_prompt_type_this_frame(6);
				}
				if (func_1969(uParam0, uParam0->f_2074))
				{
					if (func_1789(uParam0) < 7 && uParam0->f_2078 >= 0)
					{
						func_1970(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
					}
				}
				else if (uParam0->f_2078 >= 0)
				{
					func_1970(uParam0, uParam0->f_1406[uParam0->f_2078]->f_27, uParam0->f_1735[uParam0->f_2078]->f_1, 1065353216);
				}
				func_1971(uParam0);
			}
		}
	}
	bVar0 = func_1972(uParam0, iParam5, bParam6);
	bVar1 = _0xa24c1d341c6e0d53(1, 0, 0);
	if (bVar0)
	{
		if ((!func_1458(uParam0, 268435456) && bVar1) && !func_1458(uParam0, 262144))
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
				func_750(uParam0, 131072);
				func_750(uParam0, 268435456);
			}
		}
		if (func_1973(uParam0, 64) || (uParam0->f_2074 >= 0 && !func_1967(uParam0->f_1406[uParam0->f_2074], 524288)))
		{
			if (_0xa2b1c7ef759a63ce() > 0f || func_1456(uParam0) == 0)
			{
				_0xc9caeaeec1256e54(-1679307491);
				_0xe296208c273bd7f0(-1, -1, 0, 17, 1, 0);
			}
		}
	}
	if (func_1960(uParam0) == 3 || func_1458(uParam0, 131072))
	{
		func_1974(uParam0);
		if (!func_1458(uParam0, 262144))
		{
			if ((bVar0 && func_1458(uParam0, 65536)) || func_1458(uParam0, 131072))
			{
				func_750(uParam0, 32768);
				func_1964(uParam0, 4);
				func_1965(uParam0, 10);
				uParam0->f_2159 = 1;
				func_1966(uParam0, iParam5);
				return true;
			}
		}
	}
	if (func_1960(uParam0) >= 3)
	{
		func_1975(uParam0, iParam5);
		func_1976(uParam0);
		if (!func_1977(uParam0, 1))
		{
			func_1978(uParam0);
		}
		func_1979(uParam0);
	}
	switch (func_1960(uParam0))
	{
		case 0:
			func_1980(uParam0, Param1, iParam5);
			break;
		case 1:
			func_1981(uParam0);
			break;
		case 2:
			func_1982(uParam0);
			break;
		case 3:
			if (func_1790(uParam0))
			{
				func_1983(2);
				func_1970(uParam0, uParam0->f_1406[uParam0->f_2074]->f_27, uParam0->f_1735[uParam0->f_2074]->f_1, 1065353216);
				func_213(&(uParam0->f_2262));
				func_1964(uParam0, 1);
				func_1984();
				func_1965(uParam0, 5);
			}
			break;
		case 5:
		case 6:
		case 8:
			_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
			if (!func_1458(uParam0, 67108864))
			{
				set_ped_reset_flag(Global_35, 25, true);
			}
			set_ped_reset_flag(Global_35, 264, true);
			set_ped_reset_flag(Global_35, 321, true);
			if (func_1960(uParam0) == 5)
			{
				if (func_1985(uParam0))
				{
					func_1964(uParam0, 2);
					func_1965(uParam0, 6);
				}
			}
			if (func_1960(uParam0) == 6)
			{
				if (func_1986(uParam0))
				{
					func_1964(uParam0, 3);
					func_1965(uParam0, 8);
				}
			}
			if (uParam0->f_2075 >= 0 || func_1269(&(uParam0->f_2262)) >= 15f)
			{
				if (func_1987(uParam0, iParam5))
				{
					if (func_1988(uParam0))
					{
						uParam0->f_2075 = func_1989(uParam0);
						func_213(&(uParam0->f_2262));
						set_player_control(get_player_index(), true, 0, false);
						_display_hud_component(-1679307491);
						clear_ped_tasks(Global_35, 1, 0);
						func_1964(uParam0, 6);
						func_1965(uParam0, 9);
					}
					else
					{
						func_1964(uParam0, 4);
						func_1965(uParam0, 10);
						func_1966(uParam0, iParam5);
						return true;
					}
				}
			}
			break;
		case 9:
			if (func_1987(uParam0, iParam5))
			{
				func_1966(uParam0, iParam5);
				func_1965(uParam0, 10);
				return true;
			}
			break;
		case 10:
			return true;
	}
	return false;
}

bool func_1458(var uParam0, int iParam1)
{
	return (uParam0->f_2054 && iParam1) != 0;
}

void func_1459(var uParam0, int iParam1)
{
	uParam0->f_2054 = (uParam0->f_2054 - (uParam0->f_2054 && iParam1));
}

void func_1460(var uParam0, var uParam1)
{
	if (func_1458(uParam1, 32768))
	{
		Var0 = { func_1791(uParam0) };
		func_1990(uParam0, &Var0);
		if (func_1458(uParam1, 131072))
		{
			func_751(uParam0, 268435456);
			if (func_391(uParam0->f_865))
			{
				uParam0->f_865 = { func_1991(uParam1, uParam1->f_2074) };
			}
			if (func_391(uParam0->f_862))
			{
				uParam0->f_862 = { func_1991(uParam1, uParam1->f_2074) };
				get_ground_z_for_3d_coord(uParam0->f_862, &(uParam0->f_862.f_2), false);
				uParam0->f_862.f_2 = (uParam0->f_862.f_2 + 0.5f);
			}
		}
		if (func_1458(uParam1, 268435456))
		{
			func_1992(&(uParam0->f_860), 16384);
		}
	}
	else if (func_1458(uParam1, 524288))
	{
		func_751(uParam0, 67108864);
		func_1459(uParam1, 524288);
	}
	if (func_1973(uParam1, 128))
	{
		func_751(uParam0, 32);
	}
	if (uParam1->f_2293 != 0)
	{
		uParam0->f_872 = uParam1->f_2293;
		if (uParam1->f_2074 >= 0 && func_1967(uParam1->f_1406[uParam1->f_2074], 256))
		{
			func_1992(&(uParam0->f_860), 524288);
		}
	}
	if (*uParam1 == 0 && _0x927b810e43e99932(&(uParam1->f_2082)))
	{
		_copy_memory(&(uParam0->f_873), &(uParam1->f_2082), 16);
	}
}

void func_1461(char[4] cParam0)
{
	if (func_791(&(cParam0->f_7375), 128) || func_791(&(cParam0->f_7375), 256))
	{
		if (_does_anim_scene_exist(cParam0->f_7375.f_804))
		{
			_delete_anim_scene(cParam0->f_7375.f_804);
		}
		func_1993(&(cParam0->f_7375));
		func_1381(&(cParam0->f_7375), 128, 1);
		func_1381(&(cParam0->f_7375), 256, 1);
		func_1381(&(cParam0->f_7375), 4096, 1);
	}
}

void func_1462(char[4] cParam0)
{
	func_1994(&(cParam0->f_7375));
}

bool func_1463(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, var uParam4, char[4] cParam5)
{
	func_1995(uParam4, &cParam0);
	if (func_791(uParam4, 2) && !func_791(uParam4, 67108864))
	{
		disable_control_action(0, -842734359, false);
	}
	if (func_1996(uParam4) != 1)
	{
		func_1997(uParam4);
	}
	_0xf45e46deecf7df6e(4096, 0, 0, -1, -1);
	set_ped_reset_flag(Global_35, 134, true);
	_uiprompt_enable_prompt_type_this_frame(6);
	_0x9f9a829c6751f3c7(get_player_index(), 31, 1);
	switch (func_1996(uParam4))
	{
		case 1:
			if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (!_is_anim_scene_started(uParam4->f_804, false))
				{
					func_1998(uParam4, &cParam0, cParam5);
				}
				else if (_0xef324e9550a394d5(uParam4->f_804))
				{
					func_1999(uParam4, 4);
					return false;
				}
				else
				{
					if (func_2000(uParam4, 2))
					{
						Stack.Push(uParam4);
						Call_Loc(uParam4->f_797);
					}
					func_2001(cParam5);
				}
				func_1999(uParam4, 3);
			}
			else if (!_does_anim_scene_exist(uParam4->f_804))
			{
				if (!is_screen_fading_out())
				{
					do_screen_fade_out(0);
				}
				if (func_121(cParam5, func_33(cParam5), 262144))
				{
					if (!func_791(uParam4, 2097152))
					{
						func_1755(uParam4);
					}
				}
				else if (!is_string_null_or_empty(&(uParam4->f_806)) && (!func_8(cParam5, 8) || func_791(uParam4, 134217728)))
				{
				}
				else
				{
					func_1802(uParam4);
				}
				func_213(&(uParam4->f_1));
				func_1999(uParam4, 2);
			}
			else
			{
				if (!is_screen_fading_out() && !is_screen_faded_out())
				{
					do_screen_fade_out(0);
				}
				func_2002(uParam4);
				if (!func_26(&(uParam4->f_1)))
				{
					func_27(&(uParam4->f_1), 0);
				}
				else if (func_884(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_1999(uParam4, 4);
				}
			}
			break;
		case 2:
			if (!_does_anim_scene_exist(uParam4->f_804) || !_is_anim_scene_loaded(uParam4->f_804, true, false))
			{
				if (func_1849(uParam4, &cParam0, 1, 1))
				{
					if (!_is_anim_scene_loaded(uParam4->f_804, true, false))
					{
						func_1999(uParam4, 4);
					}
					else if (!func_391(func_2003(uParam4)) && !func_1842(Global_35, func_2003(uParam4), 100f, 1, 1))
					{
						func_1366(1);
						start_player_teleport(get_player_index(), func_2003(uParam4), 0f, true, true, true, false);
					}
				}
				else if (func_884(&(uParam4->f_1)) >= 60f)
				{
					if (_does_anim_scene_exist(uParam4->f_804))
					{
						_delete_anim_scene(uParam4->f_804);
					}
					func_1999(uParam4, 4);
				}
			}
			else if (!is_player_teleport_active() || _has_player_teleport_finished(get_player_index()))
			{
				if (func_273(cParam5) != 0 || (func_154(cParam5) == 1 && func_162(cParam5, func_33(cParam5)) >= 3))
				{
					if (!get_is_loading_screen_active())
					{
						_0xa565fac215cbc77d();
						func_16(1, 0);
						func_1998(uParam4, &cParam0, cParam5);
						func_1999(uParam4, 3);
					}
					else
					{
						shutdown_loading_screen();
					}
				}
			}
			else if (func_884(&(uParam4->f_1)) >= 60f)
			{
				if (_does_anim_scene_exist(uParam4->f_804))
				{
					_delete_anim_scene(uParam4->f_804);
				}
				func_1999(uParam4, 4);
			}
			break;
		case 3:
			func_387(uParam4);
			if (func_2000(uParam4, 2))
			{
				Stack.Push(uParam4);
				Call_Loc(uParam4->f_797);
			}
			func_2001(cParam5);
			if ((_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_started(uParam4->f_804, false)) && (_0xef324e9550a394d5(uParam4->f_804) || func_791(uParam4, 512)))
			{
				if (!func_791(uParam4, 1024) && func_2004(uParam4, 1))
				{
					set_gameplay_cam_relative_heading(0f, 1f);
					set_gameplay_cam_relative_pitch(0f, 1f);
				}
				if (!func_791(uParam4, 512))
				{
					func_213(&(uParam4->f_1));
					func_751(uParam4, 512);
					func_1999(uParam4, 4);
				}
				else if (func_791(uParam4, 524288))
				{
					if (is_screen_faded_in() || is_screen_fading_in())
					{
					}
					do_screen_fade_out(0);
				}
			}
			else
			{
				func_1997(uParam4);
			}
			if (func_791(uParam4, 524288))
			{
				if (IntToFloat(absi((func_2005(uParam4) - func_2006(uParam4)))) <= 2f)
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
				if (func_2007(uParam4, Global_35, 4))
				{
					_0x1b70811d3bf75db9(1, 1);
				}
				if ((is_screen_faded_out() || is_screen_fading_out()) && func_2006(uParam4) > 5000)
				{
					_0x1b70811d3bf75db9(1, 1);
				}
			}
			if (func_2008(uParam4))
			{
				if (!_does_anim_scene_exist(uParam4->f_804))
				{
				}
				func_2009(uParam4);
				return true;
			}
			else
			{
				if (func_791(uParam4, 67108864))
				{
					if (is_screen_faded_out())
					{
						if (!_is_anim_scene_paused(uParam4->f_804) && !_0xef324e9550a394d5(uParam4->f_804))
						{
							_delete_anim_scene_2(uParam4->f_804);
						}
						func_213(&(uParam4->f_1));
						_0x1b70811d3bf75db9(1, 1);
						func_751(uParam4, 512);
						func_1381(uParam4, 67108864, 1);
						func_1999(uParam4, 4);
					}
					else if (!is_screen_fading_out() && !is_screen_faded_out())
					{
						do_screen_fade_out(1000);
					}
				}
				else if ((((!func_791(uParam4, 16384) && !_0xef324e9550a394d5(uParam4->f_804)) && is_screen_faded_out()) && func_2006(uParam4) <= 5000) && func_2006(uParam4) >= 0)
				{
					do_screen_fade_in(1000);
				}
				if (!func_791(uParam4, 536870912) && has_anim_event_fired(Global_35, -1495039362))
				{
					func_1453(&(uParam4->f_861), 0);
					func_751(uParam4, 536870912);
				}
				if (func_2006(uParam4) >= 5000 && func_2006(uParam4) <= (func_2005(uParam4) - 5000))
				{
					func_2010();
				}
			}
			break;
		case 6:
			if (func_2008(uParam4))
			{
				func_2009(uParam4);
				return true;
			}
			break;
		case 4:
			if (func_791(uParam4, 524288))
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
						func_751(uParam4, 1073741824);
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
					if (func_2011(cParam5))
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1999(uParam4, 3);
					}
					else if (func_884(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1999(uParam4, 3);
					}
				}
				if (iVar0 == 0)
				{
					Stack.Push(!func_2000(uParam4, 4));
					Stack.Push(uParam4);
					Call_Loc(uParam4->f_798);
					if (StackVal || StackVal)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1999(uParam4, 3);
					}
					else if (func_884(&(uParam4->f_1)) >= 30f)
					{
						if (_does_anim_scene_exist(uParam4->f_804) && _is_anim_scene_paused(uParam4->f_804))
						{
							set_anim_scene_paused(uParam4->f_804, false);
						}
						func_1999(uParam4, 3);
					}
				}
				if (func_1996(uParam4) == 3)
				{
					if (func_791(uParam4, 524288))
					{
						do_screen_fade_out(0);
					}
				}
			}
			break;
		case 5:
			func_1999(uParam4, 4);
			break;
	}
	return false;
}

void func_1464(char[4] cParam0)
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
			if (decor_exist_on(get_indexed_item_in_itemset(iVar0, Global_43616), func_954()))
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

bool func_1465(int iParam0, bool bParam1)
{
	iVar0 = 1;
	MemCopy(&uVar1, {func_263(iParam0)}, 8);
	StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
	if (!is_string_null_or_empty(&cVar9))
	{
		if (!func_2012(iParam0))
		{
			iVar0 = 0;
		}
	}
	if (!bParam1)
	{
		MemCopy(&uVar1, {func_264(iParam0)}, 8);
		StringCopy(&cVar9, _get_label_text_2(&uVar1), 64);
		if (!is_string_null_or_empty(&cVar9))
		{
			if (!func_2013(iParam0))
			{
				iVar0 = 0;
			}
		}
	}
	return iVar0;
}

struct<8> func_1466(int iParam0)
{
	MemCopy(&cVar0, {func_263(iParam0)}, 8);
	StringConCat(&cVar0, "_Sounds", 64);
	return cVar0;
}

bool func_1467(int iParam0)
{
	Var0 = { func_1466(iParam0) };
	if (!is_string_null_or_empty(&Var0))
	{
		if (!_0xd9130842d7226045(&Var0, 0))
		{
			return false;
		}
	}
	return true;
}

void func_1468(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 15)
	{
		_datafile_register_query(uParam0->f_2495, iVar0, func_2014(iVar0));
		iVar0++;
	}
}

int func_1469(int iParam0)
{
	switch (iParam0)
	{
		case 23:
			return -1817923036;
		default:
			break;
	}
	return -1496612359;
}

bool func_1470(int iParam0, int iParam1)
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

bool func_1471(int iParam0, int iParam1)
{
	if (!func_515(iParam0))
	{
		return false;
	}
	if (iParam1 == 296923297 || iParam1 == 1237718549)
	{
		return true;
	}
	bVar0 = func_2015(iParam0, iParam1);
	return bVar0;
}

int func_1472(int iParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return 0;
	}
	if (!func_2016(iParam2))
	{
		return 0;
	}
	iVar0 = func_2017(iParam2, -1);
	if (!func_1470(iParam1, iVar0))
	{
		return 1;
	}
	if (decor_exist_on(iParam1, "metaped_outfit_request") && decor_exist_on(iParam1, "metaped_outfit_request_name"))
	{
		iVar1 = decor_get_int(iParam1, "metaped_outfit_request_name");
		if (iVar1 == iVar0)
		{
			return 1;
		}
		else
		{
			func_2018(iParam0, iParam1);
		}
	}
	iVar2 = _request_metaped_outfit(get_entity_model(iParam1), iVar0);
	decor_set_int(iParam1, "metaped_outfit_request", iVar2);
	decor_set_int(iParam1, "metaped_outfit_request_name", iVar0);
	return 1;
}

bool func_1473(char[4] cParam0)
{
	if (!func_2019(-1, 1))
	{
		return false;
	}
	if (func_1839(&(Local_14.f_20[0]), iVar412))
	{
		func_1840(&(Local_14.f_20[0]), iVar412);
	}
	else
	{
		return false;
	}
	if (!is_entity_dead(&(Local_14.f_20[0])))
	{
		clear_ped_tasks(&(Local_14.f_20[0]), 1, 0);
		remove_all_ped_weapons(&(Local_14.f_20[0]), true, true);
		task_stand_still(&(Local_14.f_20[0]), -1);
		func_145(cParam0, &(Local_14.f_20[0]), "ODR5_ODRLEAD", 0);
		func_151(cParam0, &(Local_14.f_20[0]), "ColmODriscoll", 0, 0, 1, 0);
		set_ped_relationship_group_hash(&(Local_14.f_20[0]), -1976316465);
		set_blocking_of_non_temporary_events(&(Local_14.f_20[0]), true);
	}
	return true;
}

bool func_1474()
{
	if (!func_2020(-1, 1))
	{
		return false;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 6)
	{
		if (!is_entity_dead(&(Local_14.f_59[iLocal_222])))
		{
			clear_ped_tasks(&(Local_14.f_59[iLocal_222]), 1, 0);
			task_stand_still(&(Local_14.f_59[iLocal_222]), -1);
			set_ped_relationship_group_hash(&(Local_14.f_59[iLocal_222]), -1976316465);
			set_blocking_of_non_temporary_events(&(Local_14.f_59[iLocal_222]), true);
			set_ped_config_flag(&(Local_14.f_59[iLocal_222]), 186, false);
			set_entity_only_damaged_by_player(&(Local_14.f_59[iLocal_222]), true);
			if (iLocal_222 == 5)
			{
				iVar0 = _0x9f67929d98e7c6e8(&(Local_14.f_59[iLocal_222]), 860033945, 0, 0);
				if (iVar0 != 0)
				{
					remove_weapon_from_ped(&(Local_14.f_59[iLocal_222]), iVar0, true, -142743235);
				}
				iVar0 = _0x9f67929d98e7c6e8(&(Local_14.f_59[iLocal_222]), 970310034, 0, 0);
				if (iVar0 != 0)
				{
					remove_weapon_from_ped(&(Local_14.f_59[iLocal_222]), iVar0, true, -142743235);
				}
				iVar0 = _0x9f67929d98e7c6e8(&(Local_14.f_59[iLocal_222]), -594562071, 0, 0);
				if (iVar0 != 0)
				{
					remove_weapon_from_ped(&(Local_14.f_59[iLocal_222]), iVar0, true, -142743235);
				}
			}
		}
		iLocal_222++;
	}
	return true;
}

bool func_1475()
{
	if (!func_2021(-1, 1))
	{
		return false;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 2)
	{
		if (!is_entity_dead(&(Local_14.f_9[iLocal_222])))
		{
			remove_all_ped_weapons(&(Local_14.f_9[iLocal_222]), true, true);
			clear_ped_tasks(&(Local_14.f_9[iLocal_222]), 1, 0);
			task_stand_still(&(Local_14.f_9[iLocal_222]), -1);
			set_ped_relationship_group_hash(&(Local_14.f_9[iLocal_222]), -1976316465);
			set_blocking_of_non_temporary_events(&(Local_14.f_9[iLocal_222]), true);
			set_ped_config_flag(&(Local_14.f_9[iLocal_222]), 186, false);
		}
		iLocal_222++;
	}
	return true;
}

bool func_1476()
{
	if (!func_2022(-1, 1))
	{
		return false;
	}
	if (!is_entity_dead(&(Local_14.f_46[0])))
	{
		clear_ped_tasks(&(Local_14.f_46[0]), 1, 0);
		task_stand_still(&(Local_14.f_46[0]), -1);
		set_ped_relationship_group_hash(&(Local_14.f_46[0]), -1976316465);
		set_blocking_of_non_temporary_events(&(Local_14.f_46[0]), true);
		_0x67e21acc5c0c970c(&(Local_14.f_46[0]), 2, false);
	}
	return true;
}

bool func_1477()
{
	if (!func_2023(-1, 1))
	{
		return false;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 1)
	{
		if (!is_entity_dead(&(Local_14.f_50[iLocal_222])))
		{
			clear_ped_tasks(&(Local_14.f_50[iLocal_222]), 1, 0);
			task_stand_still(&(Local_14.f_50[iLocal_222]), -1);
			set_ped_relationship_group_hash(&(Local_14.f_50[iLocal_222]), -1976316465);
			set_blocking_of_non_temporary_events(&(Local_14.f_50[iLocal_222]), true);
			_hide_ped_weapons(&(Local_14.f_50[iLocal_222]), 2, true);
			_set_ped_outfit_preset(&(Local_14.f_50[iLocal_222]), 2, 0);
			_update_ped_variation(&(Local_14.f_50[iLocal_222]), true, true, true, true, false);
		}
		iLocal_222++;
	}
	if (!does_entity_exist(iVar635))
	{
		iLocal_637 = create_object(iVar426, func_1775(7, 0), true, true, false, false, true);
	}
	return true;
}

bool func_1478(char[4] cParam0)
{
	if (!func_2024(-1, 1))
	{
		iLocal_222 = 0;
		return false;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 3)
	{
		if (!is_entity_dead(&(Local_14.f_3[iLocal_222])))
		{
			remove_all_ped_weapons(&(Local_14.f_3[iLocal_222]), true, true);
			set_ped_config_flag(&(Local_14.f_3[iLocal_222]), 186, false);
			set_entity_only_damaged_by_player(&(Local_14.f_3[iLocal_222]), true);
			if (iLocal_222 == 1)
			{
				func_145(cParam0, &(Local_14.f_3[iLocal_222]), "ODR5_ANNOUNCER", 0);
			}
			if (iLocal_222 == 2)
			{
				func_1492(&(Local_14.f_3[iLocal_222]), iVar417, 10, 5, 0, 1056964608, 1065353216, 0);
				set_ped_infinite_ammo(&(Local_14.f_3[iLocal_222]), true, iVar417);
			}
			set_ped_relationship_group_hash(&(Local_14.f_3[iLocal_222]), -1976316465);
			set_blocking_of_non_temporary_events(&(Local_14.f_3[iLocal_222]), true);
		}
		iLocal_222++;
	}
	return true;
}

bool func_1479(char[4] cParam0)
{
	if (!func_2025(-1, 1))
	{
		return false;
	}
	if (!func_2026(-1, 1))
	{
		iLocal_411 = 0;
		return false;
	}
	switch (iVar408)
	{
		case 0:
			iLocal_222 = 0;
			while (iLocal_222 <= 3)
			{
				if (!is_entity_dead(&(Local_14.f_28[iLocal_222])))
				{
					remove_all_ped_weapons(&(Local_14.f_28[iLocal_222]), true, true);
					set_ped_relationship_group_hash(&(Local_14.f_28[iLocal_222]), -1976316465);
					set_blocking_of_non_temporary_events(&(Local_14.f_28[iLocal_222]), true);
					if (iLocal_222 == 0)
					{
						func_145(cParam0, &(Local_14.f_28[0]), "ODR5_CROWD_M", 0);
					}
				}
				iLocal_222++;
			}
			iLocal_411 = 1;
			return false;
		case 1:
			iLocal_222 = 4;
			while (iLocal_222 <= 7)
			{
				if (!is_entity_dead(&(Local_14.f_28[iLocal_222])))
				{
					remove_all_ped_weapons(&(Local_14.f_28[iLocal_222]), true, true);
					set_ped_relationship_group_hash(&(Local_14.f_28[iLocal_222]), -1976316465);
					set_blocking_of_non_temporary_events(&(Local_14.f_28[iLocal_222]), true);
					if (iLocal_222 == 0)
					{
						func_145(cParam0, &(Local_14.f_28[0]), "ODR5_CROWD_M", 0);
					}
				}
				iLocal_222++;
			}
			iLocal_411 = 2;
			return false;
		case 2:
			iLocal_222 = 8;
			while (iLocal_222 <= 11)
			{
				if (!is_entity_dead(&(Local_14.f_28[iLocal_222])))
				{
					remove_all_ped_weapons(&(Local_14.f_28[iLocal_222]), true, true);
					set_ped_relationship_group_hash(&(Local_14.f_28[iLocal_222]), -1976316465);
					set_blocking_of_non_temporary_events(&(Local_14.f_28[iLocal_222]), true);
					if (iLocal_222 == 0)
					{
						func_145(cParam0, &(Local_14.f_28[0]), "ODR5_CROWD_M", 0);
					}
				}
				iLocal_222++;
			}
			iLocal_411 = 3;
			return false;
		case 3:
			iLocal_222 = 12;
			while (iLocal_222 <= 14)
			{
				if (!is_entity_dead(&(Local_14.f_28[iLocal_222])))
				{
					remove_all_ped_weapons(&(Local_14.f_28[iLocal_222]), true, true);
					set_ped_relationship_group_hash(&(Local_14.f_28[iLocal_222]), -1976316465);
					set_blocking_of_non_temporary_events(&(Local_14.f_28[iLocal_222]), true);
					if (iLocal_222 == 0)
					{
						func_145(cParam0, &(Local_14.f_28[0]), "ODR5_CROWD_M", 0);
					}
				}
				iLocal_222++;
			}
			iLocal_411 = 4;
			return false;
		case 4:
			iLocal_222 = 0;
			while (iLocal_222 <= 3)
			{
				if (!is_entity_dead(&(Local_14.f_87[iLocal_222])))
				{
					remove_all_ped_weapons(&(Local_14.f_87[iLocal_222]), true, true);
					set_ped_relationship_group_hash(&(Local_14.f_87[iLocal_222]), 841021282);
					set_blocking_of_non_temporary_events(&(Local_14.f_87[iLocal_222]), true);
					if (iLocal_222 == 0)
					{
						func_145(cParam0, &(Local_14.f_87[0]), "ODR5_CROWD_F", 0);
					}
				}
				iLocal_222++;
			}
			iLocal_411 = 5;
			return false;
		case 5:
			iLocal_222 = 4;
			while (iLocal_222 <= 7)
			{
				if (!is_entity_dead(&(Local_14.f_87[iLocal_222])))
				{
					remove_all_ped_weapons(&(Local_14.f_87[iLocal_222]), true, true);
					set_ped_relationship_group_hash(&(Local_14.f_87[iLocal_222]), 841021282);
					set_blocking_of_non_temporary_events(&(Local_14.f_87[iLocal_222]), true);
					if (iLocal_222 == 0)
					{
						func_145(cParam0, &(Local_14.f_87[0]), "ODR5_CROWD_F", 0);
					}
				}
				iLocal_222++;
			}
			break;
	}
	return true;
}

bool func_1480()
{
	if (!func_2027(-1, 1))
	{
		return false;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 2)
	{
		if (!is_entity_dead(&(Local_14.f_112[iLocal_222])))
		{
			clear_ped_tasks(&(Local_14.f_112[iLocal_222]), 1, 0);
			task_stand_still(&(Local_14.f_112[iLocal_222]), -1);
			set_ped_config_flag(&(Local_14.f_112[iLocal_222]), 186, false);
			set_entity_collision(&(Local_14.f_112[iLocal_222]), false, false);
			set_entity_visible(&(Local_14.f_112[iLocal_222]), false);
			freeze_entity_position(&(Local_14.f_112[iLocal_222]), true);
			set_blocking_of_non_temporary_events(&(Local_14.f_112[iLocal_222]), true);
			set_ped_config_flag(&(Local_14.f_112[iLocal_222]), 330, true);
			set_ped_config_flag(&(Local_14.f_112[iLocal_222]), 315, true);
			set_ped_config_flag(&(Local_14.f_112[iLocal_222]), 178, true);
		}
		iLocal_222++;
	}
	return true;
}

bool func_1481(char[4] cParam0)
{
	if (!func_2028(-1, 1))
	{
		return false;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 3)
	{
		if (!is_entity_dead(&(Local_14.f_14[iLocal_222])))
		{
			remove_all_ped_weapons(&(Local_14.f_14[iLocal_222]), true, true);
			set_ped_config_flag(&(Local_14.f_14[iLocal_222]), 186, false);
			if (iLocal_222 == 2)
			{
				func_145(cParam0, &(Local_14.f_14[2]), "ODR5_COP", 0);
			}
			else if (iLocal_222 == 0)
			{
				func_1492(&(Local_14.f_14[iLocal_222]), iVar417, 10, 5, 0, 1056964608, 1065353216, 0);
				set_current_ped_weapon(&(Local_14.f_14[iLocal_222]), iVar417, false, 0, false, false);
				set_ped_infinite_ammo(&(Local_14.f_14[iLocal_222]), true, iVar417);
			}
			set_blocking_of_non_temporary_events(&(Local_14.f_14[iLocal_222]), true);
		}
		iLocal_222++;
	}
	return true;
}

bool func_1482()
{
	if (!func_2029(-1, 1))
	{
		return false;
	}
	iLocal_222 = 0;
	while (iLocal_222 < 2)
	{
		if (!is_entity_dead(&(Local_14.f_78[iLocal_222])))
		{
			clear_ped_tasks(&(Local_14.f_78[iLocal_222]), 1, 0);
			task_stand_still(&(Local_14.f_78[iLocal_222]), -1);
			set_ped_relationship_group_hash(&(Local_14.f_78[iLocal_222]), -1976316465);
			set_ped_config_flag(&(Local_14.f_78[iLocal_222]), 186, false);
			set_entity_only_damaged_by_player(&(Local_14.f_78[iLocal_222]), true);
			set_entity_visible(&(Local_14.f_78[iLocal_222]), false);
			set_entity_invincible(&(Local_14.f_78[iLocal_222]), true);
			freeze_entity_position(&(Local_14.f_78[iLocal_222]), true);
			set_blocking_of_non_temporary_events(&(Local_14.f_78[iLocal_222]), true);
		}
		iLocal_222++;
	}
	return true;
}

void func_1483()
{
	iLocal_222 = 0;
	while (iLocal_222 < 6)
	{
		if (!is_entity_dead(&(Local_14.f_59[iLocal_222])))
		{
			if (func_1338())
			{
				task_play_anim(&(Local_14.f_59[iLocal_222]), "SCRIPT_STORY@DST5@ig@ig_unapproved", "dead_b", 8f, -8f, -1, 131072, 0f, false, 0, false, 0, false);
			}
			else
			{
				task_play_anim(&(Local_14.f_59[iLocal_222]), "SCRIPT_STORY@DST5@ig@ig_unapproved", "dead_c", 8f, -8f, -1, 131072, 0f, false, 0, false, 0, false);
			}
		}
		iLocal_222++;
	}
}

void func_1484()
{
	func_943(Local_14.f_46[0]);
}

void func_1485()
{
	iLocal_223 = 4;
	iLocal_222 = 0;
	while (iLocal_222 < 1)
	{
		if (!is_entity_dead(&(Local_14.f_50[iLocal_222])))
		{
			func_1240(&(Local_14.f_50[iLocal_222]), func_501(3, iLocal_223), 2, 1073741824);
			task_play_anim(&(Local_14.f_50[iLocal_222]), "SCRIPT_STORY@DST5@ig@ig_unapproved", "dead_e", 8f, -8f, -1, 131072, 0f, false, 0, false, 0, false);
		}
		iLocal_223++;
		iLocal_222++;
	}
}

void func_1486()
{
	if (!is_entity_dead(&(Local_14.f_24[0])))
	{
		func_1240(&(Local_14.f_24[0]), func_216(6, 1), 2, 1073741824);
		func_1845(&(Local_14.f_24[0]), 0, 0);
	}
}

bool func_1487(var uParam0, int iParam1)
{
	return (uParam0->f_1 && iParam1) != 0;
}

void func_1488(struct<2> Param0, int iParam2)
{
	if (!func_249(Param0))
	{
		return;
	}
	if (!does_entity_exist(iParam2))
	{
		return;
	}
	if (!func_2030(Param0, iParam2))
	{
		add_to_itemset(iParam2, Param0);
	}
}

void func_1489(var uParam0, int iParam1)
{
	uParam0->f_1 = (uParam0->f_1 || iParam1);
}

void func_1490()
{
	if (!func_2031())
	{
		return;
	}
	func_2032();
}

int func_1491(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (is_entity_dead(iParam0))
	{
		return 0;
	}
	if (iParam1 == -1)
	{
		return 0;
	}
	iVar0 = func_1683(iParam1);
	if (iParam4 != 0)
	{
		iVar0 = iParam4;
	}
	else if (iParam1 > -1 && iParam1 <= 5)
	{
		iVar0 = func_2033(iParam1);
	}
	if ((bParam3 && func_1684(iParam1, 4096)) && Global_1946804->f_1497 == iParam4)
	{
		return 1;
	}
	Global_1905941 = iParam1;
	if ((iParam1 > 5 || iParam4 != 0) && !func_2034(iVar0, Global_1946804->f_1))
	{
		return 0;
	}
	if (bParam2)
	{
		func_2035(Global_40.f_7729, 4096);
		func_1685(&Global_1905941, 4096);
		Global_40.f_7729 = &Global_1905941;
	}
	if (decor_exist_on(iParam0, "metaped_outfit_request") || decor_exist_on(iParam0, "metaped_outfit_request_name"))
	{
		func_2036(iParam0);
	}
	func_2037();
	if (!func_2038(iParam1))
	{
		func_2040(iVar0, iParam0, func_2039(iParam1), 1, 0, 1);
	}
	func_2041(iParam0);
	return 1;
}

int func_1492(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = func_2042(iParam3, 1);
	bVar1 = func_2042(iParam3, 2);
	bVar2 = !func_2042(iParam3, 4);
	bVar3 = func_2042(iParam3, 8);
	bVar4 = !func_2042(iParam3, 16);
	bVar5 = func_2042(iParam3, 32);
	bVar6 = func_2042(iParam3, 64);
	return func_1901(iParam0, iParam1, bVar0, bVar1, iParam4, bVar2, bVar3, iParam5, iParam6, iParam2, bVar4, bVar5, bParam7, bVar6);
}

void func_1493(char[4] cParam0, int iParam1, int iParam2)
{
	if (!does_entity_exist(iParam1))
	{
		return;
	}
	if (!func_1001(cParam0, iParam1, &iVar0))
	{
		return;
	}
	func_2043(cParam0->f_5423[iVar0], iParam2);
}

void func_1494(char[4] cParam0, int iParam1, int iParam2, char* sParam3, int iParam4, int iParam5)
{
	func_2044(&(cParam0->f_7375), iParam1, iParam2, sParam3, iParam4, iParam5);
}

void func_1495(int iParam0, int iParam1, bool bParam2)
{
	if (!func_515(iParam0))
	{
		return;
	}
	if (!func_1471(iParam0, iParam1))
	{
		return;
	}
	Global_40.f_4942[iParam0]->f_3 = iParam1;
	if (bParam2)
	{
		func_1006(iParam0, 25, 1);
	}
}

void func_1496(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (!is_entity_dead(iParam1))
	{
		if (func_2016(iParam2))
		{
			iVar0 = func_2017(iParam2, -1);
			if (func_1470(iParam1, iVar0))
			{
				if (func_2045(iParam1, iVar0))
				{
					if (func_2046(iParam1, iVar0))
					{
						_apply_ped_metaped_outfit(decor_get_int(iParam1, "metaped_outfit_request"), iParam1, true, false);
						func_2036(iParam1);
					}
				}
				else
				{
					_set_ped_body_component(iParam1, iVar0);
				}
			}
		}
		func_2047(iParam0, iParam1, 0);
		_update_ped_variation(iParam1, false, true, true, true, false);
		_0xe3144b932dfdff65(iParam1, 0f, -1, 1, 1);
		clear_ped_damage_decal_by_zone(iParam1, 10, "ALL");
		clear_ped_blood_damage_by_zone(iParam1, 3);
		clear_ped_blood_damage_by_zone(iParam1, 0);
		clear_ped_blood_damage_by_zone(iParam1, 5);
		clear_ped_blood_damage_by_zone(iParam1, 7);
		clear_ped_blood_damage_by_zone(iParam1, 8);
		clear_ped_blood_damage_by_zone(iParam1, 9);
		if (bParam3)
		{
			func_1006(iParam0, 66, 0);
		}
	}
}

void func_1497(int iParam0, int iParam1)
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

int func_1498(char[4] cParam0, int iParam1, char* sParam2, int iParam3, bool bParam4, bool bParam5)
{
	return func_2048(cParam0, iParam1, sParam2, iParam3, bParam4, bParam5);
}

void func_1499(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4, float fParam5, bool bParam6, bool bParam7)
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

void func_1500()
{
	func_703(&iVar0, 0, 30, 20, func_698(iVar570), func_697(iVar570), func_696(iVar570));
	func_703(&iVar1, 0, 30, 5, func_698(iVar570), func_697(iVar570), func_696(iVar570));
	func_703(&iVar2, 0, 0, 7, func_698(iVar570), func_697(iVar570), func_696(iVar570));
	func_703(&iVar3, 0, 0, 17, func_698(iVar570), func_697(iVar570), func_696(iVar570));
	func_703(&iVar4, 0, 0, 19, func_698(iVar570), func_697(iVar570), func_696(iVar570));
	if (func_2049(iVar570, iVar0) || !func_2049(iVar570, iVar1))
	{
		func_703(&iLocal_572, 0, 30, 5, func_698(iVar570), func_697(iVar570), func_696(iVar570));
	}
	else if (func_1040(iVar570, iVar1, 1) && !func_1040(iVar570, iVar2, 1))
	{
		func_703(&iLocal_572, 0, 0, 7, func_698(iVar570), func_697(iVar570), func_696(iVar570));
	}
	else if (func_1040(iVar570, iVar2, 1) && !func_1040(iVar570, iVar3, 1))
	{
		func_703(&iLocal_572, 0, 0, 15, func_698(iVar570), func_697(iVar570), func_696(iVar570));
		pause_clock(true, 0);
	}
	else if (func_2049(iVar570, iVar3) && !func_2049(iVar570, iVar4))
	{
		pause_clock(true, 0);
	}
	else if (func_2049(iVar570, iVar4) && !func_2049(iVar570, iVar0))
	{
		func_703(&iLocal_572, 0, 0, 6, func_698(iVar570), func_697(iVar570), func_696(iVar570));
	}
	func_1351(iVar570);
}

void func_1501(bool bParam0)
{
	iLocal_222 = 0;
	while (iLocal_222 < 2)
	{
		if (!is_entity_dead(&(Local_14.f_112[iLocal_222])))
		{
			clear_ped_tasks(&(Local_14.f_112[iLocal_222]), 1, 0);
			set_entity_collision(&(Local_14.f_112[iLocal_222]), true, false);
			set_entity_visible(&(Local_14.f_112[iLocal_222]), true);
			freeze_entity_position(&(Local_14.f_112[iLocal_222]), false);
		}
		iLocal_222++;
	}
	if (bParam0)
	{
		func_1240(&(Local_14.f_112[1]), func_216(2, 9), 2, 1073741824);
	}
	else
	{
		func_1240(&(Local_14.f_112[1]), func_216(2, 7), 2, 1073741824);
	}
	_set_ped_on_mount(&(Local_14.f_112[0]), &(Local_14.f_112[1]), -1, true);
	func_1306();
	task_follow_nav_mesh_to_coord(0, func_381(2, 8), 1f, -1, 0.25f, 1, 40000f);
	task_smart_flee_ped(0, Global_35, 9999f, -1, 0, 1f, &(Local_14.f_112[1]));
	func_1307(&(Local_14.f_112[0]), 1, -1082130432, -1082130432);
	if (bParam0)
	{
		force_ped_motion_state(&(Local_14.f_112[0]), -668482597, false, 0, false);
		force_ped_motion_state(&(Local_14.f_112[1]), -668482597, false, 0, false);
	}
}

void func_1502(var uParam0, char* sParam1)
{
	func_2050(uParam0);
	_set_anim_scene_playback_list_bool(*uParam0, sParam1, true);
	start_anim_scene(*uParam0);
}

void func_1503(int iParam0)
{
	func_1015(iParam0, 4, 1);
}

int func_1504(int iParam0, vector3 vParam1, float fParam4, bool bParam5)
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
	func_451(vParam1, fParam4, 0);
	clear_ped_tasks(iParam0, 1, 0);
	iVar0 = -1805387726;
	iVar1 = _find_closest_active_scenario_point_of_type(vParam1, iVar0, fParam4, 1, false);
	if (_does_scenario_point_exist(iVar1))
	{
		_task_use_scenario_point(iParam0, iVar1, 0, -1, true, bParam5, iVar0, false, -1f, false);
	}
	else
	{
		task_stand_still(iParam0, -1);
	}
	return 1;
}

bool func_1505()
{
	func_1189(131072);
	return func_2051(Global_35, &(Global_1946804->f_1735));
}

void func_1506(int iParam0, bool bParam1)
{
	func_2052(&(Global_1946804->f_1735.f_120));
	func_2053(iParam0, &(Global_1946804->f_1735), bParam1, 0, 1, 1);
}

bool func_1507()
{
	return func_2054(Global_35, &(Global_1946804->f_1735));
}

void func_1508(char[4] cParam0)
{
	if (func_33(cParam0) == iLocal_139)
	{
		if (!is_entity_dead(iVar663))
		{
			_0xc6981aff6d2a71c2(iVar663);
			set_ped_reset_flag(iVar663, 94, true);
		}
		if (!is_entity_dead(iVar664))
		{
			_0xc6981aff6d2a71c2(iVar664);
			set_ped_reset_flag(iVar664, 94, true);
		}
	}
}

void func_1509(char[4] cParam0)
{
	if ((func_33(cParam0) == iLocal_141 || func_33(cParam0) == iLocal_142) || func_33(cParam0) == iLocal_143)
	{
		fVar0 = 0f;
		fVar1 = 0f;
		_0xf45e46deecf7df6e(10240, 0, 0, -1, -1);
	}
	else if (func_33(cParam0) == iLocal_139)
	{
		fVar1 = 0.3f;
		fVar0 = 0.5f;
	}
	_0xab0d553fe20a6e25(fVar0);
	set_random_vehicle_density_multiplier_this_frame(fVar1);
	set_parked_vehicle_density_multiplier_this_frame(0f);
	set_disable_random_trains_this_frame(true);
}

void func_1510(char[4] cParam0)
{
	if (func_33(cParam0) == iLocal_139)
	{
		func_2055(cParam0, iVar663, 0, 1);
		func_2055(cParam0, iVar664, 11, 1);
	}
	else if (func_33(cParam0) == iLocal_140)
	{
		func_2055(cParam0, iVar663, 0, 1);
		func_2055(cParam0, iVar664, 11, 0);
	}
	else if (func_33(cParam0) == iLocal_141 || func_33(cParam0) == iLocal_142)
	{
		func_2055(cParam0, iVar663, 0, 0);
		func_2055(cParam0, iVar664, 11, 0);
	}
	else if (func_33(cParam0) == iLocal_143)
	{
		func_2055(cParam0, iVar663, 0, 1);
		func_2055(cParam0, iVar664, 11, 1);
	}
	else
	{
		func_2055(cParam0, iVar663, 0, 0);
		func_2055(cParam0, iVar664, 11, 0);
	}
}

void func_1511()
{
	func_2056(15, 0, 0, 0);
}

void func_1512(bool bParam0)
{
	if (bParam0)
	{
		func_2057(4);
	}
	func_2057(2);
	set_bit(&(Global_1956580->f_1), 0);
}

void func_1513(char[4] cParam0)
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
				if (func_2058(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_1410(cParam0->f_8269[iVar19]);
				}
				else if (func_2059(cParam0, cParam0->f_8269[iVar19], iVar16, iVar17, iVar18))
				{
					func_221(cParam0->f_8269[iVar19]);
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
				if (func_2060(cParam0, cParam0->f_8269.f_641[iVar19], iVar16, iVar17, iVar18, 1))
				{
					func_2061(cParam0->f_8269.f_641[iVar19]);
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
				if (func_2060(cParam0, cParam0->f_8269.f_1282[iVar19], iVar16, iVar17, iVar18, 0))
				{
					if (func_211(cParam0->f_8269.f_1282[iVar19], 1))
					{
						if (func_210(cParam0->f_8269.f_1282[iVar19], 4))
						{
							func_2062(&(cParam0->f_8269));
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
				if (func_2058(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2063(cParam0, cParam0->f_8269.f_2243[iVar19], 1);
					func_496(cParam0->f_8269.f_2243[iVar19], 1);
				}
				else if (func_2059(cParam0, cParam0->f_8269.f_2243[iVar19], iVar16, iVar17, iVar18))
				{
					func_2063(cParam0, cParam0->f_8269.f_2243[iVar19], 0);
					func_496(cParam0->f_8269.f_2243[iVar19], 2);
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

bool func_1514(char[4] cParam0)
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
		return ((get_is_task_active(Global_35, 3) || func_2064(Global_35, -2017877118)) || _0x3ab6c7b0bb0df4b1(Global_35, -1));
	}
	return false;
}

void func_1515()
{
	_0x8910c24b7e0046ec();
	disable_control_action(0, -1404316431, false);
	func_1512(0);
	func_2065();
}

void func_1516(char[4] cParam0, int iParam1, int iParam2)
{
	func_1305(&(cParam0->f_1[func_132(iParam1)]->f_11), iParam2);
	if (iParam2 == 8388608)
	{
		_display_hud_component(-1679307491);
	}
}

void func_1517(var uParam0)
{
	if (func_514(uParam0, 32768))
	{
		return;
	}
	bVar0 = func_514(uParam0, 1024);
	if (func_514(uParam0, 128) || bVar0)
	{
		if (func_514(uParam0, 4096))
		{
			if (!func_514(uParam0, 2048))
			{
				iVar1 = get_blip_from_entity(*uParam0);
				if (does_blip_exist(iVar1))
				{
					_blip_set_modifier(iVar1, -1186550032);
				}
				func_2043(uParam0, 2048);
				return;
			}
		}
		else if (func_514(uParam0, 2048))
		{
			iVar2 = get_blip_from_entity(*uParam0);
			if (does_blip_exist(iVar2))
			{
				_set_blip_flash_style(iVar2, -1186550032);
			}
			func_2066(uParam0, 2048);
		}
		if (func_514(uParam0, 512))
		{
			if (func_515(uParam0->f_10))
			{
				if (func_870(Global_35, *uParam0, 150f, 1) || bVar0)
				{
					if (!func_2067(uParam0->f_10))
					{
						func_520(uParam0->f_10, 1);
						func_2068(uParam0->f_10, 0);
					}
				}
				else if ((func_2067(uParam0->f_10) && !bVar0) && !func_514(uParam0, 16384))
				{
					func_520(uParam0->f_10, 0);
					func_2068(uParam0->f_10, 1);
				}
			}
		}
		else if (!does_blip_exist(uParam0->f_8))
		{
			if (!does_blip_exist(get_blip_from_entity(*uParam0)))
			{
				if (func_870(Global_35, *uParam0, 150f, 1))
				{
					uParam0->f_8 = _blip_add_for_entity(422991367, *uParam0);
					if (!is_string_null_or_empty(uParam0->f_4))
					{
						set_blip_name_from_text_file(uParam0->f_8, uParam0->f_4);
					}
				}
			}
		}
		else if ((does_blip_exist(get_blip_from_entity(*uParam0)) && uParam0->f_8 != get_blip_from_entity(*uParam0)) || !func_870(Global_35, *uParam0, 150f, 1))
		{
			remove_blip(&(uParam0->f_8));
		}
	}
	else if (func_514(uParam0, 512))
	{
		if (func_515(uParam0->f_10))
		{
			if (func_2067(uParam0->f_10))
			{
				func_520(uParam0->f_10, 0);
				func_2068(uParam0->f_10, 1);
			}
		}
	}
	else if (does_blip_exist(uParam0->f_8))
	{
		remove_blip(&(uParam0->f_8));
	}
}

bool func_1518(int iParam0)
{
	return (iParam0 < func_392() && iParam0 >= 0);
}

int func_1519(int iParam0)
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

bool func_1520(int iParam0)
{
	return (iParam0 < 9 && iParam0 >= 0);
}

bool func_1521(char[4] cParam0, int iParam1, int iParam2)
{
	iVar0 = func_132(iParam1);
	if (!func_1518(iVar0))
	{
		return false;
	}
	iVar1 = func_1519(iParam2);
	if (!func_1520(iVar1))
	{
		return false;
	}
	return is_bit_set(cParam0->f_1[iVar0]->f_17, iVar1);
}

int func_1522(struct<2> Param0, int iParam2)
{
	if (!func_249(Param0))
	{
		return 0;
	}
	iVar0 = get_indexed_item_in_itemset(iParam2, Param0);
	iVar1 = iVar0;
	return iVar1;
}

void func_1523(char[4] cParam0)
{
	func_2069(cParam0);
	if (func_273(cParam0) == 1 && is_screen_faded_out())
	{
		_0x297b72e2af094742(6);
	}
	else if (func_273(cParam0) == 0 && !func_8(cParam0, 8))
	{
		func_878(cParam0);
	}
	func_51(&(cParam0->f_10792));
	func_2070(cParam0);
	func_2071(cParam0, 67108864);
	func_2071(cParam0, 8192);
	func_880(cParam0, 4);
	func_880(cParam0, 512);
	func_880(cParam0, 65536);
	func_880(cParam0, 1024);
	func_880(cParam0, 262144);
	func_880(cParam0, 16777216);
	func_880(cParam0, 64);
	func_259(cParam0, 128);
	func_99(cParam0, -2147483648);
	func_2072(cParam0, 1);
	if (func_120(cParam0, 4194304))
	{
		func_140(cParam0, func_33(cParam0), 1073741824);
	}
	func_259(cParam0, 4194304);
	func_259(cParam0, 8388608);
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
	func_553(&(cParam0->f_13106));
	func_213(&(cParam0->f_13112));
	func_2073(cParam0, func_121(cParam0, func_33(cParam0), 1));
	if (!func_121(cParam0, func_33(cParam0), 1024))
	{
		_display_hud_component(-1679307491);
	}
	if (!func_121(cParam0, func_33(cParam0), 32768))
	{
		func_229(1);
	}
	if (func_914(cParam0, func_35(cParam0)) != -1 && _0x62de46f061caa468() < func_914(cParam0, func_35(cParam0)))
	{
		_0xf008e0ba1fe1d644((func_914(cParam0, func_35(cParam0)) - _0x62de46f061caa468()));
	}
	if (_missiondata_timecycle_box_exists())
	{
		_missiondata_timecycle_box_delete();
	}
	Var0 = { func_2074(cParam0) };
	_missiondata_timecycle_box_set_modifier(&Var0);
	Global_43805 = -1;
	if (func_121(cParam0, func_33(cParam0), 1))
	{
		func_223(Global_1935630, 2097152);
	}
	else
	{
		func_71(Global_1935630, 2097152);
	}
	func_2075(cParam0);
	if (func_33(cParam0) == 25 && func_82(32768))
	{
		func_2076(cParam0, 16);
	}
	if (func_121(cParam0, func_33(cParam0), 512))
	{
		func_2077(1f, 0f, 0f, 0f);
	}
	else
	{
		func_44();
	}
}

bool func_1524(char[4] cParam0)
{
	if (func_120(cParam0, 4) && !func_29())
	{
		return true;
	}
	return false;
}

void func_1525(char[4] cParam0)
{
	func_2001(cParam0);
}

void func_1526(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 65)
	{
		func_1404(uParam0->f_13[iVar0], iParam1);
		iVar0++;
	}
}

void func_1527(char[4] cParam0)
{
	func_2078(cParam0);
	if (_get_ped_crouch_movement(Global_35))
	{
		func_99(cParam0, 1024);
	}
}

bool func_1528(var uParam0)
{
	return (_does_anim_scene_exist(uParam0->f_804) && _is_anim_scene_started(uParam0->f_804, false));
}

bool func_1529(char[4] cParam0)
{
	return true;
}

void func_1530(char[4] cParam0, char[32] cParam1)
{
	cParam0->f_10784 = { cParam1 };
}

bool func_1531(var uParam0, int iParam1)
{
	iVar0 = func_2079(iParam1);
	return (uParam0 && iVar0) != 0;
}

int func_1532(char[4] cParam0, var uParam1, bool bParam2)
{
	if (Global_1935630->f_12)
	{
		return 0;
	}
	if (func_2080(cParam0, uParam1))
	{
		return 0;
	}
	if (func_515(uParam1->f_10))
	{
		set_ped_reset_flag(get_ped_index_from_entity_index(*uParam1), 53, true);
	}
	func_1517(uParam1);
	func_2081(uParam1);
	if (!bParam2)
	{
		func_2082(cParam0, uParam1);
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(0))
	{
		switch (get_event_at_index(0, iVar0))
		{
			case -140551285:
				func_2083(cParam0, uParam1, iVar0);
				break;
			case 402722103:
			case 2145012826:
				func_2084(cParam0, uParam1, iVar0);
				break;
		}
		iVar0++;
	}
	func_2085(cParam0, uParam1);
	func_2086(uParam1);
	return 0;
}

bool func_1533(char[4] cParam0)
{
	return true;
}

int func_1534(int iParam0)
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
						*iParam0 = func_2087(vVar0.z);
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

void func_1535(char[4] cParam0, char[4] cParam1, bool bParam2, int iParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, bool bParam9, bool bParam10)
{
	func_1786(cParam0, &cParam1, "", bParam9, bParam10);
}

void func_1536(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, int iParam12, int iParam13)
{
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		if (func_823((*uParam0)[iVar0]->f_2, iParam12))
		{
			func_2088(&((*uParam0)[iVar0]->f_2), iParam12);
			if (func_2089(&((*uParam0)[iVar0]->f_2), iParam13))
			{
				func_2090((*uParam0)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam1)
	{
		if (func_823((*uParam1)[iVar0]->f_4, iParam12))
		{
			func_2088(&((*uParam1)[iVar0]->f_4), iParam12);
			if (func_2089(&((*uParam1)[iVar0]->f_4), iParam13))
			{
				func_2091((*uParam1)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam2)
	{
		if (func_823((*uParam2)[iVar0]->f_2, iParam12))
		{
			func_2088(&((*uParam2)[iVar0]->f_2), iParam12);
			if (func_2089(&((*uParam2)[iVar0]->f_2), iParam13))
			{
				func_2092((*uParam2)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam3)
	{
		if (func_823((*uParam3)[iVar0]->f_2, iParam12))
		{
			func_2088(&((*uParam3)[iVar0]->f_2), iParam12);
			if (func_2089(&((*uParam3)[iVar0]->f_2), iParam13))
			{
				func_2093((*uParam3)[iVar0]);
			}
		}
		iVar0++;
	}
	if (func_823(uParam4->f_1, iParam12))
	{
		func_2088(&(uParam4->f_1), iParam12);
		if (func_2089(&(uParam4->f_1), iParam13))
		{
			func_2094(uParam4);
		}
	}
	iVar0 = 0;
	while (iVar0 < *uParam5)
	{
		if (func_823((*uParam5)[iVar0]->f_3, iParam12))
		{
			func_2088(&((*uParam5)[iVar0]->f_3), iParam12);
			if (func_2089(&((*uParam5)[iVar0]->f_3), iParam13))
			{
				func_2095((*uParam5)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam6)
	{
		if (func_823((*uParam6)[iVar0]->f_3, iParam12))
		{
			func_2088(&((*uParam6)[iVar0]->f_3), iParam12);
			if (func_2089(&((*uParam6)[iVar0]->f_3), iParam13))
			{
				func_2096((*uParam6)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam7)
	{
		if (func_823((*uParam7)[iVar0]->f_4, iParam12))
		{
			func_2088(&((*uParam7)[iVar0]->f_4), iParam12);
			if (func_2089(&((*uParam7)[iVar0]->f_4), iParam13))
			{
				func_2097((*uParam7)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam8)
	{
		if (func_823((*uParam8)[iVar0]->f_2, iParam12))
		{
			func_2088(&((*uParam8)[iVar0]->f_2), iParam12);
			if (func_2089(&((*uParam8)[iVar0]->f_2), iParam13))
			{
				func_2098((*uParam8)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam9)
	{
		if (func_823((*uParam9)[iVar0]->f_2, iParam12))
		{
			func_2088(&((*uParam9)[iVar0]->f_2), iParam12);
			if (func_2089(&((*uParam9)[iVar0]->f_2), iParam13))
			{
				func_2099((*uParam9)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam10)
	{
		if (func_823((*uParam10)[iVar0]->f_3, iParam12))
		{
			func_2088(&((*uParam10)[iVar0]->f_3), iParam12);
			if (func_2089(&((*uParam10)[iVar0]->f_3), iParam13))
			{
				func_2100((*uParam10)[iVar0]);
			}
		}
		iVar0++;
	}
	iVar0 = 0;
	while (iVar0 < *uParam11)
	{
		if (func_823((*uParam11)[iVar0]->f_2, iParam12))
		{
			func_2088(&((*uParam11)[iVar0]->f_2), iParam12);
			if (func_2089(&((*uParam11)[iVar0]->f_2), iParam13))
			{
				func_2101((*uParam11)[iVar0]);
			}
		}
		iVar0++;
	}
}

void func_1537(char[4] cParam0)
{
	iVar0 = func_2102(cParam0);
	_0x50b72a754ee64a71(iVar0);
}

void func_1538(bool bParam0, bool bParam1)
{
	if (func_2103(255) == 4)
	{
		return;
	}
	if (func_391(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_284(0);
	}
	else
	{
		if (bParam1)
		{
			func_2104(0, 0, 0, 1);
		}
		func_285(0);
		func_2105(&(Global_1109400->f_389));
		Global_1109400->f_389 = 0f;
		Global_1109400->f_389.f_5 = 1;
		Global_1109400->f_389.f_16 = 0;
		Global_1109400->f_389.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1109400->f_389.f_17.f_3 = { 0f, 0f, 0f };
		Global_1109400->f_389.f_17 = { Global_1899378->f_23.f_1, Global_1899378->f_23.f_1, Global_1899378->f_23.f_1 };
		Global_1109400->f_389.f_17.f_9 = -432403087;
		func_2106(&(Global_1109400->f_428));
		Global_1109400->f_428.f_6 = { Global_1109400->f_389.f_17.f_6 };
		Global_1109400->f_428 = Global_1109400->f_389;
		Global_1109400->f_428.f_5 = 1;
		if (bParam1)
		{
			Global_1109400->f_22.f_16 = 0;
			Global_1109400->f_22.f_17 = 0;
		}
	}
	func_2107(Global_1109400->f_389, 42);
	func_2108(Global_1109400->f_428, 42);
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
	return _create_var_string(2, func_2109(sParam1));
}

bool func_1543()
{
	return Global_1946804->f_2792;
}

int func_1544(int iParam0)
{
	iVar0 = func_952(iParam0);
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

void func_1545(int iParam0, int iParam1)
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_944(iParam0))
	{
		return;
	}
	Global_24887[iParam0] = (Global_24887[iParam0] || iParam1);
}

void func_1546(int iParam0, int iParam1)
{
	if (!func_944(iParam0))
	{
		return;
	}
	(*Global_1895087)[iParam0]->f_1 = iParam1;
}

bool func_1547(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (is_thread_active(&(Global_1934765->f_275[iVar0]), false) && &Global_1934765->f_275[iVar0] == get_id_of_this_thread())
		{
			*iParam0 = iVar0;
			return true;
		}
		iVar0++;
	}
	return false;
}

float func_1548()
{
	return (func_2110(150f, to_float(Global_1934765->f_286)) / to_float(300));
}

int func_1549()
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		if (!is_thread_active(&(Global_1934765->f_275[iVar0]), false))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1550(int iParam0, int iParam1)
{
	if (!func_962(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (&Global_1914319->f_15614[iParam0] - (Global_1914319->f_15614[iParam0] && iParam1));
}

void func_1551(int iParam0, int iParam1)
{
	if (!func_962(iParam0))
	{
		return;
	}
	Global_1914319->f_15614[iParam0] = (Global_1914319->f_15614[iParam0] || iParam1);
}

int func_1552(int iParam0)
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

void func_1553(int iParam0, bool bParam1)
{
	if (!func_2111(iParam0))
	{
		return;
	}
	if ((bParam1 && func_2112(iParam0, 512)) || (!bParam1 && !func_2112(iParam0, 512)))
	{
		return;
	}
	if (bParam1)
	{
		func_2113(iParam0, 512);
	}
	else
	{
		func_2114(iParam0, 512);
	}
	if (func_2115(iParam0))
	{
		_0x9b4e793b1cb6550a();
	}
}

bool func_1554(int iParam0)
{
	return iParam0 != 0;
}

bool func_1555(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return false;
	}
	return (Global_1393237->f_11[iParam0]->f_10 && iParam1) != 0;
}

void func_1556(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1393237->f_11)
	{
		return;
	}
	Global_1393237->f_11[iParam0]->f_10 = (Global_1393237->f_11[iParam0]->f_10 || iParam1);
}

bool func_1557(int iParam0, int iParam1)
{
	if (!func_510(iParam0))
	{
		return false;
	}
	return (Global_1310750[iParam0] && iParam1) != 0;
}

bool func_1558(int iParam0)
{
	switch (iParam0)
	{
		case 6:
		case 53:
		case 101:
		case 108:
			return true;
		default:
			break;
	}
	return false;
}

void func_1559(int iParam0, int iParam1)
{
	if (!func_510(iParam0))
	{
		return;
	}
	(*Global_1310750)[iParam0]->f_1 = ((*Global_1310750)[iParam0]->f_1 - ((*Global_1310750)[iParam0]->f_1 && iParam1));
}

int func_1560(int iParam0)
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

int func_1561(int iParam0)
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

void func_1562(int iParam0, int iParam1)
{
	Var0 = { *Global_1898164->f_1[iParam0] };
	*Global_1898164->f_1[iParam0] = { *Global_1898164->f_1[iParam1] };
	*Global_1898164->f_1[iParam1] = { Var0 };
}

int func_1563(int iParam0, int iParam1, int iParam2)
{
	iVar0 = func_2116(iParam0, 1);
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1564(int iParam0)
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

void func_1565()
{
	if (func_20() != -1)
	{
		return;
	}
	if (!func_390())
	{
		return;
	}
	func_2117(&(Global_40.f_40));
}

void func_1566()
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

bool func_1567()
{
	return !func_391(Global_1310720->f_1);
}

int func_1568()
{
	return Global_40.f_4283.f_1;
}

int func_1569()
{
	return Global_40.f_4283.f_4;
}

void func_1570(vector3 vParam0, var uParam3, var uParam4)
{
	fVar0 = 1E+07f;
	fVar1 = 1E+07f;
	if (func_2118())
	{
		fVar0 = func_1026(vParam0, Global_40.f_6);
	}
	if (func_2119(33554432))
	{
		if (!func_2120(Global_40.f_2, 0f, 0f, 0f, 1056964608, 1))
		{
			fVar1 = func_1026(vParam0, Global_40.f_2);
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

float func_1571(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist2(vParam0, vParam3);
}

void func_1572()
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
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2121(909007663, 1325140787))));
	fVar0 = (fVar0 + (0.2525252f * to_float(func_2121(909007663, 2101241783))));
	fVar0 = (fVar0 + (0.2923976f * to_float(func_2121(909007663, -1296936294))));
	fVar0 = (fVar0 + (0.462963f * to_float(func_2121(909007663, -798388728))));
	fVar0 = (fVar0 + (0.9259259f * to_float(func_2121(909007663, -1787586531))));
	fVar0 = (fVar0 + (0.308642f * to_float(func_2121(909007663, -1002834519))));
	fVar0 = (fVar0 + (5.555555f * to_float(func_2121(909007663, -50600144))));
	fVar0 = (fVar0 + (0.6944444f * to_float(func_2121(909007663, -348503123))));
	fVar0 = (fVar0 + (0.3703704f * to_float(func_2121(909007663, -528798161))));
	fVar0 = (fVar0 + (0.5f * func_2122(10f, to_float(func_2121(909007663, 551192206)))));
	fVar0 = (fVar0 + (0.6f * func_2122(5f, to_float(func_2121(909007663, -406093146)))));
	fVar0 = (fVar0 + (0.2f * func_2122(25f, to_float(func_2123(-1029789297)))));
	fVar0 = (fVar0 + (2f * func_2122(1f, to_float(func_2123(-843295694)))));
	fVar0 = (fVar0 + (0.3333333f * func_2122(6f, to_float(func_2123(64058978)))));
	fVar0 = (fVar0 + (3f * func_2122(1f, to_float(func_2123(795577402)))));
	iVar1 = func_2124();
	fVar0 = (fVar0 + (0.1111111f * func_2122(9f, to_float(iVar1))));
	fVar2 = (to_float(_0x5461c821d00fe15a(-2076669067, 1665658745)) / to_float(_0x62cab7db62ead434(-2076669067, 1665658745)));
	fVar2 = func_2110(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -263938772)) / to_float(_0x62cab7db62ead434(-2076669067, -263938772))));
	fVar2 = func_2110(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 228647253)) / to_float(_0x62cab7db62ead434(-2076669067, 228647253))));
	fVar2 = func_2110(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1695604435)) / to_float(_0x62cab7db62ead434(-2076669067, 1695604435))));
	fVar2 = func_2110(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -379038926)) / to_float(_0x62cab7db62ead434(-2076669067, -379038926))));
	fVar2 = func_2110(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1597499323)) / to_float(_0x62cab7db62ead434(-2076669067, 1597499323))));
	fVar2 = func_2110(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -278663717)) / to_float(_0x62cab7db62ead434(-2076669067, -278663717))));
	fVar2 = func_2110(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 586249988)) / to_float(_0x62cab7db62ead434(-2076669067, 586249988))));
	fVar2 = func_2110(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -419800938)) / to_float(_0x62cab7db62ead434(-2076669067, -419800938))));
	fVar2 = func_2110(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -1362069171)) / to_float(_0x62cab7db62ead434(-2076669067, -1362069171))));
	fVar2 = func_2110(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, -740350755)) / to_float(_0x62cab7db62ead434(-2076669067, -740350755))));
	fVar2 = func_2110(fVar2, (to_float(_0x5461c821d00fe15a(-2076669067, 1511070393)) / to_float(_0x62cab7db62ead434(-2076669067, 1511070393))));
	fVar0 = (fVar0 + func_2122(1f, fVar2));
	fVar0 = (fVar0 + (0.05f * func_2122(to_float(20), to_float(func_2125()))));
	if (func_2126(40))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2126(42))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2126(48))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2126(50))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	if (func_2126(52))
	{
		fVar0 = (fVar0 + (1f * 1f));
	}
	fVar2 = (to_float(_0x5461c821d00fe15a(1765845133, 499813453)) / to_float(_0x62cab7db62ead434(1765845133, 499813453)));
	fVar2 = func_2110(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 666607663)) / to_float(_0x62cab7db62ead434(1765845133, 666607663))));
	fVar2 = func_2110(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, -220219788)) / to_float(_0x62cab7db62ead434(1765845133, -220219788))));
	fVar2 = func_2110(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 218622660)) / to_float(_0x62cab7db62ead434(1765845133, 218622660))));
	fVar2 = func_2110(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 390004462)) / to_float(_0x62cab7db62ead434(1765845133, 390004462))));
	fVar2 = func_2110(fVar2, (to_float(_0x5461c821d00fe15a(1765845133, 6410548)) / to_float(_0x62cab7db62ead434(1765845133, 6410548))));
	fVar0 = (fVar0 + (1f * func_2122(1f, fVar2)));
	fVar0 = (fVar0 + (0.2f * func_2122(5f, to_float(func_2123(1933084904)))));
	fVar0 = (fVar0 + (0.2f * func_2122(5f, to_float(func_2121(-1756227506, -734935893)))));
	fVar0 = (fVar0 + (to_float(func_1643(_0x729d52f61a5a9e22(1979337996), 50)) / to_float(50)));
	fVar0 = (fVar0 + (to_float(func_1643(_0x729d52f61a5a9e22(-2125891426), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1643(_0x729d52f61a5a9e22(1630085303), 10)) / to_float(10)));
	fVar0 = (fVar0 + _0x725d52f21a5e9e22(-1658238931));
	fVar0 = (fVar0 + (to_float(func_1643(_0x729d52f61a5a9e22(1807539419), 20)) / to_float(20)));
	fVar0 = (fVar0 + (to_float(func_1643(_0x729d52f61a5a9e22(717108105), 10)) / to_float(10)));
	fVar0 = (fVar0 + (to_float(func_1643(_0x729d52f61a5a9e22(-2143405780), 48)) / to_float(48)));
	func_2127(&iVar3, &iVar4);
	fVar0 = (fVar0 + (2f * func_2122((to_float(iVar3) / to_float(iVar4)), 1f)));
	fVar0 = (fVar0 + (2f * func_2122(1f, to_float(func_2128(-2116919750)))));
	fVar5 = to_float(func_2129());
	fVar0 = (fVar0 + ((3f * fVar5) / to_float(9)));
	fVar0 = (fVar0 + ((1f / 4f) * func_2122(1f, to_float(func_2121(1511238709, -747096482)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2122(1f, to_float(func_2121(1511238709, 549911940)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2122(1f, to_float(func_2121(1511238709, -760820978)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2122(1f, to_float(func_2121(1511238709, -1672018311)))));
	fVar0 = (fVar0 + (0.2f * func_2122(5f, to_float(func_2123(-1342635612)))));
	fVar0 = (fVar0 + (0.5f * func_2122(1f, to_float(func_2123(-2061916883)))));
	fVar0 = (fVar0 + (0.5f * func_2122(1f, to_float(func_2123(281346304)))));
	fVar0 = (fVar0 + (0.5f * func_2122(1f, to_float(func_2123(-299021541)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2122(1f, to_float(func_2121(-1276738576, 307971639)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2122(1f, to_float(func_2121(-1276738576, -1555359431)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2122(1f, to_float(func_2121(-1276738576, 644069854)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2122(1f, to_float(func_2121(-1276738576, -97115714)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2122(1f, to_float(func_2121(-1276738576, -2143405780)))));
	fVar0 = (fVar0 + ((0.5f / 6f) * func_2122(1f, to_float(func_2121(-1276738576, 1455184052)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2122(1f, to_float(func_2121(978382515, -2072933068)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2122(1f, to_float(func_2121(978382515, 574993838)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2122(1f, to_float(func_2121(978382515, -605765767)))));
	fVar0 = (fVar0 + ((1f / 4f) * func_2122(1f, to_float(func_2121(978382515, 1015970717)))));
	Var6 = { func_94(1215094015) };
	fVar8 = func_2130(Var6);
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
					func_2131(Global_1898330[iVar61]);
				}
				else
				{
					func_2132(iVar61, 0);
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

void func_1573(var uParam0, int iParam1, bool bParam2)
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

int func_1574(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
	return 1;
}

void func_1575(int iParam0)
{
	if (!func_1004(iParam0))
	{
		return;
	}
	if (!_is_base_a_persistent_character((*Global_1360165)[iParam0]->f_1))
	{
		iVar0 = func_2133(iParam0);
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

void func_1576(int iParam0)
{
	if (func_515(iParam0))
	{
		if (does_entity_exist(func_552(iParam0)))
		{
			func_712(iParam0, 67108864, 1);
			func_1008(iParam0, 19, 1);
		}
	}
}

float func_1577(int iParam0)
{
	if (!func_1004(iParam0))
	{
		return 0f;
	}
	return (*Global_1360165)[iParam0]->f_134;
}

void func_1578(int iParam0)
{
	iVar0 = func_552(iParam0);
	iVar1 = func_1009(iParam0, 0);
	func_2018(iParam0, iVar0);
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

bool func_1579(int iParam0)
{
	if (!func_1004(iParam0))
	{
		return false;
	}
	if ((*Global_1360165)[iParam0]->f_70.f_11 == 0 || (*Global_1360165)[iParam0]->f_70.f_11 == (*Global_1360165)[iParam0]->f_128)
	{
		return false;
	}
	return true;
}

bool func_1580(int iParam0)
{
	if (!func_1004(iParam0))
	{
		return false;
	}
	return (*Global_1360165)[iParam0]->f_70.f_11 == get_id_of_this_thread();
}

void func_1581(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1004(iParam0))
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
	if (!func_1004(iParam0))
	{
		return 0;
	}
	iVar0 = func_1016(iParam0);
	if (func_435(iVar0, 0))
	{
		if (func_435(_get_rider_of_mount(iVar0, false), 0) && !bParam4)
		{
			return 0;
		}
		if ((bParam1 || !func_1579(iParam0)) || func_1580(iParam0))
		{
			if (bParam2 || !(is_entity_on_screen(iVar0) && func_2134(player_ped_id(), iVar0, 1) < 10000f))
			{
				iVar1 = func_2135(iParam0, 1);
				if (iVar1 != 0)
				{
					if (!_0x88ad6cc10d8d35b2(iVar0))
					{
						set_entity_as_mission_entity(iVar0, true, true);
					}
					func_2136(iParam0);
					_0x7b204f88f6c3d287(func_2137(iParam0, 0));
					_0xfcc6db8dbe709bc8(func_2137(iParam0, 0));
					func_2138(iParam0);
				}
			}
			else
			{
				if (func_711(iParam0, 32768, 1))
				{
					iVar2 = func_2137(iParam0, 0);
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
		if (func_435((*Global_1360165)[iParam0]->f_124, 0))
		{
			if (func_711(iParam0, 32768, 1))
			{
				if (!_0x88ad6cc10d8d35b2((*Global_1360165)[iParam0]->f_124))
				{
					set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				}
				func_2136(iParam0);
				_0x7b204f88f6c3d287(func_2137(iParam0, 0));
				_0xfcc6db8dbe709bc8(func_2137(iParam0, 0));
			}
			else
			{
				set_entity_as_mission_entity((*Global_1360165)[iParam0]->f_124, true, true);
				func_2136(iParam0);
				delete_ped(&((*Global_1360165)[iParam0]->f_124));
			}
		}
	}
	(*Global_1360165)[iParam0]->f_70.f_1 = 0;
	func_2139(iParam0, 0);
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
		if (func_240(37, iParam0))
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
	if (func_240(37, iParam0))
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
	return func_1160(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

float func_1586(int iParam0)
{
	iParam0 = func_260(iParam0);
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