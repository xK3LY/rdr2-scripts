void __EntryFunction__()
{
	fLocal_14 = 1f;
	fLocal_15 = 1f;
	sLocal_24 = "props_misc@campfires@5_logs";
	sLocal_25 = "Script_PropCampfire";
	network_set_script_is_safe_for_network_game();
	if (has_force_cleanup_occurred(523))
	{
		func_1();
		terminate_this_thread();
		return;
	}
	while (!_0x9e4ef615e307fbbe())
	{
		if (func_2(255))
		{
			return;
		}
		switch (&Global_1896738)
		{
			case 0:
				_0x2804658eb7d8a50b(4, 1623465848);
				if (func_3())
				{
					set_this_script_can_be_paused(false);
					func_4(1);
				}
				else
				{
					func_4(2);
				}
				break;
			case 1:
				if (!func_5())
				{
					func_4(2);
				}
				else
				{
					func_6();
				}
				break;
			case 2:
				func_1();
				break;
		}
		_0x1c38c3577901af1f();
		wait(0);
	}
	func_1();
	terminate_this_thread();
}

void func_1()
{
	func_7();
	func_8();
	func_9();
	func_10();
	func_11("");
	func_12();
	func_13(0);
	func_14();
	func_15();
	if (func_16())
	{
		func_17();
	}
	func_18(0);
	network_clear_found_gamers();
	_cancel_onscreen_keyboard();
	_0x49cf17a564918e8d();
	func_19();
	if (_is_app_active(1433015236))
	{
		_close_app_by_hash(1433015236);
	}
	func_4(0);
	_display_hud_component(-523411361);
	_display_hud_component(-1274560729);
	func_20();
	func_21();
	func_22();
	terminate_this_thread();
}

bool func_2(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return func_23(36, iParam0);
}

bool func_3()
{
	iVar0 = 0;
	bVar1 = false;
	if (_is_app_active(1433015236))
	{
		bVar1 = true;
	}
	sVar2 = func_24(Global_1896738->f_390);
	if (_launch_app_with_entry("player_menu", sVar2) == 0 || bVar1)
	{
		iVar0 = 1;
		Global_1896738->f_386 = 0;
	}
	_request_streamed_txd(-786228517, false);
	_request_streamed_txd(1997120069, false);
	_request_streamed_txd(908516622, false);
	if (!_databinding_is_data_id_valid(Global_1896738->f_391))
	{
		Global_1896738->f_391 = _databinding_add_data_bool_from_path("", "bAllowedToReplay", 0);
	}
	if (!_databinding_is_data_id_valid(Global_1896738->f_392))
	{
		Global_1896738->f_392 = _databinding_add_data_bool_from_path("", "bAllowedtoAbandon", 0);
	}
	_databinding_write_data_bool(Global_1896738->f_391, false);
	_databinding_write_data_bool(Global_1896738->f_392, false);
	if (is_pc_version() || _is_stadia_version())
	{
		func_25(42, 0);
	}
	return iVar0;
}

void func_4(int iParam0)
{
	if (&Global_1896738 != iParam0)
	{
		Global_1896738 = iParam0;
	}
}

bool func_5()
{
	bVar0 = func_26();
	if (func_27())
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		func_28();
	}
	func_29();
	func_30();
	if (bVar0)
	{
		func_31(Global_1940311->f_1433);
	}
	func_32();
	return bVar0;
}

void func_6()
{
	disable_control_action(0, 2139949496, false);
	disable_control_action(0, 1520437207, false);
	disable_control_action(0, -640622144, false);
	disable_control_action(0, -1879280170, false);
	disable_control_action(0, -822242784, false);
	disable_control_action(0, -1292666904, false);
	disable_control_action(0, 1291350480, false);
	disable_control_action(0, -417363528, false);
	disable_control_action(0, -1814662593, false);
	disable_control_action(0, -562475458, false);
	disable_control_action(0, -1404316431, false);
}

void func_7()
{
	Global_1896738->f_390 = -1;
}

void func_8()
{
	Global_1940311->f_1433.f_1 = -1;
}

void func_9()
{
	Global_1940311->f_1433 = -1;
}

void func_10()
{
	Global_1940311->f_1433.f_2 = -1;
	func_33(5, 0);
}

void func_11(char* sParam0)
{
	_databinding_write_data_string(Global_1940311->f_1433.f_54.f_3, sParam0);
}

int func_12()
{
	if (!func_34(Global_1296859->f_1))
	{
		return 0;
	}
	sVar0 = get_player_name(&(Global_1296859->f_154[&Global_1296859]));
	if (!func_35(Global_1296859->f_1, sVar0))
	{
		return 0;
	}
	return 1;
}

void func_13(int iParam0)
{
	Global_1940311->f_1433.f_4189.f_2083 = iParam0;
}

void func_14()
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		func_36(iVar0, 1);
		iVar0++;
	}
}

void func_15()
{
	Global_1940311->f_1433.f_1316 = -1;
	_copy_memory(&(Global_1940311->f_1433.f_1316.f_1), &uVar0, 7);
	func_37();
}

bool func_16()
{
	return Global_1940311->f_3;
}

void func_17()
{
	func_38(1, -1343026476);
	func_39();
}

void func_18(bool bParam0)
{
	if (bParam0)
	{
		if (!Global_1896738->f_382)
		{
			Global_1896738->f_382 = bParam0;
		}
	}
	else if (Global_1896738->f_382)
	{
		Global_1896738->f_382 = bParam0;
	}
}

void func_19()
{
	if (Global_1572887->f_13 == -1)
	{
		return;
	}
	Global_1071686->f_2 = 0;
}

void func_20()
{
	Global_1896738->f_5 = 0;
}

void func_21()
{
	if (!func_40(0))
	{
		return;
	}
	func_33(0, 0);
}

void func_22()
{
	iVar0 = 0;
	while (iVar0 < Global_1896738->f_1.f_3)
	{
		_0x0751d461f06e41ce(player_id(), &(Global_1896738->f_1[iVar0]), Global_1896738->f_1[iVar0]->f_1, 0);
		iVar0++;
	}
	Global_1896738->f_1.f_3 = 0;
}

bool func_23(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iParam1 == 255)
	{
		return func_41(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 == func_42())
	{
		return func_41(&(Global_1102219->f_4), iVar0, 5);
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	if (&Global_1296859->f_22[iParam1])
	{
		return func_41(&((*Global_1100469)[iParam1]->f_4), iVar0, 5);
	}
	return false;
}

char* func_24(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "mp";
		case 1:
			return "mp_matchmaking";
		case 2:
			return "mp_camp_selection";
		case 3:
			return "mp_moonshine_selection";
		case 4:
			return "mp_moonshine_property_player_invite";
		case 5:
			return "mp_invites";
		case 6:
			return "mp_post_office";
		case 8:
			return "mp_emote_types";
		case 9:
			return "mp_minigame";
		case 10:
			return "mp_minigame_landing";
		case 11:
			return "mp_minigame_jip_landing";
		case 12:
			return "mp_minigame_invites";
		case 13:
			return "mp_minigame_invite_players";
		default:
			break;
	}
	return "mp";
}

int func_25(int iParam0, int iParam1)
{
	if (Global_1896738->f_1.f_3 >= 1)
	{
		return 0;
	}
	_0x0751d461f06e41ce(player_id(), iParam0, iParam1, 1);
	Global_1896738->f_1[Global_1896738->f_1.f_3] = iParam0;
	Global_1896738->f_1[Global_1896738->f_1.f_3]->f_1 = iParam1;
	Global_1896738->f_1.f_3++;
	return 1;
}

bool func_26()
{
	return Global_1896738->f_382;
}

bool func_27()
{
	iVar0 = 0;
	if (!_is_app_active(1433015236))
	{
		iVar0 = 1;
	}
	if (Global_1130634->f_293 && !Global_1120070->f_8495.f_4)
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_28()
{
	iVar0 = func_43();
	if (!func_44(iVar0) && iVar0 != func_45())
	{
		func_46(func_45());
		func_47(func_45());
		func_48(iVar0);
		if (func_49() == -1)
		{
			func_52(func_50(), func_51());
		}
		if (iVar0 != func_49())
		{
			func_53(iVar0);
		}
		func_10();
	}
	if (func_54())
	{
		func_52(func_45(), func_51());
		func_55(1);
		func_56();
		func_53(func_49());
		func_31(func_49());
		func_33(5, 0);
	}
}

void func_29()
{
	if (!func_26())
	{
		return;
	}
	iVar6 = 1433015236;
	iVar7 = &Global_1296859->f_154[&Global_1296859];
	iVar9 = Global_1296859->f_15;
	Var15.f_38 = 7;
	Var15.f_91 = -1;
	while (_event_manager_is_event_pending(iVar6))
	{
		if (_event_manager_peek_event(iVar6, &Var2))
		{
			switch (Var2)
			{
				case -1340543710:
					func_57(Var2, Var2.f_2);
					_event_manager_pop_event(iVar6);
					break;
				case -1151569080:
					iVar10 = _databinding_read_data_hash_string_from_parent(Var2.f_3, func_58(38));
					if (iVar10 != 0)
					{
						iVar13 = _databinding_read_data_hash_string_from_parent(Var2.f_3, func_58(33));
						func_59(iVar10, iVar13);
						switch (iVar10)
						{
							case 822989203:
								switch (iVar13)
								{
									case -2107252183:
										func_60(0, 0);
										break;
									case -6116668:
										func_60(1, 0);
										break;
								}
								break;
							case -1611253054:
								iVar13 = _databinding_read_data_hash_string_from_parent(Var2.f_3, func_58(33));
								break;
							case 1908740613:
								iVar13 = _databinding_read_data_hash_string_from_parent(Var2.f_3, func_58(33));
								iVar118 = iVar13;
								func_61(iVar118 == 126620015);
								func_62();
								break;
							case -91914989:
								iVar13 = _databinding_read_data_hash_string_from_parent(Var2.f_3, func_58(33));
								iVar119 = iVar13;
								func_63(iVar119);
								func_62();
								break;
							case 1163184660:
								iVar13 = _databinding_read_data_hash_string_from_parent(Var2.f_3, func_58(33));
								iVar120 = iVar13;
								func_64(iVar120 == -299269340);
								func_62();
								break;
							case -1703621955:
								func_65(_databinding_read_data_hash_string_from_parent(Var2.f_3, func_58(33)));
								break;
							case -736673978:
								func_66(_databinding_read_data_hash_string_from_parent(Var2.f_3, func_58(33)));
								func_67(1);
								func_68();
								func_70(func_69(), 1105014447);
								break;
							case 1601127062:
								func_71(_databinding_read_data_hash_string_from_parent(Var2.f_3, func_58(33)));
								break;
							case -758850690:
								func_73(func_72(_databinding_read_data_hash_string_from_parent(Var2.f_3, func_58(33))));
								break;
							case 87004688:
								func_74(func_72(_databinding_read_data_hash_string_from_parent(Var2.f_3, func_58(33))));
								break;
							case -2036453627:
								func_75(func_72(_databinding_read_data_hash_string_from_parent(Var2.f_3, func_58(33))));
								break;
							case 1505306971:
								func_76(_databinding_read_data_hash_string_from_parent(Var2.f_3, func_58(33)));
								break;
							case 1234263153:
								iVar12 = func_77(iVar7);
								iVar13 = _databinding_read_data_hash_string_from_parent(Var2.f_3, func_58(33));
								if (iVar13 == 1388965074)
								{
									if (func_78(iVar12))
									{
										if (func_79(iVar12))
										{
											func_80(iVar12);
										}
									}
								}
								else if (iVar13 == -1272839496)
								{
									if (!func_78(iVar12))
									{
										if (func_81(iVar12))
										{
											func_82(iVar12);
										}
									}
								}
								break;
						}
					}
					else
					{
						switch (Var2.f_2)
						{
							case -1996395310:
								if (Var2.f_1 > 0)
								{
									func_83(1);
								}
								else
								{
									func_83(0);
								}
								break;
							case -1712603330:
								if (!func_85(func_84()))
								{
									func_55(1);
								}
								break;
						}
					}
					_event_manager_pop_event(iVar6);
					break;
				case -1740156697:
					func_86(&Var2);
					func_87(&Var2);
					func_55(1);
					iVar11 = Var2.f_2;
					iVar10 = _databinding_read_data_hash_string_from_parent(Var2.f_3, func_58(38));
					iVar13 = _databinding_read_data_hash_string_from_parent(Var2.f_3, func_58(33));
					func_59(iVar10, iVar13);
					switch (iVar11)
					{
						case -1537476917:
							_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_82, true);
							break;
						case -1594107850:
							_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_118, true);
							if (_unlock_is_new(1392007362))
							{
								_unlock_set_new(1392007362, false);
							}
							_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_127, false);
							_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_116, true);
							_databinding_write_data_string(Global_1940311->f_1433.f_1507.f_115, _create_var_string(2, "NM_FR_CHARACTER_DETAILS_INFO"));
							break;
						case 238850895:
							if (func_88())
							{
								iVar8 = func_89();
								if (_network_is_player_index_valid(iVar8))
								{
									func_90(iVar8, 1);
									func_91(238850895, 1);
								}
							}
							break;
						case 1229094512:
							if (!func_92(&(Var2.f_3)))
							{
							}
							break;
						case -758886156:
							if (!func_92(&(Var2.f_3)))
							{
							}
							break;
						case 252544183:
							if (!func_92(&(Var2.f_3)))
							{
							}
							break;
						case 573237416:
							if (!func_92(&(Var2.f_3)))
							{
							}
							break;
						case 72556410:
							func_67(1);
							func_68();
							break;
						case -1080557963:
							func_93(1);
							func_94();
							func_95();
							break;
						case -1103748417:
							if (!func_92(&(Var2.f_3)))
							{
							}
							break;
						case -779773310:
							if (!func_92(&(Var2.f_3)))
							{
							}
							break;
						case 298326212:
							if (func_96(&(Var2.f_3), &Var15))
							{
								func_97(&Var15);
							}
							break;
						case 1930452436:
							if (func_98())
							{
								if (func_99())
								{
									if (!_0x595f028698072dd9(-1) && is_orbis_version())
									{
										func_70(_create_var_string(2, "NM_GC_FOOTER_RESTRICT_ACCOUNT_P_NAME"), 1105014447);
									}
									else if (!_ugc_has_privilege())
									{
										func_70(_create_var_string(2, "NM_GC_UGC_RESTRICT"), 1105014447);
									}
									else
									{
										func_70(_create_var_string(2, "NM_GC_FOOTER_NAME_CHANGE"), 1105014447);
									}
								}
								else
								{
									func_70(_create_var_string(2, "NM_GC_FOOTER_KEYBOARD_SERVICES_DOWN"), 859817522);
								}
							}
							else
							{
								func_70(_create_var_string(2, "NM_GC_FOOTER_NAME_CHANGE_TEMP"), 1105014447);
							}
							break;
						case 1962827136:
							func_100();
							func_101();
							func_102();
							break;
						case -949910923:
							func_103();
							break;
						case -1577085532:
						case -1181862186:
						case -715226337:
						case -265461064:
						case -183012873:
						case 161109887:
							func_104(Var2.f_1);
							break;
						case 271601522:
							func_105(3);
							break;
						case -766526475:
							func_105(0);
							break;
						case 388232363:
							func_105(1);
							break;
						case -783563355:
							func_105(2);
							break;
						case -446710138:
							func_106();
							break;
						case -1997447231:
						case -1890363343:
						case -630943934:
						case 1191420897:
						case 1222267777:
						case 1528509922:
							func_107(Var2.f_1);
							break;
						case 697595630:
							func_108(3);
							break;
						case -516833774:
							func_108(0);
							break;
						case -1523420457:
							func_108(1);
							break;
						case -189386465:
							func_108(2);
							break;
						case 908022114:
							break;
						case 1219657827:
							Global_1940311->f_242.f_1189 = 0;
							break;
						case 290710310:
						case 1685218753:
							Global_1940311->f_242 = Var2.f_3;
							break;
						case 1891046454:
							func_109(-682748, -1896177107);
							func_110(-1896177107);
							break;
						case -1431653946:
							func_109(-682748, 2042309940);
							func_110(2042309940);
							break;
						case 1603044301:
							func_111(_databinding_read_data_hash_string_from_parent(Var2.f_3, "camp_selection_district"));
							func_113(_databinding_read_data_hash_string_from_parent(Var2.f_3, "camp_selection_district"), func_112());
							func_114(func_112(), _databinding_read_data_hash_string_from_parent(Var2.f_3, "camp_selection_district"));
							break;
						case 1537752051:
							Global_1940311->f_1433.f_6279 = 3;
							Global_1940311->f_1433.f_6279.f_1 = func_115(Global_1940311->f_1433.f_6279);
							func_116(Global_1940311->f_1433.f_6279.f_1);
							break;
						case 2073308105:
							Global_1940311->f_1433.f_6279 = 1;
							Global_1940311->f_1433.f_6279.f_1 = func_115(Global_1940311->f_1433.f_6279);
							func_116(Global_1940311->f_1433.f_6279.f_1);
							break;
						case 519925072:
							Global_1940311->f_1433.f_6279 = 0;
							Global_1940311->f_1433.f_6279.f_1 = func_115(Global_1940311->f_1433.f_6279);
							func_116(Global_1940311->f_1433.f_6279.f_1);
							break;
						case 1070510924:
							Global_1940311->f_1433.f_6279 = 2;
							Global_1940311->f_1433.f_6279.f_1 = func_115(Global_1940311->f_1433.f_6279);
							func_116(Global_1940311->f_1433.f_6279.f_1);
							break;
						case -1309595911:
							if (Global_1940311->f_1433.f_6279.f_5)
							{
								Global_1940311->f_1433.f_6279.f_2 = Var2.f_1;
								Global_1940311->f_1433.f_6279.f_1 = func_117(Global_1940311->f_1433.f_6279, Var2.f_1);
							}
							else
							{
								Global_1940311->f_1433.f_6279.f_2 = func_118(Global_1940311->f_1433.f_6279, Global_1940311->f_1433.f_6279.f_1);
								iVar14 = Global_1940311->f_1433.f_6279;
								if (iVar14 < 0 || iVar14 > (4 - 1))
								{
								}
								else
								{
									Global_1940311->f_1433.f_6279.f_1 = &Global_17411.f_55.f_2481[iVar14]->f_2[Var2.f_1];
									func_116(Global_1940311->f_1433.f_6279.f_1);
									Jump @2551; //curOff = 2426
									func_119(Var2.f_3);
									func_120(_databinding_read_data_hash_string_from_parent(Var2.f_3, "moonshine_selection_district"));
									Jump @2551; //curOff = 2453
									func_122(func_121(iVar11));
									func_123(func_121(iVar11));
									Jump @2551; //curOff = 2476
									func_124();
									func_125();
									Jump @2551; //curOff = 2487
									Global_1120070->f_8495 = _databinding_read_data_int_from_parent(Var2.f_3, "dynamic_list_item_mission_hash");
									Global_1120070->f_8495.f_5 = Var2.f_3;
									Jump @2551; //curOff = 2522
									Global_1130930->f_53.f_1 = _databinding_read_data_int_from_parent(Var2.f_3, "slot_idx");
								}
								_event_manager_pop_event(iVar6);
								Jump @7734; //curOff = 2557
								switch (Var2.f_2)
								{
									case -1537476917:
										_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_82, false);
										break;
								}
								_event_manager_pop_event(iVar6);
								Jump @7734; //curOff = 2601
								switch (Var2.f_2)
								{
									case 1930452436:
										func_126();
										break;
									case -55349945:
										func_127();
										break;
									case -135401173:
										func_128();
										break;
									case 101104516:
										_close_app_by_hash_immediate(1433015236);
										func_129();
										break;
									case 290710310:
										func_130(Var2.f_3);
										break;
									case 1685218753:
										func_131(Global_1940311->f_242);
										break;
									case -2111588953:
										func_132(Global_1940311->f_242);
										break;
									case -533058584:
										break;
									case 110545328:
										func_133(Global_1940311->f_242);
										break;
									case 1471279564:
										if (func_134())
										{
											func_136(func_135());
										}
										else
										{
											func_136(0);
										}
										_event_manager_pop_event(iVar6);
										break;
									case 855278636:
										if (func_137())
										{
											func_139(func_138());
										}
										else
										{
											func_139(0);
										}
										_event_manager_pop_event(iVar6);
										break;
									case -1390952377:
										func_140(6);
										break;
									case 1050964521:
										func_140(14);
										break;
									case 334553069:
										func_140(53);
										func_141();
										break;
									case -1239884668:
										func_140(52);
										func_141();
										break;
									case -1487960093:
										_launch_app_by_hash_with_entry(-779472066, 348001928);
										break;
									case -350804472:
										func_142(128);
										break;
									case 647482278:
										func_142(256);
										break;
									case -2051980641:
										func_144(func_143(), 8);
										func_145();
										break;
									case -1862490249:
										func_142(512);
										if (!func_146(4096))
										{
											_uistatemachine_request_transition(1433015236, 810372829);
										}
										else
										{
											func_145();
										}
										break;
									case 1211445926:
										func_142(16384);
										break;
									case 1671201754:
										func_141();
										func_140(19);
										break;
									case -1513928818:
										func_141();
										func_140(18);
										break;
									case -1321015585:
										func_140(23);
										break;
									case 298326212:
										func_33(7, 1);
										if (func_96(&(Var2.f_3), &Var15))
										{
											func_147();
											func_141();
											func_148(&Var15);
											func_140(17);
											func_149(394524610);
										}
										break;
									case -1103748417:
										if (func_150())
										{
											func_140(7);
											func_149(-1105836878);
										}
										break;
									case -974997823:
										func_140(23);
										break;
									case -1320685749:
										func_140(22);
										break;
									case 252544183:
										if (func_150())
										{
											func_147();
											func_140(7);
											func_149(-1105836878);
										}
										break;
									case 519925072:
									case 1070510924:
									case 1537752051:
									case 2073308105:
										iVar14 = Global_1940311->f_1433.f_6279;
										if (iVar14 < 0 || iVar14 > (4 - 1))
										{
										}
										else
										{
											_databinding_remove_data_entry(Global_1940311->f_1433.f_6279.f_13);
											Global_1940311->f_1433.f_6279.f_13 = _databinding_add_data_container_by_hash(Global_1940311->f_1433.f_6279.f_6, 1901482920);
											func_151(&(Global_1940311->f_1433.f_6279), Global_17411.f_55.f_2481[iVar14]);
											_databinding_write_data_string(Global_1940311->f_1433.f_6279.f_8, func_152(Global_1940311->f_1433.f_6279));
											func_153(Global_1940311->f_1433.f_6279.f_1 != 0);
											Jump @7666; //curOff = 4068
											iVar14 = Global_1940311->f_1433.f_6279;
											if (iVar14 < 0 || iVar14 > (4 - 1))
											{
											}
											else
											{
												_databinding_remove_data_entry(Global_1940311->f_1433.f_6279.f_13);
												Global_1940311->f_1433.f_6279.f_13 = _databinding_add_data_container_by_hash(Global_1940311->f_1433.f_6279.f_6, 1901482920);
												if (Global_1940311->f_1433.f_6279.f_5)
												{
													Global_1940311->f_1433.f_6279.f_5 = !Global_1940311->f_1433.f_6279.f_5;
													func_154(&(Global_1940311->f_1433.f_6279), Global_17411.f_55.f_2481[iVar14]);
												}
												else
												{
													Global_1940311->f_1433.f_6279.f_5 = !Global_1940311->f_1433.f_6279.f_5;
													func_151(&(Global_1940311->f_1433.f_6279), Global_17411.f_55.f_2481[iVar14]);
												}
												Global_1940311->f_1433.f_6279.f_4 = 1;
												Jump @7666; //curOff = 4289
												iVar14 = Global_1940311->f_1433.f_6279;
												if (iVar14 < 0 || iVar14 > (4 - 1))
												{
												}
												else
												{
													if (Global_17411.f_55.f_2481[iVar14]->f_1 == -1 || &Global_17411.f_55.f_2481[iVar14]->f_2[Global_17411.f_55.f_2481[iVar14]->f_1] != Global_1940311->f_1433.f_6279.f_1)
													{
														func_155(Global_17411.f_55.f_2481[iVar14], Global_1940311->f_1433.f_6279, Global_1940311->f_1433.f_6279.f_1);
													}
													else
													{
														func_156(Global_17411.f_55.f_2481[iVar14], Global_1940311->f_1433.f_6279);
													}
													Jump @7666; //curOff = 4463
													iVar14 = Global_1940311->f_1433.f_6279;
													if (iVar14 < 0 || iVar14 > (4 - 1))
													{
													}
													else
													{
														Global_1940311->f_1433.f_6279.f_3 = 1;
														if (Global_1940311->f_1433.f_6279.f_2 > -1 && Global_1940311->f_1433.f_6279.f_2 < 48)
														{
															Global_1940311->f_1433.f_6279.f_1503[Global_1940311->f_1433.f_6279.f_2] = 1;
														}
														iVar121 = func_157(&(Global_17411.f_55.f_2481), Global_1940311->f_1433.f_6279, Global_1940311->f_1433.f_6279.f_1);
														if (!Global_1940311->f_1433.f_6279.f_5 && iVar121 == 1)
														{
															_databinding_remove_data_entry(Global_1940311->f_1433.f_6279.f_13);
															Global_1940311->f_1433.f_6279.f_13 = _databinding_add_data_container_by_hash(Global_1940311->f_1433.f_6279.f_6, 1901482920);
															func_154(&(Global_1940311->f_1433.f_6279), Global_17411.f_55.f_2481[iVar14]);
														}
														Global_1940311->f_1433.f_6279.f_4 = 1;
														Jump @7666; //curOff = 4728
														func_158();
														func_160(func_159(), func_159());
														Jump @7666; //curOff = 4748
														func_161(_databinding_read_data_int_from_parent(Var2.f_3, "dynamic_list_item_walk_enum"));
														Jump @7666; //curOff = 4767
														func_145();
														Jump @7666; //curOff = 4774
														if (func_163(_databinding_read_data_int_from_parent(Var2.f_3, "posse_versus_content_type"), func_162()))
														{
															func_145();
														}
														else
														{
															iVar122 = _databinding_read_data_int_from_parent(Var2.f_3, func_58(54));
															if (iVar122 == 0)
															{
															}
															else
															{
																switch (iVar122)
																{
																	case 97603778:
																		func_140(21);
																		func_141();
																		break;
																}
															}
														}
														Jump @7666; //curOff = 4860
														if (func_163(4, func_162()) || func_163(5, func_162()))
														{
															func_145();
														}
														Jump @7666; //curOff = 4897
														iVar123 = _databinding_read_data_hash_string_from_parent(Var2.f_3, "camp_selection_district");
														iVar124 = func_112();
														if (func_164(iVar124, iVar123))
														{
															if (func_165())
															{
																func_166(iVar123, iVar124);
																func_149(1921928004);
															}
															else if (func_167(_databinding_read_data_hash_string_from_parent(Var2.f_3, "camp_selection_district"), func_112(), 1, 0))
															{
																func_168(512);
																func_149(1921928004);
															}
														}
														Jump @7666; //curOff = 5005
														func_169(-1896177107);
														func_140(40);
														Jump @7666; //curOff = 5024
														func_169(2042309940);
														func_140(40);
														Jump @7666; //curOff = 5043
														func_170();
														func_171();
														func_145();
														Jump @7666; //curOff = 5059
														func_140(39);
														Jump @7666; //curOff = 5069
														func_172();
														Global_1298378->f_77 = _databinding_read_data_hash_string_from_parent(Var2.f_3, "moonshine_selection_property");
														Jump @7666; //curOff = 5094
														func_140(24);
														Jump @7666; //curOff = 5104
														func_140(42);
														Jump @7666; //curOff = 5114
														func_173();
														func_145();
														Jump @7666; //curOff = 5125
														func_145();
														Jump @7666; //curOff = 5132
														if (func_174())
														{
															func_175(14);
															func_149(-959354268);
														}
														else
														{
															func_140(14);
															func_149(-303450633);
														}
														func_141();
														Jump @7666; //curOff = 5182
														func_149(394524610);
														Jump @7666; //curOff = 5195
														func_176(func_40(3), 0);
														func_141();
														if (func_40(3))
														{
															func_33(3, 0);
														}
														Jump @7666; //curOff = 5226
														func_140(17);
														func_141();
														Jump @7666; //curOff = 5240
														func_56();
														func_177();
														Jump @7666; //curOff = 5251
														func_178(1);
														func_33(1, 0);
														func_140(15);
														func_141();
														func_149(-648381463);
														Jump @7666; //curOff = 5286
														func_178(0);
														func_141();
														func_33(1, 0);
														Jump @7666; //curOff = 5304
														func_140(20);
														func_141();
														Jump @7666; //curOff = 5318
														func_140(6);
														func_141();
														Jump @7666; //curOff = 5331
														if (_databinding_is_data_id_valid(Var2.f_3))
														{
															Var111 = { func_179(Var2.f_3, func_58(29)) };
															iVar125 = _databinding_read_data_string_from_parent(Var2.f_3, func_58(15));
															if (network_is_gamer_in_my_session(&Var111))
															{
															}
															else if (!func_180(Var111, iVar125, 0))
															{
															}
														}
														Jump @7666; //curOff = 5409
														func_182(&(Global_1896738->f_393.f_1), func_181());
														Jump @7666; //curOff = 5429
														if (!func_183())
														{
														}
														else if (func_184(&uVar1, &uVar0))
														{
															if (func_98())
															{
																func_188(func_185(), func_186(), uVar1, uVar0, func_187());
															}
															else
															{
																func_189(func_185(), func_186(), uVar1, uVar0);
															}
															func_190(0);
														}
														Jump @7666; //curOff = 5510
														Var15 = { func_191(1) };
														if (func_192(&Var15))
														{
															func_193(Var15.f_2, 1);
															func_194(4);
														}
														else if (Var15.f_1 == Global_1296859->f_15)
														{
															func_195(1);
															func_194(4);
														}
														Jump @7666; //curOff = 5578
														Var15 = { func_191(1) };
														if (func_196(&Var15))
														{
															func_197(32);
															func_198(1, 1);
															func_194(7);
														}
														else if (Var15.f_1 == Global_1296859->f_15)
														{
															func_195(1);
															func_194(4);
														}
														Jump @7666; //curOff = 5649
														Var15 = { func_191(1) };
														if (func_196(&Var15))
														{
															func_197(32);
															func_198(1, 1);
															func_194(7);
														}
														else if (Var15.f_1 == Global_1296859->f_15)
														{
															func_195(1);
															func_194(4);
														}
														Jump @7666; //curOff = 5720
														func_199();
														Jump @7666; //curOff = 5727
														if (_databinding_is_data_id_valid(Var2.f_3))
														{
															Var111 = { func_179(Var2.f_3, func_58(29)) };
															iVar126 = _databinding_read_data_string_from_parent(Var2.f_3, func_58(15));
															if (network_is_gamer_in_my_session(&Var111))
															{
																iVar127 = network_get_player_from_gamer_handle(&Var111);
																if (func_200(iVar127))
																{
																	func_55(1);
																}
															}
															else if (func_180(Var111, iVar126, 0))
															{
																func_55(1);
															}
														}
														Jump @7666; //curOff = 5837
														if (!func_201(func_84()))
														{
														}
														Jump @7666; //curOff = 5852
														if (!func_203(func_202()))
														{
														}
														Jump @7666; //curOff = 5867
														if (!func_203(func_204()))
														{
														}
														Jump @7666; //curOff = 5882
														if (func_205(Var2.f_3))
														{
															func_55(1);
														}
														Jump @7666; //curOff = 5904
														if (func_206())
														{
															func_207(0);
															func_208(8388608);
														}
														else
														{
															func_207(1);
															func_209(8388608);
														}
														func_55(1);
														Jump @7666; //curOff = 5948
														if (func_210())
														{
															func_55(1);
														}
														Jump @7666; //curOff = 5963
														if (!_0x424b17a7dc5c90bc(iVar7))
														{
															return;
														}
														bVar128 = func_88();
														if (!bVar128)
														{
															if (Global_1940311->f_1433.f_157.f_2.f_4)
															{
																func_211(&(Global_1194053->f_503[Global_1194053->f_492]), Global_1940311->f_1433.f_8);
																func_149(927041140);
															}
															else
															{
																return;
															}
														}
														else
														{
															bVar129 = _0x81fb74c83c2ed69f(func_89());
															if (bVar129 || Global_1940311->f_1433.f_157.f_2.f_4)
															{
																if (bVar129)
																{
																	func_212(func_89(), 1, 120);
																}
																else
																{
																	func_211(&(Global_1194053->f_503[Global_1194053->f_492]), Global_1940311->f_1433.f_8);
																}
																func_149(927041140);
															}
														}
														Jump @7666; //curOff = 6157
														Var111 = { func_202() };
														if (!func_213(&Var111))
														{
														}
														Jump @7666; //curOff = 6178
														func_55(1);
														if (_unlock_is_unlocked(-1828672432))
														{
															if (!_0x424b17a7dc5c90bc(iVar7))
															{
																func_214(func_89(), 1);
															}
															else if (_0x149a2751ab66ac02(iVar9) == _0x853b0fa4d8732c57(iVar9))
															{
																func_214(func_89(), 2);
															}
															else if (func_214(func_89(), -1))
															{
															}
														}
														Jump @7666; //curOff = 6264
														if (func_180(func_202(), func_215(), 0))
														{
															func_55(1);
														}
														Jump @7666; //curOff = 6288
														func_216(func_89());
														Jump @7666; //curOff = 6300
														Var111 = { func_202() };
														func_217(&Var111);
														func_145();
														Jump @7666; //curOff = 6321
														Var111 = { func_202() };
														if (!func_218(&Var111))
														{
														}
														Jump @7666; //curOff = 6342
														Var111 = { func_202() };
														if (!func_219(&Var111))
														{
														}
														Jump @7666; //curOff = 6363
														func_33(3, 1);
														if (_0xd6f6acf4392187fb(_0x901e0dc25080c8b9(func_89())) && _0x0f99f6436528a089(_0x901e0dc25080c8b9(func_89())))
														{
															if (func_220(_0x901e0dc25080c8b9(func_89()), &Var15, 1))
															{
																func_148(&Var15);
															}
														}
														Jump @7666; //curOff = 6434
														switch (Var2.f_2)
														{
															case -2012882360:
																iVar130 = 0;
																break;
															case 1717935887:
																iVar130 = 1;
																break;
															case 566751030:
																iVar130 = 2;
																break;
															case 575735035:
																iVar130 = 3;
																break;
															case 1302293867:
																iVar130 = 4;
																break;
															case 1284519075:
																iVar130 = 5;
																break;
															case -36476126:
																iVar130 = 6;
																break;
															case 1296297252:
																iVar130 = 7;
																break;
															case 1463101399:
																iVar130 = 8;
																break;
														}
														if (func_221(func_202(), iVar130, func_215()))
														{
														}
														Jump @7666; //curOff = 6573
														Var15 = { func_191(1) };
														if (func_222(&Var15))
														{
															if (func_223(&Var15))
															{
																func_194(3);
															}
														}
														Jump @7666; //curOff = 6616
														Var15 = { func_191(1) };
														if (func_222(&Var15))
														{
															if (func_223(&Var15))
															{
																func_194(5);
															}
														}
														Jump @7666; //curOff = 6659
														Var15 = { func_191(1) };
														if (func_222(&Var15))
														{
															if (func_223(&Var15))
															{
																func_194(6);
															}
														}
														Jump @7666; //curOff = 6702
														if (func_224(_0xe6aab897120492d6(Var2.f_3, "posse_list_entry_gang_id")))
														{
															func_149(1627801305);
														}
														Jump @7666; //curOff = 6737
														if (func_225())
														{
															func_226(1);
														}
														_databinding_write_data_bool(Global_1572887->f_106.f_149, false);
														_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_41, true);
														_databinding_write_data_string(Global_1940311->f_1433.f_1463.f_40, "MATCHMAKING_LINK");
														func_142(262144);
														Jump @7666; //curOff = 6810
														func_227(2, 2);
														func_145();
														Jump @7666; //curOff = 6823
														func_227(3, 2);
														func_145();
														Jump @7666; //curOff = 6836
														func_227(4, 2);
														func_145();
														Jump @7666; //curOff = 6849
														func_227(5, 2);
														func_145();
														Jump @7666; //curOff = 6862
														func_227(6, 2);
														func_145();
														Jump @7666; //curOff = 6875
														func_227(8, 2);
														func_145();
														Jump @7666; //curOff = 6889
														func_227(9, 2);
														func_145();
														Jump @7666; //curOff = 6903
														func_227(0, 2);
														func_145();
														Jump @7666; //curOff = 6916
														func_227(1, 2);
														func_145();
														Jump @7666; //curOff = 6929
														iVar110 = func_228();
														func_227(iVar110, 2);
														func_145();
														Jump @7666; //curOff = 6949
														func_227(15, 2);
														func_145();
														Jump @7666; //curOff = 6963
														func_227(16, 2);
														func_145();
														Jump @7666; //curOff = 6977
														func_227(17, 2);
														func_145();
														Jump @7666; //curOff = 6991
														func_227(19, 2);
														func_145();
														Jump @7666; //curOff = 7005
														func_227(18, 2);
														func_145();
														Jump @7666; //curOff = 7019
														func_229();
														func_145();
														Jump @7666; //curOff = 7030
														func_230();
														func_145();
														Jump @7666; //curOff = 7041
														if (_0x0f99f6436528a089(iVar9))
														{
															if (_0x4be6c13a45cca8ec(iVar9) == iVar7 && _0x149a2751ab66ac02(iVar9) == 1)
															{
																func_149(962885784);
															}
															else
															{
																func_149(-1913939249);
															}
														}
														else
														{
															func_149(962885784);
														}
														Jump @7666; //curOff = 7114
														func_231(1);
														func_232();
														func_145();
														func_233();
														if (func_234(255))
														{
															func_235(0, 0, 0, 1);
															if (!func_236(255))
															{
																func_237();
															}
															func_238(1, 1);
														}
														if (func_239())
														{
															func_240();
															func_241(0, 129);
														}
														else
														{
															func_195(1);
															func_242();
														}
														Jump @7666; //curOff = 7201
														func_243(_databinding_read_data_int_from_parent(Var2.f_3, func_58(80)));
														Jump @7666; //curOff = 7223
														func_244(_databinding_read_data_int_from_parent(Var2.f_3, func_58(80)));
														Jump @7666; //curOff = 7245
														func_245(0);
														func_246();
														Jump @7666; //curOff = 7257
														func_247(1);
														Jump @7666; //curOff = 7266
														func_248(_databinding_read_data_int_from_parent(Var2.f_3, func_58(80)));
														Jump @7666; //curOff = 7287
														func_249(_databinding_read_data_int_from_parent(Var2.f_3, func_58(80)));
														Jump @7666; //curOff = 7308
														func_250(_databinding_read_data_int_from_parent(Var2.f_3, func_58(80)), 0);
														Jump @7666; //curOff = 7330
														func_250(_databinding_read_data_int_from_parent(Var2.f_3, func_58(80)), 1);
														Jump @7666; //curOff = 7352
														func_250(_databinding_read_data_int_from_parent(Var2.f_3, func_58(80)), 2);
														Jump @7666; //curOff = 7374
														func_251(0);
														func_252();
														Jump @7666; //curOff = 7386
														func_253(_databinding_read_data_int_from_parent(Var2.f_3, func_58(80)));
														Jump @7666; //curOff = 7407
														func_254(_databinding_read_data_int_from_parent(Var2.f_3, func_58(80)), 4);
														Jump @7666; //curOff = 7429
														func_254(_databinding_read_data_int_from_parent(Var2.f_3, func_58(80)), 5);
														Jump @7666; //curOff = 7451
														func_254(_databinding_read_data_int_from_parent(Var2.f_3, func_58(80)), 6);
														Jump @7666; //curOff = 7473
														Var131 = { func_255(0, 1, 0, -1) };
														_0xe67af24c5a3b6058(-1842437844, &Var131, 0);
														func_256(Var131, 2, 2);
														func_257();
														Jump @7666; //curOff = 7515
														Global_1120070->f_8495 = _databinding_read_data_int_from_parent(Var2.f_3, "dynamic_list_item_mission_hash");
														Global_1120070->f_8495.f_1 = 1;
														Global_1120070->f_8495.f_5 = Var2.f_3;
														Jump @7666; //curOff = 7560
														if (Global_1130930->f_53 == -1)
														{
															if (Global_1130930->f_53.f_2)
															{
															}
															else
															{
																Global_1130930->f_53 = _databinding_read_data_int_from_parent(Var2.f_3, "slot_idx");
															}
														}
														Jump @7666; //curOff = 7608
														if (Global_1130930->f_53 == -1)
														{
															if (Global_1130930->f_53.f_2)
															{
															}
															else
															{
																Global_1130930->f_53.f_2 = 1;
															}
														}
														Jump @7666; //curOff = 7647
														Global_1120070->f_8495.f_2 = 1;
													}
												}
											}
										}
										_event_manager_pop_event(iVar6);
										Jump @7734; //curOff = 7672
										switch (Var2.f_2)
										{
											case -1373902020:
												func_258();
												break;
										}
										_event_manager_pop_event(iVar6);
										Jump @7734; //curOff = 7704
										_event_manager_pop_event(iVar6);
										Jump @7734; //curOff = 7713
										_event_manager_pop_event(iVar6);
										Jump @7734; //curOff = 7722
										_event_manager_pop_event(iVar6);
										func_259();
									}
									default:
										break;
							}
							default:
								break;
					}
				}
			}
		}

void func_30()
{
	if (Global_1940311->f_1433.f_8380 == 0)
	{
		return;
	}
	if (_0x5ae17c6b0134b7f1())
	{
		Global_1940311->f_1433.f_8379 = 1;
		Global_1940311->f_1433.f_8380 = 0;
		uVar0 = _0xddaeb478e58f8dea(&(Global_1940311->f_1433.f_8382), 801);
	}
}

void func_31(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 0:
			func_260();
			func_261();
			break;
		case 1:
			func_261();
			func_262();
			break;
		case 2:
			break;
		case 3:
			func_263();
			break;
		case 4:
		case 5:
			func_264();
			break;
		case 14:
			func_265();
			break;
		case 16:
			func_266();
			break;
		case 19:
			func_267();
			break;
		case 15:
			func_268();
			break;
		case 17:
			func_269();
			break;
		case 23:
			func_270();
			break;
		case 22:
			func_271();
			break;
		case 18:
			func_272();
			break;
		case 6:
			func_273();
			break;
		case 53:
			func_274();
			break;
		case 7:
			func_275();
			break;
		case 47:
			func_276();
			break;
		case 8:
		case 9:
		case 10:
			func_277();
			break;
		case 11:
			func_278();
			break;
		case 24:
			func_279();
			break;
		case 25:
			func_280();
			break;
		case 26:
			func_281();
			break;
		case 27:
			func_282();
			break;
		case 28:
			func_283();
			break;
		case 29:
			func_284();
			break;
		case 30:
			func_285();
			break;
		case 31:
			func_286();
			break;
		case 32:
			func_287();
			break;
		case 33:
			func_288();
			break;
		case 34:
			func_289();
			break;
		case 35:
			func_290();
			break;
		case 36:
			func_291();
			break;
		case 37:
			func_292();
			break;
		case 38:
			func_293();
			break;
		case 39:
			func_294();
			break;
		case 40:
			func_295();
			break;
		case 41:
			func_296();
			break;
		case 42:
			func_297();
			break;
		case 44:
			func_298();
			break;
		case 20:
			func_299();
			break;
		case 21:
			func_300();
			break;
		case 43:
			func_301();
			break;
		case 49:
			func_302();
			break;
		case 50:
			func_303();
			break;
		case 51:
			func_304();
			break;
		case 54:
			func_305(0);
			break;
		case 56:
			if (func_306())
			{
				func_307();
			}
			break;
		case 57:
			func_308(57);
			break;
		case 55:
			if (func_306())
			{
				func_309();
			}
			break;
	}
	func_310();
	if (func_311())
	{
		func_312();
		Global_1940311->f_1433.f_9184.f_238 = 0;
	}
	if (func_313())
	{
		func_314();
		Global_1940311->f_1433.f_9184.f_239 = 0;
	}
	func_315();
	func_316();
	func_317();
	func_318();
	if (func_319())
	{
		func_141();
	}
}

int func_32()
{
	if (Global_1896738->f_371.f_5)
	{
		Global_1896738->f_371.f_5 = 0;
		return 1;
	}
	return 0;
}

void func_33(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_320(&(Global_1896738->f_5), iParam0);
	}
	else
	{
		func_321(&(Global_1896738->f_5), iParam0);
	}
}

bool func_34(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	return network_is_handle_valid(&uParam0);
}

bool func_35(struct<7> Param0, char* sParam7)
{
	if (!func_34(Param0))
	{
		return false;
	}
	_copy_memory(&(Global_1940311->f_1433.f_8), &Param0, 7);
	Global_1940311->f_1433.f_8.f_7 = { func_322(sParam7) };
	return true;
}

void func_36(int iParam0, bool bParam1)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	iVar34 = func_323(iParam0, 1);
	if (!func_324(iVar34, &Var0, 0, -1))
	{
		func_325(&Var0);
	}
	func_326(iParam0, Global_1940311->f_1433.f_4189.f_1579[iParam0], Var0);
	if (bParam1 && func_327(iParam0))
	{
		func_328(&(Global_1940311->f_1433.f_4189.f_1985), &Var0, iParam0);
	}
}

void func_37()
{
	_0x00a15b94cba4f76f(Global_1940311->f_1433.f_8378);
	Global_1940311->f_1433.f_8378 = 0;
}

int func_38(bool bParam0, int iParam1)
{
	if (!network_is_in_session())
	{
		return 0;
	}
	if (!Global_1102219->f_16)
	{
		return 0;
	}
	if (!func_329())
	{
		return 0;
	}
	if (!func_239())
	{
		return 0;
	}
	Global_0 = iParam1;
	if (bParam0)
	{
		func_330(&Global_0, 8);
	}
	func_330(&Global_0, 1);
	return 1;
}

void func_39()
{
	Global_1940311->f_3 = 0;
}

bool func_40(int iParam0)
{
	return func_331(Global_1896738->f_5, iParam0);
}

bool func_41(var uParam0, int iParam1, int iParam2)
{
	return is_bit_set(uParam0[(iParam1 / 31)], (iParam1 % 31));
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_42()
{
	return Global_1102219->f_3672;
}

int func_43()
{
	iVar0 = func_332(_0x96fd694fe5be55dc(1433015236));
	if (func_333() != -1)
	{
		if (iVar0 == -1)
		{
			iVar0 = func_334(func_333());
		}
		else
		{
			func_7();
		}
	}
	return iVar0;
}

bool func_44(int iParam0)
{
	switch (iParam0)
	{
		case 13:
			return true;
		default:
			break;
	}
	return false;
}

int func_45()
{
	return Global_1940311->f_1433;
}

void func_46(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	if (!func_40(7))
	{
		func_175(iParam0);
	}
	func_33(7, 0);
	func_70("", 1105014447);
	iVar0 = func_332(_0x96fd694fe5be55dc(1433015236));
	switch (iParam0)
	{
		case 1:
			func_335();
			break;
		case 11:
			func_336();
			func_337();
			break;
		case 2:
		case 3:
			break;
		case 4:
			break;
		case 6:
		case 22:
		case 23:
			func_177();
			func_338();
			func_339(0);
			break;
		case 19:
			func_177();
			break;
		case 15:
			_display_hud_component(-1274560729);
			break;
		case 20:
			Global_1108365->f_935.f_27 = -1;
			break;
		case 18:
			func_340();
			break;
		case 46:
			Global_1940311->f_1433.f_6279.f_5 = 1;
			if (Global_1940311->f_1433.f_6279.f_3)
			{
				func_341();
				Global_1940311->f_1433.f_6279.f_3 = 0;
			}
			break;
		case 47:
			func_153(0);
			break;
		case 40:
			_display_hud_component(-523411361);
			break;
		case 54:
			_display_hud_component(-523411361);
			break;
		case 7:
			if ((iVar0 != 8 && iVar0 != 10) && iVar0 != 9)
			{
				func_12();
			}
			func_90(func_89(), 1);
			func_342();
			break;
		case 43:
			func_343();
			break;
		case 14:
		case 16:
		case 17:
			break;
		case 24:
			func_344();
			break;
		case 25:
			func_345();
			break;
		case 32:
			func_346();
			break;
	}
}

void func_47(int iParam0)
{
	Global_1940311->f_1433.f_1 = iParam0;
}

void func_48(int iParam0)
{
	Global_1940311->f_1433 = iParam0;
}

int func_49()
{
	return Global_1940311->f_1433.f_2;
}

int func_50()
{
	return Global_1940311->f_1433.f_1;
}

int func_51()
{
	return Global_1940311->f_1433.f_9184;
}

void func_52(int iParam0, var uParam1)
{
	if (iParam0 == -1)
	{
		return;
	}
	switch (iParam0)
	{
		case 6:
			Global_1940311->f_1433.f_830 = uParam1;
			break;
		case 19:
			Global_1940311->f_1433.f_157.f_197.f_1 = uParam1;
			break;
		default:
			return;
	}
}

void func_53(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	func_347(iParam0);
	switch (iParam0)
	{
		case 0:
			func_348();
			func_56();
			break;
		case 1:
			func_349();
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 13:
			func_350(0);
			break;
		case 7:
			func_351();
			break;
		case 16:
			func_352(iParam0, 1);
			break;
		case 14:
			func_353();
			break;
		case 15:
			func_354();
			break;
		case 19:
			func_355();
			break;
		case 17:
			func_352(iParam0, 0);
			func_356();
			break;
		case 18:
			func_357();
			break;
		case 6:
		case 22:
		case 23:
			func_358(iParam0);
			break;
		case 53:
			func_359();
			break;
		case 8:
		case 9:
		case 10:
			func_360();
			break;
		case 28:
			func_361();
			break;
		case 44:
			func_362();
			break;
		case 40:
			func_363();
			_hide_hud_component(-523411361);
			break;
		case 41:
			func_364(2f, 1);
			break;
		case 42:
			break;
		case 21:
			func_365();
			break;
		case 43:
			func_366();
			break;
		case 49:
			func_367();
			break;
		case 50:
			func_368();
			break;
		case 51:
			func_369();
			break;
		case 24:
			func_370();
			break;
		case 25:
			func_371();
			break;
		case 32:
			func_372();
			break;
		case 56:
			func_364(3f, 1);
			break;
		case 55:
			func_364(3f, 1);
			break;
		case 54:
			func_373();
			_hide_hud_component(-523411361);
			break;
		case 57:
			func_374();
			break;
	}
}

bool func_54()
{
	return func_40(5);
}

void func_55(bool bParam0)
{
	func_375(0, 1);
	if (bParam0)
	{
		func_375(1, 1);
	}
}

void func_56()
{
	Global_1940311->f_1433.f_9184 = 0;
	Global_1940311->f_1433.f_9184.f_1 = 0;
	Global_1940311->f_1433.f_9184.f_2 = -1;
	Global_1940311->f_1433.f_9184.f_3 = -1;
	Global_1940311->f_1433.f_9184.f_4 = 0;
	Global_1940311->f_1433.f_9184.f_236 = 1;
	Global_1940311->f_1433.f_9184.f_238 = 0;
	Global_1940311->f_1433.f_9184.f_240 = 1;
	Global_1940311->f_1433.f_9184.f_245 = 0;
	func_376(0);
	iVar0 = 0;
	while (iVar0 < 10)
	{
		StringCopy(&(Global_1940311->f_1433.f_9184.f_5[iVar0]->f_3), "", 128);
		Global_1940311->f_1433.f_9184.f_5[iVar0]->f_19 = 0;
		Global_1940311->f_1433.f_9184.f_5[iVar0]->f_2 = -1;
		Global_1940311->f_1433.f_9184.f_5[iVar0] = -1;
		iVar0++;
	}
}

void func_57(struct<4> Param0, int iParam4)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	switch (iParam4)
	{
		case 778915895:
			if (_databinding_read_data_bool_from_parent(Param0.f_3, func_58(86)))
			{
				return;
			}
			else if (!func_377())
			{
				func_130(Param0.f_3);
			}
			_databinding_write_data_bool_from_parent(Param0.f_3, func_58(86), true);
			func_378(Param0.f_3);
			break;
		case 1126679425:
			Var0 = Param0.f_1;
			func_324(Var0, &Var0, 2, -1);
			func_90(player_id(), 0);
			func_380(func_379(Var0));
			func_381(&Var0);
			_launch_app_by_hash_with_entry(-1641598689, 1731040532);
			break;
		case 863036578:
			func_382(player_id(), &vVar34);
			_0xe0884c184728c75b(vVar34, 100f);
			_launch_app_by_hash(-2042186616);
			break;
		case 2099367966:
			iVar40 = func_383(player_id(), 1);
			vVar37 = { func_384(iVar40) };
			_0xe0884c184728c75b(vVar37, 100f);
			_launch_app_by_hash(-2042186616);
			break;
		case -1121162991:
			vVar41 = { func_385() };
			_0xe0884c184728c75b(vVar41, 100f);
			_launch_app_by_hash(-2042186616);
			break;
		case 510323272:
			vVar44 = { Global_1051439->f_3745[39]->f_1 };
			_0xe0884c184728c75b(vVar44, 100f);
			_launch_app_by_hash(-2042186616);
			break;
		case 179854274:
			func_386(17745825, 0, 0, 0, 1, 0, 0);
			break;
		case 1511356879:
			break;
		default:
			break;
	}
}

char* func_58(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "dynamic_list_item_enabled";
		case 1:
			return "dynamic_list_item_visible";
		case 2:
			return "dynamic_list_item_main_color";
		case 3:
			return "dynamic_list_item_secondary_color";
		case 4:
			return "dynamic_list_item_tertiary_color";
		case 5:
			return "dynamic_list_item_main_img_texture_dic";
		case 6:
			return "dynamic_list_item_main_img_texture";
		case 7:
			return "dynamic_list_item_main_img_visible";
		case 8:
			return "dynamic_list_item_main_img_enabled";
		case 9:
			return "dynamic_list_item_status_icon_texture_dic";
		case 10:
			return "dynamic_list_item_status_icon_texture";
		case 11:
			return "dynamic_list_item_status_icon_visible";
		case 12:
			return "dynamic_list_item_deco_texture_dic";
		case 13:
			return "dynamic_list_item_deco__texture";
		case 14:
			return "dynamic_list_item_deco_visible";
		case 15:
			return "dynamic_list_item_raw_text_entry";
		case 16:
			return "dynamic_list_item_text_label_entry";
		case 17:
			return "dynamic_list_item_secondary_raw_text_entry";
		case 18:
			return "dynamic_list_item_secondary_text_label_entry";
		case 19:
			return "dynamic_list_item_secondary_text_visible";
		case 20:
			return "dynamic_list_item_secondary_text_enabled";
		case 21:
			return "dynamic_list_item_end_img_texture_dic";
		case 22:
			return "dynamic_list_item_end_img_texture";
		case 23:
			return "dynamic_list_item_end_img_visible";
		case 24:
			return "dynamic_list_item_corner_end_img_texture_dic";
		case 25:
			return "dynamic_list_item_corner_end_img_texture";
		case 26:
			return "dynamic_list_item_corner_end_img_visible";
		case 27:
			return "dynamic_list_item_entry_player_index";
		case 28:
			return "dynamic_list_item_entry_friend_index";
		case 29:
			return "dynamic_list_item_player_gamer_handle";
		case 30:
			return "dynamic_list_item_option_stepper_visible";
		case 31:
			return "dynamic_list_item_option_stepper_text_enabled";
		case 32:
			return "dynamic_list_item_option_stepper_items";
		case 33:
			return "dynamic_list_item_option_stepper_current_hash";
		case 34:
			return "dynamic_list_item_option_stepper_current_index";
		case 35:
			return "dynamic_list_item_option_stepper_max_index";
		case 36:
			return "dynamic_list_item_left_chevron_enabled";
		case 37:
			return "dynamic_list_item_right_chevron_enabled";
		case 38:
			return "dynamic_list_item_option_stepper_index_change_ui_event_hash";
		case 39:
			return "dynamic_list_item_main_fill_maximum";
		case 40:
			return "dynamic_list_item_main_fill_value";
		case 41:
			return "dynamic_list_item_extra_text_field_entry_one_raw_text";
		case 42:
			return "dynamic_list_item_extra_text_field_entry_two_raw_text";
		case 43:
			return "dynamic_list_item_extra_text_field_entry_three_raw_text";
		case 44:
			return "dynamic_list_item_extra_text_field_entry_one_visibility";
		case 45:
			return "dynamic_list_item_extra_text_field_entry_two_visibility";
		case 46:
			return "dynamic_list_item_extra_text_field_entry_three_visibility";
		case 47:
			return "dynamic_list_item_extra_img_texture_one_dic";
		case 48:
			return "dynamic_list_item_extra_img_one_texture";
		case 49:
			return "dynamic_list_item_extra_img_one_visible";
		case 50:
			return "dynamic_list_item_extra_int_field_one_value";
		case 51:
			return "dynamic_list_item_extra_int_field_two_value";
		case 52:
			return "dynamic_list_item_extra_vector_field_one_value";
		case 53:
			return "dynamic_list_item_extra_bool_field_one_value";
		case 54:
			return "dynamic_list_item_link";
		case 55:
			return "dynamic_list_item_event_channel_hash";
		case 56:
			return "dynamic_list_item_focus_hash";
		case 57:
			return "dynamic_list_item_select_hash";
		case 58:
			return "dynamic_list_item_prompt_text";
		case 59:
			return "dynamic_list_item_prompt_enabled";
		case 60:
			return "dynamic_list_item_prompt_visible";
		case 64:
			return "dynamic_list_item_prompt_option_text";
		case 65:
			return "dynamic_list_item_prompt_option_enabled";
		case 66:
			return "dynamic_list_item_prompt_option_visible";
		case 67:
			return "dynamic_list_item_prompt_option_select_hash";
		case 68:
			return "dynamic_list_item_prompt_toggle_text";
		case 69:
			return "dynamic_list_item_prompt_toggle_enabled";
		case 70:
			return "dynamic_list_item_prompt_toggle_visible";
		case 71:
			return "dynamic_list_item_prompt_toggle_select_hash";
		case 72:
			return "dynamic_list_item_prompt_r3_text";
		case 73:
			return "dynamic_list_item_prompt_r3_enabled";
		case 74:
			return "dynamic_list_item_prompt_r3_visible";
		case 75:
			return "dynamic_list_item_select_r3_select_hash";
		case 76:
			return "dynamic_list_item_prompt_dpad_left_right_text";
		case 77:
			return "dynamic_list_item_prompt_dpad_left_right_enabled";
		case 78:
			return "dynamic_list_item_prompt_dpad_left_right_visible";
		case 79:
			return "dynamic_list_item_select_dpad_left_right_select_hash";
		case 80:
			return "mount_collection_index";
		case 81:
			return "dynamic_list_item_rename_prompt_enabled";
		case 82:
			return "dynamic_list_item_rename_prompt_visible";
		case 83:
			return "dynamic_list_item_stats_info_toggle_prompt_text";
		case 84:
			return "invite_unique_id";
		case 85:
			return "invite_tracked";
		case 86:
			return "invite_processed";
		case 87:
			return "invite_script_type";
		case 88:
			return "invite_gang_id";
		case 89:
			return "invite_expiration_time";
		case 90:
			return "invite_filter_type";
		case 91:
			return "invite_feed_message_id";
		case 92:
			return "invite_all_enabled";
		case 93:
			return "invite_all_visible";
		default:
			break;
	}
	return "null";
}

void func_59(int iParam0, int iParam1)
{
	sVar0 = "";
	switch (iParam0)
	{
		case 822989203:
			switch (iParam1)
			{
				case -2107252183:
					sVar0 = _create_var_string(2, "NM_GC_FOOTER_STEP_TYPE_TEMPORARY");
					break;
				case -6116668:
					sVar0 = _create_var_string(2, "NM_GC_FOOTER_STEP_TYPE_PERSISTENT");
					break;
			}
			break;
		case -1611253054:
			switch (iParam1)
			{
				case 126620015:
					sVar0 = _create_var_string(2, "NM_GC_FOOTER_STEP_PRIVACY_OPEN");
					break;
				case 1513236523:
					sVar0 = _create_var_string(2, "NM_GC_FOOTER_STEP_PRIVACY_CLOSED");
					break;
			}
			break;
		case 1908740613:
			switch (iParam1)
			{
				case 126620015:
					if (network_are_handles_the_same(&(Global_1296859->f_1), &(Global_1940311->f_1433.f_157.f_2.f_29)))
					{
						sVar0 = _create_var_string(2, "NM_GC_FOOTER_STEP_PRIVACY_OPEN");
					}
					else
					{
						sVar0 = _create_var_string(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
					}
					break;
				case 1513236523:
					if (network_are_handles_the_same(&(Global_1296859->f_1), &(Global_1940311->f_1433.f_157.f_2.f_29)))
					{
						sVar0 = _create_var_string(2, "NM_GC_FOOTER_STEP_PRIVACY_CLOSED");
					}
					else
					{
						sVar0 = _create_var_string(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
					}
					break;
			}
			break;
		case -395731946:
			if (!func_98())
			{
				sVar0 = _create_var_string(2, "NM_GC_FOOTER_TEMP_OUTFIT");
			}
			else
			{
				switch (iParam1)
				{
					case -1895608703:
						sVar0 = _create_var_string(2, "NM_GC_FOOTER_STEP_OUTFIT_NONE");
						break;
					default:
						sVar0 = _create_var_string(2, "NM_GC_FOOTER_SET_OUTFIT_ACTIVE");
						break;
				}
			}
			break;
		case -91914989:
			switch (iParam1)
			{
				case -1895608703:
					sVar0 = _create_var_string(2, "NM_GC_FOOTER_STEP_OUTFIT_NONE");
					break;
				default:
					sVar0 = _create_var_string(2, "NM_GC_FOOTER_SET_OUTFIT_ACTIVE");
					break;
			}
			break;
		case 2131195733:
			switch (iParam1)
			{
				case -299269340:
					sVar0 = _create_var_string(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_ON");
					break;
				case 1083456181:
					sVar0 = _create_var_string(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_OFF");
					break;
			}
			break;
		case 1163184660:
			switch (iParam1)
			{
				case -299269340:
					if (network_are_handles_the_same(&(Global_1296859->f_1), &(Global_1940311->f_1433.f_157.f_2.f_29)))
					{
						sVar0 = _create_var_string(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_ON");
					}
					else
					{
						sVar0 = _create_var_string(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
					}
					break;
				case 1083456181:
					if (network_are_handles_the_same(&(Global_1296859->f_1), &(Global_1940311->f_1433.f_157.f_2.f_29)))
					{
						sVar0 = _create_var_string(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_OFF");
					}
					else
					{
						sVar0 = _create_var_string(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
					}
					break;
			}
			break;
	}
	if (!is_string_null_or_empty(sVar0))
	{
		func_70(sVar0, 1105014447);
	}
}

void func_60(bool bParam0, bool bParam1)
{
	if (bParam0)
	{
		iVar0 = func_387(-2040602682);
		func_389(func_388(-2040602682, 0, iVar0));
		if ((!_0x595f028698072dd9(-1) && is_orbis_version()) || !_ugc_has_privilege())
		{
			func_390(0);
			func_392(func_391(_0x901e0dc25080c8b9(player_id()), 0, 0));
		}
		else
		{
			func_390(1);
		}
	}
	else
	{
		func_389(0);
		func_390(0);
		if (func_184(&iVar1, &iVar2))
		{
			if (iVar2 != -1896177107)
			{
				iVar2 = -1896177107;
				func_166(iVar1, iVar2);
			}
		}
		func_392(func_391(_0x901e0dc25080c8b9(player_id()), 0, 0));
	}
	func_393(-1895608703);
	func_395(func_394(player_id(), 1), 1);
	if ((bParam1 && _databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_12.f_24)) && _databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_12.f_23))
	{
		if (bParam0)
		{
			_databinding_write_data_int(Global_1896738->f_13.f_50.f_12.f_24, 0);
			_databinding_write_data_hash_string(Global_1896738->f_13.f_50.f_12.f_23, -6116668);
		}
		else
		{
			_databinding_write_data_int(Global_1896738->f_13.f_50.f_12.f_24, 1);
			_databinding_write_data_hash_string(Global_1896738->f_13.f_50.f_12.f_23, -2107252183);
		}
	}
}

void func_61(bool bParam0)
{
	if (!_0xd6f6acf4392187fb(Global_1296859->f_15))
	{
		return;
	}
	if (!_0x0f99f6436528a089(Global_1296859->f_15))
	{
		return;
	}
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return;
	}
	bVar0 = func_396(Global_1296859->f_15);
	iVar1 = _0x9970ae8c3d706139();
	if (func_397())
	{
		iVar1 = func_398();
	}
	iVar2 = -1;
	switch (iVar1)
	{
		case 0:
		case 2:
			if (bParam0 == 0)
			{
				iVar2 = 1;
			}
			break;
		case 1:
			if (bParam0)
			{
				if (bVar0)
				{
					iVar2 = 0;
				}
				else
				{
					iVar2 = 2;
				}
			}
			break;
	}
	if (iVar2 == -1)
	{
		return;
	}
	func_399(iVar2, bParam0);
}

void func_62()
{
	Global_1940311->f_1433.f_157.f_264.f_90 = get_game_timer();
}

void func_63(int iParam0)
{
	switch (iParam0)
	{
		case -1895608703:
			iVar0 = 0;
			break;
		case 76824010:
			iVar0 = 1;
			break;
		case 1128045213:
			iVar0 = 2;
			break;
	}
	iVar1 = func_400(player_id());
	if (iVar1 != 0)
	{
		func_401(iVar0, iVar1);
	}
}

void func_64(bool bParam0)
{
	if (!_0xd6f6acf4392187fb(Global_1296859->f_15))
	{
		return;
	}
	if (!_0x0f99f6436528a089(Global_1296859->f_15))
	{
		return;
	}
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return;
	}
	func_402(bParam0, 1, 0);
	iVar0 = func_400(player_id());
	if (iVar0 != 0)
	{
		func_403(iVar0, bParam0);
	}
}

void func_65(int iParam0)
{
	iVar0 = func_404(iParam0);
	func_405(iVar0);
}

void func_66(int iParam0)
{
	iVar0 = func_406(iParam0);
	Global_1139381->f_5560.f_17 = iVar0;
	switch (iVar0)
	{
		case 1:
			if (func_407(&(Global_1296859->f_154[&Global_1296859])) == 0)
			{
				func_408();
			}
			Global_1139381->f_5560.f_13 = 0;
			break;
		case 0:
			if (func_407(&(Global_1296859->f_154[&Global_1296859])) == 2)
			{
				func_409();
			}
			Global_1139381->f_5560.f_12 = 0;
			break;
	}
}

void func_67(bool bParam0)
{
	iVar0 = func_410(Global_1139381->f_5560.f_17);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1507.f_111, -431776754);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1507.f_114, 1105014447);
	if (iVar0 != 0)
	{
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_1507.f_112, iVar0);
	}
	else
	{
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_1507.f_112, 0);
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_113, bParam0);
}

void func_68()
{
	if (Global_1139381->f_5560.f_17 == 1)
	{
		sVar0 = _create_var_string(2, "NM_FR_PASSIVE_OPTION_DETAILS_PASSIVE");
	}
	else
	{
		sVar0 = _create_var_string(2, "NM_FR_PASSIVE_OPTION_DETAILS_NOT_PASSIVE");
	}
	_databinding_write_data_string(Global_1940311->f_1433.f_1507.f_115, sVar0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_116, true);
}

char* func_69()
{
	iVar0 = func_407(&(Global_1296859->f_154[&Global_1296859]));
	switch (iVar0)
	{
		case 2:
			if (!func_239())
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_INTRO");
			}
			else if (func_411() && !func_412())
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_GANG");
			}
			else if (func_413())
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_MATCH");
			}
			else if (Global_1139381->f_5560.f_17 == 0)
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE");
			}
			else
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE");
			}
			break;
		case 0:
			fVar6 = func_414(&(Global_1296859->f_154[&Global_1296859]), 1);
			fVar7 = (*Global_1100469)[&Global_1296859]->f_18;
			if (network_is_player_active(player_id()) && func_415((*Global_1238240)[network_player_id_to_int()]->f_300, 4))
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_BOUNTY_HUNT");
			}
			else if (!func_239())
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_INTRO");
			}
			else if (func_416(fVar6))
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_HIGH_HOSTILITY");
			}
			else if (func_416(fVar7))
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_HIGH_HOSTILITY_GANG");
			}
			else if (func_417())
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_AGGRESION");
			}
			else if (func_411() && !func_412())
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_GANG");
			}
			else if (func_413())
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_MATCH");
			}
			else if (!func_418(0) || !func_239())
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED");
			}
			else if (Global_1139381->f_5560.f_17 == 1)
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE");
			}
			else if (func_419())
			{
				return _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
			}
			else
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE");
			}
			break;
		case 3:
			iVar1 = (Global_1901947->f_716.f_38 - (Global_1296859->f_21 - Global_1139381->f_5560.f_11));
			if (iVar1 <= 0)
			{
				_create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE");
			}
			else if (iVar1 == 1)
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_WAITING_SINGULAR", iVar1);
			}
			else if (func_413())
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_MATCH");
			}
			else
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_WAITING", iVar1);
			}
			break;
		case 1:
			iVar1 = (Global_1901947->f_716.f_37 - (Global_1296859->f_21 - Global_1139381->f_5560.f_11));
			iVar2 = func_420(&(Global_1296859->f_154[&Global_1296859]));
			iVar4 = (iVar2 / 60);
			iVar5 = (iVar2 % 60);
			if (iVar2 >= iVar1)
			{
				iVar3 = iVar2;
			}
			else
			{
				iVar3 = iVar1;
			}
			if (iVar3 >= 120)
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE_WAITING_MINUTES", iVar4, iVar5);
			}
			else if (iVar3 > 60)
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE_WAITING_MINUTES_SINGULAR", iVar4, iVar5);
			}
			else if (iVar3 > 1)
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE_WAITING", iVar3);
			}
			else if (iVar3 == 1)
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE_WAITING_SINGULAR", iVar3);
			}
			else if (func_413())
			{
				return _create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_NOT_PASSIVE_DISABLED_MATCH");
			}
			else
			{
				_create_var_string(2, "NM_FR_PASSIVE_OPTION_FOOTER_PASSIVE");
			}
			break;
	}
	return "";
}

void func_70(char* sParam0, int iParam1)
{
	_databinding_write_data_string(Global_1940311->f_1433.f_54.f_5, sParam0);
	if (_databinding_is_data_id_valid(Global_1940311->f_1433.f_54.f_6))
	{
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_54.f_6, iParam1);
	}
}

void func_71(int iParam0)
{
	switch (iParam0)
	{
		case 1534461337:
			if (!_0xd0541ef28e9c4783())
			{
				_0x777d0571a466b520(1);
			}
			break;
		case 2103335718:
			if (_0xd0541ef28e9c4783())
			{
				_0x777d0571a466b520(0);
			}
			break;
	}
}

int func_72(int iParam0)
{
	switch (iParam0)
	{
		case 1972219037:
			return 0;
		case 1099303125:
			return 2;
		case -606838807:
			return 3;
		case -1615594685:
			return 4;
		case 1364158563:
			return 1;
		default:
			break;
	}
	return 2;
}

void func_73(int iParam0)
{
	func_421(32);
	func_421(64);
	func_421(128);
	func_421(256);
	func_421(512);
	func_421(1);
	func_421(2);
	func_421(4);
	func_421(8);
	func_421(16);
	switch (iParam0)
	{
		case 0:
			func_422(32);
			func_422(1);
			break;
		case 2:
			func_422(64);
			func_422(2);
			break;
		case 3:
			func_422(128);
			func_422(4);
			break;
		case 4:
			func_422(256);
			func_422(8);
			break;
		case 1:
			func_422(512);
			func_422(16);
			break;
	}
	func_423(0, 1);
}

void func_74(int iParam0)
{
	func_421(262144);
	func_421(524288);
	func_421(1048576);
	func_421(2097152);
	func_421(4194304);
	switch (iParam0)
	{
		case 0:
			func_422(262144);
			break;
		case 2:
			func_422(524288);
			break;
		case 3:
			func_422(1048576);
			break;
		case 4:
			func_422(2097152);
			break;
		case 1:
			func_422(4194304);
			break;
	}
	func_423(0, 1);
}

void func_75(int iParam0)
{
	func_421(32);
	func_421(64);
	func_421(128);
	func_421(256);
	func_421(512);
	func_421(1);
	func_421(2);
	func_421(4);
	func_421(8);
	func_421(16);
	switch (iParam0)
	{
		case 0:
			func_422(32);
			func_422(1);
			break;
		case 2:
			func_422(64);
			func_422(2);
			break;
		case 3:
			func_422(128);
			func_422(4);
			break;
		case 4:
			func_422(256);
			func_422(8);
			break;
		case 1:
			func_422(512);
			func_422(16);
			break;
	}
	func_423(0, 1);
}

void func_76(int iParam0)
{
	switch (func_424(iParam0))
	{
		case 0:
			func_422(262144);
			break;
		case 1:
			func_421(262144);
			break;
		default:
			break;
	}
}

int func_77(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return (*Global_1134390)[iVar0]->f_38.f_3;
	}
	return -1;
}

bool func_78(int iParam0)
{
	return (func_425(iParam0, 16) && !func_425(iParam0, 32));
}

bool func_79(int iParam0)
{
	if (!func_426(iParam0))
	{
		return false;
	}
	else if (!func_425(iParam0, 16))
	{
		return false;
	}
	else if (func_427(&((*Global_1131196)[iParam0]->f_4)) && func_428(&((*Global_1131196)[iParam0]->f_4)) < func_429())
	{
		return false;
	}
	return true;
}

void func_80(int iParam0)
{
	func_430(4);
	func_431(8);
	Var0.f_8 = iParam0;
	func_433(4, Var0, func_432(0, 8));
}

bool func_81(int iParam0)
{
	if (!func_426(iParam0))
	{
		return false;
	}
	else if (func_78(iParam0))
	{
		return false;
	}
	else if (func_425(iParam0, 32))
	{
		return false;
	}
	else if (func_427(&((*Global_1131196)[iParam0]->f_4)) && func_428(&((*Global_1131196)[iParam0]->f_4)) < func_429())
	{
		return false;
	}
	return true;
}

void func_82(int iParam0)
{
	func_430(8);
	func_431(4);
	Var0.f_8 = iParam0;
	func_433(3, Var0, func_432(0, 8));
}

void func_83(bool bParam0)
{
	iVar0 = 0;
	if (bParam0)
	{
		iVar0++;
	}
	else
	{
		iVar0 = (iVar0 - 1);
	}
	iVar1 = (Global_1896738->f_197.f_9 + iVar0);
	if (iVar1 < 0)
	{
		iVar1 = (Global_1896738->f_197.f_10 - 1);
	}
	else if (iVar1 >= Global_1896738->f_197.f_10)
	{
		iVar1 = 0;
	}
	Global_1896738->f_197.f_8 = iVar1;
}

int func_84()
{
	return network_get_player_from_gamer_handle(&(Global_1940311->f_1433.f_31));
}

bool func_85(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&Global_1940311->f_1433.f_157.f_357.f_234.f_1[iVar0] == 1)
		{
			if (Global_1940311->f_1433.f_157.f_357.f_234.f_1[iVar0]->f_1 == iParam0)
			{
				switch (Global_1940311->f_1433.f_157.f_357.f_234.f_1[iVar0]->f_2)
				{
					case 0:
						Global_1940311->f_1433.f_157.f_357.f_234.f_1[iVar0]->f_2 = 1;
						break;
					case 1:
						Global_1940311->f_1433.f_157.f_357.f_234.f_1[iVar0]->f_2 = 0;
						break;
				}
				func_55(1);
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_86(var uParam0)
{
	func_435(func_434());
	func_436(uParam0);
}

void func_87(var uParam0)
{
	if (*uParam0 != -1740156697)
	{
		return;
	}
	iVar0 = uParam0->f_2;
	sVar1 = "";
	iVar2 = 1105014447;
	if (!is_orbis_version())
	{
		if ((iVar0 == -862379603 || iVar0 == 1363191263) || iVar0 == 2132537609)
		{
			return;
		}
	}
	switch (iVar0)
	{
		case -916367143:
			sVar1 = _create_var_string(2, "LOG_FOOTER");
			break;
		case -1537476917:
			sVar1 = func_437();
			break;
		case -348311918:
			sVar1 = func_438();
			break;
		case 1486341085:
			sVar1 = func_440(func_439());
			break;
		case -880262015:
			sVar1 = func_441();
			break;
		case -260431196:
			sVar1 = func_443(func_442());
			break;
		case 1219657827:
			sVar1 = func_445(func_444());
			break;
		case 1615479072:
			sVar1 = func_446();
			break;
		case 1962827136:
			sVar1 = func_448(func_447());
			break;
		case -224013573:
			sVar1 = func_450(func_449());
			break;
		case 1244828121:
			sVar1 = func_452(func_451());
			break;
		case -1694883932:
			sVar1 = _create_var_string(2, "PINNED_FOOTER");
			break;
		case -543289345:
			sVar1 = _create_var_string(2, "NET_MOONSHINE_SET_SHACK_LOCATION_FOOTER");
			break;
		case 1222940221:
			sVar1 = _create_var_string(2, func_454(func_453()));
			break;
		case 88228607:
			sVar1 = _create_var_string(2, func_456(func_455()));
			break;
		case 290710310:
		case 1685218753:
			sVar1 = func_457(uParam0->f_3);
			break;
		case 504507386:
			sVar1 = func_458();
			break;
		case -1617941426:
			sVar1 = func_458();
			break;
		case 2054047271:
			sVar1 = _create_var_string(2, "");
			break;
		case -1465661771:
			sVar1 = func_459();
			break;
		case -1606096174:
			sVar1 = _create_var_string(2, "NM_MW_POSSE_VERSUS_FOOTER");
			break;
		case -882681338:
			sVar1 = func_460();
			break;
		case 1671201754:
			sVar1 = _create_var_string(2, "NM_MW_POSSE_MEMBERS_FOOTER");
			break;
		case 1689032681:
			sVar1 = _create_var_string(2, "NM_MW_POSSE_SETTINGS_FOOTER");
			break;
		case 1854460024:
			sVar1 = _create_var_string(2, "NM_MW_POSSE_ABANDON_LINK_FOOTER");
			break;
		case -327353888:
			sVar1 = func_461();
			break;
		case 154809164:
			sVar1 = _create_var_string(2, "NM_MW_POSSE_PERSISTENCE_FOOTER");
			break;
		case -1103748417:
			sVar1 = _create_var_string(2, "");
			break;
		case -779773310:
			sVar1 = _create_var_string(2, "");
			break;
		case -1086306300:
			sVar1 = _create_var_string(2, "NM_MW_POSSE_CREW_FOOTER");
			break;
		case -2088725625:
			sVar1 = func_462(&iVar2);
			break;
		case -1320685749:
			sVar1 = _create_var_string(2, "INVITE_PLAYERS_LINK");
			break;
		case 1280146211:
			sVar1 = func_463();
			break;
		case -2012882360:
			sVar1 = _create_var_string(2, "NM_PLAYER_REPORT_CHEATING_FOOTER");
			break;
		case -1024115628:
			sVar1 = _create_var_string(2, "NM_PLAYER_REPORT_CHEATING_FOOTER");
			break;
		case 1717935887:
			sVar1 = _create_var_string(2, "NM_PLAYER_REPORT_ABUSIVE_FOOTER");
			break;
		case 566751030:
			sVar1 = _create_var_string(2, "NM_PLAYER_REPORT_DISRUPTIVE_FOOTER");
			break;
		case -757187920:
			sVar1 = _create_var_string(2, "NM_PLAYER_REPORT_OFFENSIVE_FOOTER");
			break;
		case 575735035:
			sVar1 = _create_var_string(2, "NM_PLAYER_REPORT_OLN_FOOTER");
			break;
		case 1302293867:
			sVar1 = _create_var_string(2, "NM_PLAYER_REPORT_OSCN_FOOTER");
			break;
		case 1284519075:
			sVar1 = _create_var_string(2, "NM_PLAYER_REPORT_OCN_FOOTER");
			break;
		case -36476126:
			sVar1 = _create_var_string(2, "NM_PLAYER_REPORT_OCE_FOOTER");
			break;
		case 1296297252:
			sVar1 = _create_var_string(2, "NM_PLAYER_REPORT_OPN_FOOTER");
			break;
		case 1463101399:
			sVar1 = _create_var_string(2, "NM_PLAYER_REPORT_OHN_FOOTER");
			break;
		case -999900281:
			sVar1 = func_464();
			break;
		case -281834246:
			sVar1 = func_465();
			break;
		case 238850895:
			sVar1 = func_466();
			break;
		case -1108319209:
			sVar1 = func_467();
			break;
		case 60364622:
			sVar1 = func_468();
			break;
		case 515157779:
			sVar1 = _create_var_string(2, "NM_PW_MESSAGE_FOOTER");
			break;
		case 1029117766:
			sVar1 = _create_var_string(2, "NM_PW_REPORT_PLAYER_FOOTER");
			break;
		case -622415922:
			sVar1 = _create_var_string(2, "NM_PW_SHOW_GAMER_CARD_FOOTER");
			break;
		case 1891046454:
			sVar1 = func_469(-1896177107);
			break;
		case -1431653946:
			sVar1 = func_469(2042309940);
			break;
		case 921074654:
			sVar1 = func_470();
			break;
		case 2087912236:
			return;
		case -1913419121:
			sVar1 = _create_var_string(2, "NET_CAMP_CAMP_STATS_FOOTER");
			break;
		case 1603044301:
			sVar1 = _create_var_string(2, "NET_CAMP_LOCATION_ENTRY_FOOTER");
			break;
		case 2077941391:
			sVar1 = _create_var_string(2, func_471(3));
			break;
		case 1018100553:
			sVar1 = _create_var_string(2, func_471(8));
			break;
		case 1088802604:
			sVar1 = func_472(2, _databinding_read_data_bool(Global_1940311->f_1433.f_1463.f_2));
			break;
		case -910546409:
			sVar1 = func_472(3, _databinding_read_data_bool(Global_1940311->f_1433.f_1463.f_3));
			break;
		case -1902254786:
			sVar1 = func_472(4, _databinding_read_data_bool(Global_1940311->f_1433.f_1463.f_4));
			break;
		case 1876618697:
			sVar1 = func_472(8, _databinding_read_data_bool(Global_1940311->f_1433.f_1463.f_6));
			break;
		case 587836234:
			sVar1 = func_472(9, _databinding_read_data_bool(Global_1940311->f_1433.f_1463.f_7));
			break;
		case 513547135:
			sVar1 = func_472(0, _databinding_read_data_bool(Global_1940311->f_1433.f_1463.f_8));
			break;
		case 505234389:
			sVar1 = func_472(10, _databinding_read_data_bool(Global_1940311->f_1433.f_1463.f_9));
			break;
		case -1666450070:
			sVar1 = func_472(12, _databinding_read_data_bool(Global_1940311->f_1433.f_1463.f_10));
			break;
		case 1896706400:
			sVar1 = func_472(13, _databinding_read_data_bool(Global_1940311->f_1433.f_1463.f_11));
			break;
		case 2047751621:
			sVar1 = func_472(1, _databinding_read_data_bool(Global_1940311->f_1433.f_1463.f_12));
			break;
		case -862379603:
			sVar1 = func_472(15, _databinding_read_data_bool(Global_1940311->f_1433.f_1463.f_13));
			break;
		case 1363191263:
			sVar1 = func_472(16, _databinding_read_data_bool(Global_1940311->f_1433.f_1463.f_15));
			break;
		case 2132537609:
			sVar1 = func_472(17, _databinding_read_data_bool(Global_1940311->f_1433.f_1463.f_14));
			break;
		case -1783088248:
			sVar1 = func_472(19, _databinding_read_data_bool(Global_1940311->f_1433.f_1463.f_16));
			break;
		case 1095154187:
			sVar1 = func_472(18, _databinding_read_data_bool(Global_1940311->f_1433.f_1463.f_17));
			break;
		case 562873073:
			sVar1 = func_473(_databinding_read_data_bool(Global_1940311->f_1433.f_1463.f_18));
			break;
		case -1621613969:
			sVar1 = func_474(_databinding_read_data_bool(Global_1940311->f_1433.f_1463.f_19));
			break;
		case 1835613473:
			sVar1 = _create_var_string(2, "NM_MW_EXIT_TO_FREEROAM_FOOTER");
			break;
		case -949910923:
			sVar1 = _create_var_string(2, "HORSES_FOOTER");
			break;
		case 649267219:
			sVar1 = func_475();
			break;
		case 867974977:
			sVar1 = func_476();
			break;
		case -1074910265:
			sVar1 = _create_var_string(2, "SPECIALTY_FOOTER");
			break;
		case -766526475:
			sVar1 = _create_var_string(2, "SPECIALTY_RACE_FOOTER");
			break;
		case 388232363:
			sVar1 = _create_var_string(2, "SPECIALTY_COOP_FOOTER");
			break;
		case -783563355:
			sVar1 = _create_var_string(2, "SPECIALTY_COMPETITIVE_FOOTER");
			break;
		case 271601522:
			sVar1 = _create_var_string(2, "SPECIALTY_FREEROAM_FOOTER");
			break;
		case 988182620:
			sVar1 = _create_var_string(2, "");
			break;
		case 1499523319:
			sVar1 = _create_var_string(2, "");
			break;
		case 1736193867:
			sVar1 = _create_var_string(2, "ALLOW_LEADING_FOOTER");
			break;
		case -446710138:
			sVar1 = _create_var_string(2, "VEHICLES_FOOTER");
			break;
		case 1129530111:
			sVar1 = func_477();
			break;
		case 1819530459:
			sVar1 = _create_var_string(2, "SPECIALTY_FOOTER");
			break;
		case -516833774:
			sVar1 = _create_var_string(2, "SPECIALTY_RACE_FOOTER");
			break;
		case -1523420457:
			sVar1 = _create_var_string(2, "SPECIALTY_COOP_FOOTER");
			break;
		case -189386465:
			sVar1 = _create_var_string(2, "SPECIALTY_COMPETITIVE_FOOTER");
			break;
		case 697595630:
			sVar1 = _create_var_string(2, "SPECIALTY_FREEROAM_FOOTER");
			break;
		case 746698552:
			sVar1 = func_479(func_478());
			break;
		case 1024301510:
			sVar1 = func_481(func_480());
			break;
		case 72556410:
			sVar1 = func_69();
			break;
		case -1080557963:
			sVar1 = func_482();
			break;
		case -390113081:
			sVar1 = _create_var_string(2, "NM_FR_SESSION_PREFERENCE_FOOTER");
			break;
		case 1537752051:
			sVar1 = func_483(3);
			break;
		case 2073308105:
			sVar1 = func_483(1);
			break;
		case 519925072:
			sVar1 = func_483(0);
			break;
		case 1070510924:
			sVar1 = func_483(2);
			break;
		case -1309595911:
			sVar1 = func_484();
			break;
		case -1899275725:
			sVar1 = func_485(_databinding_read_data_int_from_parent(uParam0->f_3, "dynamic_list_item_walk_enum"));
			break;
		case -644769912:
			sVar1 = func_487(func_486());
			break;
		case 823251548:
		case 1401564842:
			Global_1108365->f_935.f_27 = _databinding_read_data_int_from_parent(uParam0->f_3, "posse_versus_content_type");
			sVar1 = func_488(Global_1108365->f_935.f_27);
			break;
		case 334553069:
			sVar1 = func_489(func_442());
			break;
		case -1239884668:
			sVar1 = _create_var_string(2, "MINIGAME_GAME_DETAILS_FOOTER");
			break;
		case -1487960093:
			sVar1 = _create_var_string(2, "MINIGAME_RULES_FOOTER");
			break;
		case -2051980641:
			sVar1 = _create_var_string(2, "NM_MW_EXIT_TO_FREEROAM_FOOTER");
			break;
		case 596189658:
			sVar1 = func_490();
			break;
		case -2120689682:
			sVar1 = _create_var_string(2, "STABLES_HORSES_ENTRY_TOOLTIP");
			break;
		case 1664795258:
			sVar1 = _create_var_string(2, "STABLES_VEHICLES_ENTRY_TOOLTIP");
			break;
		case 524868507:
			sVar1 = func_491();
			break;
		case -1292785935:
			return;
	}
	func_70(sVar1, iVar2);
}

bool func_88()
{
	return network_is_gamer_in_my_session(&(Global_1940311->f_1433.f_8));
}

int func_89()
{
	iVar0 = network_get_player_from_gamer_handle(&(Global_1940311->f_1433.f_8));
	if (!func_88())
	{
		return player_id();
	}
	if (!_network_is_player_index_valid(iVar0))
	{
		return player_id();
	}
	iVar1 = iVar0;
	if (iVar1 < 0)
	{
		return player_id();
	}
	if (iVar1 >= 32)
	{
		return player_id();
	}
	return iVar0;
}

void func_90(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_492(0);
	}
	if (player_id() == iParam0)
	{
		func_13(0);
	}
	else
	{
		func_13(1);
	}
	func_493(0, iParam0);
	func_493(1, iParam0);
	func_493(2, iParam0);
	func_493(3, iParam0);
}

int func_91(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 238850895:
			_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_54, bParam1);
			break;
		case -1108319209:
			_databinding_write_data_bool(Global_1940311->f_1433.f_157.f_614.f_4.f_1, bParam1);
			break;
	}
	return 1;
}

bool func_92(var uParam0)
{
	if (!_databinding_is_data_id_valid(*uParam0))
	{
		return false;
	}
	Var0 = { func_179(*uParam0, func_58(29)) };
	iVar7 = _databinding_read_data_string_from_parent(*uParam0, func_58(15));
	if (!func_494(Var0, iVar7))
	{
		return false;
	}
	return true;
}

void func_93(bool bParam0)
{
	iVar1 = func_495(&(Global_1296859->f_154[&Global_1296859]), 0);
	switch (iVar1)
	{
		case 0:
		case 1:
			iVar0 = 0;
			break;
		case 2:
		case 3:
			iVar0 = 1;
			break;
		case 4:
		case 5:
		case 6:
			iVar0 = 2;
			break;
	}
	iVar2 = func_496(iVar0);
	iVar3 = func_497(1);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1507.f_111, -431776754);
	if (iVar2 != 0)
	{
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_1507.f_112, iVar2);
	}
	else
	{
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_1507.f_112, 0);
	}
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1507.f_114, iVar3);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_113, bParam0);
}

void func_94()
{
	iVar1 = func_495(&(Global_1296859->f_154[&Global_1296859]), 0);
	switch (iVar1)
	{
		case 0:
		case 1:
			sVar0 = _create_var_string(2, "HOSTILITY_LOW_DESCRIPTION");
			break;
		case 2:
		case 3:
			sVar0 = _create_var_string(2, "HOSTILITY_MEDIUM_DESCRIPTION");
			break;
		case 4:
		case 5:
		case 6:
			sVar0 = _create_var_string(2, "HOSTILITY_HIGH_DESCRIPTION");
			break;
	}
	_databinding_write_data_string(Global_1940311->f_1433.f_1507.f_115, sVar0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_116, true);
}

void func_95()
{
	sVar0 = func_498();
	iVar1 = func_497(0);
	_databinding_write_data_string(Global_1940311->f_1433.f_1507.f_88.f_19, sVar0);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1507.f_88.f_21, iVar1);
}

bool func_96(var uParam0, var uParam1)
{
	if (!_databinding_is_data_id_valid(*uParam0))
	{
		return false;
	}
	_0xe6aab897120492d7(*uParam0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_ID", &iVar0);
	if (_databinding_read_data_bool_from_parent(*uParam0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_LOCAL_MEMBERSHIP"))
	{
		if (!func_499(iVar0, uParam1, 1))
		{
			return false;
		}
	}
	else if (!func_220(_0xe6aab897120492d6(*uParam0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_GANG_ID"), uParam1, 1))
	{
		return false;
	}
	if (!func_222(uParam1))
	{
		return false;
	}
	return true;
}

void func_97(var uParam0)
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		iVar0++;
	}
	Global_1940311->f_1433.f_157.f_97 = { *uParam0 };
}

bool func_98()
{
	if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_12.f_23))
	{
		switch (_0x81d7183e7a8eca72(Global_1896738->f_13.f_50.f_12.f_23))
		{
			case -2107252183:
				return false;
			case -6116668:
				return true;
			default:
				break;
		}
	}
	return false;
}

bool func_99()
{
	if (!network_is_signed_online())
	{
		return false;
	}
	if (!network_has_valid_ros_credentials())
	{
		return false;
	}
	return true;
}

void func_100()
{
	if (func_500())
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_479.f_22, false);
		_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_479.f_22, false);
		_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_479.f_1, false);
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_479.f_28, -1);
		if (func_501(9))
		{
			_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_479.f_24, 0);
		}
		else if (func_501(10))
		{
			_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_479.f_24, 2);
		}
		else if (func_501(11))
		{
			_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_479.f_24, 3);
		}
		else if (func_501(12))
		{
			_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_479.f_24, 4);
		}
		else if (func_501(13))
		{
			_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_479.f_24, 1);
		}
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_479.f_22, true);
		_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_479.f_1, true);
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_479.f_28, -758850690);
		if (_databinding_read_data_int(Global_1940311->f_1433.f_1636.f_479.f_24) != func_502())
		{
			_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_479.f_24, func_502());
		}
	}
}

void func_101()
{
	if (func_500())
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_508.f_22, false);
		_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_508.f_22, false);
		_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_508.f_1, false);
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_508.f_28, -1);
		if (func_501(19))
		{
			_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_508.f_24, 0);
		}
		else if (func_501(20))
		{
			_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_508.f_24, 2);
		}
		else if (func_501(21))
		{
			_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_508.f_24, 3);
		}
		else if (func_501(22))
		{
			_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_508.f_24, 4);
		}
		else if (func_501(23))
		{
			_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_508.f_24, 1);
		}
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_508.f_22, true);
		_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_508.f_1, true);
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_508.f_28, 87004688);
		if (_databinding_read_data_int(Global_1940311->f_1433.f_1636.f_508.f_24) != func_503())
		{
			_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_508.f_24, func_503());
		}
	}
}

void func_102()
{
	if (func_500())
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_379.f_22, false);
		_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_379.f_22, false);
		_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_379.f_1, false);
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_379.f_28, -1);
		if (func_501(9))
		{
			_databinding_write_data_int(Global_1940311->f_1433.f_2204.f_379.f_24, 0);
		}
		else if (func_501(10))
		{
			_databinding_write_data_int(Global_1940311->f_1433.f_2204.f_379.f_24, 2);
		}
		else if (func_501(11))
		{
			_databinding_write_data_int(Global_1940311->f_1433.f_2204.f_379.f_24, 3);
		}
		else if (func_501(12))
		{
			_databinding_write_data_int(Global_1940311->f_1433.f_2204.f_379.f_24, 4);
		}
		else if (func_501(13))
		{
			_databinding_write_data_int(Global_1940311->f_1433.f_2204.f_379.f_24, 1);
		}
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_379.f_22, true);
		_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_379.f_1, true);
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_379.f_28, -2036453627);
		if (_databinding_read_data_int(Global_1940311->f_1433.f_2204.f_379.f_24) != func_502())
		{
			_databinding_write_data_int(Global_1940311->f_1433.f_2204.f_379.f_24, func_502());
		}
	}
}

void func_103()
{
	if (!func_504("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
	{
		return;
	}
	if (iVar1 > 10)
	{
		iVar1 = 10;
	}
	Var2 = { func_505(0, 1, 0, -1) };
	Var6.f_10 = -1;
	iVar31 = 0;
	while (iVar31 < iVar1)
	{
		if (!func_506(iVar31, iVar0, iVar1, 0, &Var6, 0))
		{
		}
		else
		{
			func_507(Var2, &Var6, iVar30, 0);
			iVar30++;
		}
		iVar31++;
	}
	while (iVar30 < 11)
	{
		func_507(Var2, &Var6, iVar30, 1);
		iVar30++;
	}
	func_508(iVar0);
}

void func_104(int iParam0)
{
	Global_1940311->f_1433.f_1636 = iParam0;
	Var2.f_10 = -1;
	if (!func_504("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
	{
		return;
	}
	if (!func_506(iParam0, iVar0, iVar1, 0, &Var2, 1))
	{
		func_508(iVar0);
		return;
	}
	sVar26 = func_509(0);
	if (func_510(Var2, -653439684, 0, -1) == 515427499)
	{
		sVar26 = func_509(1);
	}
	iVar27 = func_511(Var2.f_11);
	iVar28 = func_512(Var2.f_11) + 1;
	iVar28 = func_513(iVar28, 0, 10);
	iVar30 = iVar28 + 2;
	iVar30 = func_513(iVar30, 0, 10);
	iVar31 = func_514(Var2.f_11) + 1;
	iVar31 = func_513(iVar31, 0, 10);
	iVar33 = iVar31 + 2;
	iVar33 = func_513(iVar33, 0, 10);
	func_515(&Var2, &iVar29, &iVar32);
	iVar29 = floor((IntToFloat(iVar29) * 0.01f));
	iVar29 = (iVar29 + iVar28);
	iVar29 = func_513(iVar29, 0, 10);
	iVar32 = floor((IntToFloat(iVar32) * 0.01f));
	iVar32 = (iVar32 + iVar31);
	iVar32 = func_513(iVar32, 0, 10);
	sVar34 = func_517(func_516(Var2.f_11));
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_473, get_hash_key(sVar34));
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_474, get_hash_key(func_518(Var2.f_22)));
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_475, get_hash_key(func_519(iVar27, Var2.f_22)));
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_476, get_hash_key(sVar26));
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_477, get_hash_key(func_520(Var2.f_22)));
	_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_467, iVar28);
	_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_468, iVar29);
	_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_469, iVar30);
	_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_470, iVar31);
	_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_471, iVar32);
	_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_472, iVar33);
	func_508(iVar0);
}

void func_105(int iParam0)
{
	Var3.f_10 = -1;
	if (!func_504("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
	{
	}
	if (iVar1 > 10)
	{
		iVar1 = 10;
	}
	Var27 = { func_505(0, 1, 0, iParam0) };
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_506(iVar2, iVar0, iVar1, 0, &Var3, 0))
		{
		}
		else
		{
			func_521(Var27, &Var3, iVar31, iParam0, 0);
			iVar31++;
		}
		iVar2++;
	}
	while (iVar31 < 11)
	{
		func_507(Var27, &Var3, iVar31, 1);
		iVar31++;
	}
	func_508(iVar0);
}

void func_106()
{
	Var2 = { func_522(0, -1591664384, -1591664384, -1591664384, 0, 0, -2072933068) };
	if (!func_523(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (iVar1 > 8)
	{
		iVar1 = 8;
	}
	Var16 = { func_255(0, 1, 0, -1) };
	Var20.f_10 = -1;
	iVar45 = 0;
	while (iVar45 < iVar1)
	{
		if (!func_506(iVar45, iVar0, iVar1, 2, &Var20, 0))
		{
		}
		else
		{
			func_524(Var16, &Var20, iVar44, 0);
			iVar44++;
		}
		iVar45++;
	}
	while (iVar44 < 9)
	{
		func_524(Var16, &Var20, iVar44, 1);
		iVar44++;
	}
	func_508(iVar0);
}

void func_107(int iParam0)
{
	Global_1940311->f_1433.f_2204 = iParam0;
	Var2 = { func_522(0, -1591664384, -1591664384, -1591664384, 0, 0, -2072933068) };
	if (!func_523(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	Var16.f_10 = -1;
	if (!func_506(iParam0, iVar0, iVar1, 2, &Var16, 0))
	{
		func_508(iVar0);
		return;
	}
	iVar40 = Var16.f_11;
	iVar41 = func_525(iVar40);
	iVar42 = func_526(iVar40);
	iVar43 = func_527(iVar40);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_374, get_hash_key(func_528(iVar41)));
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_375, get_hash_key(func_529(iVar42)));
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_376, get_hash_key(func_530(iVar43)));
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_377, get_hash_key(func_531(iVar40)));
	func_508(iVar0);
}

void func_108(int iParam0)
{
	Var2 = { func_522(0, -1591664384, -1591664384, -1591664384, 0, 0, -2072933068) };
	if (!func_523(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (iVar1 > 8)
	{
		iVar1 = 8;
	}
	Var16 = { func_255(0, 1, 0, iParam0) };
	Var20.f_10 = -1;
	iVar45 = 0;
	while (iVar45 < iVar1)
	{
		if (!func_506(iVar45, iVar0, iVar1, 2, &Var20, 0))
		{
		}
		else
		{
			func_532(Var16, &Var20, iVar44, iParam0, 0);
			iVar44++;
		}
		iVar45++;
	}
	while (iVar44 < 9)
	{
		func_524(Var16, &Var20, iVar44, 1);
		iVar44++;
	}
	func_508(iVar0);
}

void func_109(int iParam0, int iParam1)
{
	iVar0 = func_534(func_533(iParam1));
	_databinding_write_data_int(Global_1940311->f_1433.f_2643.f_39, iVar0);
}

void func_110(int iParam0)
{
	switch (iParam0)
	{
		case -1896177107:
			_databinding_write_data_hash_string(Global_1940311->f_1433.f_2643.f_38, 442252665);
			break;
		case 2042309940:
			_databinding_write_data_hash_string(Global_1940311->f_1433.f_2643.f_38, 771582374);
			break;
			break;
		default:
			_databinding_write_data_hash_string(Global_1940311->f_1433.f_2643.f_38, 2);
			break;
	}
}

void func_111(int iParam0)
{
	sVar0 = "";
	switch (iParam0)
	{
		case -682748:
			sVar0 = "PLAYER_CAMP_GRIZZLIES";
			break;
		case 1357161730:
			sVar0 = "PLAYER_CAMP_BAYOU_NWA";
			break;
		case 1581179681:
			sVar0 = "PLAYER_CAMP_BIG_VALLEY";
			break;
		case -215258135:
			sVar0 = "PLAYER_CAMP_CHOLLA_SPRINGS";
			break;
		case -987049424:
			sVar0 = "PLAYER_CAMP_CUMBERLAND_FOREST";
			break;
		case 892234183:
			sVar0 = "PLAYER_CAMP_GAPTOOTH_RIDGE";
			break;
		case -1554232707:
			sVar0 = "PLAYER_CAMP_GREAT_PLAINS";
			break;
		case 1538293636:
			sVar0 = "PLAYER_CAMP_HEARTLANDS";
			break;
		case -1992167326:
			sVar0 = "PLAYER_CAMP_HENNIGANS_STEAD";
			break;
		case -1884014371:
			sVar0 = "PLAYER_CAMP_RIO_BRAVO";
			break;
		case -1871413878:
			sVar0 = "PLAYER_CAMP_ROANOKE_RIDGE";
			break;
		case 1483778247:
			sVar0 = "PLAYER_CAMP_SCARLETT_MEADOWS";
			break;
		case -724534761:
			sVar0 = "PLAYER_CAMP_TALL_TREES";
			break;
	}
	_databinding_write_data_string(Global_1940311->f_1433.f_54.f_70, _create_var_string(2, sVar0));
}

int func_112()
{
	return Global_1940311->f_1433.f_2643.f_47;
}

void func_113(int iParam0, int iParam1)
{
	iVar0 = func_535(func_533(iParam1));
	_databinding_write_data_int(Global_1940311->f_1433.f_2643.f_43, iVar0);
}

void func_114(int iParam0, int iParam1)
{
	if (&Global_1296859 != 255)
	{
		vVar0 = { func_536(&Global_1296859) };
		if (vVar0.y == iParam1 && vVar0.x == func_533(iParam0))
		{
			func_70(_create_var_string(2, "NET_CAMP_LOCATION_PITCHED_FOOTER"), 1105014447);
			return;
		}
	}
	iVar3 = func_535(func_533(iParam0));
	if (!func_537(iVar3))
	{
		func_70(_create_var_string(2, "NET_CAMP_LOCATION_NO_CASH_FOOTER"), 1105014447);
		return;
	}
	vVar0.f_1 = iParam1;
	vVar0.x = func_533(iParam0);
	if (func_538(vVar0, _0x149a2751ab66ac02(Global_1296859->f_15)))
	{
		func_70(_create_var_string(2, "NET_CAMP_LOCATION_TOO_SMALL"), 1105014447);
		return;
	}
	iVar4 = _0x149a2751ab66ac02(Global_1296859->f_15);
	if (!func_539(vVar0.x, iVar4, iParam1))
	{
		func_70(_create_var_string(2, "NET_CAMP_DISTRICT_INVALID"), 1105014447);
		return;
	}
	func_70(_create_var_string(2, "NET_CAMP_LOCATION_ENTRY_FOOTER"), 1105014447);
}

int func_115(int iParam0)
{
	iVar2 = func_540(1);
	Var3 = { func_541(1) };
	bVar7 = func_542(iParam0);
	Var8.f_9 = -1591664384;
	if (bVar7 == 0)
	{
		return 0;
	}
	iVar1 = _0x033ee4b89f3ac545(iVar2, &Var3, bVar7);
	if (iVar1 == 0)
	{
		return 0;
	}
	if (iVar1 > 48)
	{
		iVar1 = 48;
	}
	iVar0 = 0;
	while (iVar0 <= (iVar1 - 1))
	{
		if (!_0xbe012571b25f5aca(iVar2, &Var3, bVar7, iVar0, &Var8))
		{
		}
		else
		{
			return Var8.f_4;
		}
		iVar0++;
	}
	return 0;
}

void func_116(int iParam0)
{
	if (iParam0 == 0)
	{
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_6279.f_11, -1);
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_6279.f_12, -1);
	}
	else
	{
		vVar0 = { func_543(iParam0) };
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_6279.f_11, vVar0.x);
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_6279.f_12, func_544(iParam0));
	}
}

int func_117(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		return 0;
	}
	if (iParam1 < 0)
	{
		return 0;
	}
	iVar1 = 0;
	iVar2 = func_540(1);
	Var3 = { func_541(1) };
	Var8.f_9 = -1591664384;
	bVar7 = func_542(iParam0);
	iVar22 = _0x033ee4b89f3ac545(iVar2, &Var3, bVar7);
	if (iParam1 > (iVar22 - 1))
	{
		return 0;
	}
	if (iVar22 > 0)
	{
		if (!_0xbe012571b25f5aca(iVar2, &Var3, bVar7, iParam1, &Var8))
		{
			return 0;
		}
		iVar1 = Var8.f_4;
	}
	else
	{
		return 0;
	}
	return iVar1;
}

int func_118(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		return -1;
	}
	iVar3 = func_540(1);
	Var4 = { func_541(1) };
	bVar8 = func_542(iVar0);
	Var9.f_9 = -1591664384;
	iVar2 = _0x033ee4b89f3ac545(iVar3, &Var4, bVar8);
	if (iVar2 == 0)
	{
		return -1;
	}
	if (iVar2 > 48)
	{
		iVar2 = 48;
	}
	iVar1 = 0;
	while (iVar1 <= (iVar2 - 1))
	{
		if (!_0xbe012571b25f5aca(iVar3, &Var4, bVar8, iVar1, &Var9))
		{
		}
		else if (iParam1 == Var9.f_4)
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_119(var uParam0)
{
	iVar0 = _databinding_read_data_hash_string_from_parent(uParam0, "moonshine_selection_property");
	if (iVar0 != -1 && iVar0 < 5)
	{
		iVar1 = iVar0;
		_databinding_write_data_int(Global_1940311->f_1433.f_8125.f_251, iVar1);
	}
	func_545(1);
}

void func_120(int iParam0)
{
	iVar0 = func_546(iParam0);
	iVar1 = -1593595016;
	if (_0x81d7183e7a8eca72(Global_1940311->f_1433.f_8125.f_240) != iVar0)
	{
		if (!_does_streamed_txd_exist(iVar1))
		{
			return;
		}
		_request_streamed_txd(iVar1, false);
		if (!_has_streamed_txd_loaded(iVar1))
		{
			return;
		}
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_8125.f_241, iVar1);
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_8125.f_240, iVar0);
	}
}

int func_121(int iParam0)
{
	switch (iParam0)
	{
		case 2077941391:
			return 3;
		case 1088802604:
			return 2;
		case -910546409:
			return 3;
		case -1902254786:
			return 4;
		case 491987586:
			return 5;
		case -240952777:
			return 6;
		case 1018100553:
			return 8;
		case 1876618697:
			return 8;
		case 587836234:
			return 9;
		case 513547135:
			return 0;
		case 2047751621:
			return 1;
		case -862379603:
			return 15;
		case 1363191263:
			return 16;
		case 2132537609:
			return 17;
		case -1783088248:
			return 19;
		case 1095154187:
			return 18;
		default:
			break;
	}
	return -1;
}

void func_122(int iParam0)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 <= -1)
	{
		return;
	}
	if (iVar0 > 20)
	{
		return;
	}
	func_547(Global_1901947->f_123[iVar0]->f_1, &(Global_1901947->f_123[iVar0]));
}

void func_123(int iParam0)
{
	func_549(func_548(iParam0));
}

void func_124()
{
	func_547(Global_1901947->f_123.f_41.f_1, Global_1901947->f_123.f_41);
}

void func_125()
{
	func_549(-1209711415);
}

int func_126()
{
	func_550();
	Var0.f_50 = 256;
	Var0 = 4;
	StringCopy(&(Var0.f_1), func_551(), 128);
	StringCopy(&(Var0.f_17), func_552(), 128);
	Var0.f_49 = 20;
	return func_553(&Var0);
}

int func_127()
{
	func_550();
	Var0.f_50 = 256;
	Var0 = 4;
	StringCopy(&(Var0.f_1), func_551(), 128);
	StringCopy(&(Var0.f_17), func_552(), 128);
	Var0.f_49 = 20;
	return func_553(&Var0);
}

void func_128()
{
	Global_1940311->f_1433.f_9184.f_245 = 0;
	Global_1940311->f_1433.f_9184.f_247 = 3;
	Global_1940311->f_1433.f_9184.f_246 = get_cloud_time_as_int();
}

void func_129()
{
	func_554(68);
	func_555();
	func_556(-1050153785, -575777117, 0, 0, 0, 0, 0, 0, 0, 0, 0);
	func_557(3);
}

void func_130(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0))
	{
		return;
	}
	iVar0 = _databinding_read_data_int_from_parent(uParam0, func_58(87));
	switch (iVar0)
	{
		case 6:
			func_558(_databinding_read_data_int_from_parent(uParam0, func_58(50)));
			break;
		case 16:
			iVar1 = _0xe6aab897120492d6(uParam0, func_58(88));
			func_559(1, iVar1, Global_1901947->f_308.f_172);
			func_560(88, Global_1296859->f_15, iVar1, 1);
			break;
		case 17:
			iVar1 = _0xe6aab897120492d6(uParam0, func_58(88));
			func_559(2, iVar1, Global_1901947->f_308.f_172);
			func_560(89, Global_1296859->f_15, iVar1, 1);
			break;
		case 20:
			iVar3 = _databinding_read_data_int_from_parent(uParam0, func_58(51));
			func_561(int_to_playerindex(iVar3));
			break;
		case 8:
			iVar2 = _databinding_read_data_int_from_parent(uParam0, func_58(50));
			func_562(iVar2, 1);
			break;
		case 21:
			func_563();
			break;
		case 10:
			iVar2 = _databinding_read_data_int_from_parent(uParam0, func_58(50));
			func_564(iVar2);
			break;
		case 9:
			iVar2 = _databinding_read_data_int_from_parent(uParam0, func_58(50));
			func_565(iVar2);
			break;
		case 12:
			iVar2 = _databinding_read_data_int_from_parent(uParam0, func_58(50));
			break;
		case 11:
			break;
		case 1:
			iVar2 = _databinding_read_data_int_from_parent(uParam0, func_58(50));
			func_566(iVar2, 1);
			break;
		case 19:
			iVar2 = _databinding_read_data_int_from_parent(uParam0, func_58(50));
			if (_0x8e2143144b8e188d(iVar2))
			{
			}
			break;
		case 23:
			Var4.f_10 = 255;
			Var4.f_4 = 34;
			Var4.f_5 = _databinding_read_data_int_from_parent(uParam0, func_58(50));
			_0x31010318ba9897ac(&uVar23, network_player_id_to_int());
			func_567(&Var4, uVar23);
			break;
	}
	func_568(uParam0);
	func_145();
}

void func_131(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, func_58(87));
	iVar1 = _databinding_read_data_int_from_parent(uParam0, func_58(50));
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_3.f_1 = -1;
	iVar14 = 0;
	iVar15 = 0;
	iVar16 = 0;
	switch (iVar0)
	{
		case 1:
			uVar2 = _0x27b1ae4d8c652f08(iVar1);
			_0xc0cffda87c2c163d(uVar2, &Var3, 11);
			iVar15 = _0xe79ba3bc265895da(uVar2);
			iVar14 = _databinding_read_data_string_from_parent(uParam0, func_58(15));
			break;
		case 10:
			StringCopy(&cVar17, _create_var_string(2, "POSSE_INVITE_HDR"), 64);
			iVar15 = func_569(cVar17);
			iVar16 = _create_var_string(2, "POSSE_INVITE_DESC");
			iVar14 = _databinding_read_data_string_from_parent(uParam0, func_58(15));
			break;
	}
	_databinding_write_data_string(Global_1940311->f_242.f_7.f_1, iVar15);
	_databinding_write_data_string(Global_1940311->f_242.f_7.f_4, iVar14);
	_databinding_write_data_string(Global_1940311->f_242.f_7.f_5, iVar16);
}

void func_132(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, func_58(87));
	switch (iVar0)
	{
		case 8:
			iVar1 = _databinding_read_data_int_from_parent(uParam0, func_58(50));
			func_570(iVar1, uParam0);
			break;
		case 21:
			iVar1 = _databinding_read_data_int_from_parent(uParam0, func_58(50));
			func_571(iVar1, 1);
			break;
		case 16:
		case 17:
			iVar1 = _databinding_read_data_int_from_parent(uParam0, func_58(51));
			func_572(iVar1);
			break;
		case 6:
			break;
		case 1:
			iVar1 = _databinding_read_data_int_from_parent(uParam0, func_58(50));
			func_566(iVar1, 0);
			break;
	}
	func_568(uParam0);
}

void func_133(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, func_58(75));
	switch (iVar0)
	{
		case 2:
			iVar1 = _databinding_read_data_int_from_parent(uParam0, func_58(50));
			uVar2 = _0x27b1ae4d8c652f08(iVar1);
			_0x16efb123c4451032(uVar2, &Var3);
			network_show_profile_ui(&Var3);
			break;
		case 3:
			iVar1 = _databinding_read_data_int_from_parent(uParam0, func_58(50));
			_0x7baa30c9bbe8aee7(iVar1, &Var10);
			network_show_profile_ui(&(Var10.f_1));
			break;
		case 4:
			iVar1 = _databinding_read_data_int_from_parent(uParam0, func_58(51));
			iVar18 = int_to_playerindex(iVar1);
			if (!_network_is_player_index_valid(iVar18) || !network_is_player_active(iVar18))
			{
				return;
			}
			Var3 = { func_573(iVar18) };
			network_show_profile_ui(&Var3);
			break;
		case 22:
			iVar1 = _databinding_read_data_int_from_parent(uParam0, func_58(50));
			iVar18 = int_to_playerindex(iVar1);
			if (!_network_is_player_index_valid(iVar18) || !network_is_player_active(iVar18))
			{
				return;
			}
			Var3 = { func_573(iVar18) };
			network_show_profile_ui(&Var3);
			break;
	}
}

bool func_134()
{
	iVar0 = func_574();
	if (iVar0 > 0)
	{
		return true;
	}
	return false;
}

int func_135()
{
	bVar0 = _databinding_read_data_bool(Global_1940311->f_1433.f_1636.f_422.f_19);
	bVar1 = _databinding_read_data_bool(Global_1940311->f_1433.f_1636.f_422.f_20);
	if (bVar1)
	{
		return 1;
	}
	if (bVar0)
	{
		return 2;
	}
	return 1;
}

void func_136(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_447, false);
			_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_422.f_19, false);
			_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_422.f_20, false);
			break;
		case 1:
			_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_447, true);
			_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_448, -138701133);
			_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_422.f_19, true);
			_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_422.f_20, false);
			break;
		case 2:
			_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_447, true);
			_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_448, 1012636423);
			_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_422.f_19, false);
			_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_422.f_20, true);
			break;
	}
}

bool func_137()
{
	iVar0 = func_575();
	if (iVar0 > 0)
	{
		return true;
	}
	return false;
}

int func_138()
{
	bVar0 = _databinding_read_data_bool(Global_1940311->f_1433.f_2204.f_346.f_19);
	bVar1 = _databinding_read_data_bool(Global_1940311->f_1433.f_2204.f_346.f_20);
	if (bVar1)
	{
		return 1;
	}
	if (bVar0)
	{
		return 2;
	}
	return 1;
}

void func_139(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_371, false);
			_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_346.f_19, false);
			_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_346.f_20, false);
			break;
		case 1:
			_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_371, true);
			_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_372, 1810553290);
			_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_346.f_19, true);
			_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_346.f_20, false);
			break;
		case 2:
			_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_371, true);
			_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_372, 1049535948);
			_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_346.f_19, false);
			_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_346.f_20, true);
			break;
	}
}

int func_140(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	Global_1940311->f_1433.f_2 = iParam0;
	func_33(5, 1);
	return 1;
}

void func_141()
{
	if (_databinding_is_data_id_valid(Global_1940311->f_1433.f_54.f_5))
	{
		_databinding_write_data_string(Global_1940311->f_1433.f_54.f_5, "");
	}
	if (_databinding_is_data_id_valid(Global_1940311->f_1433.f_54.f_6))
	{
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_54.f_6, 1105014447);
	}
}

void func_142(int iParam0)
{
	if (!func_576(Global_1138962->f_145, iParam0))
	{
		func_577(&(Global_1138962->f_145), iParam0);
	}
}

int func_143()
{
	uVar0 = func_578();
	return uVar0;
}

void func_144(int iParam0, int iParam1)
{
	if (iParam0 != Global_1138962->f_137)
	{
		return;
	}
	if (!func_576(Global_1138962->f_137.f_1, iParam1))
	{
		func_577(&(Global_1138962->f_137.f_1), iParam1);
	}
}

void func_145()
{
	func_18(0);
}

bool func_146(int iParam0)
{
	return func_576(Global_1138962->f_145, iParam0);
}

void func_147()
{
	func_320(&(Global_1896738->f_5), 7);
}

void func_148(var uParam0)
{
	Global_1940311->f_1433.f_157.f_2 = { *uParam0 };
}

bool func_149(int iParam0)
{
	if (!_uistatemachine_request_transition(1433015236, iParam0))
	{
		return false;
	}
	return true;
}

bool func_150()
{
	if (!network_is_handle_valid(&(Global_1940311->f_1433.f_31)))
	{
		return false;
	}
	if (!func_35(Global_1940311->f_1433.f_31, &(Global_1940311->f_1433.f_31.f_7)))
	{
		return false;
	}
	return true;
}

int func_151(var uParam0, var uParam1)
{
	if (*uParam0 < 0 || *uParam0 > (4 - 1))
	{
		return 0;
	}
	_databinding_clear_binding_array(uParam0->f_9);
	iVar0 = func_540(1);
	Var1 = { func_541(1) };
	Var6.f_9 = -1591664384;
	bVar5 = func_542(*uParam0);
	iVar20 = _0x033ee4b89f3ac545(iVar0, &Var1, bVar5);
	if (iVar20 > 48)
	{
		iVar20 = 48;
	}
	Var29 = 1;
	Var29.f_1 = 1;
	Var29.f_2 = 1105014447;
	Var29.f_4 = -1;
	Var29.f_5 = -1;
	Var29.f_6 = -1;
	Var29.f_10 = -1;
	Var29.f_11 = -1;
	Var29.f_12 = -1;
	Var29.f_32 = -1;
	Var29.f_35 = -1;
	if (iVar20 > 0)
	{
		iVar65 = 0;
		while (iVar65 <= (iVar20 - 1))
		{
			if (!_0xbe012571b25f5aca(iVar0, &Var1, bVar5, iVar65, &Var6))
			{
			}
			else
			{
				StringCopy(&cVar21, "emote_specific_", 64);
				StringIntConCat(&cVar21, iVar65, 64);
				func_579(&Var29, uParam1, Var6.f_4, uParam0->f_5);
				func_580(uParam0->f_14[iVar65], uParam0->f_13, cVar21, Var29);
				_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_9, -1, "pm_dynamic_text_and_end_image_and_corner_end_image", &(uParam0->f_14[iVar65]));
			}
			iVar65++;
		}
	}
	return 1;
}

char* func_152(int iParam0)
{
	return func_581(iParam0);
}

void func_153(bool bParam0)
{
	_databinding_write_data_bool(Global_1940311->f_1433.f_6279.f_10, bParam0);
}

int func_154(var uParam0, var uParam1)
{
	if (*uParam0 < 0 || *uParam0 > (4 - 1))
	{
		return 0;
	}
	_databinding_clear_binding_array(uParam0->f_9);
	Var8 = 1;
	Var8.f_1 = 1;
	Var8.f_2 = 1105014447;
	Var8.f_4 = -1;
	Var8.f_5 = -1;
	Var8.f_6 = -1;
	Var8.f_10 = -1;
	Var8.f_11 = -1;
	Var8.f_12 = -1;
	Var8.f_32 = -1;
	Var8.f_35 = -1;
	iVar45 = 3;
	iVar44 = 0;
	while (iVar44 <= iVar45)
	{
		if (&uParam1->f_2[iVar44] == 0)
		{
		}
		else
		{
			StringCopy(&cVar0, "emote_specific_", 64);
			StringIntConCat(&cVar0, iVar44, 64);
			func_579(&Var8, uParam1, &(uParam1->f_2[iVar44]), uParam0->f_5);
			func_580(uParam0->f_14[iVar44], uParam0->f_13, cVar0, Var8);
			_databinding_insert_ui_item_to_list_from_context_string_alias(uParam0->f_9, -1, "pm_dynamic_text_and_end_image_and_corner_end_image", &(uParam0->f_14[iVar44]));
			iVar44++;
		}
	}
	return 1;
}

int func_155(var uParam0, var uParam1, int iParam2)
{
	iVar0 = uParam1;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		return 0;
	}
	bVar1 = false;
	iVar2 = 0;
	while (iVar2 <= 3)
	{
		if (iParam2 == &uParam0->f_2[iVar2])
		{
			bVar1 = true;
		}
		else
		{
			iVar2++;
		}
	}
	if (!bVar1)
	{
		return 0;
	}
	iVar3 = func_582(iVar0);
	Var4 = { func_583(iParam2, func_541(1), iVar3, 1) };
	return func_584(&(Global_1071686->f_28357.f_11), Var4);
}

int func_156(var uParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		return 0;
	}
	if (uParam0->f_1 == -1)
	{
		return 0;
	}
	iVar1 = func_582(iVar0);
	Var2 = { func_583(&(uParam0->f_2[uParam0->f_1]), func_541(1), iVar1, 1) };
	return func_585(&(Global_1071686->f_28357.f_11), Var2);
}

int func_157(var uParam0, int iParam1, int iParam2)
{
	if (!func_586(iParam2, 0))
	{
		return 2;
	}
	iVar0 = func_587((*uParam0)[iParam1], iParam2);
	if (iVar0 == -1)
	{
		if (&(*uParam0)[iParam1]->f_2[uParam0[iParam1]] != 0)
		{
			if ((*uParam0)[iParam1]->f_1 > -1 && &(*uParam0)[iParam1]->f_2[uParam0[iParam1]] == &(*uParam0)[iParam1]->f_2[(*uParam0)[iParam1]->f_1])
			{
				func_156((*uParam0)[iParam1], iParam1);
			}
		}
		func_588(uParam0, iParam1, iParam2);
		return 0;
	}
	else
	{
		if ((*uParam0)[iParam1]->f_1 > -1 && &(*uParam0)[iParam1]->f_2[iVar0] == &(*uParam0)[iParam1]->f_2[(*uParam0)[iParam1]->f_1])
		{
			func_156((*uParam0)[iParam1], iParam1);
		}
		func_589((*uParam0)[iParam1], iVar0);
		return 1;
	}
	return 2;
}

void func_158()
{
	Global_1940311->f_1433.f_7831 = _databinding_add_data_container_from_path("", "player_walk_types_data");
	Global_1940311->f_1433.f_7831.f_1 = _databinding_add_ui_item_list(Global_1940311->f_1433.f_7831, "player_walk_types_collection");
	_databinding_clear_binding_array(Global_1940311->f_1433.f_7831.f_1);
	Global_1940311->f_1433.f_7831.f_2 = _databinding_add_data_bool_from_path("", "walk_options_enabled", 1);
	Var8 = 1;
	Var8.f_1 = 1;
	Var8.f_2 = 1105014447;
	Var8.f_4 = -1;
	Var8.f_5 = -1;
	Var8.f_6 = -1;
	Var8.f_10 = -1;
	Var8.f_11 = -1;
	Var8.f_12 = -1;
	iVar36 = 0;
	iVar37 = 12;
	iVar36 = 0;
	while (iVar36 < iVar37)
	{
		iVar38 = func_590(iVar36);
		if (iVar38 != 0)
		{
			if (!_unlock_is_visible(iVar38) || !_unlock_is_unlocked(iVar38))
			{
			}
			else
			{
				StringCopy(&cVar0, "walk_type_", 64);
				StringIntConCat(&cVar0, iVar36, 64);
				Var8.f_8 = 1;
				StringCopy(&(Var8.f_16), func_591(iVar36), 64);
				Var8.f_24 = 1442026401;
				Var8.f_25 = -1218088854;
				Var8.f_26 = 0;
				Var8.f_5 = -1899275725;
				Var8.f_4 = 1433015236;
				Var8.f_27 = iVar36;
				func_592(Global_1940311->f_1433.f_7831.f_3[iVar36], Global_1940311->f_1433.f_7831, cVar0, Var8);
				_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1940311->f_1433.f_7831.f_1, -1, "pm_dynamic_text_and_end_image", &(Global_1940311->f_1433.f_7831.f_3[iVar36]));
			}
			iVar36++;
		}
	}
}

int func_159()
{
	return Global_17411.f_55.f_644.f_1783;
}

int func_160(int iParam0, int iParam1)
{
	if (!iParam0 == iParam1 && (iParam1 != 13 && iParam1 < 12))
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_7831.f_3[iParam1]->f_21, false);
	}
	if (iParam0 == 13 || iParam0 >= 12)
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_7831.f_3[0]->f_21, true);
		return 0;
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_7831.f_3[iParam0]->f_21, true);
	return 1;
}

void func_161(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 12)
	{
		iParam0 = 0;
	}
	iVar0 = iParam0;
	iVar1 = func_159();
	func_160(iVar0, iVar1);
	func_593(iVar0, iVar1);
	func_594(iVar0);
}

struct<2> func_162()
{
	Var0 = -1;
	Var0.f_1 = -1;
	return Var0;
}

bool func_163(int iParam0, struct<2> Param1)
{
	switch (iParam0)
	{
		case 6:
			if (!func_595(Param1))
			{
				return false;
			}
			break;
		case 4:
			if (!func_596(Param1))
			{
				return false;
			}
			break;
		case 5:
			if (!func_597(Param1))
			{
				return false;
			}
			break;
		case 7:
		case 8:
		case 9:
		case 10:
			if (!func_598(iParam0, &Param1))
			{
				return false;
			}
			break;
		default:
			return false;
	}
	func_599(iParam0, Param1, -1);
	return true;
}

bool func_164(int iParam0, int iParam1)
{
	if (!func_600(16))
	{
		return false;
	}
	iVar3 = func_533(iParam0);
	iVar4 = _0x149a2751ab66ac02(Global_1296859->f_15);
	Var0 = iVar3;
	Var0.f_1 = iParam1;
	if (func_600(64))
	{
		if (!func_602(func_601(Var0), 1, 59806960))
		{
			return false;
		}
	}
	return func_539(iVar3, iVar4, iParam1);
}

bool func_165()
{
	return Global_1896738->f_13.f_3;
}

int func_166(int iParam0, int iParam1)
{
	Global_1896738->f_13.f_7 = iParam0;
	Global_1896738->f_13.f_8 = iParam1;
	Global_1896738->f_13.f_6 = 1;
	Global_1896738->f_13.f_9 = func_535(func_533(iParam1));
	if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_4))
	{
		_databinding_write_data_string(Global_1896738->f_13.f_50.f_4, _create_var_string(2, func_603(iParam0, 0)));
	}
	return 1;
}

bool func_167(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	vVar0.f_2 = -2;
	vVar0.f_1 = iParam0;
	vVar0.x = func_533(iParam1);
	Global_1132288->f_2036.f_3 = bParam2;
	if (bParam2)
	{
		if (!func_604(vVar0, 1))
		{
			return false;
		}
		func_605(1);
	}
	if (func_606(vVar0, 0))
	{
		if (iParam3 == 0)
		{
			func_607(vVar0.y);
		}
		return true;
	}
	return false;
}

void func_168(int iParam0)
{
	if (!func_600(iParam0))
	{
		func_577(&((*Global_1134390)[network_player_id_to_int()]->f_73), iParam0);
	}
}

void func_169(int iParam0)
{
	Global_1940311->f_1433.f_2643.f_47 = iParam0;
}

int func_170()
{
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return 0;
	}
	func_608(2);
	(*Global_1134390)[network_player_id_to_int()]->f_33.f_2 = 0;
	(*Global_1134390)[network_player_id_to_int()]->f_33.f_3 = get_random_int_in_range(0, 65536);
	func_609();
	func_610(vVar0);
	return 1;
}

void func_171()
{
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (!_0xd6f6acf4392187fb(iVar0))
	{
		return;
	}
	if (!_0x0f99f6436528a089(iVar0))
	{
		return;
	}
	Global_1194053->f_5[1] = 0;
	func_611(Global_1194053->f_5[1], 1);
	func_195(1);
}

void func_172()
{
	if (func_383(get_player_index(), 1) == -1)
	{
		iVar0 = func_612(1384535894, 0, 1, -1, 1);
		iVar1 = func_613(1384535894, iVar0, 0, 1, 1);
		if ((iVar0 == -570078785 || (func_614(iVar0) && func_615(1384535894, 773203532, iVar0, 1, 1) > 0)) && !func_616(iVar1))
		{
			func_617(0, 0, (iVar1 / 100));
			func_618(1);
		}
	}
}

void func_173()
{
	if (func_619() == -1)
	{
		apply_damage_to_ped(player_ped_id(), get_entity_health(player_ped_id()), 1, 21030, player_ped_id());
	}
	else
	{
		func_620(player_ped_id(), -842959696, 0, 0);
	}
}

bool func_174()
{
	return Global_1940311->f_1433.f_157.f_206.f_3;
}

void func_175(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 58)
	{
		return;
	}
	_copy_memory(&(Global_1896738->f_3715[iVar0]->f_3), &uVar1, 1);
	Global_1896738->f_3715[iVar0] = 0;
	Global_1896738->f_3715[iVar0]->f_2 = 0;
	Global_1896738->f_3715[iVar0]->f_1 = 0;
}

void func_176(bool bParam0, bool bParam1)
{
	Var1.f_38 = 7;
	Var1.f_91 = -1;
	if (!bParam1)
	{
		if (!bParam0)
		{
			if (func_621(&Var1, 1))
			{
				bVar0 = true;
			}
		}
		else
		{
			Var1 = { func_191(1) };
			if (func_222(&Var1))
			{
				bVar0 = true;
			}
		}
	}
	iVar96 = 0;
	if (bVar0)
	{
		func_148(&Var1);
		func_97(&Var1);
		func_140(17);
		iVar96 = 394524610;
	}
	else
	{
		func_622();
		func_623();
		if (func_624())
		{
			func_140(14);
			iVar96 = -303450633;
		}
		else
		{
			func_140(16);
			iVar96 = 1243396847;
		}
	}
	if (iVar96 == 0)
	{
	}
	else if (!func_149(iVar96))
	{
	}
}

void func_177()
{
	if (_databinding_is_data_id_valid(Global_1896738->f_393.f_1))
	{
		_0x3bf0767cf33fcc88(Global_1896738->f_393.f_1);
	}
}

void func_178(int iParam0)
{
	Global_1896738->f_13.f_3 = iParam0;
}

struct<7> func_179(var uParam0, char* sParam1)
{
	_0xb138ca787f3dd858(uParam0, sParam1, &Var0);
	return Var0;
}

bool func_180(struct<7> Param0, char[4] cParam7, bool bParam8)
{
	if (!func_34(Param0))
	{
		return false;
	}
	else if (network_is_gamer_in_my_session(&Param0))
	{
		return false;
	}
	if (!func_625())
	{
		func_626("NT_INV_FINISH_FIRST_MISSION", 10000, 0, 0, 0, 1);
		return false;
	}
	if (!bParam8)
	{
		if (Global_1940311->f_1433.f_1407 != -1 && (get_game_timer() - Global_1940311->f_1433.f_1407) < Global_1901947->f_1.f_24)
		{
			Global_1940311->f_1433.f_1407 = get_game_timer();
			return false;
		}
	}
	if (!bParam8)
	{
		Global_1940311->f_1433.f_1407 = get_game_timer();
	}
	Var0.f_1 = -1;
	Var0.f_2 = -1;
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	if (func_627())
	{
		func_611(&(Var0.f_10), 4);
	}
	else
	{
		func_628(&(Var0.f_10), 4);
	}
	Var0 = func_629();
	Var0.f_1 = func_630();
	Var0.f_2 = func_631();
	Var0.f_3 = { func_632() };
	Var0.f_9 = func_633();
	if (network_is_friend(&Param0))
	{
		if (!_0xe348d1404bd80146(&Param0))
		{
			return false;
		}
	}
	vVar11 = { func_634() };
	func_635(&Param0, cParam7, &vVar11, &Var0, 0);
	return true;
}

int func_181()
{
	return Global_1940311->f_1433.f_9184.f_1;
}

void func_182(var uParam0, int iParam1)
{
	if (!_databinding_is_data_id_valid(*uParam0))
	{
		return;
	}
	iVar1 = _databinding_get_array_count(*uParam0);
	iVar10 = func_636();
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			if (Global_1940311->f_1433.f_1407 != -1 && (get_game_timer() - Global_1940311->f_1433.f_1407) < Global_1901947->f_1.f_24)
			{
			}
			else if (func_637(iVar10) && func_638(iVar10))
			{
				if (!func_639(iVar10, 1))
				{
				}
				else
				{
					iVar0 = 0;
					while (iVar0 <= (iVar1 - 1))
					{
						uVar2 = _databinding_get_item_context_by_index(*uParam0, iVar0);
						if (!_databinding_is_data_id_valid(uVar2))
						{
						}
						else
						{
							Var3 = { func_179(uVar2, func_58(29)) };
							if (!func_34(Var3))
							{
							}
							else if (network_is_gamer_in_my_session(&Var3))
							{
							}
							else if (_0xa2837a5e21fb5a58(&Var3))
							{
							}
							else if (func_637(iVar10) && func_638(iVar10))
							{
								iVar11 = func_640(iVar10, &Var3);
								if (iVar11 != -1 && iVar11 != 0)
								{
								}
								else if (!func_180(Var3, _0x5659d87be674ab17(&Var3), 1))
								{
								}
								iVar0++;
								Global_1940311->f_1433.f_1407 = get_game_timer();
							}
						}
					}
				}
			}
			default:
				break;
	}
}

bool func_183()
{
	return Global_1896738->f_13.f_6;
}

bool func_184(int iParam0, int iParam1)
{
	*iParam0 = Global_1896738->f_13.f_7;
	*iParam1 = Global_1896738->f_13.f_8;
	return Global_1896738->f_13.f_6;
}

int func_185()
{
	if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_41.f_23))
	{
		switch (_0x81d7183e7a8eca72(Global_1896738->f_13.f_50.f_41.f_23))
		{
			case 1513236523:
				return 0;
			case 126620015:
				return 1;
			default:
				break;
		}
	}
	return 1;
}

int func_186()
{
	if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_99.f_23))
	{
		switch (_0x81d7183e7a8eca72(Global_1896738->f_13.f_50.f_99.f_23))
		{
			case 1083456181:
				return 0;
			case -299269340:
				return 1;
			default:
				break;
		}
	}
	return 1;
}

char* func_187()
{
	return func_641(&(Global_1896738->f_13.f_10));
}

int func_188(int iParam0, int iParam1, var uParam2, var uParam3, char* sParam4)
{
	if (func_642())
	{
		return 0;
	}
	func_643();
	Global_1896738->f_13.f_37 = 1;
	Global_1896738->f_13.f_37.f_2 = iParam1;
	Global_1896738->f_13.f_37.f_1 = iParam0;
	Global_1896738->f_13.f_37.f_3 = uParam2;
	Global_1896738->f_13.f_37.f_4 = uParam3;
	Global_1896738->f_13.f_37.f_5 = { func_644(sParam4) };
	func_645(1);
	return 1;
}

int func_189(int iParam0, int iParam1, var uParam2, var uParam3)
{
	if (func_642())
	{
		return 0;
	}
	func_643();
	Global_1896738->f_13.f_37 = 0;
	Global_1896738->f_13.f_37.f_2 = iParam1;
	Global_1896738->f_13.f_37.f_1 = iParam0;
	Global_1896738->f_13.f_37.f_3 = uParam2;
	Global_1896738->f_13.f_37.f_4 = uParam3;
	StringCopy(&(Global_1896738->f_13.f_37.f_5), "", 64);
	func_645(1);
	return 1;
}

void func_190(int iParam0)
{
	func_646(iParam0);
	disable_control_action(2, -1860390754, false);
	disable_control_action(2, 1141111167, false);
	disable_control_action(2, -1384133541, false);
	disable_control_action(2, 1710877787, false);
	disable_control_action(2, -875187602, false);
	disable_control_action(2, 652860416, false);
	disable_control_action(2, 285921746, false);
	disable_control_action(2, -1932931774, false);
}

struct<95> func_191(bool bParam0)
{
	if (bParam0)
	{
		func_647(&(Global_1940311->f_1433.f_157.f_2));
	}
	return Global_1940311->f_1433.f_157.f_2;
}

bool func_192(var uParam0)
{
	return uParam0->f_3;
}

int func_193(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		_0x0a04a07bc3074edb(iParam1);
		if (_0xc08dff658b2e51da())
		{
			func_648(3);
			return 1;
		}
	}
	else
	{
		_0xc08aff658b2e51da(&iVar0);
		if (iParam0 == iVar0)
		{
			_0x0a04a07bc3074edb(iParam1);
		}
		if (_0xc08dff658b2e51db(iParam0))
		{
			func_648(3);
			return 1;
		}
	}
	return 0;
}

int func_194(int iParam0)
{
	if (Global_1896738->f_191.f_1 != 0)
	{
		return 0;
	}
	Global_1896738->f_191.f_1 = iParam0;
	iVar0 = 0;
	switch (iParam0)
	{
		case 5:
			iVar0 = 9;
			break;
		case 6:
			iVar0 = 8;
			break;
		case 1:
			iVar0 = 7;
			break;
	}
	func_649(30f, iVar0);
	return 1;
}

void func_195(int iParam0)
{
	_0xc08aff658b2e51da(&iVar0);
	if (iVar0 != 0)
	{
		func_611(&(Global_1194053->f_3), 32);
		func_611(&(Global_1194053->f_4), 12);
		Global_1194053->f_498 = iVar0;
		if (network_is_player_active(player_id()) && _0x424b17a7dc5c90bc(player_id()))
		{
			func_611(&(Global_1194053->f_4), 2);
		}
		_0xc08bff658b2e51da(0);
		Global_1194053->f_5[5] = 0;
		func_611(Global_1194053->f_5[5], 1);
	}
	Global_1194053->f_5[3] = 0;
	func_611(Global_1194053->f_5[3], 1);
	iVar1 = _0x901e0dc25080c8b9(player_id());
	if (!_0xd6f6acf4392187fb(iVar1))
	{
		func_611(Global_1194053->f_5[3], 6);
		return;
	}
	if (!_0x0f99f6436528a089(iVar1))
	{
		func_611(Global_1194053->f_5[3], 6);
		return;
	}
	_0x0a04a07bc3074edb(iParam0);
}

bool func_196(var uParam0)
{
	return uParam0->f_4;
}

void func_197(int iParam0)
{
	func_611(&(Global_1194053->f_3), iParam0);
}

int func_198(bool bParam0, bool bParam1)
{
	if (network_is_player_active(player_id()))
	{
		bVar0 = _0x424b17a7dc5c90bc(player_id());
		if (_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())))
		{
			if (bVar0)
			{
				_0x0a04a07bc3074edb(1);
			}
			else
			{
				_0x0a04a07bc3074edb(0);
			}
		}
	}
	if (Global_1194053->f_492 != -1 && &Global_1194053->f_503[Global_1194053->f_492] != 0)
	{
		Var2 = { func_650() };
		if (func_34(Global_1194053->f_503[Global_1194053->f_492]->f_19) && func_34(Var2))
		{
			bVar1 = network_are_handles_the_same(&(Global_1194053->f_503[Global_1194053->f_492]->f_19), &Var2);
		}
	}
	if (_0xc08bff658b2e51da(0))
	{
		func_651(bVar1, bParam0);
		if (bParam1)
		{
			func_652();
		}
		return 1;
	}
	return 0;
}

void func_199()
{
	func_340();
	Var0.f_2 = 0;
	Var0.f_3 = get_hash_key("IB_ACCEPT");
	Var0.f_3.f_3 = 1;
	Var0.f_7 = get_hash_key("IB_BACK");
	Var0.f_7.f_3 = 0;
	func_653(&Var0);
	Global_1940311->f_1433.f_157.f_264.f_2 = func_654(&Var0, "NM_MW_POSSE_DISBAND_WARNING_HEADER", "NM_MW_POSSE_DISBAND_WARNING_SUBHEADER", 0, 0, 1);
}

bool func_200(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!_unlock_is_unlocked(-1828672432))
	{
		return false;
	}
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		if (func_214(iParam0, 1))
		{
		}
		else
		{
			return false;
		}
	}
	else if (_0x149a2751ab66ac02(Global_1296859->f_15) >= _0x853b0fa4d8732c57(Global_1296859->f_15))
	{
		if (func_214(iParam0, 2))
		{
		}
	}
	else if (func_214(iParam0, -1))
	{
	}
	return true;
}

bool func_201(int iParam0)
{
	if (Global_1298378->f_131.f_5)
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	if (!func_655(iParam0))
	{
		return false;
	}
	if (func_656(iParam0))
	{
		return false;
	}
	Var0.f_5 = 255;
	Var0.f_7 = -1;
	Var0.f_9 = 7;
	Var0.f_19 = -1;
	Var0.f_19.f_1 = -1;
	Var0.f_4 = 1;
	Var0.f_5 = iParam0;
	iVar26 = 0;
	while (iVar26 <= 31)
	{
		if (&Global_1298166->f_3.f_132[iVar26] == 255)
		{
			func_657(&Var0, iParam0);
			Global_1298166->f_3.f_132[iVar26] = iParam0;
			Global_1298166->f_3.f_132[iVar26]->f_1 = _get_system_time();
			return true;
		}
		iVar26++;
	}
	return false;
}

struct<7> func_202()
{
	return Global_1940311->f_1433.f_8;
}

bool func_203(struct<7> Param0)
{
	if (!func_34(Param0))
	{
		return false;
	}
	network_show_profile_ui(&Param0);
	return true;
}

struct<7> func_204()
{
	return Global_1940311->f_1433.f_31;
}

bool func_205(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0))
	{
		return false;
	}
	Var0 = { func_179(uParam0, func_58(29)) };
	if (!network_is_handle_valid(&Var0))
	{
		return false;
	}
	if (!network_is_gamer_in_my_session(&Var0))
	{
		return false;
	}
	iVar7 = network_get_player_from_gamer_handle(&Var0);
	if (!_network_is_player_index_valid(iVar7))
	{
		return false;
	}
	if (!func_658(iVar7, !_0x0ded260a1958a82e(iVar7)))
	{
	}
	return true;
}

bool func_206()
{
	iVar3 = 0;
	while (iVar3 < 32)
	{
		iVar2 = int_to_playerindex(iVar3);
		if (iVar2 == player_id())
		{
		}
		else if (!_network_is_player_index_valid(iVar2))
		{
		}
		else if (!network_is_player_active(iVar2))
		{
		}
		else
		{
			iVar1++;
			if (!_0x0ded260a1958a82e(iVar2))
			{
			}
			else
			{
				iVar0++;
			}
		}
		iVar3++;
	}
	if (iVar1 == 0)
	{
		return false;
	}
	return iVar1 == iVar0;
}

void func_207(bool bParam0)
{
	iVar1 = 0;
	while (iVar1 < 32)
	{
		iVar0 = int_to_playerindex(iVar1);
		if (iVar0 == player_id())
		{
		}
		else if (!_network_is_player_index_valid(iVar0))
		{
		}
		else if (!network_is_player_active(iVar0))
		{
		}
		else
		{
			func_658(iVar0, bParam0);
		}
		iVar1++;
	}
}

void func_208(int iParam0)
{
	Global_265377->f_124517.f_135 = (Global_265377->f_124517.f_135 - (Global_265377->f_124517.f_135 && iParam0));
}

void func_209(int iParam0)
{
	Global_265377->f_124517.f_135 = (Global_265377->f_124517.f_135 || iParam0);
}

bool func_210()
{
	iVar0 = func_89();
	if (!_network_is_player_index_valid(iVar0))
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_53, false);
		return false;
	}
	if (!func_659(iVar0, !_0x0ded260a1958a82e(iVar0)))
	{
		return false;
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_52, true);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_53, true);
	return true;
}

bool func_211(int iParam0, struct<7> Param1)
{
	Var0.f_27 = 10;
	if (iParam0 == 0 || !_0xc087ff658b2e51da(iParam0, &Var0))
	{
		return false;
	}
	Var118 = { func_650() };
	if (!network_are_handles_the_same(&(Var0.f_19), &Var118))
	{
		return false;
	}
	if (!func_34(Param1))
	{
		return false;
	}
	iVar126 = 0;
	while (iVar126 <= (Var0.f_26 - 1))
	{
		if (network_are_handles_the_same(Var0.f_27[iVar126], &Param1))
		{
			bVar125 = true;
		}
		else
		{
			iVar126++;
		}
	}
	if (!bVar125)
	{
		return false;
	}
	if (_0xc08eff658b2e51db(iParam0, &Param1))
	{
		return true;
	}
	return false;
}

int func_212(int iParam0, bool bParam1, int iParam2)
{
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return 0;
	}
	if (_0x901e0dc25080c8b9(iParam0) != _0x901e0dc25080c8b9(player_id()))
	{
		return 0;
	}
	bVar0 = false;
	iVar1 = _0x901e0dc25080c8b9(player_id());
	if (func_396(iVar1))
	{
		if (bParam1)
		{
			Var2 = { func_573(iParam0) };
			_0xc08aff658b2e51da(&iVar9);
			if (func_211(iVar9, Var2))
			{
				bVar0 = true;
			}
			else
			{
				return 0;
			}
		}
		else
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		_0xcd9e2d9bc52fd80f(iParam0, iParam2);
	}
	return 1;
}

bool func_213(var uParam0)
{
	if (!network_is_handle_valid(uParam0))
	{
		return false;
	}
	if (!is_durango_version())
	{
		return false;
	}
	sVar0 = "";
	_0x5759160ac17c13ce(uParam0, sVar0);
	return true;
}

bool func_214(int iParam0, int iParam1)
{
	iVar0 = player_id();
	if (iParam1 == 1)
	{
		return false;
	}
	if ((!network_is_player_active(player_id()) || !_0x424b17a7dc5c90bc(player_id())) || !_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())))
	{
		return false;
	}
	if (!func_660())
	{
		func_661(iVar0);
		return false;
	}
	if (func_662(iParam0))
	{
		return false;
	}
	if (!func_663(iParam0))
	{
		return false;
	}
	if (iParam1 == 2)
	{
		func_664("NG_FULL_S");
		return true;
	}
	if (!_unlock_is_unlocked(-1828672432))
	{
		func_664("NG_CANT_INVITE");
		return false;
	}
	if (!func_665())
	{
		func_664("NG_POSSE_INVITE_LIMIT");
		return false;
	}
	if (_0x6102830f764b3de1(iParam0))
	{
		func_667(func_666(-1225075647, 1047079933), 1);
		sVar1 = _create_var_string(10, "NG_INVITE_SENT_POSSE", func_669(get_player_name(iParam0), func_668(iParam0, 1, -1, 0)));
		func_670(sVar1, -2, 0, 0, 0, 1);
		func_671(iParam0);
		return true;
	}
	func_664("NG_CANT_INVITE");
	return false;
}

char* func_215()
{
	return func_672(Global_1940311->f_1433.f_8.f_7);
}

int func_216(int iParam0)
{
	if (!func_673(1))
	{
		return 0;
	}
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	if (!_0xc685b014ce3d988b(iParam0))
	{
		return 0;
	}
	sVar0 = _create_var_string(10, "NC_CREW_INVITE_SENT", func_669(get_player_name(iParam0), func_668(iParam0, 1, -1, 0)));
	func_670(sVar0, -2, 0, 0, 0, 1);
	return 1;
}

void func_217(var uParam0)
{
	if (func_674())
	{
		return;
	}
	if (network_is_gamer_in_my_session(uParam0))
	{
		func_675(0);
		return;
	}
	StringCopy(&(Var0.f_7), _0x5659d87be674ab17(uParam0), 64);
	Var0 = { *uParam0 };
	Var22.f_1 = -1;
	Var22.f_2 = -1;
	Var22.f_3 = -1;
	Var22.f_3.f_1 = -1;
	if (func_627())
	{
		func_611(&(Var22.f_10), 4);
	}
	else
	{
		func_628(&(Var22.f_10), 4);
	}
	Var22 = func_629();
	Var22.f_1 = Global_1572887->f_106.f_9;
	Var22.f_2 = func_631();
	Var22.f_3 = { func_632() };
	Var22.f_9 = func_633();
	func_676(&Var0, &Var22);
	func_677(&Var0);
	func_678(&Var22);
	func_679(1);
	func_680(0);
}

bool func_218(var uParam0)
{
	if (!network_is_handle_valid(uParam0))
	{
		return false;
	}
	if (network_is_friend(uParam0))
	{
		return false;
	}
	sVar0 = "";
	if (!network_add_friend(uParam0, sVar0))
	{
		return false;
	}
	return true;
}

bool func_219(var uParam0)
{
	if (!network_is_handle_valid(uParam0))
	{
		return false;
	}
	if (!network_is_friend(uParam0))
	{
		return false;
	}
	if (!_0x55f618f68ab854d3(uParam0))
	{
		return false;
	}
	return true;
}

bool func_220(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!_0xd6f6acf4392187fb(iParam0))
		{
			return false;
		}
		if (!_0x0f99f6436528a089(iParam0))
		{
			return false;
		}
		if (!network_is_player_active(_0x4be6c13a45cca8ec(iParam0)))
		{
			return false;
		}
	}
	uParam1->f_1 = iParam0;
	uParam1->f_3 = 0;
	*uParam1 = 1;
	uParam1->f_4 = func_396(iParam0);
	if (!func_647(uParam1))
	{
		return false;
	}
	return true;
}

bool func_221(struct<7> Param0, int iParam7, char[4] cParam8)
{
	if (iParam7 < 0 || iParam7 > 8)
	{
		return false;
	}
	if (!func_34(Param0))
	{
		return false;
	}
	Global_1940311->f_1433.f_1316 = iParam7;
	Global_1940311->f_1433.f_1316.f_1 = { Param0 };
	Var0.f_2 = 0;
	Var0.f_3 = get_hash_key("CM_REPORT");
	Var0.f_3.f_3 = 1;
	Var0.f_7 = get_hash_key("IB_BACK");
	Var0.f_7.f_3 = 0;
	func_653(&Var0);
	func_682(Var0, "CWS_REPORT", func_681(Global_1940311->f_1433.f_1316));
	return true;
}

bool func_222(var uParam0)
{
	if (!*uParam0)
	{
		return false;
	}
	if (uParam0->f_4 && uParam0->f_3)
	{
		Var0.f_27 = 10;
		if (!_0xc087ff658b2e51da(uParam0->f_2, &Var0))
		{
			return false;
		}
	}
	else
	{
		if (!_0xd6f6acf4392187fb(uParam0->f_1))
		{
			return false;
		}
		if (!_0x0f99f6436528a089(uParam0->f_1))
		{
			return false;
		}
	}
	return true;
}

bool func_223(var uParam0)
{
	if (!func_222(uParam0))
	{
		return false;
	}
	if (func_192(uParam0))
	{
		if (func_683(uParam0))
		{
			if (network_is_gamer_in_my_session(&(uParam0->f_29)))
			{
				if (!func_684(uParam0->f_2, 0))
				{
					return false;
				}
			}
			else if (!func_685(uParam0->f_2))
			{
				return false;
			}
			else if (!func_686(uParam0->f_2))
			{
				return false;
			}
			else
			{
				func_145();
			}
		}
		else
		{
			return false;
		}
	}
	else
	{
		if (!_0xd6f6acf4392187fb(uParam0->f_1))
		{
			return false;
		}
		if (func_196(uParam0))
		{
			if (func_683(uParam0) && !func_687(_0x4be6c13a45cca8ec(uParam0->f_1)))
			{
				func_664("NM_GC_POSSE_JOIN_FAIL");
			}
		}
		else
		{
			if (!func_688())
			{
				func_664("NG_CANT_JOIN");
				return false;
			}
			else if (!func_683(uParam0))
			{
				func_690("NG_FULL", func_689(uParam0->f_1, 1, 0), func_668(_0x4be6c13a45cca8ec(uParam0->f_1), 1, -1, 0));
				return false;
			}
			func_691(uParam0->f_1);
		}
	}
	func_149(-303450633);
	return true;
}

bool func_224(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return false;
	}
	if (!func_688())
	{
		func_664("NG_CANT_JOIN");
		return false;
	}
	else if (_0x149a2751ab66ac02(iParam0) == _0x853b0fa4d8732c57(iParam0))
	{
		func_690("NG_FULL", func_689(iParam0, 1, 0), 340002725);
		return false;
	}
	if (func_396(iParam0))
	{
		func_687(_0x4be6c13a45cca8ec(iParam0));
	}
	else
	{
		func_691(iParam0);
	}
	return true;
}

bool func_225()
{
	return Global_1572887->f_106.f_75 != 1;
}

void func_226(bool bParam0)
{
	_0xc505036a35afd01b(false);
	iVar0 = player_id();
	iVar1 = _0x901e0dc25080c8b9(iVar0);
	if (_0x4be6c13a45cca8ec(iVar1) == iVar0)
	{
		uVar2 = func_692(iVar1);
		_0xd426e2e3288469d6(&uVar2, &Global_1296859);
		func_693(uVar2);
	}
	func_694(10, bParam0, 0, 0);
}

void func_227(int iParam0, int iParam1)
{
	if (!func_695(iParam0))
	{
	}
	iVar0 = 1;
	iVar1 = iParam0;
	if (iParam0 >= 10 && iParam0 <= 13)
	{
		iVar0 = 0;
	}
	if (iParam0 == 18)
	{
		iVar1 = 3;
	}
	if (iParam1 == 1 || iParam1 == 2)
	{
		if (Global_1901947->f_762.f_1)
		{
			iVar1 = func_696(iParam0);
		}
	}
	iVar2 = 0;
	if (((iVar1 == 6 || iVar1 == 5) || iVar1 == 8) || iVar1 == 9)
	{
		iVar2 = 2;
	}
	func_697(iParam1);
	func_699(1, 32, iVar0, func_698(iVar1), func_162(), iVar2, -1, 0, 0, 0);
}

int func_228()
{
	iVar0 = (get_random_int_in_range(0, 65536) % 100);
	if (iVar0 >= 0 && iVar0 <= 20)
	{
		return 11;
	}
	else if (iVar0 <= 40)
	{
		return 10;
	}
	else if (iVar0 <= 80)
	{
		return 12;
	}
	else if (iVar0 <= 100)
	{
		return 13;
	}
	return 12;
}

void func_229()
{
	func_697(12);
	func_699(1, 32, 2, -1, func_162(), 0, -1, 0, 3, 0);
}

void func_230()
{
	func_697(13);
	func_699(1, 32, 1, -1, func_162(), 0, -1, 0, 3, 0);
}

void func_231(bool bParam0)
{
	if (!bParam0 && Global_1956200->f_1431.f_108)
	{
		return;
	}
	iVar0 = get_player_ped(player_id());
	if (_is_attribute_overpowered(iVar0, 0))
	{
		Global_1956200->f_1431.f_108.f_1 = _0x4c9f782180712742(iVar0, 0);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_1 = 0f;
	}
	if (_is_attribute_overpowered(iVar0, 1))
	{
		Global_1956200->f_1431.f_108.f_3 = _0x4c9f782180712742(iVar0, 1);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_3 = 0f;
	}
	if (_is_attribute_overpowered(iVar0, 2))
	{
		Global_1956200->f_1431.f_108.f_2 = _0x4c9f782180712742(iVar0, 2);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_2 = 0f;
	}
	if (_0x200373a8df081f22(iVar0, 0))
	{
		Global_1956200->f_1431.f_108.f_4 = _0xb429f58803d285b1(iVar0, 0);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_4 = 0f;
	}
	if (_0x200373a8df081f22(iVar0, 1))
	{
		Global_1956200->f_1431.f_108.f_6 = _0xb429f58803d285b1(iVar0, 1);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_6 = 0f;
	}
	if (_0x200373a8df081f22(iVar0, 2))
	{
		Global_1956200->f_1431.f_108.f_5 = _0xb429f58803d285b1(iVar0, 2);
	}
	else
	{
		Global_1956200->f_1431.f_108.f_5 = 0f;
	}
	Global_1956200->f_1431.f_108 = 1;
}

void func_232()
{
	func_700(512);
	func_701(Global_1051135);
}

void func_233()
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (_does_thread_exist(Global_1196898->f_78[iVar0]->f_5))
		{
			_0x7de4643157ad646c(Global_1196898->f_78[iVar0]->f_5);
		}
		if (_does_thread_exist(Global_1196898->f_78[iVar0]->f_4))
		{
			_0x7de4643157ad646c(Global_1196898->f_78[iVar0]->f_4);
		}
		iVar0++;
	}
}

bool func_234(int iParam0)
{
	if (iParam0 == 255)
	{
		return func_702();
	}
	return func_703(64, iParam0);
}

void func_235(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	func_704(iParam0);
	if (!func_705(1))
	{
		return;
	}
	if (bParam1)
	{
		do_screen_fade_out(iParam2);
	}
	else if (!func_706(128) && !func_707(19))
	{
		do_screen_fade_out(iParam2);
	}
	if (bParam3 && func_708() == 4)
	{
		func_709(18);
	}
	func_710(1024);
}

bool func_236(int iParam0)
{
	return func_23(1, iParam0);
}

void func_237()
{
	if (func_711(255) == 4 || func_707(0))
	{
		Global_1102219->f_3955 = 1;
		return;
	}
	bVar0 = func_707(36);
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		Global_1102219->f_4[iVar1] = 0;
		iVar1++;
	}
	func_712(109);
	func_712(131);
	if (bVar0)
	{
		func_712(36);
	}
	Global_1102219->f_3952 = 0;
	Global_1102219->f_3953 = 0;
	Global_1102219->f_3954 = 0;
	Global_1102219->f_3955 = 0;
}

void func_238(bool bParam0, bool bParam1)
{
	if (func_711(255) == 4)
	{
		return;
	}
	if (func_713(get_entity_coords(get_player_ped(player_id()), false, false)))
	{
		return;
	}
	if (!bParam0)
	{
		func_709(0);
	}
	else
	{
		if (bParam1)
		{
			func_235(0, 0, 0, 1);
		}
		func_712(0);
		func_714(&(Global_1102219->f_3849));
		Global_1102219->f_3849 = 0f;
		Global_1102219->f_3849.f_5 = 1;
		Global_1102219->f_3849.f_16 = 0;
		Global_1102219->f_3849.f_17.f_6 = { get_entity_coords(get_player_ped(player_id()), false, false) };
		Global_1102219->f_3849.f_17.f_3 = { 0f, 0f, 0f };
		Global_1102219->f_3849.f_17 = { Global_1901947->f_50.f_1, Global_1901947->f_50.f_1, Global_1901947->f_50.f_1 };
		Global_1102219->f_3849.f_17.f_9 = -432403087;
		func_715(&(Global_1102219->f_3888));
		Global_1102219->f_3888.f_6 = { Global_1102219->f_3849.f_17.f_6 };
		Global_1102219->f_3888 = Global_1102219->f_3849;
		Global_1102219->f_3888.f_5 = 1;
		if (bParam1)
		{
			Global_1102219->f_26.f_3341 = 0;
			Global_1102219->f_26.f_3342 = 0;
		}
	}
	func_716(Global_1102219->f_3849, 36);
	func_717(Global_1102219->f_3888, 36);
}

bool func_239()
{
	if (_0xdd73c9838ce7181d())
	{
		return true;
	}
	return false;
}

void func_240()
{
	if (Global_1194053->f_492 == -1)
	{
		return;
	}
	iVar0 = _0x901e0dc25080c8b9(&(Global_1296859->f_154[&Global_1296859]));
	if (!_0x0f99f6436528a089(iVar0))
	{
		_0xc08bff658b2e51da(0);
		func_651(0, 0);
	}
	if (!_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
	{
		_0xc08bff658b2e51da(0);
		func_651(0, 0);
	}
	else
	{
		func_651(1, 0);
	}
}

void func_241(int iParam0, int iParam1)
{
	if (&Global_1051139)
	{
		return;
	}
	if (!func_718(&iVar0))
	{
		func_719(iParam0, iParam1, 0);
		return;
	}
	func_720(0, iParam0, 1, iParam1, -1, 1, iVar0);
}

void func_242()
{
	if (&Global_1051139)
	{
		return;
	}
	if (!func_718(&iVar0))
	{
		func_721(1);
		return;
	}
	func_720(2, 0, 1, 0, -1, 1, iVar0);
}

int func_243(int iParam0)
{
	Var0 = { func_722(&(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_32)) };
	_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_37, Global_1296859->f_21 + 3);
	if (!func_602(1806374467, 1, 59806960))
	{
		return -1;
	}
	iVar4 = func_723(1806374467, "NSTM_STABLE_REVIVE_FEEDPAID", 1, 1, 0, 59806960);
	if (iVar4 == -1)
	{
		return -1;
	}
	if (func_724(&Var0, 0, 1))
	{
		if (!func_725(Var0, 0, 0))
		{
			return -1;
		}
	}
	func_726(Var0, 0, 0);
	func_727(&Var0);
	func_728(32);
	return iVar4;
}

int func_244(int iParam0)
{
	Var0 = { func_722(&(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_32)) };
	_databinding_write_data_int(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_37, Global_1296859->f_21 + 3);
	if (!func_602(852655472, 1, 59806960))
	{
		return -1;
	}
	iVar4 = func_723(852655472, "NSTM_VEHICLE_REVIVE_FEEDPAID", 1, 1, 0, 59806960);
	if (iVar4 == -1)
	{
		return -1;
	}
	if (func_724(&Var0, 2, 1))
	{
		if (!func_256(Var0, 2, 0))
		{
			return -1;
		}
	}
	func_726(Var0, 2, 0);
	func_728(32);
	return iVar4;
}

void func_245(bool bParam0)
{
	if (bParam0)
	{
		func_729(10, 4);
	}
	else
	{
		func_729(9, 4);
	}
}

void func_246()
{
	func_729(11, 2);
}

int func_247(bool bParam0)
{
	iVar0 = _0xf49f14462f0ae27c(player_id());
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	iVar1 = _get_rider_of_mount(iVar0, false);
	if (does_entity_exist(iVar1))
	{
		if (iVar1 == player_ped_id() && !bParam0)
		{
			return 0;
		}
	}
	Global_1291734->f_11.f_50 = Global_1296859->f_20;
	func_730(48);
	func_731();
	return 1;
}

void func_248(int iParam0)
{
	if (func_732())
	{
		return;
	}
	Var0 = { func_722(&(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_32)) };
	Var4 = { func_733() };
	if (_0x4c543d5dfcd2dafd(&Var0, &Var4))
	{
		return;
	}
	func_734(&Var0, 1);
	func_728(32);
}

void func_249(int iParam0)
{
	if (!func_504("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
	{
	}
	if (iParam0 < 0 || iParam0 >= iVar1)
	{
		func_508(iVar0);
		return;
	}
	Var2.f_10 = -1;
	if (!func_506(iParam0, iVar0, iVar1, 0, &Var2, 0))
	{
		func_508(iVar0);
		return;
	}
	iVar26 = player_id();
	iVar27 = _0xf49f14462f0ae27c(iVar26);
	Var28 = { func_505(0, 1, 0, -1) };
	Var32 = { Var2 };
	if (does_entity_exist(iVar27))
	{
		if (decor_exist_on(iVar27, func_735()))
		{
			Var36 = decor_get_int(iVar27, func_735());
		}
		if (decor_exist_on(iVar27, func_736()))
		{
			Var36.f_1 = decor_get_int(iVar27, func_736());
		}
		if (decor_exist_on(iVar27, func_737()))
		{
			Var36.f_2 = decor_get_int(iVar27, func_737());
		}
		if (decor_exist_on(iVar27, func_738()))
		{
			Var36.f_3 = decor_get_int(iVar27, func_738());
		}
	}
	if (!_0x4c543d5dfcd2dafd(&Var28, &Var32))
	{
		if (!_0x4c543d5dfcd2dafd(&Var36, &Var32))
		{
			bVar40 = false;
			if (does_entity_exist(iVar27))
			{
				if (!is_entity_dead(iVar27))
				{
					bVar40 = true;
				}
			}
			if (bVar40)
			{
				iVar41 = 120000;
			}
			else
			{
				iVar41 = 30000;
			}
			func_739(Var28, (Global_1296859->f_21 + (iVar41 / 1000)), 2, 0);
			func_731();
			func_245(1);
		}
		func_740(&Var32, 0);
	}
	func_508(iVar0);
}

void func_250(int iParam0, int iParam1)
{
	if (!func_504("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= iVar1)
	{
		func_508(iVar0);
		return;
	}
	Var2.f_10 = -1;
	if (!func_506(iParam0, iVar0, iVar1, 0, &Var2, 0))
	{
		func_508(iVar0);
		return;
	}
	if (iParam1 == 3)
	{
		func_740(&Var2, 0);
	}
	func_742(&Var2, func_741(iParam1, 0), 0);
	func_508(iVar0);
}

void func_251(bool bParam0)
{
	if (bParam0)
	{
		func_729(13, 5);
	}
	else
	{
		func_729(12, 5);
	}
}

void func_252()
{
	func_729(14, 3);
}

void func_253(int iParam0)
{
	Var2 = { func_522(0, -1591664384, -1591664384, -1591664384, 0, 0, -2072933068) };
	if (!func_523(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= iVar1)
	{
		func_508(iVar0);
		return;
	}
	Var16.f_10 = -1;
	if (!func_506(iParam0, iVar0, iVar1, 2, &Var16, 0))
	{
		func_508(iVar0);
		return;
	}
	iVar40 = player_id();
	iVar41 = _0xb9050a97594c8832(iVar40);
	Var42 = { func_733() };
	Var46 = { func_255(0, 0, 0, -1) };
	Var50 = { Var16 };
	Var54 = { func_743(2) };
	if (!_0x4c543d5dfcd2dafd(&Var42, &Var54))
	{
		if (func_744(&Var54) && _0x4c543d5dfcd2dafd(&Var54, &Var50))
		{
			func_745();
			func_746();
			func_508(iVar0);
			return;
		}
	}
	else if (does_entity_exist(_0xb9050a97594c8832(player_id())))
	{
	}
	if (!_0x4c543d5dfcd2dafd(&Var46, &Var50))
	{
		if (!_0x4c543d5dfcd2dafd(&Var54, &Var50))
		{
			bVar58 = false;
			if (does_entity_exist(iVar41))
			{
				if (!is_entity_dead(iVar41))
				{
					bVar58 = true;
				}
			}
			if (bVar58)
			{
				iVar59 = 120000;
			}
			else
			{
				iVar59 = 30000;
			}
			func_747(Var46, (Global_1296859->f_21 + (iVar59 / 1000)), 2, 2);
			func_257();
			func_251(1);
		}
		func_748(&Var50, 0);
	}
	func_749(&Var50, 2);
	func_508(iVar0);
}

void func_254(int iParam0, int iParam1)
{
	Var2 = { func_522(0, -1591664384, -1591664384, -1591664384, 0, 0, -2072933068) };
	if (!func_523(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= iVar1)
	{
		func_508(iVar0);
		return;
	}
	Var16.f_10 = -1;
	if (!func_506(iParam0, iVar0, iVar1, 2, &Var16, 0))
	{
		func_508(iVar0);
		return;
	}
	if (iParam1 == 7)
	{
		func_748(&Var16, 0);
	}
	func_750(&Var16, func_741(iParam1, 2), 0);
	func_508(iVar0);
}

struct<4> func_255(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (!func_751(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var24 = { func_752() };
		if (func_753() && _0xb881ca836cc4b6d4(&Var24))
		{
			Var0 = { Var24 };
		}
		else if (!_0x4c543d5dfcd2dafd(&Var24, &Var0))
		{
			func_754(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_755(player_id());
	}
	bVar28 = func_756(76);
	if (bVar28)
	{
		iParam3 = 3;
	}
	iVar29 = func_757(iParam3, 2);
	if (iVar29 != 7)
	{
		if (_0xb881ca836cc4b6d4(Global_17411.f_55.f_61[iVar29]))
		{
			Var0 = { *Global_17411.f_55.f_61[iVar29] };
		}
	}
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		if (!bParam1)
		{
			return func_733();
		}
		if (!func_758(&Var0, 0))
		{
			Var30 = { func_759(bParam0) };
		}
		else
		{
			Var30 = { Var0 };
		}
		return Var30;
	}
	return Var0;
}

bool func_256(struct<4> Param0, int iParam4, int iParam5)
{
	if (func_724(&Param0, 2, 1) && iParam5 == 2)
	{
		return false;
	}
	Var0 = { func_733() };
	iVar4 = 0;
	while (iVar4 < 16)
	{
		if (!_0x4c543d5dfcd2dafd(Global_1291734->f_581.f_107[iVar4], &Param0) && !_0x4c543d5dfcd2dafd(Global_1291734->f_581.f_107[iVar4], &Var0))
		{
		}
		else
		{
			Global_1291734->f_581.f_107[iVar4]->f_5 = Global_1296859->f_21 + 120;
			*Global_1291734->f_581.f_107[iVar4] = { Param0 };
			Global_1291734->f_581.f_107[iVar4]->f_6 = iParam5;
			Global_1291734->f_581.f_107[iVar4]->f_4 = iParam4;
			return true;
		}
		iVar4++;
	}
	return false;
}

void func_257()
{
	if (func_760(8, 255))
	{
		return;
	}
	func_761(3);
}

void func_258()
{
	func_762();
}

void func_259()
{
	iVar0 = 571466135;
	while (_event_manager_is_event_pending(iVar0))
	{
		if (_event_manager_peek_event(iVar0, &vVar1))
		{
			if (vVar1.x == 2099701247)
			{
			}
			else if (vVar1.x == -1203660660)
			{
			}
			else if (vVar1.x == -632467210)
			{
				func_141();
			}
			else if (vVar1.x == -1740156697)
			{
				func_70(_0x3138582e0a13bfab(vVar1.z), 1105014447);
			}
			_event_manager_pop_event(iVar0);
		}
	}
}

void func_260()
{
	func_763(Global_1296859->f_1, 0);
	func_764();
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_90, (_unlock_is_unlocked(-1810129149) && func_765()));
	if (func_239() && (func_627() || func_766()))
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_91, true);
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_91, false);
	}
	func_767(0, func_442() == 0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_79, func_768());
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_78, func_769());
	func_767(9, func_449() == 0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_84, func_770());
	func_767(1, func_444() == 0);
	func_771();
}

void func_261()
{
	iVar2 = Global_1296859->f_21;
	if (Global_1940311->f_242.f_1186 <= 0)
	{
		return;
	}
	if (Global_1940311->f_242.f_1190 >= 30)
	{
		Global_1940311->f_242.f_1190 = 0;
	}
	Var3 = { *Global_1940311->f_242.f_14[Global_1940311->f_242.f_1190] };
	if (_databinding_is_data_id_valid(Var3))
	{
		iVar0 = _databinding_read_data_int(Var3.f_25);
		switch (_databinding_read_data_int(Var3.f_26))
		{
			case 21:
				if (!func_772() || iVar0 < iVar2)
				{
					iVar1 = 0;
					while (iVar1 < Global_1248240->f_8903.f_14)
					{
						if (&Global_1248240->f_8903.f_9[iVar1] == int_to_playerindex(_databinding_read_data_int(Var3.f_27)))
						{
							Global_1248240->f_8903.f_9[iVar1]->f_2 = 1;
							Global_1248240->f_8903.f_9[iVar1]->f_3 = iVar0 < iVar2;
						}
						iVar1++;
					}
					func_773(_databinding_read_data_int(Global_1940311->f_242.f_14[Global_1940311->f_242.f_1190]->f_26));
					func_568(Var3);
				}
				break;
			default:
				if (iVar0 < iVar2)
				{
					func_773(_databinding_read_data_int(Global_1940311->f_242.f_14[Global_1940311->f_242.f_1190]->f_26));
					func_568(Var3);
				}
				break;
		}
	}
	Global_1940311->f_242.f_1190++;
}

void func_262()
{
	if (Global_1940311->f_242.f_1187 <= 0)
	{
		func_70("", 1105014447);
		return;
	}
	func_774();
	iVar0 = Global_1296859->f_21;
	if (Global_1940311->f_242.f_1189 + 1 <= iVar0)
	{
		Global_1940311->f_242.f_1189 = iVar0;
		func_70(func_457(func_775()), 1105014447);
	}
}

void func_263()
{
	sVar0 = _0x2a4765812202e671();
	func_70(sVar0, 1105014447);
}

void func_264()
{
	sVar0 = func_437();
	func_70(sVar0, 1105014447);
}

void func_265()
{
	func_776(14);
	if (func_306() && !func_777(14))
	{
		Var0.f_27 = 10;
		Var118.f_38 = 7;
		Var118.f_91 = -1;
		iVar213 = 0;
		iVar214 = 0;
		_0xc08aff658b2e51da(&iVar215);
		if (iVar215 != 0)
		{
			func_778(&Var118);
			if (func_499(iVar215, &Var118, 0))
			{
				if (func_779(iVar213, &Var118))
				{
					iVar213++;
				}
			}
		}
		iVar216 = _0xc088ff658b2e51da();
		iVar214 = 0;
		while (iVar214 < iVar216)
		{
			func_778(&Var118);
			if (!func_780(iVar214, &Var0))
			{
			}
			else if (Var0 == 0)
			{
			}
			else if (Var0 == iVar215)
			{
			}
			else if (!func_499(Var0, &Var118, 0))
			{
			}
			else if (!func_779(iVar213, &Var118))
			{
			}
			else
			{
				iVar213++;
			}
			iVar214++;
		}
		if (_0xd6f6acf4392187fb(Global_1296859->f_15) && _0x0f99f6436528a089(Global_1296859->f_15))
		{
			if (!func_396(Global_1296859->f_15))
			{
				func_778(&Var118);
				if (func_220(Global_1296859->f_15, &Var118, 1))
				{
					if (func_779(iVar213, &Var118))
					{
						iVar213++;
					}
				}
			}
		}
		iVar250 = _0x53a94294fddcf98c(&uVar217, 1);
		iVar251 = 0;
		bVar252 = false;
		Var253.f_18 = 10;
		iVar352 = 0;
		while (iLocal_354 < 2)
		{
			iVar214 = 0;
			while (iVar214 < iVar250)
			{
				func_778(&Var118);
				bVar252 = false;
				if (!_0xd6f6acf4392187fb(&(uVar217[iVar214])))
				{
				}
				else if (!_0x0f99f6436528a089(&(uVar217[iVar214])))
				{
				}
				else if (&uVar217[iVar214] == Global_1296859->f_15)
				{
				}
				else if (func_396(&(uVar217[iVar214])))
				{
					if (func_781(&(uVar217[iVar214]), &Var253))
					{
						iVar251 = 0;
						while (iVar251 < 5)
						{
							if (func_780(iVar251, &Var0))
							{
								if (Var0 == Var253)
								{
									bVar252 = true;
								}
								else
								{
									iVar251++;
								}
								if (bVar252)
								{
								}
								else if (!func_220(&(uVar217[iVar214]), &Var118, 1))
								{
								}
								else
								{
									if (func_782(&Var118))
									{
										if (iLocal_354 != 0)
										{
										}
										else
										{
											Jump @537; //curOff = 524
											if (iLocal_354 != 1)
											{
											}
											else if (!func_779(iVar213, &Var118))
											{
											}
											else
											{
												iVar213++;
											}
										}
										iVar214++;
										iVar352 = iLocal_354 + 1;
										iVar353 = _databinding_get_array_count(Global_1940311->f_1433.f_157.f_1);
										if (iVar213 <= iLocal_355)
										{
											iVar354 = iLocal_355;
											while (iLocal_356 >= iVar213)
											{
												_0x6318fb3be37e11b3(Global_1940311->f_1433.f_157.f_1, iLocal_356);
												iVar354 = (iLocal_356 + -1);
											}
										}
										if (!func_777(14))
										{
											if (func_40(6))
											{
												iVar355 = func_783(14);
												if (_databinding_is_data_id_valid(Global_1940311->f_1433.f_157.f_1))
												{
													if (_databinding_get_array_count(Global_1940311->f_1433.f_157.f_1) >= 1 && iLocal_357 < _databinding_get_array_count(Global_1940311->f_1433.f_157.f_1))
													{
														uVar356 = _databinding_get_data_container_from_child_index(Global_1940311->f_1433.f_157.f_1, iLocal_357);
														if (_databinding_is_data_id_valid(uLocal_358))
														{
															Var357.f_38 = 7;
															Var357.f_91 = -1;
															if (func_96(&uVar356, &Var357))
															{
																func_97(&Var357);
															}
														}
													}
												}
												func_33(6, 0);
											}
											Var452 = { func_784(1) };
											if (func_222(&Var452))
											{
												if (func_647(&Var452))
												{
													if (func_434() == 298326212)
													{
														func_70(func_785(&Var452), 1105014447);
													}
													func_786(&(Global_1940311->f_1433.f_157.f_614.f_4), Var452);
													func_787(&(Global_1940311->f_1433.f_157.f_614.f_4), Var452);
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

void func_266()
{
	func_776(16);
}

void func_267()
{
	Var0.f_38 = 7;
	Var0.f_91 = -1;
	Var0 = { func_191(1) };
	if (!func_192(&Var0) && !func_788(&Var0))
	{
		_uistatemachine_request_transition(1433015236, 927041140);
	}
	if (func_319())
	{
		func_55(1);
		func_789();
		func_177();
	}
	if (func_196(&Var0) && func_192(&Var0))
	{
		func_790(&Var0);
	}
	if (!func_777(19))
	{
		Var95 = 104184;
		switch (func_51())
		{
			case 0:
				if (func_306())
				{
					func_792(&Var0);
				}
				Var95 = 104184;
				break;
			case 1:
				func_793(&(Global_1940311->f_1433.f_157.f_197.f_3), 0);
				Var95 = 104697;
				break;
		}
		Var95.f_1 = func_783(19);
		func_795(&Var95);
	}
}

void func_268()
{
	func_796();
	switch (func_797())
	{
		case 0:
			if (func_40(2))
			{
				return;
			}
			iVar0 = func_798();
			bVar1 = false;
			if ((_0xd6f6acf4392187fb(Global_1296859->f_15) && _0x0f99f6436528a089(Global_1296859->f_15)) && !_0x424b17a7dc5c90bc(player_id()))
			{
				bVar1 = true;
			}
			else if (func_799(&(Global_1296859->f_154[&Global_1296859]), 0))
			{
				vVar2 = { func_536(&Global_1296859) };
				if (func_184(&iVar5, &iVar6))
				{
					if (vVar2.y != iVar5 || vVar2.x != func_533(iVar6))
					{
						bVar1 = true;
					}
				}
			}
			else if (func_183())
			{
				bVar1 = true;
			}
			if (bVar1)
			{
				iVar0 = (iVar0 + func_800());
			}
			if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_10))
			{
				_databinding_write_data_bool(Global_1896738->f_13.f_50.f_10, true);
				if (iVar0 <= 0)
				{
					if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_7))
					{
						_databinding_write_data_string(Global_1896738->f_13.f_50.f_7, "SHOP_FREE");
					}
					if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_8))
					{
						_databinding_write_data_bool(Global_1896738->f_13.f_50.f_8, true);
					}
					if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_9))
					{
						_databinding_write_data_bool(Global_1896738->f_13.f_50.f_9, false);
					}
				}
				else
				{
					if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_6))
					{
						_databinding_write_data_int(Global_1896738->f_13.f_50.f_6, iVar0);
					}
					if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_9))
					{
						_databinding_write_data_bool(Global_1896738->f_13.f_50.f_9, true);
					}
					if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_8))
					{
						_databinding_write_data_bool(Global_1896738->f_13.f_50.f_8, false);
					}
				}
			}
			bVar7 = false;
			if (func_801() >= iVar0)
			{
				bVar7 = true;
			}
			if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_11))
			{
				_databinding_write_data_bool(Global_1896738->f_13.f_50.f_11, bVar7);
			}
			iVar9 = 1105014447;
			bVar10 = func_802(func_98(), iVar0);
			bVar11 = true;
			if (func_98())
			{
				if (func_99())
				{
					if (!_0x595f028698072dd9(-1) && is_orbis_version())
					{
						sVar8 = "NM_GC_FOOTER_RESTRICT_ACCOUNT_P_NAME";
						bVar11 = false;
					}
					else if (!_ugc_has_privilege())
					{
						sVar8 = "NM_GC_UGC_RESTRICT";
						bVar11 = false;
					}
					else
					{
						sVar8 = "NM_GC_FOOTER_NAME_CHANGE";
						bVar11 = true;
					}
				}
				else
				{
					iVar9 = 859817522;
					sVar8 = "NM_GC_FOOTER_KEYBOARD_SERVICES_DOWN";
					bVar11 = false;
				}
			}
			else
			{
				sVar8 = "NM_GC_FOOTER_NAME_CHANGE_TEMP";
				bVar11 = false;
			}
			bVar12 = true;
			if (!func_803(1, 0))
			{
				bVar12 = false;
				if (bVar1)
				{
					bVar10 = false;
				}
			}
			switch (func_434())
			{
				case -620534422:
					sVar8 = func_804(&iVar9);
					func_70(_create_var_string(2, sVar8), iVar9);
					break;
				case 1930452436:
					func_70(_create_var_string(2, sVar8), iVar9);
					break;
			}
			if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_3))
			{
				_databinding_write_data_bool(Global_1896738->f_13.f_50.f_3, bVar11);
			}
			if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_5))
			{
				_databinding_write_data_bool(Global_1896738->f_13.f_50.f_5, bVar12);
			}
			if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_10))
			{
				_databinding_write_data_bool(Global_1896738->f_13.f_50.f_1, bVar10);
			}
			break;
		case 3:
			func_33(2, 1);
			func_149(927041140);
			break;
		case 2:
			func_33(2, 1);
			Var13.f_38 = 7;
			Var13.f_91 = -1;
			if (func_621(&Var13, 1))
			{
				func_148(&Var13);
				func_97(&Var13);
				func_140(17);
				func_149(394524610);
			}
			else
			{
				func_149(927041140);
			}
			break;
	}
}

void func_269()
{
	if (func_805())
	{
		iVar0 = func_806();
		switch (func_807())
		{
			case 3:
				switch (iVar0)
				{
					case 2:
						func_352(17, 0);
						func_808(3);
						func_149(-585660575);
						break;
					case 3:
						break;
				}
				break;
			case 5:
			case 6:
				switch (iVar0)
				{
					case 2:
						func_352(17, 0);
						func_808(3);
						func_149(-585660575);
						break;
					case 3:
						break;
				}
				break;
			case 7:
				switch (iVar0)
				{
					case 2:
						func_176(0, 1);
						break;
					case 3:
						break;
				}
				break;
			case 4:
				switch (iVar0)
				{
					case 2:
						func_176(0, 1);
						break;
					case 3:
						break;
				}
				break;
		}
		return;
	}
	if (!func_777(17))
	{
		func_776(17);
	}
	Var1 = { func_191(1) };
	if (!func_222(&Var1))
	{
		return;
	}
	func_786(&(Global_1940311->f_1433.f_157.f_206.f_7), Var1);
	func_787(&(Global_1940311->f_1433.f_157.f_206.f_7), Var1);
	if (!func_306() || func_777(17))
	{
		return;
	}
	iVar96 = func_809();
	iVar97 = func_51();
	if ((iVar97 == iVar96 && iVar97 > -1) && iVar97 < func_810())
	{
		if (!are_strings_equal(func_811(&Var1), _databinding_read_data_string(Global_1940311->f_1433.f_157.f_206.f_4.f_1)))
		{
			func_812(&(Global_1940311->f_1433.f_157.f_206.f_4), func_811(&Var1), Global_1940311->f_1433.f_9184.f_4 > 1, 1);
		}
	}
	func_813(&Var1);
}

void func_270()
{
	func_308(23);
}

void func_271()
{
	func_308(22);
}

void func_272()
{
	func_814();
	if (func_777(18))
	{
		return;
	}
	if (func_805())
	{
		iVar0 = func_806();
		switch (func_807())
		{
			case 4:
				switch (iVar0)
				{
					case 2:
						func_176(0, 1);
						break;
					case 3:
						break;
				}
				break;
			case 8:
				switch (iVar0)
				{
					case 2:
						func_176(0, 1);
						break;
					case 3:
						break;
				}
				break;
		}
		return;
	}
	func_815();
	Var1 = { func_191(1) };
	if (!func_222(&Var1))
	{
		func_176(0, 0);
		return;
	}
	if (func_816())
	{
		func_817();
		return;
	}
	if (!func_306())
	{
		return;
	}
	func_818(&Var1);
}

void func_273()
{
	func_308(6);
}

void func_274()
{
	if (func_49() == -1 || func_49() == 53)
	{
		func_819(15);
		vVar0.x = 111136;
		vVar0.f_1 = func_783(53);
		vVar0.f_2 = 15;
		func_795(&vVar0);
	}
}

void func_275()
{
	Var0 = { func_202() };
	if (!func_34(Var0))
	{
		return;
	}
	func_763(Var0, func_215());
	iVar7 = 255;
	if (network_is_gamer_in_my_session(&Var0))
	{
		iVar7 = network_get_player_from_gamer_handle(&Var0);
	}
	if (_network_is_player_index_valid(iVar7))
	{
		iVar8 = _0x901e0dc25080c8b9(iVar7);
	}
	bVar9 = false;
	if (func_434() == -1108319209)
	{
		if (_0xd6f6acf4392187fb(iVar8) && _0x0f99f6436528a089(iVar8))
		{
			Var10.f_38 = 7;
			Var10.f_91 = -1;
			if (func_220(iVar8, &Var10, 1))
			{
				func_786(&(Global_1940311->f_1433.f_157.f_614.f_4), Var10);
				if (func_787(&(Global_1940311->f_1433.f_157.f_614.f_4), Var10))
				{
					bVar9 = true;
				}
			}
		}
	}
	func_821(&(Global_1940311->f_1433.f_157.f_614.f_4), bVar9);
	if (func_822() == 0)
	{
		if (Global_1940311->f_1433.f_8379)
		{
			func_824(func_823(&(Global_1940311->f_1433.f_8382), &(Global_1940311->f_1433.f_8), &(Global_1940311->f_1433.f_8.f_7)));
			func_825(get_cloud_time_as_int());
			func_826(1);
			func_55(1);
		}
	}
	if (func_822() == 1)
	{
		if (Global_1901947->f_762 != 0)
		{
			if (absi((get_cloud_time_as_int() - func_827())) >= Global_1901947->f_762)
			{
				func_826(2);
			}
		}
	}
	if (func_822() == 2)
	{
		if (func_828(Var0))
		{
			func_826(0);
		}
		else
		{
			func_825(get_cloud_time_as_int());
			func_826(1);
		}
	}
	bVar105 = func_829() == true;
	if (!func_306())
	{
		return;
	}
	if (_network_is_player_index_valid(iVar7))
	{
		func_577(&uVar106, 1);
	}
	if (network_are_handles_the_same(&(Global_1296859->f_1), &Var0))
	{
		func_577(&uVar106, 16);
	}
	if (((func_830() || func_831()) || func_833(func_832(0)) == 6) || func_576(Global_1138962->f_137.f_1, 2))
	{
		func_577(&uVar106, 64);
	}
	if (_0xd6f6acf4392187fb(Global_1296859->f_15))
	{
		if (_0x0f99f6436528a089(Global_1296859->f_15))
		{
			func_577(&uVar106, 2);
			if (_0x4be6c13a45cca8ec(Global_1296859->f_15) == player_id())
			{
				func_577(&uVar106, 4);
			}
			if (func_576(uVar106, 1))
			{
				if (_0x81fb74c83c2ed69f(iVar7))
				{
					func_577(&uVar106, 32);
				}
			}
		}
	}
	if (!func_576(uVar106, 32))
	{
		if ((Global_1194053->f_492 != -1 && network_are_handles_the_same(&(Global_1194053->f_503[Global_1194053->f_492]->f_19), &(Global_1296859->f_1))) && func_834(&Var0))
		{
			func_577(&uVar106, 32);
		}
	}
	if (network_is_gamer_in_my_session(&Var0))
	{
		func_577(&uVar106, 8);
	}
	if (((!func_576(uVar106, 16) && func_576(uVar106, 32)) && func_576(uVar106, 4)) && !func_576(uVar106, 64))
	{
		func_577(&uVar106, 128);
	}
	if ((!func_576(uVar106, 16) && func_576(uVar106, 32)) && func_576(uVar106, 4))
	{
		func_577(&uVar106, 512);
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_8.f_2, ((func_576(uVar106, 4) && !func_576(uVar106, 16)) && func_576(uVar106, 32)));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_8.f_1, (((func_576(uVar106, 4) && !func_576(uVar106, 16)) && func_576(uVar106, 32)) && !((func_576(uVar106, 64) || func_835()) || func_836())));
	bVar107 = _0x9c725d149622bfde(7);
	bVar108 = network_is_friend(&Var0);
	bVar109 = true;
	if (bVar108 && bVar107)
	{
		bVar109 = _0xe348d1404bd80146(&Var0);
	}
	else if (bVar108)
	{
		bVar109 = _0x665161d250850a9f(&Var0);
	}
	StringCopy(&cVar110, "", 128);
	iVar126 = func_837(&Var0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_11.f_1, (iVar126 == 5 && bVar109));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_11.f_2, ((!func_576(uVar106, 16) && !func_576(uVar106, 32)) && func_576(uVar106, 4)));
	if (func_434() == 442978665)
	{
		func_838(iVar126, &cVar110);
		func_70(&cVar110, 1105014447);
	}
	iVar127 = func_839(&Var0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_14.f_2, !func_576(uVar106, 16));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_14.f_1, (iVar127 == 0 && bVar109));
	if (func_434() == -999900281)
	{
		StringCopy(&cVar110, func_464(), 128);
		func_70(&cVar110, 1105014447);
	}
	bVar128 = func_239();
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_17.f_2, !func_576(uVar106, 16));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_17.f_1, (((!func_576(uVar106, 8) && bVar105) && bVar128) && !func_840()));
	if (func_434() == -281834246)
	{
		StringCopy(&cVar110, func_465(), 128);
		func_70(&cVar110, 1105014447);
	}
	if (_databinding_read_data_bool(Global_1940311->f_1433.f_4189.f_2))
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_20.f_1, func_576(uVar106, 1));
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_20.f_1, false);
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_23.f_2, true);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_23.f_1, func_576(uVar106, 1));
	if (_0xd6f6acf4392187fb(iVar8) && _0x0f99f6436528a089(iVar8))
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_26.f_1, (func_576(uVar106, 1) && !func_576(uVar106, 64)));
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_26.f_1, false);
	}
	if (func_841())
	{
		_0x1f51f367b710a832();
	}
	bVar129 = false;
	if (_is_stadia_version())
	{
		if (network_is_friend(&Var0) && !func_576(uVar106, 16))
		{
			bVar129 = true;
		}
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_44.f_2, bVar129);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_44.f_1, true);
	bVar130 = false;
	if (!network_is_friend(&Var0) && !func_576(uVar106, 16))
	{
		bVar130 = true;
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_29.f_2, bVar130);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_29.f_1, _0x99abe9bf9dada162(&Var0));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_32.f_2, !func_576(uVar106, 16));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_32.f_1, func_842(iVar7));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_38.f_2, !func_576(uVar106, 16));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_38.f_1, true);
	if (is_durango_version())
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_35.f_2, !func_576(uVar106, 16));
		_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_35.f_1, true);
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_35.f_2, false);
	}
	bVar131 = _0x9c725d149622bfde(0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_41.f_2, bVar131);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_41.f_1, true);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_47.f_2, true);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_47.f_1, false);
	bVar132 = _0x356135b9b10a2a82(&Var0);
	if (bVar132)
	{
		_databinding_write_data_string(Global_1940311->f_1433.f_1407.f_47.f_3, _create_var_string(2, "IB_VOICE_CHAT_CHANNEL_PRIVATE"));
	}
	else
	{
		_databinding_write_data_string(Global_1940311->f_1433.f_1407.f_47.f_3, _create_var_string(2, "IB_VOICE_CHAT_CHANNEL_PUBLIC"));
	}
	if ((func_576(uVar106, 1) && func_576(uVar106, 8)) && !func_576(uVar106, 16))
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_52, true);
		_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_53, true);
		if (_0x0ded260a1958a82e(iVar7))
		{
			_databinding_write_data_hash_string(Global_1940311->f_1433.f_1407.f_51, 979712174);
		}
		else
		{
			_databinding_write_data_hash_string(Global_1940311->f_1433.f_1407.f_51, 830040270);
		}
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_52, false);
		_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_53, false);
	}
}

void func_276()
{
	if (Global_1940311->f_1433.f_6279.f_4)
	{
		iVar0 = Global_1940311->f_1433.f_6279;
		if (iVar0 > -1 && iVar0 < 4)
		{
			if (Global_1940311->f_1433.f_6279.f_5)
			{
				func_843(&(Global_1940311->f_1433.f_6279), Global_17411.f_55.f_2481[iVar0]);
			}
			else
			{
				func_844(&(Global_1940311->f_1433.f_6279), Global_17411.f_55.f_2481[iVar0]);
			}
			Global_1940311->f_1433.f_6279.f_4 = 0;
		}
	}
}

void func_277()
{
	switch (Global_1940311->f_1433.f_1316.f_9)
	{
		case 0:
			if (func_845())
			{
				switch (func_846())
				{
					case 2074623703:
						if (!func_847(&(Global_1940311->f_1433.f_1316.f_1), Global_1940311->f_1433.f_1316))
						{
						}
						Global_1940311->f_1433.f_1316.f_8 = Global_1940311->f_1433.f_8378;
						Global_1940311->f_1433.f_1316.f_9 = 1;
						break;
					case 1400745903:
						func_15();
						break;
				}
			}
			break;
		case 1:
			if (_0x07954320d77f6a3d(Global_1940311->f_1433.f_1316.f_8) == 5)
			{
				return;
			}
			Global_1940311->f_1433.f_1316.f_9 = 2;
			break;
		case 2:
			Global_1940311->f_1433.f_1316.f_8 = 0;
			func_848();
			Global_1940311->f_1433.f_1316.f_9 = 3;
			break;
		case 3:
			if (func_845())
			{
				switch (func_846())
				{
					case 2074623703:
						_0x00a15b94cba4f76f(Global_1940311->f_1433.f_1316.f_8);
						Global_1940311->f_1433.f_1316.f_8 = 0;
						func_15();
						Global_1940311->f_1433.f_1316.f_9 = 0;
						func_145();
						break;
				}
			}
			break;
	}
}

void func_278()
{
	if (func_627() || func_766())
	{
		func_849(0);
	}
	else
	{
		iVar0 = get_player_index();
		iVar1 = _0x901e0dc25080c8b9(iVar0);
		if ((iVar1 != 0 && _0x0f99f6436528a089(iVar1)) && !_0x424b17a7dc5c90bc(iVar0))
		{
			func_849(0);
		}
		else
		{
			func_849(1);
		}
	}
}

void func_279()
{
}

void func_280()
{
	func_100();
	func_101();
	bVar0 = func_134();
	if (bVar0)
	{
		func_136(1);
	}
	else
	{
		func_136(0);
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_422.f_18, bVar0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_422.f_21, bVar0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_422.f_22, bVar0);
	bVar1 = func_850();
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_566, bVar1);
	if (func_434() == -409501472)
	{
		if (func_830())
		{
			func_70(_create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP"), 1105014447);
		}
		else
		{
			func_70(func_851(bVar1), 1105014447);
		}
	}
}

void func_281()
{
	func_852();
	func_103();
	func_853();
}

void func_282()
{
	bVar0 = func_134();
	if (bVar0)
	{
		func_136(2);
	}
	else
	{
		func_136(0);
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_422.f_18, bVar0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_422.f_21, bVar0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_422.f_22, bVar0);
}

void func_283()
{
	func_852();
	func_105(3);
	func_853();
}

void func_284()
{
	func_852();
	func_105(0);
	func_853();
}

void func_285()
{
	func_852();
	func_105(1);
	func_853();
}

void func_286()
{
	func_852();
	func_105(2);
	func_853();
}

void func_287()
{
	func_102();
	bVar0 = func_137();
	if (bVar0)
	{
		func_139(1);
	}
	else
	{
		func_139(0);
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_346.f_18, bVar0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_346.f_22, bVar0);
	bVar1 = func_854();
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_437, bVar1);
	if (func_434() == 496174085)
	{
		if (func_830())
		{
			func_70(_create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP"), 1105014447);
		}
		else
		{
			func_70(func_855(bVar1), 1105014447);
		}
	}
}

void func_288()
{
	func_856();
	func_106();
	func_857();
}

void func_289()
{
	bVar0 = func_137();
	if (bVar0)
	{
		func_139(2);
	}
	else
	{
		func_139(0);
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_346.f_18, bVar0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_346.f_22, bVar0);
}

void func_290()
{
	func_856();
	func_108(3);
	func_857();
}

void func_291()
{
	func_856();
	func_108(0);
	func_857();
}

void func_292()
{
	func_856();
	func_108(1);
	func_857();
}

void func_293()
{
	func_856();
	func_108(2);
	func_857();
}

void func_294()
{
	bVar0 = false;
	bVar1 = false;
	iVar2 = player_id();
	bVar3 = (func_239() && func_799(iVar2, 0));
	bVar4 = _0x424b17a7dc5c90bc(iVar2);
	bVar0 = (bVar3 && bVar4);
	bVar1 = bVar0;
	_databinding_write_data_bool(Global_1940311->f_1433.f_2643.f_2, (((bVar4 && !func_576(Global_1137047->f_8, 1)) && (Global_1132288->f_2019 < 6 || Global_1132288->f_2019 > 12)) && !func_858()));
	if (func_239())
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_2643.f_3, true);
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_2643.f_3, false);
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_2643.f_5, bVar0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2643.f_4, bVar1);
	bVar5 = ((bVar3 && bVar4) && _unlock_is_unlocked(-212568391));
	iVar6 = func_859(_0x901e0dc25080c8b9(iVar2));
	if (func_860(4) && func_78(iVar6))
	{
		func_430(4);
	}
	if (func_860(8) && !func_78(iVar6))
	{
		func_430(8);
	}
	if ((func_78(iVar6) && !func_860(8)) || func_860(4))
	{
		_databinding_write_data_int(Global_1940311->f_1433.f_2643.f_6.f_24, 0);
		if (!func_79(iVar6) || func_860(8))
		{
			bVar5 = false;
		}
	}
	else if ((!func_78(iVar6) && !func_860(4)) || func_860(8))
	{
		_databinding_write_data_int(Global_1940311->f_1433.f_2643.f_6.f_24, 1);
		if (!func_81(iVar6) || func_860(4))
		{
			bVar5 = false;
		}
	}
	if (func_434() == 921074654)
	{
		func_70(func_470(), 1105014447);
	}
	if (func_434() == 2087912236)
	{
		func_70(func_861(), 1105014447);
	}
	func_862(&(Global_1940311->f_1433.f_2643.f_6), bVar5);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2643.f_1, func_799(&(Global_1296859->f_154[&Global_1296859]), 0));
}

void func_295()
{
	if (func_319())
	{
		func_863();
		func_55(1);
	}
	if (!func_306())
	{
		return;
	}
	Var0.f_1 = 13;
	iVar15 = func_112();
	iVar17 = 0;
	iVar19 = func_864();
	switch (iVar19)
	{
		case 0:
			if (!func_865(&Var0))
			{
				func_863();
				return;
			}
			iVar18 = 0;
			while (iVar18 < Var0)
			{
				iVar16 = &Var0.f_1[iVar18];
				if (iVar17 >= _databinding_get_array_count(Global_1940311->f_1433.f_2643.f_42))
				{
					func_866(iVar17, iVar16);
				}
				func_868(iVar17, iVar16, iVar15, func_164(iVar15, iVar16), func_867(iVar15, iVar16));
				iVar17++;
				iVar18++;
			}
			break;
		case 1:
			if (!func_869(&Var0))
			{
				if (iVar17 >= _databinding_get_array_count(Global_1940311->f_1433.f_2643.f_42))
				{
					func_863();
				}
				return;
			}
			iVar18 = 0;
			while (iVar18 < Var0)
			{
				iVar16 = &Var0.f_1[iVar18];
				if (iVar17 >= _databinding_get_array_count(Global_1940311->f_1433.f_2643.f_42))
				{
					func_866(iVar17, iVar16);
				}
				func_868(iVar17, iVar16, iVar15, func_164(iVar15, iVar16), func_867(iVar15, iVar16));
				iVar17++;
				iVar18++;
			}
			break;
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			switch (iVar19)
			{
				case 2:
					iVar20 = 0;
					break;
				case 3:
					iVar20 = 1;
					break;
				case 6:
					iVar20 = 4;
					break;
				case 5:
					iVar20 = 3;
					break;
				case 4:
					iVar20 = 2;
					break;
			}
			if (!func_870(iVar20, Global_1296859->f_17, &Var0))
			{
				if (iVar17 >= _databinding_get_array_count(Global_1940311->f_1433.f_2643.f_42))
				{
					func_863();
				}
				return;
			}
			iVar18 = 0;
			while (iVar18 < Var0)
			{
				iVar16 = &Var0.f_1[iVar18];
				if (iVar17 >= _databinding_get_array_count(Global_1940311->f_1433.f_2643.f_42))
				{
					func_866(iVar17, iVar16);
				}
				func_868(iVar17, iVar16, iVar15, func_164(iVar15, iVar16), func_867(iVar15, iVar16));
				iVar17++;
				iVar18++;
			}
			break;
	}
	iVar21 = iVar17;
	while (iVar21 <= (_databinding_get_array_count(Global_1940311->f_1433.f_2643.f_42) - 1))
	{
		_0x6318fb3be37e11b3(Global_1940311->f_1433.f_2643.f_42, iVar21);
		iVar21++;
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_2643.f_44, func_801() >= _databinding_read_data_int(Global_1940311->f_1433.f_2643.f_43));
}

void func_296()
{
	if (!func_306())
	{
		return;
	}
	func_871((*Global_1134390)[player_id()]->f_38.f_1);
}

void func_297()
{
	bVar0 = false;
	if (func_165())
	{
		bVar0 = func_98();
	}
	else
	{
		bVar0 = func_396(_0x901e0dc25080c8b9(player_id()));
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_2643.f_36, func_872(-1896177107, bVar0));
	_databinding_write_data_bool(Global_1940311->f_1433.f_2643.f_37, func_872(2042309940, bVar0));
}

void func_298()
{
	Var3 = -1;
	Var3.f_1 = 1;
	Var3.f_1.f_1 = 1;
	Var3.f_1.f_2 = 1105014447;
	Var3.f_1.f_4 = -1;
	Var3.f_1.f_5 = -1;
	Var3.f_1.f_6 = -1;
	Var3.f_1.f_10 = -1;
	Var3.f_1.f_11 = -1;
	Var3.f_1.f_12 = -1;
	Var3.f_1.f_18 = 1105014447;
	Var3.f_1.f_19 = 1105014447;
	Var3.f_1.f_22 = 100;
	Var3.f_1.f_23 = 50;
	Var28 = -1;
	Var28.f_1 = 1;
	Var28.f_1.f_1 = 1;
	Var28.f_1.f_2 = 1105014447;
	Var28.f_1.f_4 = -1;
	Var28.f_1.f_5 = -1;
	Var28.f_1.f_6 = -1;
	Var28.f_1.f_10 = -1;
	Var28.f_1.f_11 = -1;
	Var28.f_1.f_12 = -1;
	Var28.f_1.f_18 = 1105014447;
	Var28.f_1.f_19 = 1105014447;
	Var28.f_1.f_22 = 100;
	Var28.f_1.f_23 = 50;
	Var3 = { Var28 };
	if (&Global_1940311->f_1433.f_3320.f_4[iVar0] == Global_1940311->f_1433.f_3320.f_3)
	{
	}
	if (iVar1 >= Global_1940311->f_1433.f_3320.f_2)
	{
		_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1940311->f_1433.f_3320.f_1, iVar0, "pm_dynamic_large_image_and_stacked_text_with_fill", &(Global_1940311->f_1433.f_3320.f_4[iVar0]));
	}
	Var3.f_1.f_23 = floor((IntToFloat(Var3.f_1.f_22) * fVar53));
	Var3.f_1.f_18 = 859817522;
	Var3.f_1.f_5 = -1231195292;
	Var3.f_1.f_4 = 1433015236;
	Var3.f_1.f_20 = 1442026401;
	Var3.f_1.f_21 = -1102349958;
	func_873(Global_1940311->f_1433.f_3320.f_4[iVar0], Var3);
	iVar1++;
	iVar2 = iVar1;
	while (iVar2 <= (Global_1940311->f_1433.f_3320.f_2 - 1))
	{
		_0x6318fb3be37e11b3(Global_1940311->f_1433.f_3320.f_1, iVar2);
		iVar2++;
	}
	Global_1940311->f_1433.f_3320.f_2 = iVar1;
}

void func_299()
{
	func_874();
	func_875();
	bVar1 = false;
	if (Global_1108365->f_935.f_27 != -1 && (&Global_1108365->f_935.f_5[Global_1108365->f_935.f_27] - Global_1296859->f_21) < 180)
	{
		func_70(func_488(Global_1108365->f_935.f_27), 1105014447);
		Global_1108365->f_935.f_18 = 1;
		Global_1108365->f_935.f_29 = Global_1108365->f_935.f_27;
	}
	else if ((Global_1108365->f_935.f_18 && Global_1108365->f_935.f_29 == Global_1108365->f_935.f_27) && Global_1108365->f_935.f_29 != -1)
	{
		func_70(func_488(Global_1108365->f_935.f_27), 1105014447);
		Global_1108365->f_935.f_18 = 0;
	}
	else
	{
		Global_1108365->f_935.f_29 = -1;
		Global_1108365->f_935.f_18 = 0;
	}
	iVar0 = 0;
	while (iVar0 < 11)
	{
		iVar2 = iVar0;
		bVar1 = func_876(iVar2);
		_databinding_write_data_bool(Global_1940311->f_1433.f_157.f_357.f_2[iVar0]->f_1, bVar1);
		iVar0++;
	}
}

void func_300()
{
	if (!func_876(4))
	{
		func_149(927041140);
	}
	func_875();
	if (!_0xd6f6acf4392187fb(Global_1296859->f_15))
	{
		return;
	}
	if (!_0x0f99f6436528a089(Global_1296859->f_15))
	{
		return;
	}
	if (!_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
	{
		return;
	}
	if (!_databinding_is_data_id_valid(Global_1896738->f_393.f_1))
	{
		return;
	}
	if (func_306())
	{
		iVar50 = _0xd1bf325c8252a982(Global_1296859->f_15, &Var0);
		iVar56 = 0;
		iVar56 = 0;
		while (iVar56 < 7)
		{
			if (!func_877(iVar56, &Var53))
			{
			}
			else if (!_0x9be7dcb22d32ccbe(Global_1296859->f_15, Var53.f_1))
			{
				func_878(iVar56);
			}
			iVar56++;
		}
		iVar51 = 0;
		while (iVar51 < iVar50)
		{
			if (!func_34(*Var0[iVar51]))
			{
			}
			else
			{
				iVar52 = network_get_player_from_gamer_handle(Var0[iVar51]);
				if (!_network_is_player_index_valid(iVar52))
				{
				}
				else if (!func_879(iVar52))
				{
					iVar57 = func_880();
					if (!func_881(iVar52, iVar57))
					{
					}
				}
			}
			iVar51++;
		}
		func_789();
		iVar56 = 0;
		while (iVar56 < 7)
		{
			if (!func_877(iVar56, &Var53))
			{
			}
			else
			{
				network_handle_from_player(Var53.f_1, &uVar58);
				if (!func_882(&uVar58, get_player_name(Var53.f_1), 0, 4))
				{
				}
			}
			iVar56++;
		}
	}
	vVar65.x = 120511;
	vVar65.f_2 = 4;
	vVar65.f_1 = func_783(21);
	func_795(&vVar65);
	if (func_306())
	{
		if (_databinding_is_data_id_valid(Global_1896738->f_197.f_1))
		{
			_databinding_write_data_bool(Global_1896738->f_197.f_1, true);
		}
		if (_databinding_is_data_id_valid(Global_1896738->f_197))
		{
			func_884(func_84(), &vVar68);
			iVar74 = 0;
			while (iVar74 < 2)
			{
				iVar71[iVar74] = func_885(iVar74);
				iVar74++;
			}
			_databinding_write_data_bool(Global_1896738->f_197, &iVar71[vVar68.z] > 1);
		}
	}
}

void func_301()
{
	switch (func_434())
	{
		case -1594107850:
			_0xc9caeaeec1256e54(-1744263063);
			break;
	}
	func_886();
	func_887();
	func_888();
	func_889();
	func_890();
	func_891();
	func_892();
}

void func_302()
{
	iVar0 = func_143();
	if (func_893(iVar0))
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_8111.f_7, true);
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_8111.f_7, false);
	}
	if (func_894(iVar0))
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_8111.f_9, true);
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_8111.f_9, false);
	}
	func_895();
}

void func_303()
{
	func_895();
}

void func_304()
{
	bVar0 = (func_146(8192) && !func_146(16384));
	_databinding_write_data_bool(Global_1940311->f_1433.f_8111.f_10, bVar0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_8111.f_11, true);
	func_767(1, func_444() == 0);
	func_767(0, func_442() == 0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_79, func_896());
	func_897();
	func_895();
}

void func_305(bool bParam0)
{
	if (!bParam0)
	{
		if (func_319())
		{
			func_55(1);
		}
		if (!func_306())
		{
			return;
		}
	}
	func_898();
	func_545(0);
	func_899();
}

bool func_306()
{
	return func_900(1);
}

void func_307()
{
	func_901(-165442446, 1);
	func_901(-1536030095, func_453() == 0);
}

void func_308(int iParam0)
{
	iVar3 = func_181();
	iVar4 = func_902();
	switch (iParam0)
	{
		case 6:
		case default:
			iVar5 = 0;
			iVar6 = 1;
			iVar7 = 2;
			iVar8 = 3;
			vVar0.x = 122255;
			break;
		case 22:
			iVar6 = 12;
			iVar7 = 13;
			iVar8 = 14;
			vVar0.x = 122567;
			break;
		case 23:
			iVar5 = 7;
			iVar6 = 8;
			iVar7 = 9;
			iVar8 = 10;
			vVar0.x = 122813;
			break;
		case 57:
			iVar5 = 11;
			vVar0.x = 123147;
			break;
	}
	if (func_319())
	{
		func_55(1);
		if (iVar4 == 2 && iVar3 != 2)
		{
			func_907();
		}
		switch (iVar3)
		{
			case 0:
				func_908();
				break;
			case 1:
			case 3:
				func_908();
				func_789();
				func_177();
				break;
		}
		if (func_40(4))
		{
			func_33(4, 0);
		}
		else
		{
			func_909(0);
			func_339(0);
		}
	}
	func_910(iVar7, iVar3 == 2);
	if (func_49() == -1 || func_49() == iParam0)
	{
		switch (iVar3)
		{
			case 0:
				if (func_306())
				{
					func_911(iVar5);
				}
				break;
			case 1:
				func_912(iVar6);
				break;
			case 3:
				if (func_306())
				{
					func_913(iVar8);
				}
				break;
		}
		iVar11 = func_914();
		Var237.f_27 = -1;
		Var237.f_28 = -1;
		iVar321 = func_636();
		if (func_637(iLocal_324) && func_638(iLocal_324))
		{
			if (!_0xbea7d3cb47e1479c())
			{
				iVar9 = 0;
				while (iVar9 < iVar11)
				{
					if (!func_915(iVar9, &Var237))
					{
					}
					else if (iVar10 < 32)
					{
						*Var12[iVar10] = { Var237.f_1 };
						iVar10++;
					}
					iVar9++;
				}
				func_916(iLocal_324, &Var12, iVar10);
			}
		}
		vVar0.f_1 = func_783(iParam0);
		switch (iVar3)
		{
			case 0:
				vVar0.f_2 = iVar5;
				break;
			case 1:
				vVar0.f_2 = iVar6;
				break;
			case 3:
				vVar0.f_2 = iVar8;
				break;
			case 2:
				vVar0.f_2 = iVar7;
				break;
		}
		func_795(&vVar0);
	}
}

void func_309()
{
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_92, func_455() == 0);
}

void func_310()
{
	if (func_917())
	{
		if (func_918() == 0 || absi((get_cloud_time_as_int() - func_919())) > func_918())
		{
			func_128();
		}
	}
	bVar0 = false;
	iVar1 = &Global_1940311->f_1433.f_9184.f_5[Global_1940311->f_1433.f_9184];
	if (iVar1 == -1)
	{
		bVar0 = true;
	}
	else
	{
		iVar2 = func_332(_0x96fd694fe5be55dc(1433015236));
		bVar0 = iVar2 == iVar1;
	}
	if (Global_1940311->f_1433.f_9184.f_241)
	{
		Global_1940311->f_1433.f_9184.f_241 = 0;
	}
	if (Global_1940311->f_1433.f_9184.f_240 && !Global_1940311->f_1433.f_9184.f_239)
	{
		func_350(0);
		func_920("", 0);
	}
	Global_1940311->f_1433.f_9184.f_240 = 0;
	if (Global_1940311->f_1433.f_9184.f_236)
	{
		Global_1940311->f_1433.f_9184.f_236 = 0;
	}
	if (Global_1940311->f_1433.f_9184.f_4 <= 1)
	{
		return;
	}
	if (!bVar0)
	{
		return;
	}
	if (func_917())
	{
		return;
	}
	if (!func_921())
	{
		iVar3 = 0;
		if (is_control_just_pressed(2, 285921746))
		{
			func_922("Bumper_Right", "HUD_PLAYER_MENU", 1);
			iVar3++;
		}
		else if (is_control_just_pressed(2, -875187602))
		{
			func_922("Bumper_Left", "HUD_PLAYER_MENU", 1);
			iVar3 = (iVar3 - 1);
		}
		if (iVar3 == 0)
		{
			return;
		}
		Global_1940311->f_1433.f_9184.f_244 = (Global_1940311->f_1433.f_9184 + iVar3);
		if (Global_1940311->f_1433.f_9184.f_244 < 0)
		{
			Global_1940311->f_1433.f_9184.f_244 = (Global_1940311->f_1433.f_9184.f_4 - 1);
		}
		else if (Global_1940311->f_1433.f_9184.f_244 > (Global_1940311->f_1433.f_9184.f_4 - 1))
		{
			Global_1940311->f_1433.f_9184.f_244 = 0;
		}
		if (func_923(Global_1940311->f_1433.f_9184.f_244))
		{
			func_649(7f, 0);
			func_376(1);
			return;
		}
	}
	else
	{
		switch (func_924())
		{
			case 0:
				if (!func_925())
				{
					func_926();
				}
				break;
			case 2:
				Global_1940311->f_1433.f_9184.f_244 = 0;
				func_376(0);
				return;
		}
		if (func_925())
		{
			func_376(0);
			func_21();
		}
		else
		{
			return;
		}
	}
	if (!func_927(Global_1940311->f_1433.f_9184.f_244, 1))
	{
	}
}

bool func_311()
{
	return Global_1940311->f_1433.f_9184.f_238;
}

void func_312()
{
	switch (Global_1940311->f_1433.f_9184.f_5[Global_1940311->f_1433.f_9184]->f_2)
	{
		case -303450633:
			func_140(14);
			break;
		case 394524610:
			if (func_45() == 14)
			{
				func_147();
			}
			func_140(17);
			break;
	}
}

bool func_313()
{
	return Global_1940311->f_1433.f_9184.f_239;
}

void func_314()
{
	bVar0 = false;
	switch (Global_1940311->f_1433.f_9184.f_5[Global_1940311->f_1433.f_9184]->f_2)
	{
		case -303450633:
			func_812(&(Global_1940311->f_1433.f_157.f_194), func_641(&(Global_1940311->f_1433.f_9184.f_5[Global_1940311->f_1433.f_9184]->f_3)), Global_1940311->f_1433.f_9184.f_4 > 1, Global_1940311->f_1433.f_9184.f_5[Global_1940311->f_1433.f_9184]->f_19);
			bVar0 = true;
			break;
		case 394524610:
			func_812(&(Global_1940311->f_1433.f_157.f_206.f_4), func_641(&(Global_1940311->f_1433.f_9184.f_5[Global_1940311->f_1433.f_9184]->f_3)), Global_1940311->f_1433.f_9184.f_4 > 1, Global_1940311->f_1433.f_9184.f_5[Global_1940311->f_1433.f_9184]->f_19);
			bVar0 = true;
			break;
	}
	if (!bVar0)
	{
		func_920(func_641(&(Global_1940311->f_1433.f_9184.f_5[Global_1940311->f_1433.f_9184]->f_3)), Global_1940311->f_1433.f_9184.f_5[Global_1940311->f_1433.f_9184]->f_19);
	}
}

void func_315()
{
	if (func_928() == 0)
	{
		Global_1896738->f_3085.f_1 = 0;
		if (!network_clan_service_is_valid())
		{
			return;
		}
		if (!network_clan_player_is_active(&(Global_1296859->f_1)))
		{
			return;
		}
		if (!_0x58d378af2c8765b7(&iVar0))
		{
			return;
		}
		Global_1896738->f_3085.f_1 = 1;
		if (func_929() != iVar0)
		{
			func_930(iVar0);
		}
		if (func_931() == 0 || func_931() != func_929())
		{
			Global_1896738->f_3085.f_6 = 0;
			func_907();
			func_932();
		}
		if (func_933() < 5000)
		{
			return;
		}
		if (!Global_1896738->f_3085.f_4)
		{
			return;
		}
		network_clear_found_gamers();
		func_934(iVar0);
		func_935(1);
	}
	if (func_928() == 1)
	{
		if (network_is_finding_gamers())
		{
			func_935(2);
		}
		else if (_0xe532d6811b3a4d2a(0))
		{
			func_935(2);
		}
		else
		{
			func_935(1);
		}
	}
	if (func_928() == 2)
	{
		if (_0x0e54d4da6018ff8e() && _0xf9b83b77929d8863())
		{
			func_936();
			func_937();
			Global_1896738->f_3085.f_6 = _0x7bca0a3972708436(&(Global_1896738->f_3085.f_7), 482);
			network_clear_found_gamers();
			if (Global_1896738->f_3085.f_6 == 0)
			{
				func_935(0);
			}
			if (Global_1896738->f_3085.f_6 >= 32)
			{
				Global_1896738->f_3085.f_6 = 31;
			}
			func_935(0);
		}
		else if (!network_is_finding_gamers())
		{
			func_935(1);
		}
	}
}

void func_316()
{
	if (func_900(1))
	{
		func_375(1, 0);
	}
	if (func_900(0))
	{
		func_375(0, 0);
		func_375(1, 1);
		Global_1896738->f_194.f_2 = 0f;
	}
	if (Global_1896738->f_194.f_1 > 0f)
	{
		Global_1896738->f_194.f_2 = (Global_1896738->f_194.f_2 + get_frame_time());
		if (Global_1896738->f_194.f_2 >= Global_1896738->f_194.f_1)
		{
			func_375(1, 1);
			Global_1896738->f_194.f_2 = 0f;
		}
	}
}

void func_317()
{
	switch (func_938())
	{
		case 0:
			if (func_805())
			{
				func_939(1);
				func_940(1);
			}
			break;
		case 1:
			switch (func_924())
			{
				case 0:
					func_940(3);
					break;
				case 2:
					func_939(3);
					func_940(2);
					break;
			}
			switch (func_807())
			{
				case 5:
				case 6:
					if (func_941())
					{
						if (func_942(&bVar0, 1))
						{
							if (bVar0)
							{
								func_939(2);
							}
							else
							{
								func_939(3);
							}
							func_940(2);
						}
					}
					break;
				case 7:
					if (func_943())
					{
						if (func_944(&bVar0, 1))
						{
							if (bVar0)
							{
								func_939(2);
							}
							else
							{
								func_939(3);
							}
							func_940(2);
						}
					}
					break;
				case 8:
					if (func_945())
					{
						if (func_946(&bVar0, 1))
						{
							if (bVar0)
							{
								func_939(2);
							}
							else
							{
								func_939(3);
							}
							func_940(2);
						}
					}
					break;
				case 3:
					if (func_947())
					{
						if (func_948(&bVar0, 1))
						{
							if (bVar0)
							{
								func_939(2);
							}
							else
							{
								func_939(3);
							}
							func_940(2);
						}
					}
					break;
				case 4:
					if (func_949())
					{
						if (func_950(&bVar0, 1))
						{
							if (bVar0)
							{
								func_939(2);
							}
							else
							{
								func_939(3);
							}
							func_940(2);
						}
					}
					break;
				case 2:
					if (func_951())
					{
						if (func_952(&bVar0, 1))
						{
							if (bVar0)
							{
								func_939(2);
							}
							else
							{
								func_939(3);
							}
							func_940(2);
						}
					}
					break;
				case 1:
					if (func_953())
					{
						if (func_954(&bVar0, 1))
						{
							if (bVar0)
							{
								func_939(2);
							}
							else
							{
								func_939(3);
							}
							func_940(2);
						}
					}
					break;
			}
			break;
		case 2:
			func_55(1);
			func_939(0);
			func_940(3);
			break;
		case 3:
			func_21();
			func_955();
			func_939(0);
			func_940(0);
			break;
	}
}

void func_318()
{
	if (func_956() == -1)
	{
		if (!func_40(0))
		{
			return;
		}
		func_957(0);
	}
	if (func_956() == 0)
	{
		func_958(&(Global_1896738->f_6.f_2));
		func_957(1);
	}
	if (func_956() == 1)
	{
		func_190(Global_1896738->f_6.f_1);
		if (!func_40(0))
		{
			func_957(3);
			return;
		}
		if (Global_1896738->f_6.f_5 != -1f)
		{
			if (!func_959(&(Global_1896738->f_6.f_2)))
			{
				func_960(&(Global_1896738->f_6.f_2), 0);
			}
			if (func_961(&(Global_1896738->f_6.f_2)) >= Global_1896738->f_6.f_5)
			{
				func_957(2);
				return;
			}
		}
	}
	if (func_956() == 2)
	{
		func_962(2);
		func_957(3);
		return;
	}
	if (func_956() == 3)
	{
		func_957(-1);
		func_958(&(Global_1896738->f_6.f_2));
		func_963(0);
		func_962(0);
		func_33(0, 0);
	}
}

bool func_319()
{
	return Global_1940311->f_1433.f_9184.f_236;
}

void func_320(int* iParam0, int iParam1)
{
	set_bit(iParam0, iParam1);
}

void func_321(int* iParam0, int iParam1)
{
	clear_bit(iParam0, iParam1);
}

struct<16> func_322(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 128);
	return cVar0;
}

int func_323(int iParam0, bool bParam1)
{
	if (func_964())
	{
		return &(Global_1139381->f_4796.f_34[iParam0]);
	}
	iVar0 = func_965(iParam0);
	Var1 = { func_966(bParam1) };
	iVar5 = func_967(Var1, iVar0, 0, bParam1);
	if (!func_968(iVar5))
	{
		return 0;
	}
	return func_969(iVar5);
}

bool func_324(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (!func_970())
	{
		return false;
	}
	return func_971(iParam0, uParam1, iParam2, iParam3);
}

void func_325(var uParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	func_972(&Var0);
	*uParam0 = { Var0 };
}

void func_326(int iParam0, var uParam1, struct<23> Param2, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35)
{
	bVar0 = func_973(iParam0);
	if (func_964())
	{
		_databinding_write_data_bool(uParam1->f_47, false);
		_databinding_write_data_bool(uParam1->f_46, false);
		_databinding_write_data_bool(uParam1->f_50, true);
		_databinding_write_data_bool(uParam1->f_49, false);
		_databinding_write_data_bool(uParam1->f_48, false);
		func_974(uParam1, &Param2);
		return;
	}
	func_974(uParam1, &Param2);
	if (bVar0)
	{
		func_975(&(Global_1139381->f_4621.f_36[iParam0]->f_2), 1);
	}
	else
	{
		func_976(&(Global_1139381->f_4621.f_36[iParam0]->f_2), 1);
	}
	_databinding_write_data_bool(uParam1->f_46, (bVar0 && func_977()));
	_databinding_write_data_bool(uParam1->f_47, ((bVar0 && func_977()) && func_978(0)));
	_databinding_write_data_bool(uParam1->f_48, (Param2.f_22 && func_977()));
	_databinding_write_data_bool(uParam1->f_49, ((Param2.f_22 && func_977()) && func_978(3)));
	_databinding_write_data_bool(uParam1->f_50, bVar0);
	_databinding_write_data_string(uParam1->f_51, func_980(func_979(iParam0)));
}

bool func_327(int iParam0)
{
	return Global_1940311->f_1433.f_4189.f_2086 == iParam0;
}

void func_328(var uParam0, var uParam1, int iParam2)
{
	func_981(iParam2, uParam1);
	func_974(uParam0, uParam1);
}

bool func_329()
{
	return !Global_1572887->f_9;
}

void func_330(var uParam0, int iParam1)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

bool func_331(int iParam0, int iParam1)
{
	return is_bit_set(iParam0, iParam1);
}

int func_332(int iParam0)
{
	switch (iParam0)
	{
		case -1909832090:
			return 0;
		case 1120962917:
			return 1;
		case -1302559475:
			return 2;
		case 643368064:
			return 3;
		case 1754472897:
			return 4;
		case 1251021415:
			return 5;
		case -1141649578:
			return 23;
		case -1229126440:
			return 13;
		case 1627801305:
			return 14;
		case 900261631:
			return 16;
		case 2090776647:
			return 15;
		case -910579444:
			return 17;
		case 296053535:
			return 20;
		case -712765443:
			return 21;
		case -248206465:
			return 18;
		case -1269761102:
			return 19;
		case -1151685191:
			return 12;
		case 267128262:
			return 22;
		case 420120784:
			return 6;
		case -293089814:
			return 51;
		case 1191195930:
			return 52;
		case -811408979:
			return 49;
		case 1425963091:
			return 50;
		case 907425130:
			return 53;
		case -1431045214:
			return 7;
		case -1748449654:
			return 8;
		case 1984619020:
			return 9;
		case -80027036:
			return 10;
		case 1061762553:
			return 11;
		case -1731090972:
			return 39;
		case -152980413:
			return 40;
		case 1470615405:
			return 41;
		case -1026856039:
			return 42;
		case 1868152501:
			return 43;
		case -721351454:
			return 44;
		case 1343433478:
			return 24;
		case -1937951650:
			return 25;
		case 1278626257:
			return 26;
		case -996050125:
			return 27;
		case -1974642358:
			return 28;
		case 883433183:
			return 29;
		case -956828274:
			return 30;
		case 1667751432:
			return 31;
		case -1968023217:
			return 32;
		case -614347122:
			return 33;
		case 1449064090:
			return 34;
		case 1842580097:
			return 46;
		case 1684686721:
			return 47;
		case -516709195:
			return 48;
		case -976096880:
			return 54;
		case -1022521727:
			return 56;
		case 574218998:
			return 55;
		case 2053217867:
			return 57;
		default:
			break;
	}
	return -1;
}

int func_333()
{
	return Global_1896738->f_390;
}

int func_334(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 42;
		case 3:
			return 54;
		case 4:
			return 57;
		case 5:
			return 1;
		case 6:
			return 12;
		case 8:
			return 46;
		case 9:
			return 51;
		case 10:
			return 49;
		case 11:
			return 50;
		case 12:
			return 1;
		case 13:
			return 22;
		default:
			break;
	}
	return 0;
}

void func_335()
{
	func_762();
}

void func_336()
{
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_101, false);
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_98, false);
}

void func_337()
{
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1463.f_42, 0);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1463.f_43, 0);
}

void func_338()
{
	switch (Global_1940311->f_1433.f_830.f_1)
	{
		case 2:
			network_clear_found_gamers();
			break;
		case 3:
			_0x49cf17a564918e8d();
			break;
	}
	func_982(&(Global_1940311->f_1433.f_830), -1);
}

void func_339(bool bParam0)
{
	if (Global_1896738->f_197.f_7 == bParam0)
	{
		return;
	}
	if (!_databinding_is_data_id_valid(Global_1896738->f_197) || !_databinding_is_data_id_valid(Global_1896738->f_197.f_1))
	{
		return;
	}
	_databinding_write_data_bool(Global_1896738->f_197, false);
	_databinding_write_data_bool(Global_1896738->f_197.f_1, bParam0);
	_databinding_write_data_bool(Global_1896738->f_197.f_5, bParam0);
	_databinding_write_data_bool(Global_1896738->f_197.f_6, bParam0);
	Global_1896738->f_197.f_7 = bParam0;
}

void func_340()
{
	_0x00a15b94cba4f76f(Global_1940311->f_1433.f_157.f_264.f_2);
	Global_1940311->f_1433.f_157.f_264.f_2 = 0;
}

void func_341()
{
	Global_1940311->f_3 = 1;
}

void func_342()
{
	_databinding_write_data_bool(Global_1940311->f_1433.f_1407.f_54, false);
}

void func_343()
{
	func_983();
	func_984();
	func_985();
}

void func_344()
{
}

void func_345()
{
}

void func_346()
{
}

void func_347(int iParam0)
{
	sVar0 = func_986(iParam0);
	func_11(sVar0);
}

void func_348()
{
	func_763(Global_1296859->f_1, 0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_96, func_987());
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_78, func_769());
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_79, func_768());
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_84, func_770());
	func_767(0, func_442() == 0);
	func_767(9, func_449() == 0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_81, _0x3aeabae3f3c7600c());
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_83, _unlock_is_unlocked(2108779990));
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_85, (((_unlock_is_unlocked(254907751) && !func_830()) && !func_831()) && func_988()));
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_87, ((((_unlock_is_unlocked(1015316659) && !func_830()) && !func_831()) && !func_989()) && !func_840()));
	func_767(7, func_447() == 0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_85, func_990());
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_92, func_991());
	func_767(6, func_439() == 0);
	func_767(1, func_444() == 0);
	if ((Global_1572887->f_106.f_75 > 1 && Global_1572887->f_106.f_75 <= 15) && !func_627())
	{
		_databinding_write_data_bool(Global_1572887->f_106.f_149, true);
		_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_41, false);
		_databinding_write_data_string(Global_1940311->f_1433.f_1463.f_40, "MATCHMAKING_ACTIVE_LINK");
	}
	else
	{
		_databinding_write_data_bool(Global_1572887->f_106.f_149, false);
		_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_41, true);
		_databinding_write_data_string(Global_1940311->f_1433.f_1463.f_40, "MATCHMAKING_LINK");
	}
	func_336();
}

void func_349()
{
}

void func_350(bool bParam0)
{
	_databinding_write_data_bool(Global_1940311->f_1433.f_157.f_614.f_3, bParam0);
}

void func_351()
{
	func_763(func_202(), func_215());
	func_828(func_202());
	func_824(-1);
	func_826(0);
	func_339(0);
}

void func_352(int iParam0, bool bParam1)
{
	func_56();
	Var0 = { func_191(1) };
	bVar95 = false;
	bVar96 = false;
	if (func_34(Var0.f_29) && network_is_player_active(network_get_player_from_gamer_handle(&(Var0.f_29))))
	{
	}
	switch (iParam0)
	{
		case 16:
			func_56();
			break;
		case 14:
			if (_0xd6f6acf4392187fb(Global_1296859->f_15) && _0x0f99f6436528a089(Global_1296859->f_15))
			{
				if (func_396(Global_1296859->f_15))
				{
					_0xc08aff658b2e51da(&iVar97);
					if (iVar97 != 0)
					{
						bVar95 = true;
					}
				}
				else
				{
					bVar95 = true;
				}
			}
			bVar96 = true;
			break;
		case 17:
			func_993(func_992(&Var0));
			bVar95 = true;
			if (func_192(&Var0))
			{
				if (func_788(&Var0))
				{
					bVar96 = true;
				}
			}
			else if (func_994(&Var0))
			{
				bVar96 = true;
			}
			break;
	}
	if (bVar95)
	{
		iVar98 = func_995(func_811(&Var0), -1, 394524610, 1, 1, 0, 1, 17);
		func_996(iVar98);
	}
	if (bVar96)
	{
		iVar99 = func_995(_create_var_string(2, "POSSE_SUBH"), -1, -303450633, 1, 1, 0, 1, 14);
	}
	switch (iParam0)
	{
		case 17:
			func_927(iVar98, bParam1);
			break;
		case 14:
			func_927(iVar99, bParam1);
			break;
	}
}

void func_353()
{
	Var0.f_38 = 7;
	Var0.f_91 = -1;
	if (func_621(&Var0, 1))
	{
		func_148(&Var0);
	}
	func_33(6, 1);
	func_352(14, 1);
	func_364(1.5f, 1);
	func_821(&(Global_1940311->f_1433.f_157.f_614.f_4), 1);
}

void func_354()
{
	if (!func_40(1))
	{
		func_997();
		func_998();
		if (func_799(&(Global_1296859->f_154[&Global_1296859]), 0))
		{
			vVar0 = { func_536(&Global_1296859) };
			func_166(vVar0.y, func_999(vVar0.x));
		}
		else
		{
			func_998();
		}
		func_60(0, 1);
		func_1000(!Global_17411.f_55.f_14.f_5);
		func_1001(0);
		_databinding_write_data_int(Global_1896738->f_13.f_50.f_70.f_24, 0);
		func_33(2, 0);
		func_33(1, 1);
	}
	_hide_hud_component(-1274560729);
}

void func_355()
{
	Var0.f_38 = 7;
	Var0.f_91 = -1;
	Var0 = { func_191(1) };
	if (Global_1940311->f_1433.f_1 != 7)
	{
	}
	func_364(3f, 1);
	func_56();
	func_995("POSSE_MEMBERS_SUBH", -1, -1, 0, 0, 0, 0, -1);
	if (func_222(&Var0))
	{
		if (func_196(&Var0) && func_192(&Var0))
		{
			func_995("POSSE_DEPUTIES_SUBH", -1, -1, 0, 0, 1, 0, -1);
		}
	}
	if (!func_1002(19, 7))
	{
	}
	func_1003(0);
	func_793(&(Global_1940311->f_1433.f_157.f_197.f_3), 1);
}

void func_356()
{
	func_364(1.5f, 1);
	func_821(&(Global_1940311->f_1433.f_157.f_206.f_7), 1);
}

void func_357()
{
	func_364(1.5f, 1);
	func_550();
	Var0 = { func_191(1) };
	if (!func_222(&Var0))
	{
		return;
	}
	if (_databinding_is_data_id_valid(Global_1940311->f_1433.f_157.f_264.f_92))
	{
		if (func_196(&Var0))
		{
			_databinding_write_data_string(Global_1940311->f_1433.f_157.f_264.f_92, "NM_MW_POSSE_TYPE_PERSISTENT");
		}
		else
		{
			_databinding_write_data_string(Global_1940311->f_1433.f_157.f_264.f_92, "NM_MW_POSSE_TYPE_TEMPORARY");
		}
	}
	if (!func_1004(func_811(&Var0)))
	{
	}
}

void func_358(int iParam0)
{
	func_908();
	func_364(2f, 1);
	if (Global_1940311->f_1433.f_1 == 7)
	{
		func_33(4, 1);
	}
	func_56();
	switch (iParam0)
	{
		case 22:
			if (func_1005())
			{
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					func_995(func_1006(iVar0), iVar0, -1, 0, 0, 0, 0, -1);
					iVar0++;
				}
			}
			else
			{
				func_995(func_1006(1), 1, -1, 0, 0, 0, 0, -1);
				func_995(func_1006(2), 2, -1, 0, 0, 0, 0, -1);
				func_995(func_1006(3), 3, -1, 0, 0, 0, 0, -1);
			}
			if (!func_1002(6, 7))
			{
			}
			break;
		default:
			iVar0 = 0;
			while (iVar0 <= 3)
			{
				func_995(func_1006(iVar0), iVar0, -1, 0, 0, 0, 0, -1);
				iVar0++;
			}
			if (!func_1002(6, 7))
			{
			}
			break;
	}
	func_1007();
}

void func_359()
{
	func_908();
	func_364(2f, 1);
	func_56();
	func_1007();
	func_55(1);
}

void func_360()
{
	Global_1940311->f_1433.f_1316.f_9 = 0;
	_0x00a15b94cba4f76f(Global_1940311->f_1433.f_1316.f_8);
	Global_1940311->f_1433.f_1316.f_8 = 0;
	_databinding_write_data_string(Global_1940311->f_1433.f_1407.f_55, "");
	func_15();
}

void func_361()
{
}

void func_362()
{
}

void func_363()
{
	iVar0 = func_1008(0, 1);
	func_113(iVar0, func_112());
	func_364(1f, 1);
	func_863();
	func_56();
	iVar2 = 7;
	iVar3 = 0;
	while (iVar3 < iVar2)
	{
		iVar1 = iVar3;
		func_995(func_1009(iVar1), iVar3, iVar3, 0, 0, 0, 0, -1);
		iVar3++;
	}
}

void func_364(float fParam0, bool bParam1)
{
	Global_1896738->f_194.f_2 = 0f;
	Global_1896738->f_194.f_1 = fParam0;
	if (bParam1)
	{
		func_375(0, 1);
	}
}

void func_365()
{
	func_364(2f, 1);
	func_1010();
	func_1011();
}

void func_366()
{
}

void func_367()
{
	iVar0 = func_143();
	iVar1 = func_1012(iVar0, 0);
	_databinding_write_data_string(Global_1940311->f_1433.f_8111.f_5, _create_var_string(2, "NET_MG_CONTEXT_PUBLIC", iVar1));
	func_1013(iVar0);
}

void func_368()
{
	iVar0 = func_143();
	func_1013(iVar0);
}

void func_369()
{
	iVar0 = func_143();
	bVar1 = func_146(2);
	StringCopy(&cVar2, _create_var_string(2, func_1014(bVar1, "NET_MG_TITLE_PRIVATE", "NET_MG_TITLE_PUBLIC")), 128);
	StringCopy(&cVar18, func_1016(func_1015(iVar0)), 128);
	StringCopy(&cVar18, _create_var_string(2, &cVar18), 128);
	_databinding_write_data_string(Global_1940311->f_1433.f_8111.f_1, _create_var_string(42, "NET_MG_TITLE_ASSEMBLY", &cVar2, &cVar18));
	func_1013(iVar0);
	iVar34 = func_1012(iVar0, 1);
	_databinding_write_data_string(Global_1940311->f_1433.f_8111.f_12, _create_var_string(2, "MGPKR_UI_BUYIN", iVar34));
	bVar35 = (func_146(8192) && !func_146(16384));
	_databinding_write_data_bool(Global_1940311->f_1433.f_8111.f_10, bVar35);
	_databinding_write_data_bool(Global_1940311->f_1433.f_8111.f_11, true);
	func_767(0, func_442() == 0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_79, func_896());
	func_767(1, func_444() == 0);
	func_897();
}

void func_370()
{
	_databinding_write_data_bool(Global_1896738->f_371.f_1, true);
	_databinding_write_data_bool(Global_1896738->f_371.f_2, true);
	_databinding_write_data_bool(Global_1896738->f_371.f_3, true);
	_databinding_write_data_bool(Global_1896738->f_371.f_4, true);
}

void func_371()
{
}

void func_372()
{
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_437, false);
}

void func_373()
{
	func_364(1f, 1);
	func_56();
	iVar1 = 3;
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		iVar0 = iVar2;
		func_995(func_1017(iVar0), iVar2, iVar2, 0, 0, 0, 0, -1);
		iVar2++;
	}
}

void func_374()
{
	func_908();
	func_364(2f, 1);
	func_56();
	func_995(func_1006(0), 0, -1, 0, 0, 0, 0, -1);
}

void func_375(int iParam0, bool bParam1)
{
	if (func_331(Global_1896738->f_194, iParam0) != bParam1)
	{
		if (bParam1)
		{
			func_320(&(Global_1896738->f_194), iParam0);
		}
		else
		{
			func_321(&(Global_1896738->f_194), iParam0);
		}
	}
}

void func_376(bool bParam0)
{
	Global_1940311->f_1433.f_9184.f_243 = bParam0;
	Global_1940311->f_1433.f_9184.f_242 = !bParam0;
}

int func_377()
{
	if (func_1018())
	{
		return func_1019(12, 0);
	}
	return func_1019(5, 0);
}

void func_378(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, func_58(91));
	if (func_1020(iVar0))
	{
		_0x2f901291ef177b02(iVar0, 1);
	}
}

int func_379(int iParam0)
{
	if (!func_1021(iParam0))
	{
		return -1;
	}
	iVar2 = func_1022(iParam0);
	iVar0 = 0;
	while (iVar0 < 4)
	{
		iVar1 = func_965(iVar0);
		if (func_1023(iVar2, iVar1, 1))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_380(int iParam0)
{
	func_492(iParam0);
	if (func_1024(iParam0))
	{
		iVar0 = 304794100;
	}
	else if (!func_1025(iParam0, 1))
	{
		iVar0 = func_1026(func_323(iParam0, 1));
	}
	else
	{
		iVar0 = 1467455271;
	}
	func_1027(iVar0, func_323(iParam0, 1));
	if (_0xf7c180f57f85d0b8(-1641598689))
	{
		_uistatemachine_request_transition(-1641598689, -2109508723);
	}
}

void func_381(int iParam0)
{
	func_1028(*iParam0);
	if (_0xf7c180f57f85d0b8(-1641598689))
	{
		_uistatemachine_request_transition(-1641598689, -1316999016);
	}
}

int func_382(int iParam0, var uParam1)
{
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	*uParam1 = { (*Global_1134390)[iVar0]->f_38.f_8 };
	return 1;
}

int func_383(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iParam0))
		{
			return -1;
		}
	}
	return (*Global_1298536)[iParam0]->f_5.f_12;
}

Vector3 func_384(int iParam0)
{
	func_1030(51288898, func_1029(iParam0), 0, 0);
	if (!_datafile_get_vector(&vVar0, &(Global_1298378->f_1)))
	{
		return 0f, 0f, 0f;
	}
	return vVar0;
}

Vector3 func_385()
{
	iVar2 = -1;
	iVar0 = 0;
	while (iVar0 <= (func_1031() - 1))
	{
		iVar1 = func_1032(iVar0);
		if (iVar1 == -1)
		{
		}
		else
		{
			fVar3 = func_1034(Global_35, func_1033(iVar1));
			if (iVar2 == -1)
			{
				fVar4 = fVar3;
				iVar2 = iVar1;
			}
			else if (fVar3 < fVar4)
			{
				fVar4 = fVar3;
				iVar2 = iVar1;
			}
		}
		iVar0++;
	}
	if (iVar2 == -1)
	{
		return 0f, 0f, 0f;
	}
	return func_1033(iVar2);
}

int func_386(int iParam0, bool bParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6)
{
	if (func_1035())
	{
		Global_1940311->f_10894 = iParam0;
		func_1036(iParam0, 1, -142743235, 0, 0);
		return 0;
	}
	if (!func_1037(iParam0, bParam4))
	{
		return 0;
	}
	if (func_1038(iParam0))
	{
		return 0;
	}
	if (_0xec7e480ff8bd0bed(Global_34) && !has_anim_event_fired(Global_34, 108107462))
	{
		return 0;
	}
	bVar28 = true;
	iVar29 = 1;
	Var0.f_4 = iParam3;
	Var0.f_5 = 1;
	if (iParam0 == -418848773)
	{
		_launch_app_with_entry("player_menu", "mp_moonshine_selection");
	}
	if (func_1039(iParam0))
	{
		Global_1913502 = iParam0;
		Global_1913693 = get_game_timer();
		Global_1913503 = get_game_timer() + 3000;
		return 1;
	}
	if (func_1040(iParam0, -2081717885))
	{
		func_1041(iParam0, Var10, Var0, uVar27, bVar28, iVar29);
	}
	else if (func_1040(iParam0, -1909684001))
	{
		func_1042(iParam0, Var10, Var0, bVar28, iVar29);
	}
	else if (func_1040(iParam0, 587975446))
	{
		func_1043(iParam0, Var10);
	}
	else if (func_1040(iParam0, 566155764))
	{
		if (!func_1044(iParam0))
		{
			return 0;
		}
	}
	if (func_1045(iParam0, bParam5, bParam6, bParam1))
	{
		Global_1913502 = iParam0;
		Global_1913693 = get_game_timer();
		return 1;
	}
	if (func_1040(iParam0, -1227898937))
	{
		Var0.f_2 = iParam0;
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "doc_newspaper", 32);
		Var10.f_14 = 1024;
		Var10.f_15 = 1;
		func_1046(Var10, 1);
		iVar29 = 0;
		bVar28 = false;
	}
	else if ((func_1040(iParam0, -1472964441) || func_1040(iParam0, -228153877)) || func_1040(iParam0, 566155764))
	{
	}
	else if (func_1040(iParam0, 1919582297))
	{
		if (((func_1047() || is_ped_active_in_scenario(Global_34, 1)) || _0x0c3cb2e600c8977d(Global_34, 1)) || !is_ped_on_foot(Global_34))
		{
			return 0;
		}
		switch (iParam0)
		{
			case 1929383243:
			case 2036955137:
				StringCopy(&(Var10.f_10), "item_bait_herbivore", 32);
				break;
			case -1635450397:
			case 1831763320:
				StringCopy(&(Var10.f_10), "item_bait_predator", 32);
				break;
			case -252071901:
				StringCopy(&(Var10.f_10), "item_legendary_animal_pheromone", 32);
				break;
		}
		Var0.f_1 = iParam0;
		Var0.f_3 = bParam1;
		Var10 = { Var0 };
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_1046(Var10, 0);
		bVar28 = false;
	}
	else if (func_1048(iParam0))
	{
		Var0.f_3 = 0;
		Var0.f_1 = iParam0;
		Var0.f_2 = 0;
		Var0 = func_1049(Global_1071686->f_28357.f_11.f_67);
		Var10 = { Var0 };
		StringCopy(&(Var10.f_10), "net_player_wheel_item_use", 32);
		Var10.f_14 = 512;
		Var10.f_15 = 1;
		func_1046(Var10, 0);
		iVar29 = 1;
	}
	else if (func_1050(iParam0) == -1037537535)
	{
		if (!func_1051(iParam0))
		{
			func_626("SI_ITEM_OUTFIT_IS_LOCKED", 10000, 0, 0, 0, 1);
			return iVar29;
		}
		iVar32 = func_1052(iParam0);
		switch (iVar32)
		{
			case -2061583405:
			case -999503751:
			case -525676072:
				bVar30 = func_1053();
				break;
			default:
				bVar30 = true;
				break;
		}
		if (!bVar30)
		{
			if (func_1054(player_id()))
			{
				func_626("SI_ITEM_USE_OUTFITS_STATIONARY", 10000, 0, 0, 0, 1);
			}
			else
			{
				func_626("SI_ITEM_USE_OUTFITS_NEAR_HORSE", 10000, 0, 0, 0, 1);
			}
			return iVar29;
		}
		if (iVar32 == -999503751)
		{
			if (Global_1952637->f_1675 != iParam0)
			{
				func_1055(20, iParam0, 0, 0, 0);
			}
		}
		else
		{
			switch (iVar32)
			{
				case -525676072:
				case -68128151:
				case 81053684:
					func_1056(iParam0, 0);
					return iVar29;
				case -2061583405:
					func_1057(iParam0);
					func_1055(35, 0, 0, 0, 0);
					return 1;
				case -1719060085:
					if (iParam0 == &Global_1952637->f_1675.f_1[23])
					{
						func_1058(Global_34, 260271636, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						_0xcb9401f918cb0f75(Global_34, "PlayUnequipGlovesFidget", 1, 15);
						func_1059(iParam0, 0, 0);
						return 1;
					}
					else
					{
						_0xcb9401f918cb0f75(Global_34, "PlayEquipGlovesFidget", 1, 15);
						func_1059(iParam0, 1, 0);
					}
					break;
				case 119907797:
				case 1388798186:
					if (iParam0 == &Global_1952637->f_1675.f_1[10])
					{
						func_1058(Global_34, &(Global_1952637->f_83[10]), 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
						func_1059(iParam0, 0, 0);
						return 1;
					}
					else
					{
						func_1059(iParam0, 1, 0);
						func_1060(-2061583405, 0);
						if (iVar32 == 1388798186)
						{
							func_1060(119907797, 0);
						}
						else if (iVar32 == 119907797)
						{
							func_1060(1388798186, 0);
						}
					}
					break;
				default:
					if (!func_1040(iParam0, 160827531))
					{
					}
					else
					{
						func_1056(iParam0, 0);
					}
					break;
			}
			func_1058(Global_34, iParam0, 0, -358215195, 1, 1, 1, 0, 0, 1, 1);
		}
	}
	else
	{
		switch (iParam0)
		{
			case 1259508039:
				func_1061(1);
				break;
			case -727924611:
				if (func_619() != -1)
				{
				}
				else if (!func_1051(iParam0))
				{
					func_626("SI_ITEM_WARDROBE_IS_LOCKED", 10000, 0, 0, 0, 1);
				}
				else
				{
					bVar30 = func_1062(7, iParam0);
					bVar31 = func_1062(1, iParam0);
					if (bVar31 && !bVar30)
					{
						if (does_blip_exist(Global_17332))
						{
							remove_blip(&Global_17332);
						}
						Global_17332 = _0x3e593df9c2962ec6(-1925605092);
						_blip_set_modifier(Global_17332, 673950256);
						func_626(_create_var_string(0, -1680440926, Global_17332), 10000, 0, 0, 0, 1);
					}
					else if (!func_1063(7))
					{
						func_626("SI_ITEM_USE_WARDROBE_NO_SADDLE", 10000, 0, 0, 0, 1);
					}
					else if (!bVar30)
					{
						if (func_1065(Global_34, func_1064(7), 0))
						{
							func_626("SI_ITEM_USE_WARDROBE_STATIONARY", 10000, 0, 0, 0, 1);
						}
						else
						{
							if (does_blip_exist(Global_17332))
							{
								remove_blip(&Global_17332);
							}
							Global_17332 = _0x3e593df9c2962ec6(-1925605092);
							_blip_set_modifier(Global_17332, 673950256);
							func_626(_create_var_string(0, -482898802, Global_17332), 10000, 0, 0, 0, 1);
						}
					}
					else
					{
						iVar26 = 1338309244;
						if (_get_number_of_references_of_script_with_name_hash(iVar26) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_2 = 51499045;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "player_wardrobe", 32);
							Var10.f_14 = 1024;
							Var10.f_15 = 1;
							func_1046(Var10, 0);
						}
						Jump @2404; //curOff = 1786
						func_1066();
						Jump @2404; //curOff = 1793
						if (func_1051(-1838434463))
						{
							if (func_803(1, 1))
							{
								func_1019(2, 1);
							}
							else if (func_860(1))
							{
								func_626("GC_SELECT_HELP_FOLLOWER_DEAD", 10000, 0, 0, 0, 1);
							}
							else if (func_858())
							{
								func_626("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
							}
							else
							{
								if (_0x424b17a7dc5c90bc(player_id()))
								{
									func_1067();
								}
								else
								{
									func_626("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
								}
								func_1068(_0x901e0dc25080c8b9(player_id()));
							}
						}
						else if (!_0x424b17a7dc5c90bc(player_id()))
						{
							func_626("GC_SELECT_HELP_NOT_LEADER", 10000, 0, 0, 0, 1);
							func_1068(_0x901e0dc25080c8b9(player_id()));
						}
						else if (func_858())
						{
							func_626("NET_CAMP_SET_LOC_CONTENT_LOCK", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_626("GC_SELECT_HELP_DISABLED", 10000, 0, 0, 0, 1);
						}
						Jump @2404; //curOff = 2014
						if (!_is_weapon_binoculars(func_1069(Global_34, 1, 0, 0)))
						{
							set_current_ped_weapon(Global_34, iParam0, false, 0, false, false);
						}
						return 1;
						Jump @2404; //curOff = 2052
						if (func_1069(Global_34, 1, 0, 0) != iParam0)
						{
							set_current_ped_weapon(Global_34, iParam0, false, 0, false, false);
						}
						return 1;
						Jump @2404; //curOff = 2087
						Jump @2404; //curOff = 2090
						func_1070(535, 1);
						Jump @2404; //curOff = 2101
						func_1071(1);
						Jump @2404; //curOff = 2109
						_task_item_interaction(player_ped_id(), -569063887, 1928812891, 1, 0, -1082130432);
						bVar28 = false;
						return 1;
						Jump @2404; //curOff = 2144
						_launch_app_by_hash(-76766502);
						if (_get_number_of_references_of_script_with_name_hash(-76766502) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "collectors_bag", 32);
							Var10.f_14 = 1024;
							func_1046(Var10, 0);
						}
						return 1;
						Jump @2404; //curOff = 2220
						_close_app_by_hash(-4058091);
						if (get_hash_of_this_script_name() == 1349139153)
						{
							_launch_app_by_hash_with_entry(1976336482, 1261159557);
						}
						else
						{
							_launch_app_by_hash(1976336482);
						}
						if (_get_number_of_references_of_script_with_name_hash(698150113) > 0)
						{
						}
						else
						{
							Var0.f_1 = iParam0;
							Var0.f_3 = !get_hash_of_this_script_name() != 1349139153;
							Var10 = { Var0 };
							StringCopy(&(Var10.f_10), "field_guide", 32);
							Var10.f_14 = 1024;
							func_1046(Var10, 0);
						}
						return 1;
						Jump @2404; //curOff = 2350
						if ((*Global_1138048)[player_id()]->f_4)
						{
							func_626("NET_WCAMP_OWNER_CAMP_RUNNING", 10000, 0, 0, 0, 1);
						}
						else
						{
							func_1072();
						}
						return 1;
						Jump @2404; //curOff = 2395
						iVar29 = 0;
					}
				}
				if (bVar28)
				{
					_0xbfff81e12a745a5f();
				}
				return iVar29;
				default:
					break;
		}
	}
}

int func_387(int iParam0)
{
	if (func_1073(iParam0, 997808187) && !func_1074(iParam0, 997808187, 0))
	{
		return 997808187;
	}
	iVar0 = 0;
	if (func_1075(iParam0, &iVar0))
	{
		return iVar0;
	}
	if (func_1073(iParam0, 59806960))
	{
		iVar0 = 59806960;
	}
	else if (func_1073(iParam0, -915411861))
	{
		iVar0 = -915411861;
	}
	else if (func_1073(iParam0, -570078785))
	{
		iVar0 = -570078785;
	}
	return iVar0;
}

int func_388(int iParam0, bool bParam1, int iParam2)
{
	if (!func_586(iParam0, 0))
	{
		return 0;
	}
	return func_1076(iParam0, iParam2, 1, bParam1, 1, 0);
}

void func_389(int iParam0)
{
	Global_1896738->f_13.f_26 = iParam0;
}

void func_390(bool bParam0)
{
	if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_3))
	{
		_databinding_write_data_bool(Global_1896738->f_13.f_50.f_3, bParam0);
	}
}

char* func_391(int iParam0, bool bParam1, int iParam2)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return "";
	}
	if (!network_is_player_active(_0x4be6c13a45cca8ec(iParam0)))
	{
		return "";
	}
	if (bParam1)
	{
		if (iParam2 == 0)
		{
			return _create_var_string(10, "NM_POSSE_NAME_DEFAULT", func_669(get_player_name(_0x4be6c13a45cca8ec(iParam0)), 109029619));
		}
		else
		{
			sVar0 = _create_var_string(10, "NM_POSSE_NAME_DEFAULT", func_669(get_player_name(_0x4be6c13a45cca8ec(iParam0)), 109029619));
			return func_1077(sVar0, iParam2);
		}
	}
	if (iParam2 == 0)
	{
		return _create_var_string(10, "NM_POSSE_NAME_DEFAULT", get_player_name(_0x4be6c13a45cca8ec(iParam0)));
	}
	sVar0 = _create_var_string(10, "NM_POSSE_NAME_DEFAULT", get_player_name(_0x4be6c13a45cca8ec(iParam0)));
	return func_1077(sVar0, iParam2);
}

void func_392(char* sParam0)
{
	StringCopy(&(Global_1194053->f_1094), sParam0, 64);
}

void func_393(int iParam0)
{
	if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_70.f_24) && _databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_70.f_23))
	{
		_databinding_write_data_int(Global_1896738->f_13.f_50.f_70.f_24, func_1078(iParam0, 1));
		_databinding_write_data_hash_string(Global_1896738->f_13.f_50.f_70.f_23, iParam0);
	}
}

char* func_394(int iParam0, bool bParam1)
{
	if (!network_is_player_active(iParam0))
	{
		return "";
	}
	if (bParam1)
	{
		return _create_var_string(10, "NM_POSSE_NAME_DEFAULT", func_669(get_player_name(iParam0), 109029619));
	}
	return _create_var_string(10, "NM_POSSE_NAME_DEFAULT", get_player_name(iParam0));
}

void func_395(char* sParam0, bool bParam1)
{
	if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_2))
	{
		_databinding_write_data_string(Global_1896738->f_13.f_50.f_2, sParam0);
	}
	if (bParam1)
	{
		Global_1896738->f_13.f_10 = { func_322(func_391(_0x901e0dc25080c8b9(player_id()), 0, 0)) };
	}
	else
	{
		Global_1896738->f_13.f_10 = { func_322(sParam0) };
	}
}

bool func_396(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return false;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (network_is_player_active(iVar0))
	{
		if (iVar0 == player_id())
		{
			_0xc08aff658b2e51da(&iVar1);
			if (iVar1 != 0)
			{
				return true;
			}
		}
		else
		{
			Var2 = { func_573(iVar0) };
			iVar19 = 0;
			while (iVar19 <= (_0xc084ff658b2e61da(&Var2) - 1))
			{
				if ((_0xc084ff658b2e81da(&Var2, iVar19, &Var9) && Var9 != 0) && Var9.f_9 == 1)
				{
					return true;
				}
				iVar19++;
			}
		}
	}
	return false;
}

bool func_397()
{
	return Global_1194053->f_409.f_9;
}

int func_398()
{
	return Global_1194053->f_409;
}

void func_399(int iParam0, bool bParam1)
{
	Global_1194053->f_490 = iParam0;
	Global_1194053->f_490.f_1 = bParam1;
}

int func_400(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	if (iParam0 == player_id())
	{
		_0xc08aff658b2e51da(&uVar0);
		return uVar0;
	}
	Var1 = { func_573(iParam0) };
	iVar18 = 0;
	while (iVar18 <= (_0xc084ff658b2e61da(&Var1) - 1))
	{
		if ((_0xc084ff658b2e81da(&Var1, iVar18, &Var8) && Var8 != 0) && Var8.f_9 == 1)
		{
			return Var8;
		}
		iVar18++;
	}
	return 0;
}

void func_401(int iParam0, int iParam1)
{
	if (Global_1194053->f_116.f_3 == iParam0)
	{
		return;
	}
	Var0.f_27 = 10;
	Var0.f_9 = iParam0;
	func_1079(&Var0);
	Global_1194053->f_116 = iParam0;
	Global_1194053->f_116.f_1 = iParam1;
	Global_1194053->f_116.f_4 = 1;
	func_1080(1);
}

void func_402(bool bParam0, int iParam1, int iParam2)
{
	if (func_1081())
	{
		return;
	}
	if (bParam0 == 1)
	{
		if (!func_1082(player_id(), 32))
		{
			func_1083(32);
			if (iParam2 == 0)
			{
				sVar0 = _create_var_string(2, "NG_PP_FF_ON");
				func_670(sVar0, -2, 0, 0, 0, 1);
			}
			if (iParam1 == 1)
			{
				func_1084(bParam0, _0x901e0dc25080c8b9(player_id()));
			}
		}
	}
	else if (func_1082(player_id(), 32))
	{
		func_1085(32);
		if (iParam2 == 0)
		{
			sVar0 = _create_var_string(2, "NG_PP_FF_OFF");
			func_670(sVar0, -2, 0, 0, 0, 1);
		}
		if (iParam1 == 1)
		{
			func_1084(bParam0, _0x901e0dc25080c8b9(player_id()));
		}
	}
}

int func_403(int iParam0, bool bParam1)
{
	Var0.f_27 = 10;
	if (_0xc087ff658b2e51da(iParam0, &Var0))
	{
		if (func_1086())
		{
			func_1087();
			return 1;
		}
		if (!func_1088())
		{
			return 0;
		}
		Var0.f_9.f_1 = bParam1;
		iVar118 = 0;
		if (!_0xc09cff658b2e51da(iParam0, &Var0, &iVar118) && iVar118 == 1)
		{
			func_1089();
			return 0;
		}
		else
		{
			func_1087();
			return 1;
		}
	}
	return 0;
}

int func_404(int iParam0)
{
	switch (iParam0)
	{
		case 1364158563:
			return 0;
		case -1615594685:
			return 1;
		case -606838807:
			return 2;
		case 1099303125:
			return 3;
		default:
			break;
	}
	return 0;
}

void func_405(int iParam0)
{
	if (iParam0 == 0)
	{
		_0x3f0abae38a0515ad(0, 2);
	}
	else
	{
		_0x3f0abae38a0515ad(0, 1);
	}
	if (iParam0 == 1)
	{
		_0x3f0abae38a0515ad(1, 2);
	}
	else
	{
		_0x3f0abae38a0515ad(1, 1);
	}
	if (iParam0 == 2)
	{
		_0x3f0abae38a0515ad(2, 2);
	}
	else
	{
		_0x3f0abae38a0515ad(2, 1);
	}
	if (iParam0 == 3)
	{
		_0x3f0abae38a0515ad(3, 2);
	}
	else
	{
		_0x3f0abae38a0515ad(3, 1);
	}
}

int func_406(int iParam0)
{
	switch (iParam0)
	{
		case 2118609260:
			return 1;
		case 910568583:
			return 0;
		default:
			break;
	}
	return 0;
}

int func_407(int iParam0)
{
	if (!Global_1139381->f_5560)
	{
		return 0;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		return Global_17411.f_2621.f_2;
	}
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0;
	}
	return (*Global_1100469)[iVar0]->f_48;
}

void func_408()
{
	if (!Global_1139381->f_5560)
	{
		return;
	}
	Global_1139381->f_5560.f_12 = 1;
}

void func_409()
{
	if (!Global_1139381->f_5560)
	{
		return;
	}
	Global_1139381->f_5560.f_13 = 1;
}

int func_410(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -2029245166;
		case 0:
			return -651592419;
		default:
			break;
	}
	return -2029245166;
}

bool func_411()
{
	iVar0 = _0x901e0dc25080c8b9(&(Global_1296859->f_154[&Global_1296859]));
	if (!_0xd6f6acf4392187fb(iVar0))
	{
		return false;
	}
	if (!_0x0f99f6436528a089(iVar0))
	{
		return false;
	}
	return true;
}

bool func_412()
{
	iVar0 = _0x901e0dc25080c8b9(&(Global_1296859->f_154[&Global_1296859]));
	if (!_0xd6f6acf4392187fb(iVar0))
	{
		return false;
	}
	if (!_0x0f99f6436528a089(iVar0))
	{
		return false;
	}
	if (!_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
	{
		return false;
	}
	return true;
}

bool func_413()
{
	if (Global_1572887->f_106.f_75 >= 10 && Global_1572887->f_106.f_75 <= 14)
	{
		return true;
	}
	return false;
}

float func_414(int iParam0, bool bParam1)
{
	if (!Global_1139381->f_5560)
	{
		return 0f;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		return Global_17411.f_2621;
	}
	if (!network_is_player_active(iParam0))
	{
		return 0f;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return 0f;
	}
	if ((_0x149a2751ab66ac02(_0x901e0dc25080c8b9(iParam0)) > 1 && bParam1) && (*Global_1100469)[iVar0]->f_18 >= (*Global_1100469)[iVar0]->f_45)
	{
		return (*Global_1100469)[iVar0]->f_18;
	}
	return (*Global_1100469)[iVar0]->f_45;
}

bool func_415(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_416(float fParam0)
{
	if (floor(fParam0) >= Global_1901947->f_716.f_29)
	{
		return true;
	}
	return false;
}

bool func_417()
{
	if (func_420(&(Global_1296859->f_154[&Global_1296859])) > 0)
	{
		return true;
	}
	return false;
}

bool func_418(bool bParam0)
{
	if (func_416(Global_17411.f_2621) || func_416((*Global_1100469)[&Global_1296859]->f_18))
	{
		return false;
	}
	if (func_1090(&(Global_1296859->f_154[&Global_1296859]), 1, 1))
	{
		return false;
	}
	if (!bParam0)
	{
		if (func_417())
		{
			return false;
		}
	}
	if (func_1091(&(Global_1296859->f_154[&Global_1296859])))
	{
		return false;
	}
	iVar0 = &Global_1296859->f_154[&Global_1296859];
	if (((*Global_1100469)[iVar0]->f_1 >= 2 && (*Global_1100469)[iVar0]->f_1 <= 4) && !Global_1572887->f_6)
	{
		return false;
	}
	iVar1 = _0x901e0dc25080c8b9(&(Global_1296859->f_154[&Global_1296859]));
	if (_0xd6f6acf4392187fb(iVar1))
	{
		if (_0x0f99f6436528a089(iVar1))
		{
			if (!_0x424b17a7dc5c90bc(&(Global_1296859->f_154[&Global_1296859])))
			{
				return false;
			}
		}
	}
	return true;
}

bool func_419()
{
	return (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318);
}

int func_420(int iParam0)
{
	iVar0 = (Global_1901947->f_716.f_39 - func_1092(iParam0));
	if (iVar0 > 0)
	{
		return iVar0;
	}
	return 0;
}

void func_421(int iParam0)
{
	Global_17411.f_55.f_61.f_582 = (Global_17411.f_55.f_61.f_582 - (Global_17411.f_55.f_61.f_582 && iParam0));
}

void func_422(int iParam0)
{
	Global_17411.f_55.f_61.f_582 = (Global_17411.f_55.f_61.f_582 || iParam0);
}

void func_423(bool bParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1093();
	}
	if (bParam0)
	{
		func_1094(8);
		func_1094(512);
	}
	else
	{
		func_1094(8);
		func_1094(16);
	}
}

int func_424(int iParam0)
{
	switch (iParam0)
	{
		case 470592719:
			return 0;
		case 1413457193:
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_425(int iParam0, int iParam1)
{
	if (!func_426(iParam0))
	{
		return false;
	}
	return func_576((*Global_1131196)[iParam0]->f_7, iParam1);
}

bool func_426(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return true;
}

bool func_427(var uParam0)
{
	return func_1095(*uParam0, 1);
}

int func_428(var uParam0)
{
	if (!func_427(uParam0))
	{
		return 0;
	}
	if (func_1096(uParam0))
	{
		return uParam0->f_2;
	}
	return func_1097(uParam0->f_1);
}

int func_429()
{
	return 30000;
}

void func_430(int iParam0)
{
	func_1098(&(Global_1137047->f_8), iParam0);
}

void func_431(int iParam0)
{
	func_577(&(Global_1137047->f_8), iParam0);
}

var func_432(int iParam0, int iParam1)
{
	return func_1099(0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 0f, 665633627, iParam0, iParam1);
}

void func_433(int iParam0, struct<5> Param1, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, float fParam15)
{
	if (!_0x179a6f0ee2e79026(&fParam15))
	{
		return;
	}
	if (!func_1100(0))
	{
		return;
	}
	Param1 = 10;
	Param1.f_1 = player_id();
	Param1.f_2 = get_network_time_accurate();
	Param1.f_4 = iParam0;
	trigger_script_event(1, &Param1, 14, 13, &fParam15);
}

int func_434()
{
	return func_1101(Global_1940311->f_1433);
}

void func_435(int iParam0)
{
	switch (iParam0)
	{
		case -1594107850:
		case -1080557963:
		case 72556410:
			func_343();
			break;
		default:
			break;
	}
	func_91(iParam0, 0);
}

int func_436(var uParam0)
{
	return func_1102(uParam0, Global_1940311->f_1433);
}

char* func_437()
{
	sVar0 = _0x3f6fd87d2030adc6();
	if (is_string_null_or_empty(sVar0))
	{
		sVar0 = _create_var_string(2, "DAILY_DISABLED");
	}
	return sVar0;
}

char* func_438()
{
	if (func_1103())
	{
		sVar0 = "NM_POSSE_INFO_DISABLED_INTRO_MISSION_TOOLTIP";
	}
	else if (func_830())
	{
		sVar0 = "NM_POSSE_INFO_DISABLED_ACTIVITY_TOOLTIP";
	}
	else
	{
		sVar0 = "POSSE_FOOTER";
	}
	return _create_var_string(2, sVar0);
}

int func_439()
{
	if (func_419())
	{
		return 2;
	}
	return 0;
}

char* func_440(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
		default:
			break;
	}
	return _create_var_string(2, "CAMP_AND_PROPERTIES_FOOTER");
}

char* func_441()
{
	bVar1 = func_1103();
	if (bVar1)
	{
		iVar2 = func_1104(-55206167, func_966(1), -1990194462, 1, 0, 0) + 1;
	}
	if (bVar1 && iVar2 <= 16)
	{
		sVar0 = "NET_CAMP_INTRO_MISSION_DISABLED_FOOTER";
	}
	else if (func_830() || Global_263042[&Global_1296859] > 2)
	{
		sVar0 = "NET_CAMP_DISABLED_ACTIVITY_FOOTER";
	}
	else
	{
		sVar0 = "CAMP_FOOTER";
	}
	return _create_var_string(2, sVar0);
}

int func_442()
{
	if (func_1105(1))
	{
		return 1;
	}
	if (!_unlock_is_unlocked(319332586))
	{
		return 2;
	}
	if (func_576(Global_1138962->f_137.f_1, 2))
	{
		if (!func_146(2))
		{
			return 3;
		}
	}
	return 0;
}

char* func_443(int iParam0)
{
	return _create_var_string(2, "PLAYERS_FOOTER");
}

int func_444()
{
	if (func_1105(4))
	{
		return 1;
	}
	if (!_unlock_is_unlocked(-722216913))
	{
		return 2;
	}
	if (Global_1940311->f_242.f_1186 < 1)
	{
		return 3;
	}
	return 0;
}

char* func_445(int iParam0)
{
	return _create_var_string(2, "INVITES_FOOTER");
}

char* func_446()
{
	if (func_1103())
	{
		sVar0 = "NM_OPTION_DISABLED_INTRO_TOOLTIP";
	}
	else if (func_830() || Global_263042[&Global_1296859] > 2)
	{
		sVar0 = "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP";
	}
	else if (func_989())
	{
		sVar0 = "JOB_POSSE_MEMBERS_IN_JAIL_FOOTER";
	}
	else if (func_840())
	{
		sVar0 = "JOB_PLAYER_IN_JAIL_FOOTER";
	}
	else
	{
		sVar0 = "MATCHMAKING_FOOTER";
	}
	return _create_var_string(2, sVar0);
}

int func_447()
{
	if (func_419())
	{
		return 8;
	}
	if (!_unlock_is_unlocked(1349034126))
	{
		return 2;
	}
	if (func_1005())
	{
		return 0;
	}
	if (!func_830())
	{
		return 5;
	}
	if (func_1106(255))
	{
		return 4;
	}
	switch (Global_524288->f_40400)
	{
		case 1520184724:
			return 7;
	}
	if (func_1107() == 2)
	{
		return 6;
	}
	return 0;
}

char* func_448(int iParam0)
{
	switch (iParam0)
	{
		case 3:
			return _create_var_string(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
		case 1:
		case 2:
		case 4:
		case 5:
		case 6:
		case 7:
			return _create_var_string(2, "NET_STABLES_UGC_DISABLED_FOOTER");
		case 8:
			return _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
		default:
			break;
	}
	return _create_var_string(2, "STABLES_FOOTER");
}

int func_449()
{
	if (func_1105(16))
	{
		return 1;
	}
	if (!_unlock_is_unlocked(199773012))
	{
		return 2;
	}
	return 0;
}

char* func_450(int iParam0)
{
	return _create_var_string(2, "OPTIONS_FOOTER");
}

int func_451()
{
	if (func_419())
	{
		return 1;
	}
	return 0;
}

char* func_452(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_var_string(2, "EMOTES_FOOTER");
		case 1:
			return _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
		default:
			break;
	}
	return "";
}

int func_453()
{
	if (func_1108(player_id(), &iVar0, &iVar1, 1))
	{
		if (iVar0 != -1)
		{
			if (iVar1 != Global_1298536[player_id()])
			{
				return 3;
			}
		}
	}
	iVar2 = get_player_index();
	if (iVar2 != 255)
	{
		iVar3 = _0x901e0dc25080c8b9(iVar2);
		if (_0xd6f6acf4392187fb(iVar3))
		{
			if (_0x0f99f6436528a089(iVar3))
			{
				if (_0x4be6c13a45cca8ec(iVar3) != iVar2)
				{
					return 1;
				}
			}
		}
	}
	if (func_383(player_id(), 1) == -1)
	{
		return 2;
	}
	return 0;
}

char* func_454(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NET_MOONSHINE_INVITE_TO_SHACK_FOOTER";
		case 1:
			return "NET_MOONSHINE_INVITE_TO_SHACK_LEADER_ONLY_FOOTER";
		case 2:
			return "NET_MOONSHINE_INVITE_TO_SHACK_NO_SHACK_FOOTER";
		case 3:
			return "NET_MOONSHINE_INVITE_TO_SHACK_YOUR_SHACK_FOOTER";
		default:
			break;
	}
	return "";
}

int func_455()
{
	if (func_1109(512))
	{
		return 4;
	}
	iVar0 = get_player_index();
	if (iVar0 != 255)
	{
		iVar1 = _0x901e0dc25080c8b9(iVar0);
		if (_0xd6f6acf4392187fb(iVar1))
		{
			if (_0x0f99f6436528a089(iVar1))
			{
				if (_0x4be6c13a45cca8ec(iVar1) != iVar0)
				{
					return 2;
				}
			}
		}
	}
	if (!func_1110(6))
	{
		return 1;
	}
	if ((func_830() || func_831()) || func_1112(func_1111()))
	{
		return 3;
	}
	return 0;
}

char* func_456(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MOONSHINE_FOOTER";
		case 1:
			return "MOONSHINE_FOOTER_INTRO";
		case 2:
			return "MOONSHINE_FOOTER_MEMBER";
		case 3:
			return "MOONSHINE_FOOTER_CONTENT";
		case 4:
			return "MOONSHINE_FOOTER_LOCKED";
		default:
			break;
	}
	return "";
}

char* func_457(var uParam0)
{
	iVar0 = _databinding_read_data_int_from_parent(uParam0, func_58(89));
	iVar1 = Global_1296859->f_21;
	iVar2 = (iVar0 - iVar1);
	sVar3 = func_1113(iVar2);
	if (func_1114())
	{
		return _create_var_string(2, "MI_WANTED_TT", func_1115());
	}
	if (iVar2 > 0)
	{
		return _create_var_string(10, "INV_EXPIRE", sVar3);
	}
	return "";
}

char* func_458()
{
	sVar0 = "NM_GC_FOOTER_CAMP_CHANGE";
	if (func_332(_0x96fd694fe5be55dc(1433015236)) == 15)
	{
		if (func_860(1))
		{
			sVar0 = "NET_CAMP_SET_LOC_FOLLOWER_DEAD";
		}
		else if (func_858())
		{
			sVar0 = "NET_CAMP_SET_LOC_CONTENT_LOCK";
		}
	}
	else if (func_34(Global_1940311->f_1433.f_157.f_2.f_29) && func_34(Global_1296859->f_1))
	{
		if (!network_are_handles_the_same(&(Global_1940311->f_1433.f_157.f_2.f_29), &(Global_1296859->f_1)))
		{
			sVar0 = "NM_MW_POSSE_MEMBER_GENERIC_DISABLE";
		}
	}
	else if (func_77(player_id()) != -1 && func_425(func_77(player_id()), 512))
	{
		sVar0 = "NET_CAMP_SET_LOC_FOLLOWER_DEAD";
	}
	return _create_var_string(2, sVar0);
}

char* func_459()
{
	if (network_are_handles_the_same(&(Global_1296859->f_1), &(Global_1940311->f_1433.f_157.f_2.f_29)))
	{
		if (Global_1940311->f_1433.f_157.f_2.f_4)
		{
			sVar0 = "NM_GC_FOOTER_STEP_TYPE_PERSISTENT";
		}
		else
		{
			sVar0 = "NM_GC_FOOTER_STEP_TYPE_TEMPORARY";
		}
	}
	else
	{
		sVar0 = "NM_MW_POSSE_MEMBER_GENERIC_DISABLE";
	}
	return _create_var_string(2, sVar0);
}

char* func_460()
{
	if ((func_688() && _0x149a2751ab66ac02(Global_1940311->f_1433.f_157.f_2.f_1) < _0x853b0fa4d8732c57(Global_1940311->f_1433.f_157.f_2.f_1)) && _0x7933754f260b428a(_0x4be6c13a45cca8ec(Global_1940311->f_1433.f_157.f_2.f_1)) <= 0)
	{
		return _create_var_string(2, "NM_MW_POSSE_JOIN_FOOTER");
	}
	return _create_var_string(2, "NM_MW_POSSE_JOIN_BLOCKED_FOOTER");
}

char* func_461()
{
	if (_0x424b17a7dc5c90bc(player_id()))
	{
		sVar0 = _create_var_string(2, "NM_MW_POSSE_LEAVE_L_LINK_FOOTER");
	}
	else
	{
		sVar0 = _create_var_string(2, "NM_MW_POSSE_LEAVE_M_LINK_FOOTER");
	}
	return _create_var_string(2, sVar0);
}

char* func_462(int iParam0)
{
	*iParam0 = 1105014447;
	if (!Global_1940311->f_1433.f_157.f_2.f_4)
	{
		sVar0 = _create_var_string(2, "NM_GC_FOOTER_NAME_CHANGE_TEMP");
	}
	else if (func_34(Global_1940311->f_1433.f_157.f_2.f_29) && network_are_handles_the_same(&(Global_1940311->f_1433.f_157.f_2.f_29), &(Global_1296859->f_1)))
	{
		if (func_99())
		{
			if (!_0x595f028698072dd9(-1) && is_orbis_version())
			{
				sVar0 = _create_var_string(2, "NM_GC_FOOTER_RESTRICT_ACCOUNT_P_NAME");
			}
			else if (!_ugc_has_privilege())
			{
				sVar0 = _create_var_string(2, "NM_GC_UGC_RESTRICT");
			}
			else
			{
				sVar0 = _create_var_string(2, "NM_GC_FOOTER_NAME_CHANGE");
			}
		}
		else
		{
			*iParam0 = 859817522;
			sVar0 = _create_var_string(2, "NM_GC_FOOTER_KEYBOARD_SERVICES_DOWN");
		}
	}
	else
	{
		sVar0 = _create_var_string(2, "NM_GC_FOOTER_NAME_CHANGE_MEMBER");
	}
	return sVar0;
}

char* func_463()
{
	if (_databinding_read_data_bool(Global_1940311->f_1433.f_1407.f_8.f_1))
	{
		sVar0 = _create_var_string(2, "NM_GW_KICK_FOOTER");
	}
	else
	{
		sVar0 = _create_var_string(2, "NM_GW_KICK_BLOCK_FOOTER");
	}
	return sVar0;
}

char* func_464()
{
	if (func_1103())
	{
		return _create_var_string(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	Var0 = { func_202() };
	if (!network_is_handle_valid(&Var0))
	{
		return "";
	}
	switch (func_839(&Var0))
	{
		case 1:
			return _create_var_string(2, "PLAYER_ENTRY_SESSION_INVITE_SENT");
		case 2:
			return _create_var_string(2, "PLAYER_ENTRY_SESSION_INVITE_ACCEPTED");
		case 3:
			return _create_var_string(2, "PLAYER_ENTRY_SESSION_INVITE_REJECTED");
		default:
			break;
	}
	return "";
}

char* func_465()
{
	if (func_1103())
	{
		return _create_var_string(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	return "";
}

char* func_466()
{
	if (func_1103())
	{
		return _create_var_string(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	return _create_var_string(2, "NM_PW_VIEW_ABILITY_LOADOUT_FOOTER");
}

char* func_467()
{
	if (func_1103())
	{
		return _create_var_string(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	return "";
}

char* func_468()
{
	sVar0 = "NW_PW_C_CANT_INVITE";
	if (!func_34(Global_1940311->f_1433.f_31))
	{
		return sVar0;
	}
	iVar1 = network_get_player_from_gamer_handle(&(Global_1940311->f_1433.f_31));
	if (!network_has_social_club_account())
	{
		sVar0 = "NM_PW_C_NO_SC_LOCAL";
	}
	else if (!func_1116(iVar1))
	{
		sVar0 = "NW_PW_C_NO_SC_REMOTE";
	}
	else if (!func_1117(player_id()))
	{
		sVar0 = "NM_PW_C_NO_ACTIVE";
	}
	else if (func_1118(iVar1))
	{
		sVar0 = "NW_PW_C_CURRENT_MEMBER";
	}
	else
	{
		sVar0 = "NM_PW_INVITE_TO_CREW_FOOTER";
	}
	return _create_var_string(2, sVar0);
}

char* func_469(int iParam0)
{
	bVar0 = false;
	if (Global_1896738->f_13.f_3)
	{
		bVar0 = func_98();
	}
	else
	{
		bVar0 = func_396(_0x901e0dc25080c8b9(player_id()));
	}
	switch (iParam0)
	{
		case 2042309940:
			if (!bVar0)
			{
				return _create_var_string(2, "NET_CAMP_SET_CAMP_SIZE_NEED_UPGRADE");
			}
			break;
	}
	return _create_var_string(2, "NET_CAMP_SET_CAMP_SIZE");
}

char* func_470()
{
	if (_0x424b17a7dc5c90bc(player_id()))
	{
		if (!func_600(16))
		{
			Var0 = { func_832(0) };
			if (func_1112(Var0))
			{
				if (Var0 == 6)
				{
					iVar2 = func_1119(player_id(), 0);
					if (iVar2 != -1)
					{
						if (func_1120(iVar2) == -785841056)
						{
							return _create_var_string(2, "NET_CAMP_SET_LOC_FAIL_POSSE_VERSUS");
						}
						else if (iVar2 == 1)
						{
							return _create_var_string(2, "NET_CAMP_SET_LOC_FAIL_CHALLENGE");
						}
						else
						{
							return _create_var_string(2, "NET_CAMP_SET_LOC_FAIL_EVENT");
						}
					}
				}
			}
		}
		else if (Global_1132288->f_2019 >= 6 && Global_1132288->f_2019 <= 12)
		{
			return _create_var_string(2, "NET_CAMP_ALREADY_REQUESTED_FOOTER");
		}
		else if (func_77(player_id()) != -1 && func_425(func_77(player_id()), 512))
		{
			return _create_var_string(2, "NET_CAMP_SET_LOC_FOLLOWER_DEAD");
		}
		else if (func_858())
		{
			return _create_var_string(2, "NET_CAMP_SET_LOC_CONTENT_LOCK");
		}
		else
		{
			return _create_var_string(2, "NET_CAMP_SET_CAMP_LOCATION_FOOTER");
		}
	}
	return _create_var_string(2, "NET_CAMP_SET_CAMP_LOCATION_FOOTER_MEMBER");
}

char* func_471(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return "NM_PLAYLIST_ADVERSARY_SMALL_FOOTER";
		case 3:
			return "NM_PLAYLIST_ADVERSARY_MEDIUM_FOOTER";
		case 4:
			return "NM_PLAYLIST_ADVERSARY_LARGE_FOOTER";
		case 5:
			return "NM_PLAYLIST_GUN_RUSH_TEAMS_FOOTER";
		case 6:
			return "NM_PLAYLIST_GUN_RUSH_FOOTER";
		case 7:
			return "NM_PLAYLIST_ELIMINATION_SMALL_FOOTER";
		case 8:
			return "NM_PLAYLIST_ELIMINATION_MEDIUM_FOOTER";
		case 9:
			return "NM_PLAYLIST_ELIMINATION_LARGE_FOOTER";
		case 0:
			return "NM_PLAYLIST_RACE_FOOTER";
		case 1:
			return "NM_PLAYLIST_FEATURED_001_FOOTER";
		case 10:
			return "NM_PLAYLIST_NOMINATED_FOOTER";
		case 12:
			return "NM_PLAYLIST_NOMINATED_MEDIUM_FOOTER";
		case 13:
			return "NM_PLAYLIST_NOMINATED_LARGE_FOOTER";
		case 15:
			return "NM_PLAYLIST_ORBIS_SERIES_1_FOOTER";
		case 16:
			return "NM_PLAYLIST_ORBIS_SERIES_2_FOOTER";
		case 17:
			return "NM_PLAYLIST_ORBIS_SERIES_3_FOOTER";
		case 19:
			return "NM_PLAYLIST_CAPTURE_FOOTER";
		case 18:
			return "NM_PLAYLIST_SHOOTOUT_FOOTER";
		default:
			break;
	}
	return "NM_PLAYLIST_FFA";
}

char* func_472(int iParam0, bool bParam1)
{
	if (!_unlock_is_unlocked(func_1121(iParam0)))
	{
		return _create_var_string(2, "NG_SERIES_LOCKED");
	}
	if (func_1122())
	{
		return _create_var_string(2, "JOB_LEADER_ONLY_FOOTER");
	}
	if (func_1114())
	{
		return _create_var_string(2, "MI_WANTED_TT", func_1115());
	}
	if (bParam1)
	{
		return _create_var_string(2, func_471(iParam0));
	}
	if (func_627())
	{
		return _create_var_string(2, "NM_PLAYLIST_FOOTER_UNAVAILABLE_MATCHMADE");
	}
	if (func_830())
	{
		return _create_var_string(2, "NM_PLAYLIST_FOOTER_UNAVAILABLE_UGC");
	}
	if (Global_1296859->f_14)
	{
		return _create_var_string(2, "NG_SIZE_LARGE_S");
	}
	return _create_var_string(2, "NG_SERIES_LOCKED");
}

char* func_473(bool bParam0)
{
	if (func_1122())
	{
		return _create_var_string(2, "JOB_LEADER_ONLY_FOOTER");
	}
	if (func_1114())
	{
		return _create_var_string(2, "MI_WANTED_TT", func_1115());
	}
	if (bParam0)
	{
		return _create_var_string(2, "NM_PLAYLIST_STORY_MISSION_ON_CALL_FOOTER");
	}
	if (func_627())
	{
		return _create_var_string(2, "NM_PLAYLIST_FOOTER_UNAVAILABLE_MATCHMADE");
	}
	if (func_830())
	{
		return _create_var_string(2, "NM_PLAYLIST_FOOTER_UNAVAILABLE_UGC");
	}
	if (Global_1296859->f_14)
	{
		return _create_var_string(2, "NG_SIZE_LARGE_S");
	}
	if (!func_1123())
	{
		return _create_var_string(2, "NG_SERIES_STORY_LOCKED");
	}
	return _create_var_string(2, "NG_SERIES_LOCKED");
}

char* func_474(bool bParam0)
{
	if (func_1122())
	{
		return _create_var_string(2, "JOB_LEADER_ONLY_FOOTER");
	}
	if (func_1114())
	{
		return _create_var_string(2, "MI_WANTED_TT", func_1115());
	}
	if (bParam0)
	{
		return _create_var_string(2, "NM_PLAYLIST_SERIES_ON_CALL_FOOTER");
	}
	if (func_627())
	{
		return _create_var_string(2, "NM_PLAYLIST_FOOTER_UNAVAILABLE_MATCHMADE");
	}
	if (func_830())
	{
		return _create_var_string(2, "NM_PLAYLIST_FOOTER_UNAVAILABLE_UGC");
	}
	if (Global_1296859->f_14)
	{
		return _create_var_string(2, "NG_SIZE_LARGE_S");
	}
	if (!func_1123())
	{
		return _create_var_string(2, "NG_SERIES_STORY_LOCKED");
	}
	return _create_var_string(2, "NG_SERIES_LOCKED");
}

char* func_475()
{
	if (func_1103())
	{
		return _create_var_string(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	else if (func_830())
	{
		return _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
	}
	else if ((((func_501(9) || func_501(10)) || func_501(11)) || func_501(12)) || func_501(13))
	{
		return _create_var_string(2, "HORSE_ACCESS_OVERRIDDEN_FOOTER");
	}
	return _create_var_string(2, "HORSE_ACCESS_FOOTER");
}

char* func_476()
{
	if (func_1103())
	{
		return _create_var_string(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	else if (func_830())
	{
		return _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
	}
	else if ((((func_501(19) || func_501(20)) || func_501(21)) || func_501(22)) || func_501(23))
	{
		return _create_var_string(2, "HORSE_ACCESS_OVERRIDDEN_FOOTER");
	}
	return _create_var_string(2, "CARGO_ACCESS_FOOTER");
}

char* func_477()
{
	if (func_1103())
	{
		return _create_var_string(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
	}
	else if (func_830())
	{
		return _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
	}
	else if ((((func_501(9) || func_501(10)) || func_501(11)) || func_501(12)) || func_501(13))
	{
		return _create_var_string(2, "VEHICLE_ACCESS_OVERRIDDEN_FOOTER");
	}
	return _create_var_string(2, "VEHICLE_ACCESS_FOOTER");
}

int func_478()
{
	if (func_1124())
	{
		return 1;
	}
	if (func_1125(255))
	{
		return 2;
	}
	if (is_ped_dead_or_dying(player_ped_id(), true))
	{
		return 3;
	}
	if (func_840())
	{
		return 4;
	}
	if (func_1018())
	{
		return 5;
	}
	if (func_1103())
	{
		return 6;
	}
	if (func_830())
	{
		return 7;
	}
	return 0;
}

char* func_479(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return _create_var_string(2, "NM_FR_KILL_YOURSELF_FOOTER_DISABLED_CONTENT");
		case 2:
			return _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
		case 3:
			return "";
		case 4:
			return _create_var_string(2, "NM_FR_KILL_YOURSELF_FOOTER_DISABLED_JAIL");
		case 5:
			return _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
		case 6:
			return _create_var_string(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP");
		case 7:
			return _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
	}
	return "";
}

int func_480()
{
	if (!_0xccf71fcfa0070b1a())
	{
		return 1;
	}
	else if (func_830())
	{
		return 2;
	}
	return 0;
}

char* func_481(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_var_string(2, "NM_FR_VOICE_CHAT_FILTER_FOOTER");
		case 1:
			return "";
		case 2:
			return _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
		default:
			break;
	}
	return "";
}

char* func_482()
{
	iVar0 = func_495(&(Global_1296859->f_154[&Global_1296859]), 0);
	switch (iVar0)
	{
		case 0:
		case 1:
			return _create_var_string(2, "HOSTILITY_LOW_FOOTER");
		case 2:
		case 3:
			return _create_var_string(2, "HOSTILITY_MEDIUM_FOOTER");
		case 4:
		case 5:
		case 6:
			return _create_var_string(2, "HOSTILITY_HIGH_FOOTER");
		default:
			return _create_var_string(2, "HOSTILITY_HIGH_FOOTER");
	}
	return "";
}

char* func_483(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "NM_FR_EMOTES_TYPE_ACTION_FOOTER";
			break;
		case 1:
			sVar0 = "NM_FR_EMOTES_TYPE_ANTAGONIZE_FOOTER";
			break;
		case 2:
			sVar0 = "NM_FR_EMOTES_TYPE_REACTION_FOOTER";
			break;
		case 3:
			sVar0 = "NM_FR_EMOTES_TYPE_GREET_FOOTER";
			break;
		default:
			return _create_var_string(2, "NM_FR_EMOTES_TYPE_NONE_FOOTER");
	}
	func_1126(iParam0, &iVar1);
	if (!func_586(iVar1, 0))
	{
		return _create_var_string(2, "NM_FR_EMOTES_TYPE_NONE_FOOTER");
	}
	return _create_var_string(10, sVar0, func_1128(func_1127(iVar1), 109029619));
}

char* func_484()
{
	return _create_var_string(2, "NM_FR_EMOTES_TYPE_ONE_FOOTER");
}

char* func_485(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_var_string(2, "PLAYER_WALK_TYPES_DEFAULT_DESC");
		case 1:
			return _create_var_string(2, "PLAYER_WALK_TYPES_CASUAL_DESC");
		case 2:
			return _create_var_string(2, "PLAYER_WALK_TYPES_CRAZY_DESC");
		case 3:
			return _create_var_string(2, "PLAYER_WALK_TYPES_FLAMBOYANT_DESC");
		case 4:
			return _create_var_string(2, "PLAYER_WALK_TYPES_GUNSLINGER_DESC");
		case 5:
			return _create_var_string(2, "PLAYER_WALK_TYPES_REFINED_DESC");
		case 6:
			return _create_var_string(2, "PLAYER_WALK_TYPES_SILENT_DESC");
		case 7:
			return _create_var_string(2, "PLAYER_WALK_TYPES_GREENHORN_DESC");
		case 8:
			return _create_var_string(2, "PLAYER_WALK_TYPES_VETERAN_DESC");
		case 9:
			return _create_var_string(2, "PLAYER_WALK_TYPES_EASYRIDER_DESC");
		case 10:
			return _create_var_string(2, "PLAYER_WALK_TYPES_DRUNK_DESC");
		case 11:
			return _create_var_string(2, "PLAYER_WALK_TYPES_INQUISITIVE_DESC");
		default:
			break;
	}
	return "";
}

int func_486()
{
	if (func_831() || func_627())
	{
		return 1;
	}
	if (func_419())
	{
		return 2;
	}
	return 0;
}

char* func_487(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_var_string(2, "PLAYER_WALK_STYLES_FOOTER");
		case 1:
			return _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
		case 2:
			return _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
		default:
			break;
	}
	return "";
}

char* func_488(int iParam0)
{
	if (iParam0 == -1)
	{
		return "";
	}
	Var0.f_38 = 7;
	Var0.f_91 = -1;
	_copy_memory(&Var0, &(Global_1940311->f_1433.f_157.f_2), 95);
	if ((network_is_handle_valid(&(Var0.f_29)) && network_is_handle_valid(&(Global_1296859->f_1))) && network_are_handles_the_same(&(Var0.f_29), &(Global_1296859->f_1)))
	{
		if (Var0.f_3)
		{
			_0xc08aff658b2e51da(&iVar95);
			if (iVar95 != Var0.f_2)
			{
				return _create_var_string(2, "NM_POSSE_REFORM_TOOLTIP");
			}
		}
		else if (_0xd6f6acf4392187fb(Var0.f_1) && !_0x0f99f6436528a089(Var0.f_1))
		{
			return _create_var_string(2, "NM_POSSE_REFORM_TOOLTIP");
		}
	}
	if (!func_396(Global_1296859->f_15) || !_0x424b17a7dc5c90bc(player_id()))
	{
		return _create_var_string(2, "POSSE_VERSUS_LEADER_FAIL_FOOTER");
	}
	if (((&Global_1108365->f_935.f_5[iParam0] - Global_1296859->f_21) < 180 && func_1129(iParam0)) && func_1130(iParam0))
	{
		iVar96 = (180 - (&Global_1108365->f_935.f_5[iParam0] - Global_1296859->f_21));
		return _create_var_string(10, "POSSE_VERSUS_TIMER_FOOTER", func_1128(func_1131(iVar96 * 1000, 0, 0, 0, 0, 0), 109029619));
	}
	switch (iParam0)
	{
		case 4:
			if (!func_1132(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 2)
			{
				sVar100 = "PV_TEAM_INFIGHTING_TOO_FEW";
			}
			else if (!func_1133(1, 2))
			{
				sVar100 = "PV_TEAM_INFIGHTING_TOO_FEW_AVAILABLE";
			}
			else if (func_1134(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (func_1135())
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (!func_1136())
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (!get_safe_coord_for_ped(Global_35, false, &uVar97, 16))
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (func_1137(player_id(), 0, 1))
			{
				sVar100 = "PV_GENERIC_FAIL_PASSIVE";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_INFIGHTING_FOOTER";
			}
			break;
		case 5:
			if (!func_1132(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 1)
			{
				sVar100 = "PV_INFIGHTING_TOO_FEW";
			}
			else if (!func_1133(1, 2))
			{
				sVar100 = "PV_INFIGHTING_TOO_FEW_AVAILABLE";
			}
			else if (func_1134(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (func_1135())
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (!func_1136())
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (!get_safe_coord_for_ped(Global_35, false, &uVar97, 16))
			{
				sVar100 = "PV_TEAM_INFIGHTING_CANNOT_FIGHT_HERE";
			}
			else if (func_1137(player_id(), 0, 1))
			{
				sVar100 = "PV_GENERIC_FAIL_PASSIVE";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_FFA_INFIGHTING_FOOTER";
			}
			break;
		case 8:
			if (!func_1132(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 1)
			{
				sVar100 = "PV_BIGGEST_FISH_TOO_FEW";
			}
			else if (!func_1133(1, 2))
			{
				sVar100 = "PV_BIGGEST_FISH_TOO_FEW_AVAILABLE";
			}
			else if (func_1134(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (func_1138(&(Global_1108365->f_935), 1))
			{
				sVar100 = "PV_BIGGEST_FISH_FAIL_NO_RODS";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_BIGGEST_FISH_FOOTER";
			}
			break;
		case 9:
			if (!func_1132(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 1)
			{
				sVar100 = "PV_FLYING_BIRD_TOO_FEW";
			}
			else if (!func_1133(1, 2))
			{
				sVar100 = "PV_FLYING_BIRD_TOO_FEW_AVAILABLE";
			}
			else if (func_1134(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_FLYING_BIRD_FOOTER";
			}
			break;
		case 10:
			if (!func_1132(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 1)
			{
				sVar100 = "PV_HERB_HUNT_TOO_FEW";
			}
			else if (!func_1133(1, 2))
			{
				sVar100 = "PV_HERB_HUNT_TOO_FEW_AVAILABLE";
			}
			else if (func_1134(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_HERB_HUNT_FOOTER";
			}
			break;
		case 7:
			if (!func_1132(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 1)
			{
				sVar100 = "PV_HTPL_TOO_FEW";
			}
			else if (!func_1133(1, 2))
			{
				sVar100 = "PV_HTPL_TOO_FEW_AVAILABLE";
			}
			else if (_0x2f7eb8b6f6afe79c(1) < 2)
			{
				sVar100 = "PV_FAIL_NO_OTHER_POSSE_FOOTER";
			}
			else if (func_1134(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (!func_1139(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (func_1137(player_id(), 0, 1))
			{
				sVar100 = "PV_GENERIC_FAIL_PASSIVE";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_HUNT_THE_POSSE_LEADER_DESC";
			}
			break;
		case 6:
			if (!func_1132(iParam0))
			{
				sVar100 = "PV_GENERIC_FAIL_CANT_LAUNCH_FOOTER";
			}
			else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) <= 1)
			{
				sVar100 = "PV_IMPROPMTU_RACE_TOO_FEW";
			}
			else if (!func_1133(1, 2))
			{
				sVar100 = "PV_IMPROPMTU_RACE_TOO_FEW_AVAILABLE";
			}
			else if (func_1134(player_id(), 1, 0, 1))
			{
				sVar100 = "PV_FAIL_WANTED_FOOTER";
			}
			else if (func_713(_get_waypoint_coords()))
			{
				sVar100 = "POSSE_VERSUS_RACE_NO_WAYPOINT_FOOTER";
			}
			else if (Global_1108365->f_935.f_20 && func_1140(&(Global_1108365->f_935.f_36)) < 1000)
			{
				sVar100 = "POSSE_VERSUS_RACE_TOO_CLOSE_FOOTER";
			}
			else if (func_713(Global_1108365->f_935.f_24) && func_1140(&(Global_1108365->f_935.f_36)) < 1000)
			{
				sVar100 = "POSSE_VERSUS_RACE_BAD_POSITION_FOOTER";
			}
			else
			{
				sVar100 = "POSSE_VERSUS_RACE_FOOTER";
			}
			break;
		default:
			sVar100 = "NET_POSSE_VERSUS_CONTENT_TYPE_FOOTER_INVALID";
			break;
	}
	return _create_var_string(2, sVar100);
}

char* func_489(int iParam0)
{
	return _create_var_string(2, "MINIGAME_PLAYERS_FOOTER");
}

char* func_490()
{
	if (func_768())
	{
		return _create_var_string(2, "INVITE_PLAYERS_TO_MINIGAME_FOOTER");
	}
	return _create_var_string(2, "INVITE_PLAYERS_PUBLIC_NOT_ALLOWED_FOOTER");
}

char* func_491()
{
	if (func_1141(_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id()))))
	{
		return _create_var_string(2, "GFH_REPLAY_BOUNTY_JAILED_MEMBER");
	}
	else if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > 4)
	{
		return _create_var_string(2, "GFH_HELP_POSSE_TOO_LARGE_TO_ACCEPT_LEGENDARY_BOUNTY");
	}
	else if (!_databinding_read_data_bool_from_parent(Global_1120070->f_8495.f_5, "dynamic_list_item_enabled") && Global_1120070->f_8495.f_3 == 1)
	{
		return _create_var_string(2, "GFH_REPLAY_BOUNTY_NOT_AVAILABLE");
	}
	else
	{
		return _create_var_string(2, "GFH_REPLAY_BOUNTY_AVAILABLE");
	}
	return _create_var_string(2, "GFH_REPLAY_BOUNTY_AVAILABLE");
}

void func_492(int iParam0)
{
	func_1142(iParam0);
	func_1143(iParam0);
}

void func_493(int iParam0, int iParam1)
{
	if (func_977())
	{
		func_36(iParam0, 1);
	}
	else
	{
		func_1144(iParam1, iParam0, 1);
	}
}

bool func_494(struct<7> Param0, char* sParam7)
{
	if (!func_34(Param0))
	{
		return false;
	}
	_copy_memory(&(Global_1940311->f_1433.f_31), &Param0, 7);
	Global_1940311->f_1433.f_31.f_7 = { func_322(sParam7) };
	return true;
}

int func_495(int iParam0, bool bParam1)
{
	iVar0 = floor(func_414(iParam0, bParam1));
	if (bParam1)
	{
		iVar3 = iParam0;
		if (iVar3 < 0 || iVar3 >= 32)
		{
			iVar2 = 0;
		}
		else
		{
			iVar2 = floor((*Global_1100469)[iVar3]->f_18);
		}
		if (iVar2 > iVar0)
		{
			iVar1 = iVar2;
		}
		else
		{
			iVar1 = iVar0;
		}
	}
	else
	{
		iVar1 = iVar0;
	}
	if (iVar1 < Global_1901947->f_716.f_31)
	{
		return 0;
	}
	if (iVar1 < Global_1901947->f_716.f_32)
	{
		return 1;
	}
	if (iVar1 < Global_1901947->f_716.f_33)
	{
		return 2;
	}
	if (iVar1 < Global_1901947->f_716.f_34)
	{
		return 3;
	}
	if (iVar1 < Global_1901947->f_716.f_35)
	{
		return 4;
	}
	if (iVar1 < Global_1901947->f_716.f_36)
	{
		return 5;
	}
	return 6;
}

int func_496(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1196426011;
		case 1:
			return 1196426011;
		case 2:
			return 1196426011;
		default:
			break;
	}
	return 1196426011;
}

int func_497(bool bParam0)
{
	iVar0 = func_495(&(Global_1296859->f_154[&Global_1296859]), 0);
	switch (iVar0)
	{
		case 0:
		case 1:
			iVar1 = 1105014447;
			return iVar1;
		case 2:
		case 3:
			if (bParam0)
			{
				iVar1 = -1236056262;
			}
			else
			{
				iVar1 = 1105014447;
			}
			return iVar1;
		case 4:
		case 5:
		case 6:
			if (bParam0)
			{
				iVar1 = -437407570;
			}
			else
			{
				iVar1 = 859817522;
			}
			return iVar1;
			return 1105014447;
	}
	return 1105014447;
}

char* func_498()
{
	iVar0 = func_495(&(Global_1296859->f_154[&Global_1296859]), 0);
	switch (iVar0)
	{
		case 0:
		case 1:
			return _create_var_string(2, "HOSTILITY_LOW");
		case 2:
		case 3:
			return _create_var_string(2, "HOSTILITY_MEDIUM");
		case 4:
		case 5:
		case 6:
			return _create_var_string(2, "HOSTILITY_HIGH");
		default:
			return _create_var_string(2, "HOSTILITY_HIGH");
	}
	return "";
}

bool func_499(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		if (iParam0 == 0)
		{
			return false;
		}
	}
	_0xc08aff658b2e51da(&iVar0);
	if (iVar0 == iParam0)
	{
		uParam1->f_1 = Global_1296859->f_15;
	}
	uParam1->f_2 = iParam0;
	uParam1->f_3 = 1;
	*uParam1 = 1;
	uParam1->f_4 = 1;
	if (!func_647(uParam1))
	{
		return false;
	}
	return true;
}

bool func_500()
{
	if ((((((((((((((func_501(9) || func_501(10)) || func_501(11)) || func_501(12)) || func_501(13)) || func_501(14)) || func_501(15)) || func_501(16)) || func_501(17)) || func_501(18)) || func_501(19)) || func_501(20)) || func_501(21)) || func_501(22)) || func_501(23))
	{
		return true;
	}
	return false;
}

bool func_501(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	return is_bit_set(&(Global_1904087->f_496[iVar0]), iVar1);
}

int func_502()
{
	iVar0 = 0;
	if (Global_17411.f_55.f_61.f_582 & 2 != 0)
	{
		iVar0 = 2;
	}
	if (Global_17411.f_55.f_61.f_582 & 4 != 0)
	{
		iVar0 = 3;
	}
	if (Global_17411.f_55.f_61.f_582 & 8 != 0)
	{
		iVar0 = 4;
	}
	if (Global_17411.f_55.f_61.f_582 & 16 != 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

int func_503()
{
	iVar0 = 0;
	if (Global_17411.f_55.f_61.f_582 & 524288 != 0)
	{
		iVar0 = 2;
	}
	if (Global_17411.f_55.f_61.f_582 & 1048576 != 0)
	{
		iVar0 = 3;
	}
	if (Global_17411.f_55.f_61.f_582 & 2097152 != 0)
	{
		iVar0 = 4;
	}
	if (Global_17411.f_55.f_61.f_582 & 4194304 != 0)
	{
		iVar0 = 1;
	}
	return iVar0;
}

bool func_504(char* sParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	*iParam1 = _0x80d78bdc9d88ef07(func_540(bParam4), sParam0, iParam3, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

struct<4> func_505(bool bParam0, bool bParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (!func_1145(&Var0, bParam0))
	{
	}
	if (!bParam2)
	{
		Var29 = { func_1146() };
		if (func_1147() && _0xb881ca836cc4b6d4(&Var29))
		{
			Var0 = { Var29 };
		}
		else if (!_0x4c543d5dfcd2dafd(&Var29, &Var0))
		{
			func_1148(&Var0, 0);
		}
	}
	if (iParam3 == -1)
	{
		iParam3 = func_755(player_id());
	}
	bVar33 = func_756(75);
	if (bVar33)
	{
		iParam3 = 3;
	}
	iVar34 = func_757(iParam3, 0);
	if (iVar34 != 3)
	{
		if (_0xb881ca836cc4b6d4(Global_17411.f_55.f_61[iVar34]))
		{
			Var0 = { *Global_17411.f_55.f_61[iVar34] };
		}
	}
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		if (!bParam1)
		{
			return func_733();
		}
		if (!func_1149(&Var0, 0))
		{
			Var35 = { func_1150(bParam0) };
		}
		else
		{
			Var35 = { Var0 };
		}
		return Var35;
	}
	return Var0;
}

bool func_506(int iParam0, int iParam1, int iParam2, int iParam3, var uParam4, bool bParam5)
{
	if (iParam3 == -1)
	{
		return false;
	}
	func_1151(uParam4);
	switch (iParam3)
	{
		case 0:
		case 1:
			if (!func_1152(iParam0, iParam1, iParam2, uParam4, bParam5))
			{
				return false;
			}
			break;
		case 2:
			if (!func_1153(iParam0, iParam1, iParam2, uParam4, bParam5))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_507(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	bVar0 = true;
	bVar1 = true;
	if (bParam6 || !bVar1)
	{
		bVar0 = false;
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam5]->f_2, bVar0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam5]->f_1, bVar0);
	if (!bVar0)
	{
		return;
	}
	bVar2 = _0x4c543d5dfcd2dafd(&uParam0, iParam4);
	bVar3 = func_724(iParam4, iParam4->f_10, 1);
	iVar4 = func_1154(*iParam4);
	bVar5 = iVar4 > Global_1296859->f_21;
	bVar6 = func_1155(*iParam4);
	bVar7 = func_1156(iParam4, -415648720, 0) > 0;
	bVar8 = false;
	if (bVar7)
	{
		bVar8 = true;
	}
	Var9 = { func_1157(iParam4, 1) };
	_databinding_write_data_string(Global_1940311->f_1433.f_1636.f_3[iParam5]->f_18, &Var9);
	func_1158(*iParam4, &(Global_1940311->f_1433.f_1636.f_3[iParam5]->f_32));
	bVar17 = !func_1159(func_162(), 0, 0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam5]->f_28, bVar17);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam5]->f_29, bVar17);
	iVar18 = func_1160(bVar3, bVar5, bVar2);
	iVar19 = 3;
	switch (iVar18)
	{
		case 0:
			func_1161(iParam5, iVar19, bVar8);
			break;
		case 1:
			func_1162(iParam5, iVar19, bVar8);
			break;
		case 2:
			func_1163(iParam5, bVar6);
			break;
		case 3:
			func_1164(iParam5, iVar4);
			break;
	}
}

int func_508(int iParam0)
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

char* func_509(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HORSE_GENDER_MALE";
		case 1:
			return "HORSE_GENDER_FEMALE";
		case 2:
			return "HORSE_GENDER_GELDED";
		default:
			break;
	}
	return "";
}

int func_510(var uParam0, int iParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	return func_1165(&uParam0, iParam4, bParam5, iParam6);
}

int func_511(int iParam0)
{
	if (iParam0 == 808655744)
	{
		return 779169510;
	}
	switch (iParam0)
	{
		case -450053710:
			return -311956671;
		case -1679658797:
			return -311956671;
		case 1792770814:
			return -311956671;
		case -1963397600:
			return -311956671;
		case -1250098797:
			return 356361174;
		case -318278790:
			return 356361174;
		case 55096099:
			return 356361174;
		case -458397856:
			return 356361174;
		case -444610976:
			return -1771663379;
		case 746627200:
			return -1771663379;
		case 705691988:
			return -1771663379;
		case 2130094044:
			return -311956671;
		case -1554827654:
			return -311956671;
		case -1029277326:
			return -311956671;
		case -1140650619:
			return -311956671;
		case -1999198818:
			return -2030355032;
		case -403470324:
			return -2030355032;
		case -925223936:
			return -2030355032;
		case -1547438906:
			return -1771663379;
		case -635239558:
			return -1771663379;
		case -2026265047:
			return -1771663379;
		case -586898625:
			return 918497150;
		case 937246805:
			return 918497150;
		case 1593035738:
			return -311956671;
		case 861505058:
			return -311956671;
		case 687445866:
			return -311956671;
		case 1705182311:
			return -1771663379;
		case -78273782:
			return -1771663379;
		case -819697512:
			return -1771663379;
		case -247265944:
			return 997958153;
		case -1265030920:
			return 997958153;
		case 2024948086:
			return 997958153;
		case 1696286663:
			return 997958153;
		case -1342159303:
			return -1651618152;
		case -1154406788:
			return -1651618152;
		case 2030804811:
			return 997958153;
		case 1230359523:
			return 997958153;
		case -1038436471:
			return 997958153;
		case 96930969:
			return 997958153;
		case -1180427609:
			return -1651618152;
		case 2119038574:
			return -1651618152;
		case 43825738:
			return -1651618152;
		case 2145697477:
			return 356361174;
		case -1261814606:
			return 356361174;
		case 107013696:
			return 356361174;
		case 1066034872:
			return 918497150;
		case 36009259:
			return 918497150;
		case -1599683008:
			return 918497150;
		case -1693870200:
			return 918497150;
		case 1072019803:
			return 997958153;
		case 1074477367:
			return 997958153;
		case -85890205:
			return 997958153;
		case -727455979:
			return 997958153;
		case -1667789645:
			return 997958153;
		case -1924405794:
			return 356361174;
		case 1861665605:
			return 356361174;
		case -526169133:
			return 356361174;
		case 2120708491:
			return 356361174;
		case 900144280:
			return 356361174;
		case 1133837220:
			return -1651618152;
		case 1702024301:
			return -1651618152;
		case -1604180548:
			return -1651618152;
		case -683592019:
			return -1651618152;
		case 337109765:
			return -1651618152;
		case -619132373:
			return -1651618152;
		case 1544366970:
			return -1651618152;
		case -1441144351:
			return -1651618152;
		case -1717674545:
			return -1651618152;
		case 1825358734:
			return -1651618152;
		case 1138427579:
			return -1651618152;
		case -1720251851:
			return -1651618152;
		case 506887890:
			return -1651618152;
		case 766293155:
			return -1651618152;
		case 2147082926:
			return -1651618152;
		case -390136947:
			return -1651618152;
		case 1104566530:
			return -1651618152;
		case -1142861801:
			return -1651618152;
		case -417416199:
			return -1651618152;
		case -1460773772:
			return -1651618152;
		case 1476007840:
			return -1651618152;
		case -1616287563:
			return -1651618152;
		case -127412252:
			return -1651618152;
		case -1881155818:
			return -1651618152;
		case -955237712:
			return -1651618152;
		case -647020346:
			return -1651618152;
		case -1846319726:
			return -1651618152;
		case 1007570567:
			return -1651618152;
		case 1029339151:
			return -1651618152;
		case -1424767799:
			return -1651618152;
		case -217135948:
			return -1651618152;
		case -156439156:
			return -1651618152;
		case 1344011125:
			return -1651618152;
		case 1772321403:
			return 1090011026;
		case -1230516683:
			return 1090011026;
		case 594040097:
			return 1090011026;
		case 1883159941:
			return 356361174;
		case -1028075925:
			return -311956671;
		case 84224102:
			return -2030355032;
		case 1496579364:
			return -2030355032;
		case -1896838685:
			return -1771663379;
		case -420599285:
			return -1651618152;
		case 478986344:
			return -1651618152;
		case 917402668:
			return 997958153;
		case -914712122:
			return 356361174;
		case -598917269:
			return -311956671;
		default:
			break;
	}
	return 779169510;
}

int func_512(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return 0;
	}
	iVar0 = get_default_attribute_rank(iParam0, func_1166());
	return iVar0;
}

int func_513(int iParam0, int iParam1, int iParam2)
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

int func_514(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return 0;
	}
	iVar0 = get_default_attribute_rank(iParam0, func_1167());
	return iVar0;
}

void func_515(var uParam0, var uParam1, var uParam2)
{
	if (func_744(uParam0))
	{
		Var0.f_9 = -1591664384;
		if (func_1168(*uParam0, -415648720, &Var0, 1, -1))
		{
			if (func_586(Var0.f_4, 0))
			{
				Var14.f_1 = 20;
				if (_item_database_fillout_item_effects_ids(Var0.f_4, &Var14) && Var14 > 0)
				{
					iVar43 = 0;
					while (iVar43 < Var14)
					{
						if (_item_database_fillout_item_effects_id_info(&(Var14.f_1[iVar43]), &vVar36))
						{
							if (vVar36.y == -1620444701)
							{
								*uParam1 = (*uParam1 + vVar36.z);
							}
							else if (vVar36.y == 2086291460)
							{
								*uParam2 = (*uParam2 + vVar36.z);
							}
						}
						iVar43++;
					}
				}
			}
			iVar44 = func_510(Var0, 986998820, 0, -1);
			if (func_586(iVar44, 0))
			{
				Var45.f_1 = 20;
				if (_item_database_fillout_item_effects_ids(iVar44, &Var45) && Var45 > 0)
				{
					iVar74 = 0;
					while (iVar74 < Var45)
					{
						if (_item_database_fillout_item_effects_id_info(&(Var45.f_1[iVar74]), &vVar67))
						{
							if (vVar67.y == -1620444701)
							{
								*uParam1 = (*uParam1 + vVar67.z);
							}
							else if (vVar67.y == 2086291460)
							{
								*uParam2 = (*uParam2 + vVar67.z);
							}
						}
						iVar74++;
					}
				}
			}
		}
	}
}

int func_516(int iParam0)
{
	iVar0 = 1;
	switch (func_1169(iParam0))
	{
		case 0:
		case 1:
			iVar0 = 0;
			break;
		case 2:
		case 3:
			iVar0 = 1;
			break;
		case 4:
		case 5:
			iVar0 = 2;
			break;
		case 6:
		case 7:
		case 8:
		case 9:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

char* func_517(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "HORSE_HANDLING_HEAVY";
		case 1:
			return "HORSE_HANDLING_STANDARD";
		case 2:
			return "HORSE_HANDLING_RACE";
		case 3:
			return "HORSE_HANDLING_ELITE";
		default:
			break;
	}
	return "";
}

char[] func_518(int iParam0)
{
	StringCopy(&cVar0, func_1170(iParam0), 64);
	StringConCat(&cVar0, "_BREED", 64);
	return func_641(&cVar0);
}

char* func_519(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 997958153:
			return "HORSE_CLASS_RIDING";
		case 918497150:
			return "HORSE_CLASS_DRAFT";
		case 356361174:
			return "HORSE_CLASS_RACE";
		case -1771663379:
			return "HORSE_CLASS_WAR";
		case -311956671:
			return "HORSE_CLASS_WORK";
		case -1651618152:
			return func_1171(iParam1);
		case -2030355032:
			return "HORSE_CLASS_SUPERIOR";
		case 1090011026:
			return "HORSE_CLASS_OTHER";
		default:
			break;
	}
	return "";
}

char* func_520(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
			return "COAT_OVERO";
		case 1432602132:
			return "COAT_TOB";
		case 92296905:
			return "COAT_SPLASHWHITE";
		case -842044823:
			return "COAT_GREYOVERO";
		case 1371398552:
			return "COAT_BLACK";
		case -745453539:
			return "COAT_BUCKSKIN";
		case 1583029039:
			return "COAT_PALDAP";
		case -783061276:
			return "COAT_SILVERTAILBUCKSKIN";
		case -1322521536:
			return "COAT_DARKBAY";
		case 1100711204:
			return "COAT_PERLINO";
		case 728055838:
			return "COAT_ROSEGREY";
		case -1782334639:
			return "COAT_BLANKET";
		case -1181052732:
			return "COAT_LEOPBLANKET";
		case -179102320:
			return "COAT_BRLEOP";
		case -1266863668:
			return "COAT_LEOP";
		case -2078767648:
			return "COAT_BLACK";
		case -852553462:
			return "COAT_ROSEGREYBAY";
		case -80004868:
			return "COAT_WHITE";
		case 1813208211:
			return "COAT_BAYR";
		case 836323303:
			return "COAT_STRAWR";
		case 153881023:
			return "COAT_IRONGREYR";
		case -1256798240:
			return "COAT_BLONDCH";
		case 2118089359:
			return "COAT_MEALYCH";
		case -1537586382:
			return "COAT_SOOTYBUCKSKIN";
		case 1440692746:
			return "COAT_SEALBR";
		case 697143532:
			return "COAT_CHOCR";
		case 281128160:
			return "COAT_FLAXCH";
		case 1854519167:
			return "COAT_PIETOB";
		case -1376299681:
			return "COAT_DAPDARKGREY";
		case -1955947684:
			return "COAT_BLACK";
		case 1361788230:
			return "COAT_CHPIN";
		case 1974379573:
			return "COAT_GREY";
		case 545109431:
			return "COAT_SILVERBAY";
		case 1275638003:
			return "COAT_AMBCHA";
		case 2083573823:
			return "COAT_SILVERDAPPINT";
		case 1235275977:
			return "COAT_BAY";
		case 892601357:
			return "COAT_BAYR";
		case 1224695367:
			return "COAT_FLAXCH";
		case 648301150:
			return "COAT_PAL";
		case -1597490733:
			return "COAT_GRULDUN";
		case 2000205872:
			return "COAT_WILDBAY";
		case -1428527735:
			return "COAT_TIGSTRBAY";
		case 170010697:
			return "COAT_BLUER";
		case -742726637:
			return "COAT_WHITER";
		case -1714171692:
			return "COAT_REVDAPR";
		case -103101636:
			return "COAT_DARKBAY";
		case -1999094324:
			return "COAT_LGREY";
		case 1724200240:
			return "COAT_SORREL";
		case 237935328:
			return "COAT_REDCH";
		case 120848852:
			return "COAT_BLACKRAB";
		case -868094182:
			return "COAT_CH";
		case -887362763:
			return "COAT_DAPBAY";
		case -847714194:
			return "COAT_REDR";
		case 1756765331:
			return "COAT_FLAXR";
		case -813071670:
			return "COAT_BLBAY";
		case -1900569233:
			return "COAT_DAPGREY";
		case 1688250187:
			return "COAT_BRINDLE";
		case -1262715164:
			return "COAT_BLACKCH";
		case 2010625508:
			return "COAT_REVDAPBLACK";
		case -136225010:
			return "COAT_DARKBAY";
		case -225011104:
			return "COAT_GOLD";
		case -1882436593:
			return "COAT_SILVER";
		case -757978903:
			return "COAT_REDR";
		case 1909854428:
			return "COAT_SORREL";
		case 1592694494:
			return "COAT_GRULDUN";
		case 981469777:
			return "COAT_SEALBR";
		case 1064693514:
			return "COAT_MEALYDAPBAY";
		case -1365665739:
			return "COAT_STEELGREY";
		case 1577022605:
			return "COAT_BLUEROANOVERO";
		case 381495209:
			return "COAT_DUN";
		case 3032834:
			return "COAT_BAYBRINDLE";
		case -1722101672:
			return "COAT_SORRELOVERO";
		case -189605757:
			return "COAT_BAYFRAMEOVERO";
		case 863391233:
			return "COAT_MARBLESABINO";
		case -952011226:
			return "COAT_PIE";
		case -356470463:
			return "COAT_WHITEBLAGDON";
		case -1750687713:
			return "COAT_PALBLAGDON";
		case -272192064:
			return "COAT_SKEWBALD";
		case 1935859332:
			return "COAT_SPLASHBAY";
		case -1898310680:
			return "COAT_SPLASHPIE";
		case 885568364:
			return "COAT_BLACK";
		case -1540355548:
			return "COAT_WHITE";
		case -601560591:
			return "COAT_CREM";
		case -370362766:
			return "COAT_GREY";
		case -1698261864:
			return "COAT_DAPROSEGREY";
		case -670301166:
			return "COAT_SILVER";
		case -302057902:
			return "COAT_BLACK";
		case 1257620801:
			return "COAT_SPECKLEDGREY";
		case 821735821:
			return "COAT_PIEROAN";
		case -769035812:
			return "COAT_ROSEGREY";
		case -1824684932:
			return "COAT_DAPBUCKSKIN";
		case 1589592948:
			return "COAT_SPOTTEDTRICOLOR";
		case -1331210307:
			return "COAT_NONE";
		case 122449722:
			return "COAT_NONE";
		case -1784502482:
			return "COAT_NONE";
		case -1943445834:
			return "COAT_LIGHTBUCKSKIN";
		case -635244104:
			return "COAT_BLACKSNO";
		case -1427377767:
			return "COAT_GREY";
		case -2055655009:
			return "COAT_REDCH";
		case -1293672675:
			return "COAT_LIVERCH";
		case -1179079660:
			return "COAT_SABLECHAMP";
		case 805526368:
			return "COAT_GOLDENDUN";
		case 1342496140:
			return "COAT_MAHBAY";
		case -126555855:
			return "COAT_RAVBLACK";
		case 294243421:
			return "COAT_CHEMGOLD";
		case -997197050:
			return "COAT_SEALBR";
		case -235714362:
			return "COAT_BLANKET";
		case -1678164:
			return "COAT_BLUER";
		case -977833913:
			return "COAT_BLACKRAB";
		case 1589164943:
			return "COAT_SILVERBAY";
		case -1087523615:
			return "COAT_SPLASHWHITE";
		case -496814209:
			return "COAT_BROWNR";
		case 2109055751:
			return "COAT_GREYSNOWCAPSPOTTED";
		case -776673611:
			return "COAT_GREYROANSABINO";
		case 1764402253:
			return "COAT_ALBINO";
		case -1417310078:
			return "COAT_SILVER";
		case 1096273915:
			return "COAT_GREYOVERO";
		case 772751081:
			return "COAT_SILVERDARKBAY";
		case -1140435723:
			return "COAT_SMOKYBLACK";
		case 2002524329:
			return "COAT_FLAXR";
		case 1151530184:
			return "COAT_LIGHTPALOMINO";
		case -1266525037:
			return "COAT_BLACK";
		case -2018137175:
			return "COAT_GOLDDAP";
		case -574151692:
			return "COAT_DARKBAYROAN";
		case 649786380:
			return "COAT_SILVERTAILBUCKSKIN";
		case -1921328920:
			return "COAT_BRLEOP";
		case -837607790:
			return "COAT_SABINO";
		case 370424594:
			return "COAT_FEWSPOTBUCKSKIN";
		case -364764277:
			return "COAT_MANGY";
		default:
			break;
	}
	return "";
}

void func_521(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = true;
	bVar1 = true;
	if (bParam7 || !bVar1)
	{
		bVar0 = false;
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam5]->f_2, bVar0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam5]->f_1, bVar0);
	if (!bVar0)
	{
		return;
	}
	bVar2 = _0x4c543d5dfcd2dafd(&uParam0, iParam4);
	bVar3 = func_724(iParam4, iParam4->f_10, 1);
	iVar4 = func_1154(*iParam4);
	bVar5 = iVar4 > Global_1296859->f_21;
	bVar6 = false;
	if (func_1156(iParam4, -415648720, 0) > 0)
	{
		bVar6 = true;
	}
	bVar7 = true;
	if (!bVar6)
	{
		bVar7 = false;
	}
	Var8 = { func_1172(iParam4, 0, 1) };
	_databinding_write_data_string(Global_1940311->f_1433.f_1636.f_3[iParam5]->f_18, &Var8);
	func_1158(*iParam4, &(Global_1940311->f_1433.f_1636.f_3[iParam5]->f_32));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam5]->f_28, false);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam5]->f_29, false);
	iVar16 = func_1160(bVar3, bVar5, bVar2);
	switch (iVar16)
	{
		case 0:
			func_1161(iParam5, iParam6, 0);
			break;
		case 1:
			func_1162(iParam5, iParam6, bVar7);
			break;
		case 2:
		case 3:
			if (bVar2)
			{
				func_1161(iParam5, iParam6, 0);
			}
			else
			{
				func_1162(iParam5, iParam6, bVar7);
			}
			break;
	}
}

struct<14> func_522(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6)
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
	if (iParam6 != 0)
	{
		Var0.f_8 = iParam6;
	}
	return Var0;
}

bool func_523(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	*iParam1 = _0x640f890c3e5a3ffd(func_540(bParam3), uParam0, iParam2);
	if (*iParam1 >= 0)
	{
		return true;
	}
	return false;
}

void func_524(var uParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5, bool bParam6)
{
	bVar0 = true;
	bVar1 = func_1174(func_1173(2, iParam4->f_11, 1));
	if (bParam6 || !bVar1)
	{
		bVar0 = false;
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam5]->f_2, bVar0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam5]->f_1, bVar0);
	if (!bVar0)
	{
		return;
	}
	bVar2 = false;
	iVar3 = _0xb9050a97594c8832(player_id());
	if (does_entity_exist(iVar3))
	{
		if (func_1175(iVar3, iParam4))
		{
			bVar2 = true;
		}
	}
	bVar6 = _0x4c543d5dfcd2dafd(&uParam0, iParam4);
	bVar7 = func_724(iParam4, iParam4->f_10, 1);
	iVar8 = func_1176(*iParam4);
	bVar9 = iVar8 > Global_1296859->f_21;
	bVar10 = func_1177(*iParam4);
	bVar11 = func_1178(&uParam0, iParam4, &iVar4);
	bVar12 = func_1179(&uParam0, iParam4, &iVar5);
	Var13 = { func_1157(iParam4, 1) };
	_databinding_write_data_string(Global_1940311->f_1433.f_2204.f_3[iParam5]->f_18, &Var13);
	func_1158(*iParam4, &(Global_1940311->f_1433.f_2204.f_3[iParam5]->f_32));
	bVar21 = !func_1159(func_162(), 0, 0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam5]->f_28, bVar21);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam5]->f_29, bVar21);
	iVar22 = func_1180(bVar7, bVar9, bVar6, bVar2);
	iVar23 = 3;
	switch (iVar22)
	{
		case 0:
			func_1181(iVar4, iVar5, 1, 1);
			func_1182(iParam5, iVar23, bVar11, bVar12);
			break;
		case 1:
			func_1181(iVar4, iVar5, 1, 0);
			func_1183(iParam5, iVar23, bVar11);
			break;
		case 2:
			func_1181(iVar4, iVar5, 1, 0);
			func_1184(iParam5, iVar23, bVar11);
			break;
		case 3:
			func_1185(iParam5, bVar10);
			break;
		case 4:
			func_1186(iParam5, iVar8);
			break;
	}
}

int func_525(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case -1698498246:
			return 1;
		case -1772561076:
			return 1;
		default:
			break;
	}
	return -1;
}

int func_526(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case -1698498246:
			return 0;
		case -1772561076:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_527(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return -1;
	}
	switch (iParam0)
	{
		case -1698498246:
			return 0;
		case -1772561076:
			return 1;
		default:
			break;
	}
	return -1;
}

char* func_528(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "VEHICLE_MAXSPEED_SLOW";
		case 1:
			return "VEHICLE_MAXSPEED_AVERAGE";
		case 2:
			return "VEHICLE_MAXSPEED_FAST";
		default:
			break;
	}
	return "";
}

char* func_529(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "VEHICLE_ACCELERATION_SLOW";
		case 1:
			return "VEHICLE_ACCELERATION_AVERAGE";
		case 2:
			return "VEHICLE_ACCELERATION_FAST";
		default:
			break;
	}
	return "";
}

char* func_530(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "VEHICLE_STEERING_SLUGGISH";
		case 1:
			return "VEHICLE_STEERING_AVERAGE";
		case 2:
			return "VEHICLE_STEERING_RESPONSIVE";
		default:
			break;
	}
	return "";
}

char* func_531(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case -1698498246:
			return "VEHICLE_TRADER_DESCRIPTION";
		case -1772561076:
			return "VEHICLE_BOUNTY_HUNTER_DESCRIPTION";
		default:
			break;
	}
	return "";
}

void func_532(var uParam0, var uParam1, var uParam2, int iParam3, int iParam4, int iParam5, int iParam6, bool bParam7)
{
	bVar0 = true;
	bVar1 = func_1174(func_1173(2, iParam4->f_11, 1));
	if (bParam7 || !bVar1)
	{
		bVar0 = false;
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam5]->f_2, bVar0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam5]->f_1, bVar0);
	if (!bVar0)
	{
		return;
	}
	bVar2 = false;
	iVar3 = _0xb9050a97594c8832(player_id());
	if (does_entity_exist(iVar3))
	{
		if (func_1175(iVar3, iParam4))
		{
			bVar2 = true;
		}
	}
	bVar8 = _0x4c543d5dfcd2dafd(&uParam0, iParam4);
	bVar9 = func_724(iParam4, iParam4->f_10, 1);
	iVar10 = func_1176(*iParam4);
	bVar11 = iVar10 > Global_1296859->f_21;
	bVar12 = func_1178(&uParam0, iParam4, &iVar6);
	bVar13 = func_1179(&uParam0, iParam4, &iVar7);
	Var14 = { func_1172(iParam4, 2, 1) };
	_databinding_write_data_string(Global_1940311->f_1433.f_2204.f_3[iParam5]->f_18, &Var14);
	func_1158(*iParam4, &(Global_1940311->f_1433.f_2204.f_3[iParam5]->f_32));
	iVar22 = func_1180(bVar9, bVar11, bVar8, bVar2);
	switch (iVar22)
	{
		case 0:
			iVar5 = func_1187(iVar6, iVar7, &iVar4, 1, 1);
			func_1182(iParam5, iParam6, bVar12, bVar13);
			break;
		case 1:
			iVar5 = func_1187(iVar6, iVar7, &iVar4, 1, 0);
			func_1183(iParam5, iParam6, bVar12);
			break;
		case 2:
			iVar5 = func_1187(iVar6, iVar7, &iVar4, 1, 0);
			func_1184(iParam5, iParam6, bVar12);
			break;
		case 3:
		case 4:
			if (bVar8)
			{
				iVar5 = func_1187(iVar6, iVar7, &iVar4, 0, 0);
				func_1183(iParam5, iParam6, 0);
			}
			else
			{
				iVar5 = func_1187(iVar6, iVar7, &iVar4, 1, 0);
				func_1184(iParam5, iParam6, bVar12);
			}
			break;
	}
	func_1188(iVar5, iVar4);
}

int func_533(int iParam0)
{
	switch (iParam0)
	{
		case -1896177107:
			return 4;
		case 2042309940:
			return 7;
		default:
			break;
	}
	return -1;
}

int func_534(int iParam0)
{
	iVar0 = func_1189(iParam0);
	if (!func_586(iVar0, 0))
	{
		return 0;
	}
	iVar1 = func_388(iVar0, 0, 59806960);
	return iVar1;
}

int func_535(int iParam0)
{
	if (!func_600(64))
	{
		return 0;
	}
	iVar0 = func_601(iParam0);
	if (!func_586(iVar0, 0))
	{
		return 0;
	}
	iVar1 = func_388(iVar0, 0, 59806960);
	return iVar1;
}

Vector3 func_536(int iParam0)
{
	if (iParam0 == 255)
	{
		return (*Global_1134390)[func_42()]->f_38;
	}
	return (*Global_1134390)[iParam0]->f_38;
}

bool func_537(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (func_619() == 0)
	{
		return func_1190(iParam0);
	}
	return iParam0 <= func_801();
}

bool func_538(int iParam0, int iParam1, var uParam2, int iParam3)
{
	iVar0 = iParam0;
	return iParam3 > iVar0;
	return false;
}

bool func_539(int iParam0, int iParam1, int iParam2)
{
	vVar0.x = iParam0;
	vVar0.f_1 = iParam2;
	iVar3 = 0;
	if (Global_1194053->f_492 != -1 && _0x424b17a7dc5c90bc(player_id()))
	{
		iVar3 = 1;
	}
	iVar4 = func_1191(vVar0);
	iVar5 = 0;
	while (iVar5 <= (iVar4 - 1))
	{
		vVar0.f_2 = func_1192(iVar5, vVar0);
		if (Global_1896738->f_13.f_3)
		{
			if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_12.f_23))
			{
				if (_0x81d7183e7a8eca72(Global_1896738->f_13.f_50.f_12.f_23) != -6116668 && func_1193(&vVar0))
				{
				}
				else
				{
					Jump @175; //curOff = 151
					if (func_1193(&vVar0) && iVar3 == 0)
					{
					}
					else if (func_1194(vVar0, &Global_1296859, iParam1, 0))
					{
						return true;
					}
				}
				iVar5++;
				return false;
			}
		}
	}
}

int func_540(bool bParam0)
{
	if (func_619() == -1)
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

struct<4> func_541(bool bParam0)
{
	iVar0 = func_540(bParam0);
	if (iVar0 == 2 || iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_8)))
		{
			Global_1293346->f_8 = { func_583(271701509, func_966(bParam0), 12999093, 0) };
		}
		return Global_1293346->f_8;
	}
	return func_583(271701509, func_966(bParam0), 12999093, 0);
}

int func_542(int iParam0)
{
	return func_582(iParam0);
}

Vector3 func_543(int iParam0)
{
	if (!func_1195(iParam0, &vVar0, 805880880, 0, 0, -401018458))
	{
		vVar0.f_1 = -546782298;
		vVar0.x = -1102349958;
	}
	return vVar0;
}

int func_544(int iParam0)
{
	iVar0 = func_1196(iParam0);
	if ((iVar0 != 0 && !func_1197(func_1196(iParam0))) && !func_1198(func_1196(iParam0)))
	{
		if (!func_1199(iVar0))
		{
			return -1994084079;
		}
	}
	return func_1200(iParam0);
}

void func_545(bool bParam0)
{
	if (!bParam0)
	{
		if (func_1201(6))
		{
			return;
		}
	}
	iVar0 = 1384535894;
	if (func_744(&(Global_1298378->f_62)))
	{
		iVar0 = 786277441;
	}
	iVar1 = func_612(iVar0, 0, 1, -1, 1);
	iVar2 = func_613(iVar0, iVar1, 1, 0, 0);
	iVar3 = func_613(iVar0, iVar1, 1, 0, 1);
	bVar4 = func_1202(iVar0, iVar1, 1);
	bVar5 = false;
	bVar6 = iVar2 != iVar3;
	if (iVar1 == -570078785 || (func_614(iVar1) && func_615(iVar0, 773203532, iVar1, 1, 1) > 0))
	{
		bVar5 = true;
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_8125.f_250, (bVar6 && !bVar5));
	_databinding_write_data_bool(Global_1940311->f_1433.f_8125.f_249, (bVar5 && bVar6));
	_databinding_write_data_int(Global_1940311->f_1433.f_8125.f_244, iVar3);
	_databinding_write_data_int(Global_1940311->f_1433.f_8125.f_245, iVar2);
	_databinding_write_data_bool(Global_1940311->f_1433.f_8125.f_248, bVar5);
	_databinding_write_data_bool(Global_1940311->f_1433.f_8125.f_247, bVar4);
	_databinding_write_data_bool(Global_1940311->f_1433.f_8125.f_246, true);
	if (iVar3 == 0)
	{
		func_70(_create_var_string(2, "NET_MOONSHINE_HAVE_SHACK_COUPON"), 1105014447);
	}
	else
	{
		func_141();
	}
}

int func_546(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = -1894112717;
			break;
		case 5:
			iVar0 = -1072345087;
			break;
		case 9:
			iVar0 = 1065052233;
			break;
		case 16:
			iVar0 = 1228822029;
			break;
		case 12:
			iVar0 = -1365950789;
			break;
		default:
			iVar0 = -1894112717;
			break;
	}
	return iVar0;
}

void func_547(int iParam0, int iParam1)
{
	if (iParam0 != 0)
	{
		iVar0 = iParam0;
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_54.f_102, func_1203(iVar0));
		_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_101, true);
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_101, false);
	}
	if (iParam1 != 0)
	{
		iVar0 = iParam1;
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_54.f_99, func_1203(iVar0));
		_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_98, true);
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_98, false);
	}
}

int func_548(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return -1831597626;
		case 3:
			return 265155422;
		case 4:
			return -474643995;
		case 5:
			return 585717850;
		case 6:
			return -1831597626;
		case 8:
			return -1831597626;
		case 9:
			return 585717850;
		case 0:
			return -2055321196;
		case 1:
			return -590680925;
		case 15:
			return 2073249693;
		case 16:
			return 2073249693;
		case 17:
			return 2073249693;
		case 18:
			return 1223020477;
		case 19:
			return 28771527;
		default:
			break;
	}
	return 0;
}

void func_549(int iParam0)
{
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1463.f_42, iParam0);
	if (iParam0 != 0)
	{
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_1463.f_43, -712210889);
	}
	else
	{
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_1463.f_43, 0);
	}
}

void func_550()
{
	Global_1940311->f_1433.f_157.f_264.f_90 = -1;
}

char* func_551()
{
	return "NS_OSK_ENTER_NAME_TITLE";
}

char* func_552()
{
	return "NS_OSK_ENTER_NAME_DESC";
}

int func_553(var uParam0)
{
	if (func_1204() == 2)
	{
		return 0;
	}
	_copy_memory(Global_1960073, uParam0, 51);
	func_1205(2);
	return 1;
}

void func_554(int iParam0)
{
	Global_1572864->f_3 = (Global_1572864->f_3 || iParam0);
}

void func_555()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 2)
	{
		Global_1572887->f_405.f_1[iVar0] = 0;
		iVar0++;
	}
}

void func_556(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7, int iParam8, int iParam9, int iParam10)
{
	Global_1572887->f_405 = iParam0;
	if (iParam1 != 0)
	{
		func_1206(iParam1);
	}
	if (iParam2 != 0)
	{
		func_1206(iParam2);
	}
	if (iParam3 != 0)
	{
		func_1206(iParam3);
	}
	if (iParam4 != 0)
	{
		func_1206(iParam4);
	}
	if (iParam5 != 0)
	{
		func_1206(iParam5);
	}
	if (iParam6 != 0)
	{
		func_1206(iParam6);
	}
	if (iParam7 != 0)
	{
		func_1206(iParam7);
	}
	if (iParam8 != 0)
	{
		func_1206(iParam8);
	}
	if (iParam9 != 0)
	{
		func_1206(iParam9);
	}
	if (iParam10 != 0)
	{
		func_1206(iParam10);
	}
	func_1207();
}

void func_557(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = 1;
	}
	Global_1572864->f_1 = iParam0;
}

void func_558(int iParam0)
{
	Var0 = { func_1208(iParam0) };
	if (!func_1112(Var0))
	{
		return;
	}
	iVar2 = func_1209(Var0);
	if (iVar2 != -1)
	{
		iVar3 = Global_1196339->f_1[iVar2]->f_3;
		if (network_is_player_active(player_id()))
		{
			if (func_703(1048576, player_id()) || func_840())
			{
				iVar4 = Global_1296851->f_2.f_4;
				if (!func_537(iVar4))
				{
					func_1210(iVar2, 131072);
				}
				else
				{
					func_1210(iVar2, 32768);
				}
				return;
			}
			else if (func_989())
			{
				func_1210(iVar2, 65536);
				return;
			}
		}
		if (iVar3 != 0 && func_1211(iVar2, Var0, iVar3))
		{
			iVar5 = func_1212(iVar2);
			if (iVar5 != -1 && func_1120(iVar5) == -785841056)
			{
				iVar6 = func_1213(iVar5);
				if (!func_1214(iVar6))
				{
					func_1215(iVar6);
					func_1216(func_1213(iVar5), Var0, -1);
				}
			}
		}
	}
}

void func_559(int iParam0, int iParam1, var uParam2)
{
	if (iParam1 == Global_1296859->f_15)
	{
		return;
	}
	if (!func_1217(iParam0))
	{
		return;
	}
	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_4 = 1;
	Var0.f_5 = -1;
	Var14 = -1;
	Var14.f_1 = -1;
	Var17.f_12 = -1;
	Var17.f_12.f_1 = -1;
	Var17.f_14 = 255;
	Var17.f_15 = 255;
	vVar36 = { 0f, 0f, 0f };
	Var0.f_5 = iParam0;
	Var0.f_10 = uParam2;
	Var0.f_11 = Global_1296859->f_15;
	iVar39 = get_unique_int_for_player(_0x4be6c13a45cca8ec(Global_1296859->f_15));
	switch (iParam0)
	{
		case 2:
			Var14 = { func_1219(5, func_1218(0)) };
			Var17.f_4 = 80;
			break;
		case 1:
			Var14 = { func_1219(4, func_1218(0)) };
			Var17.f_4 = 81;
			break;
	}
	func_1220(&fVar16, iParam1, 1);
	Var17 = 1;
	Var17.f_1 = player_id();
	Var17.f_2 = get_network_time_accurate();
	Var17.f_6 = uParam2;
	Var17.f_9 = iVar39;
	Var17.f_16 = Global_1296859->f_15;
	if (Var0.f_5 == -1)
	{
		return;
	}
	if (!func_876(Var0.f_5))
	{
		return;
	}
	if (!func_1221(iParam1))
	{
		return;
	}
	func_1222(Var14, vVar36, 0f, 0, 0, fVar16, Var17);
	func_1220(&fVar16, iParam1, 0);
	switch (iParam0)
	{
		case 2:
			Var17.f_4 = 84;
			break;
		case 1:
			Var17.f_4 = 83;
			break;
	}
	Var17.f_7 = iParam1;
	Var17 = 0;
	func_1223(Var17, fVar16, 0, 0);
	_0xde544b7ec0c187cc(&fVar16);
	func_1224(Var0.f_5, &fVar16);
	if (!_0x179a6f0ee2e79026(&fVar16))
	{
		return;
	}
	Var0.f_6 = player_id();
	Var0.f_8 = { Var14 };
	Var0.f_7 = fVar16;
	Var0.f_11 = iParam1;
	Var0.f_13 = 1;
	Var0.f_12 = iVar39;
	func_1225(&Var0, &fVar16);
	func_1223(Var17, fVar16, 0, 0);
	_0xdd1232b332cbb9e7(6, 1, 0);
	_0xdd1232b332cbb9e7(1, 1, 0);
	func_145();
}

void func_560(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	fVar0 = func_692(iParam1);
	if (bParam3)
	{
		_0xd426e2e3288469d6(&fVar0, player_id());
	}
	Var1.f_12 = -1;
	Var1.f_12.f_1 = -1;
	Var1.f_14 = 255;
	Var1.f_15 = 255;
	Var1.f_4 = iParam0;
	Var1.f_16 = iParam2;
	func_1223(Var1, fVar0, 0, 0);
}

void func_561(int iParam0)
{
	if (!func_1226(iParam0))
	{
		return;
	}
	if (!_network_is_player_index_valid(iParam0) || !network_is_player_active(iParam0))
	{
		return;
	}
	iVar2 = iParam0;
	func_1227(&uVar0, Global_1296859->f_15);
	func_1227(&uVar1, _0x901e0dc25080c8b9(iParam0));
	Var3.f_5 = player_id();
	Var3.f_6 = iParam0;
	Var3.f_4 = 2;
	func_1228(&Var3, &uVar0);
	Var3.f_4 = 3;
	func_1228(&Var3, &uVar1);
	func_1229(&(Global_1108365->f_34[iVar2]->f_8), 2);
	Global_1108365->f_34.f_771 = 255;
	func_1230(iVar2);
}

void func_562(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1231(iParam0);
	}
	else
	{
		func_1232(iParam0);
	}
}

void func_563()
{
	iVar6 = player_id();
	Var8 = 5;
	Var8.f_1 = 255;
	Var8.f_1.f_2 = 255;
	Var8.f_1.f_2.f_2 = 255;
	Var8.f_1.f_2.f_2.f_2 = 255;
	Var8.f_1.f_2.f_2.f_2.f_2 = 255;
	iVar3 = 0;
	while (iVar3 < 32)
	{
		if (iVar0 >= 5)
		{
		}
		else
		{
			if (!func_1233(iVar3))
			{
			}
			else
			{
				iVar5 = int_to_playerindex(iVar3);
				fVar4 = vdist(func_1234(iVar5), func_1234(iVar6));
				if (fVar4 > (Global_1901947->f_166.f_23 * Global_1139381->f_4778))
				{
				}
				else
				{
					iVar7 = func_1235(iVar3);
					func_1236(Var8[iVar0], iVar7, iVar3);
					iVar1 = (iVar1 + Var8[iVar0]->f_1);
					iVar0++;
				}
			}
			iVar3++;
		}
	}
	if (iVar0 <= 0)
	{
		Var19.f_12 = -1;
		Var19.f_12.f_1 = -1;
		Var19.f_14 = 255;
		Var19.f_15 = 255;
		Var19.f_4 = 108;
		_0x31010318ba9897ac(&fVar38, player_id());
		func_1223(Var19, fVar38, 0, 0);
		return;
	}
	iVar39 = func_1237(1, iVar1);
	iVar2 = 0;
	while (iVar2 < iVar0)
	{
		iVar39 = (iVar39 - Var8[iVar2]->f_1);
		if (iVar39 <= 0)
		{
			func_1238(&(Var8[iVar2]));
			return;
		}
		iVar2++;
	}
}

void func_564(int iParam0)
{
	iVar0 = _0xe4c64cd37cb176aa(iParam0);
	_0xb22b1d9f74095382(iParam0);
	if (!func_224(iVar0))
	{
		return;
	}
}

void func_565(int iParam0)
{
	iVar0 = int_to_playerindex(iParam0);
	if (!func_1239(iVar0))
	{
		return;
	}
}

void func_566(int iParam0, bool bParam1)
{
	uVar0 = _0x27b1ae4d8c652f08(iParam0);
	if (bParam1)
	{
		if (func_674())
		{
			return;
		}
		func_1240(iParam0);
		func_679(0);
		func_680(0);
	}
	else
	{
		_0x3aa0cdc63696166d(uVar0);
	}
}

void func_567(var uParam0, var uParam1)
{
	if (!_0x179a6f0ee2e79026(&uParam1))
	{
		return;
	}
	*uParam0 = 176;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 19, 25, &uParam1);
	func_1241(uParam0);
}

void func_568(var uParam0)
{
	if (!_databinding_is_data_id_valid(uParam0))
	{
		return;
	}
	_databinding_remove_binding_array_item_by_data_context_id(Global_1940311->f_242.f_5, uParam0);
	func_378(uParam0);
	_databinding_remove_data_entry(uParam0);
	func_1242((Global_1940311->f_242.f_1186 - 1));
}

char* func_569(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

void func_570(int iParam0, var uParam1)
{
	Var0 = { func_1243(iParam0) };
	Var35 = { Var0.f_8 };
	iVar37 = func_1244(Var35);
	iVar38 = _databinding_read_data_int(Global_1940311->f_242.f_14[iParam0]->f_25);
	iVar39 = (Global_1296859->f_21 - (iVar38 - (Global_1901947->f_308.f_169 / 1000)));
	switch (iVar37)
	{
		case 20:
			func_1245(_0xe6aab897120492d6(uParam1, func_58(88)));
			_0xf37a2149bc9a8a27(-1522841992, Var0.f_16.f_1, player_id(), 0, iVar39);
			break;
		case 21:
			func_1245(_0xe6aab897120492d6(uParam1, func_58(88)));
			_0xf37a2149bc9a8a27(2112282570, Var0.f_16.f_1, player_id(), 0, iVar39);
			break;
		case 28:
			func_1245(_0xe6aab897120492d6(uParam1, func_58(88)));
			_0xf37a2149bc9a8a27(1403358139, Var0.f_16.f_1, player_id(), 0, iVar39);
			break;
	}
}

void func_571(int iParam0, int iParam1)
{
	_0xd426e2e3288469d6(&(Global_1248240->f_8903.f_8), iParam0);
	iVar0 = int_to_playerindex(iParam0);
	iVar1 = 0;
	while (iVar1 < Global_1248240->f_8903.f_14)
	{
		if (&Global_1248240->f_8903.f_9[iVar1] == iVar0)
		{
			Global_1248240->f_8903.f_9[iVar1]->f_2 = 1;
			Global_1248240->f_8903.f_9[iVar1]->f_3 = iParam1;
		}
		else
		{
			iVar1++;
		}
	}
}

void func_572(int iParam0)
{
	Var0.f_9 = 255;
	Var0.f_10 = 255;
	Var0.f_11 = 255;
	Var0 = 30;
	Var0.f_6 = 3;
	Var0.f_9 = player_id();
	Var0.f_10 = iParam0;
	Var0.f_7 = _0x901e0dc25080c8b9(player_id());
	Var0.f_8 = _0x901e0dc25080c8b9(player_id());
	func_1246(&Var0);
}

struct<7> func_573(int iParam0)
{
	network_handle_from_player(iParam0, &Var0);
	return Var0;
}

int func_574()
{
	if (!func_504("ALL HORSES", &iVar0, &uVar1, -1591664384, 0))
	{
		return 0;
	}
	func_508(iVar0);
	return uVar1;
}

int func_575()
{
	Var2 = { func_522(0, -1591664384, -1591664384, -1591664384, 0, 0, -2072933068) };
	if (!func_523(&Var2, &iVar0, &uVar1, 0))
	{
		return 0;
	}
	func_508(iVar0);
	return uVar1;
}

bool func_576(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_577(int iParam0, int iParam1)
{
	func_1247(iParam0, iParam1);
}

var func_578()
{
	return Global_1138962->f_143;
}

void func_579(var uParam0, var uParam1, int iParam2, bool bParam3)
{
	if (uParam1->f_1 == -1)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = &uParam1->f_2[uParam1->f_1];
	}
	uParam0->f_8 = 1;
	StringCopy(&(uParam0->f_16), _create_var_string(0, iParam2), 64);
	uParam0->f_24 = 1442026401;
	uParam0->f_25 = -1218088854;
	if (func_1248(iParam2, &(uParam1->f_2)))
	{
		uParam0->f_26 = 1;
		uParam0->f_7 = 33585163;
		uParam0->f_34 = 1;
	}
	else
	{
		uParam0->f_26 = 0;
		uParam0->f_7 = -1687063893;
		uParam0->f_34 = 0;
	}
	uParam0->f_27 = 376878225;
	uParam0->f_28 = -1410441915;
	if (iVar0 == iParam2)
	{
		uParam0->f_29 = 1;
		uParam0->f_33 = -186220729;
	}
	else
	{
		uParam0->f_29 = 0;
		uParam0->f_33 = 801794679;
	}
	if (bParam3)
	{
		uParam0->f_30 = -439153934;
		if (func_1249(uParam1))
		{
			uParam0->f_31 = 1;
		}
		else
		{
			uParam0->f_31 = 0;
		}
	}
	else
	{
		uParam0->f_30 = -1258266463;
		uParam0->f_31 = 1;
	}
	uParam0->f_6 = -1309595911;
	uParam0->f_4 = 1433015236;
	uParam0->f_5 = -1309595911;
	uParam0->f_32 = -519851087;
	uParam0->f_35 = 1172957996;
}

void func_580(var uParam0, var uParam1, char[32] cParam2, struct<36> Param10)
{
	func_1250(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = _databinding_add_data_string(*uParam0, func_58(15), &(Param10.f_16));
	uParam0->f_19 = _databinding_add_data_hash(*uParam0, func_58(21), Param10.f_24);
	uParam0->f_20 = _databinding_add_data_hash(*uParam0, func_58(22), Param10.f_25);
	uParam0->f_21 = _databinding_add_data_bool(*uParam0, func_58(23), Param10.f_26);
	uParam0->f_22 = _databinding_add_data_hash(*uParam0, func_58(24), Param10.f_27);
	uParam0->f_23 = _databinding_add_data_hash(*uParam0, func_58(25), Param10.f_28);
	uParam0->f_24 = _databinding_add_data_bool(*uParam0, func_58(26), Param10.f_29);
	uParam0->f_25 = _databinding_add_data_hash(*uParam0, func_58(68), Param10.f_30);
	uParam0->f_26 = _databinding_add_data_bool(*uParam0, func_58(69), Param10.f_31);
	uParam0->f_27 = _databinding_add_data_hash(*uParam0, func_58(71), Param10.f_32);
	uParam0->f_28 = _databinding_add_data_hash(*uParam0, func_58(64), Param10.f_33);
	uParam0->f_29 = _databinding_add_data_bool(*uParam0, func_58(65), Param10.f_34);
	uParam0->f_30 = _databinding_add_data_hash(*uParam0, func_58(67), Param10.f_35);
}

char* func_581(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "EMOTE_CATEGORY_NAME_ACTIONS";
		case 1:
			return "EMOTE_CATEGORY_NAME_ANTAGONIZE";
		case 2:
			return "EMOTE_CATEGORY_NAME_REACTIONS";
		case 3:
			return "EMOTE_CATEGORY_NAME_GREET";
		default:
			break;
	}
	return "EMOTE_CATEGORY_INVALID";
}

int func_582(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1473261684;
		case 1:
			return -268116367;
		case 2:
			return -6796437;
		case 3:
			return -241855024;
		default:
			break;
	}
	return -1591664384;
}

struct<4> func_583(int iParam0, var uParam1, int iParam2, bool bParam3, var uParam4, int iParam5, bool bParam6)
{
	if (!func_586(iParam0, 0))
	{
		return Var0;
	}
	_0x886dfd3e185c8a89(func_540(bParam6), &uParam1, iParam0, iParam5, &Var0);
	return Var0;
}

int func_584(var uParam0, struct<4> Param1)
{
	Var0.f_9 = -1591664384;
	if (!func_1251(Param1, &Var0, 1, 0, -1))
	{
		return 0;
	}
	if (Var0.f_10)
	{
		return 0;
	}
	iVar14 = func_1252(Var0.f_9);
	if (iVar14 < 0 || iVar14 > (4 - 1))
	{
		return 0;
	}
	if (func_1253(uParam0, iVar14))
	{
		return 0;
	}
	iVar15 = func_1254(&Param1, 1, 1);
	func_1255(uParam0, iVar14, iVar15);
	if (iVar15 == -1)
	{
		return 0;
	}
	uParam0->f_8[iVar14]->f_2 = Var0.f_4;
	uParam0->f_8[iVar14]->f_3 = 0;
	return 1;
}

int func_585(var uParam0, struct<4> Param1)
{
	Var0.f_9 = -1591664384;
	if (!func_1251(Param1, &Var0, 1, 0, -1))
	{
		return 0;
	}
	if (!Var0.f_10)
	{
		return 0;
	}
	iVar14 = func_1252(Var0.f_9);
	if (iVar14 < 0 || iVar14 > (4 - 1))
	{
		return 0;
	}
	if (func_1253(uParam0, iVar14))
	{
		return 0;
	}
	iVar15 = func_1254(&Param1, 0, 1);
	func_1255(uParam0, iVar14, iVar15);
	if (iVar15 == -1)
	{
		return 0;
	}
	uParam0->f_8[iVar14]->f_2 = Var0.f_4;
	uParam0->f_8[iVar14]->f_3 = 1;
	return 1;
}

bool func_586(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_key_valid(iParam0, iParam1);
}

int func_587(var uParam0, int iParam1)
{
	if (!func_586(iParam1, 0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (&uParam0->f_2[iVar0] == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_588(var uParam0, int iParam1, int iParam2)
{
	return func_1256(uParam0, iParam1, iParam2);
}

int func_589(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 3)
	{
		return 0;
	}
	uParam0->f_2[iParam1] = 0;
	func_1257(uParam0);
	return 1;
}

int func_590(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return -581997540;
		case 8:
			return -859552849;
		case 9:
			return -1368805281;
		case 10:
			return -1353702720;
		case 11:
			return -848699880;
		default:
			break;
	}
	return 0;
	return 0;
}

char* func_591(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_var_string(2, "PLAYER_WALK_TYPES_DEFAULT");
		case 1:
			return _create_var_string(2, "PLAYER_WALK_TYPES_CASUAL");
		case 2:
			return _create_var_string(2, "PLAYER_WALK_TYPES_CRAZY");
		case 3:
			return _create_var_string(2, "PLAYER_WALK_TYPES_FLAMBOYANT");
		case 4:
			return _create_var_string(2, "PLAYER_WALK_TYPES_GUNSLINGER");
		case 5:
			return _create_var_string(2, "PLAYER_WALK_TYPES_REFINED");
		case 6:
			return _create_var_string(2, "PLAYER_WALK_TYPES_SILENT");
		case 7:
			return _create_var_string(2, "PLAYER_WALK_TYPES_GREENHORN");
		case 8:
			return _create_var_string(2, "PLAYER_WALK_TYPES_VETERAN");
		case 9:
			return _create_var_string(2, "PLAYER_WALK_TYPES_EASYRIDER");
		case 10:
			return _create_var_string(2, "PLAYER_WALK_TYPES_DRUNK");
		case 11:
			return _create_var_string(2, "PLAYER_WALK_TYPES_INQUISITIVE");
		default:
			break;
	}
	return _create_var_string(2, "PLAYER_WALK_TYPES_DEFAULT");
}

void func_592(var uParam0, var uParam1, char[32] cParam2, struct<28> Param10)
{
	func_1258(uParam0, uParam1, cParam2, Param10);
	uParam0->f_22 = _databinding_add_data_int(*uParam0, "dynamic_list_item_walk_enum", Param10.f_27);
}

void func_593(int iParam0, int iParam1)
{
	if (iParam0 == 13 || iParam0 >= 12)
	{
		if (iParam1 != 13 && iParam1 != 0)
		{
			_0xcb9401f918cb0f75(Global_34, func_1259(iParam1), 0, -1);
		}
		return;
	}
	if (iParam1 != 0 && iParam1 != 12)
	{
		_0xcb9401f918cb0f75(Global_34, func_1259(iParam1), 0, -1);
	}
	if (iParam0 != 0 && iParam0 < 12)
	{
		_0xcb9401f918cb0f75(Global_34, func_1259(iParam0), 1, -1);
	}
}

void func_594(int iParam0)
{
	if (iParam0 >= 12 || iParam0 < 0)
	{
		iParam0 = 0;
	}
	Global_17411.f_55.f_644.f_1783 = iParam0;
}

bool func_595(var uParam0, var uParam1)
{
	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_4 = 1;
	Var0.f_5 = 6;
	Var0.f_10 = Global_1901947->f_308.f_172;
	func_1224(6, &uVar14);
	if (!func_876(6))
	{
		return false;
	}
	if (!_0x179a6f0ee2e79026(&uVar14))
	{
		return false;
	}
	Var0.f_6 = player_id();
	iVar15 = 0;
	if (iVar15 < 0 || iVar15 >= 16)
	{
		iVar15 = 0;
	}
	Var0.f_8 = { func_1260((*Global_1108365)[0][iVar15], 3) };
	Var0.f_7 = uVar14;
	Var0.f_12 = get_unique_int_for_player(_0x4be6c13a45cca8ec(Global_1296859->f_15));
	func_1225(&Var0, &uVar14);
	_0xdd1232b332cbb9e7(6, 1, 0);
	_0xdd1232b332cbb9e7(1, 1, 0);
	func_145();
	return true;
}

bool func_596(var uParam0, var uParam1)
{
	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_4 = 1;
	Var0.f_5 = 4;
	Var0.f_10 = Global_1901947->f_308.f_172;
	func_1224(4, &uVar14);
	if (!func_876(4))
	{
		return false;
	}
	if (!_0x179a6f0ee2e79026(&uVar14))
	{
		return false;
	}
	Var0.f_6 = player_id();
	iVar15 = 0;
	if (iVar15 < 0 || iVar15 >= 16)
	{
		iVar15 = 0;
	}
	Var0.f_8 = { func_1219(3, iVar15) };
	Var0.f_7 = uVar14;
	Var0.f_12 = get_unique_int_for_player(_0x4be6c13a45cca8ec(Global_1296859->f_15));
	func_1225(&Var0, &uVar14);
	_0xdd1232b332cbb9e7(6, 1, 0);
	_0xdd1232b332cbb9e7(1, 1, 0);
	func_145();
	return true;
}

bool func_597(var uParam0, var uParam1)
{
	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_4 = 1;
	Var0.f_5 = 5;
	Var0.f_10 = Global_1901947->f_308.f_172;
	func_1224(5, &uVar14);
	if (!func_876(5))
	{
		return false;
	}
	if (!_0x179a6f0ee2e79026(&uVar14))
	{
		return false;
	}
	Var0.f_6 = player_id();
	iVar15 = 0;
	Var0.f_8 = { func_1219(3, iVar15) };
	Var0.f_7 = uVar14;
	Var0.f_12 = get_unique_int_for_player(_0x4be6c13a45cca8ec(Global_1296859->f_15));
	func_1225(&Var0, &uVar14);
	_0xdd1232b332cbb9e7(6, 1, 0);
	_0xdd1232b332cbb9e7(1, 1, 0);
	func_145();
	return true;
}

bool func_598(int iParam0, var uParam1)
{
	iVar0 = func_1261(iParam0);
	iVar1 = func_1262(iVar0, Global_35);
	iVar2 = func_1263(iVar0, iVar1);
	*uParam1 = { func_1264(iVar0, iVar1, iVar2) };
	if (func_1112(*uParam1))
	{
		func_1265(iVar0, iVar1, iVar2, 0);
		return true;
	}
	return false;
}

void func_599(int iParam0, struct<2> Param1, int iParam3)
{
	if (func_1112(Global_1109340->f_193[&Global_1296859]->f_2.f_1))
	{
		return;
	}
	if (Global_1109340->f_193[&Global_1296859]->f_2 != -1 && Global_1109340->f_193[&Global_1296859]->f_2 != iParam0)
	{
		return;
	}
	Global_1109340->f_193[&Global_1296859]->f_2 = iParam0;
	Global_1109340->f_193[&Global_1296859]->f_2.f_1 = { Param1 };
	if (iParam3 != -1)
	{
		Global_1109340->f_193[&Global_1296859]->f_2.f_3 = iParam3;
	}
	iVar0 = func_1266(Global_1296859->f_10);
	if (iVar0 != 6 && iVar0 != 8)
	{
		func_1267(6);
	}
}

bool func_600(int iParam0)
{
	return func_576((*Global_1134390)[network_player_id_to_int()]->f_73, iParam0);
}

int func_601(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -1975753417;
		case 7:
			return -142724881;
		default:
			break;
	}
	return 0;
}

bool func_602(int iParam0, int iParam1, int iParam2)
{
	iVar0 = (func_388(iParam0, 0, iParam2) * iParam1);
	bVar1 = false;
	if (iVar0 == 0)
	{
	}
	if (iVar0 >= 0)
	{
		bVar1 = func_537(iVar0);
	}
	return bVar1;
}

char* func_603(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		switch (iParam0)
		{
			case -682748:
				return "GC_GRIZZLIES_DIST";
			case 1357161730:
				return "GC_BAYOU_DIST";
			case 1581179681:
				return "GC_BIG_VALLEY_DIST";
			case -987049424:
				return "GC_CUMBERLAND_FOREST_DIST";
			case -1554232707:
				return "GC_GREAT_PLAINS_DIST";
			case 1538293636:
				return "GC_HEARTLANDS_DIST";
			case -1871413878:
				return "GC_ROANOKE_RIDGE_DIST";
			case 1483778247:
				return "GC_SCARLETT_MEADOWS_DIST";
			case -724534761:
				return "GC_TALL_TREES_DIST";
			case 892234183:
				return "GC_GAPTOOTH_RIDGE_DIST";
			case -1884014371:
				return "GC_RIO_BRAVO_DIST";
			case -215258135:
				return "GC_CHOLLA_SPRINGS_DIST";
			case -1992167326:
				return "GC_HENNIGANS_STEAD_DIST";
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case -682748:
				return "GRIZZLIES_DIST";
			case 1357161730:
				return "BAY";
			case 1581179681:
				return "BGV";
			case -987049424:
				return "CML";
			case -1554232707:
				return "GRT";
			case 1538293636:
				return "HRT";
			case -1871413878:
				return "ROA";
			case 1483778247:
				return "SCM";
			case -724534761:
				return "TAL";
			case 892234183:
				return "GAP";
			case -1884014371:
				return "RIO";
			case -215258135:
				return "CHO";
			case -1992167326:
				return "HEN";
			default:
				break;
		}
	}
	return "NM_GC_TEXT_CAMP_NONE";
}

bool func_604(struct<2> Param0, var uParam2, int iParam3)
{
	if (func_1268())
	{
		return false;
	}
	if (func_1269(Param0.f_1, Param0))
	{
		return false;
	}
	if (!func_803(iParam3, 1))
	{
		return false;
	}
	if (func_1270())
	{
		return false;
	}
	if (func_600(64))
	{
		if (!func_602(func_601(Param0), 1, 59806960))
		{
			return false;
		}
	}
	return true;
}

void func_605(int iParam0)
{
	Global_1132288->f_2027.f_5 = iParam0;
}

bool func_606(vector3 vParam0, int iParam3)
{
	if (vParam0.x < 4)
	{
		vParam0.x = 4;
	}
	if (!func_803(0, 1))
	{
		return false;
	}
	(*Global_1134390)[network_player_id_to_int()]->f_33 = { vParam0 };
	(*Global_1134390)[network_player_id_to_int()]->f_33.f_3 = get_random_int_in_range(0, 65536);
	func_609();
	if (iParam3 == 1)
	{
		func_1271(2);
	}
	else
	{
		Global_1137047->f_330.f_6 = 1;
		func_1272(2);
	}
	if (!func_1273(network_player_id_to_int()))
	{
		func_1272(8);
		func_1274();
	}
	if (!func_860(4) && (func_860(8) || func_860(16)))
	{
		func_1271(4);
	}
	else
	{
		func_1272(4);
	}
	if (func_576(Global_1137047->f_8, 1))
	{
		func_1271(1);
	}
	else
	{
		func_1272(1);
	}
	func_608(6);
	return true;
}

void func_607(int iParam0)
{
	if (!func_600(64))
	{
		return;
	}
	switch (iParam0)
	{
		case 1357161730:
			iVar0 = -920598405;
			break;
		case 1581179681:
			iVar0 = -809127215;
			break;
		case -215258135:
			iVar0 = 736160934;
			break;
		case -987049424:
			iVar0 = -232950171;
			break;
		case 892234183:
			iVar0 = -348618743;
			break;
		case -1554232707:
			iVar0 = 210917480;
			break;
		case -682748:
			iVar0 = 326175668;
			break;
		case 1538293636:
			iVar0 = 131399519;
			break;
		case -1992167326:
			iVar0 = -53531786;
			break;
		case -1884014371:
			iVar0 = 779743808;
			break;
		case -1871413878:
			iVar0 = 662806622;
			break;
		case 1483778247:
			iVar0 = 687704893;
			break;
		case -724534761:
			iVar0 = 1706859953;
			break;
		default:
			return;
	}
	func_667(func_666(1307101198, iVar0), 1);
}

void func_608(int iParam0)
{
	Global_1132288->f_2019 = iParam0;
}

void func_609()
{
	(*Global_1134390)[network_player_id_to_int()]->f_33.f_4 = 0;
}

void func_610(vector3 vParam0)
{
	Global_17411.f_55.f_4 = vParam0.x;
	Global_17411.f_55.f_4.f_1 = vParam0.y;
	Global_17411.f_55.f_4.f_2 = vParam0.z;
	if (!func_1275(-1838434463, 1))
	{
		return;
	}
	if (vParam0.z != 0 && vParam0.x > 0)
	{
		vVar0 = { func_1276() };
		if ((vVar0.z == vParam0.z && vVar0.y == vParam0.y) && vVar0.x == vParam0.x)
		{
			return;
		}
		if (func_1277(vParam0, 1) == -1)
		{
		}
	}
}

void func_611(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

int func_612(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_586(iParam0, 0))
	{
		return 0;
	}
	if (func_1278(iParam0))
	{
		return func_1281(func_1279(iParam0, 0), iParam1, bParam2, iParam3, func_1280(iParam0));
	}
	if (func_1282(iParam0, bParam4) || func_1283(iParam0))
	{
		iParam1 = 997808187;
	}
	else if (func_1280(iParam0) && (func_1284(iParam0, &iVar0) || func_1285(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else
	{
		bVar1 = func_1073(iParam0, -570078785);
		bVar2 = func_1073(iParam0, -915411861);
		if (bVar1 && !bVar2)
		{
			iParam1 = -570078785;
		}
		else if (bVar2 && bVar1)
		{
			if (func_1286())
			{
				iParam1 = -570078785;
			}
			else
			{
				iParam1 = -915411861;
			}
		}
		else if (bVar2)
		{
			iParam1 = -915411861;
		}
		else if (func_1287(15) && func_1073(iParam0, 369710026))
		{
			iParam1 = 369710026;
		}
		else
		{
			iParam1 = 0;
		}
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

int func_613(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_586(iParam0, 0))
	{
		Global_1051439->f_61 = 0;
		Global_1051439->f_46 = 0;
		return 0;
	}
	bVar1 = func_1288(iParam0, &iVar0);
	if ((bParam2 && bVar1) || ((func_1286() && bVar1) && iParam1 == 0))
	{
		if (func_1289(iVar0, 997808187, 0) && !func_1290(iVar0, 997808187))
		{
			Global_1051439->f_46 = 0;
			Global_1051439->f_61 = iParam0;
			return Global_1051439->f_46;
		}
		else if (func_1289(iVar0, -570078785, 0))
		{
			if (bParam3)
			{
				iVar2 = func_1291(iVar0, -570078785, 0, 1);
			}
			else
			{
				iVar2 = func_1292(func_1291(iVar0, -570078785, 0, 1));
			}
			Global_1051439->f_46 = iVar2;
			Global_1051439->f_61 = iParam0;
			return Global_1051439->f_46;
		}
	}
	iVar3 = iParam1;
	if (iVar3 == 0)
	{
		iVar3 = func_612(iParam0, iVar3, 1, -1, 1);
	}
	iVar4 = 0;
	if (func_1293(iParam0))
	{
		iVar4 = func_1294(iParam0);
	}
	else if (func_1295(iParam0))
	{
		iVar4 = func_1296(iParam0);
	}
	else if (func_1297(iParam0))
	{
		iVar4 = func_1298(iParam0);
	}
	else if (func_1299(iParam0))
	{
		iVar4 = func_1300(iParam0);
	}
	if (iVar4 != 0)
	{
		iVar2 = func_1291(iVar4, iVar3, 0, bParam4);
		bVar5 = false;
		if (func_614(iVar3))
		{
			if (func_1301(iVar4, 773203532, iVar3, 1, bParam4) > 0)
			{
				bVar5 = true;
			}
		}
		if ((iVar3 == -570078785 || bVar5) && !bParam3)
		{
			iVar2 = func_1292(iVar2);
		}
		Global_1051439->f_61 = iParam0;
		return iVar2;
	}
	if (iVar3 == 997808187)
	{
		Global_1051439->f_61 = iParam0;
		Global_1051439->f_46 = 0;
		return 0;
	}
	else
	{
		iVar2 = func_1076(iParam0, iVar3, bParam4, 0, 1, 0);
		bVar6 = false;
		if (func_614(iVar3))
		{
			if (func_615(iParam0, 773203532, iVar3, bParam4, 1) > 0)
			{
				bVar6 = true;
			}
		}
		if ((iVar3 == -570078785 || bVar6) && !bParam3)
		{
			iVar2 = func_1292(iVar2);
		}
		Global_1051439->f_46 = iVar2;
		Global_1051439->f_61 = iParam0;
		if (Global_1051439->f_62 != Global_1051439->f_61)
		{
			Global_1051439->f_62 = Global_1051439->f_61;
		}
		else
		{
			Global_1051439->f_62 = 0;
		}
		return iVar2;
	}
	Global_1051439->f_46 = 0;
	return -1;
}

bool func_614(int iParam0)
{
	switch (iParam0)
	{
		case -1843707398:
		case -1571233163:
		case -1197011183:
		case 75922725:
		case 1070046552:
			return true;
		default:
			break;
	}
	return false;
}

int func_615(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_1278(iParam0))
	{
		return func_1301(func_1279(iParam0, 0), iParam1, iParam2, bParam4, 1);
	}
	if (!func_1302(iParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam4)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == iParam1)
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
	if (!bParam4)
	{
	}
	return 0;
}

bool func_616(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return _network_is_money_balance_not_less_than(0, iParam0);
}

void func_617(int iParam0, int iParam1, int iParam2)
{
	Global_1051439->f_4466.f_3 = iParam0;
	Global_1051439->f_4466.f_4 = iParam1;
	Global_1051439->f_4466.f_5 = iParam2;
}

void func_618(int iParam0)
{
	Global_1051439->f_4466 = iParam0;
}

int func_619()
{
	return Global_1572887->f_13;
}

void func_620(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (_0x083d497d57b7400f(Global_1296859->f_8))
	{
		return;
	}
	if (!is_entity_dead(Global_1296859->f_8))
	{
		if (bParam2)
		{
			disable_ped_pain_audio(Global_1296859->f_8, true);
		}
		if (bParam3)
		{
			set_ped_config_flag(Global_1296859->f_8, 243, true);
		}
		Var0 = player_ped_id();
		Var0.f_1 = iParam0;
		Var0.f_2 = to_float(get_entity_health(player_ped_id()));
		Var0.f_3 = 1;
		Var0.f_5 = iParam1;
		Var0.f_12 = (iParam1 != 0 && _is_weapon_melee(iParam1));
		func_1303(&Var0, &(Global_1102219->f_3599));
		_0x1ce875505d45338a(player_ped_id(), iParam0, iParam1);
	}
}

bool func_621(var uParam0, bool bParam1)
{
	if (func_396(Global_1296859->f_15))
	{
		if (func_400(player_id()) == 0)
		{
			return false;
		}
		_0xc08aff658b2e51da(&iVar0);
		return func_499(iVar0, uParam0, bParam1);
	}
	else
	{
		if (bParam1)
		{
			if (!_0xd6f6acf4392187fb(Global_1296859->f_15))
			{
				return false;
			}
			if (!_0x0f99f6436528a089(Global_1296859->f_15))
			{
				return false;
			}
		}
		return func_220(Global_1296859->f_15, uParam0, bParam1);
	}
	return false;
}

void func_622()
{
	Global_1940311->f_1433.f_157.f_2 = 0;
}

void func_623()
{
	Global_1940311->f_1433.f_157.f_97 = 0;
}

bool func_624()
{
	if (func_1304() >= 1 || _0xc088ff658b2e51da() >= 1)
	{
		return true;
	}
	return false;
}

bool func_625()
{
	iVar0 = 1;
	while (iVar0 <= 4)
	{
		if (Global_1139381->f_4912[iVar0]->f_1 && !Global_1139381->f_4912[iVar0]->f_2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

var func_626(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

bool func_627()
{
	return func_415(Global_1572887->f_7, 1);
}

void func_628(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_629()
{
	return Global_1572887->f_106;
}

int func_630()
{
	if (!func_627())
	{
		return -1;
	}
	return Global_1572887->f_106.f_9;
}

var func_631()
{
	return Global_1572887->f_106.f_10;
}

struct<2> func_632()
{
	return Global_1572887->f_106.f_11;
}

var func_633()
{
	return Global_1572887->f_106.f_74;
}

Vector3 func_634()
{
	return Global_265377->f_124517.f_71.f_27;
}

void func_635(var uParam0, char* sParam1, var uParam2, var uParam3, int iParam4)
{
	if (_0xe47001b7cb8b98ae(uParam0, uParam2, uParam3, 11, 0, iParam4))
	{
	}
	func_690("NJ_INVITE_SENT", sParam1, 109029619);
	func_1305(uParam3);
}

int func_636()
{
	return func_1306(Global_1138962->f_137);
}

bool func_637(int iParam0)
{
	return func_1308(func_1307()) == iParam0;
}

bool func_638(int iParam0)
{
	return iParam0 == 2;
}

bool func_639(int iParam0, int iParam1)
{
	if (iParam0 != &Global_1139119)
	{
		return false;
	}
	if (_0xbea7d3cb47e1479c())
	{
		return false;
	}
	if (!_0x910b088e51a511ac())
	{
		return false;
	}
	if (Global_1139119->f_261 == 0)
	{
		if (_0x9dd95b405ab4983e(&(Global_1139119->f_226), Global_1139119->f_259))
		{
			Global_1139119->f_261 = 1;
		}
	}
	return Global_1139119->f_261;
}

int func_640(int iParam0, var uParam1)
{
	if (!func_34(*uParam1))
	{
		return 0;
	}
	if (iParam0 != &Global_1139119 || Global_1139119->f_261 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1139119->f_259)
	{
		if (network_are_handles_the_same(Global_1139119->f_1[iVar0], uParam1))
		{
			return &(Global_1139119->f_226[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

char[] func_641(char[4] cParam0)
{
	return cParam0;
}

bool func_642()
{
	return Global_1896738->f_13.f_4;
}

void func_643()
{
	Global_1896738->f_13.f_37 = 0;
	Global_1896738->f_13.f_37.f_2 = 0;
	Global_1896738->f_13.f_37.f_1 = 0;
	StringCopy(&(Global_1896738->f_13.f_37.f_5), "", 64);
}

struct<8> func_644(char* sParam0)
{
	StringCopy(&cVar0, sParam0, 64);
	return cVar0;
}

void func_645(int iParam0)
{
	Global_1896738->f_13.f_4 = iParam0;
}

void func_646(int iParam0)
{
	if (Global_1940144->f_105.f_2 >= iParam0)
	{
		return;
	}
	Global_1940144->f_105.f_2 = iParam0;
}

bool func_647(var uParam0)
{
	if (!func_222(uParam0))
	{
		return false;
	}
	bVar0 = true;
	bVar2 = func_397();
	if (uParam0->f_3)
	{
		_0xc08aff658b2e51da(&iVar3);
		Var4.f_27 = 10;
		if (!_0xc087ff658b2e51da(uParam0->f_2, &Var4))
		{
			func_778(uParam0);
			return false;
		}
		uParam0->f_29 = { Var4.f_19 };
		bVar0 = true;
		iVar1 = network_get_player_from_gamer_handle(&(uParam0->f_29));
		if (!_network_is_player_index_valid(iVar1) || !network_is_player_active(iVar1))
		{
			bVar0 = false;
		}
		if (bVar0)
		{
			uParam0->f_1 = _0x901e0dc25080c8b9(iVar1);
		}
		if (_0x595f028698072dd9(-1) || !is_orbis_version())
		{
			if (bVar0)
			{
				sVar122 = get_player_name(iVar1);
			}
			else
			{
				sVar122 = func_1309(Var4);
			}
			if (func_1310(sVar122, &(Var4.f_1)))
			{
				if (bVar0)
				{
					StringCopy(&(uParam0->f_5), func_394(iVar1, 1), 64);
				}
				else
				{
					StringCopy(&(uParam0->f_5), func_1311(Var4, 1, 109029619), 64);
				}
			}
			else
			{
				uParam0->f_5 = { Var4.f_1 };
			}
		}
		else if (bVar0 == 1)
		{
			StringCopy(&(uParam0->f_5), func_394(iVar1, 1), 64);
		}
		else
		{
			StringCopy(&(uParam0->f_5), func_1311(Var4, 1, 109029619), 64);
		}
		if (func_34(Var4.f_19))
		{
			if (network_is_gamer_in_my_session(&(Var4.f_19)) && network_is_player_active(network_get_player_from_gamer_handle(&(Var4.f_19))))
			{
				StringCopy(&(uParam0->f_13), func_669(get_player_name(network_get_player_from_gamer_handle(&(Var4.f_19))), 109029619), 128);
			}
			else
			{
				StringCopy(&(uParam0->f_13), func_669(func_1309(Var4), 109029619), 128);
			}
		}
		else
		{
			StringCopy(&(uParam0->f_13), "Invalid_grab", 128);
		}
		iVar130 = 0;
		while (iVar130 < 7)
		{
			*uParam0->f_38[iVar130] = { Var123 };
			iVar130++;
		}
		if ((_0xd6f6acf4392187fb(uParam0->f_1) && _0x0f99f6436528a089(uParam0->f_1)) && iVar3 == uParam0->f_2)
		{
			uParam0->f_36 = _0xd1bf325c8252a982(uParam0->f_1, &(uParam0->f_38));
			uParam0->f_37 = _0x853b0fa4d8732c57(uParam0->f_1);
		}
		else if (func_1312(uParam0->f_2))
		{
			if (((bVar0 && _0x424b17a7dc5c90bc(iVar1)) && _0x0f99f6436528a089(_0x901e0dc25080c8b9(iVar1))) && func_400(iVar1) == uParam0->f_2)
			{
				uParam0->f_36 = _0xd1bf325c8252a982(_0x901e0dc25080c8b9(iVar1), &(uParam0->f_38));
				uParam0->f_37 = _0x853b0fa4d8732c57(_0x901e0dc25080c8b9(iVar1));
			}
			else
			{
				uParam0->f_36 = 0;
				uParam0->f_37 = Var4.f_9.f_4;
			}
		}
		else if (func_1313(uParam0->f_2))
		{
			uParam0->f_36 = func_1314(uParam0->f_2);
			uParam0->f_37 = func_1315(uParam0->f_2);
		}
		else
		{
			uParam0->f_36 = 0;
			uParam0->f_37 = Var4.f_9.f_4;
		}
		uParam0->f_88 = Var4.f_9.f_4;
		uParam0->f_88.f_1 = Var4.f_9.f_5;
		uParam0->f_88.f_2 = Var4.f_9.f_6;
		if (bVar0)
		{
			uParam0->f_91 = func_1316(iVar1);
		}
		else
		{
			uParam0->f_91 = func_1317(uParam0->f_2);
		}
		uParam0->f_92 = Var4.f_9.f_2;
		if (iVar3 == uParam0->f_2)
		{
			if (bVar2)
			{
				uParam0->f_92 = func_398() != 1;
			}
			else if (Global_1194053->f_490 != -1)
			{
				uParam0->f_92 = Global_1194053->f_490.f_1;
			}
		}
		uParam0->f_93 = Var4.f_9.f_1;
		uParam0->f_94 = func_1318(&Var4);
	}
	else
	{
		iVar1 = _0x4be6c13a45cca8ec(uParam0->f_1);
		if (!_network_is_player_index_valid(iVar1) || !network_is_player_active(iVar1))
		{
			return false;
		}
		if (func_396(uParam0->f_1))
		{
			Var131.f_18 = 10;
			if (!func_1319(iVar1, &Var131))
			{
				return false;
			}
			StringCopy(&(uParam0->f_5), func_689(uParam0->f_1, 1, 0), 64);
		}
		else
		{
			StringCopy(&(uParam0->f_5), func_689(uParam0->f_1, 1, 0), 64);
		}
		_0xce88a261dcbba0d9(uParam0->f_1, &(uParam0->f_29));
		StringCopy(&(uParam0->f_13), func_669(func_1320(iVar1), 109029619), 128);
		uParam0->f_36 = _0xd1bf325c8252a982(uParam0->f_1, &(uParam0->f_38));
		uParam0->f_37 = _0x853b0fa4d8732c57(uParam0->f_1);
		if (bVar0)
		{
			uParam0->f_88 = { func_536(iVar1) };
		}
		if (bVar0)
		{
			uParam0->f_91 = func_1316(iVar1);
		}
		else
		{
			uParam0->f_91 = func_1317(uParam0->f_2);
		}
		uParam0->f_92 = _0xfcf96ccbd81b24c8(uParam0->f_1);
		if (uParam0->f_1 == Global_1296859->f_15)
		{
			if (bVar2)
			{
				uParam0->f_92 = func_398() != 1;
			}
			else if (Global_1194053->f_490 != -1)
			{
				uParam0->f_92 = Global_1194053->f_490.f_1;
			}
		}
		uParam0->f_93 = func_1321(uParam0->f_1);
		uParam0->f_94 = 0;
	}
	return true;
}

void func_648(int iParam0)
{
	if (func_1322(iParam0, 1))
	{
		func_1323(iParam0);
	}
	func_1324(iParam0, 1);
}

void func_649(float fParam0, int iParam1)
{
	if (func_40(0))
	{
		return;
	}
	if (func_956() != -1)
	{
		return;
	}
	Global_1896738->f_6.f_5 = fParam0;
	func_963(iParam1);
	func_962(1);
	func_33(0, 1);
	func_190(iParam1);
}

struct<7> func_650()
{
	network_get_local_handle(&Var0);
	return Var0;
}

void func_651(bool bParam0, bool bParam1)
{
	if (network_is_session_active())
	{
		if (Global_1194053->f_492 != -1)
		{
			Var0.f_4 = 11;
			Var0.f_7 = &Global_1194053->f_503[Global_1194053->f_492];
			Var0.f_5 = Global_1296859->f_15;
			Var0.f_9 = bParam0;
			Var0.f_10 = bParam1;
			func_1325(&Var0);
			func_648(5);
		}
	}
	else if (Global_1194053->f_492 != -1)
	{
		func_1326(&(Global_1194053->f_503[Global_1194053->f_492]), bParam0, bParam1);
	}
}

void func_652()
{
	vVar0 = { func_536(255) };
	if (vVar0.z != 0)
	{
		iVar3 = func_77(player_id());
		if ((iVar3 != -1 && (*Global_1131196)[iVar3]->f_9 == player_id()) && func_1193(&vVar0))
		{
			func_167(vVar0.y, -1896177107, 0, 0);
			return;
		}
	}
}

void func_653(var uParam0)
{
}

var func_654(var uParam0, char* sParam1, char* sParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = iParam4;
	Var0.f_1 = iParam3;
	Var0.f_2 = sParam1;
	Var0.f_3 = sParam2;
	uVar4 = _0x339e16b41780fc35(uParam0, &Var0, iParam5);
	return uVar4;
}

bool func_655(int iParam0)
{
	bVar0 = true;
	if (iParam0 != player_id())
	{
		bVar0 = !func_1327(iParam0);
	}
	else
	{
		bVar0 = !func_1328();
	}
	bVar0 = (bVar0 && func_1329(iParam0, 512));
	return bVar0;
}

bool func_656(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (&Global_1298166->f_3.f_132[iVar0] == iParam0 && (_get_system_time() - Global_1298166->f_3.f_132[iVar0]->f_1) < 120000)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_657(var uParam0, int iParam1)
{
	*uParam0 = 13;
	uParam0->f_1 = get_player_index();
	uParam0->f_2 = get_network_time_accurate();
	_0x31010318ba9897ac(&uVar0, iParam1);
	trigger_script_event(1, uParam0, 26, 15, &uVar0);
}

bool func_658(int iParam0, bool bParam1)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	return _0x49623bcfc3a3d829(iParam0, bParam1);
}

bool func_659(int iParam0, bool bParam1)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	return _0x49623bcfc3a3d829(iParam0, bParam1);
}

bool func_660()
{
	if (func_831() && !func_1330())
	{
		return false;
	}
	if (func_1328())
	{
		return false;
	}
	Var0 = { func_832(0) };
	if (func_1331(Var0))
	{
		if (func_1332(Var0))
		{
			return false;
		}
	}
	return true;
}

void func_661(int iParam0)
{
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	_0x31010318ba9897ac(&fVar19, get_player_index());
	Var0.f_14 = iParam0;
	Var0.f_4 = 60;
	func_1223(Var0, fVar19, 0, 0);
}

bool func_662(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (iParam0 == Global_1194053->f_158.f_4[iVar0]->f_1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_663(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	if (!_0x919af2d93e9aa89d(iParam0) && is_durango_version())
	{
		return false;
	}
	iVar0 = iParam0;
	if (((((((*Global_1056141)[iVar0]->f_2 == 2 || (*Global_1056141)[iVar0]->f_2 == 3) || (*Global_1056141)[iVar0]->f_2 == 4) || (*Global_1056141)[iVar0]->f_2 == 5) || (*Global_1056141)[iVar0]->f_2 == 8) || (*Global_1056141)[iVar0]->f_2 == 7) || (*Global_1056141)[iVar0]->f_2 == 6)
	{
		return false;
	}
	if (_0xda801f7f6a5278d3(iParam0))
	{
		return false;
	}
	return true;
}

var func_664(char* sParam0)
{
	sVar0 = _create_var_string(2, sParam0);
	uVar1 = func_670(sVar0, -2, 0, 0, 0, 1);
	return uVar1;
}

bool func_665()
{
	return (Global_1194053->f_158.f_2 < 10 && !func_397());
}

struct<2> func_666(int iParam0, int iParam1)
{
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	return Var0;
}

void func_667(var uParam0, int iParam1, int iParam2)
{
	if (!_stat_id_is_valid(&uParam0))
	{
		return;
	}
	_0x6a0184e904cdf25e(&uParam0, iParam2);
}

int func_668(int iParam0, bool bParam1, int iParam2, bool bParam3)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		if (iParam2 == -1)
		{
			return 1475463663;
		}
		else
		{
			return 636925055;
		}
	}
	if (!network_is_game_in_progress())
	{
		return 636925055;
	}
	iVar2 = iParam0;
	if (func_1331(func_832(0)) && func_833(func_832(0)) == 7)
	{
		bVar0 = true;
		iVar3 = 11;
		iVar4 = (iVar3 / 32);
		iVar5 = (iVar3 - iVar4 * 32);
		bVar1 = is_bit_set(&(Global_3145858->f_6[iVar4]), iVar5);
	}
	if (Global_1071686->f_21416.f_1[iVar2]->f_5 != 0)
	{
		return Global_1071686->f_21416.f_1[iVar2]->f_5;
	}
	if (bParam3 && Global_1071686->f_21416.f_1[iVar2]->f_6 != 0)
	{
		return Global_1071686->f_21416.f_1[iVar2]->f_6;
	}
	if (iParam0 == player_id())
	{
		if (bVar0 && bVar1)
		{
			iVar6 = func_1333(iParam0);
			if (iVar6 == -1031763995 && _network_is_player_in_spectator_mode(iParam0))
			{
				return 1105014447;
			}
			else
			{
				return iVar6;
			}
		}
		else
		{
			return func_1334(iParam0);
		}
	}
	if (iVar2 < 0 || iVar2 >= 32)
	{
		return 0;
	}
	if (func_576(Global_1071686->f_21416.f_1[iVar2]->f_7, 1024))
	{
		return -508184943;
	}
	iVar7 = func_495(iParam0, 1);
	if (!bVar0)
	{
		if (func_1335(iParam0, bParam1))
		{
			return func_1334(iParam0);
		}
		else if (func_1336(iParam0, bParam1))
		{
			if (func_1337(iParam0, bParam1))
			{
				return 1891514641;
			}
			else
			{
				if (iVar7 > 5)
				{
					return -437407570;
				}
				else if (iVar7 > 3)
				{
					return -437407570;
				}
				else if (iVar7 > 1)
				{
					return 1201428499;
				}
				return 63157909;
			}
		}
	}
	else if (bVar1)
	{
		return func_1333(iParam0);
	}
	else if (func_1335(iParam0, bParam1))
	{
		if (player_id() == iParam0)
		{
			return 1105014447;
		}
		else if (func_1338(func_1244(func_832(0)), 1) == 395262693)
		{
			return func_1334(iParam0);
		}
		else
		{
			return func_1334(iParam0);
		}
	}
	else if (func_1336(iParam0, bParam1))
	{
		return 1891514641;
	}
	return 830499243;
}

char* func_669(char* sParam0, int iParam1)
{
	sParam0 = _format_player_name_string(sParam0);
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "PLAYER_STRING", sParam0);
	}
	return func_1077(_create_var_string(10, "PLAYER_STRING", sParam0), iParam1);
}

var func_670(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	Var0 = -2;
	Var0 = iParam1;
	Var0.f_1 = iParam2;
	Var0.f_2 = iParam3;
	Var0.f_3 = iParam4;
	Var13.f_1 = sParam0;
	uVar17 = _show_simple_right_text(&Var0, &Var13, iParam5);
	return uVar17;
}

int func_671(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (&Global_1194053->f_158.f_4[iVar0] == 0)
		{
			Global_1194053->f_158.f_4[iVar0] = get_game_timer();
			Global_1194053->f_158.f_4[iVar0]->f_1 = iParam0;
			Global_1194053->f_158.f_2++;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

char* func_672(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, char[4] cParam10, char[4] cParam11, char[4] cParam12, char[4] cParam13, char[4] cParam14, char[4] cParam15)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_673(int iParam0)
{
	return func_415(Global_1195155->f_1, iParam0);
}

bool func_674()
{
	return Global_1572887->f_266 > 0;
}

void func_675(bool bParam0)
{
	if (func_1339(1024))
	{
		func_198(1, 1);
		func_1340(1024);
		if (bParam0)
		{
			Var0.f_2 = 0;
			Var0.f_3 = get_hash_key("IB_ACCEPT");
			Var0.f_3.f_3 = 0;
			Global_1194053->f_121.f_1 = func_654(&Var0, "NG_PP_JOIN_FAIL_TITLE", "NG_PP_JOIN_FAIL_SUBH", 0, 0, 1);
		}
	}
}

void func_676(var uParam0, var uParam1)
{
	func_1341(uParam0);
}

void func_677(var uParam0)
{
	Global_1572887->f_266.f_28 = { *uParam0 };
}

void func_678(var uParam0)
{
	Global_1572887->f_266.f_50 = { *uParam0 };
}

void func_679(int iParam0)
{
	Global_1572887->f_266.f_2 = iParam0;
}

void func_680(bool bParam0)
{
	if (bParam0)
	{
		func_1342(128);
	}
	if (func_619() == 0)
	{
		func_1343(2);
	}
	func_1344(1);
}

char* func_681(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			sVar0 = "NM_PLAYER_REPORT_CHEATING_DESC";
			break;
		case 1:
			sVar0 = "NM_PLAYER_REPORT_ABUSIVE_DESC";
			break;
		case 2:
			sVar0 = "NM_PLAYER_REPORT_DISRUPTIVE_DESC";
			break;
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			sVar0 = "NM_PLAYER_REPORT_OFFENSIVE_DESC";
			break;
	}
	return _create_var_string(2, sVar0);
}

void func_682(var uParam0, char* sParam1, char* sParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, char[4] cParam19, char* sParam20)
{
	func_37();
	Global_1940311->f_1433.f_8378 = func_654(&uParam0, cParam19, sParam20, 0, 0, 1);
}

bool func_683(var uParam0)
{
	if (func_1345(uParam0))
	{
		return false;
	}
	if (func_1346(uParam0))
	{
		return false;
	}
	if (_0x0f99f6436528a089(uParam0->f_1) && uParam0->f_1 == _0x901e0dc25080c8b9(player_id()))
	{
		return false;
	}
	if (func_1347())
	{
		return false;
	}
	if (_0xd6f6acf4392187fb(uParam0->f_1) && _0x0f99f6436528a089(uParam0->f_1))
	{
		if (_0x7933754f260b428a(_0x4be6c13a45cca8ec(uParam0->f_1)) > 0)
		{
			return false;
		}
		if (uParam0->f_4 && !uParam0->f_3)
		{
			if (!func_1348(&(uParam0->f_29)))
			{
				return false;
			}
		}
	}
	else if (uParam0->f_3)
	{
		iVar0 = network_get_player_from_gamer_handle(&(uParam0->f_29));
		if (network_are_handles_the_same(&(uParam0->f_29), &(Global_1296859->f_1)))
		{
			return true;
		}
		if (network_is_gamer_in_my_session(&(uParam0->f_29)))
		{
			if ((!_0x424b17a7dc5c90bc(iVar0) || !_0x0f99f6436528a089(_0x901e0dc25080c8b9(iVar0))) || _0x7933754f260b428a(iVar0) > 0)
			{
				return false;
			}
		}
		else if (!func_685(uParam0->f_2))
		{
			return false;
		}
	}
	else
	{
		return false;
	}
	return true;
}

bool func_684(int iParam0, int iParam1)
{
	if (Global_1194053->f_1 != 0)
	{
		return true;
	}
	if (_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())))
	{
		if (_0x424b17a7dc5c90bc(player_id()))
		{
			_0x0a04a07bc3074edb(1);
		}
		else
		{
			_0x0a04a07bc3074edb(0);
		}
	}
	func_1349(iParam0);
	iVar0 = _0xc088ff658b2e51da();
	iVar1 = 0;
	while (iVar1 <= (iVar0 - 1))
	{
		if (&Global_1194053->f_503[iVar1] == iParam0)
		{
			Global_1194053->f_492 = iVar1;
		}
		else
		{
			iVar1++;
		}
	}
	Global_1194053->f_14 = { Global_1194053->f_503[Global_1194053->f_492]->f_19 };
	Global_1194053->f_14.f_7 = iParam0;
	if (network_is_gamer_in_my_session(&(Global_1194053->f_14)))
	{
		iVar2 = network_get_player_from_gamer_handle(&(Global_1194053->f_14));
		if (network_is_player_active(iVar2))
		{
			iVar3 = _0x901e0dc25080c8b9(iVar2);
			Global_1194053->f_14.f_9 = iVar3;
		}
	}
	func_1350(4);
	func_197(32);
	func_648(4);
	Var4 = { func_650() };
	if (network_are_handles_the_same(&(Global_1194053->f_503[iVar1]->f_19), &Var4) && iParam1 == 1)
	{
		func_197(16);
	}
	return true;
}

bool func_685(int iParam0)
{
	if (func_1347())
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Global_1194053->f_28.f_22[iVar0] == iParam0 && iParam0 != 0)
		{
			return ((Global_1194053->f_28.f_22[iVar0]->f_1 && Global_1194053->f_28.f_22[iVar0]->f_2) && Global_1194053->f_28.f_22[iVar0]->f_3 < Global_1194053->f_28.f_22[iVar0]->f_4);
		}
		iVar0++;
	}
	return false;
}

bool func_686(var uParam0)
{
	if (Global_1194053->f_121.f_2 != 0)
	{
		return false;
	}
	func_1351(1);
	Global_1194053->f_121 = uParam0;
	return true;
}

bool func_687(int iParam0)
{
	if (Global_1194053->f_1 == 6 || Global_1194053->f_1 == 7)
	{
		return true;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	if (_0x0f99f6436528a089(_0x901e0dc25080c8b9(iParam0)) && _0x7933754f260b428a(iParam0) > 0)
	{
		return false;
	}
	Var0 = { func_573(iParam0) };
	Var7.f_18 = 10;
	iVar106 = 0;
	while (iVar106 <= (_0xc084ff658b2e61da(&Var0) - 1))
	{
		if (_0xc084ff658b2e71da(&Var0, iVar106, &Var7))
		{
			if (Var7.f_9 == 1 && Var7 != 0)
			{
				if (func_1352(Var7))
				{
					func_648(2);
					return func_684(Var7, 0);
				}
				else if (Var7.f_17 < 10)
				{
					Global_1194053->f_14 = { Var0 };
					Global_1194053->f_14.f_7 = Var7;
					Global_1194053->f_14.f_9 = _0x901e0dc25080c8b9(iParam0);
					func_1350(6);
					func_197(32);
					func_648(2);
					if (_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())))
					{
						_0x0a04a07bc3074edb(_0x424b17a7dc5c90bc(player_id()));
					}
					return true;
				}
			}
		}
		iVar106++;
	}
	return false;
}

bool func_688()
{
	if (func_1353(1))
	{
		return false;
	}
	return true;
}

char* func_689(int iParam0, bool bParam1, int iParam2)
{
	sVar0 = "Invalid Posse";
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return sVar0;
	}
	iVar1 = _0x4be6c13a45cca8ec(iParam0);
	if (network_is_player_active(iVar1))
	{
		if (func_396(iParam0))
		{
			iVar2 = iVar1;
			if (iVar2 >= 0 && iVar2 < 32)
			{
				if (Global_1102219->f_17 != (*Global_1100469)[iVar2]->f_17)
				{
					sVar0 = func_391(iParam0, bParam1, iParam2);
					return sVar0;
				}
			}
			if (!_0x595f028698072dd9(-1) && is_orbis_version())
			{
				sVar0 = func_391(iParam0, bParam1, iParam2);
			}
			else
			{
				Var3 = { func_573(iVar1) };
				iVar21 = 0;
				while (iVar21 <= (_0xc084ff658b2e61da(&Var3) - 1))
				{
					if (_0xc084ff658b2e81da(&Var3, iVar21, &Var10) && Var10.f_9)
					{
						iVar20 = 1;
						if (iParam2 == 0)
						{
							sVar0 = func_1128(func_1354(Var10.f_1), 109029619);
						}
						else
						{
							sVar0 = func_1128(func_1354(Var10.f_1), iParam2);
						}
					}
					else
					{
						iVar21++;
					}
				}
				if (iVar20 == 0)
				{
					return func_391(iParam0, bParam1, iParam2);
				}
				if (func_1355(func_1354(Var10.f_1)))
				{
					if (bParam1 == 1 && func_1356(iVar1, sVar0))
					{
						sVar0 = func_391(iParam0, bParam1, iParam2);
					}
				}
				else
				{
					func_391(iParam0, bParam1, iParam2);
				}
			}
		}
		else
		{
			sVar0 = func_391(iParam0, bParam1, iParam2);
		}
	}
	return sVar0;
}

var func_690(char* sParam0, char* sParam1, int iParam2)
{
	sVar0 = _create_var_string(10, sParam0, func_1128(sParam1, iParam2));
	uVar1 = func_670(sVar0, -2, 0, 0, 0, 1);
	return uVar1;
}

void func_691(int iParam0)
{
	if (_0xd6f6acf4392187fb(iParam0) && iParam0 == _0x901e0dc25080c8b9(player_id()))
	{
		func_648(2);
		func_1357(2, 1);
		return;
	}
	if ((Global_1194053->f_2 == 3 || Global_1194053->f_2 == 4) || Global_1194053->f_2 == 5)
	{
		return;
	}
	if (_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())))
	{
		_0x0a04a07bc3074edb(_0x424b17a7dc5c90bc(player_id()));
	}
	_0xc08aff658b2e51da(&iVar0);
	if (iVar0 != 0)
	{
		_0xc08bff658b2e51da(0);
	}
	Global_1194053->f_14.f_7 = 0;
	Global_1194053->f_14.f_9 = iParam0;
	func_648(2);
	func_1358(3);
}

float func_692(int iParam0)
{
	iVar51 = _0xd1bf325c8252a982(iParam0, &Var0);
	if (iVar51 == 0)
	{
		return uVar50;
	}
	iVar52 = 0;
	iVar52 = 0;
	while (iVar52 <= (iVar51 - 1))
	{
		iVar53 = network_get_player_from_gamer_handle(Var0[iVar52]);
		if (network_is_player_active(iVar53))
		{
			_0x31010318ba9897ac(&uVar50, iVar53);
		}
		iVar52++;
	}
	return uVar50;
}

void func_693(var uParam0)
{
	if (!_0x179a6f0ee2e79026(&uParam0))
	{
		return;
	}
	Var0.f_16.f_1 = -1;
	Var0.f_16.f_2 = -1;
	Var0.f_16.f_3 = -1;
	Var0.f_16.f_3.f_1 = -1;
	Var0 = 51;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	Var0.f_4 = 3;
	trigger_script_event(1, &Var0, 27, 29, &uParam0);
}

int func_694(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_1359() && !bParam3)
	{
		return 0;
	}
	if (!bParam2)
	{
		func_1360(0);
	}
	func_1361();
	if (func_1362(255, 0))
	{
		if (_0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(player_id())) != player_id())
		{
			if (!bParam2 && bParam1)
			{
				func_195(1);
			}
		}
	}
	if (network_is_session_active())
	{
		_0x0ae241a4a9adeeec(0);
	}
	func_1363();
	func_1364(21);
	Global_1572887->f_106.f_91.f_1 = Global_1572887->f_106.f_9;
	Global_1572887->f_106.f_91.f_2 = iParam0;
	Global_1572887->f_106.f_91.f_4 = (get_game_timer() - Global_1572887->f_106.f_76);
	func_1365();
	return 1;
}

bool func_695(int iParam0)
{
	return _unlock_is_unlocked(func_1366(iParam0));
}

int func_696(int iParam0)
{
	iVar0 = 0;
	iVar1 = 1;
	if (func_1367() > 0)
	{
		iVar1 = func_1367();
	}
	switch (iParam0)
	{
		case 18:
			if (func_695(2) && func_1368(2) >= iVar1)
			{
				iVar2[iVar0] = 2;
				iVar0++;
			}
			if (func_695(3) && func_1368(3) >= iVar1)
			{
				iVar2[iVar0] = 3;
				iVar0++;
			}
			if (func_695(4) && func_1368(4) >= iVar1)
			{
				iVar2[iVar0] = 4;
				iVar0++;
			}
			break;
		case 8:
			if (func_695(7) && func_1368(7) >= iVar1)
			{
				iVar2[iVar0] = 7;
				iVar0++;
			}
			if (func_695(8) && func_1368(8) >= iVar1)
			{
				iVar2[iVar0] = 8;
				iVar0++;
			}
			if (func_695(9) && func_1368(9) >= iVar1)
			{
				iVar2[iVar0] = 9;
				iVar0++;
			}
			break;
		case 15:
			if (func_695(15) && func_1368(15) >= iVar1)
			{
				iVar2[iVar0] = 15;
				iVar0++;
			}
			if (func_695(16) && func_1368(16) >= iVar1)
			{
				iVar2[iVar0] = 16;
				iVar0++;
			}
			break;
		default:
			if (func_695(iParam0) && func_1368(iParam0) >= iVar1)
			{
				iVar2[iVar0] = iParam0;
				iVar0++;
			}
			break;
	}
	iVar6 = get_random_int_in_range(0, 65536);
	iVar7 = (iVar6 % iVar0);
	if (iVar7 < 0 || iVar7 >= 3)
	{
		iVar7 = 0;
	}
	return &(iVar2[iVar7]);
}

void func_697(int iParam0)
{
	Global_1572887->f_106.f_14 = iParam0;
}

int func_698(int iParam0)
{
	if (iParam0 <= -1)
	{
		return 0;
	}
	if (iParam0 == 10)
	{
		return 6;
	}
	if (iParam0 == 11)
	{
		return 5;
	}
	if (iParam0 == 12)
	{
		return 7;
	}
	if (iParam0 == 13)
	{
		return 8;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_265377->f_117359.f_6725[iVar0] == &Global_265354->f_1[iParam0])
		{
			return &(Global_265377->f_117359.f_6758[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

int func_699(int iParam0, int iParam1, int iParam2, int iParam3, struct<2> Param4, int iParam6, int iParam7, bool bParam8, int iParam9, int iParam10)
{
	if (!func_1369(iParam2, iParam3))
	{
		return 0;
	}
	if (func_225() && Global_1572887->f_106.f_75 != 9)
	{
		return 0;
	}
	if (!func_1370(Global_1296859->f_10))
	{
		return 0;
	}
	Var0.f_3 = -1;
	Var0.f_3.f_1 = -1;
	Var0.f_5 = 1;
	Var0.f_6 = 7;
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = 1;
	Var0.f_3 = { Param4 };
	func_1371(&Var0);
	func_1372(iParam2, iParam3, iParam7, 1);
	func_1373(Param4, 1);
	func_1374(iParam6);
	func_1375(iParam9);
	func_1376(iParam10, 1);
	if ((func_1112(Param4) && !func_1377()) && &Global_1211325 == -1)
	{
		func_1378(Param4);
	}
	_0x0ae241a4a9adeeec(1);
	if (iParam2 != 2)
	{
		func_1379();
	}
	if (func_1377())
	{
		func_1380(Param4);
	}
	else if (iParam2 == 3)
	{
		if (!func_1381(268435456))
		{
			if (!_is_app_active(1433015236))
			{
				func_1019(1, 0);
			}
		}
	}
	else
	{
		if (iParam2 == 2)
		{
			Var65 = 255;
			Var65.f_18 = 2147483647;
			Var65.f_21.f_2 = -504335712;
			Var65.f_21.f_4 = 3;
			Var65.f_26 = -1;
			Var65.f_30 = 1;
			Var65.f_31 = 1;
			Var65.f_32 = 1;
			Var65.f_33 = 32;
			Var65.f_34 = 1;
			Var65.f_35 = -2;
			Var65.f_47.f_5 = -1;
			Var65.f_53 = -1;
			Var65.f_53.f_1 = -1;
			Var65.f_55.f_3 = -1;
			func_1382(&Var65, iParam3, -1, -1, 3);
			StringCopy(&cVar57, func_1128(&(Var65.f_37), 109029619), 64);
		}
		else if (iParam2 == 1)
		{
			StringCopy(&cVar57, _create_var_string(2, func_1383(iParam3)), 64);
		}
		else
		{
			StringCopy(&cVar57, _create_var_string(2, func_1384(func_629(), iParam3)), 64);
		}
		_databinding_write_data_string(Global_1572887->f_106.f_151, &cVar57);
		_databinding_write_data_string(Global_1572887->f_106.f_153, _create_var_string(2, "NM_PLAYLIST_MATCHMADE_PLAYERS", 1));
		_databinding_remove_data_entry(Global_1572887->f_106.f_154);
		_databinding_remove_data_entry(Global_1572887->f_106.f_155);
		_databinding_remove_data_entry(Global_1572887->f_106.f_156);
		_databinding_remove_data_entry(Global_1572887->f_106.f_157);
		_databinding_remove_data_entry(Global_1572887->f_106.f_158);
		_databinding_remove_data_entry(Global_1572887->f_106.f_159);
	}
	if ((!_0x424b17a7dc5c90bc(player_id()) && func_1362(255, 0)) && !bParam8)
	{
		func_664("NM_MATCHMAKING_WARNING");
	}
	func_1364(10);
	return 1;
}

void func_700(int iParam0)
{
	Global_262151 = (Global_262151 || iParam0);
}

void func_701(var uParam0)
{
	uParam0->f_1 = 0;
}

bool func_702()
{
	if (Global_1102219->f_26.f_3337 == 9)
	{
		return false;
	}
	if (Global_1102219->f_26.f_3337 == 10)
	{
		return false;
	}
	if (Global_1102219->f_26.f_3337 == 11)
	{
		return false;
	}
	if (func_706(2048))
	{
		return true;
	}
	if (func_705(1))
	{
		return true;
	}
	if (Global_1102219->f_26.f_3337 != 0)
	{
		return true;
	}
	return false;
}

bool func_703(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		return (Global_1102219->f_3 && iParam0) != 0;
	}
	return ((*Global_1100469)[iParam1]->f_3 && iParam0) != 0;
}

void func_704(int iParam0)
{
	Global_1102219->f_26.f_12 = iParam0;
}

bool func_705(int iParam0)
{
	return (Global_1102219->f_26.f_7 && iParam0) != 0;
}

bool func_706(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) != 0;
}

bool func_707(int iParam0)
{
	return (Global_1102219->f_4[Global_1106305[iParam0]] && (*Global_1106305)[iParam0]->f_1) == (*Global_1106305)[iParam0]->f_1;
}

int func_708()
{
	if (&Global_1102219 <= 5)
	{
		return &Global_1102219;
	}
	if (&Global_1102219 <= 22)
	{
		return 4;
	}
	if (&Global_1102219 <= 25)
	{
		return 3;
	}
	return 26;
}

int func_709(int iParam0)
{
	if (func_1385(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

void func_710(int iParam0)
{
	if (func_1386(iParam0))
	{
		return;
	}
	Global_1102219->f_26.f_9 = (Global_1102219->f_26.f_9 || iParam0);
}

int func_711(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_1;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 26;
	}
	if (&Global_1296859->f_22[iParam0])
	{
		return (*Global_1100469)[iParam0]->f_1;
	}
	return 26;
}

int func_712(int iParam0)
{
	if (func_1387(&(Global_1102219->f_4), iParam0, 5))
	{
		return 1;
	}
	return 0;
}

bool func_713(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_714(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_715(var uParam0)
{
	*uParam0 = { Var0 };
}

void func_716(struct<29> Param0, var uParam29, int iParam30)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			if (does_entity_exist(Param0.f_4))
			{
			}
			break;
	}
	if (Param0.f_16)
	{
	}
	if (_does_volume_exist(Param0.f_27) && Param0.f_28)
	{
	}
}

void func_717(struct<6> Param0, var uParam6, var uParam7, var uParam8, int iParam9)
{
	switch (Param0.f_5)
	{
		case 1:
			break;
		case 2:
			break;
		case 3:
			break;
	}
}

bool func_718(int iParam0)
{
	if (_get_number_of_references_of_script_with_name_hash(1814880805) > 0)
	{
		*iParam0 = 1814880805;
		return true;
	}
	else if (_get_number_of_references_of_script_with_name_hash(-814065802) > 0)
	{
		*iParam0 = -814065802;
		return true;
	}
	else if (_get_number_of_references_of_script_with_name_hash(-701235215) > 0)
	{
		*iParam0 = -701235215;
		return true;
	}
	return false;
}

int func_719(int iParam0, int iParam1, int iParam2)
{
	if (Global_1572887->f_360.f_4 != 0)
	{
		return 0;
	}
	if (Global_1572887->f_266 >= 6 && Global_1572887->f_266 < 23)
	{
		return 0;
	}
	Global_1572887->f_360.f_4 = 2;
	Global_1572887->f_360.f_5 = (Global_1572887->f_360.f_5 || iParam1);
	Global_1572887->f_360.f_6 = iParam0;
	Global_1572887->f_360.f_25 = iParam2;
	Global_1572887->f_360.f_26 = 0;
	if (func_415(iParam1, 128))
	{
		func_628(&(Global_1572887->f_360.f_5), 2);
	}
	return 1;
}

void func_720(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5, int iParam6)
{
	if (&Global_1051139)
	{
		return;
	}
	Global_1051139->f_2 = iParam0;
	Global_1051139->f_3 = iParam1;
	Global_1051139->f_4 = iParam2;
	Global_1051139->f_6 = iParam3;
	Global_1051139->f_5 = iParam4;
	if (!bParam5)
	{
		iVar0 = get_hash_of_this_script_name();
	}
	else
	{
		iVar0 = iParam6;
	}
	Global_1051139->f_1 = iVar0;
	Global_1051139 = 1;
}

int func_721(int iParam0)
{
	if (Global_1572887->f_360.f_4 != 0)
	{
		return 0;
	}
	if (Global_1572887->f_266 >= 6 && Global_1572887->f_266 < 23)
	{
		return 0;
	}
	Global_1572887->f_360.f_4 = 4;
	Global_1572887->f_360.f_21 = iParam0;
	Global_1572887->f_360.f_5 = 18;
	Global_1572887->f_360.f_25 = 0;
	Global_1572887->f_360.f_26 = 0;
	_0xc505036a35afd01b(true);
	return 1;
}

struct<4> func_722(var uParam0)
{
	Var0 = _databinding_read_data_int(*uParam0);
	Var0.f_1 = _databinding_read_data_int(uParam0->f_1);
	Var0.f_2 = _databinding_read_data_int(uParam0->f_2);
	Var0.f_3 = _databinding_read_data_int(uParam0->f_3);
	return Var0;
}

int func_723(int iParam0, char* sParam1, int iParam2, bool bParam3, bool bParam4, int iParam5)
{
	if (!func_586(iParam0, 0))
	{
		return -1;
	}
	if (func_1050(iParam0) != 26423971)
	{
		return -1;
	}
	if (func_1388())
	{
		bParam3 = true;
	}
	if (iParam5 == -570078785 || iParam5 == -915411861)
	{
		iVar0 = (func_1076(iParam0, iParam5, 1, 0, 1, 2084597891) * iParam2);
		iVar1 = 0;
		if (iVar0 <= 0)
		{
			iVar1 = (func_1076(iParam0, iParam5, 1, 0, 1, 773203532) * iParam2);
			if (iVar1 <= 0)
			{
				return -1;
			}
		}
		if (!_network_is_money_balance_not_less_than(iVar0, iVar1))
		{
			return -1;
		}
	}
	else if (func_1302(iParam0, iParam5, &Var2, &iVar33, 1, 0))
	{
		iVar35 = 0;
		while (iVar35 < iVar33)
		{
			iVar34 = (Var2[iVar35]->f_1 * iParam2);
			if (!func_1389(&(Var2[iVar35]), 0, bParam3, 0) >= iVar34)
			{
				return -1;
			}
			iVar35++;
		}
	}
	else
	{
		return -1;
	}
	if (!bParam3 && func_1390(0))
	{
		if (iVar0 > 0)
		{
			func_1036(2084597891, iVar0, -142743235, 0, 0);
		}
		else if (iVar1 > 0)
		{
			func_1036(773203532, iVar1, -142743235, 0, 0);
		}
		else if (func_1391(iParam5))
		{
			iVar35 = 0;
			while (iVar35 < iVar33)
			{
				iVar34 = (Var2[iVar35]->f_1 * iParam2);
				func_1036(&(Var2[iVar35]), iVar34, -142743235, 0, 0);
				iVar35++;
			}
		}
		return -1;
	}
	Var36.f_9 = 1;
	Var36.f_11 = -1591664384;
	Var36.f_8 = iParam0;
	Var36.f_9 = iParam2;
	Var36.f_13 = iParam5;
	Var36.f_12 = -142743235;
	iVar52 = func_1392(-1406934746, &Var36, bParam4);
	if (iVar52 == -1)
	{
	}
	else
	{
		Var53.f_7 = -142743235;
		Var53.f_16 = -1;
		StringCopy(&(Var53.f_12), sParam1, 32);
		func_1393(iVar52, Var53);
	}
	return iVar52;
}

bool func_724(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (func_1394(iParam0, iParam1))
		{
			return true;
		}
		return false;
	}
	func_1395(iParam0, iParam1, 0);
	if (func_1396(Global_1904087, 2))
	{
		return true;
	}
	return false;
}

bool func_725(struct<4> Param0, int iParam4, int iParam5)
{
	if (func_724(&Param0, 0, 1) && iParam5 == 2)
	{
		return false;
	}
	Var0 = { func_733() };
	iVar4 = 0;
	while (iVar4 < 20)
	{
		if (!_0x4c543d5dfcd2dafd(Global_1291734->f_11.f_162[iVar4], &Param0) && !_0x4c543d5dfcd2dafd(Global_1291734->f_11.f_162[iVar4], &Var0))
		{
		}
		else
		{
			Global_1291734->f_11.f_162[iVar4]->f_5 = Global_1296859->f_21 + 120;
			*Global_1291734->f_11.f_162[iVar4] = { Param0 };
			Global_1291734->f_11.f_162[iVar4]->f_6 = iParam5;
			Global_1291734->f_11.f_162[iVar4]->f_4 = iParam4;
			return true;
		}
		iVar4++;
	}
	return false;
}

int func_726(var uParam0, int iParam1, int iParam2, var uParam3, int iParam4, bool bParam5)
{
	if (!func_1395(&uParam0, iParam4, 0))
	{
		return 0;
	}
	func_1397(Global_1904087, 2, bParam5);
	if (!func_1398(Global_1904087))
	{
		return 0;
	}
	func_1399(&uParam0, iParam4, bParam5);
	return 1;
}

int func_727(var uParam0)
{
	if (!func_1400(uParam0, &iVar0))
	{
		return 0;
	}
	func_1401(iVar0, 0, 100);
	func_1401(iVar0, 1, 100);
	return 1;
}

void func_728(int iParam0)
{
	if (!func_1402(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	clear_bit(Global_1904087->f_496[iVar0], iVar1);
}

void func_729(int iParam0, int iParam1)
{
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0 = 47;
	Var0.f_1 = player_id();
	Var0.f_2 = get_network_time_accurate();
	Var0.f_4 = iParam0;
	Var0.f_5 = iParam1;
	if (!_network_is_player_index_valid(Var0.f_1))
	{
		return;
	}
	if (((((((((((Var0.f_4 == 2 || Var0.f_4 == 3) || Var0.f_4 == 6) || Var0.f_4 == 7) || Var0.f_4 == 8) || Var0.f_4 == 9) || Var0.f_4 == 10) || Var0.f_4 == 11) || Var0.f_4 == 12) || Var0.f_4 == 13) || Var0.f_4 == 14) || Var0.f_4 == 15)
	{
		iVar8 = 0;
		while (iVar8 < 32)
		{
			iVar7 = int_to_playerindex(iVar8);
			if (!network_is_player_active(iVar7))
			{
			}
			else
			{
				_0x31010318ba9897ac(&uVar6, iVar8);
			}
			iVar8++;
		}
	}
	else
	{
		_0x31010318ba9897ac(&uVar6, network_player_id_to_int());
	}
	trigger_script_event(1, &Var0, 6, 0, &uVar6);
}

void func_730(int iParam0)
{
	if (!func_1402(iParam0))
	{
		return;
	}
	iVar0 = (iParam0 / 32);
	iVar1 = (iParam0 % 32);
	set_bit(Global_1904087->f_496[iVar0], iVar1);
}

void func_731()
{
	if (func_1403(2, 255))
	{
		return;
	}
	func_1404(2);
}

bool func_732()
{
	if (func_501(34))
	{
		return true;
	}
	if (func_1405() != 1)
	{
		return true;
	}
	return false;
}

struct<4> func_733()
{
	return Var0;
}

int func_734(int iParam0, int iParam1)
{
	if (func_501(34))
	{
		return 0;
	}
	if (func_732())
	{
		return 0;
	}
	if (!_0xb881ca836cc4b6d4(iParam0))
	{
		return 0;
	}
	Global_1291734->f_929 = { *iParam0 };
	Global_1291734->f_929.f_4 = iParam1;
	func_730(34);
	return 1;
}

char* func_735()
{
	return "NetStableGUID1";
}

char* func_736()
{
	return "NetStableGUID2";
}

char* func_737()
{
	return "NetStableGUID3";
}

char* func_738()
{
	return "NetStableGUID4";
}

int func_739(struct<4> Param0, int iParam4, int iParam5, int iParam6)
{
	if (func_724(&Param0, 0, 1) && iParam5 == 2)
	{
		return 0;
	}
	Var1 = { func_733() };
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (_0x4c543d5dfcd2dafd(Global_1291734->f_11.f_162[iVar0], &Param0))
		{
			if (Global_1291734->f_11.f_162[iVar0]->f_6 == 0)
			{
				return 0;
			}
		}
	else
	{
		}
		else if (Global_1291734->f_11.f_162[iVar0]->f_6 == 0)
		{
		}
		else
		{
			if (iParam4 > Global_1291734->f_11.f_162[iVar0]->f_5)
			{
				Global_1291734->f_11.f_162[iVar0]->f_5 = iParam4;
			}
			*Global_1291734->f_11.f_162[iVar0] = { Param0 };
			Global_1291734->f_11.f_162[iVar0]->f_6 = iParam5;
			Global_1291734->f_11.f_162[iVar0]->f_4 = iParam6;
			return 1;
			iVar0++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (!_0x4c543d5dfcd2dafd(Global_1291734->f_11.f_162[iVar0], &Var1))
		{
		}
		else
		{
			Global_1291734->f_11.f_162[iVar0]->f_5 = iParam4;
			*Global_1291734->f_11.f_162[iVar0] = { Param0 };
			Global_1291734->f_11.f_162[iVar0]->f_6 = iParam5;
			Global_1291734->f_11.f_162[iVar0]->f_4 = iParam6;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_740(int iParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1251(*iParam0, &Var0, bParam1, 0, -1))
	{
		return 0;
	}
	func_1406(iParam0);
	if (func_1407(iParam0, bParam1))
	{
		func_1148(iParam0, 0);
		return 1;
	}
	Var14 = { func_505(bParam1, 0, 1, 3) };
	if (_0x4c543d5dfcd2dafd(&Var14, iParam0))
	{
		func_1148(iParam0, 0);
		return 1;
	}
	if (!func_1408(iParam0, 1, bParam1))
	{
		return 0;
	}
	func_1148(iParam0, 1);
	return 1;
}

int func_741(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 3;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 4:
				return 0;
			case 5:
				return 1;
			case 6:
				return 2;
			case 7:
				return 3;
			default:
				break;
		}
	}
	return -1;
}

int func_742(var uParam0, int iParam1, bool bParam2)
{
	Var0.f_9 = -1591664384;
	if (!func_1251(*uParam0, &Var0, bParam2, 0, -1))
	{
		return 0;
	}
	iVar14 = func_757(iParam1, 0);
	if (!func_1409(iVar14))
	{
		return 0;
	}
	*Global_17411.f_55.f_61[iVar14] = { *uParam0 };
	return 1;
}

struct<4> func_743(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = _0xf49f14462f0ae27c(player_id());
			break;
		case 2:
			iVar0 = _0xb9050a97594c8832(player_id());
			break;
	}
	if (does_entity_exist(iVar0))
	{
		if (((!decor_exist_on(iVar0, func_735()) || !decor_exist_on(iVar0, func_736())) || !decor_exist_on(iVar0, func_737())) || !decor_exist_on(iVar0, func_738()))
		{
			return func_733();
		}
		Var1 = decor_get_int(iVar0, func_735());
		Var1.f_1 = decor_get_int(iVar0, func_736());
		Var1.f_2 = decor_get_int(iVar0, func_737());
		Var1.f_3 = decor_get_int(iVar0, func_738());
		return Var1;
	}
	return func_733();
}

bool func_744(var uParam0)
{
	if (((*uParam0 == 0 && uParam0->f_1 == 0) && uParam0->f_2 == 0) && uParam0->f_3 == 0)
	{
		return false;
	}
	return true;
}

void func_745()
{
	func_728(97);
	func_728(98);
	func_728(99);
	func_728(100);
	Global_1291734->f_581.f_77 = { func_733() };
	Global_1291734->f_581.f_81 = -1;
	Global_1904087->f_536 = 0;
	Global_1904087->f_537 = get_game_timer();
}

void func_746()
{
	if (func_760(8, 255))
	{
		return;
	}
	func_730(100);
	func_729(6, 3);
}

int func_747(struct<4> Param0, int iParam4, int iParam5, int iParam6)
{
	if (func_724(&Param0, 2, 1) && iParam5 == 2)
	{
		return 0;
	}
	Var1 = { func_733() };
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (_0x4c543d5dfcd2dafd(Global_1291734->f_581.f_107[iVar0], &Param0))
		{
			if (Global_1291734->f_581.f_107[iVar0]->f_6 == 0)
			{
				return 0;
			}
		}
	else
	{
		}
		else if (Global_1291734->f_581.f_107[iVar0]->f_6 == 0)
		{
		}
		else
		{
			if (iParam4 > Global_1291734->f_581.f_107[iVar0]->f_5)
			{
				Global_1291734->f_581.f_107[iVar0]->f_5 = iParam4;
			}
			*Global_1291734->f_581.f_107[iVar0] = { Param0 };
			Global_1291734->f_581.f_107[iVar0]->f_6 = iParam5;
			Global_1291734->f_581.f_107[iVar0]->f_4 = iParam6;
			return 1;
			iVar0++;
		}
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (!_0x4c543d5dfcd2dafd(Global_1291734->f_581.f_107[iVar0], &Var1))
		{
		}
		else
		{
			Global_1291734->f_581.f_107[iVar0]->f_5 = iParam4;
			*Global_1291734->f_581.f_107[iVar0] = { Param0 };
			Global_1291734->f_581.f_107[iVar0]->f_6 = iParam5;
			Global_1291734->f_581.f_107[iVar0]->f_4 = iParam6;
			return 1;
		}
		iVar0++;
	}
	return 0;
}

int func_748(int iParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	if (!func_1251(*iParam0, &Var0, bParam1, 0, -1))
	{
		return 0;
	}
	func_1410(iParam0);
	if (func_1411(iParam0, bParam1))
	{
		func_754(iParam0, 1);
		return 1;
	}
	Var14 = { func_255(bParam1, 0, 1, 3) };
	if (_0x4c543d5dfcd2dafd(&Var14, iParam0))
	{
		func_754(iParam0, 1);
		return 1;
	}
	if (!func_1412(iParam0, 1, bParam1))
	{
		return 0;
	}
	func_754(iParam0, 1);
	return 1;
}

int func_749(int iParam0, int iParam1)
{
	if (func_501(99))
	{
		return 0;
	}
	if (func_501(97))
	{
		return 0;
	}
	if (!_0xb881ca836cc4b6d4(iParam0))
	{
		return 0;
	}
	Global_1291734->f_581.f_77 = { *iParam0 };
	Global_1291734->f_581.f_81 = iParam1;
	if (does_entity_exist(_0xb9050a97594c8832(player_id())) || does_entity_exist(_0xf49f14462f0ae27c(player_id())))
	{
		func_730(98);
	}
	else
	{
		func_1413(2);
	}
	func_730(97);
	return 1;
}

int func_750(var uParam0, int iParam1, bool bParam2)
{
	Var0.f_9 = -1591664384;
	if (!func_1251(*uParam0, &Var0, bParam2, 0, -1))
	{
		return 0;
	}
	iVar14 = func_757(iParam1, 2);
	if (!func_1409(iVar14))
	{
		return 0;
	}
	*Global_17411.f_55.f_61[iVar14] = { *uParam0 };
	return 1;
}

bool func_751(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var24 = { func_522(0, -1591664384, -1591664384, -1591664384, 0, 0, -2072933068) };
	if (func_523(&Var24, &iVar38, &iVar39, bParam1))
	{
		Var40.f_9 = -1591664384;
		iVar54 = 0;
		while (iVar54 < iVar39)
		{
			if (func_1414(&Var40, iVar54, iVar38, iVar39))
			{
				if (func_1415(&Var40, &Var0, 0))
				{
					if (func_1416(&(Var0.f_23), 16))
					{
						*uParam0 = { Var0 };
						func_508(iVar38);
						return true;
					}
				}
			}
			iVar54++;
		}
		func_508(iVar38);
	}
	return false;
}

struct<4> func_752()
{
	return Global_1291734->f_581.f_274;
}

bool func_753()
{
	return Global_1291734->f_581.f_278 > Global_1296859->f_21;
}

void func_754(int iParam0, bool bParam1)
{
	Global_1291734->f_581.f_270 = { *iParam0 };
	if (bParam1)
	{
		Global_1291734->f_581.f_278 = Global_1296859->f_21 + 10;
	}
}

int func_755(int iParam0)
{
	iVar0 = func_1417(iParam0);
	bVar1 = func_1159(func_162(), 0, 0);
	if (!bVar1)
	{
		return 3;
	}
	return iVar0;
}

bool func_756(int iParam0)
{
	return func_1418(&(Global_3145858->f_6), iParam0);
}

int func_757(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		switch (iParam0)
		{
			case 0:
				return 0;
			case 1:
				return 1;
			case 2:
				return 2;
			case 3:
				return 3;
			default:
				break;
		}
	}
	else
	{
		switch (iParam0)
		{
			case 0:
				return 4;
			case 1:
				return 5;
			case 2:
				return 6;
			case 3:
				return 7;
			default:
				break;
		}
	}
	return -1;
}

bool func_758(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var24 = { func_522(0, -1591664384, -1591664384, -1591664384, 0, 0, -2072933068) };
	if (func_523(&Var24, &iVar38, &iVar39, bParam1))
	{
		Var40.f_9 = -1591664384;
		iVar54 = 0;
		while (iVar54 < iVar39)
		{
			if (func_1414(&Var40, iVar54, iVar38, iVar39))
			{
				if (func_1415(&Var40, &Var0, 0))
				{
					if (func_1416(&(Var0.f_23), 32))
					{
						*uParam0 = { Var0 };
						func_508(iVar38);
						return true;
					}
				}
			}
			iVar54++;
		}
		func_508(iVar38);
	}
	return false;
}

struct<4> func_759(bool bParam0)
{
	Var2 = { func_522(0, -1591664384, -1591664384, -1591664384, 0, 0, -2072933068) };
	Var16.f_9 = -1591664384;
	if (!func_523(&Var2, &iVar0, &iVar1, bParam0))
	{
		return Var16;
	}
	iVar30 = 0;
	while (iVar30 < iVar1)
	{
		if (!func_1414(&Var16, iVar30, iVar0, iVar1))
		{
		}
		else if (_0xb881ca836cc4b6d4(&Var16))
		{
		}
		else
		{
			iVar30++;
		}
	}
	func_508(iVar0);
	return Var16;
}

bool func_760(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return ((*Global_1291106)[iParam1]->f_2 && iParam0) != 0;
}

void func_761(int iParam0)
{
	func_729(2, iParam0);
}

void func_762()
{
	iVar0 = _databinding_read_data_int(Global_1940311->f_242.f_2);
	Global_1940311->f_242.f_1185 = iVar0;
	_databinding_write_data_hash_string(Global_1940311->f_242.f_3, func_1419(iVar0));
	func_1420(iVar0);
}

void func_763(struct<7> Param0, char* sParam7)
{
	if (!func_34(Param0))
	{
		return;
	}
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_21 = 1;
	Var0.f_86 = 255;
	Var0.f_87 = -2147483647;
	iVar88 = network_get_player_from_gamer_handle(&Param0);
	iVar89 = iVar88;
	bVar90 = func_1421(&Param0) == false;
	if (is_string_null_or_empty(sParam7))
	{
		if (_network_is_player_index_valid(iVar88) && network_is_player_active(iVar88))
		{
			StringCopy(&(Var0.f_25), func_669(get_player_name(iVar88), 109029619), 128);
		}
	}
	else
	{
		StringCopy(&(Var0.f_25), sParam7, 128);
	}
	if (bVar90)
	{
		Var0.f_2 = func_668(iVar88, 1, -1, 0);
	}
	else
	{
		Var0.f_2 = 1105014447;
	}
	Var0.f_21 = 1;
	Var0.f_20 = 1292500213;
	Var0.f_19 = 469293194;
	if (bVar90)
	{
		if (_0x0ded260a1958a82e(iVar88))
		{
			Var0.f_20 = -2020914324;
		}
		else if (_0xaa35fd9abab490a3(iVar88) && _0xef6f2a35faaf2ed7(iVar88))
		{
			Var0.f_20 = -129728325;
		}
		else
		{
			iVar91 = _0x901e0dc25080c8b9(iVar88);
			if (_0xd6f6acf4392187fb(iVar91))
			{
				if (func_396(iVar91))
				{
					if (func_1422(iVar88, &iVar92))
					{
						switch (iVar92)
						{
							case -482360895:
								Var0.f_20 = 202246788;
								break;
						}
					}
				}
				else if (_0x0f99f6436528a089(iVar91) && _0x424b17a7dc5c90bc(iVar88))
				{
					Var0.f_20 = 202246788;
				}
			}
		}
	}
	if (bVar90)
	{
		Var0.f_61 = 1;
		Var0.f_59 = -1693157378;
		Var0.f_60 = -1120556042;
		Var0.f_57 = 1;
		StringCopy(&(Var0.f_41), func_1423(iVar89), 128);
	}
	else
	{
		Var0.f_61 = 0;
		Var0.f_57 = 0;
	}
	func_1424(&(Global_1940311->f_1433.f_54.f_7), Var0);
}

void func_764()
{
	switch (func_434())
	{
		case -1537476917:
			func_264();
			break;
	}
}

bool func_765()
{
	return Global_1915715->f_22504;
}

bool func_766()
{
	return (func_830() || func_831());
}

void func_767(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_86, bParam1);
			break;
		case 1:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_80, bParam1);
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_95, bParam1);
			break;
		case 2:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_96, bParam1);
			break;
		case 3:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_78, bParam1);
			break;
		case 4:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_81, bParam1);
			break;
		case 5:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_84, bParam1);
			break;
		case 6:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_93, bParam1);
			break;
		case 7:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_88, bParam1);
			break;
		case 8:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_87, bParam1);
			break;
		case 9:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_89, bParam1);
			break;
		case 10:
			_databinding_write_data_bool(Global_1940311->f_1433.f_54.f_91, bParam1);
			break;
	}
}

bool func_768()
{
	if (func_1105(2))
	{
		return false;
	}
	if (func_576(Global_1138962->f_137.f_1, 2))
	{
		if (!func_576(Global_1138962->f_145, 2))
		{
			return false;
		}
	}
	return true;
}

int func_769()
{
	if (func_1105(8))
	{
		return 0;
	}
	if (!_unlock_is_unlocked(2032476253))
	{
		return 0;
	}
	return 1;
}

int func_770()
{
	if (func_1105(32))
	{
		return 0;
	}
	if (!_unlock_is_unlocked(56612678))
	{
		return 0;
	}
	if (func_830())
	{
		return 0;
	}
	if (func_831())
	{
		return 0;
	}
	return 1;
}

void func_771()
{
	Global_1940311->f_1433.f_54 = 0;
}

bool func_772()
{
	iVar2 = player_id();
	if (func_419())
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if ((*Global_1238240)[iVar0]->f_300 & 1 == 0)
		{
		}
		else if (!_0x72b2e00c9bac6789(&(Global_1237665->f_573), iVar0))
		{
		}
		else
		{
			iVar1 = int_to_playerindex(iVar0);
			if (iVar1 == iVar2)
			{
			}
			else if (!network_is_player_active(iVar1))
			{
			}
			else if (_0x3f59fe6f37869576(iVar1, iVar2))
			{
			}
			else if (vdist(get_entity_coords(get_player_ped(iVar2), false, false), get_entity_coords(get_player_ped(iVar1), false, false)) > (Global_1901947->f_166.f_23 * (*Global_1145091)[network_player_id_to_int()]->f_34))
			{
			}
			else
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

void func_773(int iParam0)
{
	iVar0 = iParam0;
	switch (iVar0)
	{
		case 8:
			func_1425();
			break;
	}
}

void func_774()
{
	iVar0 = 0;
	while (iVar0 <= (Global_1940311->f_242.f_1186 - 1))
	{
		iVar1 = _databinding_read_data_int(Global_1940311->f_242.f_14[iVar0]->f_26);
		if (!func_1426(iVar1))
		{
		}
		else
		{
			sVar2 = func_1427(iVar1, iVar0);
			if (!is_string_null_or_empty(sVar2))
			{
				iVar3 = get_hash_key(sVar2);
				iVar4 = iVar3;
			}
			else
			{
				iVar3 = 1700592256;
				iVar4 = 1434360011;
			}
			if (_0x81d7183e7a8eca72(Global_1940311->f_242.f_14[iVar0]->f_22) != iVar3)
			{
				_databinding_write_data_hash_string(Global_1940311->f_242.f_14[iVar0]->f_22, iVar3);
				_databinding_write_data_hash_string(Global_1940311->f_242.f_14[iVar0]->f_23, iVar4);
			}
		}
		iVar0++;
	}
}

var func_775()
{
	return func_1428(Global_1940311->f_1433);
}

void func_776(int iParam0)
{
	func_1430(func_1429() == 0);
	switch (func_1429())
	{
		case 0:
			StringCopy(&cVar0, "POSSE_EMPTY", 128);
			break;
		default:
			StringCopy(&cVar0, "POSSE_EMPTY_CONTENT", 128);
			break;
	}
	func_1431(_create_var_string(2, &cVar0));
	switch (iParam0)
	{
		case 16:
			if (func_624())
			{
				func_149(-303450633);
			}
			break;
		case 14:
			if (func_1304() == 0 && _0xc088ff658b2e51da() == 0)
			{
				func_149(1243396847);
			}
			break;
		case 17:
			Var16.f_38 = 7;
			Var16.f_91 = -1;
			Var16 = { func_191(1) };
			bVar111 = false;
			if (func_222(&Var16))
			{
				if (!func_196(&Var16))
				{
					if (!func_788(&Var16))
					{
						bVar111 = true;
					}
				}
			}
			else
			{
				bVar111 = true;
			}
			if (bVar111)
			{
				func_176(0, 0);
			}
			break;
	}
}

bool func_777(int iParam0)
{
	if (Global_1940311->f_1433.f_2 != -1 && Global_1940311->f_1433.f_2 != iParam0)
	{
		return true;
	}
	return false;
}

void func_778(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	StringCopy(&(uParam0->f_5), "", 64);
	StringCopy(&(uParam0->f_13), "", 128);
	uParam0->f_36 = 0;
	uParam0->f_37 = 0;
	uParam0->f_88 = 0;
	uParam0->f_88.f_2 = 0;
	uParam0->f_91 = -1;
	uParam0->f_92 = 0;
	uParam0->f_93 = 0;
	uParam0->f_94 = 0;
	_copy_memory(&(uParam0->f_29), &uVar0, 7);
	iVar7 = 0;
	while (iVar7 < 7)
	{
		_copy_memory(uParam0->f_38[iVar7], &uVar0, 7);
		iVar7++;
	}
}

bool func_779(int iParam0, var uParam1)
{
	if (iParam0 >= _databinding_get_array_count(Global_1940311->f_1433.f_157.f_1))
	{
		if (!func_1432(-1, uParam1, 0))
		{
			return false;
		}
	}
	if (!func_1433(iParam0, uParam1, 0))
	{
		return false;
	}
	if (func_1434() == iParam0)
	{
		func_97(uParam1);
	}
	return true;
}

bool func_780(int iParam0, int iParam1)
{
	if (iParam0 >= 0 && iParam0 <= _0xc088ff658b2e51da())
	{
		*iParam1 = { *Global_1194053->f_503[iParam0] };
		return true;
	}
	return false;
}

bool func_781(int iParam0, var uParam1)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return false;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return false;
	}
	Var1 = { func_573(iVar0) };
	Var8.f_18 = 10;
	iVar107 = 0;
	while (iVar107 <= (_0xc084ff658b2e61da(&Var1) - 1))
	{
		if ((_0xc084ff658b2e71da(&Var1, iVar107, &Var8) && Var8 != 0) && Var8.f_9 == 1)
		{
			*uParam1 = { Var8 };
			return true;
		}
		iVar107++;
	}
	return false;
}

bool func_782(var uParam0)
{
	return uParam0->f_92;
}

int func_783(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 58)
	{
		return 0;
	}
	return Global_1896738->f_3715[iVar0]->f_1;
}

struct<95> func_784(bool bParam0)
{
	if (bParam0)
	{
		func_647(&(Global_1940311->f_1433.f_157.f_97));
	}
	return Global_1940311->f_1433.f_157.f_97;
}

char* func_785(var uParam0)
{
	if (*uParam0)
	{
		if (Global_1296859->f_15 == uParam0->f_1)
		{
			if (network_are_handles_the_same(&(uParam0->f_29), &(Global_1296859->f_1)))
			{
				sVar0 = "NM_MW_POSSE_JOIN_LEADER_FOOTER";
			}
			else
			{
				sVar0 = "NM_MW_POSSE_JOIN_MEMBER_FOOTER";
			}
		}
		else if (uParam0->f_36 >= uParam0->f_37)
		{
			sVar0 = "NM_MW_POSSE_JOIN_TOO_MANY_FOOTER";
		}
		else if (uParam0->f_4 && func_1435(uParam0->f_2))
		{
			if (network_are_handles_the_same(&(uParam0->f_29), &(Global_1296859->f_1)))
			{
				sVar0 = "NM_MW_POSSE_PERS_LEADER";
			}
			else if (!network_is_gamer_in_my_session(&(uParam0->f_29)) && func_1313(uParam0->f_2))
			{
				sVar0 = "NM_MW_POSSE_PERS_MEMB_JOIN_SESS";
			}
			else if (func_400(network_get_player_from_gamer_handle(&(uParam0->f_29))) == uParam0->f_2)
			{
				sVar0 = "NM_MW_POSSE_PERS_MEMB_JOINABLE";
			}
			else
			{
				sVar0 = "NM_MW_POSSE_PERS_MEMB_BLOCK";
			}
		}
		else if (uParam0->f_4 && _0xc088ff658b2e51da() >= 5)
		{
			sVar0 = "NM_GC_REQ_MAX_MEMBERSHIP";
		}
		else if (!func_782(uParam0))
		{
			sVar0 = "NM_MW_POSSE_JOIN_BLOCKED_PRIVACY_FOOTER";
		}
		else if (uParam0->f_88.f_1 != 0)
		{
			return _create_var_string(10, "NM_MW_POSSE_CAMP_FOOTER", _create_var_string(2, func_603(uParam0->f_88.f_1, 1)));
		}
		else
		{
			sVar0 = "NM_MW_POSSE_CAMP_NONE_FOOTER";
		}
	}
	else
	{
		sVar0 = "NM_MW_POSSE_ENTRY_FOOTER";
	}
	return _create_var_string(2, sVar0);
}

int func_786(var uParam0, struct<39> Param1, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95)
{
	if (!func_222(&Param1))
	{
		return 0;
	}
	iVar0 = func_1436(&Param1);
	Var1 = 1;
	Var1.f_1 = 1;
	iVar23 = 0;
	while (iVar23 < 7)
	{
		Var1.f_2 = 1442026401;
		Var1.f_3 = 1178498246;
		Var1.f_1 = 0;
		Var1 = 0;
		if (iVar23 < iVar0)
		{
			Var1.f_1 = 1;
			if (func_34(*Param1.f_38[iVar23]))
			{
				iVar22++;
				StringCopy(&cVar5, "", 128);
				if (network_is_gamer_in_my_session(Param1.f_38[iVar23]))
				{
					iVar25 = network_get_player_from_gamer_handle(Param1.f_38[iVar23]);
					if (_network_is_player_index_valid(iVar25))
					{
						iVar24 = func_1437(&cVar5, iVar25, 1);
						switch (iVar24)
						{
							case 1:
							case 3:
								uParam0->f_3[iVar23]->f_5 = 0;
								break;
							case 4:
								uParam0->f_3[iVar23]->f_5 = 0;
								break;
							case 0:
							case 2:
								if (!uParam0->f_3[iVar23]->f_5)
								{
									func_1438(iVar25);
									uParam0->f_3[iVar23]->f_5 = 1;
								}
								break;
						}
					}
				}
				if (!is_string_null_or_empty(&cVar5))
				{
					Var1 = 1;
					Var1.f_3 = get_hash_key(&cVar5);
					Var1.f_2 = Var1.f_3;
					iVar21++;
				}
			}
		}
		func_1439(uParam0->f_3[iVar23], Var1);
		iVar23++;
	}
	if (iVar21 != iVar22)
	{
		return 0;
	}
	return 1;
}

bool func_787(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95)
{
	if (!func_222(&Param1))
	{
		return false;
	}
	Var0 = 1;
	if (func_1137(_0x4be6c13a45cca8ec(Param1.f_1), 0, 1))
	{
		StringCopy(&(Var0.f_1), _create_var_string(10, "NM_POSSE_DEFENSIVE_LEADER", func_1440(&Param1)), 128);
	}
	else
	{
		StringCopy(&(Var0.f_1), func_1440(&Param1), 128);
	}
	if (func_1442(func_1441(&Param1)))
	{
		StringCopy(&(Var0.f_50), "NM_HONOR_GOOD", 128);
	}
	else
	{
		StringCopy(&(Var0.f_50), "NM_HONOR_BAD", 128);
	}
	if (func_196(&Param1))
	{
		StringCopy(&(Var0.f_34), "NM_MW_POSSE_TYPE_PERSISTENT", 128);
	}
	else
	{
		StringCopy(&(Var0.f_34), "NM_MW_POSSE_TYPE_TEMPORARY", 128);
	}
	iVar66 = func_1443(&Param1);
	if (iVar66 == 0)
	{
		StringCopy(&(Var0.f_17), "HOSTILITY_NLOW", 128);
		Var0.f_33 = 1105014447;
	}
	else if (iVar66 == 1)
	{
		StringCopy(&(Var0.f_17), "HOSTILITY_NMED", 128);
		Var0.f_33 = 1105014447;
	}
	else
	{
		StringCopy(&(Var0.f_17), "HOSTILITY_NHIGH", 128);
		Var0.f_33 = 859817522;
	}
	func_1444(uParam0, Var0, 0);
	return true;
}

bool func_788(var uParam0)
{
	if (uParam0->f_3)
	{
		_0xc08aff658b2e51da(&iVar0);
		if (iVar0 != uParam0->f_2)
		{
			return false;
		}
	}
	else
	{
		if (!_0xd6f6acf4392187fb(uParam0->f_1))
		{
			return false;
		}
		if (!_0x0f99f6436528a089(uParam0->f_1))
		{
			return false;
		}
	}
	return true;
}

void func_789()
{
	if (Global_1896738->f_393.f_2691 <= 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		func_1445(Global_1896738->f_393.f_2[iVar0]);
		iVar0++;
	}
	Global_1896738->f_393.f_2691 = 0;
}

void func_790(var uParam0)
{
	switch (Global_1896738->f_209)
	{
		case 0:
			bVar0 = true;
			if (!func_222(uParam0))
			{
				bVar0 = false;
			}
			if (!func_196(uParam0))
			{
				bVar0 = false;
			}
			Var1.f_27 = 10;
			if (!_0xc087ff658b2e51da(uParam0->f_2, &Var1))
			{
				bVar0 = false;
			}
			if (!bVar0)
			{
				if (_databinding_get_array_count(Global_1896738->f_393.f_1) != 0)
				{
					_0x3bf0767cf33fcc88(Global_1896738->f_393.f_1);
				}
				return;
			}
			bVar119 = false;
			if (Global_1896738->f_209.f_154 != Var1.f_26)
			{
				bVar119 = true;
			}
			if (!bVar119)
			{
				iVar120 = 0;
				while (iVar120 < Var1.f_26)
				{
					if (!network_are_handles_the_same(Var1.f_27[iVar120], Global_1896738->f_209.f_2[iVar120]))
					{
						bVar119 = true;
					}
					else
					{
						iVar120++;
					}
				}
			}
			Global_1896738->f_209.f_154 = Var1.f_26;
			iVar128 = 0;
			while (iVar128 < 10)
			{
				if (network_is_handle_valid(Var1.f_27[iVar128]))
				{
					_copy_memory(Global_1896738->f_209.f_2[iVar128], Var1.f_27[iVar128], 7);
				}
				else
				{
					_copy_memory(Global_1896738->f_209.f_2[iVar128], &uVar121, 7);
				}
				iVar128++;
			}
			if (bVar119)
			{
				Global_1896738->f_209.f_155 = 0;
				Global_1896738->f_209.f_1 = -1;
				func_1003(1);
			}
			else if (Global_1896738->f_209.f_155)
			{
				func_1003(3);
				func_55(1);
			}
			else
			{
				Global_1896738->f_209.f_1 = -1;
				func_1003(1);
			}
			break;
		case 4:
			func_1003(0);
			break;
		case 1:
			if (Global_1896738->f_209.f_154 <= 0)
			{
				func_1003(4);
				return;
			}
			if (Global_1896738->f_209.f_1 < 0)
			{
				if (is_pc_version() || _is_stadia_version())
				{
					iVar129 = 0;
					while (iVar129 <= (Global_1896738->f_209.f_154 - 1))
					{
						if (!_network_get_display_name_from_handle(Global_1896738->f_209.f_2[iVar129], Global_1896738->f_209.f_73[iVar129]))
						{
							func_70(_create_var_string(2, "FRIENDS_LIST_CONSENT_TOOLTIP"), 1105014447);
						}
						iVar129++;
					}
					func_1003(3);
					Global_1896738->f_209.f_155 = 1;
					func_55(1);
					return;
				}
				else
				{
					Global_1896738->f_209.f_1 = _0xd66c9e72b3cc4982(&(Global_1896738->f_209.f_2), Global_1896738->f_209.f_154);
				}
				if (Global_1896738->f_209.f_1 < 0)
				{
					func_1003(4);
					return;
				}
			}
			switch (_0x58cc181719256197(Global_1896738->f_209.f_1, &(Global_1896738->f_209.f_73), Global_1896738->f_209.f_154))
			{
				case -1:
					func_1003(4);
					break;
				case 0:
					func_1003(3);
					Global_1896738->f_209.f_155 = 1;
					func_55(1);
					break;
				case 1:
					break;
			}
			break;
		case 3:
			if (func_921())
			{
				if (func_1446() == 1)
				{
					func_926();
					func_55(1);
				}
				return;
			}
			if (!func_306())
			{
				bVar130 = false;
				if (!func_959(&(Global_1896738->f_209.f_156)))
				{
					func_960(&(Global_1896738->f_209.f_156), 0);
				}
				if (func_1447(&(Global_1896738->f_209.f_156)) >= 5f)
				{
					bVar130 = true;
				}
				if (bVar130)
				{
					func_958(&(Global_1896738->f_209.f_156));
					func_1003(0);
					return;
				}
				return;
			}
			if (func_51() != 1)
			{
				return;
			}
			iVar131 = 0;
			func_789();
			iVar132 = 0;
			while (iVar132 < Global_1896738->f_209.f_154)
			{
				if (!func_34(*Global_1896738->f_209.f_2[iVar132]))
				{
				}
				else if (!func_882(Global_1896738->f_209.f_2[iVar132], Global_1896738->f_209.f_73[iVar132], 0, 6))
				{
				}
				else
				{
					iVar131++;
				}
				iVar132++;
			}
			iVar132 = iVar131;
			while (iVar132 <= 9)
			{
				if (!func_1448(6))
				{
				}
				iVar132++;
			}
			break;
	}
}

void func_791(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 184716;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 184837;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 184974;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 185217;
			uParam0->f_11++;
			uParam0->f_12 = 185348;
			uParam0->f_13 = 1;
			break;
		case -1419617212:
			(*uParam0)[uParam0->f_11] = 185447;
			uParam0->f_11++;
			uParam0->f_12 = 185348;
			uParam0->f_13 = 1;
			break;
		case 791621612:
			uParam0->f_12 = 185348;
			uParam0->f_13 = 1;
			break;
	}
}

void func_792(var uParam0)
{
	if (!func_222(uParam0))
	{
		return;
	}
	iVar0 = func_1455(uParam0);
	iVar1 = func_1436(uParam0);
	iVar2 = func_1456(uParam0);
	func_789();
	iVar11 = 0;
	while (iVar11 < iVar2)
	{
		iVar3 = 255;
		if (iVar11 < iVar0)
		{
			if (!func_1457(uParam0, iVar11, &Var4))
			{
			}
			else
			{
				iVar3 = network_get_player_from_gamer_handle(&Var4);
				if (!func_882(&Var4, get_player_name(iVar3), 0, 5))
				{
				}
				else
				{
					if (func_1458(uParam0, Var4))
					{
						if (iVar11 != 0)
						{
							func_1459(0, (func_914() - 1));
						}
					}
					Jump @188; //curOff = 144
					if (iVar11 < iVar1)
					{
						if (!func_1448(5))
						{
						}
						else
						{
							Jump @188; //curOff = 166
							if (iVar11 < iVar2)
							{
								if (!func_1460(5))
								{
								}
							}
						}
						iVar11++;
						iVar12 = network_get_player_from_gamer_handle(&(Global_1896738->f_393.f_2[func_1434()]->f_1));
						bVar13 = false;
						if (func_1461(&(Global_1940311->f_1433.f_157.f_197.f_3), *uParam0, iVar12))
						{
							bVar13 = true;
						}
						func_793(&(Global_1940311->f_1433.f_157.f_197.f_3), bVar13);
					}
				}
			}
		}
	}
}

void func_793(var uParam0, bool bParam1)
{
	if (!_databinding_is_data_id_valid(uParam0->f_1))
	{
		return;
	}
	_databinding_write_data_bool(uParam0->f_1, bParam1);
}

void func_794(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 184716;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 184837;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 184974;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 185217;
			uParam0->f_11++;
			uParam0->f_12 = 185348;
			uParam0->f_13 = 1;
			break;
		case -462010351:
			(*uParam0)[uParam0->f_11] = 184974;
			uParam0->f_11++;
			break;
	}
}

void func_795(var uParam0)
{
	Var0 = 10;
	Var22 = 1;
	Var22.f_1 = 1;
	Var22.f_2 = 1105014447;
	Var22.f_4 = -1;
	Var22.f_5 = -1;
	Var22.f_6 = -1;
	Var22.f_10 = -1;
	Var22.f_11 = -1;
	Var22.f_12 = -1;
	Var22.f_21 = 1;
	Var22.f_86 = 255;
	Var22.f_87 = -2147483647;
	Var110.f_27 = -1;
	Var110.f_28 = -1;
	StringCopy(&cVar194, "", 128);
	iVar210 = 0;
	iVar211 = func_914();
	iVar212 = 0;
	while (iVar212 < iVar211)
	{
		func_1462(&Var22);
		if (!func_915(iVar212, &Var110))
		{
		}
		else if (!func_1463(&Var110))
		{
		}
		else
		{
			Var110.f_26 = uParam0->f_1 == iVar210;
			if (func_1464(&Var110))
			{
				func_1465(&Var110, 0);
			}
			if (iVar211 >= func_1466())
			{
				func_1465(&Var110, 0);
			}
			if (!func_1467(&Var110))
			{
				if (!func_1468(&Var22, Var110.f_27, Var110.f_28))
				{
				}
				func_1469(&Var110, -1);
				func_1465(&Var110, 1);
			}
			if (!func_1470(&Var22, &Var110, 0))
			{
			}
			Stack.Push(&Var0);
			Stack.Push(Var110.f_27);
			Call_Loc(*uParam0);
			iVar14 = 0;
			while (iVar14 < Var0.f_11)
			{
				Stack.Push(&Var22);
				Stack.Push(&Var110);
				Stack.Push(0);
				Call_Loc(&Var0[iVar14]);
				iVar14++;
			}
			if (!func_1471(iVar210, &Var22, &(Var110.f_29), Var110.f_25))
			{
			}
			func_1472(&Var110);
			func_1473(iVar212, &Var110);
			if (Var110.f_26)
			{
				Var15 = { func_204() };
				if (network_is_handle_valid(&Var15) && !network_are_handles_the_same(&Var15, &(Var110.f_1)))
				{
					func_494(Var110.f_1, &(Var110.f_8));
				}
				if (Var0.f_13)
				{
					Stack.Push(&Var110);
					Stack.Push(&cVar194);
					Call_Loc(Var0.f_12);
				}
			}
			iVar210++;
		}
		iVar212++;
	}
	if (iVar211 == 0)
	{
		func_1474(uParam0->f_2, &cVar194);
	}
	func_70(&cVar194, 1105014447);
	func_1475(iVar210);
}

void func_796()
{
	if (!func_1476())
	{
		return;
	}
	if (func_1204() == 1)
	{
		func_21();
		func_62();
		func_395(func_1477(), 0);
		func_392(func_1477());
	}
}

int func_797()
{
	if (func_1478() > 0)
	{
		switch (func_924())
		{
			case 2:
				func_1479();
				break;
		}
	}
	switch (func_1478())
	{
		case 0:
			if (func_642())
			{
				func_649(((25f + 25f) + 10f), 7);
				func_1480(1);
			}
			return 0;
		case 1:
			func_1480(2);
			break;
		case 2:
			bVar0 = false;
			if (_0xd6f6acf4392187fb(Global_1296859->f_15) && _0x0f99f6436528a089(Global_1296859->f_15))
			{
				bVar0 = true;
			}
			_0xc08aff658b2e51da(&iVar1);
			if (iVar1 != 0)
			{
				bVar0 = true;
			}
			if (bVar0)
			{
				func_1480(3);
			}
			else
			{
				func_1480(5);
			}
			break;
		case 3:
			func_195(1);
			func_1480(4);
			break;
		case 4:
			if (!func_959(&(Global_1896738->f_13)))
			{
				func_960(&(Global_1896738->f_13), 0);
			}
			if (func_950(&bVar2, 1))
			{
				if (bVar2)
				{
					func_1480(5);
				}
				else
				{
					func_1480(11);
				}
				else
				{
					Jump @338; //curOff = 307
					if (func_961(&(Global_1896738->f_13)) >= 25f)
					{
						func_1480(11);
					}
					else
					{
						Jump @895; //curOff = 338
						if (Global_1896738->f_13.f_37)
						{
							if (!func_1481(Global_1896738->f_13.f_37.f_1, Global_1896738->f_13.f_37.f_2, func_1354(Global_1896738->f_13.f_37.f_5), func_533(Global_1896738->f_13.f_8)))
							{
								func_1480(11);
							}
							else
							{
								Jump @445; //curOff = 418
								func_1482(Global_1896738->f_13.f_37.f_1, Global_1896738->f_13.f_37.f_2);
								func_1480(6);
								Jump @895; //curOff = 450
								if (func_954(&bVar3, 1))
								{
									if (bVar3)
									{
										func_1480(7);
									}
									else
									{
										func_1480(11);
									}
									else
									{
										Jump @895; //curOff = 485
										bVar4 = func_803(1, 0);
										if ((!func_799(&(Global_1296859->f_154[&Global_1296859]), 0) && !bVar4) || (!func_1269(Global_1896738->f_13.f_7, func_533(Global_1896738->f_13.f_8)) && !bVar4))
										{
											func_1480(11);
										}
										else
										{
											if ((_0xd6f6acf4392187fb(Global_1296859->f_15) && _0x0f99f6436528a089(Global_1296859->f_15)) && !_0x424b17a7dc5c90bc(player_id()))
											{
												func_1480(5);
											}
											else if (func_799(&(Global_1296859->f_154[&Global_1296859]), 0))
											{
												if (func_1269(Global_1896738->f_13.f_7, func_533(Global_1896738->f_13.f_8)))
												{
													func_1480(10);
												}
												else
												{
													func_1480(8);
												}
											}
											else
											{
												func_1480(8);
											}
											Jump @895; //curOff = 694
											if (func_167(Global_1896738->f_13.f_37.f_3, Global_1896738->f_13.f_37.f_4, 1, 0))
											{
												func_168(512);
												func_1480(9);
											}
											else
											{
												func_1480(11);
											}
											else
											{
												Jump @895; //curOff = 751
												if (!func_959(&(Global_1896738->f_13)))
												{
													func_960(&(Global_1896738->f_13), 0);
												}
												if (func_961(&(Global_1896738->f_13)) < 25f)
												{
													if (func_799(&(Global_1296859->f_154[&Global_1296859]), 0))
													{
													}
													else
													{
														return 1;
													}
												}
												else
												{
													func_1480(11);
												}
												else
												{
													func_1480(10);
													Jump @895; //curOff = 843
													func_997();
													func_21();
													func_1480(0);
													return 2;
													Jump @895; //curOff = 863
													func_997();
													func_21();
													func_1480(0);
													func_664("NM_GC_POSSE_CREATE_FAIL");
													return 3;
												}
											}
										}
									}
									return 1;
								}
							}
						}
					}
				}
			}
			default:
				break;
	}
}

var func_798()
{
	return Global_1896738->f_13.f_26;
}

bool func_799(int iParam0, bool bParam1)
{
	if (!network_is_game_in_progress() || !network_is_in_session())
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			if (Global_1137047->f_9[iVar0]->f_4.f_2 != 0 && Global_1137047->f_9[iVar0]->f_2 == iParam0)
			{
				return true;
			}
			iVar0++;
		}
		if (bParam1)
		{
			func_626("GC_H_PLACE", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	iVar1 = _0x901e0dc25080c8b9(iParam0);
	if (func_426(func_1483(iVar1)))
	{
		return true;
	}
	if (bParam1)
	{
		func_626("GC_H_PLACE", 10000, 0, 0, 0, 1);
	}
	return false;
}

int func_800()
{
	return Global_1896738->f_13.f_9;
}

int func_801()
{
	if (func_619() == 0)
	{
		return _network_get_cash_balance();
	}
	return _money_get_cash_balance();
}

int func_802(bool bParam0, int iParam1)
{
	if (func_397())
	{
		func_1484("NM_GC_REQ_POSSE_CREATE_LOCKED", 859817522);
		return 0;
	}
	if (!func_183())
	{
		func_1484("NM_GC_REQ_NO_CAMP", 859817522);
		return 0;
	}
	if (!func_537(iParam1))
	{
		func_1484("NM_GC_REQ_NO_COST", 859817522);
		return 0;
	}
	if (!_unlock_is_unlocked(-2019230505))
	{
		func_1484("NM_GC_REQ_POSSE_CREATE_LOCKED", 859817522);
		return 0;
	}
	if (!func_239())
	{
		func_1484("NM_GC_REQ_POSSE_CREATE_LOCKED", 859817522);
		return 0;
	}
	if (bParam0)
	{
		if (Global_1194053->f_502 != 0 && (get_game_timer() - Global_1194053->f_502) < 15000)
		{
			func_1484("NM_GC_REQ_POSSE_CREATE_COOLDOWN", 859817522);
			return 0;
		}
		iVar0 = _0xc088ff658b2e51da();
		if (iVar0 >= 5)
		{
			func_1484("NM_GC_REQ_MAX_MEMBERSHIP", 859817522);
			return 0;
		}
	}
	if (bParam0)
	{
		if (func_1391(func_387(-2040602682)))
		{
			func_1484("NFT_VOUCHER_FOOTER", 1105014447);
		}
		else
		{
			func_1484("NM_GC_CREATE_PERSISTENT", 1105014447);
		}
	}
	else
	{
		func_1484("NM_GC_CREATE_TEMPORARY", 1105014447);
	}
	return 1;
}

bool func_803(int iParam0, int iParam1)
{
	if ((!func_1485() || !network_is_game_in_progress()) || !network_is_session_active())
	{
		return false;
	}
	if (!func_600(16))
	{
		return false;
	}
	if (func_239())
	{
		if (!_unlock_is_unlocked(-75008140))
		{
			return false;
		}
	}
	if (!func_988())
	{
		return false;
	}
	if (func_1109(16))
	{
		return false;
	}
	iVar0 = _0x901e0dc25080c8b9(player_id());
	if (iParam1 == 1 && (!_0xd6f6acf4392187fb(iVar0) || !_0x424b17a7dc5c90bc(player_id())))
	{
		return false;
	}
	if (iParam0 == 1 && func_576(Global_1137047->f_8, 1))
	{
		return false;
	}
	if (func_858())
	{
		return false;
	}
	return true;
}

char[] func_804(int iParam0)
{
	*iParam0 = Global_1896738->f_13.f_36;
	return func_641(&(Global_1896738->f_13.f_28));
}

bool func_805()
{
	return Global_1896738->f_191.f_1 != 0;
}

var func_806()
{
	return Global_1896738->f_191.f_2;
}

int func_807()
{
	return Global_1896738->f_191.f_1;
}

void func_808(int iParam0)
{
	Global_1940311->f_1433.f_9184.f_245 = 1;
	Global_1940311->f_1433.f_9184.f_247 = iParam0;
	Global_1940311->f_1433.f_9184.f_246 = get_cloud_time_as_int();
}

var func_809()
{
	return Global_1940311->f_1433.f_157.f_206.f_2;
}

int func_810()
{
	return Global_1940311->f_1433.f_9184.f_4;
}

char* func_811(var uParam0)
{
	return func_1486(uParam0->f_5);
}

void func_812(var uParam0, char* sParam1, bool bParam2, bool bParam3)
{
	if (Global_1940311->f_1433.f_9184.f_241)
	{
		return;
	}
	if (bParam3)
	{
		if (!_databinding_is_data_id_valid(uParam0->f_1))
		{
		}
		else
		{
			if (_databinding_is_data_id_valid(*uParam0))
			{
				_databinding_write_data_string(*uParam0, "");
			}
			_databinding_write_data_string(uParam0->f_1, sParam1);
		}
	}
	else if (!_databinding_is_data_id_valid(*uParam0))
	{
	}
	else
	{
		if (_databinding_is_data_id_valid(uParam0->f_1))
		{
			_databinding_write_data_string(uParam0->f_1, "");
		}
		_databinding_write_data_string(*uParam0, sParam1);
	}
	if (!_databinding_is_data_id_valid(uParam0->f_2))
	{
	}
	else
	{
		_databinding_write_data_bool(uParam0->f_2, bParam2);
	}
	Global_1940311->f_1433.f_9184.f_241 = 1;
	Global_1940311->f_1433.f_9184.f_240 = 0;
}

void func_813(var uParam0)
{
	if (!func_222(uParam0))
	{
		return;
	}
	bVar0 = func_192(uParam0);
	bVar1 = func_788(uParam0);
	bVar2 = func_994(uParam0);
	bVar3 = func_1487(uParam0);
	bVar4 = func_196(uParam0);
	bVar5 = func_1488(16);
	bVar6 = (((func_830() || func_831()) || (func_1489(0, 0, 1) && bVar5 == 0)) || func_836());
	bVar7 = func_397();
	if (bVar0 && !bVar1)
	{
		bVar2 = false;
	}
	sVar8 = "";
	sVar9 = "";
	iVar15 = 8;
	iVar10 = 0;
	while (iVar10 < iVar15)
	{
		iVar13 = iVar10;
		func_1490(iVar13, &uVar16);
		iVar14 = uVar16;
		bVar11 = false;
		bVar12 = false;
		switch (iVar13)
		{
			case 0:
				bVar11 = (!bVar0 && !bVar2);
				if (bVar11)
				{
					if (bVar6)
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (func_419())
					{
						sVar9 = _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
					}
					else if (!func_1491(uParam0))
					{
						if (_0xd6f6acf4392187fb(uParam0->f_1) && _0x7933754f260b428a(_0x4be6c13a45cca8ec(uParam0->f_1)) > 0)
						{
							sVar9 = _create_var_string(2, "NM_MW_POSSE_KICKED_FOOTER");
						}
						else if (func_1346(uParam0))
						{
							sVar9 = _create_var_string(2, "NM_MW_POSSE_CONTENT_JOIN_LOCK");
						}
						else if (func_1345(uParam0))
						{
							sVar9 = _create_var_string(2, "NM_MW_POSSE_JOIN_TOO_MANY_FOOTER");
						}
						else if (_0xc088ff658b2e51da() >= 5 && func_196(uParam0))
						{
							sVar9 = _create_var_string(2, "NM_GC_REQ_MAX_MEMBERSHIP");
						}
						else if (func_196(uParam0) && !func_1348(&(uParam0->f_29)))
						{
							sVar9 = _create_var_string(2, "NM_GC_REQ_TOO_MANY_P_MEMBERS");
						}
						else
						{
							sVar9 = _create_var_string(2, "NM_MW_POSSE_JOIN_BLOCKED_FOOTER");
						}
					}
					else if ((!func_1487(uParam0) && !func_196(uParam0)) && !func_782(uParam0))
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_JOIN_BLOCKED_PRIVACY_FOOTER");
					}
					else if (((!func_1487(uParam0) && func_196(uParam0)) && !func_782(uParam0)) && !bVar0)
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_JOIN_BLOCKED_PRIVACY_FOOTER");
					}
					else if (bVar7)
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_CONTENT_LOCK_JOIN_FOOTER");
					}
					else
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_JOIN_FOOTER");
						bVar12 = true;
					}
				}
				break;
			case 1:
				bVar11 = ((bVar0 && !bVar1) && func_1492(player_id(), uParam0->f_2));
				if (bVar11)
				{
					if (bVar6)
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (func_419())
					{
						sVar9 = _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
					}
					else if (!func_1491(uParam0))
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_JOIN_BLOCKED_FOOTER");
					}
					else if (bVar7)
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_CONTENT_LOCK_ACTIVATE_FOOTER");
					}
					else
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_ACTIVATE_FOOTER");
						bVar12 = true;
					}
				}
				break;
			case 2:
				bVar11 = ((bVar0 && !bVar1) && !func_1492(player_id(), uParam0->f_2));
				if (bVar11)
				{
					if (bVar7)
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_CONTENT_LOCK_JOIN_FOOTER");
					}
					else if (func_419())
					{
						sVar9 = _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
					}
					else if (func_1493(uParam0->f_2))
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_OTHER_CONTENT_LOCK_REJOIN_FOOTER");
					}
					else if (func_840())
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_JAIL_LOCK_REJOIN_FOOTER");
					}
					else if (!network_is_gamer_in_my_session(&(uParam0->f_29)))
					{
						if (func_685(uParam0->f_2))
						{
							bVar12 = true;
							sVar9 = _create_var_string(2, "NM_MW_POSSE_ACTIVATE_FOOTER_SM");
						}
						else if (!func_1494(uParam0->f_2))
						{
							sVar9 = _create_var_string(2, "NM_MW_POSSE_JOIN_CONTENT_BLOCK_FOOTER");
						}
						else if (!func_1495(uParam0->f_2))
						{
							sVar9 = _create_var_string(2, "NM_MW_POSSE_JOIN_TOO_MANY_FOOTER");
						}
						else
						{
							sVar9 = _create_var_string(2, "NM_MW_POSSE_JOIN_INACTIVE_POSSE_FOOTER");
						}
					}
					else if (bVar6)
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (_0xd6f6acf4392187fb(uParam0->f_1) && _0x7933754f260b428a(_0x4be6c13a45cca8ec(uParam0->f_1)) > 0)
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_KICKED_FOOTER");
					}
					else if (func_1346(uParam0))
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_CONTENT_JOIN_LOCK");
					}
					else if (func_1345(uParam0))
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_JOIN_TOO_MANY_FOOTER");
					}
					else if (!func_1491(uParam0))
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_JOIN_INACTIVE_POSSE_FOOTER");
					}
					else
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_ACTIVATE_FOOTER_M");
						bVar12 = true;
					}
				}
				break;
			case 3:
				bVar11 = (bVar3 && (bVar1 || bVar0));
				if (bVar11)
				{
					if (!bVar4)
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_VERSUS_NO_PERSISTENT_POSSE_FOOTER");
					}
					else if (func_419())
					{
						sVar9 = _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
					}
					else if (func_1496(player_id()))
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_VERSUS_FOOTER_BLOCKED_JAIL");
					}
					else
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_VERSUS_FOOTER");
						bVar12 = true;
					}
				}
				break;
			case 4:
				if (bVar0)
				{
					bVar11 = true;
				}
				else
				{
					bVar11 = bVar2;
				}
				if (bVar11)
				{
					if (func_419())
					{
						sVar9 = _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
					}
					else
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_SETTINGS_FOOTER");
						bVar12 = true;
					}
				}
				break;
			case 5:
				bVar11 = bVar3;
				if (bVar11)
				{
					if (func_419())
					{
						sVar9 = _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
					}
					else if (!bVar1)
					{
						sVar9 = _create_var_string(2, "NM_POSSE_REFORM_TOOLTIP");
					}
					else if (bVar6)
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (bVar7)
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_CONTENT_LOCK_INVITE_FOOTER");
					}
					else
					{
						sVar9 = _create_var_string(2, "");
						bVar12 = true;
					}
				}
				break;
			case 6:
				bVar11 = (!bVar4 && bVar2);
				if (bVar11)
				{
					if (bVar6)
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_LEAVE_INACTIVE_FOOTER");
					}
					else if (func_419())
					{
						sVar9 = _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
					}
					else if (bVar7)
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_CONTENT_LOCK_LEAVE_FOOTER");
					}
					else
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_ABANDON_LINK_FOOTER");
						bVar12 = true;
					}
				}
				break;
			case 7:
				bVar11 = (bVar4 && bVar2);
				if (bVar11)
				{
					if (bVar6)
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_LEAVE_INACTIVE_FOOTER");
					}
					else if (func_419())
					{
						sVar9 = _create_var_string(2, "NM_OPTION_DISABLED_ACTIVITY_TOOLTIP");
					}
					else if (bVar7)
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_CONTENT_LOCK_STANDDOWN_FOOTER");
					}
					else if (_0x424b17a7dc5c90bc(player_id()))
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_LEAVE_L_LINK_FOOTER");
						bVar12 = true;
					}
					else
					{
						sVar9 = _create_var_string(2, "NM_MW_POSSE_LEAVE_M_LINK_FOOTER");
						bVar12 = true;
					}
				}
				break;
		}
		if (func_434() == iVar14)
		{
			sVar8 = sVar9;
			func_70(sVar8, 1105014447);
		}
		if (func_1497(&(Global_1940311->f_1433.f_157.f_206.f_1), iVar10) != bVar11)
		{
			func_1498(&(Global_1940311->f_1433.f_157.f_206.f_1), iVar10, bVar11);
		}
		if (func_1499(&(Global_1940311->f_1433.f_157.f_206.f_1), iVar10) != bVar12)
		{
			func_1500(&(Global_1940311->f_1433.f_157.f_206.f_1), iVar10, bVar12);
		}
		iVar10++;
	}
}

void func_814()
{
	if (!func_1476())
	{
		return;
	}
	if (func_1204() == 1)
	{
		func_21();
		func_62();
		_0xc08aff658b2e51da(&iVar0);
		if (func_1501(func_1477(), iVar0))
		{
			_databinding_write_data_string(Global_1940311->f_1433.f_54.f_64, func_1477());
			func_1004(func_1477());
			func_194(2);
		}
	}
}

void func_815()
{
	if (Global_1940311->f_1433.f_157.f_264.f_90 != -1)
	{
		if ((get_game_timer() - Global_1940311->f_1433.f_157.f_264.f_90) >= 2000)
		{
			Global_1940311->f_1433.f_157.f_264.f_90 = -1;
		}
	}
}

bool func_816()
{
	return Global_1940311->f_1433.f_157.f_264.f_2 != 0;
}

void func_817()
{
	iVar0 = -1218098620;
	while (_event_manager_is_event_pending(iVar0))
	{
		if (_event_manager_peek_event(iVar0, &vVar1))
		{
			switch (vVar1.x)
			{
				case -1203660660:
					iVar5 = vVar1.z;
					switch (iVar5)
					{
						case 2074623703:
							func_1502();
							func_194(8);
							func_340();
							break;
						case 1400745903:
							func_340();
							break;
					}
					break;
			}
		}
		_event_manager_pop_event(iVar0);
	}
}

void func_818(var uParam0)
{
	if (!func_222(uParam0))
	{
		return;
	}
	bVar0 = func_192(uParam0);
	bVar1 = func_788(uParam0);
	bVar2 = func_196(uParam0);
	bVar3 = func_1487(uParam0);
	bVar4 = func_1488(16);
	bVar5 = (((func_830() || func_831()) || (func_1489(0, 0, 1) && bVar4 == 0)) || func_836());
	bVar6 = func_1137(player_id(), 1, 1);
	if (!func_1503())
	{
		if (func_782(uParam0))
		{
			iVar7 = 1;
			iVar8 = 126620015;
		}
		else
		{
			iVar7 = 0;
			iVar8 = 1513236523;
		}
		_databinding_write_data_int_from_parent(Global_1940311->f_1433.f_157.f_264.f_3, func_58(34), iVar7);
		_databinding_write_data_hash_string_from_parent(Global_1940311->f_1433.f_157.f_264.f_3, func_58(33), iVar8);
		if (func_1504(uParam0) && !bVar6)
		{
			iVar9 = 1;
			iVar10 = -299269340;
		}
		else
		{
			iVar9 = 0;
			iVar10 = 1083456181;
		}
		_databinding_write_data_int_from_parent(Global_1940311->f_1433.f_157.f_264.f_61, func_58(34), iVar9);
		_databinding_write_data_hash_string_from_parent(Global_1940311->f_1433.f_157.f_264.f_61, func_58(33), iVar10);
		iVar11 = func_1505(uParam0);
		_databinding_write_data_int_from_parent(Global_1940311->f_1433.f_157.f_264.f_32, func_58(34), iVar11);
	}
	if (!bVar3)
	{
		func_1004(func_811(uParam0));
	}
	iVar12 = 1105014447;
	sVar13 = "";
	sVar14 = "";
	iVar21 = 8;
	iVar15 = 0;
	while (iVar15 < iVar21)
	{
		iVar18 = func_1506(iVar15, 1);
		func_1507(iVar18, &iVar20);
		iVar19 = iVar20;
		bVar16 = false;
		bVar17 = false;
		sVar14 = "";
		switch (iVar18)
		{
			case 630752600:
				bVar16 = true;
				bVar17 = ((bVar3 && bVar1) && !func_397());
				func_862(&(Global_1940311->f_1433.f_157.f_264.f_3), bVar17);
				if (bVar3 && !bVar1)
				{
					sVar14 = _create_var_string(2, "NM_POSSE_REFORM_TOOLTIP");
				}
				else if (!bVar3)
				{
					sVar14 = _create_var_string(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
				}
				else if (uParam0->f_92)
				{
					sVar14 = _create_var_string(2, "NM_GC_FOOTER_STEP_PRIVACY_OPEN");
				}
				else
				{
					sVar14 = _create_var_string(2, "NM_GC_FOOTER_STEP_PRIVACY_CLOSED");
				}
				break;
			case 55609673:
				bVar16 = true;
				bVar17 = ((bVar3 && bVar2) && bVar1);
				func_862(&(Global_1940311->f_1433.f_157.f_264.f_32), bVar17);
				if ((bVar3 && bVar2) && !bVar1)
				{
					sVar14 = _create_var_string(2, "NM_POSSE_REFORM_TOOLTIP");
				}
				else if (!bVar3)
				{
					sVar14 = _create_var_string(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
				}
				else if (!bVar2)
				{
					sVar14 = _create_var_string(2, "NM_GC_FOOTER_TEMP_OUTFIT");
				}
				else
				{
					switch (func_1505(uParam0))
					{
						case 0:
							sVar14 = _create_var_string(2, "NM_GC_FOOTER_STEP_OUTFIT_NONE");
							break;
						default:
							sVar14 = _create_var_string(2, "NM_GC_FOOTER_SET_OUTFIT_ACTIVE");
							break;
					}
				}
				break;
			case 845045048:
				bVar16 = true;
				bVar17 = (((bVar3 && bVar1) && !func_1081()) && !bVar6);
				func_862(&(Global_1940311->f_1433.f_157.f_264.f_61), bVar17);
				if (bVar3 && !bVar1)
				{
					sVar14 = _create_var_string(2, "NM_POSSE_REFORM_TOOLTIP");
				}
				else if (!bVar3)
				{
					sVar14 = _create_var_string(2, "NM_MW_POSSE_MEMBER_GENERIC_DISABLE");
				}
				else if (bVar6)
				{
					sVar14 = _create_var_string(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_OFF_PASSIVE");
				}
				else if (uParam0->f_93)
				{
					sVar14 = _create_var_string(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_ON");
				}
				else
				{
					sVar14 = _create_var_string(2, "NM_GC_FOOTER_STEP_FRIENDLY_FIRE_OFF");
				}
				break;
			case -1676224755:
				bVar16 = true;
				bVar17 = (func_1508(uParam0->f_1) && bVar3);
				break;
			case -353068451:
				bVar16 = true;
				if (bVar16)
				{
					if (bVar3 && !bVar1)
					{
						sVar14 = _create_var_string(2, "NM_POSSE_REFORM_TOOLTIP");
					}
					else if (!bVar3)
					{
						sVar14 = _create_var_string(2, "NET_CAMP_SET_CAMP_LOCATION_FOOTER_MEMBER");
					}
					else if (bVar5)
					{
						sVar14 = _create_var_string(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (bVar3 == 0)
					{
						sVar14 = _create_var_string(2, "NET_CAMP_SET_CAMP_LOCATION_FOOTER_MEMBER");
					}
					else if (func_77(player_id()) != -1 && func_425(func_77(player_id()), 512))
					{
						sVar14 = _create_var_string(2, "NET_CAMP_SET_LOC_FOLLOWER_DEAD");
					}
					else if (Global_1132288->f_2019 >= 6 && Global_1132288->f_2019 <= 12)
					{
						sVar14 = _create_var_string(2, "NET_CAMP_ALREADY_REQUESTED_FOOTER");
					}
					else if (func_858())
					{
						sVar14 = _create_var_string(2, "NET_CAMP_SET_LOC_CONTENT_LOCK");
					}
					else
					{
						bVar17 = ((bVar3 && bVar1) && func_803(1, 1));
						sVar14 = _create_var_string(2, "NET_CAMP_SETTINGS_LOCATION_FOOTER");
					}
				}
				break;
			case 1527899327:
				bVar16 = true;
				bVar17 = (((((bVar3 && bVar2) && bVar1) && func_99()) && (_0x595f028698072dd9(-1) || !is_orbis_version())) && _ugc_has_privilege());
				if ((bVar3 && bVar2) && !bVar1)
				{
					sVar14 = _create_var_string(2, "NM_POSSE_REFORM_TOOLTIP");
				}
				else if (!bVar3)
				{
					sVar14 = _create_var_string(2, "NM_GC_FOOTER_NAME_CHANGE_MEMBER");
				}
				else
				{
					sVar14 = func_462(&iVar12);
				}
				break;
			case -750400740:
				bVar16 = (bVar0 && !bVar3);
				if (bVar16)
				{
					if (bVar5)
					{
						sVar14 = _create_var_string(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (func_397())
					{
						sVar14 = _create_var_string(2, "NM_MW_POSSE_CONTENT_LOCK_ABANDON_FOOTER");
					}
					else
					{
						sVar14 = _create_var_string(2, "NM_MW_POSSE_ABANDON_LINK_FOOTER");
						bVar17 = true;
					}
					bVar17 = ((bVar0 && !bVar3) && !bVar5);
				}
				break;
			case 695290261:
				bVar16 = (bVar3 && bVar0);
				if (bVar16)
				{
					if (bVar5)
					{
						sVar14 = _create_var_string(2, "NM_MW_POSSE_CONTENT_ACTIVE_FOOTER");
					}
					else if (func_397())
					{
						sVar14 = _create_var_string(2, "NM_MW_POSSE_CONTENT_LOCK_DISBAND_FOOTER");
					}
					else
					{
						sVar14 = _create_var_string(2, "NM_MW_POSSE_DISBAND_LINK_FOOTER");
						bVar17 = true;
					}
				}
				break;
		}
		if (func_434() == iVar19)
		{
			if (!is_string_null_or_empty(sVar14))
			{
				sVar13 = sVar14;
				func_70(sVar13, iVar12);
			}
		}
		if (func_1497(&(Global_1940311->f_1433.f_157.f_264.f_1), iVar15) != bVar16)
		{
			func_1498(&(Global_1940311->f_1433.f_157.f_264.f_1), iVar15, bVar16);
		}
		if (func_1499(&(Global_1940311->f_1433.f_157.f_264.f_1), iVar15) != bVar17)
		{
			func_1500(&(Global_1940311->f_1433.f_157.f_264.f_1), iVar15, bVar17);
		}
		iVar15++;
	}
}

void func_819(int iParam0)
{
	switch (Global_1940311->f_1433.f_830.f_2)
	{
		case 0:
			func_789();
			func_55(1);
			func_982(&(Global_1940311->f_1433.f_830), 1);
			break;
		case 1:
			func_1510(iParam0, func_1509(func_832(0)));
			func_982(&(Global_1940311->f_1433.f_830), 2);
			break;
		case 2:
			if (!func_306())
			{
				return;
			}
			func_55(1);
			func_982(&(Global_1940311->f_1433.f_830), 1);
			break;
	}
}

void func_820(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 184716;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 184837;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 184974;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 185217;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 191524;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 191690;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 191785;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 191880;
			uParam0->f_11++;
			uParam0->f_12 = 192075;
			uParam0->f_13 = 1;
			break;
		case -462010351:
			(*uParam0)[uParam0->f_11] = 184974;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 192266;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 192328;
			uParam0->f_11++;
			uParam0->f_12 = 192075;
			uParam0->f_13 = 1;
			break;
		case -1419617212:
			uParam0->f_12 = 192075;
			uParam0->f_13 = 1;
			break;
	}
}

void func_821(var uParam0, bool bParam1)
{
	if (!_databinding_is_data_id_valid(uParam0->f_1))
	{
		return;
	}
	_databinding_write_data_bool(uParam0->f_1, bParam1);
}

int func_822()
{
	return Global_1896738->f_368;
}

int func_823(var uParam0, var uParam1, var uParam2)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1940311->f_1433.f_8381)
	{
		if (network_are_handles_the_same((*uParam0)[iVar0], uParam1))
		{
			return (*uParam0)[iVar0]->f_7;
		}
		iVar0++;
	}
	return -1;
}

void func_824(int iParam0)
{
	Global_1896738->f_368.f_1 = iParam0;
}

void func_825(int iParam0)
{
	Global_1896738->f_368.f_2 = iParam0;
}

void func_826(int iParam0)
{
	Global_1896738->f_368 = iParam0;
}

int func_827()
{
	return Global_1896738->f_368.f_2;
}

bool func_828(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (!network_is_handle_valid(&uParam0))
	{
		return false;
	}
	_copy_memory(Var0[0], &uParam0, 7);
	func_1518(&Var0, 1);
	return true;
}

int func_829()
{
	return Global_1896738->f_368.f_1;
}

bool func_830()
{
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (&Global_2883584)
	{
		return true;
	}
	if (&Global_1048577)
	{
		return true;
	}
	if (!func_1112(*Global_1051213) && Global_1572887->f_7 & 1 != 0)
	{
		return true;
	}
	return false;
}

bool func_831()
{
	return Global_263042[&Global_1296859] > 2;
}

struct<2> func_832(int iParam0)
{
	return *Global_1900736->f_1[iParam0];
}

int func_833(var uParam0, var uParam1)
{
	return uParam0;
}

bool func_834(var uParam0)
{
	if (!func_34(*uParam0))
	{
		return false;
	}
	_0xc08aff658b2e51da(&iVar0);
	Var1.f_27 = 10;
	if (_0xc087ff658b2e51da(iVar0, &Var1))
	{
		iVar119 = 0;
		while (iVar119 <= (Var1.f_26 - 1))
		{
			if (network_are_handles_the_same(Var1.f_27[iVar119], uParam0))
			{
				return true;
			}
			iVar119++;
		}
	}
	return false;
}

bool func_835()
{
	return Global_1900736->f_67;
}

bool func_836()
{
	iVar0 = func_1519(player_id());
	if (!func_1520(iVar0))
	{
		return false;
	}
	if (!func_1521(iVar0))
	{
		return false;
	}
	iVar1 = _0x4be6c13a45cca8ec(func_1522(iVar0));
	if (!_network_is_player_index_valid(iVar1))
	{
		return false;
	}
	if (!network_is_player_active(iVar1))
	{
		return false;
	}
	return func_1523(iVar1, 1);
}

int func_837(var uParam0)
{
	if (!network_is_handle_valid(uParam0))
	{
		return -1;
	}
	bVar0 = false;
	iVar1 = 255;
	if (!network_is_gamer_in_my_session(uParam0))
	{
		return 0;
	}
	iVar1 = network_get_player_from_gamer_handle(uParam0);
	if (!_network_is_player_index_valid(iVar1))
	{
		return 0;
	}
	bVar0 = true;
	if (func_835())
	{
		return 1;
	}
	if (func_836())
	{
		return 2;
	}
	if (!_unlock_is_unlocked(-1828672432))
	{
		return 3;
	}
	if (!_0xd6f6acf4392187fb(Global_1296859->f_15))
	{
		return 13;
	}
	if (!_0x0f99f6436528a089(Global_1296859->f_15))
	{
		return 13;
	}
	if (_0x149a2751ab66ac02(Global_1296859->f_15) >= _0x853b0fa4d8732c57(Global_1296859->f_15))
	{
		return 4;
	}
	switch (_0x48d82c83987e18e4(uParam0))
	{
		case 0:
			if (!network_is_gamer_in_my_session(uParam0))
			{
				return 0;
			}
			else if (bVar0 && !func_663(iVar1))
			{
				if (!_0xf23d6475640d29eb(uParam0))
				{
					return 6;
				}
				else if (bVar0 && _0xda801f7f6a5278d3(iVar1))
				{
					return 7;
				}
				else
				{
					return 1;
				}
			}
			else if ((bVar0 && !func_1524(iVar1)) && func_396(Global_1296859->f_15))
			{
				return 8;
			}
			else if (!func_665())
			{
				return 14;
			}
			else if ((bVar0 && network_is_player_active(iVar1)) && func_662(iVar1))
			{
				if (!_0x9be7dcb22d32ccbe(Global_1296859->f_15, iVar1))
				{
					return 9;
				}
			}
			return 5;
		case 1:
			return 9;
		case 2:
			return 10;
		case 3:
			return 11;
		default:
			break;
	}
	return 5;
}

bool func_838(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 1:
			StringCopy(sParam1, _create_var_string(2, "PLAYER_ON_CONTENT"), 128);
			return true;
		case 2:
			StringCopy(sParam1, _create_var_string(2, "PLAYER_ON_CONTENT"), 128);
			return true;
		case 6:
			StringCopy(sParam1, _create_var_string(2, "PLAYER_ENTRY_POSSE_BLOCKED_INVITE"), 128);
			return true;
		case 7:
			StringCopy(sParam1, _create_var_string(2, "PLAYER_ENTRY_POSSE_RECENTLY_KICKED"), 128);
			return true;
		case 9:
			StringCopy(sParam1, _create_var_string(2, "PLAYER_ENTRY_POSSE_INVITE_SENT"), 128);
			return true;
		case 10:
			StringCopy(sParam1, _create_var_string(2, "PLAYER_ENTRY_POSSE_INVITE_REJECTED"), 128);
			return true;
		case 11:
			StringCopy(sParam1, _create_var_string(2, "PLAYER_ENTRY_POSSE_INVITE_ACCEPTED"), 128);
			return true;
		case 14:
			StringCopy(sParam1, _create_var_string(2, "PLAYER_ENTRY_NO_INVITE_LEFT"), 128);
			return true;
		default:
			break;
	}
	return false;
}

int func_839(var uParam0)
{
	if (!network_is_handle_valid(uParam0))
	{
		return -1;
	}
	if (func_415(_0x51f33dbc1a41cbfd(), 8))
	{
		return 5;
	}
	if (!func_239())
	{
		return -1;
	}
	if (network_is_gamer_in_my_session(uParam0))
	{
		return 4;
	}
	if (!_0xa2837a5e21fb5a58(uParam0))
	{
		if (_0xd7bad4062074b9c1(uParam0))
		{
			return 0;
		}
	}
	if (_0xa2837a5e21fb5a58(uParam0))
	{
		if (_0xc028b3f52c707c49(uParam0))
		{
			switch (_0xca58d4fd20d70f24(uParam0))
			{
				case 0:
					if (_0xd7bad4062074b9c1(uParam0))
					{
						return 0;
					}
					return 1;
				case 2:
					return 3;
				case 1:
					return 2;
				default:
					break;
			}
		}
		else
		{
			return 1;
		}
	}
	else if (!_0xd7bad4062074b9c1(uParam0))
	{
		return 6;
	}
	return 0;
}

bool func_840()
{
	return (Global_1296851->f_2.f_1 == 2 || Global_1296851->f_2.f_1 == 1);
}

bool func_841()
{
	if (_0x9c725d149622bfde(3))
	{
		return false;
	}
	if (!_0x1af5e28e64a76a9f())
	{
		return false;
	}
	return true;
}

int func_842(int iParam0)
{
	if (!func_673(2))
	{
		return 0;
	}
	if (!func_673(1))
	{
		return 0;
	}
	if (!func_1116(iParam0))
	{
		return 0;
	}
	if (func_1118(iParam0))
	{
		return 0;
	}
	return 1;
}

int func_843(var uParam0, var uParam1)
{
	if (*uParam0 < 0 || *uParam0 > (4 - 1))
	{
		return 0;
	}
	iVar0 = func_540(1);
	Var1 = { func_541(1) };
	Var6.f_9 = -1591664384;
	bVar5 = func_542(*uParam0);
	iVar20 = _0x033ee4b89f3ac545(iVar0, &Var1, bVar5);
	if (iVar20 > 48)
	{
		iVar20 = 48;
	}
	iVar21 = 0;
	while (iVar21 <= (iVar20 - 1))
	{
		if (!_0xbe012571b25f5aca(iVar0, &Var1, bVar5, iVar21, &Var6))
		{
		}
		else
		{
			func_1525(uParam0, uParam1, Var6.f_4, iVar21);
		}
		iVar21++;
	}
	return 1;
}

int func_844(var uParam0, var uParam1)
{
	if (*uParam0 < 0 || *uParam0 > (4 - 1))
	{
		return 0;
	}
	iVar1 = 3;
	iVar0 = 0;
	while (iVar0 <= iVar1)
	{
		if (&uParam1->f_2[iVar0] == 0)
		{
			if (iVar0 == 0)
			{
				Global_1940311->f_1433.f_6279.f_5 = 1;
				iVar2 = Global_1940311->f_1433.f_6279;
				func_151(&(Global_1940311->f_1433.f_6279), Global_17411.f_55.f_2481[iVar2]);
				Global_1940311->f_1433.f_6279.f_4 = 1;
			}
		}
		else
		{
			func_1525(uParam0, uParam1, &(uParam1->f_2[iVar0]), iVar0);
			iVar0++;
		}
	}
	return 1;
}

bool func_845()
{
	return Global_1940311->f_1433.f_8378 != 0;
}

int func_846()
{
	iVar0 = -1218098620;
	while (_event_manager_is_event_pending(iVar0))
	{
		if (_event_manager_peek_event(iVar0, &vVar1))
		{
			switch (vVar1.x)
			{
				case -1203660660:
					_event_manager_pop_event(iVar0);
					return vVar1.z;
				default:
					break;
			}
		}
		_event_manager_pop_event(iVar0);
	}
	return -1577439368;
}

bool func_847(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > 8)
	{
		return false;
	}
	if (!network_is_handle_valid(uParam0))
	{
		return false;
	}
	iVar0 = network_get_player_from_gamer_handle(uParam0);
	if (!_network_is_player_index_valid(iVar0))
	{
		return false;
	}
	func_1526();
	if (func_1527(uParam0))
	{
		return false;
	}
	uVar1 = _databinding_read_data_string(Global_1940311->f_1433.f_1407.f_55);
	_databinding_write_data_string(Global_1940311->f_1433.f_1407.f_55, "");
	func_1528(uParam0);
	_0xa197c35f73ac0f12(iVar0, iParam1, uVar1, "");
	return true;
}

void func_848()
{
	Var0.f_2 = 0;
	Var0.f_3 = get_hash_key("IB_OK");
	Var0.f_3.f_3 = 0;
	func_653(&Var0);
	func_682(Var0, "CWS_THANKS", "NM_PLAYER_REPORT_CONFIRM");
}

void func_849(bool bParam0)
{
	bVar0 = func_1123();
	bVar1 = ((func_695(2) && bParam0) && func_1529(Global_1296859->f_15, func_1368(2), 0));
	bVar2 = ((func_695(3) && bParam0) && func_1529(Global_1296859->f_15, func_1368(3), 0));
	bVar3 = ((func_695(4) && bParam0) && func_1529(Global_1296859->f_15, func_1368(4), 0));
	bVar4 = ((func_695(8) && bParam0) && func_1529(Global_1296859->f_15, func_1368(8), 0));
	bVar5 = ((func_695(9) && bParam0) && func_1529(Global_1296859->f_15, func_1368(9), 0));
	bVar6 = ((func_695(19) && bParam0) && func_1529(Global_1296859->f_15, func_1368(19), 0));
	bVar7 = ((func_695(18) && bParam0) && func_1529(Global_1296859->f_15, func_1368(18), 0));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_1, ((bVar1 || bVar2) || bVar3));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_5, (bVar4 || bVar5));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_2, bVar1);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_3, bVar2);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_4, bVar3);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_6, bVar4);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_7, bVar5);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_8, ((func_695(0) && bParam0) && func_1529(Global_1296859->f_15, func_1368(0), 0)));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_9, ((func_695(10) && bParam0) && func_1529(Global_1296859->f_15, func_1368(10), 0)));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_10, ((func_695(12) && bParam0) && func_1529(Global_1296859->f_15, func_1368(12), 0)));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_11, ((func_695(13) && bParam0) && func_1529(Global_1296859->f_15, func_1368(13), 0)));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_12, ((func_695(1) && bParam0) && func_1529(Global_1296859->f_15, func_1368(1), 0)));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_18, ((bParam0 && func_1529(Global_1296859->f_15, 3, 0)) && bVar0));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_19, (((((((bVar1 || bVar2) || bVar3) || bVar4) || bVar5) || func_695(0)) || func_695(1)) && bParam0));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_16, bVar6);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_17, bVar7);
	bVar8 = (func_1530(2) && func_695(2));
	bVar9 = (func_1530(3) && func_695(3));
	bVar10 = (func_1530(4) && func_695(4));
	bVar11 = (func_1530(8) && func_695(8));
	bVar12 = (func_1530(9) && func_695(9));
	bVar13 = (func_1530(19) && func_695(19));
	bVar14 = (func_1530(18) && func_695(18));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_21, ((bVar8 || bVar9) || bVar10));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_25, (bVar11 || bVar12));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_22, false);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_23, false);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_24, false);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_26, bVar11);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_27, false);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_28, (func_1530(0) && func_695(0)));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_29, (func_1530(10) && func_695(10)));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_30, (func_1530(12) && func_695(12)));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_31, (func_1530(13) && func_695(13)));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_32, (func_1530(1) && func_695(1)));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_38, bVar13);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_39, bVar14);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_13, (((is_orbis_version() && func_695(15)) && bParam0) && func_1529(Global_1296859->f_15, func_1368(15), 0)));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_15, (((is_orbis_version() && func_695(16)) && bParam0) && func_1529(Global_1296859->f_15, func_1368(16), 0)));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_14, (((is_orbis_version() && func_695(17)) && bParam0) && func_1529(Global_1296859->f_15, func_1368(17), 0)));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_35, ((is_orbis_version() && func_1530(15)) && func_695(15)));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_37, false);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1463.f_36, ((is_orbis_version() && func_1530(17)) && func_695(17)));
}

int func_850()
{
	iVar0 = player_id();
	iVar1 = player_ped_id();
	iVar2 = _0xf49f14462f0ae27c(iVar0);
	if (!does_entity_exist(iVar2))
	{
		return 0;
	}
	if (is_entity_dead(iVar2))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar2))
	{
		return 0;
	}
	iVar3 = _get_rider_of_mount(iVar2, true);
	if (!does_entity_exist(iVar3))
	{
		return 0;
	}
	if (func_830())
	{
		return 0;
	}
	if (iVar3 != iVar1)
	{
		return 1;
	}
	if (_0x2e2e06023d07631e(iVar2, -2))
	{
		return 1;
	}
	return 0;
}

char* func_851(bool bParam0)
{
	if (bParam0)
	{
		return _create_var_string(2, "DISMOUNT_FOOTER");
	}
	return _create_var_string(2, "NM_STABLE_NO_MOUNT");
}

void func_852()
{
	return;
	if (is_control_just_pressed(2, 285921746))
	{
		if (Global_1940311->f_1433.f_1636.f_449 == 6)
		{
			func_1531(0);
		}
		else
		{
			func_1531(Global_1940311->f_1433.f_1636.f_449 + 1);
		}
	}
	else if (is_control_just_pressed(2, -875187602))
	{
		if (Global_1940311->f_1433.f_1636.f_449 == 0)
		{
			func_1531(6);
		}
		else
		{
			func_1531((Global_1940311->f_1433.f_1636.f_449 - 1));
		}
	}
}

void func_853()
{
	if (!func_504("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
	{
		return;
	}
	if (iVar1 == 0)
	{
		func_70(_create_var_string(2, "HORSE_LIST_EMPTY"), 1105014447);
		func_508(iVar0);
		return;
	}
	Var2.f_10 = -1;
	if (!func_506(Global_1940311->f_1433.f_1636, iVar0, iVar1, 0, &Var2, 1))
	{
		func_508(iVar0);
		return;
	}
	iVar26 = func_1532(&Var2, Var2.f_10);
	bVar27 = true;
	bVar28 = false;
	iVar29 = -217389439;
	if (bVar27)
	{
		if (iVar26 == 1)
		{
			iVar29 = 13992470;
		}
		else if (iVar26 == 2)
		{
			iVar29 = 396341162;
		}
		else if (iVar26 == 3)
		{
			iVar29 = 623069873;
		}
		else if (iVar26 == 4)
		{
			iVar29 = -637422489;
		}
	}
	else if (bVar28)
	{
		if (iVar26 == 0)
		{
			iVar29 = 937553910;
		}
		else if (iVar26 == 1)
		{
			iVar29 = 489732756;
		}
		else if (iVar26 == 2)
		{
			iVar29 = 195204984;
		}
		else if (iVar26 == 3)
		{
			iVar29 = -103418913;
		}
		else if (iVar26 == 4)
		{
			iVar29 = -815685893;
		}
	}
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_458, iVar29);
	iVar30 = ((func_1533(Var2.f_11) + iVar26) - 1);
	fVar31 = (IntToFloat(iVar30 + 1) / 10f);
	iVar32 = func_513(func_1534(&Var2, 0), 20, 100);
	iVar33 = round((IntToFloat(iVar32) * 0.15f));
	iVar34 = ((func_1535(Var2.f_11) + iVar26) - 1);
	fVar35 = (IntToFloat(iVar34 + 1) / 10f);
	iVar36 = func_513(func_1534(&Var2, 1), 20, 100);
	iVar37 = round((IntToFloat(iVar36) * 0.15f));
	iVar38 = _0xf49f14462f0ae27c(player_id());
	if (func_1175(iVar38, &Var2))
	{
		iVar30 = func_1536(iVar38);
		fVar31 = ((IntToFloat(iVar30 + 1) / 10f) * (to_float(get_entity_health(iVar38)) / to_float(get_entity_max_health(iVar38, false))));
		iVar32 = func_1537(iVar38, 0);
		iVar33 = round((IntToFloat(iVar32) * 0.15f));
		iVar34 = func_1538(iVar38);
		fVar35 = ((IntToFloat(iVar34 + 1) / 10f) * _0x22f2a386d43048a9(iVar38));
		iVar36 = func_1537(iVar38, 1);
		iVar37 = round((IntToFloat(iVar36) * 0.15f));
	}
	_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_463, iVar30 + 1);
	_databinding_write_data_float(Global_1940311->f_1433.f_1636.f_464, fVar31);
	_databinding_write_data_float(Global_1940311->f_1433.f_1636.f_465, 1f);
	_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_466, iVar33);
	_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_459, iVar34 + 1);
	_databinding_write_data_float(Global_1940311->f_1433.f_1636.f_460, fVar35);
	_databinding_write_data_float(Global_1940311->f_1433.f_1636.f_461, 1f);
	_databinding_write_data_int(Global_1940311->f_1433.f_1636.f_462, iVar37);
	bVar39 = false;
	bVar40 = func_1156(&Var2, -415648720, 0) > 0;
	bVar41 = func_724(&Var2, Var2.f_10, 1);
	iVar42 = func_1154(Var2);
	iVar43 = func_1539(Var2);
	bVar44 = iVar42 > Global_1296859->f_21;
	iVar45 = ceil((to_float((iVar42 - Global_1296859->f_21)) / 60f));
	iVar46 = func_511(Var2.f_11);
	sVar47 = func_509(0);
	if (func_510(Var2, -653439684, 0, -1) == 515427499)
	{
		sVar47 = func_509(1);
	}
	iVar48 = func_1160(bVar41, bVar44, bVar39);
	switch (iVar48)
	{
		case 0:
		case 1:
			if (bVar40)
			{
				func_70(_create_var_string(42, "HORSE_INFO_SUMMARY", sVar47, func_519(iVar46, Var2.f_22), iVar26), 1105014447);
			}
			else
			{
				func_70(_create_var_string(2, "HORSE_INFO_SUMMARY_UNSADDLED"), 1105014447);
			}
			break;
		case 2:
			func_70(_create_var_string(2, "HORSE_SUMMARY_DEAD", func_388(1806374467, 0, 59806960)), 1105014447);
			break;
		case 3:
			if (iVar43 == 0)
			{
				if (iVar45 == 1)
				{
					func_70(_create_var_string(2, "HORSE_SUMMARY_DEAD_RECOVERING_NO_PLURAL", iVar45), 1105014447);
				}
				else
				{
					func_70(_create_var_string(2, "HORSE_SUMMARY_DEAD_RECOVERING", iVar45), 1105014447);
				}
			}
			else if (iVar45 == 1)
			{
				func_70(_create_var_string(2, "HORSE_SUMMARY_HOTSWAP_RECOVERING_NO_PLURAL", iVar45), 1105014447);
			}
			else
			{
				func_70(_create_var_string(2, "HORSE_SUMMARY_HOTSWAP_RECOVERING", iVar45), 1105014447);
			}
			break;
	}
	func_508(iVar0);
}

int func_854()
{
	iVar0 = player_id();
	iVar1 = _0xb9050a97594c8832(iVar0);
	if (!does_entity_exist(iVar1))
	{
		return 0;
	}
	if (is_entity_dead(iVar1))
	{
		return 0;
	}
	if (func_830())
	{
		return 0;
	}
	if (!func_1540(iVar1))
	{
		return 0;
	}
	return 1;
}

char* func_855(bool bParam0)
{
	if (bParam0)
	{
		return _create_var_string(2, "DISMOUNT_VEHICLE_FOOTER");
	}
	return _create_var_string(2, "NM_STABLE_VEHICLE_NO_MOUNT");
}

void func_856()
{
	if (is_control_just_pressed(2, 285921746))
	{
		if (Global_1940311->f_1433.f_2204.f_373 == 0)
		{
			func_1541(0);
		}
		else
		{
			func_1541(Global_1940311->f_1433.f_2204.f_373 + 1);
		}
	}
	else if (is_control_just_pressed(2, -875187602))
	{
		if (Global_1940311->f_1433.f_2204.f_373 == 0)
		{
			func_1541(0);
		}
		else
		{
			func_1541((Global_1940311->f_1433.f_2204.f_373 - 1));
		}
	}
}

void func_857()
{
	Var2 = { func_522(0, -1591664384, -1591664384, -1591664384, 0, 0, -2072933068) };
	if (!func_523(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (iVar1 == 0)
	{
		func_70(_create_var_string(2, "VEHICLE_LIST_EMPTY"), 1105014447);
		func_508(iVar0);
		return;
	}
	Var16.f_10 = -1;
	if (!func_506(Global_1940311->f_1433.f_2204, iVar0, iVar1, 2, &Var16, 0))
	{
		func_508(iVar0);
		return;
	}
	Var40 = { func_743(2) };
	func_1178(&Var40, &Var16, &iVar44);
	func_1179(&Var40, &Var16, &iVar45);
	iVar46 = player_id();
	bVar47 = false;
	iVar48 = _0xb9050a97594c8832(iVar46);
	if (does_entity_exist(iVar48))
	{
		if (func_1175(iVar48, &Var16))
		{
			bVar47 = true;
		}
	}
	bVar49 = false;
	bVar50 = func_724(&Var16, Var16.f_10, 1);
	iVar51 = func_1176(Var16);
	iVar52 = func_1542(Var16);
	bVar53 = iVar51 > Global_1296859->f_21;
	iVar54 = ceil((to_float((iVar51 - Global_1296859->f_21)) / 60f));
	iVar55 = func_1180(bVar50, bVar53, bVar49, bVar47);
	switch (iVar55)
	{
		case 0:
			if (!func_1181(iVar44, iVar45, 1, 1))
			{
				func_70(_create_var_string(2, "VEHICLE_INFO_SUMMARY_ACTIVE"), 1105014447);
			}
			break;
		case 1:
			if (!func_1181(iVar44, iVar45, 1, 0))
			{
				func_70(_create_var_string(2, "VEHICLE_INFO_SUMMARY_STABLED"), 1105014447);
			}
			break;
		case 2:
			if (!func_1181(iVar44, iVar45, 1, 0))
			{
				func_70(_create_var_string(2, "VEHICLE_INFO_SUMMARY_STABLED"), 1105014447);
			}
			break;
		case 3:
			func_70(_create_var_string(2, "VEHICLE_SUMMARY_DEAD", func_388(852655472, 0, 59806960)), 1105014447);
			break;
		case 4:
			if (iVar52 == 0)
			{
				if (iVar54 == 1)
				{
					func_70(_create_var_string(2, "VEHICLE_SUMMARY_DEAD_RECOVERING_NO_PLURAL", iVar54), 1105014447);
				}
				else
				{
					func_70(_create_var_string(2, "VEHICLE_SUMMARY_DEAD_RECOVERING", iVar54), 1105014447);
				}
			}
			else if (iVar54 == 1)
			{
				func_70(_create_var_string(2, "VEHICLE_SUMMARY_HOTSWAP_RECOVERING_NO_PLURAL", iVar54), 1105014447);
			}
			else
			{
				func_70(_create_var_string(2, "VEHICLE_SUMMARY_HOTSWAP_RECOVERING", iVar54), 1105014447);
			}
			break;
	}
	func_508(iVar0);
}

bool func_858()
{
	iVar0 = func_77(player_id());
	if (iVar0 != -1)
	{
		if ((*Global_1131196)[iVar0]->f_18.f_1 != 0 && func_576((*Global_1131196)[iVar0]->f_18, 1))
		{
			return true;
		}
	}
	return false;
}

int func_859(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return -1;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (network_is_player_active(iVar0))
	{
		return func_77(iVar0);
	}
	return -1;
}

bool func_860(int iParam0)
{
	return func_576(Global_1137047->f_8, iParam0);
}

char* func_861()
{
	if (!network_is_player_active(player_id()))
	{
		return _create_var_string(2, "NET_CAMP_FLAG_STATUS_FOOTER_INVALID");
	}
	iVar0 = func_77(player_id());
	if (!func_426(iVar0))
	{
		return _create_var_string(2, "NET_CAMP_FLAG_STATUS_FOOTER_INVALID");
	}
	if (_0x424b17a7dc5c90bc(player_id()))
	{
		if (func_78(iVar0))
		{
			if (func_79(iVar0))
			{
				return _create_var_string(2, "NET_CAMP_FLAG_STATUS_FOOTER_RAISED");
			}
			else
			{
				iVar1 = func_1543(iVar0);
				if (iVar1 == 1)
				{
					return _create_var_string(2, "NET_CAMP_FLAG_STATUS_FOOTER_RAISED_COOLDOWN_SINGULAR", iVar1);
				}
				else
				{
					return _create_var_string(2, "NET_CAMP_FLAG_STATUS_FOOTER_RAISED_COOLDOWN", iVar1);
				}
			}
		}
		else if (func_81(iVar0))
		{
			return _create_var_string(2, "NET_CAMP_FLAG_STATUS_FOOTER_LOWERED");
		}
		else
		{
			iVar2 = func_1543(iVar0);
			if (iVar2 == 1)
			{
				return _create_var_string(2, "NET_CAMP_FLAG_STATUS_FOOTER_LOWERED_COOLDOWN_SINGULAR", iVar2);
			}
			else if (iVar2 <= 0)
			{
				return _create_var_string(2, "NET_CAMP_FLAG_STATUS_FOOTER_LOCKED");
			}
			else
			{
				return _create_var_string(2, "NET_CAMP_FLAG_STATUS_FOOTER_LOWERED_COOLDOWN", iVar2);
			}
		}
	}
	else if (func_78(iVar0))
	{
		return _create_var_string(2, "NET_CAMP_FLAG_STATUS_FOOTER_RAISED_MEMBER");
	}
	else
	{
		return _create_var_string(2, "NET_CAMP_FLAG_STATUS_FOOTER_LOWERED_MEMBER");
	}
	return _create_var_string(2, "NET_CAMP_FLAG_STATUS_FOOTER_INVALID");
}

void func_862(var uParam0, bool bParam1)
{
	_databinding_write_data_bool(uParam0->f_1, bParam1);
	_databinding_write_data_bool(uParam0->f_21, bParam1);
}

void func_863()
{
	_0x3bf0767cf33fcc88(Global_1940311->f_1433.f_2643.f_42);
}

var func_864()
{
	return Global_1940311->f_1433.f_9184.f_5[Global_1940311->f_1433.f_9184]->f_2;
}

bool func_865(var uParam0)
{
	return func_1544(Global_1296859->f_17, uParam0);
}

void func_866(int iParam0, int iParam1)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	StringCopy(&cVar27, "Camp_Location_Root_", 64);
	StringCopy(&cVar35, "Override_Camp_Location_Root_", 64);
	StringIntConCat(&cVar27, iParam0, 64);
	StringIntConCat(&cVar35, iParam0, 64);
	StringCopy(&cVar43, _create_var_string(2, func_603(iParam1, 0)), 64);
	Var0.f_16 = { cVar43 };
	if (func_165() || !func_239())
	{
		Var0.f_7 = -672301300;
	}
	else
	{
		Var0.f_7 = -2494464;
	}
	Var0.f_6 = 1603044301;
	Var0.f_5 = 1603044301;
	Var0.f_4 = 1433015236;
	Var0.f_24 = 1442026401;
	Var0.f_25 = -1218088854;
	Var0.f_26 = 0;
	func_1258(&(Global_1940311->f_1433.f_2643.f_49[iParam0]->f_1), Global_1940311->f_1433.f_2643.f_41, cVar27, Var0);
	func_1258(&(Global_1940311->f_1433.f_2643.f_349[iParam0]->f_1), Global_1940311->f_1433.f_2643.f_41, cVar35, Var0);
	Global_1940311->f_1433.f_2643.f_49[iParam0] = _databinding_add_data_hash(Global_1940311->f_1433.f_2643.f_49[iParam0]->f_1, "camp_selection_district", iParam1);
	Global_1940311->f_1433.f_2643.f_349[iParam0] = _databinding_add_data_hash(Global_1940311->f_1433.f_2643.f_349[iParam0]->f_1, "camp_selection_district", iParam1);
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1940311->f_1433.f_2643.f_42, iParam0, "pm_dynamic_text_and_end_image", Global_1940311->f_1433.f_2643.f_49[iParam0]->f_1);
}

bool func_867(int iParam0, int iParam1)
{
	if (func_165())
	{
		if (func_184(&iVar1, &iVar0))
		{
			if (iVar0 == iParam0 && iVar1 == iParam1)
			{
				return true;
			}
		}
	}
	else
	{
		if (!network_is_game_in_progress())
		{
			return false;
		}
		if (&Global_1296859 < 0 || &Global_1296859 >= 32)
		{
			return false;
		}
		if (!func_799(&(Global_1296859->f_154[&Global_1296859]), 0))
		{
			return false;
		}
		vVar2 = { func_536(&Global_1296859) };
		if (vVar2.y == iParam1 && vVar2.x == func_533(iParam0))
		{
			return true;
		}
	}
	return false;
}

void func_868(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	StringCopy(&cVar0, _create_var_string(2, func_603(iParam1, 0)), 64);
	_databinding_write_data_string(Global_1940311->f_1433.f_2643.f_49[iParam0]->f_1.f_18, &cVar0);
	if (_databinding_is_data_id_valid(&(Global_1940311->f_1433.f_2643.f_49[iParam0])))
	{
		_databinding_write_data_hash_string(&(Global_1940311->f_1433.f_2643.f_49[iParam0]), iParam1);
	}
	if (_databinding_is_data_id_valid(&(Global_1940311->f_1433.f_2643.f_349[iParam0])))
	{
		_databinding_write_data_hash_string(&(Global_1940311->f_1433.f_2643.f_349[iParam0]), iParam1);
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_2643.f_49[iParam0]->f_1.f_1, bParam3);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2643.f_49[iParam0]->f_1.f_9, (bParam3 && !bParam4));
	_databinding_write_data_bool(Global_1940311->f_1433.f_2643.f_49[iParam0]->f_1.f_21, bParam4);
	if (func_1434() == iParam0)
	{
		func_1545(iParam1);
		func_114(iParam2, iParam1);
	}
}

bool func_869(var uParam0)
{
	if (func_1546() != -1)
	{
		return func_1547(func_1546(), Global_1296859->f_17, uParam0);
	}
	iVar0 = func_1548(&((*Global_1134390)[network_player_id_to_int()]->f_38));
	return func_870(iVar0, (*Global_1134390)[network_player_id_to_int()]->f_38.f_4, uParam0);
}

bool func_870(int iParam0, vector3 vParam1, var uParam4)
{
	switch (iParam0)
	{
		case 0:
			*uParam4 = 1;
			uParam4->f_1[0] = -682748;
			break;
		case 1:
			*uParam4 = 2;
			uParam4->f_1[0] = 1357161730;
			uParam4->f_1[1] = 1483778247;
			break;
		case 2:
			*uParam4 = 3;
			uParam4->f_1[0] = 1581179681;
			uParam4->f_1[1] = -1554232707;
			uParam4->f_1[2] = -724534761;
			break;
		case 3:
			*uParam4 = 3;
			uParam4->f_1[0] = -987049424;
			uParam4->f_1[1] = 1538293636;
			uParam4->f_1[2] = -1871413878;
			break;
		case 4:
			*uParam4 = 4;
			uParam4->f_1[0] = -215258135;
			uParam4->f_1[1] = 892234183;
			uParam4->f_1[2] = -1992167326;
			uParam4->f_1[3] = -1884014371;
			break;
		default:
			return false;
	}
	if (!func_1549(vParam1, uParam4))
	{
		return false;
	}
	return true;
}

void func_871(int iParam0)
{
	if (_0x81d7183e7a8eca72(Global_1940311->f_1433.f_54.f_69) != func_1550(iParam0))
	{
		iVar0 = func_1550(iParam0);
		if (!_does_streamed_txd_exist(iVar0))
		{
			return;
		}
		_request_streamed_txd(iVar0, false);
		if (!_has_streamed_txd_loaded(iVar0))
		{
			return;
		}
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_54.f_69, iVar0);
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_54.f_68, -712210889);
	}
	func_111(iParam0);
}

bool func_872(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -1896177107:
			return true;
		case 2042309940:
			return bParam1;
		default:
			break;
	}
	return false;
}

void func_873(var uParam0, struct<2> Param1, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25)
{
	func_1551(uParam0, Param1.f_1);
	_databinding_write_data_int(uParam0->f_26, Param1);
}

void func_874()
{
	if (!func_396(Global_1296859->f_15))
	{
		return;
	}
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return;
	}
	vVar0 = { _get_waypoint_coords() };
	vVar0.f_2 = _get_heightmap_bottom_z_for_position(vVar0.x, vVar0.y);
	_0xcf213a5fc3abfc08(vVar0.x, vVar0.y, 50f);
}

void func_875()
{
	if (!func_959(&(Global_1211181->f_5)))
	{
		func_960(&(Global_1211181->f_5), 0);
	}
	if (func_1552(*Global_1211181) > 40 && func_961(&(Global_1211181->f_5)) > 2f)
	{
		func_960(&(Global_1211181->f_5), 1);
		func_1553(*Global_1211181);
	}
}

int func_876(int iParam0)
{
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return 0;
	}
	if (!func_1554(iParam0))
	{
		return 0;
	}
	if (!func_1217(iParam0))
	{
		return 0;
	}
	if (func_1137(player_id(), 1, 1) && !func_1555(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			return 1;
		case 4:
		case 5:
			return func_1556(iParam0);
		case 6:
			return func_1557();
		case 7:
			return func_1558();
		case 8:
		case 9:
		case 10:
			return func_1559(iParam0);
		default:
			break;
	}
	return 0;
}

bool func_877(int iParam0, var uParam1)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return false;
	}
	if (&Global_1940311->f_1433.f_157.f_357.f_234.f_1[iParam0] == 0)
	{
		return false;
	}
	_copy_memory(uParam1, Global_1940311->f_1433.f_157.f_357.f_234.f_1[iParam0], 3);
	return true;
}

int func_878(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return 0;
	}
	Global_1940311->f_1433.f_157.f_357.f_234.f_1[iParam0] = 0;
	Global_1940311->f_1433.f_157.f_357.f_234.f_1[iParam0]->f_1 = 255;
	Global_1940311->f_1433.f_157.f_357.f_234.f_1[iParam0]->f_2 = -1;
	return 1;
}

bool func_879(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&Global_1940311->f_1433.f_157.f_357.f_234.f_1[iVar0] == 1)
		{
			if (Global_1940311->f_1433.f_157.f_357.f_234.f_1[iVar0]->f_1 == iParam0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

int func_880()
{
	iVar3 = 0;
	while (iVar3 < 7)
	{
		if (&Global_1940311->f_1433.f_157.f_357.f_234.f_1[iVar3])
		{
			if (Global_1940311->f_1433.f_157.f_357.f_234.f_1[iVar3]->f_2 <= -1 || Global_1940311->f_1433.f_157.f_357.f_234.f_1[iVar3]->f_2 >= 2)
			{
			}
			uVar0[Global_1940311->f_1433.f_157.f_357.f_234.f_1[iVar3]->f_2] = &uVar0[Global_1940311->f_1433.f_157.f_357.f_234.f_1[iVar3]->f_2] + 1;
		}
		iVar3++;
	}
	iVar4 = 0;
	iVar5 = 0;
	while (iVar5 < 2)
	{
		if (iVar5 == 0)
		{
		}
		else if (&uVar0[iVar5] < &uVar0[iVar4])
		{
			iVar4 = iVar5;
		}
		iVar5++;
	}
	return iVar4;
}

bool func_881(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&Global_1940311->f_1433.f_157.f_357.f_234.f_1[iVar0] == 0)
		{
			if (func_1560(iVar0, iParam0, iParam1))
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_882(var uParam0, char* sParam1, int iParam2, int iParam3)
{
	if (Global_1896738->f_393.f_2691 >= 32)
	{
		return false;
	}
	if (!network_is_handle_valid(uParam0))
	{
		return false;
	}
	_copy_memory(&(Global_1896738->f_393.f_2[Global_1896738->f_393.f_2691]->f_1), uParam0, 7);
	Global_1896738->f_393.f_2[Global_1896738->f_393.f_2691]->f_24 = iParam2;
	Global_1896738->f_393.f_2[Global_1896738->f_393.f_2691]->f_8 = { func_322(sParam1) };
	if (func_1421(uParam0) == 0)
	{
		Global_1896738->f_393.f_2[Global_1896738->f_393.f_2691]->f_27 = -1178838578;
	}
	else
	{
		Global_1896738->f_393.f_2[Global_1896738->f_393.f_2691]->f_27 = -462010351;
	}
	Global_1896738->f_393.f_2[Global_1896738->f_393.f_2691]->f_28 = iParam3;
	Global_1896738->f_393.f_2[Global_1896738->f_393.f_2691] = 0;
	Global_1896738->f_393.f_2691++;
	return true;
}

void func_883(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 184716;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 184837;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 184974;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 185217;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 197246;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 197372;
			uParam0->f_11++;
			break;
	}
}

bool func_884(int iParam0, var uParam1)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 7)
	{
		if (&Global_1940311->f_1433.f_157.f_357.f_234.f_1[iVar0] == 0)
		{
		}
		else if (Global_1940311->f_1433.f_157.f_357.f_234.f_1[iVar0]->f_1 == iParam0)
		{
			_copy_memory(uParam1, Global_1940311->f_1433.f_157.f_357.f_234.f_1[iVar0], 3);
			return true;
		}
		iVar0++;
	}
	return false;
}

int func_885(int iParam0)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 < 7)
	{
		if (!&Global_1940311->f_1433.f_157.f_357.f_234.f_1[iVar1])
		{
		}
		else if (Global_1940311->f_1433.f_157.f_357.f_234.f_1[iVar1]->f_2 != iParam0)
		{
		}
		else
		{
			iVar0++;
		}
		iVar1++;
	}
	return iVar0;
}

void func_886()
{
	func_1563(func_478() == 0);
}

void func_887()
{
	func_1564(func_480() == 0);
}

void func_888()
{
	func_1565(func_451() == 0);
}

void func_889()
{
	func_1566(func_486() == 0);
}

void func_890()
{
	bVar0 = func_1567();
	if (bVar0)
	{
		func_862(&(Global_1940311->f_1433.f_1507.f_30), 1);
	}
	else
	{
		func_862(&(Global_1940311->f_1433.f_1507.f_30), 0);
	}
	if (func_434() == 72556410)
	{
		func_67(1);
		func_68();
		if (!bVar0)
		{
			iVar1 = 859817522;
		}
		else
		{
			iVar1 = 1105014447;
		}
		func_70(func_69(), iVar1);
	}
}

void func_891()
{
	iVar0 = 1105014447;
	func_95();
	if (func_434() == -1080557963)
	{
		func_93(1);
		func_94();
		func_70(func_482(), iVar0);
	}
}

void func_892()
{
	iVar0 = 3;
	iVar1 = 59806960;
	bVar2 = true;
	bVar3 = true;
	if (!func_625())
	{
		iVar0 = 5;
		bVar2 = false;
	}
	else if (!_unlock_is_unlocked(1392007362))
	{
		iVar0 = 6;
		bVar2 = false;
	}
	if (func_1568())
	{
		iVar1 = 997808187;
		bVar3 = true;
		iVar0 = 0;
	}
	else if (func_1569())
	{
		iVar1 = -570078785;
		bVar3 = true;
		iVar0 = 1;
	}
	else if (func_1570())
	{
		iVar1 = 59806960;
		bVar3 = true;
		iVar0 = 2;
	}
	else
	{
		iVar0 = 4;
		bVar2 = false;
		bVar3 = false;
	}
	if (func_840())
	{
		iVar0 = 5;
		bVar2 = false;
	}
	if (func_419())
	{
		iVar0 = 5;
		bVar2 = false;
	}
	func_1571(iVar1, bVar3);
	func_1572(iVar0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_125, bVar2);
	bVar4 = func_1573(26930588);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_127, (_unlock_is_new(1392007362) && !bVar4));
	_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_128, bVar4);
}

bool func_893(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (func_1574())
	{
		return false;
	}
	iVar0 = func_1012(iParam0, 0);
	if (iVar0 <= 0)
	{
		return false;
	}
	else if (!func_537(iVar0))
	{
		func_142(65536);
		return false;
	}
	return true;
}

bool func_894(int iParam0)
{
	if (iParam0 == -1)
	{
		return false;
	}
	if (func_1575(iParam0, 430260396))
	{
		return false;
	}
	iVar0 = func_1012(iParam0, 1);
	if (iVar0 <= 0)
	{
		return false;
	}
	else if (!func_537(iVar0))
	{
		func_142(131072);
		return false;
	}
	return true;
}

void func_895()
{
	func_1576();
}

bool func_896()
{
	if (!func_576(Global_1138962->f_137.f_1, 2))
	{
		return false;
	}
	return func_576(Global_1138962->f_145, 2);
}

void func_897()
{
	if (func_1577())
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_8111.f_13, true);
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_8111.f_13, false);
	}
}

void func_898()
{
	if (func_319())
	{
		func_1578();
		iVar6 = 0;
		iVar7 = func_864();
		switch (iVar7)
		{
			case 0:
				func_1578();
				iVar6 = (5 - 1);
				while (iVar6 >= 0)
				{
					iVar0[0] = iVar6;
					func_1579(&(iVar0[0]), iVar6);
					iVar6 = (iVar6 + -1);
				}
				break;
			case 1:
				func_1578();
				iVar0[0] = func_1580();
				func_1579(&(iVar0[0]), 0);
				break;
			case 2:
				func_1578();
				func_1581(&iVar0);
				iVar6 = (5 - 1);
				while (iVar6 >= 0)
				{
					func_1579(&(iVar0[iVar6]), iVar6);
					iVar6 = (iVar6 + -1);
				}
				break;
		}
	}
}

void func_899()
{
	iVar0 = func_383(get_player_index(), 1);
	iVar1 = -1;
	iVar4 = _databinding_get_array_count(Global_1940311->f_1433.f_8125.f_1);
	iVar5 = 0;
	iVar6 = -1;
	iVar5 = 0;
	while (iVar5 <= (iVar4 - 1))
	{
		iVar6 = _databinding_read_data_int(&(Global_1940311->f_1433.f_8125.f_234[iVar5]));
		iVar1 = iVar6;
		iVar2 = func_1582(iVar1);
		iVar3 = func_612(iVar2, 0, 1, -1, 1);
		bVar7 = func_1583(iVar2, 1, iVar3, 0);
		if (func_1391(iVar3))
		{
			_databinding_write_data_hash_string(Global_1940311->f_1433.f_8125.f_2[iVar5]->f_1.f_8, -625835022);
		}
		else
		{
			_databinding_write_data_hash_string(Global_1940311->f_1433.f_8125.f_2[iVar5]->f_1.f_8, 1447387479);
		}
		if (iVar0 != -1)
		{
			if (iVar0 == iVar1)
			{
				_databinding_write_data_bool(Global_1940311->f_1433.f_8125.f_2[iVar5]->f_1.f_21, true);
				_databinding_write_data_bool(Global_1940311->f_1433.f_8125.f_2[iVar5]->f_1.f_9, false);
			}
			else
			{
				_databinding_write_data_bool(Global_1940311->f_1433.f_8125.f_2[iVar5]->f_1.f_21, false);
				_databinding_write_data_bool(Global_1940311->f_1433.f_8125.f_2[iVar5]->f_1.f_9, bVar7);
			}
		}
		iVar5++;
	}
}

bool func_900(int iParam0)
{
	return func_331(Global_1896738->f_194, iParam0);
}

void func_901(int iParam0, bool bParam1)
{
	iVar0 = func_1584(iParam0, 1);
	if (iVar0 < 0)
	{
		return;
	}
	if (iVar0 >= 2)
	{
		return;
	}
	if (!_databinding_is_data_id_valid(&(Global_1896738->f_377.f_2[iVar0])))
	{
		return;
	}
	_databinding_write_data_bool(&(Global_1896738->f_377.f_2[iVar0]), bParam1);
}

int func_902()
{
	return Global_1940311->f_1433.f_9184.f_3;
}

void func_903(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 184716;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 184837;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 184974;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 185217;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 191524;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 191690;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 191785;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 191880;
			uParam0->f_11++;
			uParam0->f_12 = 199300;
			uParam0->f_13 = 1;
			break;
		case -462010351:
			(*uParam0)[uParam0->f_11] = 184974;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 192266;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 192328;
			uParam0->f_11++;
			uParam0->f_12 = 199300;
			uParam0->f_13 = 1;
			break;
	}
}

void func_904(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 184716;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 184837;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 184974;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 185217;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 191524;
			uParam0->f_11++;
			uParam0->f_12 = 199589;
			uParam0->f_13 = 1;
			break;
		case -462010351:
			(*uParam0)[uParam0->f_11] = 184974;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 192328;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 199897;
			uParam0->f_11++;
			uParam0->f_12 = 199589;
			uParam0->f_13 = 1;
			break;
	}
}

void func_905(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 184716;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 184837;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 184974;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 185217;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 191524;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 192266;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 192328;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 200033;
			uParam0->f_11++;
			uParam0->f_12 = 200152;
			uParam0->f_13 = 1;
			break;
		case -462010351:
			(*uParam0)[uParam0->f_11] = 184974;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 192266;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 192328;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 200033;
			uParam0->f_11++;
			uParam0->f_12 = 200152;
			uParam0->f_13 = 1;
			break;
	}
}

void func_906(var uParam0, int iParam1)
{
	uParam0->f_11 = 0;
	uParam0->f_13 = 0;
	switch (iParam1)
	{
		case -1178838578:
			(*uParam0)[uParam0->f_11] = 184716;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 184837;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 184974;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 185217;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 191524;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 200251;
			uParam0->f_11++;
			(*uParam0)[uParam0->f_11] = 200313;
			uParam0->f_11++;
			uParam0->f_12 = 200409;
			uParam0->f_13 = 1;
			break;
	}
}

void func_907()
{
	Global_1896738->f_3085.f_4 = 1;
}

void func_908()
{
	Global_1940311->f_1433.f_830.f_2.f_483 = 0;
	func_982(&(Global_1940311->f_1433.f_830), 0);
	network_clear_found_gamers();
}

void func_909(int iParam0)
{
	Global_1896738->f_208 = iParam0;
}

void func_910(int iParam0, bool bParam1)
{
	if (!func_1593())
	{
		if (bParam1)
		{
			func_177();
			func_789();
		}
		return;
	}
	if (func_1594() == 0)
	{
		if (bParam1)
		{
			if (func_931() == func_929())
			{
				if (Global_1896738->f_3085.f_6 == 0)
				{
					func_789();
					func_177();
				}
				else
				{
					func_1595(1);
				}
			}
			else if (func_1596())
			{
				func_789();
				func_177();
			}
			else
			{
				func_1595(1);
			}
		}
	}
	if (func_1594() == 1)
	{
		func_1597(func_931());
		func_789();
		iVar0 = 0;
		while (iVar0 < Global_1896738->f_3085.f_6)
		{
			if (!func_1598(iParam0, Global_1896738->f_3085.f_7.f_1[iVar0]))
			{
			}
			else if (!func_882(Global_1896738->f_3085.f_7.f_1[iVar0], &(Global_1896738->f_3085.f_7.f_1[iVar0]->f_7), 0, iParam0))
			{
			}
			iVar0++;
		}
		func_1595(2);
	}
	if (func_1594() == 2)
	{
		if (func_931() != func_1599())
		{
			func_1595(0);
		}
		if (!bParam1)
		{
			func_1595(0);
		}
	}
}

void func_911(int iParam0)
{
	if (iParam0 == 11)
	{
		if (func_1600(get_player_index()) && !func_1601(get_player_index()))
		{
			return;
		}
	}
	iVar0 = _0x53a94294fddcf98c(&uVar1, 1);
	if (iVar0 > 1)
	{
		iVar89 = 0;
		while (iVar89 <= (iVar0 - 1))
		{
			if (iVar0 < 2)
			{
			}
			else if (!_0xd6f6acf4392187fb(&(uVar1[iVar89])))
			{
			}
			else
			{
				iVar90 = iVar89 + 1;
				while (iVar90 <= (iVar0 - 1))
				{
					if (!_0xd6f6acf4392187fb(&(uVar1[iVar90])))
					{
					}
					else
					{
						iVar87 = _0x4be6c13a45cca8ec(&(uVar1[iVar89]));
						if (!_network_is_player_index_valid(iVar87))
						{
						}
						else
						{
							iVar85 = func_668(iVar87, 1, -1, 0);
							iVar88 = _0x4be6c13a45cca8ec(&(uVar1[iVar90]));
							if (!_network_is_player_index_valid(iVar88))
							{
							}
							else
							{
								iVar86 = func_668(iVar88, 1, -1, 0);
								if (!func_1602(iVar86, iVar85))
								{
								}
								else
								{
									uVar84 = &uVar1[iVar89];
									uVar1[iVar89] = &uVar1[iVar90];
									uVar1[iVar90] = uVar84;
								}
							}
						}
					}
					iVar90++;
				}
			}
			iVar89++;
		}
		iVar89 = 0;
		while (iVar89 <= (iVar0 - 1))
		{
			if (!_0xd6f6acf4392187fb(&(uVar1[iVar89])))
			{
			}
			else
			{
				iVar90 = iVar89 + 1;
				while (iVar90 <= (iVar0 - 1))
				{
					iVar87 = _0x4be6c13a45cca8ec(&(uVar1[iVar89]));
					if (!_network_is_player_index_valid(iVar87))
					{
					}
					else
					{
						iVar85 = func_668(iVar87, 1, -1, 0);
						iVar91 = _0xd1bf325c8252a982(&(uVar1[iVar89]), &Var34);
						if (!_0xd6f6acf4392187fb(&(uVar1[iVar90])))
						{
						}
						else
						{
							iVar88 = _0x4be6c13a45cca8ec(&(uVar1[iVar90]));
							if (!_network_is_player_index_valid(iVar88))
							{
							}
							else
							{
								iVar86 = func_668(iVar88, 1, -1, 0);
								iVar92 = _0xd1bf325c8252a982(&(uVar1[iVar90]), &Var34);
								if (iVar86 != iVar85)
								{
								}
								else
								{
									if (iVar92 >= iVar91)
									{
									}
									else
									{
										uVar84 = &uVar1[iVar89];
										uVar1[iVar89] = &uVar1[iVar90];
										uVar1[iVar90] = uVar84;
									}
									iVar90++;
								}
								iVar89++;
								func_789();
								iVar94 = 0;
								while (iVar94 < 32)
								{
									if (!_0xd6f6acf4392187fb(&(uVar1[iVar94])))
									{
									}
									else
									{
										iVar93 = _0xd1bf325c8252a982(&(uVar1[iVar94]), &Var34);
										iVar96 = 0;
										while (iVar96 < iVar93)
										{
											if (!func_34(*Var34[iVar96]))
											{
											}
											else if (!network_is_gamer_in_my_session(Var34[iVar96]))
											{
											}
											else
											{
												iVar95 = network_get_player_from_gamer_handle(Var34[iVar96]);
												if (!_network_is_player_index_valid(iVar95))
												{
												}
												else if (_0x424b17a7dc5c90bc(iVar95))
												{
													_copy_memory(&uVar97, Var34[0], 7);
													_copy_memory(Var34[0], Var34[iVar96], 7);
													_copy_memory(Var34[iVar96], &uVar97, 7);
												}
												else
												{
													iVar96++;
												}
												iVar96 = 0;
												while (iVar96 < iVar93)
												{
													if (func_1421(Var34[iVar96]) != 0)
													{
													}
													else
													{
														iVar95 = network_get_player_from_gamer_handle(Var34[iVar96]);
														switch (iParam0)
														{
															case 7:
															case 8:
															case 9:
															case 10:
																if (func_1603(Var34[iVar96]))
																{
																}
																else
																{
																	Jump @799; //curOff = 767
																	if (func_1601(get_player_index()) && iVar95 == get_player_index())
																	{
																	}
																	else if (func_2(iVar95))
																	{
																	}
																	else if (!func_882(Var34[iVar96], get_player_name(iVar95), func_1604(iVar95), iParam0))
																	{
																	}
																}
																iVar96++;
																iVar94++;
																default:
																	break;
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

void func_912(int iParam0)
{
	if (!_0xa47d48d06aa5a188())
	{
		return;
	}
	switch (func_1605())
	{
		case 0:
			_0x5cb8b0c846d0f30b(0);
			if (!_0x3e4a16bc669e71b3())
			{
			}
			func_1606(_0xa94ece191d90637a());
			func_1608(func_1607());
			func_1609();
			func_339(1);
			func_909(1);
		case 1:
			if (func_841())
			{
				if (_0x1f51f367b710a832())
				{
				}
			}
			bVar0 = false;
			bVar1 = false;
			iVar2 = 0;
			if (func_1610() < _0xa94ece191d90637a() && func_1610() >= 0)
			{
				if (func_1607() != func_1610())
				{
					bVar1 = true;
				}
			}
			else
			{
				func_909(0);
				return;
			}
			if (bVar1)
			{
				while (bVar1)
				{
					if (iVar2 > 15)
					{
						bVar1 = false;
					}
					if (func_1607() < func_1610())
					{
						if (_0xda1bfed8582f61f0())
						{
						}
						else
						{
							iVar2++;
						}
					}
					else if (func_1607() > func_1610())
					{
						if (_0x232e1eb23cdb313c())
						{
						}
						else
						{
							iVar2++;
						}
					}
					else
					{
						bVar1 = false;
						bVar0 = true;
					}
				}
				if (!bVar0)
				{
					func_909(0);
					return;
				}
			}
			if (!func_1611())
			{
				func_339(1);
			}
			func_1606(_0xa94ece191d90637a());
			func_1608(func_1607());
			func_1609();
			vVar3.f_2 = 32;
			if (!_0xa3eec0a5aff3fc5b(&vVar3))
			{
				func_909(0);
				return;
			}
			func_789();
			iVar583 = 0;
			while (iLocal_586 < vVar3.y)
			{
				if (!network_is_handle_valid(vVar3.f_2[iLocal_586]))
				{
				}
				else
				{
					if (network_is_gamer_in_my_session(vVar3.f_2[iLocal_586]))
					{
						iVar582 = network_get_player_from_gamer_handle(vVar3.f_2[iLocal_586]);
						if (func_2(iLocal_585))
						{
						}
						else
						{
							switch (iParam0)
							{
								case 7:
								case 8:
								case 9:
								case 10:
									if (func_1603(vVar3.f_2[iLocal_586]))
									{
									}
									else if (!func_882(vVar3.f_2[iLocal_586], &(vVar3.f_2[iLocal_586]->f_7), 0, iParam0))
									{
									}
									iVar583 = iLocal_586 + 1;
									func_909(2);
									if (func_1612() != _0xa94ece191d90637a())
									{
										_0x3e4a16bc669e71b3();
										func_909(1);
										return;
									}
									if (func_1610() != func_1613())
									{
										func_909(1);
										return;
									}
									if (func_306())
									{
										func_909(1);
										return;
									}
									if (func_841())
									{
										func_909(1);
										return;
									}
								}
							}
						}
					}
					default:
						break;
			}
		}

void func_913(int iParam0)
{
	if (Global_1940311->f_1433.f_830.f_2 == 0)
	{
		if (_0x4664d213a0ccaf40())
		{
			func_982(&(Global_1940311->f_1433.f_830), 1);
		}
		else if (_0x12aeb56b489415c5())
		{
			func_982(&(Global_1940311->f_1433.f_830), 1);
		}
		else if (_0x6d206d383bb5f6b1(0, 32))
		{
			func_982(&(Global_1940311->f_1433.f_830), 1);
		}
		else
		{
			func_908();
			_0x49cf17a564918e8d();
			func_177();
		}
	}
	if (Global_1940311->f_1433.f_830.f_2 == 1)
	{
		if (_0x12aeb56b489415c5())
		{
			Global_1940311->f_1433.f_830.f_2.f_483 = _0x37a834aec6a4f74a();
			if (_0xfefcc345ce357453(0, Global_1940311->f_1433.f_830.f_2.f_483, &(Global_1940311->f_1433.f_830.f_2.f_1), 482))
			{
				func_1614(iParam0);
				func_982(&(Global_1940311->f_1433.f_830), 2);
			}
			else
			{
				func_982(&(Global_1940311->f_1433.f_830), 0);
			}
		}
		else if (!_0x4664d213a0ccaf40())
		{
			func_982(&(Global_1940311->f_1433.f_830), 2);
		}
	}
	if (Global_1940311->f_1433.f_830.f_2 == 2)
	{
	}
}

int func_914()
{
	return Global_1896738->f_393.f_2691;
}

bool func_915(int iParam0, var uParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_1896738->f_393.f_2691)
	{
		return false;
	}
	_copy_memory(uParam1, Global_1896738->f_393.f_2[iParam0], 84);
	return true;
}

int func_916(int iParam0, var uParam1, int iParam2)
{
	bVar2 = false;
	iVar3 = 0;
	if (!func_638(iParam0))
	{
		return 0;
	}
	if (_0xbea7d3cb47e1479c())
	{
		return 0;
	}
	if (iParam2 > 32)
	{
		return 0;
	}
	bVar2 = func_1615(uParam1, iParam2);
	if (bVar2)
	{
		func_1616();
		iVar0 = 0;
		while (iVar0 < *uParam1)
		{
			if (func_34(*(*uParam1)[iVar0]))
			{
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (iVar0 < iParam2 && func_34(*(*uParam1)[iVar0]))
			{
				*Global_1139119->f_1[Global_1139119->f_259] = { *(*uParam1)[iVar0] };
				Global_1139119->f_259++;
			}
			iVar0++;
		}
		iVar0 = 0;
		while (iVar0 < 32)
		{
			if (func_34(*Global_1139119->f_1[iVar0]))
			{
			}
			iVar0++;
		}
		iVar3 = 1;
	}
	Global_1139119->f_259 = func_513(Global_1139119->f_259, 0, 32);
	iVar0 = 0;
	while (iVar0 < Global_1139119->f_259)
	{
		if (func_34(*Global_1139119->f_1[iVar0]))
		{
		}
		iVar0++;
	}
	if (Global_1139119->f_259 == 0)
	{
		return 0;
	}
	if (iVar3 == 0 && get_cloud_time_as_int() < Global_1139119->f_260 + 30)
	{
		return 0;
	}
	Global_1139119->f_261 = 0;
	Global_1139119 = iParam0;
	iVar1 = func_1617(iParam0);
	if (_0x398066f893149856(iVar1, &(Global_1139119->f_1), Global_1139119->f_259))
	{
		Global_1139119->f_260 = get_cloud_time_as_int();
		return 1;
	}
	return 0;
}

bool func_917()
{
	return Global_1940311->f_1433.f_9184.f_245;
}

int func_918()
{
	return Global_1940311->f_1433.f_9184.f_247;
}

int func_919()
{
	return Global_1940311->f_1433.f_9184.f_246;
}

void func_920(char* sParam0, bool bParam1)
{
	if (is_string_null_or_empty(sParam0))
	{
		_databinding_write_data_string(Global_1940311->f_1433.f_157.f_614.f_1, "");
		_databinding_write_data_string(Global_1940311->f_1433.f_157.f_614.f_2, "");
	}
	else if (bParam1)
	{
		_databinding_write_data_string(Global_1940311->f_1433.f_157.f_614.f_2, sParam0);
	}
	else
	{
		_databinding_write_data_string(Global_1940311->f_1433.f_157.f_614.f_1, sParam0);
	}
	Global_1940311->f_1433.f_9184.f_240 = 0;
}

bool func_921()
{
	return Global_1940311->f_1433.f_9184.f_243;
}

void func_922(char* sParam0, char* sParam1, int iParam2)
{
	iVar0 = get_sound_id();
	if (iVar0 != -1)
	{
		_0xce5d0ffe83939af1(iVar0, sParam0, sParam1, iParam2);
		(*Global_1957967)[Global_1957967->f_25] = iVar0;
		Global_1957967->f_25 = (Global_1957967->f_25 + 1 % 24);
	}
}

bool func_923(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1940311->f_1433.f_9184.f_4)
	{
		return false;
	}
	return Global_1940311->f_1433.f_9184.f_5[iParam0]->f_21;
}

int func_924()
{
	return Global_1896738->f_6.f_6;
}

bool func_925()
{
	return Global_1940311->f_1433.f_9184.f_242;
}

void func_926()
{
	Global_1940311->f_1433.f_9184.f_242 = 1;
}

bool func_927(int iParam0, bool bParam1)
{
	if (iParam0 < 0 || iParam0 > Global_1940311->f_1433.f_9184.f_4)
	{
		return false;
	}
	Global_1940311->f_1433.f_9184.f_2 = Global_1940311->f_1433.f_9184;
	Global_1940311->f_1433.f_9184.f_3 = Global_1940311->f_1433.f_9184.f_1;
	Global_1940311->f_1433.f_9184 = iParam0;
	Global_1940311->f_1433.f_9184.f_1 = Global_1940311->f_1433.f_9184.f_5[Global_1940311->f_1433.f_9184]->f_1;
	if (!Global_1940311->f_1433.f_9184.f_5[Global_1940311->f_1433.f_9184]->f_22)
	{
	}
	Global_1940311->f_1433.f_9184.f_239 = 1;
	if (bParam1)
	{
		if (Global_1940311->f_1433.f_9184.f_5[Global_1940311->f_1433.f_9184]->f_2 != -1)
		{
			_uistatemachine_request_transition(1433015236, Global_1940311->f_1433.f_9184.f_5[Global_1940311->f_1433.f_9184]->f_2);
			Global_1940311->f_1433.f_9184.f_238 = 1;
		}
	}
	Global_1940311->f_1433.f_9184.f_236 = 1;
	return true;
}

int func_928()
{
	return Global_1896738->f_3085;
}

int func_929()
{
	return Global_1896738->f_3085.f_3;
}

void func_930(int iParam0)
{
	Global_1896738->f_3085.f_3 = iParam0;
}

int func_931()
{
	return Global_1896738->f_3085.f_2;
}

void func_932()
{
	Global_1896738->f_3085.f_5 = 0;
}

int func_933()
{
	return absi((get_game_timer() - Global_1896738->f_3085.f_5));
}

void func_934(int iParam0)
{
	Global_1896738->f_3085.f_2 = iParam0;
}

void func_935(int iParam0)
{
	Global_1896738->f_3085 = iParam0;
}

void func_936()
{
	Global_1896738->f_3085.f_5 = get_game_timer();
}

void func_937()
{
	Global_1896738->f_3085.f_4 = 0;
}

int func_938()
{
	return Global_1896738->f_191;
}

void func_939(int iParam0)
{
	Global_1896738->f_191.f_2 = iParam0;
}

void func_940(int iParam0)
{
	Global_1896738->f_191 = iParam0;
}

bool func_941()
{
	return func_1618(4);
}

bool func_942(var uParam0, bool bParam1)
{
	return func_1619(4, uParam0, bParam1);
}

bool func_943()
{
	return func_1618(5);
}

int func_944(bool bParam0, bool bParam1)
{
	return func_1619(5, bParam0, bParam1);
}

bool func_945()
{
	return func_1618(1);
}

int func_946(bool bParam0, bool bParam1)
{
	return func_1619(1, bParam0, bParam1);
}

bool func_947()
{
	return func_1618(2);
}

int func_948(bool bParam0, bool bParam1)
{
	return func_1619(2, bParam0, bParam1);
}

bool func_949()
{
	return func_1618(3);
}

int func_950(bool bParam0, bool bParam1)
{
	return func_1619(3, bParam0, bParam1);
}

bool func_951()
{
	return func_1618(6);
}

int func_952(bool bParam0, bool bParam1)
{
	return func_1619(6, bParam0, bParam1);
}

bool func_953()
{
	return func_1618(0);
}

int func_954(bool bParam0, bool bParam1)
{
	return func_1619(0, bParam0, bParam1);
}

void func_955()
{
	Global_1896738->f_191.f_1 = 0;
}

int func_956()
{
	return Global_1896738->f_6;
}

void func_957(int iParam0)
{
	Global_1896738->f_6 = iParam0;
}

void func_958(var uParam0)
{
	uParam0->f_1 = 0f;
	uParam0->f_2 = 0f;
	*uParam0 = 0;
}

bool func_959(var uParam0)
{
	return func_1095(*uParam0, 1);
}

void func_960(var uParam0, bool bParam1)
{
	if (bParam1 || !func_959(uParam0))
	{
		func_1620(uParam0);
	}
}

float func_961(var uParam0)
{
	if (!func_959(uParam0))
	{
		return uParam0->f_1;
	}
	if (func_1621(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1622() - uParam0->f_1);
}

void func_962(int iParam0)
{
	Global_1896738->f_6.f_6 = iParam0;
}

void func_963(int iParam0)
{
	Global_1896738->f_6.f_1 = iParam0;
}

bool func_964()
{
	return (func_1623(0) && func_1623(5));
}

int func_965(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1317351007;
		case 1:
			return -500478573;
		case 2:
			return -806573802;
		case 3:
			return -1109949204;
		default:
			break;
	}
	return -1060513333;
}

struct<4> func_966(bool bParam0)
{
	if (Global_1572887->f_13 == 0)
	{
		iVar0 = func_540(bParam0);
		if (iVar0 == 2)
		{
			if (!_0xb881ca836cc4b6d4(Global_1293346))
			{
				*Global_1293346 = { func_583(1328661203, func_733(), -1591664384, bParam0) };
			}
			return *Global_1293346;
		}
		else if (iVar0 == 3)
		{
			if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_12)))
			{
				Global_1293346->f_12 = { func_583(1328661203, func_733(), -1591664384, 0) };
			}
			return Global_1293346->f_12;
		}
	}
	return func_583(1328661203, func_733(), -1591664384, bParam0);
}

int func_967(struct<4> Param0, int iParam4, int iParam5, bool bParam6)
{
	Var0.f_9 = -1591664384;
	if (func_1624(Param0, iParam4, &Var0, iParam5, bParam6))
	{
		return Var0.f_4;
	}
	return 0;
}

bool func_968(int iParam0)
{
	iVar0 = func_1050(iParam0);
	if ((iVar0 == 810656527 || iVar0 == 2088138839) || iVar0 == 129583122)
	{
		return true;
	}
	return false;
}

int func_969(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 35)
	{
		if (iParam0 == Global_1139381->f_11.f_1562[iVar0]->f_2)
		{
			return &(Global_1139381->f_11.f_1562[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

bool func_970()
{
	return _0x603ac35fd4602c76(Global_1139381->f_8);
}

int func_971(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam2 == 2)
	{
		bVar0 = func_1625() == true;
	}
	else if (iParam2 == 1)
	{
		bVar0 = true;
	}
	else
	{
		bVar0 = false;
	}
	if (iParam3 != -1)
	{
		bVar1 = true;
	}
	if (!func_1021(iParam0))
	{
		func_325(uParam1);
		return 0;
	}
	*uParam1 = &Global_1139381->f_11.f_1562[func_1626(iParam0, 1)];
	uParam1->f_2 = (Global_1139381->f_11.f_1562[func_1626(iParam0, 1)])->f_2;
	uParam1->f_1 = (Global_1139381->f_11.f_1562[func_1626(iParam0, 1)])->f_1;
	uParam1->f_8 = (Global_1139381->f_11.f_1562[func_1626(iParam0, 1)])->f_3;
	uParam1->f_16 = (Global_1139381->f_11.f_1562[func_1626(iParam0, 1)])->f_4;
	uParam1->f_32 = (Global_1139381->f_11.f_1562[func_1626(iParam0, 1)])->f_7;
	uParam1->f_33 = (Global_1139381->f_11.f_1562[func_1626(iParam0, 1)])->f_8;
	if (!func_586(uParam1->f_2, 0))
	{
		func_325(uParam1);
		return 0;
	}
	bVar2 = true;
	if (!func_1021(*uParam1))
	{
		func_325(uParam1);
		return 0;
	}
	if (!bVar0)
	{
		if (func_964())
		{
			uParam1->f_19 = func_1627(*uParam1);
			uParam1->f_20 = 1;
			uParam1->f_21 = 1;
			uParam1->f_9 = (Global_1139381->f_11.f_1562[func_1626(iParam0, 1)])->f_5;
			uParam1->f_10 = (Global_1139381->f_11.f_1562[func_1626(iParam0, 1)])->f_6;
			if (func_1628(uParam1->f_19))
			{
				uParam1->f_13 = Global_1139381->f_4796.f_34[uParam1->f_19]->f_1;
			}
			else
			{
				uParam1->f_13 = 0;
			}
		}
		else
		{
			uParam1->f_19 = func_379(*uParam1);
			iVar3 = func_965(uParam1->f_19);
			uParam1->f_3 = { func_583(uParam1->f_2, func_966(bVar2), iVar3, bVar2) };
			uParam1->f_21 = func_1629(uParam1);
			uParam1->f_13 = func_1630(uParam1);
			uParam1->f_15 = func_1631(uParam1);
			uParam1->f_20 = func_1632(uParam1);
			uParam1->f_22 = func_1633(uParam1);
			uParam1->f_14 = func_1634(uParam1);
			uParam1->f_23 = func_1635(uParam1);
			uParam1->f_24 = func_1636(uParam1);
			uParam1->f_25 = func_1637(uParam1);
			uParam1->f_26 = func_1638(uParam1);
			uParam1->f_27 = func_1639(uParam1);
			uParam1->f_29 = func_1640(uParam1);
			uParam1->f_30 = func_1641(uParam1);
			uParam1->f_31 = func_1642(uParam1);
			iVar4 = -915411861;
			if (uParam1->f_27)
			{
				iVar4 = uParam1->f_28;
			}
			if (!uParam1->f_20)
			{
				uParam1->f_17 = func_1643((Global_1139381->f_11.f_1562[func_1626(iParam0, 1)])->f_2, iVar4);
			}
			else
			{
				uParam1->f_17 = func_1644(uParam1->f_13, iVar4);
			}
			uParam1->f_18 = func_1643((Global_1139381->f_11.f_1562[func_1626(iParam0, 1)])->f_2, -570078785);
			if (bVar1)
			{
				uParam1->f_26 = 0;
				uParam1->f_27 = 0;
				if (uParam1->f_23)
				{
					uParam1->f_23 = iParam3 == uParam1->f_13 + 1;
				}
				if (uParam1->f_25)
				{
					uParam1->f_25 = iParam3 == uParam1->f_13 + 1;
				}
				if (uParam1->f_20)
				{
					uParam1->f_20 = uParam1->f_13 >= iParam3;
				}
				uParam1->f_13 = iParam3;
			}
			if (uParam1->f_20)
			{
				uParam1->f_9 = (Global_1139381->f_11.f_1562[func_1626(iParam0, 1)])->f_3;
				uParam1->f_10 = (Global_1139381->f_11.f_1562[func_1626(iParam0, 1)])->f_6;
			}
			else
			{
				func_972(uParam1);
			}
		}
	}
	else
	{
		iVar5 = network_get_player_from_gamer_handle(&(Global_1940311->f_1433.f_8));
		uParam1->f_9 = (Global_1139381->f_11.f_1562[func_1626(iParam0, 1)])->f_3;
		uParam1->f_10 = (Global_1139381->f_11.f_1562[func_1626(iParam0, 1)])->f_6;
		if (_network_is_player_index_valid(iVar5))
		{
			uParam1->f_19 = func_1645(*uParam1, iVar5);
			if (func_1628(uParam1->f_19))
			{
				vVar6 = { *(*Global_1145091)[iVar5]->f_10[uParam1->f_19] };
				uParam1->f_13 = vVar6.y;
				uParam1->f_21 = func_1646(&(vVar6.f_2), 1);
			}
		}
	}
	uParam1->f_11 = func_1647(uParam1);
	uParam1->f_12 = func_1648(*(Global_1139381->f_11.f_1562[func_1626(iParam0, 1)]), uParam1);
	return 1;
}

void func_972(var uParam0)
{
	uParam0->f_9 = -902468816;
	uParam0->f_10 = 291057091;
}

bool func_973(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _unlock_is_unlocked(-1815917332);
		case 1:
			return _unlock_is_unlocked(446771306);
		case 2:
			return _unlock_is_unlocked(214930631);
		case 3:
			return _unlock_is_unlocked(1057421621);
		default:
			break;
	}
	return false;
}

void func_974(var uParam0, var uParam1)
{
	_databinding_write_data_string(uParam0->f_2, uParam1->f_11);
	_databinding_write_data_string(uParam0->f_3, uParam1->f_12);
	_databinding_write_data_hash_string(uParam0->f_4, uParam1->f_9);
	_databinding_write_data_hash_string(uParam0->f_5, uParam1->f_10);
	_databinding_write_data_hash_string(uParam0->f_41, func_1649(uParam1->f_1, uParam1->f_13));
	_databinding_write_data_hash_string(uParam0->f_6, *uParam1);
	_databinding_write_data_bool(uParam0->f_7, func_1650(uParam1));
	_databinding_write_data_bool(uParam0->f_34, uParam1->f_22);
	_databinding_write_data_bool(uParam0->f_12, uParam1->f_20);
	_databinding_write_data_bool(uParam0->f_13, !uParam1->f_20);
	_databinding_write_data_bool(uParam0->f_35, func_1651(uParam1));
	_databinding_write_data_bool(uParam0->f_14, !uParam1->f_21);
	_databinding_write_data_bool(uParam0->f_15, uParam1->f_30);
	_databinding_write_data_bool(uParam0->f_16, uParam1->f_29);
	_databinding_write_data_bool(uParam0->f_17, uParam1->f_31);
	_databinding_write_data_string(uParam0->f_18, func_1652(uParam1));
	_databinding_write_data_bool(uParam0->f_19, uParam1->f_24);
	_databinding_write_data_bool(uParam0->f_20, uParam1->f_23);
	_databinding_write_data_bool(uParam0->f_21, uParam1->f_25);
	_databinding_write_data_bool(uParam0->f_22, (!uParam1->f_14 && uParam1->f_20));
	_databinding_write_data_bool(uParam0->f_23, !uParam1->f_14);
	_databinding_write_data_bool(uParam0->f_24, (!uParam1->f_14 && func_978(4)));
	_databinding_write_data_string(uParam0->f_25, func_1653(uParam1));
	_databinding_write_data_bool(uParam0->f_26, func_1654(uParam1));
	_databinding_write_data_bool(uParam0->f_27, func_1655(uParam1));
	_databinding_write_data_bool(uParam0->f_28, func_1656(uParam1));
	_databinding_write_data_bool(uParam0->f_29, (uParam1->f_31 && func_1656(uParam1)));
	_databinding_write_data_bool(uParam0->f_30, (uParam1->f_25 && func_1656(uParam1)));
	if (uParam1->f_26)
	{
		_databinding_write_data_string(uParam0->f_31, func_1657(0));
		_databinding_write_data_string(uParam0->f_32, func_1658(0));
	}
	else
	{
		_databinding_write_data_string(uParam0->f_31, func_1657(func_1659(uParam1->f_17)));
		_databinding_write_data_string(uParam0->f_32, func_1658(func_1660(uParam1->f_17)));
	}
	_databinding_write_data_int(uParam0->f_33, uParam1->f_18);
	if (!uParam1->f_21)
	{
		_databinding_write_data_string(uParam0->f_43, func_980(uParam1->f_16));
	}
	_databinding_write_data_int(uParam0->f_36, uParam1->f_13);
	_databinding_write_data_int(uParam0->f_38, uParam1->f_15);
	_databinding_write_data_int(uParam0->f_40, func_1661(uParam1->f_13));
	_databinding_write_data_bool(uParam0->f_10, uParam1->f_23);
	_databinding_write_data_bool(uParam0->f_11, !uParam1->f_21);
	_databinding_write_data_bool(uParam0->f_8, false);
	_databinding_write_data_bool(uParam0->f_9, false);
}

void func_975(var uParam0, int iParam1)
{
	func_611(uParam0, iParam1);
}

void func_976(var uParam0, int iParam1)
{
	func_628(uParam0, iParam1);
}

bool func_977()
{
	return func_1625() == 0;
}

bool func_978(int iParam0)
{
	iVar0 = func_1662();
	switch (iVar0)
	{
		case 0:
			return true;
		case 1:
			return iParam0 == 0;
		case 2:
			return iParam0 == 1;
		case 3:
			return iParam0 == 2;
		case 4:
			return iParam0 == 5;
		default:
			break;
	}
	return false;
}

int func_979(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 10;
		case 2:
			return 20;
		case 3:
			return 40;
		default:
			break;
	}
	return -1;
}

var func_980(int iParam0)
{
	if (iParam0 <= -1)
	{
		return "";
	}
	_int_to_string(iParam0, "%i", &Var0);
	return func_1663(Var0);
}

void func_981(int iParam0, var uParam1)
{
	if (!func_1021(*uParam1))
	{
		uParam1->f_11 = func_1664(iParam0);
		uParam1->f_12 = func_1665(iParam0);
	}
}

void func_982(var uParam0, int iParam1)
{
	if (uParam0->f_2 == iParam1)
	{
		return;
	}
	uParam0->f_2 = iParam1;
}

void func_983()
{
	_databinding_write_data_string(Global_1940311->f_1433.f_1507.f_115, "");
	_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_116, false);
}

void func_984()
{
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1507.f_111, 0);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1507.f_112, 0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_113, false);
}

void func_985()
{
	_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_118, false);
}

char* func_986(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return func_1666();
		case 1:
			return _create_var_string(2, "INVITES_HEADER");
		case 2:
			return _create_var_string(2, "LOG_HEADER");
		case 3:
			return _create_var_string(2, "LOG_HEADER");
		case 4:
			return _create_var_string(2, "DAILY_HEADER");
		case 5:
			return _create_var_string(2, "DAILY_HEADER");
		case 6:
			return _create_var_string(2, "PLAYERS_HEADER");
		case 22:
			return _create_var_string(2, "POSSE_INVITE_HEADER");
		case 7:
			return _create_var_string(2, "PLAYERS_OPTIONS_HEADER");
		case 8:
			return _create_var_string(2, "PLAYER_REPORT_HEADER");
		case 9:
			return _create_var_string(2, "PLAYER_REPORT_HEADER");
		case 10:
			return _create_var_string(2, "PLAYER_REPORT_HEADER");
		case 11:
			return _create_var_string(2, "MATCHMAKING_HEADER");
		case 12:
			return _create_var_string(2, "POST_OFFICE_HEADER");
		case 13:
			return _create_var_string(2, "POSSE_HEADER");
		case 14:
			return _create_var_string(2, "POSSE_HEADER");
		case 15:
			return _create_var_string(2, "POSSE_HEADER");
		case 16:
			return _create_var_string(2, "POSSE_HEADER");
		case 17:
			return _create_var_string(2, "POSSE_HEADER");
		case 18:
			return _create_var_string(2, "POSSE_HEADER");
		case 19:
			return _create_var_string(2, "POSSE_HEADER");
		case 20:
			return _create_var_string(2, "POSSE_HEADER");
		case 21:
			return _create_var_string(2, "POSSE_VERSUS_INFIGHTING_HEADER");
		case 23:
			return _create_var_string(2, "POSSE_INVITE_HEADER");
		case 24:
			return _create_var_string(2, "STABLES_HEADER");
		case 25:
			return _create_var_string(2, "STABLES_HEADER");
		case 26:
			return _create_var_string(2, "OWNED_HORSES_HEADER");
		case 27:
			return _create_var_string(2, "HORSE_SPECIALTY_HEADER");
		case 28:
			return _create_var_string(2, "HORSE_SPECIALTY_FREEROAM_SELECTION_HEADER");
		case 29:
			return _create_var_string(2, "HORSE_SPECIALTY_RACE_SELECTION_HEADER");
		case 30:
			return _create_var_string(2, "HORSE_SPECIALTY_COOP_SELECTION_HEADER");
		case 31:
			return _create_var_string(2, "HORSE_SPECIALTY_COMPETITIVE_SELECTION_HEADER");
		case 32:
			return _create_var_string(2, "STABLES_HEADER");
		case 33:
			return _create_var_string(2, "OWNED_VEHICLES_HEADER");
		case 35:
			return _create_var_string(2, "VEHICLE_SPECIALTY_FREEROAM_SELECTION_HEADER");
		case 36:
			return _create_var_string(2, "VEHICLE_SPECIALTY_RACE_SELECTION_HEADER");
		case 37:
			return _create_var_string(2, "VEHICLE_SPECIALTY_COOP_SELECTION_HEADER");
		case 38:
			return _create_var_string(2, "VEHICLE_SPECIALTY_COMPETITIVE_SELECTION_HEADER");
		case 39:
			return _create_var_string(2, "CAMP_HEADER");
		case 42:
			return _create_var_string(2, "CAMP_LOCATION_HEADER");
		case 40:
			return _create_var_string(2, "CAMP_LOCATION_HEADER");
		case 41:
			return _create_var_string(2, "CAMP_HEADER");
		case 43:
			return _create_var_string(2, "ONLINE_OPTIONS_HEADER");
		case 44:
			return _create_var_string(2, "BOUNTY_HEADER_MP_OPEN_BOUNTIES");
		case 45:
			return _create_var_string(2, "BOUNTY_REPLAY_HEADER");
		case 46:
			return _create_var_string(2, "EMOTES_HEADER");
		case 47:
			return _create_var_string(2, "EMOTES_HEADER");
		case 48:
			return _create_var_string(2, "PLAYER_WALK_STYLES_HEADER");
		case 49:
		case 50:
		case 51:
		case 52:
			return _create_var_string(2, "MINIGAME_POKER_HEADER");
		case 53:
			return _create_var_string(2, "PLAYERS_HEADER");
		case 54:
			return _create_var_string(2, "MOONSHINE_LOCATIONS_HEADER");
		case 55:
		case 56:
			return _create_var_string(2, "CAMP_AND_PROPERTIES_HEADER");
		case 57:
			return _create_var_string(2, "PROPERTY_INVITE_HEADER");
		default:
			break;
	}
	return "NULL";
}

int func_987()
{
	if (func_1105(64))
	{
		return 0;
	}
	return 1;
}

bool func_988()
{
	return !func_600(2);
}

bool func_989()
{
	if (!_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())))
	{
		return false;
	}
	if (!_0x424b17a7dc5c90bc(player_id()))
	{
		return false;
	}
	iVar51 = _0xd1bf325c8252a982(_0x901e0dc25080c8b9(player_id()), &Var0);
	iVar50 = 0;
	while (iVar50 <= (iVar51 - 1))
	{
		iVar52 = network_get_player_from_gamer_handle(Var0[iVar50]);
		if (!network_is_player_active(iVar52) || is_player_dead(iVar52))
		{
		}
		else if (func_703(1048576, iVar52))
		{
			return true;
		}
		iVar50++;
	}
	return false;
}

bool func_990()
{
	return (func_1103() || ((!func_830() && !func_831()) && !func_1112(func_1111())));
}

bool func_991()
{
	return func_455() == 0;
}

int func_992(var uParam0)
{
	if (uParam0->f_3)
	{
		_0xc08aff658b2e51da(&iVar0);
		if (iVar0 != uParam0->f_2)
		{
			return 0;
		}
	}
	else
	{
		if (!_0xd6f6acf4392187fb(uParam0->f_1))
		{
			return 0;
		}
		if (!_0x0f99f6436528a089(uParam0->f_1))
		{
			return 0;
		}
		if (uParam0->f_1 != Global_1296859->f_15)
		{
			return 0;
		}
	}
	return 1;
}

void func_993(int iParam0)
{
	Global_1940311->f_1433.f_157.f_206.f_3 = iParam0;
}

bool func_994(var uParam0)
{
	if (uParam0->f_3)
	{
		return true;
	}
	else
	{
		return _0x9be7dcb22d32ccbe(uParam0->f_1, player_id());
	}
	return false;
}

int func_995(char* sParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5, int iParam6, int iParam7)
{
	iVar0 = Global_1940311->f_1433.f_9184.f_4;
	if (iVar0 < 0)
	{
		return -1;
	}
	if (iVar0 >= 10)
	{
		return -1;
	}
	Global_1940311->f_1433.f_9184.f_5[iVar0] = iParam7;
	Global_1940311->f_1433.f_9184.f_5[iVar0]->f_1 = iParam1;
	Global_1940311->f_1433.f_9184.f_5[iVar0]->f_2 = iParam2;
	Global_1940311->f_1433.f_9184.f_5[iVar0]->f_3 = { func_322(sParam0) };
	Global_1940311->f_1433.f_9184.f_5[iVar0]->f_19 = iParam3;
	Global_1940311->f_1433.f_9184.f_5[iVar0]->f_20 = iParam4;
	Global_1940311->f_1433.f_9184.f_5[iVar0]->f_21 = iParam5;
	Global_1940311->f_1433.f_9184.f_5[iVar0]->f_22 = iParam6;
	Global_1940311->f_1433.f_9184.f_4++;
	_databinding_write_data_bool(Global_1940311->f_1433.f_157.f_614.f_3, Global_1940311->f_1433.f_9184.f_4 > 1);
	if (iVar0 == 0)
	{
		Global_1940311->f_1433.f_9184.f_239 = 1;
		Global_1940311->f_1433.f_9184 = 0;
		Global_1940311->f_1433.f_9184.f_1 = iParam1;
		Global_1940311->f_1433.f_9184.f_2 = 0;
		Global_1940311->f_1433.f_9184.f_3 = iParam1;
	}
	return iVar0;
}

void func_996(int iParam0)
{
	Global_1940311->f_1433.f_157.f_206.f_2 = iParam0;
}

void func_997()
{
	func_645(0);
	func_1480(0);
	func_643();
	if (func_959(&(Global_1896738->f_13)))
	{
		func_958(&(Global_1896738->f_13));
	}
}

void func_998()
{
	Global_1896738->f_13.f_6 = 0;
	Global_1896738->f_13.f_9 = 0;
	if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_4))
	{
		_databinding_write_data_string(Global_1896738->f_13.f_50.f_4, _create_var_string(2, "NM_GC_TEXT_CAMP_NONE"));
	}
}

int func_999(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return -1896177107;
		case 7:
			return 2042309940;
		default:
			break;
	}
	return -1896177107;
}

void func_1000(bool bParam0)
{
	if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_41.f_24) && _databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_41.f_23))
	{
		if (bParam0)
		{
			_databinding_write_data_int(Global_1896738->f_13.f_50.f_41.f_24, 1);
			_databinding_write_data_hash_string(Global_1896738->f_13.f_50.f_41.f_23, 1513236523);
		}
		else
		{
			_databinding_write_data_int(Global_1896738->f_13.f_50.f_41.f_24, 0);
			_databinding_write_data_hash_string(Global_1896738->f_13.f_50.f_41.f_23, 126620015);
		}
	}
}

void func_1001(bool bParam0)
{
	if (_databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_99.f_24) && _databinding_is_data_id_valid(Global_1896738->f_13.f_50.f_99.f_23))
	{
		if (bParam0)
		{
			_databinding_write_data_int(Global_1896738->f_13.f_50.f_99.f_24, 0);
			_databinding_write_data_hash_string(Global_1896738->f_13.f_50.f_99.f_23, -299269340);
		}
		else
		{
			_databinding_write_data_int(Global_1896738->f_13.f_50.f_99.f_24, 1);
			_databinding_write_data_hash_string(Global_1896738->f_13.f_50.f_99.f_23, 1083456181);
		}
	}
}

bool func_1002(int iParam0, int iParam1)
{
	iVar0 = func_1667(iParam0);
	if (iVar0 == -1)
	{
		return false;
	}
	if (iVar0 < 0 || iVar0 >= func_810())
	{
		return false;
	}
	if (Global_1940311->f_1433.f_1 != iParam1)
	{
		return false;
	}
	func_927(iVar0, 1);
	return true;
}

void func_1003(int iParam0)
{
	Global_1896738->f_209 = iParam0;
}

bool func_1004(char* sParam0)
{
	if (!_databinding_is_data_id_valid(Global_1940311->f_1433.f_157.f_264.f_91))
	{
		return false;
	}
	_databinding_write_data_string(Global_1940311->f_1433.f_157.f_264.f_91, sParam0);
	return true;
}

bool func_1005()
{
	return Global_1572887->f_6;
}

char* func_1006(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "PLAYERS_CATEGORY_NAME_NEARBY";
		case 1:
			return "PLAYERS_CATEGORY_NAME_FRIENDS";
		case 2:
			return "PLAYERS_CATEGORY_NAME_CREW";
		case 3:
			return "PLAYERS_CATEGORY_NAME_RECENT";
		default:
			break;
	}
	return "FILTER_ALL";
}

void func_1007()
{
	if (_databinding_is_data_id_valid(Global_1896738->f_197.f_1))
	{
		_databinding_write_data_bool(Global_1896738->f_197.f_1, false);
	}
	if (_databinding_is_data_id_valid(Global_1896738->f_197))
	{
		_databinding_write_data_bool(Global_1896738->f_197, false);
	}
	if (_databinding_is_data_id_valid(Global_1896738->f_197.f_3))
	{
		_databinding_write_data_int(Global_1896738->f_197.f_3, 1433015236);
	}
	if (_databinding_is_data_id_valid(Global_1896738->f_197.f_4))
	{
		_databinding_write_data_int(Global_1896738->f_197.f_4, -1996395310);
	}
	if (_databinding_is_data_id_valid(Global_1896738->f_197.f_2))
	{
		_databinding_write_data_string(Global_1896738->f_197.f_2, "");
	}
}

int func_1008(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -682748;
		case 1:
			return 1357161730;
		case 2:
			return 1581179681;
		case 3:
			return -215258135;
		case 4:
			return -987049424;
		case 5:
			return 892234183;
		case 6:
			return -1554232707;
		case 7:
			return 1538293636;
		case 8:
			return -1992167326;
		case 9:
			return -1884014371;
		case 10:
			return -1871413878;
		case 11:
			return 1483778247;
		case 12:
			return -724534761;
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

char* func_1009(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAMP_LOCATION_CATEGORY_ALL";
		case 1:
			return "CAMP_LOCATION_CATEGORY_NEARBY";
		case 2:
			return "TITHE_AMBARINO";
		case 3:
			return "TITHE_LEMOYNE";
		case 4:
			return "TITHE_WEST_ELIZABETH";
		case 5:
			return "TITHE_NEW_HANOVER";
		case 6:
			return "TITHE_NEW_AUSTIN";
		default:
			break;
	}
	return "";
}

void func_1010()
{
	if (_databinding_is_data_id_valid(Global_1896738->f_393.f_1))
	{
		_0x3bf0767cf33fcc88(Global_1896738->f_393.f_1);
	}
	func_1668();
}

void func_1011()
{
	if (_databinding_is_data_id_valid(Global_1896738->f_197.f_1))
	{
		_databinding_write_data_bool(Global_1896738->f_197.f_1, true);
	}
	if (_databinding_is_data_id_valid(Global_1896738->f_197))
	{
		_databinding_write_data_bool(Global_1896738->f_197, false);
	}
	if (_databinding_is_data_id_valid(Global_1896738->f_197.f_3))
	{
		_databinding_write_data_int(Global_1896738->f_197.f_3, 1433015236);
	}
	if (_databinding_is_data_id_valid(Global_1896738->f_197.f_4))
	{
		_databinding_write_data_int(Global_1896738->f_197.f_4, -1712603330);
	}
	if (_databinding_is_data_id_valid(Global_1896738->f_197.f_2))
	{
		_databinding_write_data_string(Global_1896738->f_197.f_2, _create_var_string(2, "NM_MW_POSSE_VERSUS_CHANGE_TEAM"));
	}
}

int func_1012(int iParam0, int iParam1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	uVar0 = func_1669(iParam0, iParam1);
	return uVar0;
}

void func_1013(int iParam0)
{
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_8111.f_2, -712210889);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_8111.f_3, func_1670(iParam0));
}

char* func_1014(bool bParam0, char* sParam1, char* sParam2)
{
	if (bParam0)
	{
		return sParam1;
	}
	return sParam2;
}

int func_1015(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 40;
		case 1:
			return 5;
		case 2:
			return 80;
		case 3:
			return 121;
		case 4:
			return 81;
		default:
			break;
	}
	return -1;
}

char* func_1016(int iParam0)
{
	if (!func_1671(iParam0))
	{
		return "";
	}
	switch (iParam0)
	{
		case 0:
			return "REG_IF_BAY_CDW";
		case 1:
			return "REG_IF_SCM_MCE";
		case 2:
			return "REG_IF_SCM_MKW";
		case 3:
			return "REG_IF_BAY_LAG";
		case 4:
			return "REG_IF_BAY_LAK";
		case 5:
			return "REG_IF_BAY_STD";
		case 6:
			return "REG_IF_BAY_ORP";
		case 7:
			return "REG_IF_BAY_SKS";
		case 8:
			return "REG_IF_BAY_SDP";
		case 9:
			return "REG_IF_BAY_SDB";
		case 10:
			return "REG_IF_BAY_SWS";
		case 11:
			return "REG_IF_BGV_AST";
		case 12:
			return "REG_IF_BGV_BRD";
		case 13:
			return "REG_IF_BGV_BBF";
		case 14:
			return "REG_IF_BGV_DAK";
		case 15:
			return "REG_IF_BGV_FRT";
		case 16:
			return "REG_IF_BGV_HND";
		case 17:
			return "REG_IF_BGV_LMS";
		case 18:
			return "REG_IF_BGV_MHS";
		case 19:
			return "REG_IF_BGV_MNR";
		case 20:
			return "REG_IF_BGV_OWD";
		case 21:
			return "REG_IF_BGV_PNS";
		case 22:
			return "REG_IF_BGV_PRN";
		case 23:
			return "REG_IF_BGV_RIS";
		case 24:
			return "REG_IF_BGV_SHK";
		case 25:
			return "REG_IF_BGV_SHR";
		case 26:
			return "REG_IF_BGV_STB";
		case 27:
			return "REG_IF_BGV_VV";
		case 28:
			return "REG_IF_GRZ_WS";
		case 30:
			return "REG_IF_BGV_WSC";
		case 29:
			return "REG_IF_BGV_BOJ";
		case 31:
			return "REG_IF_BLU_CBM";
		case 32:
			return "REG_IF_BLU_CPH";
		case 33:
			return "REG_IF_BLU_SIS";
		case 35:
			return "REG_IF_CML_BHB";
		case 36:
			return "REG_IF_CML_DL";
		case 37:
			return "REG_IF_CML_OFW";
		case 38:
			return "REG_IF_CML_SPC";
		case 39:
			return "REG_IF_GRT_BEC";
		case 40:
			return "REG_IF_GRT_BW";
		case 41:
			return "REG_IF_GRT_QC";
		case 42:
			return "REG_IF_GRZ_ADR";
		case 43:
			return "REG_IF_HRT_DRS";
		case 53:
			return "REG_IF_GRZ_CMR";
		case 54:
			return "REG_IF_CML_CM";
		case 44:
			return "REG_IF_GRZ_CHZ";
		case 55:
			return "REG_IF_GRZ_COH";
		case 45:
			return "REG_IF_GRZ_CLT";
		case 46:
			return "REG_IF_GRZ_FRZ";
		case 47:
			return "REG_IF_GRZ_MSC";
		case 48:
			return "REG_IF_GRZ_MM";
		case 50:
			return "REG_IF_BGV_SCS";
		case 51:
			return "REG_IF_GRZ_LC";
		case 58:
			return "REG_IF_GRZ_TL";
		case 59:
			return "REG_IF_CML_VET";
		case 60:
			return "REG_IF_GRZ_WAP";
		case 52:
			return "REG_IF_BGV_WMT";
		case 62:
			return "REG_IF_GUA_AGU";
		case 63:
			return "REG_IF_GUA_CMP";
		case 64:
			return "REG_IF_GUA_CNT";
		case 65:
			return "REG_IF_GUA_LAC";
		case 66:
			return "REG_IF_GUA_MAN";
		case 67:
			return "REG_IF_HRT_ABM";
		case 69:
			return "REG_IF_HRT_CMD";
		case 70:
			return "REG_IF_HRT_CKS";
		case 71:
			return "REG_IF_HRT_CRF";
		case 72:
			return "REG_IF_HRT_CBF";
		case 73:
			return "REG_IF_HRT_DNR";
		case 74:
			return "REG_IF_HRT_EMR";
		case 75:
			return "REG_IF_HRT_PIG";
		case 76:
			return "REG_IF_HRT_HSO";
		case 77:
			return "REG_IF_HRT_LRN";
		case 78:
			return "REG_IF_GRZ_LC";
		case 79:
			return "REG_IF_HRT_LCK";
		case 80:
			return "REG_IF_HRT_SSS";
		case 81:
			return "REG_IF_HRT_VAL";
		case 82:
			return "REG_IF_HRT_APF";
		case 83:
			return "REG_IF_ROA_ANN";
		case 84:
			return "REG_IF_ROA_BEV";
		case 68:
			return "REG_IF_ROA_SBC";
		case 85:
			return "REG_IF_ROA_BBR";
		case 86:
			return "REG_IF_ROA_BWD";
		case 87:
			return "REG_IF_ROA_BTC";
		case 88:
			return "REG_IF_CML_DVH";
		case 89:
			return "REG_IF_ROA_HFS";
		case 90:
			return "REG_IF_ROA_ISS";
		case 91:
			return "REG_IF_ROA_MCH";
		case 92:
			return "REG_IF_ROA_MSF";
		case 93:
			return "REG_IF_ROA_ROV";
		case 94:
			return "REG_IF_CML_RS";
		case 95:
			return "REG_IF_ROA_TRP";
		case 97:
			return "REG_IF_ROA_VHM";
		case 98:
			return "REG_IF_ROA_VHP";
		case 96:
			return "REG_IF_ROA_ROJ";
		case 99:
			return "REG_IF_SCM_BWM";
		case 100:
			return "REG_IF_SCM_BLG";
		case 101:
			return "REG_IF_SCM_CGH";
		case 102:
			return "REG_IF_SCM_CFJ";
		case 103:
			return "REG_IF_SCM_CMC";
		case 104:
			return "REG_IF_SCM_CMP";
		case 105:
			return "REG_IF_SCM_CSS";
		case 106:
			return "REG_IF_SCM_DRF";
		case 107:
			return "REG_IF_INV";
		case 108:
			return "REG_IF_SCM_LS";
		case 109:
			return "REG_IF_SCM_LTS";
		case 110:
			return "REG_IF_SCM_RP";
		case 111:
			return "REG_IF_SCM_RHO";
		case 112:
			return "REG_IF_SCM_SPS";
		case 113:
			return "REG_IF_TAL_AUR";
		case 114:
			return "REG_IF_CML_DS";
		case 115:
			return "REG_IF_TAL_COC";
		case 116:
			return "REG_IF_TAL_MAN";
		case 117:
			return "REG_IF_TAL_PUR";
		case 118:
			return "REG_IF_TAL_TNR";
		case 119:
			return "REG_IF_TAL_TRP";
		case 121:
			return "REG_IF_GAP_TUM";
		case 120:
			return "REG_IF_GAP_GBR";
		case 122:
			return "REG_IF_GAP_RFK";
		case 34:
		case 61:
		case 123:
		case 124:
		case 125:
		case 126:
		case 127:
		case 128:
		case 129:
		case 130:
		case 131:
		case 132:
		case 133:
		case 134:
		case 135:
		case 136:
		case 137:
		case 138:
		case 139:
			return "REG_IF_INV";
		default:
			break;
	}
	return "REG_IF_INV";
}

char* func_1017(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "CAMP_LOCATION_CATEGORY_ALL";
		case 1:
			return "MOONSHINE_LOC_FILTER_CLOSEST";
		case 2:
			return "MOONSHINE_LOC_FILTER_DISTANCE";
		default:
			break;
	}
	return "";
}

bool func_1018()
{
	return func_1307() != -1;
}

int func_1019(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		func_1672();
	}
	if (!func_1673(bParam1, bParam1, !bParam1))
	{
		return 0;
	}
	func_1674(iParam0);
	Global_1896738->f_386 = 1;
	Global_1896738->f_387 = bParam1;
	return 1;
}

bool func_1020(int iParam0)
{
	return iParam0 != 0;
}

bool func_1021(int iParam0)
{
	iVar0 = func_1626(iParam0, 1);
	if (iVar0 < 1 || iVar0 >= 35)
	{
		return false;
	}
	return true;
}

int func_1022(int iParam0)
{
	if (!func_1021(iParam0))
	{
		return 0;
	}
	return (Global_1139381->f_11.f_1562[func_1626(iParam0, 1)])->f_2;
}

bool func_1023(int iParam0, int iParam1, bool bParam2)
{
	if (!func_968(iParam0))
	{
		return false;
	}
	Var0 = { func_966(bParam2) };
	if (func_1104(iParam0, Var0, iParam1, bParam2, 0, 0) >= 1)
	{
		return true;
	}
	return false;
}

bool func_1024(int iParam0)
{
	if (!func_1628(iParam0))
	{
		return false;
	}
	return iParam0 == 0;
}

bool func_1025(int iParam0, bool bParam1)
{
	iVar0 = func_965(iParam0);
	Var1 = { func_966(bParam1) };
	iVar5 = func_1156(&Var1, iVar0, bParam1);
	bVar6 = iVar5 == false;
	return bVar6;
}

int func_1026(int iParam0)
{
	if (!func_1021(iParam0))
	{
		return 0;
	}
	return (Global_1139381->f_11.f_1562[func_1626(iParam0, 1)])->f_1;
}

void func_1027(int iParam0, int iParam1)
{
	if (!func_1675(iParam0))
	{
		func_1676(iParam1);
		return;
	}
	if (iParam0 == 304794100)
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_4189.f_13, false);
	}
	else
	{
		_databinding_write_data_bool(Global_1940311->f_1433.f_4189.f_13, true);
		iVar0 = 0;
		while (iVar0 < 5)
		{
			iVar1 = func_1677(iVar0, 1);
			_databinding_write_data_bool(Global_1940311->f_1433.f_4189.f_15[iVar0]->f_1, iParam0 == iVar1);
			iVar0++;
		}
	}
	_databinding_write_data_string(Global_1940311->f_1433.f_4189.f_3, func_1678(iParam0));
	func_1679(iParam0);
	func_1676(iParam1);
}

void func_1028(int iParam0)
{
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	Var34.f_7 = 1;
	Var34.f_13 = -1;
	Var34.f_15 = -1;
	Var34.f_16 = -1;
	Var34.f_17 = -1;
	Var34.f_18 = -1;
	Var34.f_19 = -1;
	Var34.f_32 = -1;
	iVar68 = 0;
	while (iVar68 < 3)
	{
		Var0 = { Var34 };
		func_324(iParam0, &Var0, 2, iVar68);
		func_1680(Global_1940311->f_1433.f_4189.f_1797[iVar68], Var0);
		if (func_1681(iVar68))
		{
			func_1682(&(Global_1940311->f_1433.f_4189.f_2034), Var0);
		}
		iVar68++;
	}
}

int func_1029(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 680390016;
		case 1:
			return -2070886255;
		case 2:
			return 1821948827;
		case 3:
			return -1823593561;
		case 4:
			return -1930045261;
		default:
			break;
	}
	return -1588462292;
}

void func_1030(int iParam0, int iParam1, int iParam2, int iParam3)
{
	func_1683();
	Global_1298378->f_1.f_2 = iParam0;
	Global_1298378->f_1.f_3 = iParam1;
	Global_1298378->f_1.f_4 = iParam2;
	Global_1298378->f_1.f_1 = iParam3;
}

int func_1031()
{
	return Global_1130634->f_235;
}

int func_1032(int iParam0)
{
	return Global_1130634[iParam0];
}

Vector3 func_1033(int iParam0)
{
	return (*Global_1116202)[iParam0]->f_7.f_1;
}

float func_1034(vector3 vParam0, vector3 vParam3)
{
	vParam0.f_2 = 0f;
	vParam3.f_2 = 0f;
	return vdist(vParam0, vParam3);
}

bool func_1035()
{
	if (Global_1940311->f_36 == 3)
	{
		return true;
	}
	return false;
}

bool func_1036(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_586(iParam0, 0))
	{
		return false;
	}
	if (iParam1 < 1)
	{
		return false;
	}
	iVar0 = func_1684(iParam0, -455129387);
	if (iVar0 != 0)
	{
		return func_1685(iParam0, iParam1, iParam2, bParam3, bParam4);
	}
	Var1 = { func_1686(iParam0, bParam4, 0) };
	Var6 = { func_583(iParam0, Var1, Var1.f_4, bParam4) };
	return func_1687(iParam0, &Var6, &Var1, iParam1, iParam2, bParam3, bParam4);
}

bool func_1037(int iParam0, bool bParam1)
{
	if (!func_586(iParam0, 0))
	{
		return false;
	}
	if (Global_1940311->f_7)
	{
		return false;
	}
	if (((iParam0 != 1259508039 && iParam0 != -1838434463) && iParam0 != 2019377485) && bParam1)
	{
		iVar0 = func_1688(iParam0);
		if (func_1040(iParam0, 1147021565))
		{
			iVar0 |= 64;
		}
		if (!func_1689(1, iVar0))
		{
			return false;
		}
	}
	if (iParam0 == -1448210800 || iParam0 == -2035110427)
	{
		if (func_1690())
		{
			return false;
		}
	}
	if (!func_1275(iParam0, 1))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

bool func_1038(int iParam0)
{
	if (func_1048(iParam0))
	{
		return false;
	}
	if (!_0x3d10d7179d7034af(func_540(0), iParam0, func_1691(0)))
	{
		return false;
	}
	switch (iParam0)
	{
		case -1838434463:
		case 2019377485:
			func_1692(1, 1);
			_0x565eaa726b2ce3b7(0);
			return true;
		case 1807503187:
			if (func_1693() != -1)
			{
				func_626(func_1694(), 10000, 0, 0, 0, 1);
				func_1695(-1);
			}
			break;
	}
	return true;
}

bool func_1039(int iParam0)
{
	if (iParam0 == 17745825)
	{
		StringCopy(&(Var0.f_10), "legendary_animal_map", 32);
		Var0.f_14 = 512;
		func_1046(Var0, 0);
		return true;
	}
	return false;
}

bool func_1040(int iParam0, int iParam1)
{
	if (!func_586(iParam0, 0))
	{
		return func_1697(func_1696(iParam0), iParam1);
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

void func_1041(int iParam0, var uParam1, var uParam2, var uParam3, bool bParam4, int iParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, bool bParam28, int iParam29)
{
}

void func_1042(int iParam0, var uParam1, var uParam2, bool bParam3, int iParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, bool bParam27, int iParam28)
{
}

void func_1043(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16)
{
}

bool func_1044(int iParam0)
{
	if (func_619() == 0 && func_1699(func_1698(iParam0), 1, 0) != 0)
	{
		func_626("NET_ALOOT_HELP_OPEN_FAIL", 10000, 0, 0, 0, 1);
		return false;
	}
	return true;
}

bool func_1045(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (func_1700(iParam0, bParam1, 0, 0, -1082130432))
	{
		Global_1913503 = get_game_timer() + 3000;
		return true;
	}
	switch (func_1701(iParam0, -949239683))
	{
		case 881567935:
			if (!bParam1)
			{
				_task_item_interaction(player_ped_id(), iParam0, 1245009814, 1, 0, -1082130432);
				return true;
			}
			break;
		case 845883585:
			if (!bParam1)
			{
				if (!func_1702())
				{
					if (func_1703(&Global_34))
					{
						_task_item_interaction(player_ped_id(), iParam0, 616992297, 1, 0, -1082130432);
					}
					else
					{
						_task_item_interaction(player_ped_id(), iParam0, -903856906, 1, 0, -1082130432);
					}
					return true;
				}
				else
				{
					func_626("SI_ITEM_USE_POMADE_IS_ALREADY_APPLIED", 10000, 0, 0, 0, 1);
				}
			}
			break;
		case -1239610997:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), iParam0, 280850861, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, 1087288635, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1913503 = get_game_timer() + 3000;
			return true;
		case 632545869:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), iParam0, -268993254, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, -1401979141, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1913503 = get_game_timer() + 3000;
			return true;
		case -793205628:
			if (!bParam2)
			{
				_task_item_interaction(player_ped_id(), iParam0, 1834614641, 1, 0, -1082130432);
			}
			else
			{
				_task_item_interaction(player_ped_id(), iParam0, 136592566, 1, 0, 0f);
				if (_0xa24c1d341c6e0d53(1, 0, 0))
				{
					animpostfx_play("CamTransition01");
				}
			}
			Global_1913503 = get_game_timer() + 3000;
			return true;
		case 1451036371:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_1704(iParam0);
				}
				else
				{
					func_1705(iParam0);
				}
				return true;
			}
			break;
		case -273840653:
			if (!bParam1)
			{
				func_1706(iParam0, 1);
				return true;
			}
			break;
		case 999632878:
			if (!bParam1)
			{
				func_1707(iParam0, 1);
				return true;
			}
			break;
		case 1130235258:
			if (!bParam1)
			{
				func_1708(iParam0);
				return true;
			}
			break;
		case -1915958659:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_1704(iParam0);
				}
				else
				{
					func_1709(iParam0);
				}
				return true;
			}
			break;
		case 1859991422:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_1704(iParam0);
				}
				else
				{
					func_1710(iParam0);
				}
				return true;
			}
			break;
		case 1891031775:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_1704(iParam0);
				}
				else
				{
					func_1711(iParam0);
				}
				return true;
			}
			break;
		case -809056541:
			if (!bParam1)
			{
				if (is_ped_in_combat(Global_34, 0) || _0x5407b7288d0478b7(Global_34, 0) > 0)
				{
					func_1704(iParam0);
				}
				else
				{
					func_1712(iParam0);
				}
				return true;
			}
			break;
		case -1337515701:
			if (!bParam1)
			{
				_task_item_interaction(player_ped_id(), iParam0, -1893721798, 1, 0, -1082130432);
				return true;
			}
			break;
		case -262371497:
			if (!bParam1)
			{
				func_1713(iParam0);
				return true;
			}
			break;
		case 1443104131:
			if (!bParam1)
			{
				func_1714(iParam0);
				return true;
			}
			break;
		case -1919515848:
			if (!bParam1)
			{
				func_1715(iParam0);
				return true;
			}
			break;
		case 89124942:
			if (!bParam1)
			{
				func_1704(iParam0);
				return true;
			}
			break;
		case 238865292:
			if (!bParam1)
			{
				func_1716(iParam0, bParam3);
				return true;
			}
			break;
		case 1177617310:
			if (!bParam1)
			{
				func_1717(iParam0, bParam3);
				return true;
			}
			break;
	}
	return false;
}

void func_1046(struct<16> Param0, int iParam16)
{
	if (is_string_null_or_empty(&(Param0.f_10)))
	{
		return;
	}
	if (Global_1939493->f_161 >= 10)
	{
		return;
	}
	if (!func_1718(iParam16, 2))
	{
		if (_get_number_of_references_of_script_with_name_hash(get_hash_key(&(Param0.f_10))) > 0 || func_1719(&(Param0.f_10)))
		{
			return;
		}
	}
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (is_string_null_or_empty(&((*Global_1939493)[iVar0]->f_10)))
		{
			*(*Global_1939493)[iVar0] = { Param0 };
			Global_1939493->f_161++;
			func_1720(iParam16);
			return;
		}
		iVar0++;
	}
}

bool func_1047()
{
	return Global_1893587 & 2 != 0;
}

bool func_1048(int iParam0)
{
	if (!func_586(iParam0, 0))
	{
		return false;
	}
	if (func_1050(iParam0) == -1650247667)
	{
		return true;
	}
	return false;
}

int func_1049(int iParam0)
{
	return func_1721(iParam0);
}

int func_1050(int iParam0)
{
	if (!func_586(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &vVar0))
	{
		return 0;
	}
	return vVar0.z;
}

bool func_1051(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (func_1050(iParam0) == -1037537535)
	{
		if (func_1052(iParam0) == -999503751)
		{
		}
	}
	return true;
}

int func_1052(int iParam0)
{
	if (!func_586(iParam0, 0))
	{
		return 0;
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_1;
}

int func_1053()
{
	iVar0 = player_id();
	iVar1 = _0xf49f14462f0ae27c(iVar0);
	iVar2 = get_player_ped(iVar0);
	if (!does_entity_exist(iVar1))
	{
		return 0;
	}
	if (is_entity_dead(iVar1) || is_ped_injured(iVar1))
	{
		return 0;
	}
	if (is_ped_swimming(iVar2) || is_ped_swimming(iVar1))
	{
		return 0;
	}
	if (is_ped_on_mount(iVar2))
	{
		if (_get_rider_of_mount(iVar1, false) != iVar2)
		{
			return 0;
		}
	}
	vVar3 = { get_entity_coords(iVar2, false, false) };
	vVar6 = { get_entity_coords(iVar1, false, false) };
	if (get_distance_between_coords(vVar3, vVar6, true) < 2f && _0xd543d3a8fde4f185(iVar2, iVar1))
	{
		return 1;
	}
	return 0;
}

bool func_1054(int iParam0)
{
	iVar0 = get_player_ped(iParam0);
	iVar1 = _0xf49f14462f0ae27c(iParam0);
	if (is_ped_on_mount(iVar0))
	{
		if (_get_rider_of_mount(iVar1, false) == iVar0)
		{
			return true;
		}
	}
	return false;
}

void func_1055(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (bParam4)
	{
		func_1094(16384);
	}
	Var0 = iParam0;
	Var0.f_1 = iParam1;
	Var0.f_2 = iParam2;
	Var0.f_3 = iParam3;
	func_1722(Var0);
}

int func_1056(int iParam0, bool bParam1)
{
	if (!func_1723())
	{
		return 0;
	}
	if (!func_1724(iParam0))
	{
		return 0;
	}
	if (func_1725(iParam0))
	{
		iVar0 = 0;
		if ((func_1052(iParam0) == 81053684 || func_1040(iParam0, 160827531)) && !func_1040(iParam0, -1303648999))
		{
			if (bParam1)
			{
				func_577(&iVar0, 2);
			}
		}
		return func_1726(iParam0, iVar0);
	}
	return 0;
}

void func_1057(int iParam0)
{
	iVar0 = 10;
	iVar1 = &Global_1952637->f_1675.f_1[iVar0];
	if (iVar1 == iParam0)
	{
		_0xcb9401f918cb0f75(Global_34, "PlayUnequipHatFidget", 1, 15);
		func_1058(Global_34, -2065815962, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
		func_1059(iParam0, 0, 0);
		return;
	}
	_0xcb9401f918cb0f75(Global_34, "PlayEquipHatFidget", 1, 15);
	func_1058(Global_34, iParam0, 0, -358215195, 1, 1, 1, 1, 0, 1, 1);
	if (func_1727(32768))
	{
		knock_off_ped_prop(Global_34, false, true, false, true);
		func_1728();
		func_1094(128);
		return;
	}
	if (iVar1 == &Global_1952637->f_83[iVar0])
	{
		func_1059(iParam0, 1, 0);
		return;
	}
	if (func_1729(-2061583405, 0))
	{
		if (func_1730(iVar1))
		{
			func_1059(iVar1, 0, 0);
		}
		else
		{
			func_1731(iVar1, 1, 1, 0, 0, 0);
		}
		func_1059(iParam0, 1, 0);
		return;
	}
	if (func_1730(iVar1))
	{
		func_1059(iVar1, 0, 0);
		func_1059(iParam0, 1, 0);
	}
	else if (func_1730(iParam0))
	{
		if (iParam0 != func_1732(0))
		{
			func_1733(iParam0, iVar1, 0, 0, 0);
			func_1059(iParam0, 0, 0);
			func_1059(iVar1, 0, 0);
		}
		else
		{
			knock_off_ped_prop(Global_34, false, true, false, true);
			func_1094(128);
			func_1059(iParam0, 1, 0);
		}
	}
}

int func_1058(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8, bool bParam9, bool bParam10)
{
	if (iParam3 == -358215195)
	{
		Var0 = { func_1686(iParam1, 1, 0) };
		iParam3 = func_1734(Var0.f_4);
		if (iParam3 == -358215195)
		{
			return 0;
		}
	}
	if (!func_1736(iParam1, iParam2, func_1735(iParam3, 1), bParam4, 1, 0, 1))
	{
		return 0;
	}
	func_1737(1, bParam5, bParam9, 1);
	if (bParam10)
	{
		if (func_1738(iParam1, 0))
		{
			func_1739(&(Global_1952637->f_1675.f_1[func_1735(iParam3, 1)]), 0, 0);
		}
		else
		{
			func_1739(iParam1, 1, 0);
		}
	}
	switch (iParam3)
	{
		case 1145151482:
		case 1742327865:
			if (bParam7 && iParam1 != &Global_1952637->f_83[func_1735(iParam3, 1)])
			{
				func_1055(27, 0, 0, 0, 0);
			}
			break;
		case 1108822547:
			if (func_1727(32768))
			{
				func_1728();
				func_1055(21, iParam3, 256, 0, 0);
			}
			clear_ped_damage_decal_by_zone(iParam0, 2, "ALL");
			clear_ped_blood_damage_by_zone(iParam0, 2);
			break;
	}
	if (!bParam6)
	{
		return 1;
	}
	iVar5 = func_1740(iParam3);
	if (bParam4)
	{
		iVar5 |= 2;
	}
	if (bParam8)
	{
		func_1741(&iVar5, 4);
	}
	if (is_ped_a_player(iParam0))
	{
		func_1055(19, 0, iVar5, 0, 0);
	}
	else
	{
		iVar5 |= 1;
		func_1055(19, 0, iVar5, iParam0, 0);
	}
	return 1;
}

void func_1059(int iParam0, int iParam1, bool bParam2)
{
	Var0 = { func_1686(iParam0, bParam2, 0) };
	Var5 = { func_583(iParam0, Var0, Var0.f_4, bParam2) };
	if (func_1104(iParam0, Var0, Var0.f_4, bParam2, 0, 0) <= 0)
	{
		return;
	}
	_0x65a5f70f4a292ebe(func_540(bParam2), &Var5, iParam1);
}

int func_1060(int iParam0, bool bParam1)
{
	iVar2 = 0;
	if (!_item_database_get_fits_slot_info(iParam0, 0, &iVar7))
	{
		return 0;
	}
	Var8 = { func_583(889965687, func_966(bParam1), 1034665895, bParam1) };
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_26)
	{
		iVar1 = &Global_1952637->f_3334[iVar0];
		if (func_1052(iVar1) == iParam0 || (iParam0 == 81053684 && func_1040(iVar1, 160827531)))
		{
			Var3 = { func_583(iVar1, Var8, iVar7, bParam1) };
			if (_0x70e3a884ed000a01(func_540(bParam1), &Var3))
			{
				iVar2 = iVar1;
				_0x65a5f70f4a292ebe(func_540(bParam1), &Var3, 0);
			}
		}
		iVar0++;
	}
	return iVar2;
}

void func_1061(bool bParam0)
{
	if (bParam0)
	{
		Global_1940311 = 1;
	}
	else
	{
		Global_1940311 = 2;
	}
}

int func_1062(int iParam0, int iParam1)
{
	iParam0 = func_1742(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	iVar0 = func_1064(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return 0;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_swimming(Global_34) || is_ped_swimming(iVar0))
	{
		return 0;
	}
	if (is_ped_on_mount(Global_34))
	{
		if (_get_rider_of_mount(iVar0, false) == Global_34)
		{
			if (iParam1 == -727924611)
			{
				return 0;
			}
		}
		else
		{
			return 0;
		}
	}
	if (func_1743(iParam0))
	{
		return 1;
	}
	return 0;
}

bool func_1063(int iParam0)
{
	iParam0 = func_1742(iParam0);
	if (iParam0 <= -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_1064(iParam0);
	if (!does_entity_exist(iVar0))
	{
		if (iParam0 == func_1744())
		{
			return true;
		}
		return false;
	}
	if (iVar0 == _get_saddle_horse_for_player(player_id()))
	{
		return true;
	}
	return false;
}

int func_1064(int iParam0)
{
	iParam0 = func_1742(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	return Global_1903136[iParam0];
}

bool func_1065(int iParam0, int iParam1, bool bParam2)
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

void func_1066()
{
	if (func_1745())
	{
		return;
	}
	if (func_1746(8))
	{
		switch (Global_1051439->f_3629)
		{
			case 0:
				if (func_1746(16))
				{
					if (is_ped_using_any_scenario(Global_34))
					{
						_0xf1c03a5352243a30(Global_34);
						clear_ped_tasks(Global_34, 1, 0);
					}
					func_1747(16);
				}
				func_1748(1);
				break;
			case 1:
				if (is_ped_using_any_scenario(Global_34))
				{
				}
				else
				{
					func_1747(8);
					func_1748(0);
				}
		}
		return;
	}
	if (func_765())
	{
		_task_item_interaction(player_ped_id(), 1807503187, -2005122350, 1, 0, -1082130432);
		Global_1915715->f_22504.f_1 = 1;
		Global_1051439->f_43 = 0;
		func_1749();
	}
	else
	{
		iVar0 = func_1751(func_1750());
		if (iVar0 != -1)
		{
			func_626(func_1694(), 10000, 0, 0, 0, 1);
			Global_1051439->f_3628 = 0;
			Global_1051439->f_3629 = 0;
			func_1752(0);
			func_1695(-1);
		}
	}
}

void func_1067()
{
	Var0 = { func_832(0) };
	if (func_1112(Var0))
	{
		if (Var0 == 6)
		{
			iVar2 = func_1119(player_id(), 0);
			if (iVar2 != -1)
			{
				if (func_1120(iVar2) == -785841056)
				{
					func_626("GC_SELECT_FAIL_POSSE_VERSUS", 10000, 0, 0, 0, 1);
				}
				else if (iVar2 == 1)
				{
					func_626("GC_SELECT_FAIL_CHALLENGE", 10000, 0, 0, 0, 1);
				}
				else
				{
					func_626("GC_SELECT_FAIL_EVENT", 10000, 0, 0, 0, 1);
				}
			}
		}
		else
		{
			func_626("GC_SELECT_GENERAL_FAIL", 10000, 0, 0, 0, 1);
		}
	}
}

void func_1068(int iParam0)
{
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_6 = iParam0;
	Var0.f_4 = 56;
	func_1223(Var0, func_432(0, 8), 0, 0);
}

int func_1069(int iParam0, bool bParam1, int iParam2, bool bParam3)
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

void func_1070(int iParam0, bool bParam1)
{
	func_1753(iParam0, &iVar0, &iVar1);
	if (!func_1754(iParam0, iVar0, iVar1, bParam1))
	{
		return;
	}
	func_1755(iVar0, iVar1);
}

void func_1071(bool bParam0)
{
	if ((func_619() != -1 || !bParam0) || func_1756(Global_34))
	{
		func_1757();
		return;
	}
}

void func_1072()
{
	iVar0 = player_id();
	func_1758(1, iVar0);
}

bool func_1073(int iParam0, int iParam1)
{
	if (!func_586(iParam0, 0))
	{
		return false;
	}
	if (func_1278(iParam0))
	{
		return func_1289(func_1279(iParam0, 0), iParam1, 0);
	}
	return _0xdee7b3c76ed664be(iParam0, iParam1) > 0;
}

bool func_1074(int iParam0, int iParam1, bool bParam2)
{
	if (!func_586(iParam0, 0))
	{
		return func_1759(func_1696(iParam0), iParam1, bParam2);
	}
	if (func_1278(iParam0))
	{
		return func_1290(func_1279(iParam0, 1), iParam1);
	}
	if ((bParam2 && func_619() == 0) && !_unlock_is_visible(iParam0))
	{
		return true;
	}
	if (!func_1760(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
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

bool func_1075(int iParam0, int iParam1)
{
	if (func_1284(iParam0, iParam1))
	{
		return true;
	}
	else if (func_1285(iParam0, iParam1))
	{
		return true;
	}
	return false;
}

int func_1076(int iParam0, int iParam1, bool bParam2, bool bParam3, bool bParam4, int iParam5)
{
	if ((bParam4 && iParam1 == -915411861) && func_1073(iParam0, 59806960))
	{
		iParam1 = 59806960;
	}
	if (func_1278(iParam0))
	{
		return func_1291(func_1279(iParam0, 0), iParam1, bParam3, 1);
	}
	if (!func_1302(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
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
			if (iParam5 != 0 && &Var0[iVar32] != iParam5)
			{
			}
			else
			{
				return Var0[iVar32]->f_1;
				Jump @204; //curOff = 188
				if (&Var0[iVar32] == 0)
				{
				}
				else
				{
					iVar32++;
				}
				if (!bParam3)
				{
				}
				return 0;
			}
		}
	}
}

char* func_1077(char* sParam0, int iParam1)
{
	return _create_var_string(42, "COLOR_STRING", _create_color_string(iParam1), sParam0);
}

int func_1078(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1895608703:
			return 0;
		case 76824010:
			return 1;
		case 1128045213:
			return 2;
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

void func_1079(var uParam0)
{
	iVar0 = func_1761(uParam0);
	if (iVar0 == 0)
	{
		if (Global_1194053->f_116.f_3 != 0)
		{
			func_1762(Global_34);
			Global_1194053->f_116.f_3 = 0;
		}
		return;
	}
	iVar1 = func_1763();
	func_1764(iVar0, 1, iVar1);
	Global_1194053->f_116.f_3 = iVar0;
}

void func_1080(int iParam0)
{
	Global_1194053->f_116.f_2 = iParam0;
}

bool func_1081()
{
	return func_1339(256);
}

bool func_1082(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return func_576(Global_1071686->f_21416.f_1[iParam0]->f_7, iParam1);
}

void func_1083(int iParam0)
{
	if (!func_576(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7, iParam0))
	{
		func_577(&(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7), iParam0);
	}
}

void func_1084(bool bParam0, int iParam1)
{
	iVar50 = _0xd1bf325c8252a982(iParam1, &Var0);
	Var63 = { func_650() };
	iVar70 = 0;
	while (iVar70 <= (iVar50 - 1))
	{
		if ((func_34(*Var0[iVar70]) && !network_are_handles_the_same(Var0[iVar70], &Var63)) && network_is_gamer_in_my_session(Var0[iVar70]))
		{
			iVar51 = network_get_player_from_gamer_handle(Var0[iVar70]);
			if (network_is_player_active(iVar51))
			{
				Var52.f_4 = 7;
				Var52.f_5 = iParam1;
				Var52.f_10 = bParam0;
				func_1765(&Var52, iVar51);
			}
		}
		iVar70++;
	}
}

void func_1085(int iParam0)
{
	if (func_576(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7, iParam0))
	{
		func_1098(&(Global_1071686->f_21416.f_1[network_player_id_to_int()]->f_7), iParam0);
	}
}

bool func_1086()
{
	if (!Global_1194053->f_437.f_2)
	{
		return false;
	}
	if (Global_1194053->f_437.f_1 >= 3)
	{
		return true;
	}
	return false;
}

void func_1087()
{
	Global_1194053->f_437 = { vVar0 };
}

bool func_1088()
{
	if (!Global_1194053->f_437.f_2)
	{
		return true;
	}
	if ((get_game_timer() - Global_1194053->f_437) < 1000)
	{
		return false;
	}
	return true;
}

void func_1089()
{
	if (!Global_1194053->f_437.f_2)
	{
		Global_1194053->f_437.f_2 = 1;
	}
	Global_1194053->f_437 = get_game_timer();
	Global_1194053->f_437.f_1++;
}

bool func_1090(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = func_407(iParam0);
	if (bParam1 && iVar0 == 1)
	{
		return true;
	}
	if (bParam2 && iVar0 == 3)
	{
		return true;
	}
	return false;
}

bool func_1091(int iParam0)
{
	if (func_1766())
	{
		return true;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return true;
	}
	if (!network_is_player_connected(iParam0))
	{
		return true;
	}
	return false;
}

int func_1092(int iParam0)
{
	if (!Global_1139381->f_5560)
	{
		return 0;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		iVar0 = (Global_1296859->f_21 - Global_17411.f_2624);
		if (iVar0 > 0)
		{
			return iVar0;
		}
		else
		{
			return 0;
		}
	}
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	iVar1 = iParam0;
	if (iVar1 < 0 || iVar1 >= 32)
	{
		return 0;
	}
	iVar0 = (Global_1296859->f_21 - (*Global_1100469)[iVar1]->f_47);
	if (iVar0 > 0)
	{
		return iVar0;
	}
	return 0;
}

void func_1093()
{
	Global_1952637->f_1057 = 0;
}

void func_1094(int iParam0)
{
	Global_1952637 = (Global_1952637 || iParam0);
}

bool func_1095(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_1096(var uParam0)
{
	return func_1095(*uParam0, 2);
}

int func_1097(int iParam0)
{
	return get_time_difference(iParam0, get_network_time_accurate());
}

void func_1098(var uParam0, int iParam1)
{
	func_1767(uParam0, iParam1);
}

var func_1099(vector3 vParam0, vector3 vParam3, vector3 vParam6, int iParam9, int iParam10, int iParam11)
{
	_0xde544b7ec0c187cc(&uVar0);
	if (!network_is_game_in_progress())
	{
		return uVar0;
	}
	if (func_1768() != 0)
	{
		iVar1 = player_id();
		if (iVar1 >= 0 && iVar1 < 32)
		{
			_0x31010318ba9897ac(&uVar0, iVar1);
		}
		return uVar0;
	}
	iVar2 = 0;
	bVar3 = false;
	bVar4 = false;
	iVar5 = Global_1296859->f_10;
	iVar6 = Global_1296859->f_15;
	bVar7 = true;
	iVar9 = iParam10;
	if (vmag2(vParam6) < 1f)
	{
		bVar7 = false;
	}
	else
	{
		switch (iParam9)
		{
			case 665633627:
				iVar8 = _create_volume_cylinder_with_custom_name(vParam0, vParam3, vParam6, func_1769());
				break;
			case -432403087:
				iVar8 = _create_volume_sphere_with_custom_name(vParam0, vParam3, vParam6, func_1769());
				break;
			case -1612834106:
				iVar8 = _create_volume_box_with_custom_name(vParam0, vParam3, vParam6, func_1769());
				break;
		}
	}
	if (iVar9 & 8 != 0)
	{
		iVar9 = (iVar9 || func_1770(get_player_team(iVar5)));
	}
	if (iVar9 & 8 != 0 && iVar9 & 32768 != 0)
	{
		iVar9 |= 65536;
		iVar9 = (iVar9 - iVar9 & 40952);
	}
	if (iVar9 & 4 != 0)
	{
		if (!network_get_this_script_is_network_script())
		{
			iVar9 = (iVar9 - iVar9 & 4);
			iVar9 |= 0;
		}
	}
	iVar2 = 0;
	while (iVar2 < 32)
	{
		if (network_is_player_active(&(Global_1296859->f_154[iVar2])))
		{
			iVar10 = &Global_1296859->f_154[iVar2];
			bVar3 = false;
			bVar4 = false;
			if (iVar9 & 1 != 0 && iVar10 == iVar5)
			{
				bVar3 = true;
			}
			if (func_2(iVar2))
			{
				bVar3 = true;
			}
			iVar11 = get_player_ped(iVar10);
			if (!bVar3)
			{
				if (iVar9 & 2 != 0)
				{
					if (!does_entity_exist(iVar11))
					{
						bVar3 = true;
					}
					else if (&Global_1296859->f_88[iVar2])
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8192 != 0 && func_711(iVar2) != 1)
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 16384 != 0 && _0xb655db7582aec805(iVar11))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 4 != 0 && !network_is_player_a_participant(iVar10))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 8176 != 0)
				{
					switch (get_player_team(iVar10))
					{
						case -1:
							if (iVar9 & 16 != 0)
							{
								bVar4 = true;
							}
							break;
						case 0:
							if (iVar9 & 32 != 0)
							{
								bVar4 = true;
							}
							break;
						case 1:
							if (iVar9 & 64 != 0)
							{
								bVar4 = true;
							}
							break;
						case 2:
							if (iVar9 & 128 != 0)
							{
								bVar4 = true;
							}
							break;
						case 3:
							if (iVar9 & 256 != 0)
							{
								bVar4 = true;
							}
							break;
						case 4:
							if (iVar9 & 512 != 0)
							{
								bVar4 = true;
							}
							break;
						case 5:
							if (iVar9 & 1024 != 0)
							{
								bVar4 = true;
							}
							break;
						case 6:
							if (iVar9 & 2048 != 0)
							{
								bVar4 = true;
							}
							break;
						case 8:
							if (iVar9 & 4096 != 0)
							{
								bVar4 = true;
							}
							break;
					}
					if (!bVar4)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 32768 != 0)
				{
					if (_0x901e0dc25080c8b9(iVar10) != iVar6)
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3)
			{
				if (iVar9 & 65536 != 0)
				{
					if (!func_1771(iVar10))
					{
						bVar3 = true;
					}
				}
			}
			if (!bVar3 && bVar7)
			{
				if (!_0xf256a75210c5c0eb(iVar8, get_entity_coords(iVar11, false, false)))
				{
					bVar3 = true;
				}
			}
			if (!bVar3)
			{
				_0x31010318ba9897ac(&uVar0, iVar2);
			}
		}
		iVar2++;
	}
	if (bVar7)
	{
		_delete_volume(iVar8);
	}
	return uVar0;
}

bool func_1100(bool bParam0)
{
	if (bParam0)
	{
		if (Global_1132288->f_2050 == 0 || (_get_system_time() - Global_1132288->f_2050) >= 1000)
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (Global_1132288->f_2050 == 0)
	{
		Global_1132288->f_2050 = _get_system_time();
	}
	else if ((_get_system_time() - Global_1132288->f_2050) >= 1000)
	{
		Global_1132288->f_2050 = _get_system_time();
	}
	else
	{
		return false;
	}
	return true;
}

int func_1101(int iParam0)
{
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 58)
	{
		return 0;
	}
	return Global_1896738->f_3715[iVar0]->f_2;
}

int func_1102(var uParam0, var uParam1)
{
	iVar0 = uParam1;
	if (iVar0 < 0 || iVar0 >= 58)
	{
		return 0;
	}
	_copy_memory(Global_1896738->f_3715[iVar0], uParam0, 4);
	return 1;
}

bool func_1103()
{
	return func_1772(func_832(0));
}

int func_1104(int iParam0, struct<4> Param1, int iParam5, bool bParam6, bool bParam7, int iParam8)
{
	if (!func_586(iParam0, 0))
	{
		return 0;
	}
	if (!bParam7 && func_1684(iParam0, -455129387) == 0)
	{
		bParam7 = true;
	}
	iVar0 = 0;
	if (bParam7)
	{
		Var1 = { func_583(iParam0, Param1, iParam5, bParam6) };
		if (!_0xb881ca836cc4b6d4(&Var1))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_540(bParam6), &Var1, iParam8);
	}
	else
	{
		iVar0 = _0xe787f05dfc977bde(func_540(bParam6), iParam0, iParam8);
	}
	return iVar0;
}

bool func_1105(int iParam0)
{
	return func_576(Global_1940311->f_1433.f_54, iParam0);
}

bool func_1106(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		iParam0 = player_id();
	}
	if (func_1773(255) > 9)
	{
		return false;
	}
	if (func_1774(iParam0, 16384))
	{
		return true;
	}
	return false;
}

int func_1107()
{
	if (_get_number_of_references_of_script_with_name_hash(1814880805) != 0)
	{
		return 0;
	}
	else if (_get_number_of_references_of_script_with_name_hash(-701235215) != 0)
	{
		return 1;
	}
	return 2;
}

bool func_1108(int iParam0, var uParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if (!_network_is_player_index_valid(iParam0))
		{
			return false;
		}
	}
	iVar0 = iParam0;
	if ((*Global_1298536)[iVar0]->f_1 == -1)
	{
		return false;
	}
	*uParam1 = (*Global_1298536)[iVar0]->f_1;
	*iParam2 = (*Global_1298536)[iVar0]->f_3;
	return true;
}

bool func_1109(int iParam0)
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return (Global_1197740->f_1 && iParam0) != 0;
}

bool func_1110(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return false;
	}
	iVar0 = func_1775(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (_unlock_is_unlocked(iVar0))
	{
		iVar1 = func_1776(1, iParam0);
		if (iVar1 == 0)
		{
			return false;
		}
		if (_0xfbe782b3165ac8ec(iVar1))
		{
			return true;
		}
	}
	return false;
}

struct<2> func_1111()
{
	if (Global_1196205->f_129 <= 0)
	{
		return func_832(0);
	}
	if (Global_1196205->f_130 < 0 || Global_1196205->f_131 == 0)
	{
		return func_832(0);
	}
	return (*Global_1196205)[Global_1196205->f_130]->f_1;
}

bool func_1112(struct<2> Param0)
{
	if (!func_1332(Param0))
	{
		return false;
	}
	if (Param0.f_1 < 0)
	{
		return false;
	}
	if (Param0.f_1 >= func_1777(Param0))
	{
		return false;
	}
	return true;
}

char* func_1113(int iParam0)
{
	iVar0 = floor((to_float(iParam0) / 60f));
	iParam0 = (iParam0 - iVar0 * 60);
	if (iVar0 > 0)
	{
		if (iVar0 < 10)
		{
			StringIntConCat(&cVar1, 0, 64);
		}
		StringIntConCat(&cVar1, iVar0, 64);
	}
	else
	{
		StringConCat(&cVar1, "00", 64);
	}
	StringConCat(&cVar1, ":", 64);
	if (iParam0 < 10)
	{
		StringConCat(&cVar1, "0", 64);
	}
	StringIntConCat(&cVar1, iParam0, 64);
	return _0xd8402b858f4ddd88(&cVar1, get_length_of_literal_string(&cVar1));
}

bool func_1114()
{
	return (func_1134(Global_1296859->f_10, 1, 0, 1) && func_1115() > 0);
}

int func_1115()
{
	iVar0 = func_1076(120839576, 59806960, 1, 0, 1, 0);
	if (!func_537(iVar0))
	{
		iVar0 = _network_get_cash_balance();
	}
	return iVar0;
}

bool func_1116(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	return (*Global_1195550)[iParam0]->f_15;
}

bool func_1117(int iParam0)
{
	return func_1778(iParam0) != 0;
}

bool func_1118(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (&Global_1195155 == 1)
	{
		return false;
	}
	if (!func_673(2))
	{
		return false;
	}
	if (Global_1195155->f_146 != 0 && &Global_1195155->f_168[iParam0] == Global_1195155->f_146)
	{
		return true;
	}
	return false;
}

int func_1119(int iParam0, bool bParam1)
{
	if (network_is_player_active(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (Global_1196339->f_1[iVar1]->f_1 != -1 && func_1779(iVar1, 64, iVar0))
			{
				if (bParam1)
				{
					if (&Global_1196898->f_78[iVar1] >= 2)
					{
						return Global_1196339->f_1[iVar1]->f_1;
					}
				}
				else if (&Global_1196898->f_78[iVar1] >= 5)
				{
					return Global_1196339->f_1[iVar1]->f_1;
				}
			}
			iVar1++;
		}
	}
	return -1;
}

int func_1120(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	return &(Global_1196898->f_1[iParam0]);
}

int func_1121(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return 1412564789;
		case 3:
			return 2090637823;
		case 4:
			return -1740003396;
		case 5:
			return -1184411966;
		case 6:
			return -929764067;
		case 7:
			return 112216621;
		case 8:
			return -1767965617;
		case 9:
			return 81153145;
		case 0:
			return -1369928329;
		case 1:
			return -1804958860;
		case 10:
			return 485273815;
		case 15:
			return 1749906378;
		case 16:
			return 1485493317;
		case 17:
			return -1956038143;
		case 19:
			return 928731509;
		case 18:
			return -1013295952;
		default:
			break;
	}
	return 0;
}

bool func_1122()
{
	if ((Global_1296859->f_16 != 255 && &Global_1296859 != 255) && &Global_1296859 != Global_1296859->f_16)
	{
		return true;
	}
	return false;
}

bool func_1123()
{
	iVar0 = 13;
	while (iVar0 <= 15)
	{
		if (func_1780(iVar0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1124()
{
	if (func_1781() < func_1782())
	{
		return true;
	}
	return false;
}

bool func_1125(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_3 & 32 != 0;
	}
	return func_703(32, iParam0);
}

int func_1126(int iParam0, var uParam1)
{
	return func_1783(&(Global_17411.f_55.f_2481), iParam0, uParam1);
}

char* func_1127(int iParam0)
{
	if (!func_586(iParam0, 0))
	{
		return "";
	}
	iVar0 = func_1784(iParam0);
	if (iVar0 == 0)
	{
		return "";
	}
	return _get_label_text_by_hash(iVar0);
}

char* func_1128(char* sParam0, int iParam1)
{
	if (iParam1 == 109029619)
	{
		return _create_var_string(10, "LITERAL_STRING", sParam0);
	}
	return func_1077(_create_var_string(10, "LITERAL_STRING", sParam0), iParam1);
}

bool func_1129(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return false;
		case 2:
			return false;
		case 3:
			return false;
		case 4:
			return true;
		case 5:
			return true;
		case 6:
			return true;
		case 7:
			return true;
		case 8:
			return true;
		case 10:
			return true;
		case 9:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1130(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > 2;
		case 5:
			return _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > 1;
		case 6:
			return _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > 1;
		case 7:
			return _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > 1;
		case 8:
			return _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > 1;
		case 10:
			return _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > 1;
		case 9:
			return _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > 1;
		default:
			break;
	}
	return true;
	return true;
}

char* func_1131(int iParam0, bool bParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5)
{
	StringCopy(&cVar0, "", 32);
	if (bParam3)
	{
		if (iParam0 != 0)
		{
			StringConCat(&cVar0, "+", 32);
			iParam0 = (iParam0 * -1);
		}
		else
		{
			return "";
		}
	}
	fVar4 = (IntToFloat(iParam0) / 1000f);
	if (bParam5)
	{
		iVar5 = ceil(fVar4);
	}
	else
	{
		iVar5 = floor(fVar4);
	}
	iVar6 = func_513((iVar5 / 60), 0, 180);
	iVar7 = func_513((iVar5 % 60), 0, 60);
	if (iVar6 <= 9)
	{
		StringConCat(&cVar0, "0", 32);
	}
	StringIntConCat(&cVar0, iVar6, 32);
	if (iVar7 <= 9)
	{
		StringConCat(&cVar0, ":0", 32);
	}
	else
	{
		StringConCat(&cVar0, ":", 32);
	}
	StringIntConCat(&cVar0, iVar7, 32);
	if (bParam1)
	{
		StringConCat(&cVar0, ".", 32);
		iVar9 = (iParam0 % 1000);
		if (iVar9 < 10)
		{
			StringConCat(&cVar8, "00", 8);
		}
		else if (iVar9 < 100)
		{
			StringConCat(&cVar8, "0", 8);
		}
		StringIntConCat(&cVar8, iVar9, 8);
		if (iParam2 > 3 || iParam2 < 1)
		{
			iParam2 = 3;
		}
		iVar10 = get_length_of_literal_string(&cVar8);
		if (iParam2 > iVar10)
		{
			iParam2 = iVar10;
		}
		StringCopy(&cVar8, _0xd8402b858f4ddd88(&cVar8, iParam2), 8);
		StringConCat(&cVar0, &cVar8, 32);
	}
	if (!bParam4)
	{
		StringConCat(&cVar0, " ", 32);
	}
	return _0xd8402b858f4ddd88(&cVar0, get_length_of_literal_string(&cVar0));
}

bool func_1132(int iParam0)
{
	if (func_1112(func_832(0)) || Global_1108365->f_935.f_28 != -1)
	{
		return false;
	}
	if (func_1329(player_id(), 1))
	{
		return false;
	}
	if (!func_1785(iParam0))
	{
		return false;
	}
	return true;
}

bool func_1133(bool bParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (!_network_is_player_index_valid(iVar2) || !network_is_player_active(iVar2))
		{
		}
		else
		{
			if (!func_1112((*Global_1056141)[iVar0]->f_2))
			{
				if (bParam0 && !_0x9be7dcb22d32ccbe(Global_1296859->f_15, iVar2))
				{
				}
				else
				{
					iVar1++;
					if (iVar1 >= iParam1)
					{
						return true;
					}
				}
				iVar0++;
				return false;
			}
		}
	}
}

bool func_1134(int iParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (iParam0 == player_id())
	{
		return func_1786(bParam1, bParam2, bParam3);
	}
	if (Global_1572887->f_13 != -1)
	{
		if (iParam0 == Global_1296859->f_10)
		{
			if (!Global_1296859->f_11)
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

bool func_1135()
{
	if (is_ped_in_any_boat(Global_34))
	{
		return true;
	}
	iVar0 = func_1787(Global_34);
	if (does_entity_exist(iVar0))
	{
		if (is_ped_swimming(iVar0))
		{
			return true;
		}
	}
	return is_ped_swimming(Global_34);
}

bool func_1136()
{
	return func_1788(Global_35) != -1;
}

bool func_1137(int iParam0, bool bParam1, bool bParam2)
{
	if (!Global_1139381->f_5560)
	{
		return false;
	}
	if (iParam0 == &Global_1296859->f_154[&Global_1296859])
	{
		return ((Global_17411.f_2621.f_2 == 2 || (bParam1 && Global_17411.f_2621.f_2 == 1)) || (bParam2 && Global_17411.f_2621.f_2 == 3));
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return false;
	}
	return (((*Global_1100469)[iVar0]->f_48 == 2 || (bParam1 && (*Global_1100469)[iVar0]->f_48 == 1)) || (bParam2 && (*Global_1100469)[iVar0]->f_48 == 3));
}

bool func_1138(var uParam0, int iParam1)
{
	return func_415(*uParam0, iParam1);
}

bool func_1139(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			iVar0 = 18;
			break;
		case 10:
			iVar0 = 15;
			break;
		case 8:
			iVar0 = 16;
			break;
		case 9:
			iVar0 = 17;
			break;
		default:
			return true;
	}
	iVar1 = -1;
	iVar2 = func_1789(iVar0, player_id(), &iVar1);
	if (iVar2 != 0)
	{
		return false;
	}
	iVar3 = func_1262(iVar0, Global_35);
	iVar2 = func_1790(iVar0, iVar3);
	if (iVar2 != 0)
	{
		return false;
	}
	iVar4 = func_1263(iVar0, iVar3);
	iVar2 = func_1791(iVar4);
	if (iVar2 != 0)
	{
		return false;
	}
	Var5 = { func_1264(iVar0, iVar3, iVar4) };
	iVar2 = func_1792(Var5);
	if (iVar2 != 0)
	{
		return false;
	}
	return true;
}

int func_1140(var uParam0)
{
	if (!func_959(uParam0))
	{
		return round((uParam0->f_1 * 1000f));
	}
	if (func_1621(uParam0))
	{
		return round((uParam0->f_2 * 1000f));
	}
	return (func_1793() - round((uParam0->f_1 * 1000f)));
}

bool func_1141(int iParam0)
{
	if (!_0x0f99f6436528a089(_0x901e0dc25080c8b9(iParam0)))
	{
		return false;
	}
	if (!_0x424b17a7dc5c90bc(iParam0))
	{
		return false;
	}
	iVar51 = _0xd1bf325c8252a982(_0x901e0dc25080c8b9(iParam0), &Var0);
	iVar50 = 0;
	while (iVar50 <= (iVar51 - 1))
	{
		iVar52 = network_get_player_from_gamer_handle(Var0[iVar50]);
		if (!network_is_player_active(iVar52) || is_player_dead(iVar52))
		{
		}
		else if (func_703(1048576, iVar52))
		{
			return true;
		}
		iVar50++;
	}
	return false;
}

void func_1142(int iParam0)
{
	Global_1940311->f_1433.f_4189.f_2086 = iParam0;
}

void func_1143(int iParam0)
{
	_databinding_write_data_int(Global_1940311->f_1433.f_4189.f_12, iParam0);
}

void func_1144(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam0;
	iVar1 = &(*Global_1145091)[iVar0]->f_10[iParam1];
	Var2.f_7 = 1;
	Var2.f_13 = -1;
	Var2.f_15 = -1;
	Var2.f_16 = -1;
	Var2.f_17 = -1;
	Var2.f_18 = -1;
	Var2.f_19 = -1;
	Var2.f_32 = -1;
	Var2.f_13 = (*Global_1145091)[iVar0]->f_10[iParam1]->f_1;
	if (!func_324(iVar1, &Var2, 1, -1))
	{
		func_325(&Var2);
	}
	func_1794(iParam1, Global_1940311->f_1433.f_4189.f_1579[iParam1], Var2, (*Global_1145091)[iVar0]->f_10[iParam1]->f_2);
	if (bParam2 && func_327(iParam1))
	{
		func_328(&(Global_1940311->f_1433.f_4189.f_1985), &Var2, iParam1);
	}
}

bool func_1145(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_522(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_523(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_1414(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_1795(&Var45, &Var0, 0))
				{
					if (func_1416(&(Var0.f_24), 16))
					{
						*uParam0 = { Var0 };
						func_508(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_508(iVar43);
	}
	return false;
}

struct<4> func_1146()
{
	return Global_1291734->f_11.f_310;
}

bool func_1147()
{
	return Global_1291734->f_11.f_318 > Global_1296859->f_21;
}

void func_1148(int iParam0, bool bParam1)
{
	Global_1291734->f_11.f_310 = { *iParam0 };
	if (bParam1)
	{
		Global_1291734->f_11.f_318 = Global_1296859->f_21 + 10;
	}
}

bool func_1149(var uParam0, bool bParam1)
{
	Var0.f_9 = -1591664384;
	Var29 = { func_522(0, -1591664384, -1591664384, -1591664384, -1675500494, 0, 0) };
	if (func_523(&Var29, &iVar43, &iVar44, bParam1))
	{
		Var45.f_9 = -1591664384;
		iVar59 = 0;
		while (iVar59 < iVar44)
		{
			if (func_1414(&Var45, iVar59, iVar43, iVar44))
			{
				if (func_1795(&Var45, &Var0, 0))
				{
					if (func_1416(&(Var0.f_24), 32))
					{
						*uParam0 = { Var0 };
						func_508(iVar43);
						return true;
					}
				}
			}
			iVar59++;
		}
		func_508(iVar43);
	}
	return false;
}

struct<4> func_1150(bool bParam0)
{
	Var2.f_9 = -1591664384;
	if (!func_504("ALL HORSES", &iVar0, &iVar1, -1591664384, bParam0))
	{
		return Var2;
	}
	iVar16 = 0;
	while (iVar16 < iVar1)
	{
		if (!func_1414(&Var2, iVar16, iVar0, iVar1))
		{
		}
		else if (_0xb881ca836cc4b6d4(&Var2))
		{
		}
		else
		{
			iVar16++;
		}
	}
	func_508(iVar0);
	return Var2;
}

void func_1151(var uParam0)
{
	func_1796(uParam0);
	uParam0->f_4 = 0;
	uParam0->f_5 = { func_733() };
	uParam0->f_9 = 0;
	uParam0->f_10 = -1;
	uParam0->f_11 = 0;
	StringCopy(&(uParam0->f_12), "", 64);
	uParam0->f_20 = 0;
	uParam0->f_22 = 0;
	uParam0->f_23 = 0;
}

bool func_1152(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	func_1797(&(Global_1904087->f_24));
	if (!func_1798(iParam0, iParam1, iParam2, uParam3, &(Global_1904087->f_24), bParam4))
	{
		return false;
	}
	return true;
}

bool func_1153(int iParam0, int iParam1, int iParam2, var uParam3, bool bParam4)
{
	Var0.f_9 = -1591664384;
	if (!func_1799(iParam0, iParam1, iParam2, uParam3, &Var0, bParam4))
	{
		return false;
	}
	return true;
}

int func_1154(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (_0x4c543d5dfcd2dafd(Global_1291734->f_11.f_162[iVar0], &uParam0))
		{
			return Global_1291734->f_11.f_162[iVar0]->f_5;
		}
		iVar0++;
	}
	return -1;
}

int func_1155(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_1156(&uParam0, -1585141069, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_1156(int iParam0, bool bParam1, bool bParam2)
{
	return _0x033ee4b89f3ac545(func_540(bParam2), iParam0, bParam1);
}

struct<8> func_1157(int iParam0, bool bParam1)
{
	Var0 = { iParam0->f_12 };
	if (bParam1)
	{
		if (func_1800(iParam0, &Var8))
		{
			Var0 = { Var8 };
		}
	}
	if (compare_strings(&Var0, func_1801(), false, -1) == 0)
	{
		StringCopy(&Var0, _create_var_string(2, func_1802(iParam0->f_22)), 64);
	}
	if (get_length_of_literal_string(&Var0) == 0)
	{
		if (iParam0->f_22 != 0)
		{
			StringCopy(&Var0, _create_var_string(2, func_518(iParam0->f_22)), 64);
		}
		else
		{
			StringCopy(&Var0, "", 64);
		}
	}
	if (func_586(iParam0->f_4, 0))
	{
		iVar16 = func_1803(iParam0->f_4);
		if (is_model_valid(iVar16) && is_model_a_vehicle(iVar16))
		{
			sVar17 = _create_var_string(0, func_1784(iParam0->f_4));
			Var0 = { func_644(sVar17) };
		}
	}
	return Var0;
}

void func_1158(struct<4> Param0, var uParam4)
{
	_databinding_write_data_int(*uParam4, Param0);
	_databinding_write_data_int(uParam4->f_1, Param0.f_1);
	_databinding_write_data_int(uParam4->f_2, Param0.f_2);
	_databinding_write_data_int(uParam4->f_3, Param0.f_3);
}

bool func_1159(struct<2> Param0, int iParam2, int iParam3)
{
	if (Global_265377->f_124517.f_135 & 8 != 0)
	{
		Global_1071686->f_28351 = 1;
		return true;
	}
	if (func_1112(*Global_1051213) && !func_1804(*Global_1051213, Param0))
	{
		Global_1071686->f_28351 = 2;
		return true;
	}
	if (iParam2 != 0 && func_1109(iParam2))
	{
		return true;
	}
	if (iParam3 != 0 && func_1805(iParam3, 255))
	{
		Global_1071686->f_28351 = 4;
		return true;
	}
	if (Global_263042[&Global_1296859] > 2)
	{
		Global_1071686->f_28351 = 5;
		return true;
	}
	if (&Global_262155 >= 1)
	{
		Global_1071686->f_28351 = 6;
		return true;
	}
	if (func_830())
	{
		Global_1071686->f_28351 = 7;
		return true;
	}
	if (Global_1572887->f_7 & 1 != 0)
	{
		if (!func_1112(*Global_1051213))
		{
			Global_1071686->f_28351 = 8;
			return true;
		}
	}
	if (Global_265377->f_124675 != 0 && _does_thread_exist(Global_265377->f_124675))
	{
		Global_1071686->f_28351 = 9;
		return true;
	}
	Global_1071686->f_28351 = 0;
	return false;
}

int func_1160(bool bParam0, bool bParam1, bool bParam2)
{
	if (bParam1)
	{
		return 3;
	}
	if (bParam0)
	{
		return 2;
	}
	if (bParam2)
	{
		return 0;
	}
	return 1;
}

void func_1161(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_1806(iParam1);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_1, true);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_22, 1210165179);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_20, false);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_27, true);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_7, iVar0);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_8, -1915264523);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_9, true);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_10, true);
}

void func_1162(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		iVar0 = -44909892;
	}
	else
	{
		iVar0 = 444737100;
	}
	bVar1 = func_1807();
	bVar2 = false;
	if (bVar1)
	{
		bVar2 = func_756(75);
	}
	bVar3 = true;
	if (!bParam2 || (bVar1 && !bVar2))
	{
		bVar3 = false;
	}
	iVar4 = func_1806(iParam1);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_1, bParam2);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_22, iVar0);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_20, false);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_27, false);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_6, iVar4);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_7, iVar4);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_8, -1915264523);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_9, bVar3);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_10, true);
}

void func_1163(int iParam0, bool bParam1)
{
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_1, true);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_22, -44909892);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_20, !bParam1);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_27, false);
	_databinding_write_data_string(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_19, _create_var_string(2, "CASH_STRING", func_388(1806374467, 0, 59806960)));
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_7, 161109887);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_8, 1712450769);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_9, true);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_10, true);
}

void func_1164(int iParam0, int iParam1)
{
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_1, false);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_22, -44909892);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_20, true);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_27, false);
	_databinding_write_data_string(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_19, func_1808((iParam1 - Global_1296859->f_21) * 1000, 0));
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_7, -183012873);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_8, -1915264523);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_9, false);
	_databinding_write_data_bool(Global_1940311->f_1433.f_1636.f_3[iParam0]->f_10, false);
}

int func_1165(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	Var0.f_9 = -1591664384;
	if (func_1809(iParam0, iParam1, &Var0, bParam2, iParam3))
	{
		return Var0.f_4;
	}
	return 0;
}

int func_1166()
{
	return 5;
}

int func_1167()
{
	return 6;
}

bool func_1168(var uParam0, int iParam1, var uParam2, int iParam3, int iParam4, var uParam5, bool bParam6, int iParam7)
{
	return func_1809(&uParam0, iParam4, uParam5, bParam6, iParam7);
}

int func_1169(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return 0;
	}
	iVar0 = get_default_attribute_rank(iParam0, func_1810());
	return iVar0;
}

char* func_1170(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
			return "BREED_AMERICANPAINT_OVERO";
		case 1432602132:
			return "BREED_AMERICANPAINT_TOBIANO";
		case 92296905:
			return "BREED_AMERICANPAINT_SPLASHEDWHITE";
		case -842044823:
			return "BREED_AMERICANPAINT_GREYOVERO";
		case 1371398552:
			return "BREED_AMERICANSTANDARDBRED_BLACK";
		case -745453539:
			return "BREED_AMERICANSTANDARDBRED_BUCKSKIN";
		case 1583029039:
			return "BREED_AMERICANSTANDARDBRED_PALOMINODAPPLE";
		case -783061276:
			return "BREED_AMERICANSTANDARDBRED_SILVERTAILBUCKSKIN";
		case -1322521536:
			return "BREED_ANDALUSIAN_DARKBAY";
		case 1100711204:
			return "BREED_ANDALUSIAN_PERLINO";
		case 728055838:
			return "BREED_ANDALUSIAN_ROSEGRAY";
		case -1782334639:
			return "BREED_APPALOOSA_BLANKET";
		case -1181052732:
			return "BREED_APPALOOSA_LEOPARDBLANKET";
		case -179102320:
			return "BREED_APPALOOSA_BROWNLEOPARD";
		case -1266863668:
			return "BREED_APPALOOSA_LEOPARD";
		case -2078767648:
			return "BREED_ARABIAN_BLACK";
		case -852553462:
			return "BREED_ARABIAN_ROSEGREYBAY";
		case -80004868:
			return "BREED_ARABIAN_WHITE";
		case 1813208211:
			return "BREED_ARDENNES_BAYROAN";
		case 836323303:
			return "BREED_ARDENNES_STRAWBERRYROAN";
		case 153881023:
			return "BREED_ARDENNES_IRONGREYROAN";
		case -1256798240:
			return "BREED_BELGIAN_BLONDCHESTNUT";
		case 2118089359:
			return "BREED_BELGIAN_MEALYCHESTNUT";
		case -1537586382:
			return "BREED_DUTCHWARMBLOOD_SOOTYBUCKSKIN";
		case 1440692746:
			return "BREED_DUTCHWARMBLOOD_SEALBROWN";
		case 697143532:
			return "BREED_DUTCHWARMBLOOD_CHOCOLATEROAN";
		case 281128160:
			return "BREED_HUNGARIANHALFBRED_FLAXENCHESTNUT";
		case 1854519167:
			return "BREED_HUNGARIANHALFBRED_PIEBALDTOBIANO";
		case -1376299681:
			return "BREED_HUNGARIANHALFBRED_DARKDAPPLEGREY";
		case -1955947684:
			return "BREED_KENTUCKYSADDLE_BLACK1";
		case 1361788230:
			return "BREED_KENTUCKYSADDLE_CHESTNUTPINTO";
		case 1974379573:
			return "BREED_KENTUCKYSADDLE_GREY";
		case 545109431:
			return "BREED_KENTUCKYSADDLE_SILVERBAY";
		case 1275638003:
			return "BREED_MISSOURIFOXTROTTER_AMBERCHAMPAGNE";
		case 2083573823:
			return "BREED_MISSOURIFOXTROTTER_SILVERDAPPLEPINTO";
		case 1235275977:
			return "BREED_MORGAN_BAY";
		case 892601357:
			return "BREED_MORGAN_BAYROAN";
		case 1224695367:
			return "BREED_MORGAN_FLAXENCHESTNUT";
		case 648301150:
			return "BREED_MORGAN_PALOMINO";
		case -1597490733:
			return "BREED_MUSTANG_GRULLODUN";
		case 2000205872:
			return "BREED_MUSTANG_WILDBAY";
		case -1428527735:
			return "BREED_MUSTANG_TIGERSTRIPEDBAY";
		case 170010697:
			return "BREED_NOKOTA_BLUEROAN";
		case -742726637:
			return "BREED_NOKOTA_WHITEROAN";
		case -1714171692:
			return "BREED_NOKOTA_REVERSEDAPPLEROAN";
		case -103101636:
			return "BREED_SHIRE_DARKBAY";
		case -1999094324:
			return "BREED_SHIRE_LIGHTGREY";
		case 1724200240:
			return "BREED_SUFFOLKPUNCH_SORREL";
		case 237935328:
			return "BREED_SUFFOLKPUNCH_REDCHESTNUT";
		case 120848852:
			return "BREED_TENNESSEEWALKER_BLACKRABICANO";
		case -868094182:
			return "BREED_TENNESSEEWALKER_CHESTNUT";
		case -887362763:
			return "BREED_TENNESSEEWALKER_DAPPLEBAY";
		case -847714194:
			return "BREED_TENNESSEEWALKER_REDROAN";
		case 1756765331:
			return "BREED_TENNESSEEWALKER_FLAXENROAN";
		case -813071670:
			return "BREED_THOROUGHBRED_BLOODBAY";
		case -1900569233:
			return "BREED_THOROUGHBRED_DAPPLEGREY";
		case 1688250187:
			return "BREED_THOROUGHBRED_BRINDLE";
		case -1262715164:
			return "BREED_THOROUGHBRED_BLACKCHESTNUT";
		case 2010625508:
			return "BREED_THOROUGHBRED_REVERSEDAPPLEBLACK";
		case -136225010:
			return "BREED_TURKOMAN_DARKBAY";
		case -225011104:
			return "BREED_TURKOMAN_GOLD";
		case -1882436593:
			return "BREED_TURKOMAN_SILVER";
		case -757978903:
			return "BREED_BRETON_REDROAN";
		case 1909854428:
			return "BREED_BRETON_SORREL";
		case 1592694494:
			return "BREED_BRETON_GRULLODUN";
		case 981469777:
			return "BREED_BRETON_SEALBROWN";
		case 1064693514:
			return "BREED_BRETON_MEALYDAPPLEBAY";
		case -1365665739:
			return "BREED_BRETON_STEELGREY";
		case 1577022605:
			return "BREED_CRIOLLO_BLUEROANOVERO";
		case 381495209:
			return "BREED_CRIOLLO_DUN";
		case 3032834:
			return "BREED_CRIOLLO_BAYBRINDLE";
		case -1722101672:
			return "BREED_CRIOLLO_SORRELOVERO";
		case -189605757:
			return "BREED_CRIOLLO_BAYFRAMEOVERO";
		case 863391233:
			return "BREED_CRIOLLO_MARBLESABINO";
		case -952011226:
			return "BREED_GYPSYCOB_PIEBALD";
		case -356470463:
			return "BREED_GYPSYCOB_WHITEBLAGDON";
		case -1750687713:
			return "BREED_GYPSYCOB_PALOMINOBLAGDON";
		case -272192064:
			return "BREED_GYPSYCOB_SKEWBALD";
		case 1935859332:
			return "BREED_GYPSYCOB_SPLASHEDBAY";
		case -1898310680:
			return "BREED_GYPSYCOB_SPLASHEDPIEBALD";
		case 885568364:
			return "BREED_KLADRUBER_BLACK";
		case -1540355548:
			return "BREED_KLADRUBER_WHITE";
		case -601560591:
			return "BREED_KLADRUBER_CREMELLO";
		case -370362766:
			return "BREED_KLADRUBER_GREY";
		case -1698261864:
			return "BREED_KLADRUBER_DAPPLEROSEGREY";
		case -670301166:
			return "BREED_KLADRUBER_SILVER";
		case -302057902:
			return "BREED_NORFOLKROADSTER_BLACK";
		case 1257620801:
			return "BREED_NORFOLKROADSTER_SPECKLEDGREY";
		case 821735821:
			return "BREED_NORFOLKROADSTER_PIEBALDROAN";
		case -769035812:
			return "BREED_NORFOLKROADSTER_ROSEGREY";
		case -1824684932:
			return "BREED_NORFOLKROADSTER_DAPPLEDBUCKSKIN";
		case 1589592948:
			return "BREED_NORFOLKROADSTER_SPOTTEDTRICOLOR";
		case -1331210307:
			return "BREED_DONKEY";
		case 122449722:
			return "BREED_MULE";
		case -1784502482:
			return "BREED_MULE_PAINTED";
		case -1943445834:
			return "BREED_AMERICANSTANDARDBRED_LIGHTBUCKSKIN";
		case -635244104:
			return "BREED_APPALOOSA_BLACKSNOWFLAKE";
		case -1427377767:
			return "BREED_ARABIAN_GREY";
		case -2055655009:
			return "BREED_ARABIAN_REDCHESTNUT";
		case -1293672675:
			return "BREED_HUNGARIANHALFBRED_LIVERCHESTNUT";
		case -1179079660:
			return "BREED_MISSOURIFOXTROTTER_SABLECHAMPAGNE";
		case 805526368:
			return "BREED_MUSTANG_GOLDENDUN";
		case 1342496140:
			return "BREED_TENNESSEEWALKER_MAHOGANYBAY";
		case -126555855:
			return "BREED_SHIRE_RAVENBLACK";
		case 294243421:
			return "BREED_BUELL_WARVETS";
		case -997197050:
			return "BREED_JOHN_ENDLESSSUMMER";
		case -235714362:
			return "BREED_MURFREEBROOD_MANGE_01";
		case -1678164:
			return "BREED_MURFREEBROOD_MANGE_02";
		case -977833913:
			return "BREED_MURFREEBROOD_MANGE_03";
		case 1589164943:
			return "BREED_WINTER02_01";
		case -1087523615:
			return "BREED_EAGLEFLIES";
		case -496814209:
			return "BREED_GANG_BILL";
		case 2109055751:
			return "BREED_GANG_CHARLES";
		case -776673611:
			return "BREED_GANG_CHARLES_ENDLESSSUMMER";
		case 1764402253:
			return "BREED_GANG_DUTCH";
		case -1417310078:
			return "BREED_GANG_HOSEA";
		case 1096273915:
			return "BREED_GANG_JAVIER";
		case 772751081:
			return "BREED_GANG_JOHN";
		case -1140435723:
			return "BREED_GANG_KAREN";
		case 2002524329:
			return "BREED_GANG_KIERAN";
		case 1151530184:
			return "BREED_GANG_LENNY";
		case -1266525037:
			return "BREED_GANG_MICAH";
		case -2018137175:
			return "BREED_GANG_SADIE";
		case -574151692:
			return "BREED_GANG_SADIE_ENDLESSSUMMER";
		case 649786380:
			return "BREED_GANG_SEAN";
		case -1921328920:
			return "BREED_GANG_TRELAWNEY";
		case -837607790:
			return "BREED_GANG_UNCLE";
		case 370424594:
			return "BREED_GANG_UNCLE_ENDLESSSUMMER";
		case -364764277:
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "";
}

char* func_1171(int iParam0)
{
	switch (iParam0)
	{
		case -1179079660:
		case 1275638003:
		case 2083573823:
			return "HORSE_CLASS_MULTI";
		case -1597490733:
		case -1428527735:
		case 805526368:
		case 2000205872:
			return "HORSE_CLASS_MULTI";
		case -1882436593:
		case -225011104:
		case -136225010:
			return "HORSE_CLASS_MULTI";
		case -1365665739:
		case -757978903:
		case 981469777:
		case 1064693514:
		case 1592694494:
		case 1909854428:
			return "HORSE_CLASS_MULTI";
		case -1722101672:
		case -189605757:
		case 3032834:
		case 381495209:
		case 863391233:
		case 1577022605:
			return "HORSE_CLASS_MULTI";
		case -1898310680:
		case -1750687713:
		case -952011226:
		case -356470463:
		case -272192064:
		case 1935859332:
			return "HORSE_CLASS_MULTI";
		case -1698261864:
		case -1540355548:
		case -670301166:
		case -601560591:
		case -370362766:
		case 885568364:
			return "HORSE_CLASS_MULTI";
		case -1824684932:
		case -769035812:
		case -302057902:
		case 821735821:
		case 1257620801:
		case 1589592948:
			return "HORSE_CLASS_MULTI";
	}
	return "HORSE_CLASS_MULTI";
}

struct<8> func_1172(int iParam0, int iParam1, bool bParam2)
{
	StringCopy(&cVar0, "", 64);
	if (!_0xb881ca836cc4b6d4(iParam0))
	{
		return cVar0;
	}
	Var8 = { func_1811(iParam0, iParam1) };
	cVar0 = { Var8.f_12 };
	if (bParam2)
	{
		if (func_1800(iParam0, &Var32))
		{
			cVar0 = { Var32 };
		}
	}
	if (compare_strings(&cVar0, func_1801(), false, -1) == 0)
	{
		StringCopy(&cVar0, _create_var_string(2, func_1802(Var8.f_22)), 64);
	}
	if (get_length_of_literal_string(&cVar0) == 0)
	{
		if (Var8.f_22 != 0)
		{
			StringCopy(&cVar0, _create_var_string(2, func_518(Var8.f_22)), 64);
		}
		else
		{
			StringCopy(&cVar0, "", 64);
		}
	}
	return cVar0;
}

int func_1173(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = func_1812(iParam0, iParam1, 1192923488, bParam2);
	return func_1813(iVar0);
}

bool func_1174(int iParam0)
{
	switch (Global_1940311->f_1433.f_2204.f_373)
	{
		case 0:
			return (iParam0 >= 10 && iParam0 <= 14);
		default:
			break;
	}
	return false;
}

bool func_1175(int iParam0, int iParam1)
{
	if (!func_1814(iParam0, &uVar0))
	{
		return false;
	}
	bVar4 = _0x4c543d5dfcd2dafd(&uVar0, iParam1);
	if (bVar4)
	{
		return true;
	}
	return false;
}

int func_1176(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (_0x4c543d5dfcd2dafd(Global_1291734->f_581.f_107[iVar0], &uParam0))
		{
			return Global_1291734->f_581.f_107[iVar0]->f_5;
		}
		iVar0++;
	}
	return -1;
}

int func_1177(var uParam0, var uParam1, var uParam2, var uParam3)
{
	if (func_1156(&uParam0, 1686943047, 0) > 0)
	{
		return 1;
	}
	return 0;
}

int func_1178(var uParam0, int iParam1, int iParam2)
{
	iVar0 = player_id();
	iVar1 = player_ped_id();
	iVar2 = _0xb9050a97594c8832(iVar0);
	*iParam2 = 0;
	if (func_419())
	{
		*iParam2 = 7;
		return 0;
	}
	if (func_1815(iVar0))
	{
		*iParam2 = 6;
		return 0;
	}
	if (func_1816() || (func_1807() && !func_756(76)))
	{
		*iParam2 = 1;
		return 0;
	}
	if (func_1817() != 1)
	{
		*iParam2 = 2;
		return 0;
	}
	if (func_1818() != 1)
	{
		*iParam2 = 2;
		return 0;
	}
	if (does_entity_exist(iVar2))
	{
		if ((is_ped_on_specific_vehicle(iVar1, iVar2) || get_vehicle_ped_is_entering(iVar1) == iVar2) || get_vehicle_ped_is_using(iVar1) == iVar2)
		{
			*iParam2 = 3;
			return 0;
		}
	}
	if (does_entity_exist(iVar2))
	{
		if (get_entity_model(iVar2) == -1772561076)
		{
			if (func_1819(iVar2) && !_0x4c543d5dfcd2dafd(uParam0, iParam1))
			{
				*iParam2 = 4;
				return 0;
			}
		}
	}
	return 1;
}

int func_1179(var uParam0, int iParam1, int iParam2)
{
	*iParam2 = 0;
	if (func_1817() != 1)
	{
		*iParam2 = 2;
		return 0;
	}
	if (func_1818() != 1)
	{
		*iParam2 = 2;
		return 0;
	}
	iVar0 = player_id();
	iVar1 = player_ped_id();
	iVar2 = _0xf49f14462f0ae27c(iVar0);
	if (does_entity_exist(iVar2))
	{
		*iParam2 = 0;
		return 0;
	}
	if (func_419())
	{
		*iParam2 = 0;
		return 0;
	}
	iVar3 = _0xb9050a97594c8832(iVar0);
	if (!does_entity_exist(iVar3))
	{
		*iParam2 = 0;
		return 0;
	}
	if ((is_ped_on_specific_vehicle(iVar1, iVar3) || get_vehicle_ped_is_entering(iVar1) == iVar3) || get_vehicle_ped_is_using(iVar1) == iVar3)
	{
		*iParam2 = 3;
		return 0;
	}
	if (does_entity_exist(iVar3))
	{
		if ((get_entity_model(iVar3) == -1772561076 && func_1819(iVar3)) && _0x4c543d5dfcd2dafd(uParam0, iParam1))
		{
			*iParam2 = 4;
			return 0;
		}
	}
	return 1;
}

int func_1180(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	if (bParam1)
	{
		return 4;
	}
	if (bParam0)
	{
		return 3;
	}
	if (bParam3)
	{
		return 0;
	}
	if (bParam2)
	{
		return 1;
	}
	return 2;
}

bool func_1181(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	iVar1 = func_1187(iParam0, iParam1, &iVar0, bParam2, bParam3);
	if (func_1188(iVar1, iVar0))
	{
		return true;
	}
	func_141();
	return false;
}

void func_1182(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	bVar0 = false;
	if (bParam2 || bParam3)
	{
		bVar0 = true;
	}
	iVar1 = func_1820(iParam1);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_1, bVar0);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_21, -437533031);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_22, 1012165077);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_20, false);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_27, true);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_7, iVar1);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_8, 27564616);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_9, bParam2);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_10, true);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_13, 908022114);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_14, 1380006198);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_15, bParam3);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_16, true);
}

void func_1183(int iParam0, int iParam1, bool bParam2)
{
	bVar0 = func_1807();
	bVar1 = false;
	if (bVar0)
	{
		bVar1 = func_756(76);
	}
	bVar2 = true;
	if (!bParam2 || (bVar0 && !bVar1))
	{
		bVar2 = false;
	}
	iVar3 = func_1820(iParam1);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_1, bParam2);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_21, 672378911);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_22, -1236452613);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_20, false);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_27, false);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_7, iVar3);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_8, 27564616);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_9, bVar2);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_10, true);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_13, 908022114);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_14, 1380006198);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_15, false);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_16, false);
}

void func_1184(int iParam0, int iParam1, bool bParam2)
{
	bVar0 = func_1807();
	bVar1 = false;
	if (bVar0)
	{
		bVar1 = func_756(76);
	}
	bVar2 = true;
	if (!bParam2 || (bVar0 && !bVar1))
	{
		bVar2 = false;
	}
	iVar3 = func_1820(iParam1);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_1, bParam2);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_21, 672378911);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_22, -1236452613);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_20, false);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_27, false);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_6, iVar3);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_7, iVar3);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_8, 27564616);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_9, bVar2);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_10, true);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_13, 908022114);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_14, 1380006198);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_15, false);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_16, false);
}

void func_1185(int iParam0, bool bParam1)
{
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_1, true);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_21, 672378911);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_22, -1236452613);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_20, !bParam1);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_27, false);
	_databinding_write_data_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_19, _create_var_string(2, "CASH_STRING", func_388(852655472, 0, 59806960)));
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_7, -1997447231);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_8, 726532808);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_9, true);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_10, true);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_13, 908022114);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_14, 1380006198);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_15, false);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_16, false);
}

void func_1186(int iParam0, int iParam1)
{
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_1, false);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_21, 672378911);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_22, -1236452613);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_20, true);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_27, false);
	_databinding_write_data_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_19, func_1808((iParam1 - Global_1296859->f_21) * 1000, 0));
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_7, 1191420897);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_8, 27564616);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_9, false);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_10, false);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_13, 908022114);
	_databinding_write_data_hash_string(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_14, 1380006198);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_15, false);
	_databinding_write_data_bool(Global_1940311->f_1433.f_2204.f_3[iParam0]->f_16, false);
}

int func_1187(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	*iParam2 = 0;
	if (!bParam3 && !bParam4)
	{
		return 0;
	}
	if (!bParam3)
	{
		*iParam2 = 2;
		return iParam1;
	}
	if (!bParam4)
	{
		*iParam2 = 1;
		return iParam0;
	}
	if (iParam0 >= iParam1)
	{
		*iParam2 = 1;
		return iParam0;
	}
	*iParam2 = 2;
	return iParam1;
}

bool func_1188(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	switch (iParam0)
	{
		case 1:
			switch (iParam1)
			{
				case 1:
					func_70(_create_var_string(2, "VEHICLE_DISABLE_CALLING_DISABLED"), 1105014447);
					break;
				case 2:
					return false;
			}
			break;
		case 2:
			switch (iParam1)
			{
				case 1:
					func_70(_create_var_string(2, "VEHICLE_DISABLE_BUSY_CALL"), 1105014447);
					break;
				case 2:
					func_70(_create_var_string(2, "VEHICLE_DISABLE_BUSY_DISMISS"), 1105014447);
					break;
			}
			break;
		case 3:
			switch (iParam1)
			{
				case 1:
					func_70(_create_var_string(2, "VEHICLE_DISABLE_ON_IT_CALL"), 1105014447);
					break;
				case 2:
					func_70(_create_var_string(2, "VEHICLE_DISABLE_ON_IT_DISMISS"), 1105014447);
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case 1:
					func_70(_create_var_string(2, "VEHICLE_DISABLE_SUMMON_CALL"), 1105014447);
					break;
				case 2:
					return false;
			}
			break;
		case 4:
			switch (iParam1)
			{
				case 1:
					func_70(_create_var_string(2, "VEHICLE_DISABLE_BOUNTYP_CALL"), 1105014447);
					break;
				case 2:
					func_70(_create_var_string(2, "VEHICLE_DISABLE_BOUNTYP_DISMISS"), 1105014447);
					break;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case 1:
					func_70(_create_var_string(2, "VEHICLE_DISABLE_MOUNT_CALL"), 1105014447);
					break;
				case 2:
					return false;
			}
			break;
		case 7:
			switch (iParam1)
			{
				case 1:
					func_70(_create_var_string(2, "VEHICLE_DISABLE_PLAYER_ANIMAL"), 1105014447);
					break;
				case 2:
					return false;
			}
			break;
	}
	return true;
}

int func_1189(int iParam0)
{
	switch (iParam0)
	{
		case 4:
			return 1082007132;
		case 7:
			return -1321348724;
		default:
			break;
	}
	return 0;
}

bool func_1190(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 == 0)
	{
		return true;
	}
	return _network_is_money_balance_not_less_than(iParam0, 0);
}

int func_1191(vector3 vParam0)
{
	if (!func_1821(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = -265879762;
	Var0.f_3 = 0;
	uVar5 = _datafile_get_num_nodes(&Var0);
	return uVar5;
}

int func_1192(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	if (!func_1821(&Var2, vParam1))
	{
		return 0;
	}
	Var2.f_2 = -265879762;
	Var2.f_3 = iParam0;
	if (_datafile_get_data_node_index(&(Var2.f_1), &Var2))
	{
		Var2.f_2 = 536676462;
		if (_datafile_get_int(&iVar1, &Var2))
		{
			iVar0 = iVar1;
		}
	}
	if (iVar0 == 0)
	{
	}
	return iVar0;
}

bool func_1193(var uParam0)
{
	if (func_600(32) && func_1822(uParam0->f_2))
	{
		return false;
	}
	if (*uParam0 > 4)
	{
		return true;
	}
	return false;
}

bool func_1194(vector3 vParam0, int iParam3, int iParam4, int iParam5)
{
	if (vParam0.z == 0)
	{
		return false;
	}
	if (!func_1823(vParam0, &vVar0))
	{
		return false;
	}
	if (func_1824(vParam0, iParam3, vVar0, iParam4, 1, 0, iParam5))
	{
		return true;
	}
	return false;
}

bool func_1195(int iParam0, var uParam1, int iParam2, int iParam3, int iParam4, int iParam5)
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

int func_1196(int iParam0)
{
	switch (iParam0)
	{
		case 1433048902:
			return 2;
		case -1602657245:
			return 4;
		case -1991037110:
			return 5;
		case 1047281747:
			return 6;
		case -398744080:
			return 7;
		case -1066874997:
			return 8;
		case -2085219828:
			return 11;
		case 2064962445:
			return 12;
		case -1620920647:
			return 15;
		case -1664530975:
			return 16;
		case -597058368:
			return 21;
		case 128702355:
			return 24;
		case -2051332199:
			return 27;
		case 546981776:
			return 28;
		case -2013384490:
			return 29;
		case 228922461:
			return 30;
		case -746674788:
			return 32;
		case 599861917:
			return 34;
		case -1781387050:
			return 35;
		case 2006811763:
			return 38;
		case -90546043:
			return 39;
		case 1216456215:
			return 49;
		case 746300881:
			return 50;
		case -435006002:
			return 51;
		case -624139784:
			return 52;
		case -529638012:
			return 53;
		case 1338475089:
			return 40;
		case 2605459:
			return 41;
		case 1071702353:
			return 42;
		case -1183422860:
			return 43;
		case -1957546791:
			return 44;
		case -589542533:
			return 45;
		case -1776738559:
			return 46;
		case 1602215994:
			return 47;
		case -396757268:
			return 48;
	}
	return 0;
}

bool func_1197(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 9:
		case 10:
		case 14:
		case 17:
		case 22:
		case 23:
		case 25:
		case 26:
		case 31:
		case 33:
		case 36:
		case 37:
			return true;
		default:
			return false;
	}
	return false;
}

bool func_1198(int iParam0)
{
	switch (iParam0)
	{
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
			return true;
	}
	return false;
}

bool func_1199(int iParam0)
{
	if (!func_1825(iParam0))
	{
		return false;
	}
	return func_1826(iParam0, 4, 1);
}

int func_1200(int iParam0)
{
	if (!func_586(iParam0, 0))
	{
		return 0;
	}
	return _0xa4550fe9c512e3dd(iParam0);
}

bool func_1201(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return Global_1293165[iParam0] == iParam0;
}

int func_1202(int iParam0, int iParam1, int iParam2)
{
	if (!func_586(iParam0, 0))
	{
		return 0;
	}
	if (func_1827(iParam0, 1) && !func_1828(iParam0, 1))
	{
		return 0;
	}
	if (iParam2 && func_1288(iParam0, &iVar0))
	{
		if (func_1289(iVar0, 997808187, 0) && !func_1290(iVar0, 997808187))
		{
			return 1;
		}
		else if (func_1289(iVar0, -570078785, 0))
		{
			return func_1829(iVar0, -570078785, &uVar1, 1, 0);
		}
	}
	else
	{
		if (iParam1 == 0)
		{
			iVar3 = func_612(iParam0, iVar3, 1, -1, 1);
		}
		else
		{
			iVar3 = iParam1;
		}
		if (iVar3 == 0)
		{
			return 0;
		}
		iVar7 = func_613(iParam0, iVar3, 0, 1, 1);
		if (iVar3 == -570078785)
		{
			return func_616(iVar7);
		}
		else if (iVar3 == -915411861)
		{
			return func_537(iVar7);
		}
		else if (iVar3 == 997808187)
		{
			return 1;
		}
		else
		{
			return func_1830(iParam0, 1, iVar3, &uVar5, &uVar4, 1, 0, 0);
		}
	}
	return 0;
}

int func_1203(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return 1531758713;
		case 2:
			return 1111531686;
		case 3:
			return 2020859843;
		case 4:
			return -1620727213;
		case 5:
			return 2039881012;
		case 6:
			return -1429661529;
		case 7:
			return -540128588;
		case 8:
			return -1224238785;
		case 9:
			return 1485653341;
		case 10:
			return 1437644330;
		case 11:
			return 1511892115;
		case 12:
			return 876516058;
		case 13:
			return -1676572483;
		case 14:
			return 1995067205;
		case 15:
			return 1155770894;
		default:
			break;
	}
	return 0;
}

int func_1204()
{
	return Global_1960073->f_72;
}

void func_1205(int iParam0)
{
	Global_1960073->f_72 = iParam0;
}

void func_1206(int iParam0)
{
	func_1387(&(Global_1572887->f_405.f_1), func_1831(iParam0), 3);
}

void func_1207()
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 33)
	{
		if (func_1832(iVar0))
		{
		}
		iVar0++;
	}
	if (Global_1572887->f_405.f_5 != -1)
	{
	}
	if (Global_1572887->f_405.f_6 != -1)
	{
	}
	if (Global_1572887->f_405.f_7 != -1)
	{
	}
	if (Global_1572887->f_405.f_8 != -1)
	{
	}
	if (Global_1572887->f_405.f_9 != -1)
	{
	}
	if (Global_1572887->f_405.f_11 != 0)
	{
	}
}

struct<2> func_1208(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = { func_1260(iParam0, 2) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1260(iParam0, 7) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1260(iParam0, 5) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1260(iParam0, 6) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1260(iParam0, 8) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1260(iParam0, 3) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	Var0 = { func_1260(iParam0, 4) };
	if (Var0.f_1 >= 0)
	{
		return Var0;
	}
	return func_162();
}

int func_1209(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_1804(Global_1196898->f_78[iVar0]->f_7, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1210(int iParam0, int iParam1)
{
	func_577(&(Global_1196898->f_78[iParam0]->f_6), iParam1);
}

bool func_1211(int iParam0, struct<2> Param1, int iParam3)
{
	if (func_1159(Param1, 0, 128))
	{
		return false;
	}
	func_1833(iParam0, Param1);
	if (iParam0 == -1)
	{
		return false;
	}
	if (Global_1196898->f_78[iParam0]->f_3 == -1)
	{
		return false;
	}
	if (func_1834(iParam0, 32))
	{
		return true;
	}
	if (!func_1112(Param1))
	{
		return false;
	}
	else if (!func_1835(Param1))
	{
		return false;
	}
	else if (func_1331(Param1))
	{
		return false;
	}
	Var0 = { func_1111() };
	if (func_1112(Var0) && !func_1804(Var0, Param1))
	{
		if (func_1836())
		{
			func_1210(iParam0, 262144);
			func_1837(1);
		}
		else
		{
			return false;
		}
	}
	func_1838(Param1, 1, 1, 1);
	func_1839(Param1, 1, 0, -1);
	func_1840(2);
	func_1841(Global_1196898->f_78[iParam0]->f_3, iParam3);
	func_1210(iParam0, 32);
	func_1842(7);
	if (func_1120(Global_1196898->f_78[iParam0]->f_3) != -785841056)
	{
		func_1843();
		_0x7d654266025e921b(1638906956);
	}
	else
	{
		_0x7d654266025e921b(784116709);
		_0xe5a680a5d8b1f687(1);
	}
	return true;
}

int func_1212(int iParam0)
{
	return Global_1196898->f_78[iParam0]->f_3;
}

int func_1213(int iParam0)
{
	switch (iParam0)
	{
		case 18:
			return 7;
		case 15:
			return 10;
		case 16:
			return 8;
		case 17:
			return 9;
		default:
			break;
	}
	return -1;
}

bool func_1214(int iParam0)
{
	return Global_1108365->f_935.f_28 == iParam0;
}

void func_1215(int iParam0)
{
	if (Global_1108365->f_935.f_28 != iParam0)
	{
		Global_1108365->f_935.f_28 = iParam0;
	}
}

int func_1216(int iParam0, struct<2> Param1, int iParam3)
{
	switch (iParam0)
	{
		case 4:
		case 5:
		case 6:
		case 7:
			break;
		default:
			return 0;
	}
	func_599(iParam0, Param1, iParam3);
	return 1;
}

bool func_1217(int iParam0)
{
	if (func_833(func_832(0)) == 5)
	{
		return false;
	}
	if (func_833(func_832(0)) == 3)
	{
		if (!func_1836())
		{
			return false;
		}
	}
	if (func_833(func_832(0)) == 4)
	{
		return false;
	}
	if (func_627())
	{
		return false;
	}
	if (func_831())
	{
		return false;
	}
	if (!network_is_player_active(player_id()))
	{
		return false;
	}
	if ((&Global_1108365->f_935.f_5[iParam0] - Global_1296859->f_21) < 180 && func_1844(iParam0, _0x424b17a7dc5c90bc(player_id())))
	{
		return false;
	}
	if (iParam0 == 3 && !_0x424b17a7dc5c90bc(player_id()))
	{
		return false;
	}
	return true;
}

int func_1218(int iParam0)
{
	iVar0 = iParam0;
	if (!func_1845(iVar0))
	{
		return -1;
	}
	return iVar0;
}

struct<2> func_1219(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	iVar1 = iParam1;
	if (((iVar0 < 0 || iVar0 >= 7) || iVar1 < 0) || iVar1 >= 16)
	{
		return func_162();
	}
	return func_1260(Global_1108365->f_814.f_1[iParam0][iParam1], 3);
}

void func_1220(float fParam0, int iParam1, bool bParam2)
{
	iVar0 = 0;
	bVar1 = false;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (!network_is_player_connected(iVar2) || !network_is_player_active(iVar2))
		{
		}
		else if (_0x901e0dc25080c8b9(iVar2) != iParam1)
		{
		}
		else if (bParam2)
		{
			if (!_0x424b17a7dc5c90bc(iVar2))
			{
			}
			else
			{
				bVar1 = true;
				_0x31010318ba9897ac(fParam0, iVar2);
			}
			iVar0++;
			if (!bVar1)
			{
				_0xde544b7ec0c187cc(fParam0);
			}
		}
	}
}

bool func_1221(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return false;
	}
	if (_0x149a2751ab66ac02(iParam0) == 0)
	{
		return false;
	}
	return true;
}

void func_1222(struct<2> Param0, vector3 vParam2, float fParam5, int iParam6, int iParam7, float fParam8, struct<19> Param9)
{
	if (!_0x179a6f0ee2e79026(&fParam8))
	{
		return;
	}
	Var0.f_12 = -1;
	Var0.f_12.f_1 = -1;
	Var0.f_14 = 255;
	Var0.f_15 = 255;
	Var0.f_19 = -1;
	Var0.f_19.f_1 = -1;
	Var0 = { Param9 };
	Var0.f_19 = { Param0 };
	Var0.f_21 = { vParam2 };
	Var0.f_24 = fParam5;
	Var0.f_26 = iParam7;
	Var0.f_25 = iParam6;
	Var0.f_1 = get_player_index();
	Var0.f_2 = get_network_time_accurate();
	trigger_script_event(1, &Var0, 27, 38, &fParam8);
}

void func_1223(struct<19> Param0, float fParam19, bool bParam20, bool bParam21)
{
	if (!_0x179a6f0ee2e79026(&fParam19))
	{
		return;
	}
	Param0 = 0;
	Param0.f_1 = player_id();
	Param0.f_2 = get_network_time_accurate();
	if (!bParam20)
	{
		if (Param0.f_18)
		{
			if (bParam21)
			{
				Var0.f_12 = -1;
				Var0.f_12.f_1 = -1;
				Var0.f_14 = 255;
				Var0.f_15 = 255;
				Var0.f_20 = -1;
				Var0 = { Param0 };
				Var0.f_19 = fParam19;
				Var0.f_20 = Param0.f_2;
				func_1846(&(Global_1071686->f_23044), Var0);
				return;
			}
		}
	}
	trigger_script_event(1, &Param0, 19, 6, &fParam19);
}

void func_1224(int iParam0, float fParam1)
{
	func_1847(fParam1, 1);
}

void func_1225(var uParam0, float fParam1)
{
	*uParam0 = 29;
	trigger_script_event(1, uParam0, 14, 39, fParam1);
}

bool func_1226(int iParam0)
{
	if ((*Global_1288736)[network_player_id_to_int()]->f_66)
	{
		return false;
	}
	if (&Global_1108365->f_34.f_353[iParam0])
	{
		return false;
	}
	if (func_627())
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_connected(iParam0))
	{
		return false;
	}
	if (_0x81fb74c83c2ed69f(iParam0))
	{
		return false;
	}
	return true;
}

void func_1227(float fParam0, int iParam1)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (!network_is_player_connected(iVar1) || !network_is_player_active(iVar1))
		{
		}
		else if (_0x901e0dc25080c8b9(iVar1) != iParam1)
		{
		}
		else
		{
			_0x31010318ba9897ac(fParam0, iVar1);
		}
		iVar0++;
	}
}

void func_1228(var uParam0, float fParam1)
{
	*uParam0 = 28;
	uParam0->f_1 = player_id();
	trigger_script_event(1, uParam0, 9, 10, fParam1);
}

void func_1229(var uParam0, int iParam1)
{
	func_1098(uParam0, iParam1);
}

void func_1230(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		clear_bit(&(Global_1108365->f_34[iParam0]->f_5), iVar0);
		iVar0++;
	}
}

void func_1231(int iParam0)
{
	if (func_1848(iParam0))
	{
	}
	else if (func_1849(iParam0))
	{
	}
	func_1850(iParam0);
}

void func_1232(int iParam0)
{
	if (func_1851(iParam0))
	{
	}
	else if (func_1852(iParam0))
	{
	}
	else if (func_1853(iParam0))
	{
	}
	func_1850(iParam0);
}

bool func_1233(int iParam0)
{
	return _0x72b2e00c9bac6789(&(Global_1237665->f_573), iParam0);
}

Vector3 func_1234(int iParam0)
{
	return get_entity_coords(get_player_ped(iParam0), false, false);
}

int func_1235(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 13)
	{
		if (func_1854(iVar0, 32, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1236(var uParam0, int iParam1, int iParam2)
{
	*uParam0 = int_to_playerindex(iParam2);
	iVar0 = 0;
	if (iParam1 != -1)
	{
		iVar0 = func_1855(iParam1);
	}
	Var1 = { func_573(*uParam0) };
	_0x4ef23e04a0c8ff51(&Var1, &iVar8);
	uParam0->f_1 = floor(((((to_float((32 - iVar0)) / to_float(32)) * 10f) + ((func_414(*uParam0, 0) / IntToFloat(Global_1901947->f_716.f_28)) * 5f)) + (IntToFloat(iVar8) * 2.5f)));
}

int func_1237(int iParam0, int iParam1)
{
	return (iParam0 + func_1856((iParam1 - iParam0)));
}

void func_1238(int iParam0)
{
	func_571(iParam0, 0);
	(*Global_1238240)[network_player_id_to_int()]->f_300.f_1 = iParam0;
}

bool func_1239(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	if (!func_1488(8))
	{
		if (func_1857(0) == 3)
		{
			func_1858(8);
		}
	}
	func_1859(iParam0);
	func_1860(3);
	if (Global_1298378->f_29.f_3 > 0)
	{
		Global_1298378->f_29.f_3 = 0;
	}
	func_1861();
	return true;
}

void func_1240(int iParam0)
{
	uVar0 = _0x27b1ae4d8c652f08(iParam0);
	StringCopy(&(Var1.f_7), _0xe59f4924bd3a718d(uVar0), 64);
	_0x16efb123c4451032(uVar0, &Var1);
	StringCopy(&(Var1.f_17), _0xe79ba3bc265895da(uVar0), 24);
	Var1.f_15 = iParam0;
	Var1.f_21 = _0x5ed39da62beb1330(uVar0);
	func_677(&Var1);
}

void func_1241(var uParam0)
{
}

void func_1242(int iParam0)
{
	Global_1940311->f_242.f_1186 = iParam0;
	_databinding_write_data_string(Global_1940311->f_242.f_6, _0x2b6846401d68e563(to_float(Global_1940311->f_242.f_1186), 0));
}

struct<35> func_1243(int iParam0)
{
	Var0.f_8 = -1;
	Var0.f_8.f_1 = -1;
	Var0.f_16.f_12 = -1;
	Var0.f_16.f_12.f_1 = -1;
	Var0.f_16.f_14 = 255;
	Var0.f_16.f_15 = 255;
	if (Global_1071686->f_16 > 0)
	{
		return *Global_1071686->f_16.f_5[iParam0];
	}
	return Var0;
}

int func_1244(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1862(Param0, &vVar0))
	{
		return vVar0.y;
	}
	return -1;
}

void func_1245(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return;
	}
	if (_0x149a2751ab66ac02(iParam0) == 0)
	{
		return;
	}
	Var0.f_9 = 255;
	Var0.f_10 = 255;
	Var0.f_11 = 255;
	Var0 = 30;
	Var0.f_6 = 2;
	Var0.f_9 = _0x4be6c13a45cca8ec(iParam0);
	Var0.f_10 = player_id();
	Var0.f_7 = iParam0;
	Var0.f_8 = _0x901e0dc25080c8b9(player_id());
	func_1246(&Var0);
}

void func_1246(var uParam0)
{
	fVar0 = func_432(0, 8);
	if (!_0x179a6f0ee2e79026(&fVar0))
	{
		return;
	}
	trigger_script_event(1, uParam0, 12, 41, &fVar0);
}

void func_1247(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

bool func_1248(int iParam0, var uParam1)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (uParam1[iVar0] == 0)
		{
			return false;
		}
		if (uParam1[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1249(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (&uParam0->f_2[iVar0] != 0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1250(var uParam0, var uParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7, char[4] cParam8, char[4] cParam9, struct<16> Param10)
{
	*uParam0 = _databinding_add_data_container(uParam1, &cParam2);
	uParam0->f_1 = _databinding_add_data_bool(*uParam0, func_58(0), Param10);
	uParam0->f_2 = _databinding_add_data_bool(*uParam0, func_58(1), Param10.f_1);
	uParam0->f_3 = _databinding_add_data_hash(*uParam0, func_58(2), Param10.f_2);
	uParam0->f_4 = _databinding_add_data_hash(*uParam0, func_58(54), Param10.f_3);
	uParam0->f_5 = _databinding_add_data_hash(*uParam0, func_58(55), Param10.f_4);
	uParam0->f_7 = _databinding_add_data_hash(*uParam0, func_58(57), Param10.f_5);
	uParam0->f_6 = _databinding_add_data_hash(*uParam0, func_58(56), Param10.f_6);
	if (Param10.f_7 == 0)
	{
		Param10.f_7 = -672301300;
	}
	uParam0->f_8 = _databinding_add_data_hash(*uParam0, func_58(58), Param10.f_7);
	uParam0->f_9 = _databinding_add_data_bool(*uParam0, func_58(59), Param10.f_8);
	uParam0->f_10 = _databinding_add_data_bool(*uParam0, func_58(60), Param10.f_9);
	uParam0->f_11 = _databinding_add_data_hash(*uParam0, func_58(61), Param10.f_10);
	uParam0->f_13 = _databinding_add_data_hash(*uParam0, func_58(67), Param10.f_11);
	uParam0->f_12 = _databinding_add_data_hash(*uParam0, func_58(62), Param10.f_12);
	if (Param10.f_13 == 0)
	{
		Param10.f_13 = -672301300;
	}
	uParam0->f_14 = _databinding_add_data_hash(*uParam0, func_58(64), Param10.f_13);
	uParam0->f_15 = _databinding_add_data_bool(*uParam0, func_58(65), Param10.f_14);
	uParam0->f_16 = _databinding_add_data_bool(*uParam0, func_58(66), Param10.f_15);
}

bool func_1251(var uParam0, var uParam1, bool bParam2, int iParam3, int iParam4, bool bParam5, bool bParam6, int iParam7)
{
	return func_1863(&uParam0, iParam4, bParam5, bParam6, iParam7);
}

int func_1252(int iParam0)
{
	switch (iParam0)
	{
		case 1473261684:
			return 0;
		case -268116367:
			return 1;
		case -6796437:
			return 2;
		case -241855024:
			return 3;
		default:
			break;
	}
	return 4;
}

bool func_1253(var uParam0, int iParam1)
{
	if (iParam1 < 0 || iParam1 > (4 - 1))
	{
		return false;
	}
	if (func_1864(uParam0->f_8[iParam1]->f_5))
	{
		return true;
	}
	return false;
}

int func_1254(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = -1;
	if (!_0xb881ca836cc4b6d4(iParam0))
	{
		return iVar0;
	}
	Var1.f_9 = -1591664384;
	if (!func_1251(*iParam0, &Var1, 1, 0, -1))
	{
		return iVar0;
	}
	if (Var1.f_10 == iParam1)
	{
		return iVar0;
	}
	if (Var1.f_13)
	{
		return iVar0;
	}
	iVar15 = func_1050(Var1.f_4);
	if (iVar15 == -1784221369)
	{
		Var16 = { func_1865(*iParam0, 1, 0) };
		Var16.f_10 = iParam1;
		iVar0 = func_1866(-1230526146, &Var16, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -2072933068)
	{
		Var44 = { func_1867(*iParam0, 1, 0) };
		Var44.f_10 = iParam1;
		iVar0 = func_1868(-1230526146, &Var44, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else if (iVar15 == -1037537535)
	{
		Var69 = { func_1869(*iParam0, 1, 0) };
		Var69.f_10 = iParam1;
		iVar0 = func_1870(-1230526146, &Var69, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	else
	{
		Var86 = { func_1871(&Var1, 0) };
		Var86.f_10 = iParam1;
		iVar0 = func_1392(-1230526146, &Var86, bParam2);
		if (iVar0 == -1)
		{
			return iVar0;
		}
	}
	return iVar0;
}

int func_1255(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 > (4 - 1))
	{
		return 0;
	}
	func_611(&(uParam0->f_7), 256);
	uParam0->f_8[iParam1]->f_5 = iParam2;
	return 0;
}

int func_1256(var uParam0, int iParam1, int iParam2)
{
	if (!func_586(iParam2, 0))
	{
		return 0;
	}
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		return 0;
	}
	(*uParam0)[iVar0]->f_2[uParam0[iVar0]] = iParam2;
	func_1872((*uParam0)[iVar0]);
	_0x2c24af8eeeef8a55(func_1873(func_832(0)), func_1721(iVar0), iParam2);
	return 1;
}

void func_1257(var uParam0)
{
	func_1872(uParam0);
}

void func_1258(var uParam0, var uParam1, char[32] cParam2, struct<27> Param10)
{
	func_1250(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = _databinding_add_data_string(*uParam0, func_58(15), &(Param10.f_16));
	uParam0->f_19 = _databinding_add_data_hash(*uParam0, func_58(21), Param10.f_24);
	uParam0->f_20 = _databinding_add_data_hash(*uParam0, func_58(22), Param10.f_25);
	uParam0->f_21 = _databinding_add_data_bool(*uParam0, func_58(23), Param10.f_26);
}

char* func_1259(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MP_Style_Default";
		case 1:
			return "MP_Style_Casual";
		case 2:
			return "MP_Style_Crazy";
		case 3:
			return "MP_Style_Flamboyant";
		case 4:
			return "MP_Style_Gunslinger";
		case 5:
			return "MP_Style_Refined";
		case 6:
			return "MP_Style_SilentType";
		case 7:
			return "MP_Style_Greenhorn";
		case 8:
			return "MP_Style_Veteran";
		case 9:
			return "MP_Style_EasyRider";
		case 10:
			return "MP_Style_Drunk";
		case 11:
			return "MP_Style_Inquisitive";
		default:
			break;
	}
	return "MP_Style_Casual";
}

struct<2> func_1260(int iParam0, int iParam1)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0 = iParam1;
	switch (iParam1)
	{
		case 2:
			Var0.f_1 = func_1874(iParam0, &(Global_1071686->f_636), func_1777(iParam1));
			break;
		case 3:
			Var0.f_1 = func_1874(iParam0, &(Global_1071686->f_636.f_602), func_1777(iParam1));
			break;
		case 4:
			Var0.f_1 = func_1874(iParam0, &(Global_1071686->f_636.f_2104), func_1777(iParam1));
			break;
		case 5:
			Var0.f_1 = func_1874(iParam0, &(Global_1071686->f_636.f_12606), func_1777(iParam1));
			break;
		case 6:
			Var0.f_1 = func_1874(iParam0, &(Global_1071686->f_636.f_12908), func_1777(iParam1));
			break;
		case 7:
			Var0.f_1 = func_1874(iParam0, &(Global_1071686->f_636.f_15910), func_1777(iParam1));
			break;
		case 8:
			Var0.f_1 = func_1874(iParam0, &(Global_1071686->f_636.f_16512), func_1777(iParam1));
			break;
	}
	if (Var0.f_1 < 0)
	{
		return func_162();
	}
	return Var0;
}

int func_1261(int iParam0)
{
	switch (iParam0)
	{
		case 7:
			return 18;
		case 10:
			return 15;
		case 8:
			return 16;
		case 9:
			return 17;
		default:
			break;
	}
	return -1;
}

int func_1262(int iParam0, vector3 vParam1)
{
	iVar0 = 0;
	if (func_1875(&Var1, iParam0) && func_1876(&Var1))
	{
		iVar11 = _datafile_get_num_children(Var1, Var1.f_1);
		fVar18 = 999999.9f;
		iVar23 = 0;
		while (iVar23 <= (iVar11 - 1))
		{
			Var6 = { Var1 };
			if (func_1877(&Var6, iVar23))
			{
				iVar20 = 0;
				func_1878(Var6, -1378896287, &iVar20, 1);
				if (func_1879(iParam0, iVar20) == -1 && func_1790(iParam0, iVar20) == 0)
				{
					func_1880(Var6, 2060397848, &vVar12, 1);
					if (func_713(vVar12))
					{
						fVar16 = 0f;
					}
					else
					{
						fVar16 = vdist(vParam1, vVar12);
					}
					fVar15 = func_1881(iParam0, iVar20);
					fVar17 = 0f;
					if (fVar16 > fVar15)
					{
						fVar17 = (fVar17 + ((fVar16 - fVar15) * 0.01f));
					}
					uVar19 = func_1099(vVar12, 0f, 0f, 0f, fVar15, fVar15, fVar15, -432403087, 1, 8);
					iVar21 = 0;
					while (iVar21 <= 31)
					{
						if (_0x72b2e00c9bac6789(&uVar19, iVar21))
						{
							iVar22 = int_to_playerindex(iVar21);
							if (network_is_player_active(iVar22) && !_0x9be7dcb22d32ccbe(_0x901e0dc25080c8b9(player_id()), iVar22))
							{
								fVar17 = (fVar17 + 1f);
							}
						}
						iVar21++;
					}
					if (fVar17 < fVar18)
					{
						fVar18 = fVar17;
						iVar0 = iVar20;
					}
				}
			}
			iVar23++;
		}
	}
	return iVar0;
}

int func_1263(int iParam0, int iParam1)
{
	iVar0 = 0;
	if (((func_1875(&Var1, iParam0) && func_1876(&Var1)) && func_1882(&Var1, iParam1)) && func_1883(&Var1))
	{
		iVar6 = _datafile_get_num_children(Var1, Var1.f_1);
		iVar7 = (get_random_int_in_range(0, 65536) % iVar6);
		if (func_1884(&Var1, iVar7))
		{
			func_1878(Var1, -1378896287, &iVar0, 1);
		}
	}
	return iVar0;
}

struct<2> func_1264(int iParam0, int iParam1, int iParam2)
{
	if ((((func_1875(&Var0, iParam0) && func_1876(&Var0)) && func_1882(&Var0, iParam1)) && func_1883(&Var0)) && func_1885(&Var0, iParam2))
	{
		func_1878(Var0, -605149915, &uVar5, 1);
		if (func_1886(6, uVar5, &Var6))
		{
			return func_1260(Var6.f_3, 6);
		}
	}
	return func_162();
}

int func_1265(int iParam0, int iParam1, int iParam2, int iParam3)
{
	iVar0 = get_random_int_in_range(1, 65536);
	if (func_1887() == player_id())
	{
		func_1888(iParam0, player_id(), iParam1, iParam2, iVar0, iParam3);
	}
	else
	{
		Var1.f_5 = -1;
		Var1.f_9 = -1;
		Var1.f_10 = -1;
		Var1.f_11.f_1 = -1;
		Var1.f_11.f_5 = -1;
		Var1.f_11.f_5.f_1 = -1;
		Var1.f_11.f_7 = 255;
		Var1.f_4 = 1;
		Var1.f_5 = iParam0;
		Var1.f_6 = iParam1;
		Var1.f_7 = iParam2;
		Var1.f_8 = iVar0;
		Var1.f_46 = iParam3;
		func_1889(&Var1, func_432(0, 8));
	}
	return 1;
}

int func_1266(int iParam0)
{
	return &(Global_1109340->f_193[iParam0]);
}

void func_1267(int iParam0)
{
	Global_1109340->f_193[&Global_1296859] = iParam0;
	func_1890(&(Global_1108365->f_935.f_30));
}

bool func_1268()
{
	bVar0 = (((Global_1132288->f_2019 == 2 || (Global_1132288->f_2019 >= 6 && Global_1132288->f_2019 <= 11)) || Global_1132288->f_2019 == 12) || (Global_1132288->f_2019 >= 13 && Global_1132288->f_2019 <= 19));
	return bVar0;
}

bool func_1269(int iParam0, int iParam1)
{
	iVar0 = _0x901e0dc25080c8b9(player_id());
	vVar1 = { func_1891(func_1483(iVar0)) };
	return (vVar1.y == iParam0 && iParam1 == vVar1.x);
}

bool func_1270()
{
	return Global_1132288->f_2027.f_7 == 3;
}

void func_1271(int iParam0)
{
	func_577(&((*Global_1134390)[network_player_id_to_int()]->f_33.f_4), iParam0);
}

void func_1272(int iParam0)
{
	func_1098(&((*Global_1134390)[network_player_id_to_int()]->f_33.f_4), iParam0);
}

bool func_1273(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	iVar0 = int_to_playerindex(iParam0);
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if ((*Global_1131196)[iVar1]->f_9 == iVar0)
		{
			return (*Global_1131196)[iVar1]->f_1.f_1 == (*Global_1134390)[iParam0]->f_33.f_1;
		}
		iVar1++;
	}
	return false;
}

void func_1274()
{
	iVar0 = player_id();
	if (_0xf6a8a652a6b186cd((*Global_1134390)[iVar0]->f_38.f_23.f_1))
	{
		_0xfdfecc6ee4491e11((*Global_1134390)[iVar0]->f_38.f_23.f_1);
	}
	if (_0xf6a8a652a6b186cd((*Global_1134390)[iVar0]->f_38.f_23))
	{
		_0xfdfecc6ee4491e11((*Global_1134390)[iVar0]->f_38.f_23);
	}
	(*Global_1134390)[iVar0]->f_38.f_23.f_1 = uVar1;
	(*Global_1134390)[iVar0]->f_38.f_23 = uVar1;
}

bool func_1275(int iParam0, int iParam1)
{
	if (!func_586(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_1050(iParam0);
	switch (iVar0)
	{
		case -427144552:
			if (has_ped_got_weapon(Global_34, iParam0, 0, false))
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 307971639:
			if (!func_1892(iParam0, 1))
			{
				return false;
			}
			break;
		case -1037537535:
			if (func_1893(iParam0))
			{
				return true;
			}
			break;
	}
	return func_1389(iParam0, 0, 0, 0) >= iParam1;
}

Vector3 func_1276()
{
	Var3 = { func_1894(0) };
	if (Var3.f_8 != -1838434463)
	{
	}
	if (((Var3.f_16 == 0 && Var3.f_18 == 0) && Global_17411.f_55.f_4.f_2 != 0) && Global_17411.f_55.f_4 >= 4)
	{
		vVar0 = { Global_17411.f_55.f_4 };
	}
	else
	{
		vVar0.x = Var3.f_16;
		vVar0.f_1 = Var3.f_17;
		vVar0.f_2 = Var3.f_18;
	}
	return vVar0;
}

int func_1277(vector3 vParam0, bool bParam3)
{
	iVar0 = -1;
	Var1 = { func_1894(0) };
	Var1.f_17 = vParam0.y;
	Var1.f_18 = vParam0.z;
	Var1.f_16 = vParam0.x;
	iVar0 = func_1895(-1230526146, &Var1, bParam3);
	if (iVar0 == -1)
	{
	}
	return iVar0;
}

bool func_1278(int iParam0)
{
	if (func_1040(iParam0, 75135761))
	{
		return true;
	}
	return false;
}

int func_1279(int iParam0, bool bParam1)
{
	if (!func_586(iParam0, 0))
	{
		return func_1896(func_1696(iParam0), bParam1);
	}
	if (!_item_database_fillout_item_info(iParam0, &Var0) || Var0.f_5 == 0)
	{
		return 0;
	}
	if (bParam1 && _0xfbe782b3165ac8ec(Var0.f_5))
	{
		return 0;
	}
	return Var0.f_5;
}

bool func_1280(int iParam0)
{
	if (!func_239() && func_1897())
	{
		return true;
	}
	return func_1040(iParam0, 1435272033);
}

int func_1281(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (!func_1898(iParam0))
	{
		return 0;
	}
	bVar1 = func_415(iParam3, 2);
	bVar2 = func_1289(iParam0, -570078785, bVar1);
	bVar3 = func_1289(iParam0, -915411861, bVar1);
	if (func_1289(iParam0, 997808187, bVar1))
	{
		iParam1 = 997808187;
	}
	else if (bParam4 && (func_1899(iParam0, &iVar0) || func_1900(iParam0, &iVar0)))
	{
		iParam1 = iVar0;
	}
	else if (bVar2 && !bVar3)
	{
		iParam1 = -570078785;
	}
	else if (bVar2 && bVar3)
	{
		if (func_1286())
		{
			iParam1 = -570078785;
		}
		else
		{
			iParam1 = -915411861;
		}
	}
	else if (bVar3)
	{
		iParam1 = -915411861;
	}
	else if (func_1287(15) && func_1289(iParam0, 369710026, bVar1))
	{
		iParam1 = 369710026;
	}
	if (iParam1 == 0 && bParam2)
	{
		return -915411861;
	}
	return iParam1;
}

bool func_1282(int iParam0, bool bParam1)
{
	return (func_1073(iParam0, 997808187) && !func_1074(iParam0, 997808187, bParam1));
}

bool func_1283(int iParam0)
{
	iVar0 = func_1279(iParam0, 1);
	if (iVar0 != 0 && func_1289(iVar0, 997808187, 0))
	{
		if (_unlock_is_unlocked(-1831140953))
		{
			return true;
		}
	}
	return false;
}

bool func_1284(int iParam0, int iParam1)
{
	*iParam1 = func_1901(iParam0, 1);
	return *iParam1 != 0;
}

bool func_1285(int iParam0, int iParam1)
{
	*iParam1 = func_1902(iParam0, 1, 0);
	return *iParam1 != 0;
}

bool func_1286()
{
	return Global_1915715->f_22477;
}

bool func_1287(int iParam0)
{
	if (iParam0 == 34 && Global_1915715->f_22504.f_1)
	{
		return true;
	}
	if (func_1691(1))
	{
		if (Global_1915715->f_20241 == iParam0)
		{
			return true;
		}
	}
	return false;
}

int func_1288(int iParam0, int iParam1)
{
	*iParam1 = 0;
	if (!func_586(iParam0, 0))
	{
		return 0;
	}
	if (func_1903(iParam0))
	{
		return 0;
	}
	if (func_1040(iParam0, 81450561) || func_1040(iParam0, 1342455455))
	{
		return 0;
	}
	if (func_1278(iParam0))
	{
		return 0;
	}
	iVar0 = func_1279(iParam0, 1);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_1289(iVar0, -570078785, 0))
	{
		return 0;
	}
	if (Global_1915715->f_22504.f_2 == 1)
	{
		Var1 = { func_1686(iParam0, 0, 0) };
		if (Var1.f_4 == 1084182731)
		{
			return 0;
		}
	}
	*iParam1 = iVar0;
	return 1;
}

bool func_1289(int iParam0, int iParam1, bool bParam2)
{
	if (!func_1898(iParam0))
	{
		return false;
	}
	if (_0xf540239f9937033b(iParam0, iParam1) == 0)
	{
		return false;
	}
	if (bParam2)
	{
		return !func_1290(iParam0, iParam1);
	}
	return true;
}

bool func_1290(int iParam0, int iParam1)
{
	Var0 = 10;
	Var0.f_1.f_4 = 15;
	Var0.f_1.f_36 = 10;
	Var0.f_1.f_47.f_4 = 15;
	Var0.f_1.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_4 = 15;
	Var0.f_1.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_47.f_36 = 10;
	if (!_item_database_fillout_buy_award_acquire_costs(iParam0, &Var0, &uVar471, 10) || iLocal_475 == 0)
	{
		return false;
	}
	iVar473 = 0;
	iVar474 = 0;
	while (iLocal_478 < iLocal_475)
	{
		if (&Var0[iLocal_478] == iParam1)
		{
			iVar473 = Var0[iLocal_478]->f_35;
			iVar475 = 0;
			while (iLocal_479 < iLocal_477)
			{
				uVar472 = &Var0[iLocal_478]->f_36[iLocal_479];
				if (iLocal_476 == 0)
				{
				}
				else if (!_unlock_is_unlocked(iLocal_476))
				{
					return true;
				}
				iVar475 = iLocal_479 + 1;
			}
		}
		iVar474 = iLocal_478 + 1;
	}
	return false;
}

int func_1291(int iParam0, int iParam1, bool bParam2, bool bParam3)
{
	if (!func_1904(iParam0, iParam1, &Var0, &iVar31, bParam2, bParam3))
	{
		if (!bParam2)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if ((&Var0[iVar32] == 2084597891 || &Var0[iVar32] == 773203532) || &Var0[iVar32] == -1295114026)
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
	if (!bParam2)
	{
	}
	return 0;
}

int func_1292(int iParam0)
{
	return (iParam0 / 100);
}

bool func_1293(int iParam0)
{
	return func_1052(iParam0) == -999503751;
}

int func_1294(int iParam0)
{
	if (!func_1293(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case -2068637111:
			return -705751660;
		case -1871922677:
			return 1364634153;
		case -905031115:
			return -388301838;
		case 1928115537:
			return 208175031;
		case 453281150:
			return -98968806;
		case 153739721:
			return -402606360;
		case 1167678119:
			return -709946811;
		case 736667462:
			return -362300646;
		case -673644764:
			return -65380737;
		case -980133221:
			return 100758093;
		case -209930641:
			return -1740761400;
		case -1735897526:
			return -27480348;
		case -482614352:
			return -257977494;
		case -1258944731:
			return -582914898;
		case 1536480356:
			return -814067424;
		case 1827632921:
			return -1179212391;
		case -1483084691:
			return -1407415707;
		case -1855140882:
			return -9237745;
		case -1605932637:
			return 296464256;
		case 838274308:
			return -1849217095;
		case 1423463110:
			return 1698584232;
		case 1722021469:
			return 1996257828;
		case 1293960018:
			return 1186175379;
		case 1084020314:
			return -1332741910;
		case 1384905272:
			return -1632447184;
		case 166258931:
			return -1930088011;
		case -285691117:
			return 2065632777;
		case -1506238056:
			return 937854865;
		case -141245365:
			return -1520409981;
		case 962175652:
			return 1356000914;
		case 687079897:
			return -423388555;
		case 373021801:
			return -188959129;
		case 75839740:
			return -93765184;
		case -208529642:
			return 401046716;
		case -504466477:
			return -845387737;
		case -1896067425:
			return -229247533;
		case -1732419039:
			return 57481217;
		case 1620668890:
			return 383434460;
		case 2095557238:
			return 404275544;
		case -700719823:
			return 721381157;
		case -520949089:
			return 1027509151;
		case 783963696:
			return -1688869940;
		case 477409701:
			return -97312371;
		case 325427079:
			return -870234774;
		case -2127824110:
			return -573609786;
		case -478920799:
			return -1336767027;
		case -784753876:
			return 1125692243;
		case -1991069642:
			return 1599850951;
		case 1534579841:
			return 1505836690;
		case 1755770591:
			return 1007026972;
		case 852591413:
			return -1271696523;
		case -1269692868:
			return -1501734903;
		case -1638540740:
			return -466660528;
		case 1404368072:
			return -1675392330;
		case 561909851:
			return -1377882579;
		case 1369829534:
			return 2136592667;
		case 669687080:
			return -1849788956;
		case 908671397:
			return -1561028528;
		case -50313388:
			return -1268368589;
		case 896138350:
			return -655694620;
		case -1347489546:
			return -882128410;
		case -1127937242:
			return -27217981;
		case -821055557:
			return 513863747;
		case -666844643:
			return 272520062;
		case 1507149124:
			return 1115043821;
		case 1797068311:
			return 434380030;
		case 1509389260:
			return -1994163333;
		case 1196052082:
			return 1445336445;
		case 914074837:
			return -1000181256;
		case 599099209:
			return -1601951172;
		case 774216741:
			return -1900673376;
		case 180232641:
			return -1722245291;
		case -1597878813:
			return -1550994497;
		case -895311481:
			return -1654216923;
		case -2075290374:
			return -956892603;
		case -1349063796:
			return 2044551183;
		case 1649135863:
			return 1816380636;
		case 10498108:
			return -1216565419;
		case 317576407:
			return -997045888;
		case -803057859:
			return -622430680;
		case -229076051:
			return -1279023141;
		case -1445559642:
			return -1036761924;
		case -1140185331:
			return -683249952;
		case 913153433:
			return 194792351;
		case 606730510:
			return -1974548202;
		case -964051505:
			return 1014738289;
		case -1267459676:
			return 634486813;
		case -483756272:
			return 1408261210;
		case -805187393:
			return -768354077;
		case -1116096467:
			return 1791083718;
		case -4997980:
			return 1484267571;
		case -305588017:
			return -632577068;
		case -694850968:
			return -872544455;
		case -985380922:
			return -1111430465;
		case 974827889:
			return -1351987694;
		case -1156770257:
			return -803252891;
		case -843695231:
			return 2121544208;
		case 1854078224:
			return -1667469728;
		case -2137185980:
			return 466087145;
		case -1830566447:
			return 98091275;
		case -1537546049:
			return -1010615123;
		case 469166476:
			return -32097795;
		case 1229079574:
			return -875834007;
		case 990422947:
			return 68797956;
		case -229665218:
			return -270885498;
		case -527568197:
			return 682069807;
		case 242634379:
			return 920726434;
		case -521123265:
			return -1709594912;
		case 766501761:
			return 1740292643;
		case -1135443708:
			return 2121330575;
		case 609997105:
			return 1281690488;
		case 378877348:
			return 1523820629;
		case -938370918:
			return 1117747177;
		case -1651298733:
			return -1091279926;
		case -494651336:
			return -585850882;
		case -1307650230:
			return -364430749;
		case 1220379817:
			return 1173844426;
		case 1450975270:
			return -964758829;
		case 1835159026:
			return -1806659977;
		case 1161689282:
			return -156109760;
		case 1472306629:
			return 325463492;
		case 23785761:
			return 20482409;
		case 332895738:
			return 1859937455;
		case -860715087:
			return 1554366530;
		case -151856079:
			return 1545191210;
		case -477077213:
			return 303195323;
		case -783270749:
			return -458159623;
		case -2043500951:
			return -162091708;
		case -705706526:
			return 869967935;
		case 1219931046:
			return 1175473322;
		case -1794096032:
			return 157930334;
		case 275775515:
			return 1379601741;
		case -1160690408:
			return -245138056;
		case -1763097043:
			return 115504824;
		case 912572382:
			return -1399728874;
		case 73391061:
			return -1090192900;
		case 332495544:
			return -1893000631;
		case -501475506:
			return -1583759578;
		case -280579677:
			return -204905596;
		case -814845497:
			return -974747713;
		case -1610902814:
			return -701454253;
		case -1313261987:
			return 678546644;
		case -668402627:
			return -1643732782;
		case -1436966753:
			return -1879178047;
		case -1105410003:
			return 2033604402;
		case -792302208:
			return 729201588;
		case -1544547372:
			return 1695854319;
		case -1268599623:
			return -2040860293;
		case 1281867320:
			return 430601343;
		case -1699226913:
			return 528449577;
		case -1610553999:
			return 836052180;
		case -1909243438:
			return 1126483827;
		case -1551799186:
			return 1432546287;
		case -1999554802:
			return 1721339484;
		case 723981565:
			return 1684533498;
		case 963752338:
			return 1404424086;
		case 372402960:
			return 69611632;
		case 989901996:
			return -221377088;
		case -239754729:
			return 1613326453;
		case 142266273:
			return 1307853835;
		case 911761394:
			return 2176663;
		case 1676688161:
			return -292908182;
		case 1907906229:
			return 1638955448;
		case -1621282302:
			return 1374083621;
		case -1801773954:
			return -1218075359;
		case -1003029579:
			return -1516043876;
		case 165089723:
			return -726135810;
		case 395586869:
			return -458052621;
		case 623560802:
			return -926911473;
		case 888203246:
			return -1761242982;
		case 1123550204:
			return -1388135148;
		case 1862360078:
			return -1644486999;
		case -1320869011:
			return -688485759;
		case -1078345642:
			return -381735150;
		case -571278136:
			return 2046513300;
		case -856663353:
			return -1943603989;
		case -632654469:
			return -1635706465;
		case -380562552:
			return -1338786556;
		case 1911459413:
			return -1434447686;
		case -1606456586:
			return -675714260;
		case -1888892597:
			return 249321841;
		case 1154823199:
			return -1070777324;
		case 856068226:
			return 2065543650;
		case 1786380136:
			return 1826887023;
		case 1943475930:
			return -1810703525;
		case 1697315198:
			return -1226563331;
		case -1787340262:
			return -1466006414;
		case -1341845703:
			return 724273546;
		case -1632670578:
			return 1512859531;
		case -932593662:
			return 1266305575;
		case -499308854:
			return 1937278961;
		case -785677145:
			return 971478216;
		case -18849776:
			return 1202597973;
		case -806059467:
			return 507698559;
		case 91876671:
			return 746355186;
		case -199538046:
			return 523755373;
		case -1754780383:
			return 1219798516;
		case -2050586146:
			return -1568843392;
		case -1622000367:
			return 1824681487;
		case -1930520502:
			return 933561301;
		case 1689602008:
			return -614970571;
		case 1384162159:
			return -310186102;
		case -733625577:
			return 1209768883;
		case -370348443:
			return 1834280485;
		case -1205728560:
			return 329528021;
		case 459985248:
			return 1778442129;
		case 834207228:
			return 805432208;
		case 1230744937:
			return -25950091;
		case 1859098900:
			return 922505133;
		case -2137310037:
			return 120975393;
		case 1086995730:
			return 426742932;
		case -1962290800:
			return 2081118674;
		case 1736084082:
			return -1914569345;
		case 2038967949:
			return 1110533655;
		case -1732116082:
			return -2005854180;
		case -2043224964:
			return -1762511586;
		case 1970158315:
			return -1609283862;
		case 1655444839:
			return -1311675804;
		case 1373270980:
			return -1952932365;
		case 1058885194:
			return -1923309189;
		case -1944199774:
			return -1262957735;
		case 999079041:
			return -1516622564;
		case 635605293:
			return -1741811132;
		case 1493792634:
			return -1991740303;
		case -213406744:
			return 2071419087;
		case -505870069:
			return 1352008461;
		case -152330007:
			return -196656840;
		case 2024678512:
			return 108848547;
		case 1188643011:
			return -610365465;
		case 1680243549:
			return -371774376;
		case 845486043:
			return -123352547;
		case -1351118334:
			return 112125487;
		case -1206325201:
			return -741695871;
		case -1514091649:
			return -711024087;
		case 1284413724:
			return 784454766;
		case 976581738:
			return 1114307520;
		case 1895916033:
			return 2026825867;
		case 1588804965:
			return 177900576;
		case -691537108:
			return -1357555725;
		case -2138714467:
			return -1604437371;
		case -1967660287:
			return -214441929;
		case -1574858284:
			return -455982228;
		case -1370707414:
			return -676320984;
		case 1429764111:
			return -907571817;
		case 1074060936:
			return 462295077;
		case 1238037012:
			return 768128154;
		case -1431915598:
			return -119452980;
		case -1133947081:
			return 189198231;
		case -987535189:
			return -698055213;
		case -676262434:
			return -422500692;
		case 1109042843:
			return 1148576455;
		case 817890278:
			return -244826955;
		case 1719496544:
			return -14755806;
		case 1452003197:
			return 249886638;
		case -2077939025:
			return -1994920950;
		case 2036208929:
			return 392792239;
		case -1698171004:
			return -1105085114;
		case -1437165919:
			return 1210831216;
		case -1206046162:
			return 651988690;
		case -1020114856:
			return 1835768799;
		case -778869478:
			return 1530492811;
		case -558071952:
			return -252173558;
		default:
			break;
	}
	return 0;
}

bool func_1295(int iParam0)
{
	if (!func_586(iParam0, 0))
	{
		return false;
	}
	return func_1052(iParam0) == 153430294;
}

int func_1296(int iParam0)
{
	if (!func_1295(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 1652808217:
			return 2113612788;
		case 475385282:
			return 1799751306;
		case -35942194:
			return 1444076568;
		case 48470838:
			return 1147680963;
		case 1997008874:
			return -2020336278;
		case 1729941524:
			return -1377900033;
		case -1856789375:
			return -1541941647;
		case -2086565603:
			return 1616727805;
		case -463888252:
			return -922666835;
		case -1967067820:
			return -855621461;
		case 2030324187:
			return -564862124;
		case 837041052:
			return 1955205056;
		case -351609819:
			return 1515886177;
		case -112363350:
			return 1212871226;
		case 1064633628:
			return 520003486;
		case 1811373600:
			return 214694713;
		case 293907485:
			return -1002555587;
		case 896201705:
			return -704816453;
		case -953837732:
			return -408748538;
		case -849861695:
			return 2080515794;
		case -1484084376:
			return -1438504284;
		case -1244280834:
			return -1663266855;
		case -939529134:
			return -977280609;
		case -302466993:
			return -1208924670;
		case -740134980:
			return 760352143;
		case -462384932:
			return 1528293658;
		case 1388866954:
			return 601619107;
		case 1124978197:
			return 309975007;
		case 773175735:
			return -1805872365;
		case -6365998:
			return 25128279;
		case 163836188:
			return -286209990;
		case -603318871:
			return 1269465524;
		case -866802112:
			return 66925801;
		case -1222804528:
			return -1897379743;
		case -2051565307:
			return 1963005075;
		case -1837321585:
			return -2037925984;
		case 973666748:
			return 1668961632;
		case 211230425:
			return 1358934123;
		case -1098349891:
			return -1141176732;
		case -801495520:
			return -1415813725;
		case -1186378964:
			return 11713414;
		case -1629350306:
			return 1307072000;
		case 245003725:
			return 1575941645;
		case -61091504:
			return 701926877;
		case -1579778179:
			return -766852067;
		case -1100138310:
			return -1076125889;
		case 271080495:
			return -1445170375;
		case -620695071:
			return -1685465452;
		case -724967739:
			return -1670121942;
		case -687545541:
			return 1790317231;
		case 1877447950:
			return 1889214097;
		case -2102805870:
			return 2120268316;
		case 918258437:
			return -1816896715;
		case 1169203439:
			return 321247770;
		case -1755397046:
			return 626818695;
		case -2090951606:
			return -121887417;
		case -1893420074:
			return -890648157;
		case -521480347:
			return 802722687;
		case -1515678445:
			return 433303369;
		case 637343178:
			return 1912758109;
		case -1759971328:
			return 2076472033;
		case -1990239091:
			return 86705584;
		case 1595344893:
			return 518666542;
		case -553416748:
			return 682151083;
		case 2086466425:
			return -1982828649;
		case 1829328082:
			return 1530204769;
		case 147295280:
			return 1836693226;
		case 857399510:
			return -1096001202;
		case 811850600:
			return -1834221234;
		case -528729190:
			return -1526815245;
		case -732726675:
			return 1127336149;
		case -963846432:
			return 828941635;
		case -1242022473:
			return 531497422;
		case -2026971099:
			return 834643453;
		case 2066466847:
			return 526451008;
		case 1835609242:
			return -399699239;
		case -881400018:
			return -197243922;
		case -633699143:
			return -514513380;
		case -1069100838:
			return -809532687;
		case -695075472:
			return -854491755;
		case -1665332793:
			return -1318828485;
		case -1292945877:
			return -1465928526;
		case -542471226:
			return 1570234737;
		case -185354664:
			return -288324636;
		case -1008937941:
			return 11282331;
		case -770543466:
			return 725318841;
		case 1382597333:
			return -949699437;
		case 1129882805:
			return 1306347914;
		case 883033928:
			return 1536910598;
		case -1225782302:
			return 1924797251;
		case 1377331935:
			return 9499074;
		case -136923555:
			return 483863122;
		case 98783862:
			return 237473007;
		case 363196923:
			return 1066004403;
		case 547298053:
			return 1559978137;
		case 796506298:
			return 1322239046;
		case -2078055928:
			return 1564631339;
		case 855162804:
			return -212824759;
		case -1550515886:
			return -274429432;
		case -699406649:
			return 570453695;
		case -1870177465:
			return 207242099;
		case 1121730546:
			return -1112267224;
		case -1606199964:
			return 1417685661;
		case -1366953495:
			return -2095478833;
		case 1493223136:
			return 1899947034;
		case 1732731757:
			return -1752321861;
		case -993297765:
			return 1413210443;
		case 1243186493:
			return 1182877142;
		case 1548003731:
			return -208887838;
		case 1853771270:
			return 21707615;
		case -456994495:
			return 857732585;
		case -1627994710:
			return 1087541582;
		case -2009556946:
			return 1451015330;
		case 849308921:
			return 1688754425;
		case 1779645445:
			return 1437777233;
		case 2112644023:
			return 1676958164;
		case -909575313:
			return -35123787;
		case 1534435018:
			return 195668280;
		case -83784299:
			return -2087370390;
		case 1681940497:
			return 888087567;
		case 1436861146:
			return 707399301;
		case 1192175023:
			return 1507847664;
		case -503349107:
			return -2018900297;
		case 424603435:
			return -626938711;
		case 1033779145:
			return -336900292;
		case 734729251:
			return -1124798132;
		case -1451110845:
			return 1051595054;
		case 1302861393:
			return 1338028883;
		case 2145483459:
			return 574052421;
		case 1916198766:
			return -1516904708;
		case 229873288:
			return -337288225;
		case 1056766234:
			return 432390051;
		case 1993402593:
			return 1094880924;
		case 1754221662:
			return 1862953515;
		case 135502004:
			return -806719655;
		case -1094089207:
			return -492661555;
		case 683366891:
			return -1416714590;
		case 457948940:
			return -1170586631;
		case 84775568:
			return 385875335;
		case -2142729980:
			return 632068832;
		case -410630335:
			return 435122445;
		case -161815318:
			return 1413244326;
		case 1125547616:
			return 650709696;
		case -706894864:
			return -1018149936;
		case 512996699:
			return -712677318;
		case 822532673:
			return -272163651;
		case -1151792276:
			return 534957177;
		case -569224994:
			return 1399272333;
		case -1816871896:
			return 765978639;
		case -2105861707:
			return 1993996914;
		case 45914674:
			return 1227104007;
		case 676193620:
			return -595245625;
		case 1564617196:
			return 1395189422;
		case 1142159244:
			return 1618444619;
		case 834556641:
			return 1977920549;
		case -1297099578:
			return -2078652272;
		case -1477066926:
			return -1741786952;
		case -1764025059:
			return -1452207299;
		case -1896863365:
			return -1760699697;
		case -1706409937:
			return -1462337952;
		case -1336579003:
			return 1584884203;
		case 2015984622:
			return 1346489728;
		case 1306077006:
			return -2137870811;
		case 424001060:
			return -1557990587;
		default:
			break;
	}
	return 0;
}

bool func_1297(int iParam0)
{
	return (func_1905(iParam0) && func_1040(iParam0, 1584357097));
}

int func_1298(int iParam0)
{
	if (!func_1297(iParam0))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 731907282:
			return 195889874;
		case 1561454517:
			return 465087209;
		case 1254834984:
			return -311177636;
		case 1829957287:
			return 857944907;
		case 919634467:
			return -1729036567;
		case -28339930:
			return -2035393948;
		case 507515628:
			return -284580868;
		case -1975194892:
			return 73453226;
		case 2039957913:
			return 329215271;
		case 1502511939:
			return 1942551232;
		case 1809065934:
			return 518344954;
		case -997271222:
			return 1353200767;
		case -878058438:
			return -668553641;
		case -1617589234:
			return -431273312;
		case -1042952050:
			return -1111852673;
		case -2050900874:
			return -856521084;
		case -1815586685:
			return -412238982;
		case -51500315:
			return -260158053;
		case 1348094862:
			return 863949896;
		case 1646522145:
			return 1693169437;
		case 1156363443:
			return 387193715;
		case 1952092069:
			return -1816797957;
		case -2109461640:
			return -1533903180;
		case -1806184545:
			return 1874334976;
		case -1053842899:
			return -2015093177;
		case -755677768:
			return -1841483015;
		case 767294276:
			return -600422706;
		case 1311814185:
			return -229245945;
		case -840486512:
			return -526428006;
		case -1029170414:
			return 1651235889;
		case -831411723:
			return -882484202;
		case -429434400:
			return 1973137538;
		case -131203731:
			return -1830556910;
		case 1800445393:
			return 596295460;
		case 2047228732:
			return 290265769;
		case -2027203194:
			return 2081091619;
		case -609641686:
			return 516107635;
		case 154924622:
			return 207980728;
		case -142781743:
			return -99130340;
		case -533360838:
			return 1220617347;
		case -464283790:
			return -553725692;
		case -186533746:
			return -1123513064;
		case -1593520704:
			return -769187178;
		case 1260724738:
			return -1889559288;
		case -297375678:
			return 2100623539;
		case 1701653225:
			return -1303234828;
		case 1386939749:
			return 2105724242;
		case 1103717282:
			return 1767482612;
		case 1332088703:
			return 1366042262;
		case 1034120186:
			return 2091613460;
		case 532885562:
			return 1728467402;
		case -452048774:
			return 974561281;
		case -1085571851:
			return 1934791288;
		case -862677113:
			return -1633818354;
		case 1890828381:
			return -1707282708;
		case 1864875333:
			return 1682604808;
		case -320325540:
			return 1029354793;
		case -1278925815:
			return 1640403026;
		case -80071950:
			return -1229833684;
		case -781656240:
			return -2040374903;
		case 525029001:
			return 463034341;
		case 1717296181:
			return 149336704;
		case 1894117705:
			return 1146825064;
		case 1464921218:
			return -979751655;
		case 550403966:
			return -1219424121;
		case 856007660:
			return 1019812717;
		case -1617179117:
			return 862573726;
		case 1784374159:
			return 1100771587;
		case 2081818376:
			return 1455922005;
		case -1615607679:
			return 1686296029;
		case -1894668475:
			return 1957000738;
		case 2095710966:
			return 1656345167;
		case -260985198:
			return -354862110;
		case -1179959034:
			return -146516808;
		case -873142887:
			return -337101316;
		case 245915270:
			return 518337236;
		case 844146134:
			return 966617156;
		case 538640747:
			return 677332424;
		case 560856018:
			return 9691481;
		case -1382149068:
			return -240893062;
		case -188079477:
			return -547676440;
		case 1578729681:
			return 526083803;
		case 1879581870:
			return -1364982418;
		case 948647349:
			return -1058723344;
		default:
			break;
	}
	return 0;
}

bool func_1299(int iParam0)
{
	return func_1052(iParam0) == 1882579758;
}

int func_1300(int iParam0)
{
	switch (iParam0)
	{
		case -756756912:
			return 174220197;
		case 380458460:
			return 468518590;
		case -1336702674:
			return -184567584;
		case -1481672726:
			return 140205975;
		case 1088924248:
			return 1664750935;
		case -1981006748:
			return 1960130701;
		case -1800252944:
			return 766061110;
		case -392037938:
			return 1364291974;
		case 2052037931:
			return 2076526201;
		case 683408729:
			return 292938556;
		default:
			break;
	}
	return 0;
}

int func_1301(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (!func_1904(iParam0, iParam2, &Var0, &iVar31, bParam3, bParam4))
	{
		if (!bParam3)
		{
		}
		return 0;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == iParam1)
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

bool func_1302(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_586(iParam0, 0))
	{
		return false;
	}
	*iParam3 = _0xdee7b3c76ed664be(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam5)
		{
		}
		return false;
	}
	if (!bParam5)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xad73b614df26cf8a(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @113; //curOff = 101
		}
		else if (!bParam5)
		{
		}
		iVar0++;
	}
	if (bParam4)
	{
		func_1906(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

void func_1303(var uParam0, var uParam1)
{
	if (func_1907(uParam0, uParam1))
	{
		uParam1->f_63 = func_1908(uParam1);
	}
}

int func_1304()
{
	iVar33 = 0;
	iVar34 = 0;
	iVar35 = 0;
	iVar33 = _0x53a94294fddcf98c(&uVar0, 1);
	iVar34 = 0;
	while (iVar34 < iVar33)
	{
		if (!_0xd6f6acf4392187fb(&(uVar0[iVar34])))
		{
		}
		else if (!_0x0f99f6436528a089(&(uVar0[iVar34])))
		{
		}
		else
		{
			iVar35++;
		}
		iVar34++;
	}
	return iVar35;
}

void func_1305(var uParam0)
{
}

int func_1306(int iParam0)
{
	switch (iParam0)
	{
		case 0:
		case 1:
		case 2:
		case 3:
		case 4:
			return 2;
		default:
			break;
	}
	return -1;
}

int func_1307()
{
	return Global_1138962->f_137;
}

int func_1308(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	return Global_1138962->f_1[iParam0]->f_1;
}

char* func_1309(int iParam0)
{
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (&Global_1194053->f_28.f_22[iVar1] == iParam0)
		{
			sVar0 = func_1354(Global_1194053->f_28.f_22[iVar1]->f_5);
			return sVar0;
		}
		iVar1++;
	}
	return "FAILURE TO GRAB";
}

bool func_1310(char* sParam0, char* sParam1)
{
	iVar0 = get_length_of_literal_string(sParam0);
	if (iVar0 < 1)
	{
		return false;
	}
	if (compare_strings(sParam0, sParam1, false, iVar0) == 0)
	{
		return true;
	}
	return false;
}

char* func_1311(int iParam0, bool bParam1, int iParam2)
{
	if (iParam0 == 0)
	{
		return "";
	}
	sVar0 = "";
	iVar1 = 0;
	while (iVar1 <= 4)
	{
		if (&Global_1194053->f_28.f_22[iVar1] == iParam0)
		{
			if (bParam1)
			{
				sVar0 = func_1909(func_669(&(Global_1194053->f_28.f_22[iVar1]->f_5), 109029619), iParam2);
			}
			else
			{
				sVar0 = func_1909(&(Global_1194053->f_28.f_22[iVar1]->f_5), 109029619);
			}
		}
		else
		{
			iVar1++;
		}
	}
	return sVar0;
}

bool func_1312(int iParam0)
{
	Var0.f_27 = 10;
	if (_0xc087ff658b2e51da(iParam0, &Var0))
	{
		if (func_34(Var0.f_19) && network_is_gamer_in_my_session(&(Var0.f_19)))
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

bool func_1313(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Global_1194053->f_28.f_22[iVar0] == iParam0 && iParam0 != 0)
		{
			return Global_1194053->f_28.f_22[iVar0]->f_1;
		}
		iVar0++;
	}
	return false;
}

int func_1314(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Global_1194053->f_28.f_22[iVar0] == iParam0 && Global_1194053->f_28.f_22[iVar0]->f_1)
		{
			iVar1 = Global_1194053->f_28.f_22[iVar0]->f_3;
			if (iVar1 < 0)
			{
				iVar1 = 0;
			}
			else if (iVar1 > 7)
			{
				iVar1 = 7;
			}
			return iVar1;
		}
		iVar0++;
	}
	return 0;
}

int func_1315(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Global_1194053->f_28.f_22[iVar0] == iParam0 && Global_1194053->f_28.f_22[iVar0]->f_1)
		{
			iVar1 = Global_1194053->f_28.f_22[iVar0]->f_4;
			if (iVar1 < 0)
			{
				iVar1 = 0;
			}
			else if (iVar1 > 7)
			{
				iVar1 = 7;
			}
			return iVar1;
		}
		iVar0++;
	}
	Var2.f_27 = 10;
	if (_0xc087ff658b2e51da(iParam0, &Var2))
	{
		return Var2.f_9.f_4;
	}
	return 0;
}

int func_1316(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = network_player_id_to_int();
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	return (*Global_1145091)[iParam0]->f_8.f_1;
}

int func_1317(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Global_1194053->f_440.f_2.f_9[iVar0] == iParam0)
		{
			return Global_1194053->f_440.f_2.f_9[iVar0]->f_1;
		}
		iVar0++;
	}
	return -1;
}

int func_1318(var uParam0)
{
	if (Global_1194053->f_116.f_4)
	{
		iVar0 = Global_1194053->f_116;
	}
	else
	{
		iVar0 = func_1761(uParam0);
	}
	return iVar0;
}

bool func_1319(int iParam0, var uParam1)
{
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	Var0.f_18 = 10;
	if (!_0x424b17a7dc5c90bc(iParam0))
	{
		if (!_0xd6f6acf4392187fb(_0x901e0dc25080c8b9(iParam0)))
		{
			return false;
		}
		iVar100 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iParam0));
		if (!network_is_player_active(iVar100))
		{
			return false;
		}
		Var101 = { func_573(iVar100) };
		iVar99 = 0;
		while (iVar99 <= (_0xc084ff658b2e61da(&Var101) - 1))
		{
			if ((_0xc084ff658b2e71da(&Var101, iVar99, &Var0) && Var0 != 0) && Var0.f_9 == 1)
			{
				*uParam1 = { Var0 };
				return true;
			}
			iVar99++;
		}
	}
	else
	{
		Var108 = { func_573(iParam0) };
		iVar99 = 0;
		while (iVar99 <= (_0xc084ff658b2e61da(&Var108) - 1))
		{
			if (_0xc084ff658b2e71da(&Var108, iVar99, &Var0) && Var0.f_9 == 1)
			{
				*uParam1 = { Var0 };
				return true;
			}
			iVar99++;
		}
	}
	return false;
}

char* func_1320(int iParam0)
{
	if (iParam0 == 255)
	{
		if (func_23(40, iParam0))
		{
			return _0xd8402b858f4ddd88(&(Global_1102219->f_12), get_length_of_literal_string(&(Global_1102219->f_12)));
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
	if (!&Global_1296859->f_22[iParam0])
	{
		return sVar0;
	}
	if (func_23(40, iParam0))
	{
		return _0xd8402b858f4ddd88(&((*Global_1100469)[iParam0]->f_12), get_length_of_literal_string(&((*Global_1100469)[iParam0]->f_12)));
	}
	return get_player_name(&(Global_1296859->f_154[iParam0]));
}

int func_1321(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return 0;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return 0;
	}
	if (func_1137(iVar0, 0, 1))
	{
		return 0;
	}
	if (func_1082(iVar0, 32))
	{
		return 1;
	}
	return 0;
}

bool func_1322(int iParam0, int iParam1)
{
	return func_415(&(Global_1194053->f_5[iParam0]), iParam1);
}

void func_1323(int iParam0)
{
	Global_1194053->f_5[iParam0] = 0;
}

void func_1324(int iParam0, int iParam1)
{
	func_611(Global_1194053->f_5[iParam0], iParam1);
}

void func_1325(var uParam0)
{
	*uParam0 = 23;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	fVar0 = func_432(0, 8);
	trigger_script_event(1, uParam0, 11, 16, &fVar0);
}

void func_1326(var uParam0, bool bParam1, bool bParam2)
{
	if (func_1910(1))
	{
		return;
	}
	Global_1194053->f_498 = uParam0;
	func_1911(1);
	if (bParam2)
	{
		func_1911(4);
	}
	if (bParam1)
	{
		func_1911(2);
	}
}

bool func_1327(int iParam0)
{
	bVar2 = func_1108(iParam0, &iVar0, &iVar1, 1);
	bVar2 = ((bVar2 && iVar0 == (*Global_1298536)[player_id()]->f_1) && iVar1 == Global_1298536[player_id()]);
	return bVar2;
}

bool func_1328()
{
	return Global_1071686->f_7;
}

bool func_1329(int iParam0, int iParam1)
{
	iVar0 = iParam0;
	if (iVar0 >= 0 && iVar0 < 32)
	{
		return func_576((*Global_1298536)[iVar0]->f_86, iParam1);
	}
	return false;
}

bool func_1330()
{
	return Global_263042[&Global_1296859] >= 9;
}

bool func_1331(struct<2> Param0)
{
	iVar0 = func_1912(Param0);
	return (iVar0 == 3 || iVar0 == 4);
}

bool func_1332(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

int func_1333(int iParam0)
{
	switch (get_player_team(iParam0))
	{
		case 0:
			return -275684858;
		case 1:
			return -1561147190;
		case 2:
			return -736318691;
		case 3:
			return 158864851;
		case 4:
			return 923463928;
		case 5:
			return -317694716;
		case 6:
			return 461388259;
		case 7:
			return 1811916478;
		case 8:
			return 1713937168;
		default:
			break;
	}
	return -1031763995;
}

int func_1334(int iParam0)
{
	if (_0x901e0dc25080c8b9(iParam0) != Global_1296859->f_15 && !func_830())
	{
		return 636925055;
	}
	return -963477619;
}

bool func_1335(int iParam0, bool bParam1)
{
	if (iParam0 == 255)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return false;
	}
	if (iParam0 == Global_1296859->f_10)
	{
		return true;
	}
	iVar0 = iParam0;
	if (!&Global_1296859->f_22[iVar0])
	{
		return false;
	}
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0))
		{
			return true;
		}
	}
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iVar0))
	{
		return true;
	}
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28347), iVar0))
	{
		return false;
	}
	iVar1 = get_player_team(Global_1296859->f_10);
	iVar2 = get_player_team(iParam0);
	if ((iVar1 != -1 && iVar2 != -1) && iVar1 == iVar2)
	{
		return true;
	}
	else if (_0x81fb74c83c2ed69f(iParam0))
	{
		return true;
	}
	return false;
}

bool func_1336(int iParam0, bool bParam1)
{
	iVar0 = iParam0;
	if (iParam0 == player_id())
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return true;
	}
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_1913(iParam0))
	{
		return true;
	}
	return !func_1335(iParam0, 0);
}

bool func_1337(int iParam0, bool bParam1)
{
	if (iParam0 == player_id())
	{
		return false;
	}
	if (!_network_is_player_index_valid(iParam0))
	{
		return false;
	}
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	iVar0 = iParam0;
	if (bParam1)
	{
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28349), iVar0) || _0x72b2e00c9bac6789(&(Global_1071686->f_28350), iVar0))
		{
			return false;
		}
		if (_0x72b2e00c9bac6789(&(Global_1071686->f_28348), iVar0))
		{
			return true;
		}
	}
	if (func_1914(iParam0))
	{
		return false;
	}
	if (func_1913(iParam0))
	{
		return false;
	}
	if (func_1915(iParam0))
	{
		return true;
	}
	return func_1916(iParam0);
}

int func_1338(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return -504335712;
		case 1:
			return 395262693;
		case 2:
			return -933924539;
		case 3:
			return 371211549;
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

bool func_1339(int iParam0)
{
	return func_415(Global_1194053->f_3, iParam0);
}

void func_1340(int iParam0)
{
	func_628(&(Global_1194053->f_3), iParam0);
}

void func_1341(var uParam0)
{
}

void func_1342(int iParam0)
{
	func_611(&(Global_1572887->f_266.f_63), iParam0);
}

void func_1343(int iParam0)
{
	Global_1572887->f_266.f_67 = iParam0;
}

void func_1344(int iParam0)
{
	Global_1572887->f_266 = iParam0;
}

bool func_1345(var uParam0)
{
	if ((_0xd6f6acf4392187fb(uParam0->f_1) && _0x0f99f6436528a089(uParam0->f_1)) && _0x149a2751ab66ac02(uParam0->f_1) >= _0x853b0fa4d8732c57(uParam0->f_1))
	{
		return true;
	}
	return false;
}

bool func_1346(var uParam0)
{
	if (!_0xd6f6acf4392187fb(uParam0->f_1))
	{
		return false;
	}
	iVar0 = _0x4be6c13a45cca8ec(uParam0->f_1);
	if (!_network_is_player_index_valid(iVar0))
	{
		return false;
	}
	if (network_is_player_active(iVar0))
	{
		iVar1 = iVar0;
		if (iVar1 >= 0 && iVar1 < 32)
		{
			if ((*Global_1056141)[iVar1]->f_2 != -1)
			{
				return true;
			}
		}
	}
	return false;
}

bool func_1347()
{
	if (Global_1194053->f_1 >= 4 && Global_1194053->f_1 <= 9)
	{
		return true;
	}
	if (func_1917())
	{
		return true;
	}
	if ((Global_1194053->f_2 == 3 || Global_1194053->f_2 == 4) || Global_1194053->f_2 == 5)
	{
		return true;
	}
	return false;
}

bool func_1348(var uParam0)
{
	if (!func_34(*uParam0))
	{
		return false;
	}
	Var0.f_18 = 10;
	iVar99 = 0;
	while (iVar99 <= (_0xc084ff658b2e61da(uParam0) - 1))
	{
		if (_0xc084ff658b2e71da(uParam0, iVar99, &Var0) && Var0.f_9)
		{
			if (Var0.f_17 >= 10)
			{
				return false;
			}
		}
		iVar99++;
	}
	return true;
}

void func_1349(int iParam0)
{
	Global_17411.f_55.f_14.f_4 = iParam0;
}

void func_1350(int iParam0)
{
	Global_1194053->f_1 = iParam0;
}

void func_1351(int iParam0)
{
	Global_1194053->f_121.f_2 = iParam0;
}

bool func_1352(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (_0xc088ff658b2e51da() - 1))
	{
		if (&Global_1194053->f_503[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1353(int iParam0)
{
	return (Global_1071686->f_22973.f_3 && iParam0) != 0;
}

char* func_1354(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_1355(char* sParam0)
{
	return _0xd4022c7286b0dfa2(sParam0, 100, 22);
}

bool func_1356(int iParam0, char* sParam1)
{
	sVar0 = get_player_name(iParam0);
	iVar1 = get_length_of_literal_string(sVar0);
	if (compare_strings(sVar0, sParam1, false, iVar1) == 0)
	{
		return true;
	}
	return false;
}

void func_1357(int iParam0, bool bParam1)
{
	func_1324(iParam0, 2);
	if (bParam1)
	{
		func_1324(iParam0, 4);
	}
	else if (func_1322(iParam0, 4))
	{
		func_1918(iParam0, 4);
	}
}

void func_1358(int iParam0)
{
	Global_1194053->f_2 = iParam0;
}

bool func_1359()
{
	return func_1919() > 11;
}

void func_1360(bool bParam0)
{
	iVar0 = player_id();
	bVar1 = false;
	if (network_is_game_in_progress())
	{
		bVar1 = _0x4be6c13a45cca8ec(_0x901e0dc25080c8b9(iVar0)) == iVar0;
	}
	if (_0x8fb7c254cfcbf78e(&(Global_1572887->f_360)) && (bParam0 || bVar1))
	{
		_0xe72e5c1289bd1f40(&(Global_1572887->f_360));
	}
	Var2.f_5 = 2;
	Var2.f_22 = -1;
	Var2.f_23 = -1;
	Var2.f_24 = -1;
	Var2.f_29 = -1;
	Global_1572887->f_360 = { Var2 };
}

void func_1361()
{
	if (_is_app_active(1433015236))
	{
		_close_app_by_hash(1433015236);
	}
}

bool func_1362(int iParam0, bool bParam1)
{
	bVar0 = false;
	if (iParam0 == 255)
	{
		bVar0 = true;
		iParam0 = func_42();
	}
	else if (iParam0 == func_42())
	{
		bVar0 = true;
	}
	if (bVar0)
	{
		if (!bParam1)
		{
			return Global_1296859->f_14;
		}
	}
	if (!bVar0)
	{
		if (!&Global_1296859->f_22[iParam0])
		{
			return false;
		}
		if (!_network_is_player_index_valid(&(Global_1296859->f_154[iParam0])))
		{
			return false;
		}
	}
	if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(&(Global_1296859->f_154[iParam0]))) <= 1)
	{
		return false;
	}
	return true;
}

void func_1363()
{
	Global_1956200->f_1431.f_108 = 0;
	Global_1956200->f_1431.f_108.f_1 = 0f;
	Global_1956200->f_1431.f_108.f_3 = 0f;
	Global_1956200->f_1431.f_108.f_2 = 0f;
	Global_1956200->f_1431.f_108.f_4 = 0f;
	Global_1956200->f_1431.f_108.f_6 = 0f;
	Global_1956200->f_1431.f_108.f_5 = 0f;
}

void func_1364(int iParam0)
{
	Global_1572887->f_106.f_75 = iParam0;
}

void func_1365()
{
	if (Global_1572887->f_106.f_91)
	{
		return;
	}
	Global_1572887->f_106.f_91 = 1;
	_0x4c08d2b6d8be17e4(Global_1572887->f_106.f_91.f_1, Global_1572887->f_106.f_91.f_2, Global_1572887->f_106.f_91.f_3, Global_1572887->f_106.f_91.f_4, Global_1572887->f_106.f_91.f_5, &(Global_1572887->f_106.f_91.f_6));
}

int func_1366(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -1369928329;
		case 1:
			return -1804958860;
		case 2:
			return 1412564789;
		case 3:
			return 2090637823;
		case 4:
			return -1740003396;
		case 5:
			return -2140118397;
		case 6:
			return -141490041;
		case 7:
			return 112216621;
		case 8:
			return -1767965617;
		case 9:
			return 81153145;
		case 10:
			return 485273815;
		case 11:
			return 188100165;
		case 12:
			return -840966484;
		case 13:
			return 812079913;
		case 14:
			return 839886685;
		case 15:
			return 1749906378;
		case 16:
			return 1485493317;
		case 17:
			return -1956038143;
		case 18:
			return -1013295952;
		case 19:
			return 928731509;
		default:
			break;
	}
	return 0;
}

int func_1367()
{
	return Global_1102219->f_3673;
}

int func_1368(int iParam0)
{
	if (iParam0 == 10)
	{
		return 8;
	}
	if (iParam0 == 11)
	{
		return 4;
	}
	if (iParam0 == 12)
	{
		return 16;
	}
	if (iParam0 == 13)
	{
		return 32;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_265377->f_117359.f_6725[iVar0] == &Global_265354->f_1[iParam0])
		{
			return Global_265377->f_117359.f_483[iVar0]->f_193;
		}
		iVar0++;
	}
	return -1;
}

bool func_1369(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam0 == 3)
	{
		return iParam1 != -1;
	}
	return iParam1 != 0;
}

bool func_1370(int iParam0)
{
	iVar0 = _0x901e0dc25080c8b9(iParam0);
	if (_0x0f99f6436528a089(iVar0) && !_0x424b17a7dc5c90bc(iParam0))
	{
		return false;
	}
	return true;
}

void func_1371(var uParam0)
{
	_copy_memory(&(Global_1572887->f_106.f_17), uParam0, 57);
}

void func_1372(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	Global_1572887->f_106 = iParam0;
	Global_1572887->f_106.f_9 = iParam1;
	Global_1572887->f_106.f_10 = iParam2;
	if (bParam3)
	{
		func_1920();
	}
}

void func_1373(struct<2> Param0, bool bParam2)
{
	Global_1572887->f_106.f_11 = { Param0 };
	if (bParam2)
	{
		func_1920();
	}
}

void func_1374(int iParam0)
{
	Global_1572887->f_106.f_15 = iParam0;
}

void func_1375(int iParam0)
{
	Global_1572887->f_106.f_13 = iParam0;
}

void func_1376(int iParam0, bool bParam1)
{
	Global_1572887->f_106.f_74 = iParam0;
	if (bParam1)
	{
		func_1920();
	}
}

bool func_1377()
{
	if (func_629() != 0)
	{
		return false;
	}
	if (Global_1572887->f_106.f_9 >= 5 && Global_1572887->f_106.f_9 <= 8)
	{
		return false;
	}
	return true;
}

int func_1378(struct<2> Param0)
{
	if (func_1921())
	{
		return 0;
	}
	if (!func_1112(Param0))
	{
		return 0;
	}
	*Global_1051213 = { Param0 };
	return 1;
}

void func_1379()
{
	(*Global_1056141)[network_player_id_to_int()]->f_15.f_11 = 0;
}

void func_1380(struct<2> Param0)
{
	_databinding_remove_data_entry(Global_1572887->f_106.f_153);
	_databinding_remove_data_entry(Global_1572887->f_106.f_154);
	_databinding_remove_data_entry(Global_1572887->f_106.f_155);
	_databinding_remove_data_entry(Global_1572887->f_106.f_156);
	_databinding_remove_data_entry(Global_1572887->f_106.f_157);
	_databinding_remove_data_entry(Global_1572887->f_106.f_158);
	_databinding_remove_data_entry(Global_1572887->f_106.f_159);
	iVar0 = func_1209(Param0);
	if (iVar0 == -1)
	{
		return;
	}
	iVar1 = func_1212(iVar0);
	if (iVar1 == -1)
	{
		return;
	}
	uVar2 = func_1922(iVar0);
	Var3 = { func_1923(iVar1, uVar2) };
	_databinding_write_data_string(Global_1572887->f_106.f_151, _create_var_string(2, &Var3));
}

bool func_1381(int iParam0)
{
	return (Global_1572887->f_106.f_15 && iParam0) != 0;
}

int func_1382(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	if (uParam0->f_16 == iParam1)
	{
		func_1924(uParam0, 4194304);
		return 1;
	}
	iVar0 = func_1925(iParam1);
	if (iVar0 == -1)
	{
		return 0;
	}
	MemCopy(&(uParam0->f_27), {*Global_265377->f_4[iVar0]}, 3);
	uParam0->f_37 = { Global_265377->f_4[iVar0]->f_7 };
	uParam0->f_45 = Global_265377->f_4[iVar0]->f_22;
	uParam0->f_46 = Global_265377->f_4[iVar0]->f_30;
	uParam0->f_16 = Global_265377->f_4[iVar0]->f_28;
	uParam0->f_17 = &Global_265377->f_63755[iVar0];
	uParam0->f_61 = { Global_265377->f_4[iVar0]->f_24 };
	uParam0->f_30 = Global_265377->f_4[iVar0]->f_34;
	uParam0->f_32 = Global_265377->f_4[iVar0]->f_32;
	uParam0->f_33 = Global_265377->f_4[iVar0]->f_33;
	uParam0->f_21 = 1;
	uParam0->f_21.f_1 = 0;
	uParam0->f_21.f_4 = iParam4;
	uParam0->f_21.f_2 = Global_265377->f_4[iVar0]->f_29;
	uParam0->f_21.f_3 = Global_265377->f_4[iVar0]->f_31;
	uParam0->f_26 = Global_265377->f_4[iVar0]->f_31;
	uParam0->f_34 = Global_265377->f_4[iVar0]->f_40;
	uParam0->f_1 = { Global_265377->f_4[iVar0]->f_15 };
	MemCopy(&(uParam0->f_8), {Global_265377->f_4[iVar0]->f_4}, 8);
	func_1926(Global_265377->f_4[iVar0]);
	if (iParam2 != -1)
	{
		if ((uParam0->f_21.f_2 == -933924539 && func_1927(iParam2)) || (uParam0->f_21.f_2 == 395262693 && func_1928(iParam2)))
		{
			uParam0->f_21.f_3 = iParam2;
			uParam0->f_26 = iParam2;
		}
	}
	if (iParam3 > 0)
	{
		uParam0->f_30 = iParam3;
	}
	iVar1 = func_1929(&(Global_265377->f_63755[iVar0]));
	vVar2 = { func_1930(uParam0->f_17) };
	if (iVar1 != -1)
	{
		uParam0->f_53 = { func_1931(iVar1) };
	}
	else if (func_1932(uParam0->f_17))
	{
		uParam0->f_53 = { func_1934(func_1933(uParam0->f_17)) };
	}
	else if (vVar2.y != -1 && vVar2.x != -1)
	{
		uParam0->f_53 = { func_1935(&vVar2) };
	}
	else
	{
		uParam0->f_53 = { func_1936(uParam0->f_16) };
		if (!func_1112(uParam0->f_53))
		{
			uParam0->f_53 = { func_1208(func_1937(uParam0->f_21.f_2)) };
		}
	}
	func_1938(uParam0);
	func_1924(uParam0, 4194304);
	return 1;
}

char* func_1383(int iParam0)
{
	iVar0 = func_1939(iParam0);
	if (iVar0 == &Global_265354->f_1[0])
	{
		return "NM_BUCKET_RACE";
	}
	if (iVar0 == &Global_265354->f_1[1])
	{
		return "NET_PLAYLIST_FEATURED_SERIES_001";
	}
	if (iVar0 == &Global_265354->f_1[5])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_1";
	}
	if (iVar0 == &Global_265354->f_1[6])
	{
		return "NET_PLAYLIST_SPECIAL_SERIES_2";
	}
	if (iVar0 == &Global_265354->f_1[7])
	{
		return "NET_PLAYLIST_ELIMINATION_SMALL";
	}
	if (iVar0 == &Global_265354->f_1[8])
	{
		return "NET_PLAYLIST_ELIMINATION_MEDIUM";
	}
	if (iVar0 == &Global_265354->f_1[9])
	{
		return "NET_PLAYLIST_ELIMINATION_LARGE";
	}
	if (iVar0 == &Global_265354->f_1[2])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_SMALL";
	}
	if (iVar0 == &Global_265354->f_1[3])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_MEDIUM";
	}
	if (iVar0 == &Global_265354->f_1[4])
	{
		return "NET_PLAYLIST_ADVERSARY_SERIES_LARGE";
	}
	if (iVar0 == &Global_265354->f_1[15])
	{
		return "NM_BUCKET_ORBIS_SERIES_1";
	}
	if (iVar0 == &Global_265354->f_1[16])
	{
		return "NM_BUCKET_ORBIS_SERIES_2";
	}
	if (iVar0 == &Global_265354->f_1[17])
	{
		return "NM_BUCKET_ORBIS_SERIES_3";
	}
	if (iVar0 == &Global_265354->f_1[19])
	{
		return "NET_PLAYLIST_CAPTURE";
	}
	if (iVar0 == &Global_265354->f_1[18])
	{
		return "NET_PLAYLIST_SHOOTOUT";
	}
	return "Unmapped bucket hash";
}

char* func_1384(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			switch (iParam1)
			{
				case 0:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 1:
					return "NM_BUCKET_RACE";
				case 2:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 3:
					return "NM_BUCKET_ADVERSARIAL";
				case 6:
					return "NM_BUCKET_NOMINATED_SERIES";
				case 5:
					return "NM_BUCKET_NOMINATED_SERIES_SMALL";
				case 7:
					return "NM_BUCKET_NOMINATED_SERIES_MEDIUM";
				case 8:
					return "NM_BUCKET_NOMINATED_SERIES_LARGE";
				case 23:
					return "NM_BUCKET_MISSION_2_PLAYER";
				case 24:
					return "NM_BUCKET_FOUR_PLAYER";
				case 25:
					return "NM_BUCKET_EIGHT_PLAYER";
				case 26:
					return "NM_BUCKET_MISSION_10_PLAYER";
				case 27:
					return "NM_BUCKET_TWELVE_PLAYER";
				case 28:
					return "NM_BUCKET_ADVERSARIAL";
				default:
					break;
			}
			break;
	}
	return "Invalid Net Matchmaking Bucket";
}

bool func_1385(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	clear_bit((*uParam0)[iVar0], iVar1);
	return bVar2;
}

bool func_1386(int iParam0)
{
	return (Global_1102219->f_26.f_9 && iParam0) == iParam0;
}

bool func_1387(var uParam0, int iParam1, int iParam2)
{
	iVar0 = (iParam1 / 31);
	iVar1 = (iParam1 % 31);
	bVar2 = is_bit_set(uParam0[iVar0], iVar1);
	set_bit((*uParam0)[iVar0], iVar1);
	return !bVar2;
}

bool func_1388()
{
	if (_inventory_get_ped_inventory_id(player_ped_id()) != 3)
	{
		return false;
	}
	return _0xfc7563f482781a3d();
}

int func_1389(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (!func_586(iParam0, 0))
	{
		return 0;
	}
	iVar1 = func_1050(iParam0);
	if (iVar1 == 307971639 || (bParam1 && iVar1 == -427144552))
	{
		iVar2 = func_1940(iParam0, 1);
		if (iVar2 != 0)
		{
			return get_ped_ammo_by_type(Global_34, iVar2);
		}
	}
	else if (iVar1 == -427144552)
	{
		return func_1941(iParam0, 0);
	}
	if (func_1684(iParam0, -455129387) != 0)
	{
		iVar0 = _0xe787f05dfc977bde(func_540(bParam2), iParam0, iParam3);
	}
	else
	{
		Var3 = { func_1942(iParam0, bParam2) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
			return 0;
		}
		iVar0 = _0xc97e0d2302382211(func_540(bParam2), &Var3, iParam3);
	}
	return iVar0;
}

bool func_1390(bool bParam0)
{
	if (func_619() == -1)
	{
		return true;
	}
	return _inventory_are_local_changes_allowed(func_540(bParam0));
}

bool func_1391(int iParam0)
{
	switch (iParam0)
	{
		case -1103707655:
		case 205718222:
		case 866168015:
			return true;
		default:
			break;
	}
	return false;
}

int func_1392(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1943(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_1945(func_1944(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1946(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 16), iVar0, uParam1);
	}
	return -1;
}

void func_1393(int iParam0, struct<17> Param1)
{
	if (iParam0 == -1)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			if (Global_1293346->f_20.f_1[iVar0]->f_1 == 1 || Global_1293346->f_20.f_1[iVar0]->f_1 == 5)
			{
				Global_1293346->f_20.f_1[iVar0]->f_4 = { Param1 };
			}
			return;
		}
		iVar0++;
	}
}

bool func_1394(int iParam0, int iParam1)
{
	if (!_0xb881ca836cc4b6d4(iParam0))
	{
		return false;
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!_0x4c543d5dfcd2dafd(Global_1291734->f_938[iVar0], iParam0))
			{
			}
			else
			{
				return Global_1291734->f_938[iVar0]->f_6;
			}
			iVar0++;
		}
	}
	else if (iParam1 == 2)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!_0x4c543d5dfcd2dafd(Global_1291734->f_938.f_271[iVar0], iParam0))
			{
			}
			else
			{
				return Global_1291734->f_938.f_271[iVar0]->f_6;
			}
			iVar0++;
		}
	}
	return false;
}

bool func_1395(int iParam0, int iParam1, bool bParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	func_1151(Global_1904087);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_1947(iParam0, Global_1904087, &(Global_1904087->f_53), bParam2))
			{
				return false;
			}
			break;
		case 2:
			if (!func_1948(iParam0, Global_1904087, &(Global_1904087->f_82), bParam2))
			{
				return false;
			}
			break;
	}
	return true;
}

bool func_1396(var uParam0, int iParam1)
{
	return func_1416(&(uParam0->f_20), iParam1);
}

void func_1397(var uParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		func_1949(uParam0, iParam1);
	}
	else
	{
		func_1950(uParam0, iParam1);
	}
}

bool func_1398(var uParam0)
{
	if (!func_1951(uParam0))
	{
		return false;
	}
	switch (uParam0->f_10)
	{
		case 0:
		case 1:
			if (!func_1952(uParam0))
			{
				return false;
			}
			break;
		case 2:
			if (!func_1953(uParam0))
			{
				return false;
			}
			break;
	}
	return true;
}

void func_1399(int iParam0, int iParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(iParam0))
	{
	}
	if (iParam1 == 0 || iParam1 == 1)
	{
		iVar0 = 0;
		while (iVar0 < 10)
		{
			if (!_0x4c543d5dfcd2dafd(Global_1291734->f_938[iVar0], iParam0))
			{
			}
			else
			{
				Global_1291734->f_938[iVar0]->f_6 = bParam2;
			}
			else
			{
				iVar0++;
			}
		}
	}
	else if (iParam1 == 2)
	{
		iVar0 = 0;
		while (iVar0 < 8)
		{
			if (!_0x4c543d5dfcd2dafd(Global_1291734->f_938.f_271[iVar0], iParam0))
			{
			}
			else
			{
				Global_1291734->f_938.f_271[iVar0]->f_6 = bParam2;
			}
			else
			{
				iVar0++;
			}
		}
	}
}

bool func_1400(int iParam0, int iParam1)
{
	if (!_0xb881ca836cc4b6d4(iParam0))
	{
		return false;
	}
	*iParam1 = 0;
	*iParam1 = 0;
	while (*iParam1 < 10)
	{
		if (!_0x4c543d5dfcd2dafd(Global_17411.f_55.f_61.f_41[*iParam1], iParam0))
		{
		}
		else
		{
			return true;
		}
		*iParam1++;
	}
	return false;
}

void func_1401(int iParam0, int iParam1, int iParam2)
{
	Global_17411.f_55.f_61.f_41[iParam0]->f_29[iParam1] = iParam2;
}

bool func_1402(int iParam0)
{
	if (iParam0 <= -1 || iParam0 >= 117)
	{
		return false;
	}
	return true;
}

bool func_1403(int iParam0, int iParam1)
{
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return false;
	}
	return ((*Global_1291106)[iParam1]->f_1 && iParam0) != 0;
}

void func_1404(int iParam0)
{
	func_729(3, iParam0);
}

int func_1405()
{
	return Global_1291734->f_929.f_5;
}

void func_1406(int iParam0)
{
	Var3.f_9 = -1591664384;
	if (!func_504("ALL HORSES", &iVar0, &iVar1, -1591664384, 0))
	{
		return;
	}
	if (iVar1 > 10)
	{
		iVar1 = 10;
	}
	iVar2 = 0;
	while (iVar2 < iVar1)
	{
		if (!func_1954(&Var3, iVar2, iVar0, iVar1, 0))
		{
		}
		else if (_0x4c543d5dfcd2dafd(&Var3, iParam0))
		{
		}
		else if (func_1416(&(Var3.f_24), 16))
		{
			func_1955(&(Var3.f_24), 16);
			func_1956(&Var3, 1, 1);
		}
		iVar2++;
	}
	func_508(iVar0);
}

bool func_1407(int iParam0, bool bParam1)
{
	if (!_0xb881ca836cc4b6d4(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (func_1795(iParam0, &Var0, bParam1))
	{
		if (func_1416(&(Var0.f_24), 16))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_1408(int iParam0, bool bParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (func_1795(iParam0, &Var0, bParam2))
	{
		bVar29 = func_1416(&(Var0.f_24), 16);
		if (bVar29 == bParam1)
		{
			return true;
		}
		else
		{
			Var30.f_9 = -1591664384;
			Var59.f_9 = -1591664384;
			if (bParam1)
			{
				if (!bVar29 && func_1145(&Var30, 0))
				{
					if (func_1149(&Var59, bParam2))
					{
						func_1955(&(Var59.f_24), 32);
						func_1956(&Var59, 1, bParam2);
					}
					func_1957(&(Var30.f_24), 32);
					func_1408(&Var30, 0, bParam2);
				}
				func_1957(&(Var0.f_24), 16);
				Var0.f_10 = 1;
			}
			else
			{
				if (bVar29 && func_1149(&Var59, bParam2))
				{
					func_1955(&(Var59.f_24), 32);
					func_1956(&Var59, 1, bParam2);
				}
				func_1957(&(Var0.f_24), 32);
				func_1955(&(Var0.f_24), 16);
				Var0.f_10 = 0;
			}
		}
		if (func_1956(&Var0, 1, bParam2))
		{
			return true;
		}
	}
	return false;
}

bool func_1409(int iParam0)
{
	if (iParam0 > -1 && iParam0 < 8)
	{
		return true;
	}
	return false;
}

void func_1410(int iParam0)
{
	Var2 = { func_522(0, -1591664384, -1591664384, -1591664384, 0, 0, -2072933068) };
	if (!func_523(&Var2, &iVar0, &iVar1, 0))
	{
		return;
	}
	if (iVar1 > 8)
	{
		iVar1 = 8;
	}
	Var16.f_9 = -1591664384;
	iVar40 = 0;
	while (iVar40 < iVar1)
	{
		if (!func_1958(&Var16, iVar40, iVar0, iVar1, 0))
		{
		}
		else if (_0x4c543d5dfcd2dafd(&Var16, iParam0))
		{
		}
		else if (func_1416(&(Var16.f_23), 16))
		{
			func_1955(&(Var16.f_23), 16);
			func_1959(&Var16, 1, 1);
		}
		iVar40++;
	}
	func_508(iVar0);
}

bool func_1411(int iParam0, bool bParam1)
{
	if (!_0xb881ca836cc4b6d4(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (func_1415(iParam0, &Var0, bParam1))
	{
		if (func_1416(&(Var0.f_23), 16))
		{
			return true;
		}
		return false;
	}
	return false;
}

bool func_1412(int iParam0, bool bParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (func_1415(iParam0, &Var0, bParam2))
	{
		bVar24 = func_1416(&(Var0.f_23), 16);
		if (bVar24 == bParam1)
		{
			return true;
		}
		else
		{
			Var25.f_9 = -1591664384;
			Var49.f_9 = -1591664384;
			if (bParam1)
			{
				if (!bVar24 && func_751(&Var25, 0))
				{
					if (func_758(&Var49, bParam2))
					{
						func_1955(&(Var49.f_23), 32);
						func_1959(&Var49, 1, bParam2);
					}
					func_1957(&(Var25.f_23), 32);
					func_1412(&Var25, 0, bParam2);
				}
				func_1957(&(Var0.f_23), 16);
				Var0.f_10 = 1;
			}
			else
			{
				if (bVar24 && func_758(&Var49, bParam2))
				{
					func_1955(&(Var49.f_23), 32);
					func_1959(&Var49, 1, bParam2);
				}
				func_1957(&(Var0.f_23), 32);
				func_1955(&(Var0.f_23), 16);
				Var0.f_10 = 0;
			}
		}
		if (func_1959(&Var0, 1, bParam2))
		{
			return true;
		}
	}
	return false;
}

void func_1413(int iParam0)
{
	iVar0 = network_player_id_to_int();
	(*Global_1291106)[iVar0]->f_2 = ((*Global_1291106)[iVar0]->f_2 || iParam0);
}

bool func_1414(var uParam0, int iParam1, int iParam2, int iParam3)
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

bool func_1415(int iParam0, int iParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(iParam0))
	{
		return false;
	}
	iVar0 = func_540(bParam2);
	if (!_0x025a1b1fb03fbf61(iVar0, iParam0, iParam1, 24, 1))
	{
		return false;
	}
	return true;
}

bool func_1416(int iParam0, int iParam1)
{
	return func_576(*iParam0, iParam1);
}

int func_1417(int iParam0)
{
	if (!&Global_1048577)
	{
		return 3;
	}
	iVar0 = (*Global_263042)[iParam0]->f_1.f_21.f_2;
	iVar1 = func_1960(iVar0);
	iVar2 = func_1961(iVar0, iVar1);
	return iVar2;
}

bool func_1418(var uParam0, int iParam1)
{
	iVar0 = (iParam1 / 32);
	iVar1 = (iParam1 - iVar0 * 32);
	return is_bit_set(uParam0[iVar0], iVar1);
}

int func_1419(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -2119268333;
		case 1:
			return -1827170883;
		case 2:
			return 2014102137;
		default:
			break;
	}
	return 0;
}

void func_1420(int iParam0)
{
	_databinding_clear_binding_array(Global_1940311->f_242.f_5);
	iVar0 = iParam0;
	iVar1 = 29;
	while (iVar1 >= 0)
	{
		if (!_databinding_read_data_bool(Global_1940311->f_242.f_14[iVar1]->f_37))
		{
		}
		else if (func_1962() != 0)
		{
			if (_databinding_read_data_int(Global_1940311->f_242.f_14[iVar1]->f_24) != iVar0)
			{
			}
			else
			{
				_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1940311->f_242.f_5, iVar2, "pm_invite_item", &(Global_1940311->f_242.f_14[iVar1]));
				iVar2++;
			}
			iVar1 = (iVar1 + -1);
			Global_1940311->f_242.f_1189 = 0;
			Global_1940311->f_242.f_1187 = iVar2;
		}
	}
}

int func_1421(var uParam0)
{
	if (!func_1485())
	{
		return 4;
	}
	if (!network_is_handle_valid(uParam0))
	{
		return 1;
	}
	if (!network_is_gamer_in_my_session(uParam0))
	{
		return 2;
	}
	iVar0 = network_get_player_from_gamer_handle(uParam0);
	if (!_network_is_player_index_valid(iVar0))
	{
		return 3;
	}
	if (!network_is_player_active(iVar0))
	{
		return 5;
	}
	if (!func_1963(iVar0))
	{
		return 6;
	}
	if (func_1964(*uParam0) != 0)
	{
		return 7;
	}
	return 0;
}

bool func_1422(int iParam0, int iParam1)
{
	if (iParam0 == player_id())
	{
		_0xc08aff658b2e51da(&iVar7);
		Var8.f_27 = 10;
		if (iVar7 != 0)
		{
			Var0 = { func_650() };
			if (_0xc087ff658b2e51da(iVar7, &Var8))
			{
				iVar126 = 0;
				while (iVar126 <= 9)
				{
					if (network_are_handles_the_same(Var8.f_27[iVar126], &Var0))
					{
						*iParam1 = Var8.f_27[iVar126]->f_7;
						return true;
					}
					iVar126++;
				}
			}
		}
		else
		{
			*iParam1 = 0;
			return true;
		}
	}
	else if (network_is_player_active(iParam0))
	{
		Var0 = { func_573(iParam0) };
		Var127.f_18 = 10;
		iVar226 = 0;
		while (iVar226 <= (_0xc084ff658b2e61da(&Var0) - 1))
		{
			if (_0xc084ff658b2e71da(&Var0, iVar226, &Var127))
			{
				if (Var127.f_9 == 1)
				{
					iVar227 = 0;
					while (iVar227 <= (Var127.f_17 - 1))
					{
						if (network_are_handles_the_same(Var127.f_18[iVar227], &Var0))
						{
							*iParam1 = Var127.f_18[iVar227]->f_7;
							return true;
						}
						iVar227++;
					}
				}
				else
				{
					iVar226++;
				}
				return false;
				Jump @268; //curOff = 261
				return false;
				return false;
			}
		}
	}
}

char* func_1423(int iParam0)
{
	if (iParam0 >= 32 || iParam0 < 0)
	{
		return "-";
	}
	return _create_var_string(2, "NUMBER", Global_1145091[iParam0]);
}

void func_1424(var uParam0, struct<62> Param1, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88)
{
	_databinding_write_data_hash_string(uParam0->f_3, Param1.f_2);
	_databinding_write_data_hash_string(uParam0->f_21, Param1.f_19);
	_databinding_write_data_hash_string(uParam0->f_22, Param1.f_20);
	_databinding_write_data_bool(uParam0->f_23, Param1.f_21);
	_databinding_write_data_string(uParam0->f_27, &(Param1.f_25));
	_databinding_write_data_string(uParam0->f_28, &(Param1.f_41));
	_databinding_write_data_bool(uParam0->f_29, Param1.f_57);
	_databinding_write_data_hash_string(uParam0->f_31, Param1.f_59);
	_databinding_write_data_hash_string(uParam0->f_32, Param1.f_60);
	_databinding_write_data_bool(uParam0->f_33, Param1.f_61);
}

void func_1425()
{
	iVar0 = _databinding_read_data_int(Global_1940311->f_242.f_14[Global_1940311->f_242.f_1190]->f_27);
	Var1.f_8 = -1;
	Var1.f_8.f_1 = -1;
	Var1.f_16.f_12 = -1;
	Var1.f_16.f_12.f_1 = -1;
	Var1.f_16.f_14 = 255;
	Var1.f_16.f_15 = 255;
	if (Global_1071686->f_16 > 0 && iVar0 < 10)
	{
		Var1 = { *Global_1071686->f_16.f_5[iVar0] };
	}
	if (!Var1)
	{
		return;
	}
	Var36 = { Var1.f_8 };
	iVar38 = func_1244(Var36);
	switch (iVar38)
	{
		case 20:
		case 21:
		case 28:
			iVar39 = _databinding_read_data_int(Global_1940311->f_242.f_14[iVar0]->f_25);
			iVar40 = (Global_1296859->f_21 - (iVar39 - (Global_1901947->f_308.f_169 / 1000)));
			_0xf37a2149bc9a8a27(729112912, Var1.f_16.f_1, player_id(), 0, iVar40);
			break;
	}
}

bool func_1426(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return true;
		case 16:
			return true;
		case 17:
			return true;
		case 1:
			return true;
		default:
			break;
	}
	return false;
}

char* func_1427(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 8:
			iVar17 = _databinding_read_data_int(Global_1940311->f_242.f_14[iParam1]->f_28);
			if (!_network_is_player_index_valid(iVar17))
			{
				return sVar0;
			}
			switch (func_1437(&Var1, iVar17, 1))
			{
				case 1:
					return sVar0;
				case 2:
					if (func_1965() == 0)
					{
						func_1438(int_to_playerindex(iVar17));
					}
					return sVar0;
				case 3:
					return sVar0;
				case 4:
					sVar0 = func_672(Var1);
					return sVar0;
				default:
					break;
			}
			break;
		case 1:
			Var19 = { func_573(player_id()) };
			func_1341(&Var19);
			uVar18 = _0x27b1ae4d8c652f08(_databinding_read_data_int(Global_1940311->f_242.f_14[iParam1]->f_27));
			_0x16efb123c4451032(uVar18, &Var19);
			func_1341(&Var19);
			if (!func_34(Var19))
			{
				return sVar0;
			}
			sVar0 = _0xb5c4b18b12a2af23(&Var19, 0);
			if (is_string_null_or_empty(sVar0))
			{
				return sVar0;
			}
			break;
	}
	return sVar0;
}

var func_1428(var uParam0)
{
	iVar0 = uParam0;
	if (iVar0 < 0 || iVar0 >= 58)
	{
		return uVar1;
	}
	return Global_1896738->f_3715[iVar0]->f_3;
}

int func_1429()
{
	if (func_835() && func_1488(16) == 0)
	{
		return 3;
	}
	if (func_836())
	{
		return 4;
	}
	if (func_830() || func_831())
	{
		return 3;
	}
	if (_unlock_is_unlocked(-2019230505) == 0)
	{
		return 2;
	}
	if (func_419())
	{
		return 1;
	}
	return 0;
}

void func_1430(bool bParam0)
{
	_databinding_write_data_bool(Global_1940311->f_1433.f_157.f_192, bParam0);
}

void func_1431(char* sParam0)
{
	_databinding_write_data_string(Global_1940311->f_1433.f_157.f_193, sParam0);
}

bool func_1432(int iParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_222(uParam1))
		{
			return false;
		}
	}
	StringCopy(&cVar0, "Posse_Entry_Root_", 64);
	StringIntConCat(&cVar0, _databinding_get_array_count(Global_1940311->f_1433.f_157.f_1), 64);
	uVar8 = _databinding_add_data_container(Global_1940311->f_1433.f_157.f_1, &cVar0);
	_databinding_add_data_bool(uVar8, func_58(0), true);
	_databinding_add_data_bool(uVar8, func_58(1), true);
	_databinding_add_data_hash(uVar8, func_58(2), 1105014447);
	_databinding_add_data_hash(uVar8, func_58(55), 1433015236);
	_databinding_add_data_hash(uVar8, func_58(57), 298326212);
	_databinding_add_data_hash(uVar8, func_58(56), 298326212);
	_databinding_add_data_hash(uVar8, func_58(58), -672301300);
	_databinding_add_data_bool(uVar8, func_58(59), true);
	_databinding_add_data_bool(uVar8, func_58(60), true);
	bVar9 = func_192(uParam1);
	bVar10 = func_788(uParam1);
	bVar11 = func_994(uParam1);
	bVar12 = func_782(uParam1);
	_databinding_add_data_string(uVar8, func_58(15), func_811(uParam1));
	_databinding_add_data_hash(uVar8, func_58(5), 469293194);
	if (func_1487(uParam1))
	{
		_databinding_add_data_hash(uVar8, func_58(6), 202246788);
	}
	else
	{
		_databinding_add_data_hash(uVar8, func_58(6), -799556240);
	}
	_databinding_add_data_bool(uVar8, func_58(7), bVar9);
	_databinding_add_data_hash(uVar8, func_58(4), 551037070);
	_databinding_add_data_hash(uVar8, func_58(21), 1442026401);
	_databinding_add_data_hash(uVar8, func_58(22), -1218088854);
	_databinding_add_data_bool(uVar8, func_58(23), (bVar11 && bVar10));
	IntToString(&cVar13, func_1455(uParam1), 64);
	StringConCat(&cVar13, "/", 64);
	StringIntConCat(&cVar13, func_1436(uParam1), 64);
	_databinding_add_data_string(uVar8, func_58(17), func_1354(cVar13));
	_databinding_add_data_bool(uVar8, func_58(19), !(bVar11 && bVar10));
	if (!bVar11)
	{
		_databinding_add_data_bool(uVar8, func_58(0), bVar12);
		if (bVar12)
		{
		}
	}
	_databinding_add_data_bool(uVar8, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_LOCAL_MEMBERSHIP", bVar9);
	_databinding_add_data_gang_id(uVar8, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_GANG_ID", uParam1->f_1);
	_0x7d0f2014db28dd01(uVar8, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_ID", uParam1->f_2);
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1940311->f_1433.f_157.f_1, iParam0, "pm_dynamic_posse_entry", uVar8);
	return true;
}

bool func_1433(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 < 0 || iParam0 >= _databinding_get_array_count(Global_1940311->f_1433.f_157.f_1))
	{
		return false;
	}
	if (bParam2)
	{
		if (!func_222(uParam1))
		{
			return false;
		}
	}
	uVar0 = _databinding_get_item_context_by_index(Global_1940311->f_1433.f_157.f_1, iParam0);
	if (!_databinding_is_data_id_valid(uVar0))
	{
		return false;
	}
	bVar1 = func_192(uParam1);
	bVar2 = func_788(uParam1);
	bVar3 = func_994(uParam1);
	bVar4 = func_782(uParam1);
	_databinding_write_data_string_from_parent(uVar0, func_58(15), func_811(uParam1));
	if (bVar1)
	{
		_databinding_write_data_hash_string_from_parent(uVar0, func_58(5), 469293194);
		_databinding_write_data_hash_string_from_parent(uVar0, func_58(4), 551037070);
		_databinding_write_data_bool_from_parent(uVar0, func_58(7), (bVar1 && bVar3));
		if (func_1487(uParam1))
		{
			_databinding_write_data_hash_string_from_parent(uVar0, func_58(6), 202246788);
		}
		else
		{
			_databinding_write_data_hash_string_from_parent(uVar0, func_58(6), 1292500213);
		}
	}
	else
	{
		_databinding_write_data_hash_string_from_parent(uVar0, func_58(5), 1210712530);
		_databinding_write_data_bool_from_parent(uVar0, func_58(7), !bVar4);
		if (!bVar4)
		{
			_databinding_write_data_hash_string_from_parent(uVar0, func_58(4), -2028925062);
			_databinding_write_data_hash_string_from_parent(uVar0, func_58(6), 566347780);
		}
	}
	_databinding_write_data_bool_from_parent(uVar0, func_58(23), (bVar3 && bVar2));
	IntToString(&cVar5, func_1455(uParam1), 64);
	StringConCat(&cVar5, "/", 64);
	StringIntConCat(&cVar5, func_1436(uParam1), 64);
	_databinding_write_data_string_from_parent(uVar0, func_58(17), func_1354(cVar5));
	_databinding_write_data_bool_from_parent(uVar0, func_58(19), !(bVar3 && bVar2));
	_databinding_write_data_bool_from_parent(uVar0, func_58(0), bVar4);
	_databinding_write_data_bool_from_parent(uVar0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_LOCAL_MEMBERSHIP", bVar1);
	_0xc70041408e16be2d(uVar0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_GANG_ID", uParam1->f_1);
	_0xc70041408e16be2e(uVar0, "PM_PE_DATABINDING_ENTRY_TYPE_POSSE_ID", uParam1->f_2);
	return true;
}

int func_1434()
{
	return func_783(Global_1940311->f_1433);
}

int func_1435(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	else if (_0xc088ff658b2e51da() == 0)
	{
		return 0;
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (&Global_1194053->f_503[iVar0] == iParam0)
			{
				return 1;
			}
			iVar0++;
		}
	}
	return 0;
}

int func_1436(var uParam0)
{
	return uParam0->f_37;
}

int func_1437(char* sParam0, int iParam1, int iParam2)
{
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 1;
	}
	iVar0 = int_to_playerindex(iParam1);
	if (!network_is_player_active(iVar0))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	iVar2 = func_1966(iParam1, iParam2);
	switch (iParam2)
	{
		case 0:
			network_handle_from_player(int_to_playerindex(iParam1), &uVar3);
			if (!network_is_handle_valid(&uVar3))
			{
				return 1;
			}
			StringCopy(sParam0, _0xb5c4b18b12a2af23(&uVar3, iParam2), 128);
			return 4;
		case 1:
		case 2:
			switch (iVar2)
			{
				case 0:
				default:
					return 1;
					return 2;
				case 1:
					return 3;
				case 2:
					iVar10 = func_1967(iParam2);
					iVar1 = _local_player_pedshot_texture_download_request(iParam1, iVar10);
					if (iVar1 == -1)
					{
						return 3;
					}
					else if (iVar1 == 0)
					{
						func_1968(iParam1, iParam2, 0);
						return 1;
					}
					func_1969(iParam1, iParam2, iVar1);
					func_1968(iParam1, iParam2, 3);
					break;
				case 3:
					iVar1 = func_1970(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1968(iParam1, iParam2, 0);
						return 1;
					}
					iVar11 = _get_status_of_texture_download(iVar1);
					switch (iVar11)
					{
						case 0:
							func_1968(iParam1, iParam2, 4);
							return 3;
						case 1:
							return 3;
						case 2:
							func_1968(iParam1, iParam2, 0);
							return 1;
						default:
							break;
					}
					break;
				case 4:
					iVar1 = func_1970(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1968(iParam1, iParam2, 0);
						return 1;
					}
					sVar12 = texture_download_get_name(iVar1);
					if (_0x375f5870a7b8bec1(sVar12))
					{
						return 3;
					}
					func_1968(iParam1, iParam2, 5);
					break;
				case 5:
					iVar1 = func_1970(iParam1, iParam2);
					if (iVar1 == 0)
					{
						func_1968(iParam1, iParam2, 0);
						return 1;
					}
					StringCopy(sParam0, texture_download_get_name(iVar1), 128);
					return 4;
			}
			break;
	}
	return 3;
}

void func_1438(int iParam0)
{
	Var0.f_3 = 0;
	Var0.f_1 = 1;
	Var0 = 2;
	_0x31010318ba9897ac(&(Var0.f_2), iParam0);
	func_1971(&Var0);
}

void func_1439(var uParam0, struct<4> Param1)
{
	_databinding_write_data_bool(uParam0->f_1, Param1);
	_databinding_write_data_bool(uParam0->f_2, Param1.f_1);
	_databinding_write_data_hash_string(uParam0->f_3, Param1.f_2);
	_databinding_write_data_hash_string(uParam0->f_4, Param1.f_3);
}

char* func_1440(var uParam0)
{
	return func_672(uParam0->f_13);
}

int func_1441(var uParam0)
{
	return uParam0->f_91;
}

bool func_1442(int iParam0)
{
	if (iParam0 < 0)
	{
		return false;
	}
	if (iParam0 >= 16)
	{
		return false;
	}
	return func_1972(Global_1139381->f_11.f_3222.f_320[iParam0], 1);
}

int func_1443(var uParam0)
{
	iVar52 = _0xd1bf325c8252a982(uParam0->f_1, &Var2);
	iVar53 = 0;
	while (iVar53 < iVar52)
	{
		iVar54 = network_get_player_from_gamer_handle(Var2[iVar53]);
		iVar1 = func_495(iVar54, 0);
		switch (iVar1)
		{
			case 0:
			case 1:
				if (iVar0 < 1)
				{
					iVar0 = 0;
				}
				break;
			case 2:
			case 3:
				if (iVar0 < 2)
				{
					iVar0 = 1;
				}
				break;
			case 4:
			case 5:
			case 6:
				iVar0 = 2;
				break;
		}
		iVar53++;
	}
	return iVar0;
}

void func_1444(var uParam0, struct<51> Param1, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, bool bParam67)
{
	_databinding_write_data_bool(uParam0->f_1, Param1);
	if (Param1 || bParam67)
	{
		_databinding_write_data_string(uParam0->f_46, &(Param1.f_1));
		_databinding_write_data_string(uParam0->f_47, &(Param1.f_17));
		_databinding_write_data_hash_string(uParam0->f_48, Param1.f_33);
		_databinding_write_data_string(uParam0->f_49, &(Param1.f_34));
		_databinding_write_data_string(uParam0->f_50, &(Param1.f_50));
	}
}

void func_1445(var uParam0)
{
	_copy_memory(&(uParam0->f_1), &uVar0, 7);
	uParam0->f_24 = 0;
	StringCopy(&(uParam0->f_8), "", 128);
	*uParam0 = 0;
	uParam0->f_27 = -1;
	uParam0->f_28 = -1;
	uParam0->f_25 = -1;
}

int func_1446()
{
	return Global_1940311->f_1433.f_9184.f_244;
}

float func_1447(var uParam0)
{
	if (!func_959(uParam0))
	{
		return 0f;
	}
	if (func_1621(uParam0))
	{
		return uParam0->f_2;
	}
	return (func_1622() - uParam0->f_1);
}

bool func_1448(int iParam0)
{
	if (Global_1896738->f_393.f_2691 >= 32)
	{
		return false;
	}
	func_1445(Global_1896738->f_393.f_2[Global_1896738->f_393.f_2691]);
	Global_1896738->f_393.f_2[Global_1896738->f_393.f_2691]->f_27 = -1419617212;
	Global_1896738->f_393.f_2[Global_1896738->f_393.f_2691]->f_28 = iParam0;
	Global_1896738->f_393.f_2[Global_1896738->f_393.f_2691] = 0;
	Global_1896738->f_393.f_2691++;
	return true;
}

int func_1449(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	uParam0->f_19 = 469293194;
	uParam0->f_20 = 1292500213;
	func_577(&(uParam1->f_25), 256);
	iVar0 = network_get_player_from_gamer_handle(&(uParam1->f_1));
	if (!_network_is_player_index_valid(iVar0))
	{
		return 1;
	}
	iVar1 = _0x901e0dc25080c8b9(iVar0);
	if (!_0xd6f6acf4392187fb(iVar1))
	{
		return 1;
	}
	if (!_0x0f99f6436528a089(iVar1))
	{
		return 1;
	}
	if (_0x424b17a7dc5c90bc(iVar0))
	{
		uParam0->f_20 = 202246788;
	}
	return 1;
}

int func_1450(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	if (!network_is_gamer_in_my_session(&(uParam1->f_1)))
	{
		return 1;
	}
	iVar0 = network_get_player_from_gamer_handle(&(uParam1->f_1));
	if (!_network_is_player_index_valid(iVar0))
	{
		return 1;
	}
	bVar1 = (_0xaa35fd9abab490a3(iVar0) && _0xef6f2a35faaf2ed7(iVar0));
	if (_0x0ded260a1958a82e(iVar0))
	{
		uParam0->f_20 = -2020914324;
		uParam0->f_19 = 469293194;
	}
	else if (bVar1)
	{
		uParam0->f_20 = -129728325;
		uParam0->f_19 = 469293194;
	}
	func_577(&(uParam1->f_25), 256);
	return 1;
}

int func_1451(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	func_577(&(uParam1->f_25), 128);
	bVar0 = false;
	iVar18 = 255;
	if (network_is_gamer_in_my_session(&(uParam1->f_1)))
	{
		iVar18 = network_get_player_from_gamer_handle(&(uParam1->f_1));
		if (_network_is_player_index_valid(iVar18))
		{
			bVar0 = true;
		}
	}
	else
	{
		bVar0 = false;
	}
	if (bVar0)
	{
		iVar17 = func_1437(&uVar1, iVar18, 1);
		if (iVar17 != 4)
		{
			bVar0 = false;
		}
	}
	if (!bVar0)
	{
		iVar17 = func_1973(&uVar1, uParam1->f_1, 0);
	}
	switch (iVar17)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			uParam0->f_16 = 1700592256;
			uParam0->f_17 = 1434360011;
			uParam0->f_18 = 1;
			return 1;
		case 4:
			if (is_string_null_or_empty(&uVar1))
			{
				uParam0->f_16 = 1700592256;
				uParam0->f_17 = 1434360011;
				uParam0->f_18 = 1;
			}
			else
			{
				uParam0->f_16 = get_hash_key(&uVar1);
				uParam0->f_17 = uParam0->f_16;
				uParam0->f_18 = 1;
			}
			return 1;
		default:
			break;
	}
	return 1;
}

int func_1452(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	if (!network_is_gamer_in_my_session(&(uParam1->f_1)))
	{
		return 0;
	}
	iVar0 = network_get_player_from_gamer_handle(&(uParam1->f_1));
	if (!_network_is_player_index_valid(iVar0))
	{
		return 0;
	}
	if (!network_is_player_active(iVar0))
	{
		return 0;
	}
	uParam1->f_24 = func_1604(iVar0);
	uParam0->f_59 = -1693157378;
	uParam0->f_60 = -1120556042;
	uParam0->f_61 = 1;
	StringCopy(&(uParam0->f_41), func_1974(uParam1->f_24), 128);
	uParam0->f_57 = 1;
	func_577(&(uParam1->f_25), 1536);
	return 1;
}

int func_1453(var uParam0, char* sParam1)
{
	Var0 = { func_191(1) };
	switch (uParam0->f_27)
	{
		case 791621612:
			StringCopy(sParam1, _create_var_string(2, "NM_MW_POSSE_MEMBER_LOCKED_FOOTER"), 128);
			return 1;
		case -1419617212:
			if (!func_788(&Var0) && func_1487(&Var0))
			{
				StringCopy(sParam1, _create_var_string(2, "NM_POSSE_REFORM_TOOLTIP"), 128);
				return 1;
			}
			break;
	}
	return 0;
}

int func_1454(var uParam0, var uParam1, bool bParam2)
{
	func_577(&(uParam1->f_25), 8192);
	if (bParam2)
	{
	}
	Var0 = { func_191(1) };
	switch (uParam1->f_27)
	{
		case -1419617212:
			uParam0->f_9 = func_1487(&Var0);
			uParam0->f_8 = ((func_1487(&Var0) && func_665()) && func_788(&Var0));
			break;
	}
	return 1;
}

int func_1455(var uParam0)
{
	return uParam0->f_36;
}

int func_1456(var uParam0)
{
	if (uParam0->f_4)
	{
		return 7;
	}
	else
	{
		return 4;
	}
	return 0;
}

bool func_1457(var uParam0, int iParam1, var uParam2)
{
	if (iParam1 < 0 || iParam1 >= uParam0->f_36)
	{
		return false;
	}
	_copy_memory(uParam2, uParam0->f_38[iParam1], 7);
	return true;
}

bool func_1458(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7)
{
	if (!network_is_handle_valid(&(uParam0->f_29)))
	{
		return false;
	}
	if (!network_is_handle_valid(&uParam1))
	{
		return false;
	}
	return network_are_handles_the_same(&(uParam0->f_29), &uParam1);
}

int func_1459(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	if (iParam1 < 0 || iParam1 >= 32)
	{
		return 0;
	}
	Var0.f_27 = -1;
	Var0.f_28 = -1;
	func_1975(&Var0, Global_1896738->f_393.f_2[iParam0]);
	func_1975(Global_1896738->f_393.f_2[iParam0], Global_1896738->f_393.f_2[iParam1]);
	func_1975(Global_1896738->f_393.f_2[iParam1], &Var0);
	return 1;
}

bool func_1460(int iParam0)
{
	if (Global_1896738->f_393.f_2691 >= 32)
	{
		return false;
	}
	func_1445(Global_1896738->f_393.f_2[Global_1896738->f_393.f_2691]);
	Global_1896738->f_393.f_2[Global_1896738->f_393.f_2691]->f_27 = 791621612;
	Global_1896738->f_393.f_2[Global_1896738->f_393.f_2691]->f_28 = iParam0;
	Global_1896738->f_393.f_2[Global_1896738->f_393.f_2691] = 0;
	Global_1896738->f_393.f_2691++;
	return true;
}

bool func_1461(var uParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46, var uParam47, var uParam48, var uParam49, var uParam50, var uParam51, var uParam52, var uParam53, var uParam54, var uParam55, var uParam56, var uParam57, var uParam58, var uParam59, var uParam60, var uParam61, var uParam62, var uParam63, var uParam64, var uParam65, var uParam66, var uParam67, var uParam68, var uParam69, var uParam70, var uParam71, var uParam72, var uParam73, var uParam74, var uParam75, var uParam76, var uParam77, var uParam78, var uParam79, var uParam80, var uParam81, var uParam82, var uParam83, var uParam84, var uParam85, var uParam86, var uParam87, var uParam88, var uParam89, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, int iParam96)
{
	if (!func_222(&uParam1))
	{
		return false;
	}
	Var0 = 1;
	if (network_is_player_active(iParam96))
	{
		Var0 = 1;
	}
	else
	{
		Var0 = 0;
		return false;
	}
	Var5 = { func_573(iParam96) };
	Var0.f_1 = func_1458(&uParam1, Var5);
	if (Var0.f_1)
	{
	}
	if (func_1442(func_1316(iParam96)))
	{
		Var0.f_2 = "NM_HONOR_GOOD";
	}
	else
	{
		Var0.f_2 = "NM_HONOR_BAD";
	}
	iVar12 = func_495(iParam96, 0);
	switch (iVar12)
	{
		case 0:
		case 1:
			Var0.f_3 = "HOSTILITY_NLOW";
			Var0.f_4 = 1105014447;
			break;
		case 2:
		case 3:
			Var0.f_3 = "HOSTILITY_NMED";
			Var0.f_4 = 1105014447;
			break;
		case 4:
		case 5:
		case 6:
			Var0.f_3 = "HOSTILITY_NHIGH";
			Var0.f_4 = 859817522;
			break;
		default:
			Var0.f_3 = "HOSTILITY_NMED";
			Var0.f_4 = 1105014447;
			break;
	}
	func_1976(uParam0, Var0, 0);
	return true;
}

void func_1462(var uParam0)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	Var0.f_21 = 1;
	Var0.f_86 = 255;
	Var0.f_87 = -2147483647;
	_copy_memory(uParam0, &Var0, 88);
}

bool func_1463(var uParam0)
{
	if (uParam0->f_27 == 791621612 || uParam0->f_27 == -1419617212)
	{
		return true;
	}
	if (!network_is_handle_valid(&(uParam0->f_1)))
	{
		return false;
	}
	if (is_string_null_or_empty(func_672(uParam0->f_8)))
	{
		return false;
	}
	return true;
}

bool func_1464(var uParam0)
{
	switch (uParam0->f_27)
	{
		case -1178838578:
			if (func_1421(&(uParam0->f_1)) != 0)
			{
				if (uParam0->f_27 != -462010351)
				{
					uParam0->f_27 = -462010351;
					return true;
				}
			}
			break;
		case -462010351:
			if (func_1421(&(uParam0->f_1)) == 0)
			{
				if (uParam0->f_27 != -1178838578)
				{
					uParam0->f_27 = -1178838578;
					return true;
				}
			}
			break;
	}
	return false;
}

void func_1465(var uParam0, int iParam1)
{
	*uParam0 = iParam1;
}

int func_1466()
{
	if (!_databinding_is_data_id_valid(Global_1896738->f_393.f_1))
	{
		return 0;
	}
	return _databinding_get_array_count(Global_1896738->f_393.f_1);
}

bool func_1467(var uParam0)
{
	return *uParam0;
}

bool func_1468(var uParam0, int iParam1, int iParam2)
{
	if (iParam1 == -1)
	{
		return false;
	}
	if (iParam2 == -1)
	{
		return false;
	}
	*uParam0 = 1;
	uParam0->f_4 = 1433015236;
	uParam0->f_6 = 0;
	uParam0->f_5 = 0;
	uParam0->f_3 = 0;
	uParam0->f_8 = 0;
	uParam0->f_9 = 0;
	uParam0->f_7 = 0;
	uParam0->f_18 = 1;
	uParam0->f_17 = 0;
	uParam0->f_16 = 0;
	uParam0->f_21 = 1;
	uParam0->f_20 = 1292500213;
	uParam0->f_19 = 469293194;
	uParam0->f_61 = 0;
	uParam0->f_2 = 1105014447;
	switch (iParam1)
	{
		case -1178838578:
			uParam0->f_16 = 1442026401;
			uParam0->f_17 = -1102349958;
			uParam0->f_18 = 1;
			uParam0->f_57 = 1;
			uParam0->f_58 = 1;
			uParam0->f_61 = 1;
			uParam0->f_60 = -1120556042;
			uParam0->f_59 = -1693157378;
			break;
		case -462010351:
			uParam0->f_21 = 1;
			uParam0->f_8 = 1;
			uParam0->f_9 = 1;
			uParam0->f_7 = -672301300;
			uParam0->f_5 = 252544183;
			uParam0->f_6 = 252544183;
			break;
		case 791621612:
			uParam0->f_8 = 0;
			uParam0->f_5 = -1015941340;
			uParam0->f_18 = 0;
			uParam0->f_19 = 1210712530;
			uParam0->f_20 = 566347780;
			StringCopy(&(uParam0->f_25), _create_var_string(2, "NM_PW_PLAYER_SLOT_LOCKED"), 128);
			uParam0->f_2 = 1475463663;
			break;
		case -1419617212:
			uParam0->f_8 = 0;
			uParam0->f_5 = -974997823;
			uParam0->f_18 = 0;
			uParam0->f_21 = 0;
			StringCopy(&(uParam0->f_25), _create_var_string(2, "NM_PW_PLAYER_SLOT_EMPTY"), 128);
			uParam0->f_2 = 1475463663;
			break;
	}
	switch (iParam2)
	{
		case 11:
			uParam0->f_5 = -758886156;
			uParam0->f_6 = -758886156;
			uParam0->f_9 = 1;
			uParam0->f_8 = 1;
			uParam0->f_7 = 469385923;
			if (is_durango_version())
			{
				uParam0->f_64 = 1;
				uParam0->f_65 = 1;
				uParam0->f_66 = -523963307;
				uParam0->f_63 = 2073125152;
			}
			break;
		case 0:
		case 1:
		case 2:
		case 3:
			uParam0->f_3 = -1105836878;
			uParam0->f_5 = 252544183;
			uParam0->f_6 = 252544183;
			uParam0->f_8 = 1;
			uParam0->f_9 = 1;
			uParam0->f_7 = -672301300;
			switch (iParam1)
			{
				case -1178838578:
					uParam0->f_74 = -1333411438;
					uParam0->f_73 = 1;
					uParam0->f_70 = 295375257;
					uParam0->f_69 = 1;
					break;
				case -462010351:
					uParam0->f_3 = -1105836878;
					break;
			}
			break;
		case 4:
			uParam0->f_5 = -779773310;
			uParam0->f_9 = 1;
			uParam0->f_7 = 1722688309;
			if (is_durango_version())
			{
				uParam0->f_64 = 1;
				uParam0->f_65 = 1;
				uParam0->f_66 = -523963307;
				uParam0->f_63 = 2073125152;
			}
			break;
		case 5:
			switch (iParam1)
			{
				case -1178838578:
					uParam0->f_3 = -1105836878;
					uParam0->f_5 = -1103748417;
					uParam0->f_6 = -1103748417;
					uParam0->f_8 = 1;
					uParam0->f_9 = 1;
					uParam0->f_7 = -672301300;
					break;
				case -462010351:
					uParam0->f_3 = -1105836878;
					uParam0->f_5 = 252544183;
					uParam0->f_6 = -1103748417;
					uParam0->f_8 = 1;
					uParam0->f_9 = 1;
					uParam0->f_7 = -672301300;
					break;
				case 791621612:
					uParam0->f_8 = 0;
					uParam0->f_5 = -1015941340;
					uParam0->f_18 = 0;
					break;
				case -1419617212:
					uParam0->f_3 = -1224643444;
					uParam0->f_9 = 1;
					uParam0->f_7 = 469385923;
					uParam0->f_8 = 1;
					uParam0->f_8 = 0;
					uParam0->f_5 = -974997823;
					uParam0->f_18 = 0;
					uParam0->f_21 = 0;
					uParam0->f_2 = 1475463663;
					break;
			}
			break;
		case 6:
			switch (iParam1)
			{
				case -1178838578:
					uParam0->f_3 = -1105836878;
					uParam0->f_5 = -1103748417;
					uParam0->f_6 = -1103748417;
					uParam0->f_8 = 1;
					uParam0->f_9 = 1;
					uParam0->f_7 = -672301300;
					break;
				case -462010351:
					uParam0->f_3 = -1105836878;
					uParam0->f_5 = 252544183;
					uParam0->f_6 = -1103748417;
					uParam0->f_8 = 1;
					uParam0->f_9 = 1;
					uParam0->f_7 = -672301300;
					break;
				case -1419617212:
					uParam0->f_8 = 0;
					uParam0->f_5 = -974997823;
					uParam0->f_18 = 0;
					uParam0->f_21 = 0;
					uParam0->f_2 = 1475463663;
					break;
			}
			break;
		case 7:
		case 8:
		case 9:
		case 10:
			uParam0->f_5 = 1229094512;
			uParam0->f_6 = 1229094512;
			uParam0->f_9 = 1;
			uParam0->f_7 = 469385923;
			if (is_durango_version())
			{
				uParam0->f_64 = 1;
				uParam0->f_65 = 1;
				uParam0->f_66 = -523963307;
				uParam0->f_63 = 2073125152;
			}
			break;
		case 12:
		case 13:
		case 14:
			uParam0->f_5 = 573237416;
			uParam0->f_6 = 573237416;
			uParam0->f_9 = 1;
			uParam0->f_7 = 469385923;
			if (is_durango_version())
			{
				uParam0->f_64 = 1;
				uParam0->f_65 = 1;
				uParam0->f_66 = -523963307;
				uParam0->f_63 = 2073125152;
			}
			break;
		case 15:
			uParam0->f_8 = 1;
			uParam0->f_9 = 1;
			uParam0->f_7 = -672301300;
			switch (iParam1)
			{
				case -1178838578:
					uParam0->f_74 = -1333411438;
					uParam0->f_73 = 1;
					uParam0->f_70 = 295375257;
					uParam0->f_69 = 1;
					uParam0->f_5 = 252544183;
					uParam0->f_6 = 252544183;
					if (is_durango_version())
					{
						uParam0->f_64 = 1;
						uParam0->f_65 = 1;
						uParam0->f_66 = -523963307;
						uParam0->f_63 = 2073125152;
					}
					break;
				case -1419617212:
					uParam0->f_3 = 410425589;
					uParam0->f_9 = 1;
					uParam0->f_8 = 1;
					uParam0->f_7 = 469385923;
					if (func_768())
					{
						uParam0->f_5 = 596189658;
						uParam0->f_6 = 596189658;
					}
					break;
			}
			break;
	}
	return true;
}

void func_1469(var uParam0, int iParam1)
{
	func_1247(&(uParam0->f_25), iParam1);
}

bool func_1470(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	if (uParam1->f_27 == 791621612 || uParam1->f_27 == -1419617212)
	{
		return true;
	}
	iVar0 = 255;
	switch (uParam1->f_27)
	{
		case -1178838578:
			if (network_is_gamer_in_my_session(&(uParam1->f_1)))
			{
				iVar0 = network_get_player_from_gamer_handle(&(uParam1->f_1));
			}
			_copy_memory(&(uParam0->f_79), &(uParam1->f_1), 7);
			StringCopy(&(uParam0->f_25), func_669(func_1977(uParam1->f_8), 109029619), 128);
			uParam0->f_2 = func_668(iVar0, 1, -1, 0);
			break;
		case -462010351:
			_copy_memory(&(uParam0->f_79), &(uParam1->f_1), 7);
			StringCopy(&(uParam0->f_25), func_669(func_1977(uParam1->f_8), 109029619), 128);
			uParam0->f_2 = 1105014447;
			break;
	}
	func_577(&(uParam1->f_25), 2048);
	func_577(&(uParam1->f_25), 65536);
	func_577(&(uParam1->f_25), 32);
	return true;
}

bool func_1471(int iParam0, var uParam1, var uParam2, var uParam3)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	if (_databinding_get_array_count(Global_1896738->f_393.f_1) > iParam0)
	{
		func_1978(uParam1, uParam2, uParam3);
	}
	else
	{
		StringCopy(&cVar0, "Player_List_Entry_", 64);
		StringIntConCat(&cVar0, iParam0, 64);
		func_1979(uParam2, Global_1896738->f_393, cVar0, *uParam1);
		_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1896738->f_393.f_1, iParam0, "pm_dynamic_player_entry", *uParam2);
	}
	return true;
}

void func_1472(var uParam0)
{
	uParam0->f_25 = 0;
}

int func_1473(int iParam0, var uParam1)
{
	if (iParam0 < 0 || iParam0 >= Global_1896738->f_393.f_2691)
	{
		return 0;
	}
	_copy_memory(Global_1896738->f_393.f_2[iParam0], uParam1, 84);
	return 1;
}

int func_1474(int iParam0, char* sParam1)
{
	switch (iParam0)
	{
		case 1:
		case 8:
		case 12:
			if (_is_stadia_version())
			{
				switch (_0x3e8cce6769db5f34(1))
				{
					case -1:
					case 0:
					case 2:
						StringCopy(sParam1, _create_var_string(2, "FRIENDS_LIST_CONSENT_TOOLTIP"), 128);
						return 1;
				}
			}
			break;
	}
	return 0;
}

void func_1475(int iParam0)
{
	if (!_databinding_is_data_id_valid(Global_1896738->f_393.f_1))
	{
		return;
	}
	iVar0 = (_databinding_get_array_count(Global_1896738->f_393.f_1) - 1);
	while (iVar0 >= iParam0)
	{
		_0x6318fb3be37e11b3(Global_1896738->f_393.f_1, iVar0);
		iVar0 = (iVar0 + -1);
	}
}

bool func_1476()
{
	return Global_1960073->f_72 != 0;
}

char* func_1477()
{
	return func_1977(Global_1960073->f_56);
}

int func_1478()
{
	return Global_1896738->f_13.f_5;
}

void func_1479()
{
	func_1480(11);
}

void func_1480(int iParam0)
{
	Global_1896738->f_13.f_5 = iParam0;
	if (func_959(&(Global_1896738->f_13)))
	{
		func_958(&(Global_1896738->f_13));
	}
}

bool func_1481(var uParam0, var uParam1, char* sParam2, int iParam3)
{
	if (!func_1980())
	{
		return false;
	}
	if (!func_1355(sParam2))
	{
		return false;
	}
	iVar0 = _0x901e0dc25080c8b9(player_id());
	Var1.f_27 = 10;
	StringCopy(&(Var1.f_1), sParam2, 64);
	Var119 = { func_650() };
	Var1.f_26 = 1;
	Var1.f_19 = { Var119 };
	*Var1.f_27[0] = { Var119 };
	Var1.f_27[0]->f_8 = func_1981(1);
	Var1.f_27[0]->f_7 = -482360895;
	Var1.f_9.f_1 = uParam1;
	Var1.f_9.f_2 = uParam0;
	Var1.f_9 = -1;
	StringCopy(&(Var1.f_9.f_7), "", 24);
	func_402(Var1.f_9.f_1, 0, 1);
	if (!_0xc086ff658b2e51da(&Var1))
	{
		return false;
	}
	Global_1194053->f_502 = get_game_timer();
	Global_1194053->f_14.f_9 = iVar0;
	Global_1194053->f_14.f_10 = uParam0;
	Global_1194053->f_14.f_8 = iParam3;
	func_1350(1);
	func_197(32);
	if (_0x0f99f6436528a089(iVar0))
	{
		_0x0a04a07bc3074edb(1);
	}
	func_648(0);
	return true;
}

void func_1482(var uParam0, var uParam1)
{
	if (Global_1194053->f_2 == 1 || Global_1194053->f_2 == 2)
	{
		return;
	}
	if (_0x0f99f6436528a089(_0x901e0dc25080c8b9(player_id())))
	{
		_0x0a04a07bc3074edb(1);
	}
	_0xc08aff658b2e51da(&iVar0);
	if (iVar0 != 0)
	{
		if (!_0xc08bff658b2e51da(0))
		{
		}
	}
	Global_1194053->f_14.f_10 = uParam0;
	Global_1194053->f_14.f_11 = uParam1;
	Global_1194053->f_14.f_8 = 4;
	func_648(0);
	func_1358(1);
}

int func_1483(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return -1;
	}
	if (iParam0 == _0x901e0dc25080c8b9(player_id()))
	{
		return func_77(player_id());
	}
	return func_1982(_0x4be6c13a45cca8ec(iParam0));
}

void func_1484(char* sParam0, int iParam1)
{
	Global_1896738->f_13.f_28 = { func_644(sParam0) };
	Global_1896738->f_13.f_36 = iParam1;
}

bool func_1485()
{
	if (Global_1572887->f_13 == -1)
	{
		return false;
	}
	return Global_1071686->f_3;
}

char* func_1486(char[4] cParam0, char[4] cParam1, char[4] cParam2, char[4] cParam3, char[4] cParam4, char[4] cParam5, char[4] cParam6, char[4] cParam7)
{
	return _0xd8402b858f4ddd88(&cParam0, get_length_of_literal_string(&cParam0));
}

bool func_1487(var uParam0)
{
	if (!network_is_handle_valid(&(uParam0->f_29)))
	{
		return false;
	}
	if (!network_is_handle_valid(&(Global_1296859->f_1)))
	{
		return false;
	}
	return network_are_handles_the_same(&(uParam0->f_29), &(Global_1296859->f_1));
}

bool func_1488(int iParam0)
{
	return func_576(Global_1298378->f_156, iParam0);
}

bool func_1489(int iParam0, bool bParam1, bool bParam2)
{
	if (Global_1572887->f_13 != -1)
	{
		if ((bParam2 && iParam0 == 0) && bParam1 == 0)
		{
			return Global_1900736->f_67;
		}
		if ((bParam2 && iParam0 == 0) && bParam1 == 1)
		{
			return Global_1900736->f_68;
		}
		if (func_830())
		{
			return true;
		}
		if (Global_1071686->f_3 && !Global_1572887->f_9)
		{
			if (((*Global_1056141)[network_player_id_to_int()]->f_463 && network_is_game_in_progress()) && network_is_in_tutorial_session())
			{
				return true;
			}
		}
	}
	else if (bParam2 && iParam0 == 0)
	{
		if (!bParam1)
		{
			return Global_1900736->f_67;
		}
		else
		{
			return Global_1900736->f_68;
		}
	}
	if (iParam0 == 0 && func_1112(func_832(0)))
	{
		return true;
	}
	if ((Global_1940258 && 81919 & (-1 - iParam0)) != 0)
	{
		return true;
	}
	if (!bParam1)
	{
		if ((get_game_timer() - 5000) < &Global_1900871)
		{
			return true;
		}
	}
	switch (func_833(func_832(0)))
	{
		case -1:
			return false;
		case 2:
			return iParam0 & 1 == 0;
		case 5:
			return iParam0 & 2 == 0;
		case 3:
			return iParam0 & 16 == 0;
		case 4:
			return iParam0 & 32 == 0;
		case 7:
			return iParam0 & 1024 == 0;
		default:
			break;
	}
	return false;
}

int func_1490(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 0:
			*uParam1 = 405966388;
			return 1;
		case 1:
			*uParam1 = 858018263;
			return 1;
		case 2:
			*uParam1 = 1394492570;
			return 1;
		case 3:
			*uParam1 = -190751778;
			return 1;
		case 4:
			*uParam1 = -1513928818;
			return 1;
		case 5:
			*uParam1 = -1321015585;
			return 1;
		case 6:
			*uParam1 = 1852134540;
			return 1;
		case 7:
			*uParam1 = -523623920;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1491(var uParam0)
{
	if (uParam0->f_4)
	{
		if (uParam0->f_3)
		{
			if (!func_34(uParam0->f_29))
			{
				return false;
			}
			Var0 = { func_650() };
			if (network_are_handles_the_same(&Var0, &(uParam0->f_29)))
			{
				return true;
			}
			if (!func_683(uParam0))
			{
				return false;
			}
			if (!network_is_gamer_in_my_session(&(uParam0->f_29)))
			{
				if (func_685(uParam0->f_2))
				{
					return true;
				}
			}
			else
			{
				Var7.f_18 = 10;
				if (func_1319(network_get_player_from_gamer_handle(&(uParam0->f_29)), &Var7))
				{
					if (Var7 == uParam0->f_2 && Var7.f_9 == 1)
					{
						return true;
					}
				}
			}
			return false;
		}
		else
		{
			iVar106 = _0xc088ff658b2e51da();
			if (iVar106 >= 5)
			{
				return false;
			}
			if (!func_683(uParam0))
			{
				return false;
			}
			return true;
		}
	}
	else
	{
		if (!func_683(uParam0))
		{
			return false;
		}
		return !uParam0->f_1 == Global_1296859->f_15;
	}
	return false;
}

bool func_1492(int iParam0, int iParam1)
{
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	Var0 = { func_573(iParam0) };
	if (iParam0 == player_id())
	{
		Var8.f_27 = 10;
		if (_0xc087ff658b2e51da(iParam1, &Var8) && network_are_handles_the_same(&(Var8.f_19), &Var0))
		{
			iVar7 = 1;
		}
	}
	else
	{
		Var126.f_18 = 10;
		iVar225 = 0;
		while (iVar225 <= (_0xc084ff658b2e61da(&Var0) - 1))
		{
			if ((_0xc084ff658b2e71da(&Var0, iVar225, &Var126) && Var126 == iParam1) && network_are_handles_the_same(&(Var126.f_10), &Var0))
			{
				iVar7 = 1;
			}
			else
			{
				iVar225++;
			}
		}
	}
	return iVar7;
}

bool func_1493(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Global_1194053->f_409.f_10[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1494(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Global_1194053->f_28.f_22[iVar0] == iParam0 && iParam0 != 0)
		{
			return Global_1194053->f_28.f_22[iVar0]->f_2;
		}
		iVar0++;
	}
	return false;
}

bool func_1495(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (&Global_1194053->f_28.f_22[iVar0] == iParam0 && iParam0 != 0)
		{
			return Global_1194053->f_28.f_22[iVar0]->f_3 < Global_1194053->f_28.f_22[iVar0]->f_4;
		}
		iVar0++;
	}
	return false;
}

bool func_1496(int iParam0)
{
	if (!_0x0f99f6436528a089(_0x901e0dc25080c8b9(iParam0)))
	{
		return false;
	}
	iVar51 = _0xd1bf325c8252a982(_0x901e0dc25080c8b9(iParam0), &Var0);
	iVar50 = 0;
	while (iVar50 <= (iVar51 - 1))
	{
		iVar52 = network_get_player_from_gamer_handle(Var0[iVar50]);
		if (!network_is_player_active(iVar52) || is_player_dead(iVar52))
		{
		}
		else if (func_703(1048576, iVar52))
		{
			return true;
		}
		iVar50++;
	}
	return false;
}

bool func_1497(var uParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= _databinding_get_array_count(*uParam0))
	{
		return false;
	}
	return _databinding_read_data_bool_from_parent(_databinding_get_item_context_by_index(*uParam0, iVar0), func_58(1));
}

void func_1498(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= _databinding_get_array_count(*uParam0))
	{
		return;
	}
	_databinding_write_data_bool_from_parent(_databinding_get_item_context_by_index(*uParam0, iVar0), func_58(1), bParam2);
}

bool func_1499(var uParam0, int iParam1)
{
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= _databinding_get_array_count(*uParam0))
	{
		return false;
	}
	return _databinding_read_data_bool_from_parent(_databinding_get_item_context_by_index(*uParam0, iVar0), func_58(0));
}

void func_1500(var uParam0, int iParam1, bool bParam2)
{
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 >= _databinding_get_array_count(*uParam0))
	{
		return;
	}
	_databinding_write_data_bool_from_parent(_databinding_get_item_context_by_index(*uParam0, iVar0), func_58(0), bParam2);
}

bool func_1501(char* sParam0, int iParam1)
{
	if (!_0x595f028698072dd9(-1) && is_orbis_version())
	{
		return false;
	}
	Var0.f_27 = 10;
	if (!_0xc087ff658b2e51da(iParam1, &Var0))
	{
		return false;
	}
	if (is_string_null_or_empty(sParam0))
	{
		return false;
	}
	if (!func_1355(sParam0))
	{
		return false;
	}
	if (!_0x595f028698072dd9(-1))
	{
		return false;
	}
	if (func_1086())
	{
		func_1087();
		return true;
	}
	if (!func_1088())
	{
		return false;
	}
	StringCopy(&(Var0.f_1), sParam0, 64);
	iVar118 = 0;
	if (!_0xc09cff658b2e51da(iParam1, &Var0, &iVar118) && iVar118 == 1)
	{
		func_1089();
		return false;
	}
	func_1087();
	func_648(6);
	return true;
}

int func_1502()
{
	Var0 = { func_191(1) };
	if (func_196(&Var0))
	{
		if (!func_1983(Var0.f_2))
		{
			return 0;
		}
	}
	else if (Var0.f_1 == Global_1296859->f_15)
	{
		func_171();
	}
	else
	{
		return 0;
	}
	return 1;
}

bool func_1503()
{
	if (Global_1940311->f_1433.f_157.f_264.f_90 > -1)
	{
		return true;
	}
	return false;
}

bool func_1504(var uParam0)
{
	return uParam0->f_93;
}

int func_1505(var uParam0)
{
	return uParam0->f_94;
}

int func_1506(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 630752600;
		case 1:
			return 55609673;
		case 2:
			return 845045048;
		case 3:
			return -1676224755;
		case 4:
			return -353068451;
		case 5:
			return 1527899327;
		case 6:
			return 695290261;
		case 7:
			return -750400740;
		case 8:
			return 881343317;
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

int func_1507(int iParam0, var uParam1)
{
	switch (iParam0)
	{
		case 630752600:
			*uParam1 = 630752600;
			return 1;
		case 55609673:
			*uParam1 = 55609673;
			return 1;
		case 845045048:
			*uParam1 = 845045048;
			return 1;
		case -353068451:
			*uParam1 = -353068451;
			return 1;
		case 1527899327:
			*uParam1 = -55349945;
			return 1;
		case 695290261:
			*uParam1 = 1941935324;
			return 1;
		case -750400740:
			*uParam1 = 1854460024;
			return 1;
		default:
			break;
	}
	return 0;
}

bool func_1508(int iParam0)
{
	return func_1984(iParam0) != 0;
}

int func_1509(struct<2> Param0)
{
	if (func_833(Param0) != 5)
	{
		return -1;
	}
	return func_1244(Param0);
}

void func_1510(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
		case 1:
		case 2:
		case 3:
			func_1985(iParam0, iParam1);
			break;
		default:
			break;
	}
}

int func_1511(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	if (!network_is_gamer_in_my_session(&(uParam1->f_1)))
	{
		return 1;
	}
	iVar0 = network_get_player_from_gamer_handle(&(uParam1->f_1));
	if (!_network_is_player_index_valid(iVar0))
	{
		return 1;
	}
	if (!func_702())
	{
		return 1;
	}
	if (func_1986(iVar0))
	{
		uParam0->f_59 = 1210712530;
		uParam0->f_60 = 422580063;
		uParam0->f_61 = 1;
		uParam0->f_57 = 0;
	}
	else if (func_1987(iVar0) && iVar0 != player_id())
	{
		uParam0->f_59 = 1210712530;
		uParam0->f_60 = 1975921174;
		uParam0->f_61 = 1;
		uParam0->f_57 = 0;
	}
	func_577(&(uParam1->f_25), 1536);
	return 1;
}

int func_1512(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	func_577(&(uParam1->f_25), 1536);
	iVar0 = func_837(&(uParam1->f_1));
	switch (iVar0)
	{
		case 9:
		case 10:
		case 11:
			if (func_1988(iVar0, &(uParam0->f_60), &(uParam0->f_59)))
			{
				uParam0->f_57 = 0;
				uParam0->f_61 = 1;
				return 1;
			}
			break;
	}
	return 0;
}

int func_1513(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	func_577(&(uParam1->f_25), 1536);
	iVar0 = func_839(&(uParam1->f_1));
	switch (iVar0)
	{
		case 1:
		case 2:
		case 3:
			if (func_1989(iVar0, &(uParam0->f_60), &(uParam0->f_59)))
			{
				uParam0->f_57 = 0;
				uParam0->f_61 = 1;
				return 1;
			}
			break;
	}
	return 0;
}

int func_1514(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	iVar0 = network_get_player_from_gamer_handle(&(uParam1->f_1));
	switch (uParam1->f_27)
	{
		case -1178838578:
			if (_network_is_player_index_valid(iVar0))
			{
				if (iVar0 == &Global_1296859->f_154[&Global_1296859])
				{
					uParam0->f_73 = 0;
					uParam0->f_69 = 0;
				}
				else
				{
					if (func_206())
					{
						uParam0->f_71 = -210801769;
					}
					else
					{
						uParam0->f_71 = 1499547490;
					}
					uParam0->f_73 = 1;
					uParam0->f_72 = 1;
					if (_0x0ded260a1958a82e(iVar0))
					{
						uParam0->f_67 = 979712174;
					}
					else
					{
						uParam0->f_67 = 830040270;
					}
					uParam0->f_69 = 1;
					if (!func_1990(8388608))
					{
						uParam0->f_68 = 1;
					}
				}
			}
			break;
	}
	func_577(&(uParam1->f_25), 32768);
	func_577(&(uParam1->f_25), 16384);
	return 1;
}

int func_1515(var uParam0, char* sParam1)
{
	switch (uParam0->f_27)
	{
		case -1178838578:
		case -462010351:
			if (func_1991(&(uParam0->f_1), sParam1))
			{
				return 1;
			}
			iVar0 = func_839(&(uParam0->f_1));
			switch (iVar0)
			{
				case 1:
				case 2:
				case 3:
					if (func_1992(iVar0, sParam1))
					{
						return 1;
					}
					break;
			}
			iVar1 = func_837(&(uParam0->f_1));
			switch (iVar1)
			{
				case 9:
				case 10:
				case 11:
					if (func_838(iVar1, sParam1))
					{
						return 1;
					}
					break;
			}
			StringCopy(sParam1, _create_var_string(2, "PLAYER_ENTRY_FOOTER"), 128);
			return 1;
		case -1419617212:
			StringCopy(sParam1, func_490(), 128);
			return 1;
		default:
			break;
	}
	return 0;
}

int func_1516(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	func_577(&(uParam1->f_25), 1536);
	iVar0 = func_837(&(uParam1->f_1));
	if (func_1988(iVar0, &(uParam0->f_60), &(uParam0->f_59)))
	{
		uParam0->f_57 = 0;
		uParam0->f_61 = 1;
	}
	return 1;
}

int func_1517(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	func_577(&(uParam1->f_25), 1536);
	iVar0 = func_839(&(uParam1->f_1));
	if (func_1989(iVar0, &(uParam0->f_60), &(uParam0->f_59)))
	{
		uParam0->f_57 = 0;
		uParam0->f_61 = 1;
	}
	return 1;
}

void func_1518(var uParam0, int iParam1)
{
	if (Global_1940311->f_1433.f_8379 || _0x25189f9908e9cd65())
	{
		network_clear_get_gamer_status();
	}
	Global_1940311->f_1433.f_8379 = 0;
	Global_1940311->f_1433.f_8380 = 1;
	Global_1940311->f_1433.f_8381 = iParam1;
	if (_0xfbdfe1c1356e12e8(uParam0, iParam1))
	{
	}
}

int func_1519(int iParam0)
{
	iVar0 = func_1993(iParam0);
	iVar1 = func_1994(iParam0, iVar0);
	if (iVar0 != iVar1)
	{
		if (func_1520(iVar1))
		{
			func_1995(iVar1);
			iVar0 = iVar1;
		}
	}
	return iVar0;
}

bool func_1520(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 32);
}

bool func_1521(int iParam0)
{
	iVar0 = func_1522(iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	if (!_0x93a91a351a07360e(iVar0))
	{
		return false;
	}
	return true;
}

int func_1522(int iParam0)
{
	return &(Global_1107216->f_33[iParam0]);
}

bool func_1523(int iParam0, int iParam1)
{
	return ((*Global_1128574)[iParam0]->f_54 && iParam1) != 0;
}

bool func_1524(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return false;
	}
	Var0 = { func_573(iParam0) };
	if (!func_34(Var0))
	{
		return false;
	}
	if ((_0xc084ff658b2e61da(&Var0) >= 5 && Global_1194053->f_492 != -1) && !func_1996(&Var0, &(Global_1194053->f_503[Global_1194053->f_492])))
	{
		return false;
	}
	return true;
}

int func_1525(var uParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 < 0 || iParam3 > 47)
	{
		return 0;
	}
	if (uParam1->f_1 == -1)
	{
		iVar0 = 0;
	}
	else
	{
		iVar0 = &uParam1->f_2[uParam1->f_1];
	}
	_databinding_write_data_string(uParam0->f_14[iParam3]->f_18, _create_var_string(0, iParam2));
	if (func_1248(iParam2, &(uParam1->f_2)))
	{
		_databinding_write_data_bool(uParam0->f_14[iParam3]->f_21, true);
		_databinding_write_data_hash_string(uParam0->f_14[iParam3]->f_8, 33585163);
		_databinding_write_data_bool(uParam0->f_14[iParam3]->f_29, true);
	}
	else
	{
		_databinding_write_data_bool(uParam0->f_14[iParam3]->f_21, false);
		_databinding_write_data_hash_string(uParam0->f_14[iParam3]->f_8, -1687063893);
		_databinding_write_data_bool(uParam0->f_14[iParam3]->f_29, false);
	}
	if (iVar0 == iParam2)
	{
		_databinding_write_data_bool(uParam0->f_14[iParam3]->f_24, true);
		_databinding_write_data_hash_string(uParam0->f_14[iParam3]->f_28, -186220729);
	}
	else
	{
		_databinding_write_data_bool(uParam0->f_14[iParam3]->f_24, false);
		_databinding_write_data_hash_string(uParam0->f_14[iParam3]->f_28, 801794679);
	}
	if (uParam0->f_5)
	{
		_databinding_write_data_hash_string(uParam0->f_14[iParam3]->f_25, -439153934);
		if (func_1249(uParam1))
		{
			_databinding_write_data_bool(uParam0->f_14[iParam3]->f_26, true);
		}
		else
		{
			_databinding_write_data_bool(uParam0->f_14[iParam3]->f_26, false);
		}
	}
	else
	{
		_databinding_write_data_hash_string(uParam0->f_14[iParam3]->f_25, -1258266463);
		_databinding_write_data_bool(uParam0->f_14[iParam3]->f_26, true);
	}
	return 1;
}

void func_1526()
{
	iVar0 = get_game_timer();
	iVar1 = 0;
	iVar1 = 0;
	while (iVar1 <= 9)
	{
		if (Global_1940311->f_1433.f_1316.f_10[iVar1]->f_7 != 0)
		{
			if ((iVar0 - Global_1940311->f_1433.f_1316.f_10[iVar1]->f_7) > 60000)
			{
				func_1997(iVar1);
			}
			else if (!func_34(*Global_1940311->f_1433.f_1316.f_10[iVar1]))
			{
				func_1997(iVar1);
			}
		}
		iVar1++;
	}
}

bool func_1527(var uParam0)
{
	if (!func_34(*uParam0))
	{
		return false;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if ((Global_1940311->f_1433.f_1316.f_10[iVar0]->f_7 != 0 && func_34(*Global_1940311->f_1433.f_1316.f_10[iVar0])) && network_are_handles_the_same(uParam0, Global_1940311->f_1433.f_1316.f_10[iVar0]))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1528(var uParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 <= 9)
	{
		if (Global_1940311->f_1433.f_1316.f_10[iVar0]->f_7 == 0)
		{
			Global_1940311->f_1433.f_1316.f_10[iVar0]->f_7 = get_game_timer();
			*Global_1940311->f_1433.f_1316.f_10[iVar0] = { *uParam0 };
			return;
		}
		iVar0++;
	}
}

bool func_1529(int iParam0, int iParam1, bool bParam2)
{
	iVar0 = 1;
	if (_0xd6f6acf4392187fb(iParam0))
	{
		iVar0 = _0x149a2751ab66ac02(iParam0);
	}
	bVar1 = iVar0 <= iParam1;
	if (((!bVar1 && bParam2) && _0x4be6c13a45cca8ec(iParam0) == player_id()) && !func_1998(Global_1194053->f_147))
	{
		Global_1194053->f_147 = func_626("NG_SIZE_LARGE_S", 10000, 0, 0, 0, 1);
	}
	return bVar1;
}

bool func_1530(int iParam0)
{
	return _unlock_is_visible(func_1366(iParam0));
}

void func_1531(int iParam0)
{
	if (Global_1940311->f_1433.f_1636.f_449 == iParam0)
	{
		return;
	}
	Global_1940311->f_1433.f_1636.f_449 = iParam0;
	sVar0 = func_1999(Global_1940311->f_1433.f_1636.f_449);
	_databinding_write_data_string(Global_1940311->f_1433.f_1636.f_445, sVar0);
}

int func_1532(int iParam0, int iParam1)
{
	if (!func_1395(iParam0, iParam1, 1))
	{
	}
	if (!func_1951(Global_1904087))
	{
		return 0;
	}
	iVar0 = func_2000(Global_1904087->f_11, Global_1904087->f_23);
	return iVar0;
}

int func_1533(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return 0;
	}
	iVar0 = get_default_attribute_rank(iParam0, func_2001());
	return iVar0;
}

var func_1534(var uParam0, int iParam1)
{
	if (!func_2002(uParam0, iParam1, &iVar0))
	{
		return 0;
	}
	return func_2003(iVar0, iParam1);
}

int func_1535(int iParam0)
{
	if (!is_model_valid(iParam0))
	{
		return 0;
	}
	iVar0 = get_default_attribute_rank(iParam0, func_2004());
	return iVar0;
}

int func_1536(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_rank(iParam0, func_2001());
	return iVar0;
}

int func_1537(int iParam0, int iParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
	{
		return 0;
	}
	if (func_2005(iParam1, &iVar0))
	{
		return _get_attribute_core_value(iParam0, iVar0);
	}
	return 0;
}

int func_1538(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return 0;
	}
	if (is_entity_dead(iParam0))
	{
	}
	iVar0 = get_attribute_rank(iParam0, func_2004());
	return iVar0;
}

int func_1539(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < 20)
	{
		if (_0x4c543d5dfcd2dafd(Global_1291734->f_11.f_162[iVar0], &uParam0))
		{
			return Global_1291734->f_11.f_162[iVar0]->f_6;
		}
		iVar0++;
	}
	return -1;
}

bool func_1540(int iParam0)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (is_entity_dead(iParam0))
	{
		return false;
	}
	iVar0 = _0x7c803bdc8343228d(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return false;
	}
	iVar4 = 0;
	while (iVar4 < 32)
	{
		iVar1 = iVar4;
		if (!network_is_player_active(iVar1))
		{
		}
		else if (iVar1 == iVar0)
		{
		}
		else
		{
			iVar2 = get_player_ped(iVar1);
			if (func_2006(iParam0, iVar2, &uVar3))
			{
				return true;
			}
		}
		iVar4++;
	}
	return false;
}

void func_1541(int iParam0)
{
	if (Global_1940311->f_1433.f_2204.f_373 == iParam0)
	{
		return;
	}
	Global_1940311->f_1433.f_2204.f_373 = iParam0;
	sVar0 = func_2007(Global_1940311->f_1433.f_2204.f_373);
	_databinding_write_data_string(Global_1940311->f_1433.f_2204.f_369, sVar0);
}

int func_1542(var uParam0, var uParam1, var uParam2, var uParam3)
{
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (_0x4c543d5dfcd2dafd(Global_1291734->f_581.f_107[iVar0], &uParam0))
		{
			return Global_1291734->f_581.f_107[iVar0]->f_6;
		}
		iVar0++;
	}
	return -1;
}

int func_1543(int iParam0)
{
	if (!func_426(iParam0))
	{
		return 0;
	}
	if (!func_427(&((*Global_1131196)[iParam0]->f_4)))
	{
		return 0;
	}
	iVar0 = (func_429() - func_428(&((*Global_1131196)[iParam0]->f_4)));
	return ceil((to_float(iVar0) / 1000f));
}

int func_1544(vector3 vParam0, var uParam3)
{
	*uParam3 = 13;
	uParam3->f_1[0] = 1357161730;
	uParam3->f_1[1] = 1581179681;
	uParam3->f_1[2] = -215258135;
	uParam3->f_1[3] = -987049424;
	uParam3->f_1[4] = 892234183;
	uParam3->f_1[5] = -1554232707;
	uParam3->f_1[6] = -682748;
	uParam3->f_1[7] = 1538293636;
	uParam3->f_1[8] = -1992167326;
	uParam3->f_1[9] = -1884014371;
	uParam3->f_1[10] = -1871413878;
	uParam3->f_1[11] = 1483778247;
	uParam3->f_1[12] = -724534761;
	if (!func_1549(vParam0, uParam3))
	{
		return 0;
	}
	return 1;
}

void func_1545(int iParam0)
{
	iVar0 = func_2008(iParam0);
	iVar1 = -1593595016;
	if (_0x81d7183e7a8eca72(Global_1940311->f_1433.f_2643.f_45) != iVar0)
	{
		if (!_does_streamed_txd_exist(iVar1))
		{
			return;
		}
		_request_streamed_txd(iVar1, false);
		if (!_has_streamed_txd_loaded(iVar1))
		{
			return;
		}
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_2643.f_46, iVar1);
		_databinding_write_data_hash_string(Global_1940311->f_1433.f_2643.f_45, iVar0);
	}
}

int func_1546()
{
	return Global_1896622->f_41;
}

int func_1547(int iParam0, vector3 vParam1, var uParam4)
{
	if (func_713(vParam1))
	{
		return 0;
	}
	switch (iParam0)
	{
		case 0:
			*uParam4 = 3;
			uParam4->f_1[0] = 1357161730;
			uParam4->f_1[1] = -1871413878;
			uParam4->f_1[2] = 1483778247;
			break;
		case 1:
			*uParam4 = 5;
			uParam4->f_1[0] = 1581179681;
			uParam4->f_1[1] = -1554232707;
			uParam4->f_1[2] = -682748;
			uParam4->f_1[3] = 1538293636;
			uParam4->f_1[4] = -724534761;
			break;
		case 2:
			*uParam4 = 2;
			uParam4->f_1[0] = 1357161730;
			uParam4->f_1[1] = -1871413878;
			break;
		case 3:
			*uParam4 = 3;
			uParam4->f_1[0] = -987049424;
			uParam4->f_1[1] = -682748;
			uParam4->f_1[2] = 1538293636;
			break;
		case 4:
			*uParam4 = 4;
			uParam4->f_1[0] = 1581179681;
			uParam4->f_1[1] = -1554232707;
			uParam4->f_1[2] = -1992167326;
			uParam4->f_1[3] = -724534761;
			break;
		case 6:
			*uParam4 = 4;
			uParam4->f_1[0] = -987049424;
			uParam4->f_1[1] = -682748;
			uParam4->f_1[2] = 1538293636;
			uParam4->f_1[3] = -1871413878;
			break;
		case 7:
			*uParam4 = 4;
			uParam4->f_1[0] = 1581179681;
			uParam4->f_1[1] = -987049424;
			uParam4->f_1[2] = -682748;
			uParam4->f_1[3] = 1538293636;
			break;
		case 9:
			*uParam4 = 6;
			uParam4->f_1[0] = 1581179681;
			uParam4->f_1[1] = -987049424;
			uParam4->f_1[2] = -682748;
			uParam4->f_1[3] = 1538293636;
			uParam4->f_1[4] = -1871413878;
			uParam4->f_1[5] = 1483778247;
			break;
		case 10:
			*uParam4 = 6;
			uParam4->f_1[0] = 1357161730;
			uParam4->f_1[1] = -987049424;
			uParam4->f_1[2] = -682748;
			uParam4->f_1[3] = 1538293636;
			uParam4->f_1[4] = -1871413878;
			uParam4->f_1[5] = 1483778247;
			break;
		case 11:
			*uParam4 = 4;
			uParam4->f_1[0] = 1357161730;
			uParam4->f_1[1] = 1538293636;
			uParam4->f_1[2] = -1871413878;
			uParam4->f_1[3] = 1483778247;
			break;
		case 12:
			*uParam4 = 4;
			uParam4->f_1[0] = -1554232707;
			uParam4->f_1[1] = -1992167326;
			uParam4->f_1[2] = 1483778247;
			uParam4->f_1[3] = -724534761;
			break;
		case 13:
			*uParam4 = 3;
			uParam4->f_1[0] = -215258135;
			uParam4->f_1[1] = 892234183;
			uParam4->f_1[2] = -1884014371;
			break;
		case 14:
			*uParam4 = 3;
			uParam4->f_1[0] = -215258135;
			uParam4->f_1[1] = 892234183;
			uParam4->f_1[2] = -1884014371;
			break;
		case 15:
			*uParam4 = 4;
			uParam4->f_1[0] = -215258135;
			uParam4->f_1[1] = 892234183;
			uParam4->f_1[2] = -1992167326;
			uParam4->f_1[3] = -1884014371;
			break;
		case 16:
			*uParam4 = 4;
			uParam4->f_1[0] = -215258135;
			uParam4->f_1[1] = -1554232707;
			uParam4->f_1[2] = -1992167326;
			uParam4->f_1[3] = -724534761;
			break;
		default:
			return 0;
	}
	if (!func_1549(vParam1, uParam4))
	{
		return 0;
	}
	return 1;
}

int func_1548(var uParam0)
{
	switch (uParam0->f_1)
	{
		case -682748:
			iVar0 = 0;
			break;
		case 1357161730:
		case 1483778247:
			iVar0 = 1;
			break;
		case -1554232707:
		case -724534761:
		case 1581179681:
			iVar0 = 2;
			break;
		case -1871413878:
		case -987049424:
		case 1538293636:
			iVar0 = 3;
			break;
		case -1992167326:
		case -1884014371:
		case -215258135:
		case 892234183:
			iVar0 = 4;
			break;
		default:
			iVar0 = -1;
			break;
	}
	return iVar0;
}

bool func_1549(vector3 vParam0, var uParam3)
{
	iVar0 = func_2009(vParam0, uParam3);
	iVar1 = 0;
	while (iVar1 <= (*uParam3 - 1))
	{
		if (&uParam3->f_1[iVar1] == iVar0)
		{
			iVar2 = iVar1;
			while (iVar2 > 0)
			{
				uParam3->f_1[iVar2] = &uParam3->f_1[(iVar2 - 1)];
				iVar2 = (iVar2 - 1);
			}
			uParam3->f_1[0] = iVar0;
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_1550(int iParam0)
{
	switch (iParam0)
	{
		case 1357161730:
			return -223388979;
		case 1581179681:
			return -1840081715;
		case -215258135:
			return -963201097;
		case -987049424:
			return -964546224;
		case 892234183:
			return -1555522343;
		case -1554232707:
			return -596383102;
		case -682748:
			return 2076383908;
		case 1538293636:
			return 1380216772;
		case -1992167326:
			return 136876275;
		case -1884014371:
			return -1031323199;
		case -1871413878:
			return -1829627533;
		case 1483778247:
			return -1285014065;
		case -724534761:
			return 505542003;
		default:
			break;
	}
	return 1380216772;
}

void func_1551(var uParam0, struct<24> Param1)
{
	func_2010(uParam0, Param1);
	_databinding_write_data_int(uParam0->f_24, Param1.f_22);
	_databinding_write_data_int(uParam0->f_25, Param1.f_23);
}

int func_1552(int iParam0, var uParam1, var uParam2, var uParam3, var uParam4)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 16)
	{
		if (&Global_1211095->f_5[iVar0] != iParam0)
		{
		}
		else if (Global_1211095->f_5[iVar0]->f_2)
		{
		}
		else
		{
			iVar1 = Global_1211095->f_5[iVar0]->f_4;
		}
		else
		{
			iVar0++;
		}
	}
	if (iVar1 <= 0)
	{
		return -1;
	}
	return absi((get_cloud_time_as_int() - iVar1));
}

void func_1553(struct<5> Param0)
{
	Var0.f_5 = -1;
	Var0.f_4 = 9;
	Var0.f_5 = { Param0 };
	func_2011(&Var0, func_432(0, 8));
}

bool func_1554(int iParam0)
{
	if (!_unlock_is_unlocked(956799153))
	{
		return false;
	}
	switch (iParam0)
	{
		case 6:
			return _unlock_is_unlocked(-1008270856);
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return (_unlock_is_unlocked(1612825071) && _unlock_is_unlocked(759426019));
		case 7:
		case 8:
		case 9:
		case 10:
			return true;
		default:
			break;
	}
	return false;
	return false;
}

bool func_1555(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		case 2:
		case 3:
		case 6:
		case 8:
		case 9:
		case 10:
			return true;
	}
	return false;
}

int func_1556(int iParam0)
{
	if (!func_396(Global_1296859->f_15))
	{
		return 0;
	}
	if (func_2012())
	{
		return 0;
	}
	if (!func_2013())
	{
		func_2014();
		return 0;
	}
	if (func_1134(player_id(), 1, 0, 1))
	{
		return 0;
	}
	if (func_2015())
	{
		func_2014();
		return 0;
	}
	if (!get_safe_coord_for_ped(Global_35, false, &uVar0, 16))
	{
		func_2014();
		return 0;
	}
	iVar3 = _0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id()));
	switch (iParam0)
	{
		case 4:
			if (iVar3 > 2 && func_2016(1, 3))
			{
				return 1;
			}
			break;
		case 5:
			if (iVar3 > 1 && func_2016(1, 2))
			{
				return 1;
			}
			break;
	}
	return 0;
}

int func_1557()
{
	if (!func_396(Global_1296859->f_15))
	{
		return 0;
	}
	if (func_2012())
	{
		return 0;
	}
	if (func_1134(player_id(), 1, 0, 1))
	{
		return 0;
	}
	if (!func_2017())
	{
		return 0;
	}
	if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) > 1)
	{
		return 1;
	}
	if (!func_2016(1, 2))
	{
		return 0;
	}
	return 0;
}

int func_1558()
{
	if (!func_2018(func_1261(7)))
	{
		return 0;
	}
	if (_0x2f7eb8b6f6afe79c(1) < 2)
	{
		return 0;
	}
	return 1;
}

int func_1559(int iParam0)
{
	if (iParam0 == 8)
	{
		func_2019(&(Global_1108365->f_935), 1);
	}
	if (!func_2018(func_1261(iParam0)))
	{
		return 0;
	}
	if (!func_396(Global_1296859->f_15))
	{
		return 0;
	}
	if (_0x149a2751ab66ac02(_0x901e0dc25080c8b9(player_id())) < 2)
	{
		return 0;
	}
	if (!func_2016(1, 2))
	{
		return 0;
	}
	if (iParam0 == 8)
	{
		iVar0 = 0;
		while (iVar0 <= 31)
		{
			iVar2 = int_to_playerindex(iVar0);
			if ((!_network_is_player_index_valid(iVar2) || !network_is_player_active(iVar2)) || !_0x9be7dcb22d32ccbe(Global_1296859->f_15, iVar2))
			{
			}
			else
			{
				if (func_415((*Global_1196567)[iVar0]->f_9, 1))
				{
					iVar1++;
				}
				if (iVar1 > 1)
				{
				}
				else
				{
					iVar0++;
				}
				if (iVar1 < 2)
				{
					func_2020(&(Global_1108365->f_935), 1);
					return 0;
				}
				func_2019(&(Global_1108365->f_935), 1);
				return 1;
			}
		}
	}
}

bool func_1560(int iParam0, int iParam1, int iParam2)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return false;
	}
	if (iParam0 < 0 || iParam0 >= 7)
	{
		return false;
	}
	Global_1940311->f_1433.f_157.f_357.f_234.f_1[iParam0] = 1;
	Global_1940311->f_1433.f_157.f_357.f_234.f_1[iParam0]->f_1 = iParam1;
	Global_1940311->f_1433.f_157.f_357.f_234.f_1[iParam0]->f_2 = iParam2;
	return true;
}

int func_1561(var uParam0, var uParam1, bool bParam2)
{
	func_577(&(uParam1->f_25), 8192);
	if (bParam2 && !func_1463(uParam1))
	{
		return 0;
	}
	if (!uParam1->f_26)
	{
	}
	switch (uParam1->f_27)
	{
		case -1178838578:
			iVar3 = 0;
			while (iVar3 < 2)
			{
				iVar0[iVar3] = func_885(iVar3);
				iVar3++;
			}
			uParam0->f_8 = (&iVar0[0] >= 1 && &iVar0[1] >= 1);
			break;
	}
	return 1;
}

int func_1562(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2 && !func_1463(uParam1))
	{
		return 0;
	}
	iVar0 = network_get_player_from_gamer_handle(&(uParam1->f_1));
	if (!_network_is_player_index_valid(iVar0))
	{
		return 0;
	}
	if (func_884(iVar0, &vVar1))
	{
		uParam0->f_2 = func_2021(vVar1.z);
		func_577(&(uParam1->f_25), 65536);
	}
	return 1;
}

void func_1563(bool bParam0)
{
	_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_110, bParam0);
}

void func_1564(bool bParam0)
{
	_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_1.f_1, bParam0);
}

void func_1565(bool bParam0)
{
	_databinding_write_data_bool(Global_1940311->f_1433.f_6279.f_7, bParam0);
}

void func_1566(bool bParam0)
{
	_databinding_write_data_bool(Global_1940311->f_1433.f_7831.f_2, bParam0);
}

int func_1567()
{
	if ((((func_418(func_1137(&(Global_1296859->f_154[&Global_1296859]), 0, 1)) && !func_413()) && func_239()) && Global_1572887->f_6) && !func_419())
	{
		return 1;
	}
	return 0;
}

bool func_1568()
{
	return func_1284(26930588, &uVar0);
}

bool func_1569()
{
	return func_1583(26930588, 1, -570078785, 1);
}

bool func_1570()
{
	return func_1583(26930588, 1, 59806960, 1);
}

void func_1571(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 997808187:
			_databinding_write_data_int(Global_1940311->f_1433.f_1507.f_119, -1);
			_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_120, false);
			_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_123, false);
			_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_124, false);
			break;
		case -570078785:
			iVar0 = func_1292(func_1076(26930588, -570078785, 1, 0, 1, 0));
			iVar1 = func_1292(func_1076(26930588, -570078785, 0, 0, 1, 0));
			_databinding_write_data_int(Global_1940311->f_1433.f_1507.f_119, iVar0);
			_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_120, true);
			_databinding_write_data_int(Global_1940311->f_1433.f_1507.f_122, iVar1);
			_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_123, false);
			_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_124, iVar1 != iVar0);
			break;
		default:
			iVar0 = func_1076(26930588, 59806960, 1, 0, 1, 0);
			iVar1 = func_1076(26930588, 59806960, 0, 0, 1, 0);
			_databinding_write_data_int(Global_1940311->f_1433.f_1507.f_119, iVar0);
			_databinding_write_data_int(Global_1940311->f_1433.f_1507.f_122, iVar1);
			_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_120, false);
			_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_123, iVar1 != iVar0);
			_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_124, false);
			break;
	}
	_databinding_write_data_bool(Global_1940311->f_1433.f_1507.f_121, bParam1);
}

void func_1572(int iParam0)
{
	if (func_434() != -1594107850)
	{
		return;
	}
	func_70(func_2022(iParam0), 1105014447);
}

int func_1573(int iParam0)
{
	if (!func_586(iParam0, 0))
	{
		return 0;
	}
	Var0.f_1 = 10;
	if (!_item_database_get_item_price_modifiers(iParam0, &Var0) || Var0 == 0)
	{
		return 0;
	}
	return 1;
}

bool func_1574()
{
	if (network_is_in_platform_party())
	{
		return network_is_in_platform_party_chat();
	}
	return false;
}

bool func_1575(int iParam0, int iParam1)
{
	return func_2023(iParam0, iParam1, &uVar0);
}

void func_1576()
{
	iVar12 = func_578();
	iVar13 = func_1308(iVar12);
	if (func_1574())
	{
		func_70(_create_var_string(2, "NET_MG_HELP_NO_PARTY_CHAT"), 859817522);
	}
	else if (func_2023(iVar12, 430260396, &Var0))
	{
		func_70(func_2024(iVar13, 1671747787, Var0.f_3), 859817522);
	}
	else if (func_146(131072))
	{
		func_70(func_2025(131072), 1105014447);
	}
	else if (func_146(65536))
	{
		func_70(func_2025(65536), 1105014447);
	}
	else
	{
		func_70(_create_var_string(2, "NET_MG_HELP_PUBLIC_HIDE_ID"), 1105014447);
	}
}

bool func_1577()
{
	return func_146(2048);
}

void func_1578()
{
	_0x3bf0767cf33fcc88(Global_1940311->f_1433.f_8125.f_1);
}

void func_1579(int iParam0, int iParam1)
{
	Var0 = 1;
	Var0.f_1 = 1;
	Var0.f_2 = 1105014447;
	Var0.f_4 = -1;
	Var0.f_5 = -1;
	Var0.f_6 = -1;
	Var0.f_10 = -1;
	Var0.f_11 = -1;
	Var0.f_12 = -1;
	StringCopy(&cVar37, "Moonshine_Location_Root_", 64);
	StringCopy(&cVar45, "Override_Moonshine_Location_Root_", 64);
	StringIntConCat(&cVar37, iParam1, 64);
	StringIntConCat(&cVar45, iParam1, 64);
	iVar28 = func_2026(iParam0);
	StringCopy(&cVar29, _create_var_string(2, func_2027(iParam0)), 64);
	Var0.f_16 = { cVar29 };
	Var0.f_5 = 268082424;
	Var0.f_4 = 1433015236;
	Var0.f_24 = 1442026401;
	Var0.f_25 = -1218088854;
	Var0.f_26 = 0;
	Var0.f_7 = 1447387479;
	Var0.f_9 = 1;
	func_1258(&(Global_1940311->f_1433.f_8125.f_2[iParam1]->f_1), Global_1940311->f_1433.f_8125, cVar37, Var0);
	func_1258(&(Global_1940311->f_1433.f_8125.f_118[iParam1]->f_1), Global_1940311->f_1433.f_8125, cVar45, Var0);
	Global_1940311->f_1433.f_8125.f_2[iParam1] = _databinding_add_data_hash(Global_1940311->f_1433.f_8125.f_2[iParam1]->f_1, "moonshine_selection_district", iVar28);
	Global_1940311->f_1433.f_8125.f_118[iParam1] = _databinding_add_data_hash(Global_1940311->f_1433.f_8125.f_118[iParam1]->f_1, "moonshine_selection_district", iVar28);
	Global_1940311->f_1433.f_8125.f_234[iParam1] = _databinding_add_data_int(Global_1940311->f_1433.f_8125.f_2[iParam1]->f_1, "moonshine_selection_property", iParam0);
	_databinding_write_data_bool_from_parent(Global_1940311->f_1433.f_8125.f_2[iParam1]->f_1, "dynamic_list_item_prompt_enabled", true);
	_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1940311->f_1433.f_8125.f_1, iVar27, "pm_dynamic_text_and_end_image_hold", Global_1940311->f_1433.f_8125.f_2[iParam1]->f_1);
}

int func_1580()
{
	return Global_1298378->f_66;
}

void func_1581(int iParam0)
{
	iVar6 = 0;
	iVar7 = 0;
	iVar8 = *iParam0;
	iVar9 = -1;
	fVar10 = 0f;
	iVar6 = 0;
	while (iVar6 <= (iVar8 - 1))
	{
		(*iParam0)[iVar6] = iVar6;
		fVar0[iVar6] = func_2028(iParam0[iVar6]);
		iVar6++;
	}
	iVar6 = 0;
	iVar6 = 0;
	while (iVar6 <= (iVar8 - 1))
	{
		iVar7 = iVar6 + 1;
		while (iVar7 <= (5 - 1))
		{
			if (&fVar0[iVar6] > &fVar0[iVar7])
			{
				iVar9 = iParam0[iVar6];
				(*iParam0)[iVar6] = iParam0[iVar7];
				(*iParam0)[iVar7] = iVar9;
				fVar10 = &fVar0[iVar6];
				fVar0[iVar6] = &fVar0[iVar7];
				fVar0[iVar7] = fVar10;
			}
			iVar7++;
		}
		iVar6++;
	}
}

int func_1582(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1580598647;
		case 1:
			return 786277441;
		case 3:
			return 1273401170;
		case 2:
			return -127194573;
		case 4:
			return 1480239309;
		default:
			break;
	}
	return 0;
}

bool func_1583(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	return func_1830(iParam0, iParam1, iParam2, &uVar0, &uVar2, 0, bParam3, 0);
}

int func_1584(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -1536030095:
			return 1;
		case -165442446:
			return 0;
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

int func_1585(var uParam0, char* sParam1)
{
	if (_is_stadia_version())
	{
		switch (uParam0->f_28)
		{
			case 1:
			case 8:
			case 12:
				switch (_0x3e8cce6769db5f34(1))
				{
					case -1:
					case 0:
					case 2:
						StringCopy(sParam1, _create_var_string(2, "FRIENDS_LIST_CONSENT_TOOLTIP"), 128);
						return 1;
				}
				break;
		}
	}
	if (!func_1463(uParam0))
	{
		return 0;
	}
	if (func_1991(&(uParam0->f_1), sParam1))
	{
		return 1;
	}
	iVar0 = func_839(&(uParam0->f_1));
	switch (iVar0)
	{
		case 1:
		case 2:
		case 3:
			if (func_1992(iVar0, sParam1))
			{
				return 1;
			}
			break;
	}
	iVar1 = func_837(&(uParam0->f_1));
	switch (iVar1)
	{
		case 9:
		case 10:
		case 11:
			if (func_838(iVar1, sParam1))
			{
				return 1;
			}
			break;
	}
	switch (uParam0->f_27)
	{
		case -1178838578:
			StringCopy(sParam1, _create_var_string(2, "NM_PLAYER_INFO_IN_SESSION_TOOLTIP"), 128);
			break;
		case -462010351:
			StringCopy(sParam1, _create_var_string(2, "NM_PLAYER_INFO_NOT_IN_SESSION_TOOLTIP"), 128);
			break;
	}
	return 1;
}

int func_1586(var uParam0, char* sParam1)
{
	switch (uParam0->f_27)
	{
		case -1178838578:
		case -462010351:
			iVar0 = func_636();
			if (func_637(iVar0) && func_638(iVar0))
			{
				if (!func_639(iVar0, 1))
				{
					return 1;
				}
				iVar1 = func_640(iVar0, &(uParam0->f_1));
				switch (iVar1)
				{
					case 1711458128:
						StringCopy(sParam1, _create_var_string(2, "NET_MG_PLYRMENU_LOCK_OVERALLBUYIN"), 128);
						return 1;
					case -909793512:
						StringCopy(sParam1, _create_var_string(2, "NET_MG_PLYRMENU_LOCK_OVERALLPROFIT"), 128);
						return 1;
					case -993470410:
						StringCopy(sParam1, _create_var_string(10, "NET_MG_PLYRMENU_LOCK_GEOGRAPHIC", func_2029(iVar0)), 128);
						return 1;
					case 1873015794:
						StringCopy(sParam1, _create_var_string(2, "NET_MG_PLYRMENU_LOCK_OVERALLCAP"), 128);
						return 1;
					case -758661171:
						StringCopy(sParam1, _create_var_string(2, "NET_MG_PLYRMENU_LOCK_PRIVBUYIN"), 128);
						return 1;
					case -127293234:
						StringCopy(sParam1, _create_var_string(10, "NET_MG_PLYRMENU_LOCK_BANNED", func_2029(iVar0)), 128);
						return 1;
					default:
						break;
				}
				StringCopy(sParam1, "", 128);
			}
			iVar2 = func_839(&(uParam0->f_1));
			switch (iVar2)
			{
				case 1:
				case 2:
				case 3:
					if (func_1992(iVar2, sParam1))
					{
						return 1;
					}
					break;
			}
			break;
	}
	return 0;
}

int func_1587(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2 && !func_1463(uParam1))
	{
		return 0;
	}
	uParam0->f_8 = 0;
	func_577(&(uParam1->f_25), 8192);
	iVar1 = func_636();
	if (func_637(iVar1) && func_638(iVar1))
	{
		if (!func_639(iVar1, 1))
		{
			return 0;
		}
		iVar0 = func_640(iVar1, &(uParam1->f_1));
		if (iVar0 != -1 && iVar0 != 0)
		{
			return 0;
		}
	}
	if (func_839(&(uParam1->f_1)) == 0)
	{
		uParam0->f_8 = 1;
	}
	return 1;
}

int func_1588(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2 && !func_1463(uParam1))
	{
		return 0;
	}
	switch (uParam1->f_27)
	{
		case -1178838578:
			uParam0->f_8 = func_837(&(uParam1->f_1)) == 5;
			break;
		case -462010351:
			uParam0->f_8 = func_839(&(uParam1->f_1)) == 0;
			break;
		case -1419617212:
		case -1:
		case 791621612:
			return 1;
	}
	func_577(&(uParam1->f_25), 8192);
	return 1;
}

int func_1589(var uParam0, char* sParam1)
{
	if (!func_1463(uParam0))
	{
		return 0;
	}
	if (func_1991(&(uParam0->f_1), sParam1))
	{
		return 1;
	}
	if (_0xa2837a5e21fb5a58(&(uParam0->f_1)))
	{
		StringCopy(sParam1, _create_var_string(2, "PLAYER_ENTRY_INVITED_TO_SESSION_FOOTER"), 128);
		return 1;
	}
	iVar0 = func_837(&(uParam0->f_1));
	if (iVar0 != 5)
	{
		if (func_838(iVar0, sParam1))
		{
			return 1;
		}
	}
	return 0;
}

int func_1590(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2)
	{
	}
	func_577(&(uParam1->f_25), 1536);
	iVar0 = func_2030(&(uParam1->f_1));
	if (func_2031(iVar0, &(uParam0->f_60), &(uParam0->f_59)))
	{
		uParam0->f_57 = 0;
		uParam0->f_61 = 1;
	}
	return 1;
}

int func_1591(var uParam0, var uParam1, bool bParam2)
{
	if (bParam2 && !func_1463(uParam1))
	{
		return 0;
	}
	switch (uParam1->f_27)
	{
		case -1178838578:
			uParam0->f_8 = func_2030(&(uParam1->f_1)) == 5;
			break;
		case -1419617212:
		case -1:
		case 791621612:
			return 1;
	}
	func_577(&(uParam1->f_25), 8192);
	return 1;
}

int func_1592(var uParam0, char[4] cParam1)
{
	if (!func_1463(uParam0))
	{
		return 0;
	}
	iVar0 = func_2030(&(uParam0->f_1));
	if (func_2032(&iVar0, cParam1))
	{
		return 1;
	}
	return 0;
}

bool func_1593()
{
	return Global_1896738->f_3085.f_1;
}

int func_1594()
{
	return Global_1896738->f_3574;
}

void func_1595(int iParam0)
{
	Global_1896738->f_3574 = iParam0;
}

bool func_1596()
{
	if (func_928() == 1 || func_928() == 2)
	{
		return true;
	}
	return false;
}

void func_1597(int iParam0)
{
	Global_1896738->f_3574.f_1 = iParam0;
}

bool func_1598(int iParam0, var uParam1)
{
	if (!network_is_handle_valid(uParam1))
	{
		return false;
	}
	iVar0 = 255;
	if (network_is_gamer_in_my_session(uParam1))
	{
		iVar0 = network_get_player_from_gamer_handle(uParam1);
		if (func_2(iVar0))
		{
			return false;
		}
	}
	switch (iParam0)
	{
		case 7:
		case 8:
		case 9:
		case 10:
			if (func_1603(uParam1))
			{
				return false;
			}
			break;
	}
	return true;
}

int func_1599()
{
	return Global_1896738->f_3574.f_1;
}

bool func_1600(int iParam0)
{
	if (func_1108(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return true;
		}
	}
	return false;
}

bool func_1601(int iParam0)
{
	if (func_1108(iParam0, &uVar0, &iVar1, 1))
	{
		if (iVar1 != -1)
		{
			return iVar1 == func_2033(iParam0, 0);
		}
	}
	return false;
}

bool func_1602(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -963477619:
			if (iParam1 == 1891514641 || iParam1 == 636925055)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
		case 1891514641:
			if (iParam1 == 636925055)
			{
				return true;
			}
			else
			{
				return false;
			}
			break;
	}
	return false;
}

bool func_1603(var uParam0)
{
	if (!network_is_handle_valid(uParam0))
	{
		return false;
	}
	if (!network_is_gamer_in_my_session(uParam0))
	{
		return false;
	}
	iVar0 = network_get_player_from_gamer_handle(uParam0);
	if (!_network_is_player_index_valid(iVar0))
	{
		return false;
	}
	if (!_0xd6f6acf4392187fb(Global_1296859->f_15))
	{
		return false;
	}
	if (!_0x9be7dcb22d32ccbe(Global_1296859->f_15, iVar0))
	{
		return false;
	}
	return true;
}

int func_1604(int iParam0)
{
	if (iParam0 == 255 || iParam0 == network_player_id_to_int())
	{
		return _0x32c90cdfaf40514c();
	}
	return Global_1145091[iParam0];
}

int func_1605()
{
	return Global_1896738->f_208;
}

void func_1606(int iParam0)
{
	Global_1896738->f_197.f_10 = iParam0;
}

int func_1607()
{
	return floor((to_float(_0xb389289f031f059a()) / to_float(32)));
}

int func_1608(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= Global_1896738->f_197.f_10)
	{
		return 0;
	}
	Global_1896738->f_197.f_9 = iParam0;
	Global_1896738->f_197.f_8 = iParam0;
	return 1;
}

int func_1609()
{
	if (!_databinding_is_data_id_valid(Global_1896738->f_197.f_2))
	{
		return 0;
	}
	if (Global_1896738->f_197.f_10 <= 0)
	{
		iVar0 = 1;
	}
	else
	{
		iVar0 = Global_1896738->f_197.f_10;
	}
	sVar1 = _create_var_string(2, "NM_PW_PLAYER_LIST_PAGE", Global_1896738->f_197.f_9 + 1, iVar0);
	_databinding_write_data_string(Global_1896738->f_197.f_2, sVar1);
	_databinding_write_data_bool(Global_1896738->f_197, Global_1896738->f_197.f_10 > 1);
	return 1;
}

int func_1610()
{
	return Global_1896738->f_197.f_8;
}

bool func_1611()
{
	return Global_1896738->f_197.f_7;
}

int func_1612()
{
	return Global_1896738->f_197.f_10;
}

int func_1613()
{
	return Global_1896738->f_197.f_9;
}

void func_1614(int iParam0)
{
	func_789();
	iVar0 = 255;
	iVar1 = 0;
	while (iVar1 < Global_1940311->f_1433.f_830.f_2.f_483)
	{
		if (!network_is_handle_valid(Global_1940311->f_1433.f_830.f_2.f_1.f_1[iVar1]))
		{
		}
		else
		{
			if (network_is_gamer_in_my_session(Global_1940311->f_1433.f_830.f_2.f_1.f_1[iVar1]))
			{
				iVar0 = network_get_player_from_gamer_handle(Global_1940311->f_1433.f_830.f_2.f_1.f_1[iVar1]);
				if (func_2(iVar0))
				{
				}
				else
				{
					switch (iParam0)
					{
						case 7:
						case 8:
						case 9:
						case 10:
							if (func_1603(Global_1940311->f_1433.f_830.f_2.f_1.f_1[iVar1]))
							{
							}
							else if (!func_882(Global_1940311->f_1433.f_830.f_2.f_1.f_1[iVar1], &(Global_1940311->f_1433.f_830.f_2.f_1.f_1[iVar1]->f_7), 0, iParam0))
							{
							}
							iVar1++;
							default:
								break;
					}
				}
			}
		}
	}
}

int func_1615(var uParam0, int iParam1)
{
	if (iParam1 != Global_1139119->f_259)
	{
		return 1;
	}
	iVar0 = 0;
	while (iVar0 < iParam1)
	{
		if (iVar0 < Global_1139119->f_1)
		{
			if (!network_are_handles_the_same(Global_1139119->f_1[iVar0], (*uParam0)[iVar0]))
			{
				return 1;
			}
		}
		iVar0++;
	}
	return 0;
}

void func_1616()
{
	Global_1139119->f_259 = 0;
	Global_1139119->f_261 = 0;
	iVar0 = 0;
	while (iVar0 < 32)
	{
		*Global_1139119->f_1[iVar0] = { Var1 };
		Global_1139119->f_226[iVar0] = 0;
		iVar0++;
	}
}

int func_1617(int iParam0)
{
	if (iParam0 == 2)
	{
		return -471827042;
	}
	return 0;
}

bool func_1618(int iParam0)
{
	return func_1322(iParam0, 1);
}

int func_1619(int iParam0, bool bParam1, bool bParam2)
{
	*bParam1 = 0;
	if (func_1322(iParam0, 2))
	{
		*bParam1 = func_1322(iParam0, 4);
		if (bParam2)
		{
			func_1323(iParam0);
		}
		return 1;
	}
	return 0;
}

void func_1620(var uParam0)
{
	func_2034(uParam0, 0f);
}

bool func_1621(var uParam0)
{
	return func_1095(*uParam0, 2);
}

float func_1622()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return (to_float(iVar0) / 1000f);
	}
	return (to_float(get_game_timer()) / 1000f);
}

bool func_1623(int iParam0)
{
	return func_41(&(Global_1956200->f_1565), iParam0, 1);
}

bool func_1624(var uParam0, int iParam1, var uParam2, int iParam3, bool bParam4, var uParam5, int iParam6, bool bParam7)
{
	iVar0 = func_540(bParam7);
	if (_0x033ee4b89f3ac545(iVar0, &uParam0, bParam4) <= iParam6)
	{
		return false;
	}
	if (!_0xbe012571b25f5aca(iVar0, &uParam0, bParam4, iParam6, uParam5))
	{
		return false;
	}
	return true;
}

int func_1625()
{
	return Global_1940311->f_1433.f_4189.f_2083;
}

int func_1626(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -2094367662:
			return 18;
		case -1799662290:
			return 5;
		case -1756972389:
			return 10;
		case -1721456649:
			return 20;
		case -1505156133:
			return 33;
		case -1443085621:
			return 32;
		case -1415025746:
			return 34;
		case -1296457610:
			return 3;
		case -1214886674:
			return 24;
		case -950892868:
			return 26;
		case -910204339:
			return 14;
		case -806881894:
			return 21;
		case -556609435:
			return 25;
		case -490770640:
			return 30;
		case -36524866:
			return 22;
		case 0:
			return 0;
		case 83146574:
			return 31;
		case 98090593:
			return 11;
		case 115034433:
			return 12;
		case 396773658:
			return 1;
		case 459036629:
			return 16;
		case 610102849:
			return 13;
		case 615198061:
			return 19;
		case 771930716:
			return 4;
		case 915626679:
			return 2;
		case 996070251:
			return 8;
		case 1098820611:
			return 15;
		case 1136837330:
			return 23;
		case 1581755436:
			return 7;
		case 1670807098:
			return 27;
		case 1777305156:
			return 6;
		case 1878949572:
			return 29;
		case 1935456893:
			return 17;
		case 2067900487:
			return 9;
		case 2132497367:
			return 28;
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

int func_1627(int iParam0)
{
	if (!func_964())
	{
		return -1;
	}
	if (!func_1021(iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&Global_1139381->f_4796.f_34[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1628(int iParam0)
{
	if (iParam0 > 3)
	{
		return false;
	}
	if (iParam0 < 0)
	{
		return false;
	}
	return true;
}

bool func_1629(var uParam0)
{
	if (!func_2035(*uParam0))
	{
		return false;
	}
	if (func_1632(uParam0))
	{
		return true;
	}
	return _unlock_is_unlocked(uParam0->f_2);
}

int func_1630(var uParam0)
{
	if (!func_1021(*uParam0))
	{
		return -1;
	}
	if (!func_586(uParam0->f_2, 0))
	{
		return -1;
	}
	if (!_0xb881ca836cc4b6d4(&(uParam0->f_3)))
	{
		return 0;
	}
	iVar1 = 0;
	while (iVar1 < 3)
	{
		iVar6 = func_2036(iVar1);
		Var2 = { func_583(iVar6, uParam0->f_3, 1635590003, 1) };
		if (!_0xb881ca836cc4b6d4(&Var2))
		{
		}
		else
		{
			iVar0 = iVar1;
			iVar1++;
		}
	}
	return iVar0;
}

int func_1631(var uParam0)
{
	if (uParam0->f_13 >= 2)
	{
		return 0;
	}
	if (!func_1021(*uParam0))
	{
		return -1;
	}
	if (!func_586(uParam0->f_2, 0))
	{
		return -1;
	}
	if (!_0xb881ca836cc4b6d4(&(uParam0->f_3)))
	{
		return 0;
	}
	iVar2 = 0;
	while (iVar2 < 3)
	{
		iVar7 = func_2036(iVar2);
		Var3 = { func_583(iVar7, uParam0->f_3, 1635590003, 1) };
		if (!_0xb881ca836cc4b6d4(&Var3))
		{
		}
		else
		{
			iVar8 = func_2037(iVar2);
			iVar0 = func_1104(1412640604, Var3, iVar8, 1, 0, 0);
			iVar1 = (iVar1 + iVar0);
			iVar2++;
		}
	}
	return iVar1;
}

int func_1632(var uParam0)
{
	return func_2038(uParam0->f_2, 1);
}

int func_1633(var uParam0)
{
	if (!func_1021(*uParam0))
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (func_2039(iVar0, 1) == uParam0->f_2)
		{
			return 1;
		}
		iVar0++;
	}
	return 0;
}

bool func_1634(var uParam0)
{
	return uParam0->f_13 >= 2;
}

bool func_1635(var uParam0)
{
	return ((!uParam0->f_14 && uParam0->f_20) && func_2040(uParam0));
}

int func_1636(var uParam0)
{
	return 0;
}

var func_1637(var uParam0)
{
	return (uParam0->f_24 || uParam0->f_23);
}

bool func_1638(var uParam0)
{
	uParam0->f_28 = 0;
	return ((!uParam0->f_20 && func_2041(uParam0)) && func_1284(uParam0->f_2, &(uParam0->f_28)));
}

bool func_1639(var uParam0)
{
	if (uParam0->f_26)
	{
		return false;
	}
	uParam0->f_28 = 0;
	return ((!uParam0->f_20 && func_2041(uParam0)) && func_1285(uParam0->f_2, &(uParam0->f_28)));
}

bool func_1640(var uParam0)
{
	return (((!uParam0->f_20 && func_2041(uParam0)) && !uParam0->f_26) && !uParam0->f_27);
}

int func_1641(var uParam0)
{
	return 0;
}

var func_1642(var uParam0)
{
	return (((uParam0->f_30 || uParam0->f_29) || uParam0->f_26) || uParam0->f_27);
}

int func_1643(int iParam0, int iParam1)
{
	return func_1076(iParam0, iParam1, 1, 0, 1, 0);
}

int func_1644(int iParam0, int iParam1)
{
	iVar0 = func_2036(iParam0 + 1);
	return func_1643(iVar0, iParam1);
}

int func_1645(int iParam0, int iParam1)
{
	if (!_network_is_player_index_valid(iParam1))
	{
		return -1;
	}
	if (!func_1021(iParam0))
	{
		return -1;
	}
	iVar1 = iParam1;
	iVar0 = 0;
	while (iVar0 < 4)
	{
		if (&(*Global_1145091)[iVar1]->f_10[iVar0] == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1646(var uParam0, int iParam1)
{
	return func_415(*uParam0, iParam1);
}

char* func_1647(var uParam0)
{
	return _create_var_string(42, "MP_ABILITY_CARD_DISPLAY_STRING", _create_var_string(0, uParam0->f_8), _create_var_string(2, func_2042(uParam0->f_13)));
}

char* func_1648(struct<10> Param0, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34, var uParam35, var uParam36, var uParam37, var uParam38, var uParam39, var uParam40, var uParam41, var uParam42, var uParam43, var uParam44, var uParam45, var uParam46)
{
	if (!func_2043(uParam46->f_13))
	{
		return "NULL";
	}
	return _create_var_string(0, Param0.f_9[uParam46->f_13]->f_11);
}

int func_1649(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	return func_2044(iParam0, iVar0);
}

bool func_1650(var uParam0)
{
	return uParam0->f_1 == 304794100;
}

bool func_1651(var uParam0)
{
	return (uParam0->f_20 && !uParam0->f_22);
}

char* func_1652(var uParam0)
{
	if (uParam0->f_26 || uParam0->f_27)
	{
		return "IB_REDEEM";
	}
	if (uParam0->f_30)
	{
		return "IB_BUY_NOW";
	}
	return "IB_BUY";
}

char* func_1653(var uParam0)
{
	if (uParam0->f_24)
	{
		return "IB_UPGRADE_NOW";
	}
	return "IB_UPGRADE";
}

bool func_1654(var uParam0)
{
	return (uParam0->f_29 || uParam0->f_23);
}

bool func_1655(var uParam0)
{
	return (!func_1654(uParam0) && (uParam0->f_30 || uParam0->f_24));
}

int func_1656(var uParam0)
{
	if (uParam0->f_26)
	{
		return 1;
	}
	else if (func_1654(uParam0))
	{
		if (uParam0->f_17 < 0)
		{
			return 0;
		}
		else if (func_537(uParam0->f_17))
		{
			return 1;
		}
	}
	else if (func_1655(uParam0))
	{
		if (uParam0->f_18 < 0)
		{
			return 0;
		}
		else if (func_616(uParam0->f_18))
		{
			return 1;
		}
	}
	return 0;
}

var func_1657(int iParam0)
{
	return _0x2b6846401d68e563(to_float(iParam0), 0);
}

var func_1658(int iParam0)
{
	if (iParam0 == 0)
	{
		return "00";
	}
	return func_1657(iParam0);
}

int func_1659(int iParam0)
{
	return (iParam0 / 100);
}

int func_1660(int iParam0)
{
	return (iParam0 % 100);
}

int func_1661(int iParam0)
{
	iVar0 = iParam0;
	return func_2045(iVar0);
}

int func_1662()
{
	return Global_1139381->f_4621.f_155;
}

char* func_1663(var uParam0, var uParam1, var uParam2, var uParam3)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

char* func_1664(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_var_string(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_TITLE");
		case 1:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_1_FOCUS_TITLE");
		case 2:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_2_FOCUS_TITLE");
		case 3:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_3_FOCUS_TITLE");
		default:
			break;
	}
	return "NULL";
}

char* func_1665(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_var_string(2, "NET_PLAYER_ABILITY_ACTIVE_SLOT_FOCUS_DESCRIPTION");
		case 1:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		case 2:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		case 3:
			return _create_var_string(2, "NET_PLAYER_ABILITY_PASSIVE_SLOT_FOCUS_DESCRIPTION");
		default:
			break;
	}
	return "NULL";
}

char* func_1666()
{
	if (func_766())
	{
		Var0 = { func_2046(&(Global_1296859->f_154[&Global_1296859])) };
		iVar64 = Var0.f_21.f_2;
		switch (iVar64)
		{
			case -504335712:
				return func_2047(Global_524288->f_40400, &(Global_3145858->f_11), &(Global_3145858->f_108));
			case 395262693:
				return func_2048(Global_2359296->f_155);
			case -933924539:
				return func_2049(Global_2097152->f_32);
			default:
				break;
		}
	}
	return _create_var_string(2, "FREEROAM_HEADER");
}

int func_1667(int iParam0)
{
	if (iParam0 == -1)
	{
		return -1;
	}
	switch (iParam0)
	{
		case 6:
			return Global_1940311->f_1433.f_830;
		case 19:
			return Global_1940311->f_1433.f_157.f_197.f_1;
		default:
			break;
	}
	return -1;
}

void func_1668()
{
	iVar0 = 0;
	while (iVar0 < 7)
	{
		func_878(iVar0);
		iVar0++;
	}
}

var func_1669(int iParam0, int iParam1)
{
	return Global_1138962->f_1[iParam0]->f_15[iParam1]->f_1;
}

int func_1670(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -910183757;
		case 1:
			return -1204301712;
		case 2:
			return 827722112;
		case 3:
			return -529367264;
		case 4:
			return 1945361740;
		default:
			break;
	}
	return 0;
}

bool func_1671(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

void func_1672()
{
	if (!_is_any_app_running())
	{
		return;
	}
	_close_all_apps();
}

bool func_1673(bool bParam0, bool bParam1, bool bParam2)
{
	bVar0 = func_2051(bParam2, func_2050(), 1, 0, 1, 1, 1, bParam0, bParam1);
	if (!bVar0)
	{
		return false;
	}
	return true;
}

void func_1674(int iParam0)
{
	Global_1896738->f_390 = iParam0;
}

bool func_1675(int iParam0)
{
	if (iParam0 == Global_1940311->f_1433.f_4189.f_2085)
	{
		return false;
	}
	Global_1940311->f_1433.f_4189.f_2085 = iParam0;
	return true;
}

void func_1676(int iParam0)
{
	if (iParam0 == 0)
	{
		func_2052(0);
	}
	else
	{
		func_2052(func_2053(iParam0));
	}
}

int func_1677(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 304794100;
		case 2:
			return 1467455271;
		case 3:
			return 1272538178;
		case 4:
			return -1794176813;
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

char* func_1678(int iParam0)
{
	switch (iParam0)
	{
		case 304794100:
			return _create_var_string(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_DEAD_EYE");
		case 1467455271:
			return _create_var_string(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_COMBAT");
		case 1272538178:
			return _create_var_string(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_RECOVERY");
		case -1794176813:
			return _create_var_string(2, "NET_PLAYER_ABILITY_CATEGORY_TITLE_DEFENSE");
		default:
			break;
	}
	return "NULL";
}

void func_1679(int iParam0)
{
	_databinding_clear_binding_array(Global_1940311->f_1433.f_4189.f_36);
	Var0.f_7 = 1;
	Var0.f_13 = -1;
	Var0.f_15 = -1;
	Var0.f_16 = -1;
	Var0.f_17 = -1;
	Var0.f_18 = -1;
	Var0.f_19 = -1;
	Var0.f_32 = -1;
	iVar35 = 0;
	while (iVar35 < 35)
	{
		iVar34 = &Global_1139381->f_11.f_1562.f_1611[iVar35];
		if (!func_324(iVar34, &Var0, 2, -1))
		{
		}
		else if (!func_2035(Var0))
		{
		}
		else if (Var0.f_33)
		{
		}
		else if (!func_1021(Var0))
		{
		}
		else if (iParam0 != Var0.f_1)
		{
		}
		else
		{
			_databinding_insert_ui_item_to_list_from_context_string_alias(Global_1940311->f_1433.f_4189.f_36, iVar35, "ability_card", &(Global_1940311->f_1433.f_4189.f_37[func_1626(iVar34, 1)]));
		}
		iVar35++;
	}
}

void func_1680(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	func_974(uParam0, &uParam1);
}

bool func_1681(int iParam0)
{
	return func_2054() == iParam0;
}

void func_1682(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	func_974(uParam0, &uParam1);
	_databinding_write_data_string(uParam0->f_45, func_2055(&uParam1));
	_databinding_write_data_string(uParam0->f_47, func_2056(&uParam1));
	_databinding_write_data_bool(uParam0->f_46, func_2057(&uParam1));
	_databinding_write_data_bool(uParam0->f_48, func_2058(&uParam1));
}

void func_1683()
{
	Global_1298378->f_1 = Global_1071686->f_28448[50]->f_3;
	Global_1298378->f_1.f_1 = 0;
	Global_1298378->f_1.f_2 = 0;
	Global_1298378->f_1.f_3 = 0;
	Global_1298378->f_1.f_4 = 0;
}

int func_1684(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 0;
	}
	return _0xf4452ce83118c738(iParam0, iParam1);
}

int func_1685(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4)
{
	if (func_2059(iParam0))
	{
		return 0;
	}
	if (iParam1 <= 0)
	{
		return 0;
	}
	iVar0 = func_1684(iParam0, -455129387);
	if (iVar0 == 0)
	{
		return 0;
	}
	if (!func_1390(bParam4))
	{
		if (iVar0 == 0)
		{
			return 0;
		}
		if (!func_2060(&Var1, &iVar62, iParam0, iVar0, iParam1, 1) || iVar62 < 1)
		{
			return 0;
		}
		iVar64 = -1;
		Var65.f_9 = 1;
		Var65.f_11 = -1591664384;
		iVar63 = 0;
		while (iVar63 < iVar62)
		{
			Var65 = { func_2061(iParam0, Var1[iVar63]) };
			Var65.f_12 = iParam2;
			iVar64 = func_1392(1702063850, &Var65, 1);
			if (iVar64 == -1)
			{
				return 0;
			}
			iVar63++;
		}
		if (iVar64 != -1)
		{
			Var81.f_7 = -142743235;
			Var81.f_16 = -1;
			Var81 = bParam3;
			Var81.f_7 = iParam2;
			func_1393(iVar64, Var81);
			return 1;
		}
		return 0;
	}
	if (!_0xb4158c8c9a3b5dce(func_540(bParam4), iParam0, iParam1, iParam2))
	{
		return 0;
	}
	return 1;
}

struct<5> func_1686(int iParam0, bool bParam1, bool bParam2)
{
	Var0 = { func_966(bParam1) };
	Var0.f_4 = 1084182731;
	iVar5 = func_1050(iParam0);
	switch (iVar5)
	{
		case -1037537535:
			Var0 = { func_583(889965687, Var0, 1034665895, bParam1) };
			Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			break;
		case -427144552:
			Var0 = { func_2062(bParam1) };
			if (bParam2 && func_2063(iParam0, 1))
			{
				Var6.f_9 = -1591664384;
				if (!func_2064(iParam0, &Var0, 1728382685, 0, 0))
				{
					Var0.f_4 = 1728382685;
				}
				else if (!func_2064(iParam0, &Var0, -649335959, 0, 0))
				{
					Var0.f_4 = -649335959;
				}
				else if (func_2065(iParam0, &Var6, 1728382685))
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
		case -2072933068:
		case -1784221369:
			Var0.f_4 = 1782082944;
			break;
		case -1650247667:
			Var0.f_4 = -1591664384;
			Var0 = { func_541(bParam1) };
			switch (func_1052(iParam0))
			{
				case -1070622585:
					Var0.f_4 = -6796437;
					break;
				case -1057349201:
					Var0.f_4 = 1473261684;
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
		case -1962314949:
			if (func_2066(iParam0, -1823706425))
			{
				Var0 = { func_583(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, -1838434463);
			}
			else if (func_2066(iParam0, -1483207246))
			{
				Var0 = { func_583(889965687, Var0, 1034665895, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 889965687);
			}
			else if (_inventory_fits_slot_id(iParam0, -1911121386))
			{
				Var0 = { func_583(-1838434463, Var0, 1084182731, bParam1) };
				Var0.f_4 = -1911121386;
			}
			else if (_inventory_fits_slot_id(iParam0, -1311702610))
			{
				Var0.f_4 = -1311702610;
			}
			else if (func_2066(iParam0, -1653629781))
			{
				Var0 = { func_583(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
			}
			break;
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
				Var28.f_9 = -1591664384;
				if (!func_1251(Var0, &Var28, bParam1, 0, -1))
				{
					Var0.f_4 = 0;
				}
				else
				{
					Var0 = { Var28.f_5 };
					Var0.f_4 = -833319691;
				}
			}
			else if (_inventory_fits_slot_id(iParam0, -718417579))
			{
				Var0.f_4 = -718417579;
			}
			else if (func_2066(iParam0, -1653629781))
			{
				Var0 = { func_583(1384535894, Var0, 1784584921, bParam1) };
				Var0.f_4 = _0x6452b1d357d81742(iParam0, 1384535894);
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

bool func_1687(int iParam0, int iParam1, var uParam2, int iParam3, int iParam4, bool bParam5, bool bParam6)
{
	if (!_0xb881ca836cc4b6d4(iParam1))
	{
		return false;
	}
	if (func_2059(iParam0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1251(*iParam1, &Var0, bParam6, 0, -1))
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
	if (!func_1390(bParam6))
	{
		iVar14 = -1;
		if (Var0.f_13)
		{
		}
		else if (func_619() == 0)
		{
			Var15.f_9 = 1;
			Var15.f_11 = -1591664384;
			Var15.f_8 = iParam0;
			Var15 = { *iParam1 };
			Var15.f_4 = { *uParam2 };
			Var15.f_11 = uParam2->f_4;
			Var15.f_9 = iParam3;
			Var15.f_12 = iParam4;
			iVar14 = func_1392(1702063850, &Var15, 1);
			if (iVar14 != -1)
			{
				Var31.f_7 = -142743235;
				Var31.f_16 = -1;
				Var31 = bParam5;
				Var31.f_7 = iParam4;
				func_1393(iVar14, Var31);
			}
		}
		return iVar14 != -1;
	}
	if (!_0x3e4e811480b3ae79(func_540(bParam6), iParam1, iParam3, iParam4))
	{
		return false;
	}
	return true;
}

int func_1688(int iParam0)
{
	if (func_1040(iParam0, 1573112293))
	{
		return func_2067(iParam0);
	}
	if (func_2068(iParam0))
	{
		return func_2069();
	}
	switch (func_1052(iParam0))
	{
		case -77448735:
			if (func_2070(iParam0))
			{
				return func_2067(iParam0);
			}
			break;
		case -1393202694:
		case 2041469314:
			return func_2067(iParam0);
		case -1520388130:
		case 1802292908:
			return func_2071();
		case -2061583405:
		case 81053684:
		case 1477698721:
			return func_2072();
		case -525676072:
			return func_2072();
		case 1779021115:
			if (iParam0 == -1016714371 || iParam0 == 332793555)
			{
				return func_2073();
			}
			return func_2074();
		case -1823706425:
			if (iParam0 == -1115561122)
			{
				return func_2075();
			}
			else
			{
				return func_2076();
			}
			break;
		case -854348463:
			return func_2077();
		case -2101244071:
		case 664784405:
		case 874188557:
		case 2020212423:
			return func_2078();
		default:
			if (func_586(iParam0, 0))
			{
				if (func_1040(iParam0, 1919582297))
				{
					return func_2079();
				}
				else if (iParam0 == -2035110427 || iParam0 == -1448210800)
				{
					return func_2080();
				}
				else if (iParam0 == -1516555556)
				{
					return func_2081();
				}
				else if (func_1040(iParam0, 1147021565))
				{
					return func_2082();
				}
			}
			return func_2083();
	}
	return func_2083();
}

bool func_1689(bool bParam0, int iParam1)
{
	if ((Global_1940258->f_6 || is_ped_dead_or_dying(Global_34, true)) || is_entity_dead(Global_34))
	{
		return false;
	}
	if (func_619() == 0)
	{
		if (func_2084(131072))
		{
			return false;
		}
	}
	if (!func_415(iParam1, 1))
	{
		if (func_2084(1024))
		{
			return false;
		}
	}
	if (Global_1940258->f_16)
	{
		return false;
	}
	if (!func_415(iParam1, 2) && func_2084(32))
	{
		return false;
	}
	if (!func_415(iParam1, 4))
	{
		if (func_2084(4096))
		{
			return false;
		}
	}
	if (!func_415(iParam1, 8) && func_2084(512))
	{
		return false;
	}
	if (!func_415(iParam1, 512) && !func_2085(bParam0))
	{
		return false;
	}
	if (!func_415(iParam1, 262144) && !func_2086(bParam0, func_415(iParam1, 524288)))
	{
		return false;
	}
	if (!func_415(iParam1, 64) && !func_2087(bParam0, iParam1, 1))
	{
		return false;
	}
	if (!func_415(iParam1, 128))
	{
		if (func_2088(Global_34, 1868526510) || is_ped_on_mount(Global_34))
		{
			if (bParam0)
			{
				func_626("ITEM_UNUSABLE_FULLY_MOUNTED", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_415(iParam1, 16))
	{
		if (func_2089(Global_34))
		{
			iVar0 = get_mount(Global_34);
			if (!func_2090(iVar0, 1))
			{
				if (bParam0)
				{
					func_626("ITEM_UNUSABLE_HORSE_SPEED", 10000, 0, 0, 0, 1);
				}
				return false;
			}
		}
	}
	if (!func_415(iParam1, 256) && func_2084(8192))
	{
		return false;
	}
	if (!func_415(iParam1, 1024) && func_2084(65536))
	{
		if (bParam0)
		{
			func_626("ITEM_UNUSABLE_CINEMATIC_CAM", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (!func_415(iParam1, 2048))
	{
		if (func_2084(32768))
		{
			return false;
		}
	}
	if (!func_415(iParam1, 4096))
	{
		if (func_2084(16384))
		{
			return false;
		}
	}
	if (!func_415(iParam1, 8192))
	{
		if (!func_2084(16))
		{
			return false;
		}
	}
	if (!func_415(iParam1, 67108864))
	{
		if (!func_2084(268435456))
		{
			return false;
		}
	}
	if (!func_415(iParam1, 16384))
	{
		if (func_2084(256))
		{
			return false;
		}
	}
	if (!func_415(iParam1, 32768))
	{
		if (func_2091())
		{
			if (bParam0)
			{
				func_626("ITEM_UNUSABLE_SATCHEL_OPEN", 10000, 0, 0, 0, 1);
			}
			return false;
		}
	}
	if (!func_415(iParam1, 131072))
	{
		if (!func_2084(524288))
		{
			return false;
		}
	}
	if (!func_415(iParam1, 65536))
	{
		if (!func_2084(262144))
		{
			return false;
		}
	}
	if (!func_415(iParam1, 1048576))
	{
		if (!func_2084(2097152))
		{
			return false;
		}
	}
	if (!func_415(iParam1, 2097152))
	{
		if (!func_2084(8388608))
		{
			return false;
		}
	}
	if (!func_415(iParam1, 4194304))
	{
		if (!func_2084(16777216))
		{
			return false;
		}
	}
	if (!func_415(iParam1, 8388608))
	{
		if (func_2084(33554432))
		{
			return false;
		}
	}
	if (!func_415(iParam1, 16777216))
	{
		if (func_2084(67108864))
		{
			return false;
		}
	}
	if (!func_415(iParam1, 33554432))
	{
		if (func_2084(134217728))
		{
			return false;
		}
	}
	if (func_2084(64))
	{
		return false;
	}
	else if (func_2084(128))
	{
		return false;
	}
	else if (func_2084(1048576))
	{
		return false;
	}
	else if (func_2084(4))
	{
		return false;
	}
	if (!func_415(iParam1, 134217728))
	{
		if (func_2092(256))
		{
			return false;
		}
	}
	return true;
}

bool func_1690()
{
	if (!does_entity_exist(Global_34))
	{
		return false;
	}
	if (ped_has_use_scenario_task(Global_34))
	{
		iVar0 = _get_scenario_point_type_ped_is_using(Global_34);
		iVar1 = iVar0;
		if (iVar1 != -1241981548 && iVar1 != 1049986774)
		{
			return true;
		}
	}
	return false;
}

bool func_1691(bool bParam0)
{
	if (bParam0)
	{
		return Global_1915715->f_20638;
	}
	return (Global_1915715->f_20638 || Global_1915715->f_22504.f_1);
}

bool func_1692(int iParam0, int iParam1)
{
	return _databinding_read_data_bool(Global_1940311->f_1433.f_54.f_85);
}

int func_1693()
{
	return Global_1915715->f_22504.f_5;
}

char* func_1694()
{
	iVar0 = func_1693();
	switch (iVar0)
	{
		case 0:
			return "SHOPS_HANDHELD_FAIL_NONE";
		case 1:
			return "SHOPS_HANDHELD_FAIL_NOT_READY";
		case 3:
			return "SHOPS_HANDHELD_FAIL_DISABLED";
		case 4:
			return "SHOPS_HANDHELD_FAIL_INSTANCED";
		case 5:
			return "SHOPS_HANDHELD_FAIL_SHOP_CL";
		case 6:
			return "SHOPS_HANDHELD_FAIL_NOT_OWN";
		case 9:
			return "SHOPS_HANDHELD_FAIL_WAIT_FOR_FREEROAM";
		case 7:
			return "SHOPS_HANDHELD_FAIL_PVP_ASSA";
		case 8:
			return "SHOPS_HANDHELD_FAIL_SHOPS_DISABLED_THIS_FRAME";
		case 12:
			return "SHOPS_HANDHELD_FAIL_PLAYER_DIED";
		case 13:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_COMBAT";
		case 11:
			return "SHOPS_HANDHELD_FAIL_PLAYER_RIDING";
		case 14:
			return "SHOPS_HANDHELD_FAIL_PLAYER_USING_TURRET";
		case 15:
			return "SHOPS_HANDHELD_FAIL_PLAYER_FALLING";
		case 16:
			return "SHOPS_HANDHELD_FAIL_PLAYER_INSPECTING";
		case 17:
			return "SHOPS_HANDHELD_FAIL_PLAYER_CARRYING";
		case 18:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BROWSING";
		case 19:
			return "SHOPS_HANDHELD_FAIL_PLAYER_IN_SCENARIO";
		case 20:
			return "SHOPS_HANDHELD_FAIL_PLAYER_SPECTATING";
		case 21:
			return "SHOPS_HANDHELD_FAIL_PLAYER_BRUSHING";
		case 22:
			return "SHOPS_HANDHELD_FAIL_IN_DEEP_WATER";
		case 23:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME";
		case 24:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ARCHERY";
		case 25:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CHALLENGE";
		case 26:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_DEAD_DROP";
		case 27:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_GOLDEN_SHOWDOWN";
		case 28:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_HOT_PROPERTY";
		case 29:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_CASTLE";
		case 30:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_KING_OF_THE_RAILS";
		case 31:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WRECKAGE";
		case 32:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_CONDOR_EGG";
		case 33:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_ANIMAL_TAGGING";
		case 35:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_PROTECT_LEGENDARY_ANIMAL";
		case 34:
			return "SHOPS_HANDHELD_FAIL_MISSION_FME_WILDLIFE_PHOTOGRAPHER";
		case 37:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV";
		case 39:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_BIGGEST_FISH";
		case 40:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_FLYING_BIRD";
		case 41:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HERBALIST";
		case 36:
			return "SHOPS_HANDHELD_FAIL_MISSION_FEUD";
		case 38:
			return "SHOPS_HANDHELD_FAIL_MISSION_PV_HUNT_THE_POSSE_LEADER";
		case 42:
			return "SHOPS_HANDHELD_FAIL_PLAYER_MATCHMAKING";
		case 46:
			Var1 = -1;
			Var1.f_1 = -1;
			Var1 = { func_832(0) };
			if (!func_1112(Var1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			iVar3 = func_2093(&Var1, 1);
			if (iVar3 == -1)
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			if (!func_2094(iVar3, 461218520, 1))
			{
				return "SHOPS_HANDHELD_FAIL_SHOP_CL";
			}
			return func_1354(func_2095(iVar3, 461218520));
	}
	return "";
}

void func_1695(int iParam0)
{
	Global_1915715->f_22504.f_5 = iParam0;
}

int func_1696(int iParam0)
{
	return iParam0;
}

int func_1697(int iParam0, int iParam1)
{
	if (!func_2096(iParam0, 2))
	{
		return 0;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	if (_0x99c6ea66dfe73757(iParam0, iParam1, 1120943070))
	{
		return 1;
	}
	return 0;
}

int func_1698(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 49)
	{
		if (func_2097(iVar0, iParam0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1699(int iParam0, bool bParam1, bool bParam2)
{
	if (!func_2098(iParam0))
	{
		return 1;
	}
	if (!func_2099(iParam0))
	{
		return 5;
	}
	if (!bParam1 && Global_1211392->f_48[iParam0]->f_17)
	{
		if (bParam2 || Global_1211392->f_1.f_20 != 0)
		{
			return 2;
		}
	}
	if (!bParam2 && !func_2100(iParam0))
	{
		return 3;
	}
	if (func_2101(iParam0) && !func_1103())
	{
		return 4;
	}
	return 0;
}

bool func_1700(int iParam0, bool bParam1, bool bParam2, int iParam3, int iParam4)
{
	switch (func_1701(iParam0, -949239683))
	{
		case -1420737577:
			if (!bParam1)
			{
				iVar0 = 2129866661;
				if (bParam2)
				{
					iVar0 = 1607869040;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1712126263:
			if (!bParam1)
			{
				iVar0 = 1589555562;
				if (bParam2)
				{
					iVar0 = -1424266966;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1229959999:
			if (!bParam1)
			{
				iVar0 = 1159762194;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1050374492:
			if (!bParam1)
			{
				iVar0 = 343713021;
				if (bParam2)
				{
					iVar0 = 760057945;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1513351077:
			if (!bParam1)
			{
				iVar0 = 889797228;
				if (bParam2)
				{
					iVar0 = -1043439814;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1565009253:
			if (!bParam1)
			{
				iVar0 = 1254219723;
				if (bParam2)
				{
					iVar0 = -2077441721;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 733893097:
			if (!bParam1)
			{
				iVar0 = 436157482;
				if (bParam2)
				{
					iVar0 = 1972630951;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -164980960:
			if (!bParam1)
			{
				iVar0 = -138141811;
				if (bParam2)
				{
					iVar0 = 2000759837;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 1894156335:
			if (!bParam1)
			{
				iVar0 = 1801769345;
				if (bParam2)
				{
					iVar0 = 374699583;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 871191033:
			if (!bParam1)
			{
				iVar0 = 1290994194;
				if (bParam2)
				{
					iVar0 = -59421711;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -1273369295:
			if (!bParam1)
			{
				iVar0 = -27851152;
				if (bParam2)
				{
					iVar0 = -1340223099;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 82200319:
			if (!bParam1)
			{
				iVar0 = -1216929452;
				if (bParam2)
				{
					iVar0 = -1140851507;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case -873135685:
			if (!bParam1)
			{
				iVar0 = -1418730365;
				if (bParam2)
				{
					iVar0 = -1570312122;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 24248412:
			if (!bParam1)
			{
				iVar0 = 1014486005;
				if (bParam2)
				{
					iVar0 = 416212934;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
		case 10252101:
			if (!bParam1)
			{
				iVar0 = -1246302402;
				if (bParam2)
				{
					iVar0 = -1791047090;
				}
				_task_item_interaction(player_ped_id(), iParam0, iVar0, 1, iParam3, iParam4);
				return true;
			}
			break;
	}
	return false;
}

int func_1701(int iParam0, int iParam1)
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

bool func_1702()
{
	return Global_1952637->f_1675.f_1[1]->f_1 == -282754472;
}

bool func_1703(var uParam0)
{
	if (!does_entity_exist(*uParam0) || is_entity_dead(*uParam0))
	{
		return false;
	}
	if (func_2102(*uParam0, -1725579161, 0))
	{
		return true;
	}
	return false;
}

void func_1704(int iParam0)
{
	iVar0 = 406178289;
	switch (func_2103())
	{
		case 0:
			iVar0 = 406178289;
			break;
		case 1:
			iVar0 = 187883304;
			break;
		case 3:
			iVar0 = 38531903;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (func_1040(iParam0, 1573112293))
		{
			func_2104(func_1196(iParam0), 1, 1);
		}
		func_2105(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_2106(iParam0);
		func_2107(iParam0, 1, 0, 562618531);
	}
}

void func_1705(int iParam0)
{
	iVar0 = 16939881;
	switch (func_2103())
	{
		case 0:
			iVar0 = 16939881;
			break;
		case 1:
			iVar0 = -1165614444;
			break;
		case 3:
			iVar0 = 968591133;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_2105(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_2106(iParam0);
		func_2107(iParam0, 1, 0, 562618531);
	}
}

void func_1706(int iParam0, bool bParam1)
{
	iVar0 = -45077177;
	switch (func_2103())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -2137817968;
			}
			else
			{
				iVar0 = -45077177;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = -1947358597;
			}
			else
			{
				iVar0 = 36807409;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = -750686877;
			}
			else
			{
				iVar0 = 1293288723;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_2105(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_2106(iParam0);
		func_2107(iParam0, 1, 0, 562618531);
	}
}

void func_1707(int iParam0, bool bParam1)
{
	iVar0 = 1700817728;
	switch (func_2103())
	{
		case 0:
			if (bParam1)
			{
				iVar0 = -447623645;
			}
			else
			{
				iVar0 = 1700817728;
			}
			break;
		case 1:
			if (bParam1)
			{
				iVar0 = 1880532390;
			}
			else
			{
				iVar0 = -480771797;
			}
			break;
		case 3:
			if (bParam1)
			{
				iVar0 = 468890170;
			}
			else
			{
				iVar0 = 764367205;
			}
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_2105(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_2106(iParam0);
		func_2107(iParam0, 1, 0, 562618531);
	}
}

void func_1708(int iParam0)
{
	iVar0 = -362580870;
	switch (func_2103())
	{
		case 0:
			iVar0 = -362580870;
			break;
		case 1:
			iVar0 = -1013825131;
			break;
		case 3:
			iVar0 = -1433021121;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_2105(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_2106(iParam0);
		func_2107(iParam0, 1, 0, 562618531);
	}
}

void func_1709(int iParam0)
{
	iVar0 = 2105609037;
	switch (func_2103())
	{
		case 0:
			iVar0 = 2105609037;
			break;
		case 3:
			iVar0 = -457187977;
			break;
		case 1:
			iVar0 = -1595716047;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_2105(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_2106(iParam0);
		func_2107(iParam0, 1, 0, 562618531);
	}
}

void func_1710(int iParam0)
{
	iVar0 = 1964324114;
	switch (func_2103())
	{
		case 0:
			iVar0 = 1964324114;
			break;
		case 3:
			iVar0 = -654111932;
			break;
		case 1:
			iVar0 = 1826089606;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_2105(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_2106(iParam0);
		func_2107(iParam0, 1, 0, 562618531);
	}
}

void func_1711(int iParam0)
{
	iVar0 = -1530144981;
	switch (func_2103())
	{
		case 0:
			iVar0 = -1530144981;
			break;
		case 3:
			iVar0 = -389189374;
			break;
		case 1:
			iVar0 = -312546963;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_2105(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_2106(iParam0);
		func_2107(iParam0, 1, 0, 562618531);
	}
}

void func_1712(int iParam0)
{
	iVar0 = -1074475556;
	switch (func_2103())
	{
		case 0:
			iVar0 = -1074475556;
			break;
		case 3:
			iVar0 = 392506445;
			break;
		case 1:
			iVar0 = -1846586910;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_2105(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_2106(iParam0);
		func_2107(iParam0, 1, 0, 562618531);
	}
}

void func_1713(int iParam0)
{
	iVar0 = 1076410848;
	switch (func_2103())
	{
		case 0:
			iVar0 = 1076410848;
			break;
		case 3:
			iVar0 = 1820106865;
			break;
		case 1:
			iVar0 = 1890537641;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_2105(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_2106(iParam0);
		func_2107(iParam0, 1, 0, 562618531);
	}
}

void func_1714(int iParam0)
{
	iVar0 = 1516413548;
	switch (func_2103())
	{
		case 0:
			iVar0 = 1516413548;
			break;
		case 1:
			iVar0 = 1648161053;
			break;
		case 3:
			iVar0 = -1170654725;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_2105(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_2106(iParam0);
		func_2107(iParam0, 1, 0, 562618531);
	}
}

void func_1715(int iParam0)
{
	iVar0 = -1454586679;
	switch (func_2103())
	{
		case 0:
			iVar0 = -1454586679;
			break;
		case 1:
			iVar0 = 1849268701;
			break;
		case 3:
			iVar0 = 881673189;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		func_2105(Global_34, iParam0, iVar0, 1, 0);
	}
	else
	{
		func_2106(iParam0);
		func_2107(iParam0, 1, 0, 562618531);
	}
}

void func_1716(int iParam0, bool bParam1)
{
	iVar0 = 1934039819;
	switch (func_2103())
	{
		case 0:
			iVar0 = 1934039819;
			break;
		case 1:
			iVar0 = 1656393367;
			break;
		case 3:
			iVar0 = 1125253485;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_2105(Global_34, iParam0, iVar0, 1, 0) && bParam1)
		{
			func_2106(iParam0);
			func_2107(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_2106(iParam0);
		func_2107(iParam0, 1, 0, 562618531);
	}
}

void func_1717(int iParam0, bool bParam1)
{
	iVar0 = -1054661625;
	switch (func_2103())
	{
		case 0:
			iVar0 = -1054661625;
			break;
		case 1:
			iVar0 = 1750832898;
			break;
		case 3:
			iVar0 = -1750311991;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	if (iVar0 != 0)
	{
		if (!func_2105(Global_34, iParam0, iVar0, 1, bParam1) && bParam1)
		{
			func_2106(iParam0);
			func_2107(iParam0, 1, 0, 562618531);
		}
	}
	else
	{
		func_2106(iParam0);
		func_2107(iParam0, 1, 0, 562618531);
	}
}

bool func_1718(int iParam0, int iParam1)
{
	return (iParam0 && iParam1) != 0;
}

bool func_1719(char* sParam0)
{
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1939493->f_161)
	{
		if (are_strings_equal(&((*Global_1939493)[iVar0]->f_10), sParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_1720(int iParam0)
{
	if (func_1718(iParam0, 1))
	{
		func_2108(1);
	}
}

int func_1721(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1;
		case 1:
			return 2;
		case 2:
			return 0;
		case 3:
			return 3;
		default:
			break;
	}
	return -1;
	return -1;
}

void func_1722(struct<4> Param0)
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
		case 23:
			if (Global_1952637->f_918 >= 25)
			{
				return;
			}
			if (func_2109(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637->f_918)
				{
					iVar1 = ((Global_1952637->f_923 + iVar0) % 25);
					if ((&Global_1952637->f_736[iVar1] == Param0 && Global_1952637->f_736[iVar1]->f_1 == Param0.f_1) && Global_1952637->f_736[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_2110(Param0);
			*Global_1952637->f_736[Global_1952637->f_924] = { Param0 };
			Global_1952637->f_918++;
			Global_1952637->f_924 = (Global_1952637->f_924 + 1 % 25);
			func_1094(8);
			break;
		case 24:
		case 25:
			if (Global_1952637->f_919 >= 25)
			{
				return;
			}
			if (func_2109(Param0))
			{
				return;
			}
			func_2110(Param0);
			*Global_1952637->f_635[Global_1952637->f_919] = { Param0 };
			Global_1952637->f_919++;
			func_1094(8);
			break;
		case 26:
		case 27:
		case 28:
		case 29:
		case 30:
		case 31:
		case 32:
		case 33:
		case 34:
		case 36:
		case 37:
		case 38:
			if (Global_1952637->f_920 >= 20)
			{
				return;
			}
			if (func_2109(Param0))
			{
				iVar0 = 0;
				while (iVar0 < Global_1952637->f_920)
				{
					iVar1 = ((Global_1952637->f_921 + iVar0) % 20);
					if ((&Global_1952637->f_837[iVar1] == Param0 && Global_1952637->f_837[iVar1]->f_1 == Param0.f_1) && Global_1952637->f_837[iVar1]->f_2 == Param0.f_2)
					{
						return;
					}
					iVar0++;
				}
			}
			func_2110(Param0);
			*Global_1952637->f_837[Global_1952637->f_922] = { Param0 };
			Global_1952637->f_920++;
			Global_1952637->f_922 = (Global_1952637->f_922 + 1 % 20);
			func_1094(8);
			break;
			break;
	}
}

bool func_1723()
{
	return Global_1952637->f_3484;
}

bool func_1724(int iParam0)
{
	if (func_2111())
	{
		return false;
	}
	if (!func_586(iParam0, 0))
	{
		return false;
	}
	if (!func_1275(iParam0, 1))
	{
		_0xbfff81e12a745a5f();
		return false;
	}
	return true;
}

bool func_1725(int iParam0)
{
	return func_2112(iParam0);
}

int func_1726(int iParam0, int iParam1)
{
	bVar3 = func_2113(iParam0);
	if (func_1052(iParam0) == -525676072 || func_1040(iParam0, -1303648999))
	{
		bVar1 = true;
	}
	if (bVar3)
	{
		if (func_2114(&iVar2))
		{
			if (bVar1)
			{
				iVar0 = func_2115();
			}
			else
			{
				iVar0 = func_2116();
			}
		}
		else if (bVar1)
		{
			iVar0 = func_2117();
		}
		else
		{
			iVar0 = func_2118();
		}
	}
	else if (func_2119(&iVar2))
	{
		if (func_1040(iVar2, -1303648999) || func_1052(iVar2) == -525676072)
		{
			iVar0 = func_2115();
		}
		else
		{
			iVar0 = func_2116();
		}
	}
	else if (bVar1)
	{
		iVar0 = func_2117();
	}
	else
	{
		iVar0 = func_2118();
	}
	if (iVar0 != 0)
	{
		Global_1952637->f_3483 = get_game_timer();
		_task_item_interaction(Global_34, iParam0, iVar0, 1, iParam1, -1082130432);
		return 1;
	}
	return 0;
}

bool func_1727(int iParam0)
{
	return (Global_1952637 && iParam0) != 0;
}

void func_1728()
{
	Global_1952637->f_3467 = 0;
	Global_1952637->f_3467.f_1 = 0;
	Global_1952637->f_3467.f_8 = 0;
	Global_1952637->f_3467.f_2 = 0;
	Global_1952637->f_3467.f_3[0] = 0;
	Global_1952637->f_3467.f_3[1] = 0;
	Global_1952637->f_3467.f_3[2] = 0;
	Global_1952637->f_3467.f_3[3] = 0;
	Global_1952637->f_3467.f_9 = 0;
	Global_1952637->f_3467.f_10 = 0;
	Global_1952637->f_3467.f_11 = 0;
	if (Global_1952637->f_3467.f_12)
	{
		_0x13e7320c762f0477(Global_1952637->f_3467.f_13);
	}
	Global_1952637->f_3467.f_12 = 0;
	func_2120(32768);
	func_2121(1108822547, 8, 6);
}

bool func_1729(int iParam0, bool bParam1)
{
	return func_2122(iParam0, 0) < func_2123(iParam0, bParam1);
}

bool func_1730(int iParam0)
{
	return func_2124(iParam0, &uVar0);
}

void func_1731(int iParam0, bool bParam1, bool bParam2, int iParam3, bool bParam4, bool bParam5)
{
	iVar0 = func_1052(iParam0);
	bVar1 = false;
	switch (iVar0)
	{
		case -2061583405:
			if (func_1040(iParam0, 1584357097))
			{
				return;
			}
			bVar1 = func_2125(iParam0, &(Global_1952637->f_3334.f_28), Global_1952637->f_3334.f_33.f_1, bParam1, bParam5);
			break;
		case 81053684:
			bVar1 = func_2125(iParam0, &(Global_1952637->f_3334.f_30), 1, bParam1, bParam5);
			break;
		case -999503751:
			bVar1 = func_2125(iParam0, &(Global_1952637->f_3334.f_27), Global_1952637->f_3334.f_33, bParam1, bParam5);
			break;
		case -525676072:
			bVar1 = func_2125(iParam0, &(Global_1952637->f_3334.f_29), Global_1952637->f_3334.f_33.f_2, bParam1, bParam5);
			break;
		case -1719060085:
			bVar1 = func_2125(iParam0, &(Global_1952637->f_3334.f_31), 1, bParam1, bParam5);
			break;
		case 119907797:
			bVar1 = func_2125(iParam0, &(Global_1952637->f_3334.f_32), 1, bParam1, bParam5);
			break;
		case 1388798186:
			bVar1 = func_2125(iParam0, &(Global_1952637->f_3334.f_33.f_7), 1, bParam1, bParam5);
			break;
		default:
			if (func_1040(iParam0, 160827531))
			{
				bVar1 = func_2125(iParam0, &(Global_1952637->f_3334.f_30), 1, bParam1, bParam5);
			}
			break;
	}
	if (!bVar1)
	{
		return;
	}
	func_2126();
	if (func_2127(iVar0) || (iVar0 != -999503751 && func_1040(iParam0, -166674229)))
	{
		_0x766315a564594401(func_540(bParam5), iParam0, 0);
	}
	func_1059(iParam0, iParam3, bParam5);
	if (bParam4)
	{
		func_2128(1, iParam0);
	}
	if (bParam2)
	{
		func_423(0, 0);
	}
}

int func_1732(int iParam0)
{
	if (iParam0 == 0)
	{
		iParam0 = func_2129();
	}
	if (iParam0 == 1160113249)
	{
		return -763730846;
	}
	return -1535516064;
}

void func_1733(int iParam0, int iParam1, bool bParam2, int iParam3, bool bParam4)
{
	if (func_2130(iParam0, iParam1))
	{
		func_2131(iParam0, iParam1, 1, bParam2, iParam3, bParam4);
		return;
	}
}

int func_1734(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 39)
	{
		if (Global_1952637->f_83[iVar0]->f_9 == iParam0)
		{
			return func_2132(iVar0, 1);
		}
		iVar0++;
	}
	return -358215195;
}

int func_1735(int iParam0, int iParam1)
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
		case 735520874:
			return 5;
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

bool func_1736(int iParam0, int iParam1, int iParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6)
{
	func_2133();
	if (iParam2 == 39)
	{
		Var0 = { func_1686(iParam0, 1, 0) };
		iParam2 = func_1735(func_1734(Var0.f_4), 1);
	}
	if (iParam2 < 0 || iParam2 >= 39)
	{
		return false;
	}
	if (func_1727(32768) && iParam2 == 10)
	{
		func_2134(1108822547);
	}
	iVar5 = 0;
	if (bParam4)
	{
		iVar5 = 3;
	}
	if (func_1738(iParam0, 1))
	{
		func_2135(&(Global_1952637->f_1556), &iParam0, iParam2, bParam5);
	}
	if (bParam6)
	{
		func_2136(iParam2);
	}
	func_2137(iParam2, iVar5);
	func_2138(Global_1952637->f_1556.f_1[iParam2], 4, 6);
	func_2138(Global_1952637->f_1675.f_1[iParam2], 4, 6);
	func_2139(&(Global_1952637->f_1556), iParam0, iParam2, 1, iVar5);
	if (iParam1 == 0)
	{
		iParam1 = Global_1952637->f_1556.f_1[iParam2]->f_1;
	}
	Global_1952637->f_1556.f_1[iParam2] = iParam0;
	Global_1952637->f_1556.f_1[iParam2]->f_1 = func_2140(iParam0, iParam2, iParam1);
	if (bParam3)
	{
		iVar6 = 0;
		while (iVar6 < Global_1952637->f_2897)
		{
			if (&Global_1952637->f_2897.f_2[iVar6] >= 0 && &Global_1952637->f_2897.f_2[iVar6] < 39)
			{
				Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar6]] = 0;
				Global_1952637->f_2764[&Global_1952637->f_2897.f_2[iVar6]]->f_1 = 0;
				func_2121(func_2132(&(Global_1952637->f_2897.f_2[iVar6]), 1), 1, 6);
			}
			iVar6++;
		}
	}
	return true;
}

void func_1737(bool bParam0, bool bParam1, bool bParam2, bool bParam3)
{
	func_2141(&(Global_1952637->f_2897), bParam0, bParam1, bParam2, bParam3);
}

bool func_1738(int iParam0, bool bParam1)
{
	if (!func_586(iParam0, 0))
	{
	}
	if (!bParam1 && (iParam0 == -1713496139 || iParam0 == -598283164))
	{
		return false;
	}
	if (func_1040(iParam0, 265372629))
	{
		return true;
	}
	return false;
}

bool func_1739(int iParam0, int iParam1, bool bParam2)
{
	Var4 = { func_1686(iParam0, bParam2, 0) };
	if (func_1738(iParam0, 0))
	{
		iVar9 = func_510(Var4, Var4.f_4, bParam2, -1);
		if (iVar9 != 0)
		{
			Var4 = { func_1686(iVar9, bParam2, 0) };
			Var0 = { func_583(iVar9, Var4, Var4.f_4, bParam2) };
			return func_2142(Var0, 0, bParam2);
		}
		return true;
	}
	Var0 = { func_583(iParam0, Var4, Var4.f_4, bParam2) };
	return func_2142(Var0, iParam1, bParam2);
}

int func_1740(int iParam0)
{
	iVar0 = 0;
	iVar1 = func_1735(iParam0, 1);
	switch (iParam0)
	{
		case 1108822547:
			if (&Global_1952637->f_1675.f_1[iVar1] == &Global_1952637->f_83[iVar1] || &Global_1952637->f_1556.f_1[iVar1] == &Global_1952637->f_83[iVar1])
			{
				iVar0 = 48;
			}
			break;
	}
	return iVar0;
}

void func_1741(int iParam0, int iParam1)
{
	*iParam0 = (*iParam0 || iParam1);
}

int func_1742(int iParam0)
{
	if (iParam0 == 7)
	{
		return Global_39.f_281;
	}
	return iParam0;
}

bool func_1743(int iParam0)
{
	iParam0 = func_1742(iParam0);
	if (iParam0 == -1)
	{
		return false;
	}
	if (iParam0 >= 7)
	{
		return false;
	}
	iVar0 = func_1064(iParam0);
	if (!does_entity_exist(iVar0))
	{
		return false;
	}
	if (is_entity_dead(iVar0) || is_ped_injured(iVar0))
	{
		return false;
	}
	if (func_2143(iVar0))
	{
		return true;
	}
	return false;
}

int func_1744()
{
	return Global_39.f_281.f_3222;
}

bool func_1745()
{
	return Global_1915715->f_22504.f_1;
}

bool func_1746(int iParam0)
{
	return (Global_1051439->f_3628 && iParam0) != 0;
}

void func_1747(int iParam0)
{
	Global_1051439->f_3628 = (Global_1051439->f_3628 - (Global_1051439->f_3628 && iParam0));
}

void func_1748(int iParam0)
{
	Global_1051439->f_3629 = iParam0;
}

void func_1749()
{
	_0x2804658eb7d8a50b(4, 666989068);
}

bool func_1750()
{
	return func_1746(4);
}

int func_1751(bool bParam0)
{
	if (!func_2144())
	{
		return 3;
	}
	if ((_get_number_of_references_of_script_with_name_hash(29649618) > 0 && Global_1051439->f_3630 == 0) && !bParam0)
	{
		return 45;
	}
	if (Global_1915715->f_20638)
	{
		return 10;
	}
	if (Global_1051439->f_3718 != 0)
	{
		return 0;
	}
	iVar0 = get_player_index();
	if (is_player_dead(iVar0))
	{
		return 12;
	}
	if ((func_2145(1106247680, 0) || _is_ped_hogtied(Global_34)) || _is_ped_hogtying(Global_34))
	{
		return 13;
	}
	if (_0x1d46b417f926d34d(Global_34) || is_ped_in_any_train(Global_34))
	{
		iVar1 = get_vehicle_ped_is_using(Global_34);
		if (does_entity_exist(iVar1))
		{
			iVar2 = get_entity_model(iVar1);
			switch (iVar2)
			{
				case -1988548788:
				case 518773733:
				case 742064790:
				case 749266870:
					return 14;
			}
		}
		return 11;
	}
	if (_0x038b1f1674f0e242(Global_34) && !Global_1915715->f_22504.f_1)
	{
		return 16;
	}
	if (_is_ped_carrying(Global_34))
	{
		return 17;
	}
	if (_0xd04241bbf6d03a5e(player_ped_id()) != 0)
	{
		return 18;
	}
	if (is_ped_using_any_scenario(Global_34))
	{
		iVar3 = _get_scenario_point_type_ped_is_using(Global_34);
		if ((iVar3 != -1241981548 && iVar3 != -1177373461) && iVar3 != -447259824)
		{
			return 19;
		}
	}
	if (func_1125(255))
	{
		return 3;
	}
	if (is_minigame_in_progress())
	{
		return 44;
	}
	if ((Global_1108365->f_935.f_28 != -1 && Global_1108365->f_935.f_28 != 6) && Global_1108365->f_935.f_28 != 8)
	{
		if (func_2146(Global_1108365->f_935.f_28))
		{
			return 36;
		}
		else
		{
			return 37;
		}
	}
	if (_0x2942457417a5fd24(Global_34) >= 1f)
	{
		return 22;
	}
	if (Global_1572887->f_106.f_75 >= 11 && Global_1572887->f_106.f_75 < 15)
	{
		return 42;
	}
	if (((is_ped_falling(Global_34) || is_ped_climbing(Global_34)) || _is_ped_sliding(Global_34)) || is_ped_swimming(Global_34))
	{
		return 15;
	}
	if (_0x7fc84e85d98f063d(Global_34))
	{
		return 21;
	}
	if (func_419())
	{
		return 43;
	}
	return -1;
}

void func_1752(int iParam0)
{
	if (!func_1750())
	{
		func_2147(1);
	}
	Global_1051439->f_3630 = iParam0;
	iVar0 = func_1751(1);
	if (iVar0 != -1)
	{
		func_1695(iVar0);
		func_2148(0);
	}
	else
	{
		func_2148(1);
	}
}

void func_1753(int iParam0, int iParam1, int iParam2)
{
	iVar0 = iParam0;
	*iParam1 = (iVar0 / 31);
	*iParam2 = (iVar0 % 31);
}

bool func_1754(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam1 < 0 || iParam1 > 32)
	{
		return false;
	}
	if (func_2149(iParam1, iParam2))
	{
		if (!bParam3)
		{
			return false;
		}
	}
	if (!func_2150(iParam0))
	{
		return false;
	}
	if (func_2151(iParam0))
	{
		return false;
	}
	if ((Global_1900736->f_67 && !func_2152(iParam0, 1)) || func_2153(32768))
	{
		if (!func_2152(iParam0, 262144) || !Global_1904651->f_8686)
		{
			return false;
		}
	}
	if (!func_2154())
	{
		return false;
	}
	return true;
}

void func_1755(int iParam0, int iParam1)
{
	uVar0 = Global_1904651[iParam0];
	set_bit(&uVar0, iParam1);
	(*Global_1904651)[iParam0] = uVar0;
}

bool func_1756(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	return is_ped_on_mount(iParam0);
}

void func_1757()
{
	Global_1913694->f_1583 = get_game_timer();
	Global_1913694->f_1581 = 1;
}

void func_1758(int iParam0, int iParam1)
{
	iVar0 = iParam1;
	(*Global_1138048)[iVar0]->f_7 = ((*Global_1138048)[iVar0]->f_7 || iParam0);
}

int func_1759(int iParam0, int iParam1, bool bParam2)
{
	if (!func_2096(iParam0, 2))
	{
		return 0;
	}
	if ((bParam2 && func_619() == 0) && !_unlock_is_visible(iParam0))
	{
		return 1;
	}
	if (!func_2155(iParam0, iParam1, &uVar0, &iVar11) || iVar11 < 1)
	{
		return 0;
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
			return 1;
		}
		iVar12++;
	}
	return 0;
}

bool func_1760(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_586(iParam0, 0))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!_item_database_fillout_acquire_cost(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
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

int func_1761(var uParam0)
{
	if (uParam0->f_9 == -1)
	{
		return 0;
	}
	return uParam0->f_9;
}

void func_1762(int iParam0)
{
	if (!func_1727(64))
	{
		return;
	}
	func_2120(64);
	if (func_1727(32))
	{
		func_2156(&(Global_1952637->f_2566));
		Var0.f_1 = Global_1139381->f_4779;
		Var0 = Global_1139381->f_4779.f_4;
		func_2157(&Var0, 0);
	}
	else
	{
		func_2158(&(Global_1952637->f_2566));
		func_2159(&(Global_1952637->f_2566));
		func_2160(iParam0, 1, 1, 0);
		func_1055(27, 0, 0, 0, 0);
	}
	func_626("NG_OUTFIT_UNEQUIPPED", 10000, 0, 0, 0, 1);
}

int func_1763()
{
	if (Global_1194053->f_492 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 <= (Global_1194053->f_503[Global_1194053->f_492]->f_26 - 1))
	{
		if (network_are_handles_the_same(Global_1194053->f_503[Global_1194053->f_492]->f_27[iVar0], &(Global_1296859->f_1)))
		{
			return iVar0;
		}
		iVar0++;
	}
	return 0;
}

int func_1764(int iParam0, bool bParam1, int iParam2)
{
	if (!func_2162(iParam0, &uVar1, &iVar0, func_2161(0)))
	{
		return 0;
	}
	if (iVar0 <= 0)
	{
		return 0;
	}
	if (iParam2 <= -1)
	{
		iParam2 = func_1856(iVar0);
	}
	else if (iParam2 >= iVar0)
	{
		iParam2 = func_1856(iVar0);
	}
	if (bParam1)
	{
		func_2163(&(uVar1[iParam2]));
	}
	else
	{
		func_2164(&(uVar1[iParam2]));
	}
	return 1;
}

void func_1765(var uParam0, int iParam1)
{
	*uParam0 = 22;
	uParam0->f_1 = get_player_index();
	uParam0->f_2 = get_network_time_accurate();
	_0x31010318ba9897ac(&uVar0, iParam1);
	trigger_script_event(1, uParam0, 11, 7, &uVar0);
}

bool func_1766()
{
	if (func_2165())
	{
		return false;
	}
	if (&Global_1048576)
	{
		return true;
	}
	if (Global_1572887->f_4)
	{
		return true;
	}
	if (func_2166())
	{
		return true;
	}
	if (func_1112(func_832(0)))
	{
		Global_1139381->f_5560.f_21 = func_833(func_832(0));
	}
	else
	{
		Global_1139381->f_5560.f_21 = -1;
		return false;
	}
	if (func_2167(Global_1139381->f_5560.f_21))
	{
		return true;
	}
	return false;
}

void func_1767(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_1768()
{
	return Global_1051252->f_12;
}

char* func_1769()
{
	return "unnamed";
}

int func_1770(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -1:
			iVar0 = 16;
			break;
		case 0:
			iVar0 = 32;
			break;
		case 1:
			iVar0 = 64;
			break;
		case 2:
			iVar0 = 128;
			break;
		case 3:
			iVar0 = 256;
			break;
		case 4:
			iVar0 = 512;
			break;
		case 5:
			iVar0 = 1024;
			break;
		case 6:
			iVar0 = 2048;
			break;
		case 8:
			iVar0 = 4096;
			break;
	}
	return iVar0;
}

bool func_1771(int iParam0)
{
	if (func_1914(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 1)
		{
			func_2168(iParam0);
		}
		return true;
	}
	return _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 1;
}

bool func_1772(struct<2> Param0)
{
	return func_2169(Param0, 1, 4);
}

int func_1773(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1296859->f_10;
	}
	return Global_263042[iParam0];
}

bool func_1774(int iParam0, int iParam1)
{
	return ((*Global_263042)[iParam0]->f_68 && iParam1) != 0;
}

int func_1775(int iParam0)
{
	switch (iParam0)
	{
		case 1:
			return -1519264107;
		case 2:
			return -1349160228;
		case 3:
			return -732709691;
		case 4:
			return 1691387227;
		case 5:
			return -969278268;
		case 6:
			return 650135692;
		case 7:
			return 317202356;
		case 8:
			return 2111135919;
		default:
			break;
	}
	return 0;
}

int func_1776(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 1:
			switch (iParam0)
			{
				case 0:
					return -562854755;
				case 1:
					return -193397860;
				case 2:
					return -1639158743;
				case 3:
					return -545263819;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return -331472846;
				case 1:
					return 1266428317;
				case 2:
					return -1342435444;
				case 3:
					return -243002563;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return 429079746;
				case 1:
					return 1587973176;
				case 2:
					return 1338229360;
				case 3:
					return -271501111;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return 771711526;
				case 1:
					return -466995375;
				case 2:
					return -398924971;
				case 3:
					return -1232006170;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return -2052512212;
				case 1:
					return -1144971953;
				case 2:
					return 86781479;
				case 3:
					return 416111513;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -446960320;
				case 1:
					return -2015262927;
				case 2:
					return -707938197;
				case 3:
					return 2136054096;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1149863246;
				case 1:
					return 407185110;
				case 2:
					return -769170006;
				case 3:
					return -411703805;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1554709632;
				case 1:
					return 410660064;
				case 2:
					return -254646314;
				case 3:
					return 1524612084;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_1777(int iParam0)
{
	switch (iParam0)
	{
		case 2:
			return Global_1071686->f_636.f_601;
		case 3:
			return Global_1071686->f_636.f_2103;
		case 4:
			return Global_1071686->f_636.f_12605;
		case 5:
			return Global_1071686->f_636.f_12907;
		case 6:
			return Global_1071686->f_636.f_15909;
		case 7:
			return Global_1071686->f_636.f_16511;
		case 8:
			return Global_1071686->f_636.f_18913;
		default:
			break;
	}
	return -1;
}

int func_1778(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return 0;
	}
	return Global_1195550[iParam0];
}

bool func_1779(int iParam0, int iParam1, int iParam2)
{
	return func_576((*Global_1196567)[iParam2][iParam0], iParam1);
}

bool func_1780(int iParam0)
{
	if (!(iParam0 > -1 && iParam0 <= 80))
	{
		return false;
	}
	iVar0 = func_2170(2, iParam0);
	if (iVar0 == 0)
	{
		return false;
	}
	return _0xfbe782b3165ac8ec(iVar0);
}

int func_1781()
{
	return (get_game_timer() - func_2171());
}

int func_1782()
{
	return Global_1896738->f_3948.f_1;
}

int func_1783(var uParam0, int iParam1, var uParam2)
{
	iVar0 = iParam1;
	if (iVar0 < 0 || iVar0 > (4 - 1))
	{
		*uParam2 = 0;
		return 0;
	}
	if ((*uParam0)[iVar0]->f_1 < 0)
	{
		*uParam2 = 0;
		return 0;
	}
	*uParam2 = &(*uParam0)[iVar0]->f_2[(*uParam0)[iVar0]->f_1];
	return 1;
}

int func_1784(int iParam0)
{
	if (!func_586(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_2172(iParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	return iParam0;
}

bool func_1785(int iParam0)
{
	if (!_unlock_is_unlocked(956799153))
	{
		return false;
	}
	switch (iParam0)
	{
		case 6:
			return _unlock_is_unlocked(-1008270856);
		case 1:
		case 2:
		case 3:
		case 4:
		case 5:
			return (_unlock_is_unlocked(1612825071) && _unlock_is_unlocked(759426019));
		case 7:
		case 8:
		case 9:
		case 10:
			return true;
		default:
			break;
	}
	return false;
	return false;
}

int func_1786(bool bParam0, bool bParam1, bool bParam2)
{
	if (Global_1940258->f_12)
	{
		if ((bParam2 || Global_1940258->f_13 > 0) || Global_1940258->f_11 > 0)
		{
			return 1;
		}
	}
	else if (bParam1 && !Global_1940258->f_9 == 1370593166)
	{
		return 0;
	}
	if (Global_1940258->f_14 > 0 || (bParam2 && Global_1940258->f_14 > -1))
	{
		return 1;
	}
	if (bParam0)
	{
		if (Global_1940258->f_7)
		{
			if (bParam2 || Global_1940258->f_15 > 0)
			{
				return 1;
			}
		}
	}
	return 0;
}

int func_1787(int iParam0)
{
	if (!is_ped_injured(iParam0))
	{
		return get_mount(iParam0);
	}
	return 0;
}

int func_1788(vector3 vParam0)
{
	return func_2173(_get_map_zone_at_coords(vParam0, 10));
}

int func_1789(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 == 255)
	{
		return 1;
	}
	if (iParam0 == -1)
	{
		return 2;
	}
	if (func_1120(iParam0) == -785841056)
	{
		if (func_2174(iParam1, 1))
		{
			return 8;
		}
		iVar0 = _0x901e0dc25080c8b9(iParam1);
		if (!_0xd6f6acf4392187fb(iVar0))
		{
			return 6;
		}
		if (!func_396(iVar0))
		{
			return 7;
		}
		iVar1 = 2;
		if (_0x149a2751ab66ac02(iVar0) < iVar1)
		{
			return 9;
		}
		if (func_1134(iParam1, 1, 0, 1))
		{
			return 16;
		}
	}
	*iParam2 = func_2175(&(Global_1196898->f_1[iParam0]));
	if (*iParam2 == -1)
	{
		return 11;
	}
	if (Global_1196339->f_1[*iParam2]->f_1 != -1)
	{
		return 12;
	}
	iVar2 = 0;
	iVar3 = 24;
	if (func_1875(&Var4, iParam0))
	{
		func_2176(Var4, -1068020191, &iVar2, 0);
		func_2176(Var4, 796959411, &iVar3, 0);
	}
	iVar9 = func_2178(func_2177());
	if (iVar2 < iVar3)
	{
		if (iVar9 < iVar2 || iVar9 >= iVar3)
		{
			return 10;
		}
	}
	else if (iVar9 >= iVar3 && iVar9 < iVar2)
	{
		return 10;
	}
	return 0;
}

int func_1790(int iParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return 3;
	}
	if (func_1120(iParam0) == -785841056)
	{
		vVar0 = { func_2179(iParam0, iParam1) };
		if (!func_713(vVar0) && (_0x769bb7626b8cdb06(vVar0, 100f, 0, 0, 0) || _0xaa9ee2aafc717623(vVar0, 0, 0, 0)))
		{
			return 15;
		}
	}
	return 0;
}

int func_1791(int iParam0)
{
	if (iParam0 == 0)
	{
		return 4;
	}
	return 0;
}

int func_1792(struct<2> Param0)
{
	if (!func_1112(Param0))
	{
		return 5;
	}
	else if (func_2180(Param0) != -1)
	{
		return 13;
	}
	else if (!func_2181(Param0))
	{
		return 18;
	}
	else if (!func_2182(Param0))
	{
		return 19;
	}
	else if (func_627())
	{
		return 14;
	}
	return 0;
}

int func_1793()
{
	if (network_is_game_in_progress())
	{
		iVar0 = get_network_time_accurate();
		return iVar0;
	}
	return get_game_timer();
}

void func_1794(int iParam0, var uParam1, struct<34> Param2, var uParam36)
{
	func_2183(uParam1, Param2);
	_databinding_write_data_bool(uParam1->f_46, false);
	_databinding_write_data_bool(uParam1->f_47, false);
	_databinding_write_data_bool(uParam1->f_48, false);
	_databinding_write_data_bool(uParam1->f_49, false);
	_databinding_write_data_bool(uParam1->f_50, func_1646(&uParam36, 1));
	_databinding_write_data_string(uParam1->f_51, func_980(func_979(iParam0)));
}

bool func_1795(int iParam0, int iParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(iParam0))
	{
		return false;
	}
	iVar0 = func_540(bParam2);
	if (!_0x025a1b1fb03fbf61(iVar0, iParam0, iParam1, 29, 1))
	{
		return false;
	}
	return true;
}

void func_1796(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
}

void func_1797(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = 0;
	uParam0->f_2 = 0;
	uParam0->f_3 = 0;
	uParam0->f_4 = 0;
	uParam0->f_5 = 0;
	uParam0->f_5.f_1 = 0;
	uParam0->f_5.f_2 = 0;
	uParam0->f_5.f_3 = 0;
	uParam0->f_9 = -1591664384;
	uParam0->f_10 = 0;
	uParam0->f_11 = 0;
	uParam0->f_12 = 0;
	uParam0->f_14 = 0;
	uParam0->f_15 = 0;
	StringCopy(&(uParam0->f_16), "", 64);
	uParam0->f_24 = 0;
	uParam0->f_25 = 0;
	uParam0->f_26 = 0;
	uParam0->f_27 = 0;
	uParam0->f_28 = 0;
}

bool func_1798(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	if (!func_1954(uParam4, iParam0, iParam1, iParam2, bParam5))
	{
		return false;
	}
	if (!func_2184(uParam3, uParam4))
	{
		return false;
	}
	return true;
}

bool func_1799(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5)
{
	if (!func_1958(uParam4, iParam0, iParam1, iParam2, bParam5))
	{
		return false;
	}
	if (!func_2185(uParam3, uParam4))
	{
		return false;
	}
	return true;
}

bool func_1800(int iParam0, var uParam1)
{
	if (!_0xb881ca836cc4b6d4(iParam0))
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < 10)
	{
		if (!_0x4c543d5dfcd2dafd(Global_1291734->f_938[iVar0], iParam0))
		{
		}
		else
		{
			if (Global_1291734->f_938[iVar0]->f_23 < Global_1296859->f_21)
			{
				*uParam1 = { Global_1291734->f_938[iVar0]->f_7 };
				return true;
			}
			*uParam1 = { Global_1291734->f_938[iVar0]->f_15 };
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_1801()
{
	return "UNNAMED_HORSE";
}

char* func_1802(int iParam0)
{
	switch (iParam0)
	{
		case -974145463:
		case -842044823:
		case 92296905:
		case 1432602132:
			return "BREED_AMERICANPAINT";
		case -1943445834:
		case -783061276:
		case -745453539:
		case 1371398552:
		case 1583029039:
			return "BREED_AMERICANSTANDARDBRED";
		case -1322521536:
		case 728055838:
		case 1100711204:
			return "BREED_ANDALUSIAN";
		case -1782334639:
		case -1266863668:
		case -1181052732:
		case -635244104:
		case -179102320:
			return "BREED_APPALOOSA";
		case -2078767648:
		case -2055655009:
		case -1427377767:
		case -852553462:
		case -80004868:
			return "BREED_ARABIAN";
		case 153881023:
		case 836323303:
		case 1813208211:
			return "BREED_ARDENNES";
		case -1256798240:
		case 2118089359:
			return "BREED_BELGIAN";
		case -1537586382:
		case 697143532:
		case 1440692746:
			return "BREED_DUTCHWARMBLOOD";
		case -1376299681:
		case -1293672675:
		case 281128160:
		case 1854519167:
			return "BREED_HUNGARIANHALFBRED";
		case -1955947684:
		case 545109431:
		case 1361788230:
		case 1974379573:
			return "BREED_KENTUCKYSADDLE";
		case -1179079660:
		case 1275638003:
		case 2083573823:
			return "BREED_MISSOURIFOXTROTTER";
		case 648301150:
		case 892601357:
		case 1224695367:
		case 1235275977:
			return "BREED_MORGAN";
		case -1597490733:
		case -1428527735:
		case 805526368:
		case 2000205872:
			return "BREED_MUSTANG";
		case -1714171692:
		case -742726637:
		case 170010697:
			return "BREED_NOKOTA";
		case -1999094324:
		case -126555855:
		case -103101636:
			return "BREED_SHIRE";
		case 237935328:
		case 1724200240:
			return "BREED_SUFFOLKPUNCH";
		case -887362763:
		case -868094182:
		case -847714194:
		case 120848852:
		case 1342496140:
		case 1756765331:
			return "BREED_TENNESSEEWALKER";
		case -1900569233:
		case -1262715164:
		case -813071670:
		case 1688250187:
		case 2010625508:
			return "BREED_THOROUGHBRED";
		case -1882436593:
		case -225011104:
		case -136225010:
			return "BREED_TURKOMAN";
		case -1365665739:
		case -757978903:
		case 981469777:
		case 1064693514:
		case 1592694494:
		case 1909854428:
			return "BREED_BRETON";
		case -1722101672:
		case -189605757:
		case 3032834:
		case 381495209:
		case 863391233:
		case 1577022605:
			return "BREED_CRIOLLO";
		case -1898310680:
		case -1750687713:
		case -952011226:
		case -356470463:
		case -272192064:
		case 1935859332:
			return "BREED_GYPSYCOB";
		case -1698261864:
		case -1540355548:
		case -670301166:
		case -601560591:
		case -370362766:
		case 885568364:
			return "BREED_KLADRUBER";
		case -1824684932:
		case -769035812:
		case -302057902:
		case 821735821:
		case 1257620801:
		case 1589592948:
			return "BREED_NORFOLKROADSTER";
		case -1331210307:
			return "BREED_DONKEY";
		case -1784502482:
		case 122449722:
			return "BREED_MULE";
		case 294243421:
			return "BREED_DUTCHWARMBLOOD";
		case -997197050:
			return "BREED_THOROUGHBRED";
		case -235714362:
			return "BREED_TENNESSEEWALKER";
		case -1678164:
			return "BREED_NOKOTA";
		case -977833913:
			return "BREED_APPALOOSA";
		case 1589164943:
			return "BREED_THOROUGHBRED";
		case -1087523615:
			return "BREED_AMERICANPAINT";
		case -496814209:
			return "BREED_ARDENNES";
		case 2109055751:
			return "BREED_APPALOOSA";
		case -776673611:
			return "BREED_NOKOTA";
		case 1764402253:
			return "BREED_ARABIAN";
		case -1417310078:
			return "BREED_TURKOMAN";
		case 1096273915:
			return "BREED_AMERICANPAINT";
		case 772751081:
			return "BREED_HUNGARIANHALFBRED";
		case -1140435723:
			return "BREED_NOKOTA";
		case 2002524329:
			return "BREED_TENNESSEEWALKER";
		case 1151530184:
			return "BREED_MUSTANG";
		case -1266525037:
			return "BREED_MISSOURIFOXTROTTER";
		case -2018137175:
			return "BREED_TURKOMAN";
		case -574151692:
			return "BREED_MUSTANG";
		case 649786380:
			return "BREED_AMERICANSTANDARDBRED";
		case -1921328920:
			return "BREED_APPALOOSA";
		case -837607790:
			return "BREED_KENTUCKYSADDLE";
		case 370424594:
			return "BREED_APPALOOSA";
		case -364764277:
			return "BREED_MANGY_BACKUP";
		default:
			break;
	}
	return "BREED_INVALID";
}

int func_1803(int iParam0)
{
	if (!_item_database_fillout_item_info(iParam0, &Var0))
	{
		return 0;
	}
	return Var0.f_4;
}

bool func_1804(struct<2> Param0, struct<2> Param2)
{
	return (Param0 == Param2 && Param0.f_1 == Param2.f_1);
}

bool func_1805(int iParam0, int iParam1)
{
	if (!Global_1071686->f_3)
	{
		return false;
	}
	if (!network_is_in_session())
	{
		return false;
	}
	if (iParam1 == 255)
	{
		iParam1 = network_player_id_to_int();
	}
	return (Global_1197355[iParam1] && iParam0) != 0;
}

int func_1806(int iParam0)
{
	iVar0 = -183012873;
	switch (iParam0)
	{
		case 3:
			iVar0 = -183012873;
			break;
		case 0:
			iVar0 = -265461064;
			break;
		case 1:
			iVar0 = -1577085532;
			break;
		case 2:
			iVar0 = -715226337;
			break;
		default:
			iVar0 = -183012873;
			break;
	}
	return iVar0;
}

bool func_1807()
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		Var1 = -1;
		Var1.f_1 = -1;
		Var1 = { func_832(iVar0) };
		if (func_833(Var1) == 7)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

char* func_1808(int iParam0, bool bParam1)
{
	iVar0 = ((iParam0 / 1000) / 3600);
	iVar1 = (((iParam0 / 1000) / 60) - iVar0 * 60);
	iVar2 = ((iParam0 - (iVar1 + iVar0 * 60) * 60 * 1000) / 1000);
	iVar3 = (iParam0 - (iVar2 + (iVar1 + iVar0 * 60) * 60) * 1000);
	if (iVar0 > 0)
	{
		StringIntConCat(&cVar4, iVar0, 64);
		StringConCat(&cVar4, ":", 64);
		if (iVar1 < 10)
		{
			StringConCat(&cVar4, "0", 64);
			if (iVar1 < 0)
			{
				StringIntConCat(&cVar4, iVar1, 64);
				StringConCat(&cVar4, ":", 64);
				if (iVar2 < 10)
				{
					StringConCat(&cVar4, "0", 64);
				}
			}
		}
	}
	if (iVar1 > 0)
	{
		if (iVar1 < 10)
		{
			StringIntConCat(&cVar4, 0, 64);
		}
		StringIntConCat(&cVar4, iVar1, 64);
	}
	else
	{
		StringConCat(&cVar4, "00", 64);
	}
	StringConCat(&cVar4, ":", 64);
	if (iVar2 < 10)
	{
		StringConCat(&cVar4, "0", 64);
	}
	StringIntConCat(&cVar4, iVar2, 64);
	if (bParam1)
	{
		StringConCat(&cVar4, ".", 64);
		if (iVar3 >= 0)
		{
			StringIntConCat(&cVar4, iVar3, 64);
		}
		else
		{
			StringIntConCat(&cVar4, (iVar3 * -1), 64);
		}
		if (iVar3 < 10)
		{
			StringConCat(&cVar4, "00", 64);
		}
		else if (iVar3 < 100)
		{
			StringConCat(&cVar4, "0", 64);
		}
	}
	return _0xd8402b858f4ddd88(&cVar4, get_length_of_literal_string(&cVar4));
}

bool func_1809(int iParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_540(bParam3);
	}
	if (!_0x22e590f108289a9d(iParam4, iParam0, iParam1, &uVar0))
	{
		return false;
	}
	if (!func_1863(&uVar0, iParam2, bParam3, 0, iParam4))
	{
		return false;
	}
	return true;
}

int func_1810()
{
	return 4;
}

struct<24> func_1811(int iParam0, int iParam1)
{
	Var0.f_10 = -1;
	func_2186(iParam0, iParam1, &Var0);
	return Var0;
}

int func_1812(int iParam0, int iParam1, int iParam2, bool bParam3)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar1 = func_2187(iParam0);
	func_2188();
	Global_1904087->f_106.f_3 = func_2189(iParam0);
	if (iParam1 == 0)
	{
		iParam1 = iVar1;
	}
	if (iParam1 == 0)
	{
		return 0;
	}
	Global_1904087->f_106.f_2 = iParam2;
	Global_1904087->f_106.f_4 = iParam1;
	if (_datafile_get_hash(&uVar0, &(Global_1904087->f_106)))
	{
		return uVar0;
	}
	Global_1904087->f_106.f_4 = iVar1;
	if (_datafile_get_hash(&uVar0, &(Global_1904087->f_106)) && bParam3)
	{
		return uVar0;
	}
	return 0;
}

int func_1813(int iParam0)
{
	switch (iParam0)
	{
		case 1700732603:
			return 0;
		case 982774052:
			return 1;
		case -123593833:
			return 2;
		case -1010412125:
			return 3;
		case -1436348526:
			return 4;
		case -1018115989:
			return 5;
		case -520837189:
			return 6;
		case 1120909915:
			return 7;
		case 1103137888:
			return 8;
		case 241826159:
			return 9;
		case -179576689:
			return 0;
		case -1196774001:
			return 9;
		case -211921050:
			return 10;
		case -1698655110:
			return 11;
		case 1667110956:
			return 12;
		case 1001261891:
			return 13;
		case 2126077491:
			return 14;
		case 1134796210:
			return 10;
		case 520122271:
			return 14;
		default:
			break;
	}
	return -1;
}

bool func_1814(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!decor_exist_on(iParam0, func_735()))
	{
		return false;
	}
	if ((!decor_exist_on(iParam0, func_736()) || !decor_exist_on(iParam0, func_737())) || !decor_exist_on(iParam0, func_738()))
	{
		return false;
	}
	Var0 = decor_get_int(iParam0, func_735());
	Var0.f_1 = decor_get_int(iParam0, func_736());
	Var0.f_2 = decor_get_int(iParam0, func_737());
	Var0.f_3 = decor_get_int(iParam0, func_738());
	if (!_0xb881ca836cc4b6d4(&Var0))
	{
		return false;
	}
	*uParam1 = { Var0 };
	return true;
}

bool func_1815(int iParam0)
{
	if (func_760(2, iParam0))
	{
		return true;
	}
	if (func_760(4, iParam0))
	{
		return true;
	}
	if (func_501(97))
	{
		return true;
	}
	if (func_501(98))
	{
		return true;
	}
	if (func_501(99))
	{
		return true;
	}
	if (func_501(100))
	{
		return true;
	}
	return false;
}

bool func_1816()
{
	return Global_1896738->f_371.f_5;
}

int func_1817()
{
	return Global_1291734->f_11;
}

int func_1818()
{
	return Global_1291734->f_581;
}

bool func_1819(int iParam0)
{
	iVar0 = get_vehicle_model_number_of_seats(get_entity_model(iParam0));
	iVar1 = 0;
	while (iVar1 < iVar0)
	{
		iVar2 = (iVar1 - 1);
		if (iVar2 == -1 || iVar2 == 0)
		{
		}
		else if (!does_entity_exist(_0xffec4b0a1a3ed515(iParam0, iVar2)))
		{
		}
		else
		{
			return true;
		}
		iVar1++;
	}
	return false;
}

int func_1820(int iParam0)
{
	iVar0 = 1191420897;
	switch (iParam0)
	{
		case 3:
			iVar0 = 1191420897;
			break;
		case 0:
			iVar0 = 1222267777;
			break;
		case 1:
			iVar0 = -630943934;
			break;
		case 2:
			iVar0 = 1528509922;
			break;
		default:
			iVar0 = 1191420897;
			break;
	}
	return iVar0;
}

bool func_1821(var uParam0, struct<2> Param1, var uParam3)
{
	if (Param1.f_1 == 0)
	{
		return false;
	}
	uVar0 = func_2190(Param1.f_1);
	if (!_0x7907969497ea92f5(uVar0) || !_0x603ac35fd4602c76(uVar0))
	{
		return false;
	}
	*uParam0 = uVar0;
	uParam0->f_2 = -80782076;
	if (!_datafile_get_data_node_index(&(uParam0->f_1), uParam0))
	{
		return false;
	}
	return true;
}

bool func_1822(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 5)
	{
		if (&Global_1132288->f_2020[iVar0] == iParam0)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_1823(vector3 vParam0, var uParam3)
{
	if (!func_1821(&Var0, vParam0))
	{
		return false;
	}
	Var0.f_2 = 1886596441;
	Var0.f_3 = vParam0.z;
	Var0.f_4 = 0;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = -1420258246;
		_datafile_get_vector(uParam3, &Var0);
		return true;
	}
	return false;
}

bool func_1824(vector3 vParam0, int iParam3, vector3 vParam4, int iParam7, int iParam8, bool bParam9, int iParam10)
{
	if (func_600(32))
	{
		if (func_1822(vParam0.z))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	if (func_600(64))
	{
		iVar0 = func_2191(vParam0);
		if (iVar0 == 0)
		{
			return false;
		}
		if (!_unlock_is_unlocked(iVar0))
		{
			return false;
		}
	}
	if (func_538(vParam0, iParam7))
	{
		return false;
	}
	if (!bParam9 && _0x397769175a7dbb30(vParam4, Global_1901947->f_584.f_5, 0, 0, 0))
	{
		return false;
	}
	if (!bParam9 && _0x397769175a7dbb30(vParam4, Global_1901947->f_584.f_4, 0, func_2192(), 0))
	{
		return false;
	}
	if (iParam10 == 0 && func_2193(vParam4))
	{
		return false;
	}
	if (iParam10 == 0 && func_2194(vParam4, iParam3))
	{
		return false;
	}
	return true;
}

bool func_1825(int iParam0)
{
	return !iParam0 <= 0;
}

bool func_1826(int iParam0, int iParam1, bool bParam2)
{
	if (bParam2)
	{
		if (!func_1825(iParam0))
		{
			return false;
		}
	}
	if (Global_1572887->f_13 != -1)
	{
		return (Global_17411[iParam0] && iParam1) != 0;
	}
	return (Global_39.f_4667[iParam0] && iParam1) != 0;
}

bool func_1827(int iParam0, bool bParam1)
{
	if (!func_1040(iParam0, 947377998))
	{
		return false;
	}
	if (bParam1)
	{
		if (func_1040(iParam0, -1090933859))
		{
			return func_1279(iParam0, 1) != 0;
		}
		if ((func_1074(iParam0, -915411861, 0) || func_1074(iParam0, 600942249, 0)) || func_1074(iParam0, -570078785, 0))
		{
			return true;
		}
		else
		{
			return false;
		}
	}
	return true;
}

bool func_1828(int iParam0, bool bParam1)
{
	iVar0 = func_2195(iParam0, 1);
	if (iVar0 == 0)
	{
		return false;
	}
	if (func_1290(iVar0, -2141192156))
	{
		return false;
	}
	if (bParam1)
	{
		if (!func_1829(iVar0, -2141192156, &uVar1, 0, 0))
		{
			return false;
		}
	}
	return true;
}

bool func_1829(int iParam0, int iParam1, var uParam2, bool bParam3, bool bParam4)
{
	if (!func_1904(iParam0, iParam1, &Var0, &iVar31, 0, 1))
	{
		return false;
	}
	iVar34 = -1;
	if (Global_1915715->f_20638)
	{
		iVar34 = Global_1915715->f_20241;
	}
	iVar32 = 0;
	while (iVar32 < iVar31)
	{
		if (&Var0[iVar32] == 0)
		{
		}
		else
		{
			if (&Var0[iVar32] == 2084597891)
			{
				if (!bParam4 && !func_537(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else if (&Var0[iVar32] == 773203532)
			{
				if (!bParam4 && !func_616(Var0[iVar32]->f_1))
				{
					return false;
				}
			}
			else
			{
				iVar33 = func_2196(iVar34, &(Var0[iVar32]));
				if (iVar33 != 0)
				{
					iVar35 = func_2197(&(Var0[iVar32]), iVar33);
				}
				else
				{
					iVar35 = func_1389(&(Var0[iVar32]), 0, bParam3, 1);
				}
				if (iVar35 < Var0[iVar32]->f_1)
				{
					*uParam2 = { *Var0[iVar32] };
					return false;
				}
			}
			iVar32++;
		}
	}
	return true;
}

bool func_1830(int iParam0, int iParam1, int iParam2, var uParam3, var uParam4, bool bParam5, bool bParam6, bool bParam7)
{
	if (func_1278(iParam0))
	{
		return func_1829(func_1279(iParam0, 1), iParam2, uParam3, 1, 0);
	}
	if (!func_1302(iParam0, iParam2, &Var0, &iVar31, 1, 0))
	{
		return false;
	}
	bVar35 = ((!bParam6 && func_1390(0)) && !func_1388());
	iVar37 = -1;
	if (Global_1915715->f_20638)
	{
		iVar37 = Global_1915715->f_20241;
	}
	iVar34 = 0;
	while (iVar34 < iVar31)
	{
		if (&Var0[iVar34] == 0 || &Var0[iVar34] == 1412640604)
		{
		}
		else
		{
			iVar32 = (Var0[iVar34]->f_1 * iParam1);
			if (&Var0[iVar34] == 2084597891 && (bParam7 || func_537(iVar32)))
			{
				Jump @482; //curOff = 198
			}
			else if (&Var0[iVar34] == 773203532 && (bParam7 || func_616(iVar32)))
			{
			}
			else
			{
				iVar36 = func_2196(iVar37, &(Var0[iVar34]));
				if (iVar36 != 0)
				{
					bParam5 = false;
					iVar33 = func_2197(&(Var0[iVar34]), iVar36);
				}
				else
				{
					iVar33 = func_1389(&(Var0[iVar34]), 0, !bVar35, 1);
				}
				if (iVar33 >= iVar32)
				{
				}
				else if (bVar35)
				{
					if (func_2198(&(Var0[iVar34])) || func_2199(&(Var0[iVar34])))
					{
						iVar38 = 0;
						if (bParam5)
						{
							iVar39 = func_2200(7, &(Var0[iVar34]), &iVar38);
						}
						iVar40 = func_2201(&(Var0[iVar34]), iVar36);
						if (((iVar33 + iVar39) + iVar40) >= iVar32)
						{
							if ((iVar33 + iVar40) < iVar32 && does_entity_exist(iVar38))
							{
								*uParam4 = iVar38;
							}
						}
						else
						{
							Jump @466; //curOff = 422
							if (bParam5 && ((iVar33 + func_2202(7, &(Var0[iVar34]))) + func_2203(&(Var0[iVar34]))) >= iVar32)
							{
							}
							else
							{
								*uParam3 = { *Var0[iVar34] };
								return false;
							}
						}
						iVar34++;
						return true;
					}
				}
			}
		}
	}
}

int func_1831(int iParam0)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case 0:
			iVar0 = 0;
			break;
		case -88424047:
			iVar0 = 1;
			break;
		case 1651967528:
			iVar0 = 2;
			break;
		case -84928653:
			iVar0 = 3;
			break;
		case 1306134188:
			iVar0 = 4;
			break;
		case -1357178860:
			iVar0 = 5;
			break;
		case 133180145:
			iVar0 = 6;
			break;
		case 655115506:
			iVar0 = 7;
			break;
		case 1737952409:
			iVar0 = 8;
			break;
		case 2137301164:
			iVar0 = 9;
			break;
		case -110687166:
			iVar0 = 10;
			break;
		case -2030542394:
			iVar0 = 11;
			break;
		case -11301188:
			iVar0 = 12;
			break;
		case -1312679892:
			iVar0 = 13;
			break;
		case -61119924:
			iVar0 = 14;
			break;
		case 2134863183:
			iVar0 = 15;
			break;
		case -159568751:
			iVar0 = 16;
			break;
		case -1808811965:
			iVar0 = 17;
			break;
		case -1854341522:
			iVar0 = 18;
			break;
		case 1464020707:
			iVar0 = 19;
			break;
		case 1098974047:
			iVar0 = 20;
			break;
		case 868706284:
			iVar0 = 21;
			break;
		case 313296873:
			iVar0 = 22;
			break;
		case 541270806:
			iVar0 = 23;
			break;
		case 922800273:
			iVar0 = 24;
			break;
		case 1298496858:
			iVar0 = 25;
			break;
		case 1699163417:
			iVar0 = 26;
			break;
		case 864110990:
			iVar0 = 27;
			break;
		case -2127829790:
			iVar0 = 28;
			break;
		case -575777117:
			iVar0 = 29;
			break;
		case -1879562593:
			iVar0 = 30;
			break;
		case 1890312850:
			iVar0 = 31;
			break;
		case 1735278055:
			iVar0 = 32;
			break;
		case -1480790826:
			iVar0 = 33;
			break;
	}
	return iVar0;
}

bool func_1832(int iParam0)
{
	return func_41(&(Global_1572887->f_405.f_1), iParam0, 3);
}

int func_1833(int iParam0, struct<2> Param1)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	if (func_1834(iParam0, 16))
	{
		return 1;
	}
	if (!func_1112(Param1))
	{
		return 0;
	}
	else if (func_1835(Param1))
	{
		return 0;
	}
	else if (func_1331(Param1))
	{
		return 0;
	}
	func_2204(Param1);
	func_1210(iParam0, 16);
	return 1;
}

bool func_1834(int iParam0, int iParam1)
{
	return func_576(Global_1196898->f_78[iParam0]->f_6, iParam1);
}

bool func_1835(struct<2> Param0)
{
	iVar0 = func_1912(Param0);
	return (iVar0 == 1 || iVar0 == 2);
}

bool func_1836()
{
	return (func_2205() != 0 || func_2206(1));
}

int func_1837(int iParam0)
{
	if (func_2207())
	{
		return 0;
	}
	if (!func_1836())
	{
		return 0;
	}
	if (func_2208())
	{
		func_2209(2);
	}
	else
	{
		func_2209(1);
	}
	func_2210(iParam0);
	return 1;
}

void func_1838(struct<2> Param0, bool bParam2, bool bParam3, bool bParam4)
{
	if (!func_1112(Param0))
	{
		return;
	}
	if (!func_1835(Param0))
	{
		return;
	}
	if (bParam2)
	{
		func_2211(Param0);
	}
	if (!func_1112(func_832(0)))
	{
		func_2212(Param0, 3);
		func_2213(bParam3);
		func_2214(!bParam4);
		func_2215(Param0, -1);
		if (bParam2 && !func_2153(2))
		{
			func_330(&Global_0, 1024);
		}
		func_2216(1);
	}
	else
	{
		func_2215(Param0, -1);
		func_2212(Param0, 4);
		func_2217(Param0, 0);
	}
	Global_1051252->f_45.f_1 = 1;
	iVar0 = func_833(Param0);
	if (iVar0 != 2 && iVar0 != 7)
	{
		if (func_2218(Param0, &Var1))
		{
			_0x1096603b519c905f(&(Var1.f_17));
		}
	}
}

int func_1839(struct<2> Param0, bool bParam2, int iParam3, int iParam4)
{
	if (func_2219(Param0) >= 0)
	{
		return 0;
	}
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1 = { Param0 };
	Var0 = func_2220(Param0);
	Var0.f_3 = iParam3;
	func_2221(&Var0, bParam2, iParam4);
	return 1;
}

void func_1840(int iParam0)
{
	if (Global_1194053->f_440 != 2)
	{
		return;
	}
	if (Global_1194053->f_440.f_1 != 0)
	{
		return;
	}
	Global_1194053->f_440.f_1 = iParam0;
	_0xc584ff658b2e55da(iParam0);
}

void func_1841(int iParam0, int iParam1)
{
	iVar0 = func_1120(iParam0);
	if (iVar0 == -785841056)
	{
		func_667(func_666(1511238709, -785841056), 1);
	}
	else
	{
		func_667(func_666(1511238709, -1666944573), 1);
	}
	if (func_2222(iParam0, iParam1, &iVar1))
	{
		func_667(func_666(1511238709, iVar1), 1);
	}
}

void func_1842(int iParam0)
{
	if ((Global_1900688->f_1 == 2 || Global_1900688->f_1 == 5) || Global_1900688->f_1 == 3)
	{
		return;
	}
	iVar0 = 0;
	if (func_619() != -1)
	{
		iVar0 = 1;
	}
	iVar1 = func_2223(Global_1893587->f_2);
	Global_1900688->f_1 = 3;
	Global_1900688->f_2 = 0;
	Global_1900688->f_7 = iVar0;
	Global_1900688->f_8 = iParam0;
	Global_1900688->f_9 = iVar1;
	if (Global_1900688->f_9 != -1 && Global_1900688->f_9 != 0)
	{
		func_2224(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_9);
	}
	else if (Global_1900688->f_11 != -1)
	{
		func_2224(Global_1900688->f_7, Global_1900688->f_8, Global_1900688->f_11);
	}
}

void func_1843()
{
	if (network_is_player_active(player_id()))
	{
		if (func_703(1048576, player_id()) || Global_1296851->f_2.f_1 == 2)
		{
			func_2225();
		}
	}
	if (_get_wanted_intensity_for_player(Global_1296859->f_10) > 0)
	{
		if (func_1114())
		{
			func_2226();
		}
		func_2227();
	}
}

bool func_1844(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 1:
			return false;
		case 2:
			return false;
		case 3:
			return false;
		case 8:
			return bParam1;
		case 10:
			return bParam1;
		case 9:
			return bParam1;
		case 4:
			return bParam1;
		case 5:
			return bParam1;
		case 6:
			return bParam1;
		case 7:
			return bParam1;
		default:
			break;
	}
	return false;
}

bool func_1845(int iParam0)
{
	if (iParam0 < 0 || iParam0 > 15)
	{
		return false;
	}
	return true;
}

int func_1846(var uParam0, struct<21> Param1)
{
	if (!func_2228(uParam0))
	{
		return 0;
	}
	*uParam0->f_2[*uParam0] = { Param1 };
	*uParam0++;
	return 1;
}

void func_1847(float fParam0, bool bParam1)
{
	iVar0 = _0x901e0dc25080c8b9(player_id());
	iVar2 = 0;
	while (iVar2 < 32)
	{
		iVar1 = int_to_playerindex(iVar2);
		if (!network_is_player_connected(iVar1) || !network_is_player_active(iVar1))
		{
		}
		else if (!bParam1 && _0x424b17a7dc5c90bc(iVar1))
		{
		}
		else if (_0x901e0dc25080c8b9(iVar1) != iVar0)
		{
		}
		else
		{
			_0x31010318ba9897ac(fParam0, iVar1);
		}
		iVar2++;
	}
}

bool func_1848(int iParam0)
{
	Var0 = { func_1243(iParam0) };
	switch (func_2229(Var0))
	{
		case 1:
			func_2230(iParam0);
			break;
		case 2:
			func_2231(iParam0);
			break;
		case 3:
			func_2232(iParam0);
			break;
		case 4:
			func_2233(iParam0);
			break;
		case 5:
			func_2234(iParam0);
			break;
		default:
			return false;
	}
	func_145();
	return true;
}

bool func_1849(int iParam0)
{
	return false;
}

struct<35> func_1850(int iParam0)
{
	Var4.f_8 = -1;
	Var4.f_8.f_1 = -1;
	Var4.f_16.f_12 = -1;
	Var4.f_16.f_12.f_1 = -1;
	Var4.f_16.f_14 = 255;
	Var4.f_16.f_15 = 255;
	Var4.f_16.f_1 = 255;
	Var4.f_16.f_2 = vVar0.z;
	func_2235(&(Var4.f_8));
	if (func_2236() == iParam0)
	{
		func_2237();
	}
	if (Global_1071686->f_16 > 0)
	{
		Global_1071686->f_16 = (Global_1071686->f_16 - 1);
		Var4 = { *Global_1071686->f_16.f_5[iParam0] };
		Global_1071686->f_16.f_5[iParam0] = 0;
	}
	iVar39 = iParam0;
	iVar39 = iParam0;
	while (iVar39 <= 8)
	{
		if (func_2236() == iVar39 + 1)
		{
			func_2238(iVar39);
		}
		*Global_1071686->f_16.f_5[iVar39] = { *(Global_1071686->f_16.f_5[iVar39 + 1]) };
		Global_1071686->f_16.f_5[iVar39 + 1] = 0;
		iVar39++;
	}
	return Var4;
}

bool func_1851(int iParam0)
{
	Var0 = { func_1243(iParam0) };
	switch (func_2229(Var0))
	{
		case 1:
			func_1852(iParam0);
			return true;
		case 3:
			func_2239(iParam0);
			return true;
		default:
			break;
	}
	return false;
}

bool func_1852(int iParam0)
{
	Var11 = { func_1243(iParam0) };
	iVar46 = _0x901e0dc25080c8b9(Var11.f_16.f_14);
	switch (Var11.f_16.f_4)
	{
		case 69:
			Var0.f_4 = 2;
			Var0.f_5 = iVar46;
			Var0.f_6 = Var11.f_16.f_7;
			func_1765(&Var0, Var11.f_16.f_14);
			return true;
		case 70:
			return true;
		case 72:
			return true;
		default:
			break;
	}
	return false;
}

bool func_1853(int iParam0)
{
	return false;
}

bool func_1854(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == 255)
	{
		iParam2 = network_player_id_to_int();
	}
	return (func_2240(iParam0) && func_415((*(*Global_1238240)[iParam2])[iParam0]->f_19, iParam1));
}

int func_1855(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (func_1854(iParam0, 32, iVar0) && !_0x72b2e00c9bac6789(&((*Global_1237665)[iParam0]->f_14), iVar0))
		{
			iVar1++;
		}
		iVar0++;
	}
	return iVar1;
}

int func_1856(int iParam0)
{
	if (iParam0 <= 0)
	{
		return 0;
	}
	get_posix_time(&iVar1, &iVar2, &iVar3, &iVar4, &iVar5, &iVar6);
	iVar0 = ((((((iVar1 + iVar2) + iVar3) + iVar4) + iVar5) + iVar6) + get_random_int_in_range(0, 60000));
	iVar0 = (iVar0 % iParam0);
	return iVar0;
}

int func_1857(int iParam0)
{
	if (func_2241(iParam0))
	{
		return Global_1298166->f_201.f_1[iParam0]->f_3;
	}
	return 0;
}

void func_1858(int iParam0)
{
	func_577(&(Global_1298378->f_156), iParam0);
}

void func_1859(int iParam0)
{
	Global_1298166->f_200 = iParam0;
}

void func_1860(int iParam0)
{
	Global_1298166->f_1 = iParam0;
}

void func_1861()
{
	Var0 = 255;
	iVar4 = 0;
	while (iVar4 <= (Global_1298166->f_3.f_2 - 1))
	{
		*Global_1298166->f_3.f_2[iVar4] = { Var0 };
		iVar4++;
	}
	Global_1298166->f_3.f_1 = 0;
	Global_1298166->f_3 = 0;
}

bool func_1862(struct<2> Param0, var uParam2)
{
	if (!func_1112(Param0))
	{
		return false;
	}
	func_2242(uParam2);
	switch (Param0)
	{
		case 2:
			_copy_memory(uParam2, Global_1071686->f_636[Param0.f_1], 3);
			return true;
		case 3:
			_copy_memory(uParam2, Global_1071686->f_636.f_602[Param0.f_1], 3);
			return true;
		case 4:
			_copy_memory(uParam2, Global_1071686->f_636.f_2104[Param0.f_1], 3);
			return true;
		case 5:
			_copy_memory(uParam2, Global_1071686->f_636.f_12606[Param0.f_1], 3);
			return true;
		case 6:
			_copy_memory(uParam2, Global_1071686->f_636.f_12908[Param0.f_1], 3);
			return true;
		case 7:
			_copy_memory(uParam2, Global_1071686->f_636.f_15910[Param0.f_1], 3);
			return true;
		case 8:
			_copy_memory(uParam2, Global_1071686->f_636.f_16512[Param0.f_1], 3);
			return true;
		default:
			break;
	}
	return false;
}

bool func_1863(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4)
{
	if (!_0xb881ca836cc4b6d4(iParam0))
	{
		return false;
	}
	if (iParam4 == -1)
	{
		iParam4 = func_540(bParam2);
	}
	if (!_0x9700e8efc4ab9089(iParam4, iParam0, iParam1, !bParam3))
	{
		return false;
	}
	return true;
}

bool func_1864(int iParam0)
{
	iVar0 = func_2243(iParam0);
	if (iVar0 == 1 || iVar0 == 5)
	{
		return true;
	}
	return false;
}

struct<28> func_1865(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var28.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_540(bParam4), &uParam0, &Var28, 29, 1))
	{
		return Var0;
	}
	Var0 = { func_1871(&Var28, bParam5) };
	Var0.f_16 = { Var28.f_16 };
	Var0.f_24 = Var28.f_25;
	Var0.f_25 = Var28.f_27;
	Var0.f_26 = Var28.f_28;
	Var0.f_27 = Var28.f_24;
	return Var0;
}

int func_1866(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1943(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_1945(func_2244(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1946(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 28), iVar0, uParam1);
	}
	return -1;
}

struct<25> func_1867(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var25.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_540(bParam4), &uParam0, &Var25, 24, 1))
	{
		return Var0;
	}
	Var0 = { func_1871(&Var25, bParam5) };
	Var0.f_16 = { Var25.f_15 };
	Var0.f_24 = Var25.f_23;
	return Var0;
}

int func_1868(int iParam0, var uParam1, bool bParam2)
{
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_1945(func_2245(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1946(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 25), iVar0, uParam1);
	}
	return -1;
}

struct<17> func_1869(var uParam0, int iParam1, int iParam2, var uParam3, bool bParam4, bool bParam5)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	if (!_0xb881ca836cc4b6d4(&uParam0))
	{
		return Var0;
	}
	Var17.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_540(bParam4), &uParam0, &Var17, 15, 1))
	{
		return Var0;
	}
	Var0 = { func_1871(&Var17, bParam5) };
	Var0.f_16 = Var17.f_14;
	return Var0;
}

int func_1870(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	if (!func_1943(iParam0, uParam1))
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_1945(func_2246(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1946(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 17), iVar0, uParam1);
	}
	return -1;
}

struct<16> func_1871(int iParam0, bool bParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { *iParam0 };
	Var0.f_4 = { iParam0->f_5 };
	Var0.f_8 = iParam0->f_4;
	Var0.f_9 = iParam0->f_11;
	Var0.f_11 = iParam0->f_9;
	Var0.f_10 = iParam0->f_10;
	if (bParam1)
	{
		Var0.f_15 = func_1684(iParam0->f_4, -455129387);
		if (Var0.f_15 != 0)
		{
			Var0.f_4 = { func_733() };
			Var0.f_11 = 0;
		}
	}
	return Var0;
}

void func_1872(var uParam0)
{
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (&uParam0->f_2[iVar0] != 0)
		{
			iVar1++;
		}
		iVar0++;
	}
	if (iVar1 == 0)
	{
		*uParam0 = 0;
		uParam0->f_1 = -1;
		return;
	}
	iVar2 = 0;
	if (uParam0->f_1 > -1)
	{
		if (&uParam0->f_2[uParam0->f_1] == 0)
		{
			uParam0->f_1 = -1;
		}
		else
		{
			iVar2 = &uParam0->f_2[uParam0->f_1];
		}
	}
	bVar3 = false;
	iVar0 = 0;
	while (iVar0 <= 3)
	{
		if (&uParam0->f_2[iVar0] == 0)
		{
			*uParam0 = iVar0;
			bVar3 = true;
			if (iVar0 + 1 < 4)
			{
				if (&uParam0->f_2[iVar0 + 1] != 0)
				{
					uParam0->f_2[iVar0] = &uParam0->f_2[iVar0 + 1];
					uParam0->f_2[iVar0 + 1] = 0;
				}
			else
			{
				}
				else
				{
					iVar0++;
				}
				iVar0 = 0;
				while (iVar0 <= 3)
				{
					if (bVar3 == 0)
					{
						if (&uParam0->f_2[iVar0] == 0)
						{
							*uParam0 = iVar0;
							bVar3 = true;
						}
					}
					if (iVar2 != 0 && iVar2 == &uParam0->f_2[iVar0])
					{
						uParam0->f_1 = iVar0;
					}
					iVar0++;
				}
				if (!bVar3)
				{
					*uParam0++;
					if (uParam0->f_1 == *uParam0)
					{
						*uParam0++;
					}
					if (*uParam0 >= 4)
					{
						*uParam0 = 0;
					}
				}
			}
		}
	}
}

int func_1873(struct<2> Param0)
{
	return func_2220(Param0);
}

int func_1874(int iParam0, var uParam1, int iParam2)
{
	iVar0 = 0;
	iVar1 = (iParam2 - 1);
	while (iVar0 <= iVar1)
	{
		iVar2 = (iVar0 + ((iVar1 - iVar0) / 2));
		if (uParam1[iVar2] > iParam0)
		{
			iVar1 = (iVar2 - 1);
		}
		else if (uParam1[iVar2] < iParam0)
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

bool func_1875(var uParam0, int iParam1)
{
	if (!_0x7907969497ea92f5(Global_1196898->f_455))
	{
		return false;
	}
	*uParam0 = Global_1196898->f_455;
	uParam0->f_2 = -1093317127;
	uParam0->f_3 = func_2247(iParam1);
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_1876(var uParam0)
{
	*uParam0 = Global_1196898->f_455;
	uParam0->f_2 = -1782115362;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_1877(var uParam0, int iParam1)
{
	uParam0->f_2 = 1574313466;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_1878(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
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

int func_1879(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (Global_1196339->f_1[iVar0]->f_1 == iParam0 && Global_1196339->f_1[iVar0]->f_2 == iParam1)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_1880(vector3 vParam0, int iParam3, var uParam4, int iParam5, var uParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_vector(uParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

float func_1881(int iParam0, int iParam1)
{
	fVar0 = 200f;
	if ((func_1875(&Var1, iParam0) && func_1876(&Var1)) && func_1882(&Var1, iParam1))
	{
		func_2248(Var1, 1168414437, &fVar0, 0);
	}
	return fVar0;
}

bool func_1882(var uParam0, int iParam1)
{
	uParam0->f_2 = 454625570;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_1883(var uParam0)
{
	uParam0->f_2 = -310067910;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_1884(var uParam0, int iParam1)
{
	uParam0->f_2 = 1481789088;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_1885(var uParam0, int iParam1)
{
	uParam0->f_2 = -1739269194;
	uParam0->f_3 = iParam1;
	return _datafile_get_data_node_index(&(uParam0->f_1), uParam0);
}

bool func_1886(int iParam0, var uParam1, var uParam2)
{
	if (!func_2249(iParam0))
	{
		return false;
	}
	if (func_2250(iParam0, uParam1, &uVar0))
	{
		func_2251(iParam0, &uVar0, uParam2);
	}
	else
	{
		return false;
	}
	return true;
}

int func_1887()
{
	if ((!_does_thread_exist(&(Global_1051252->f_16[4])) || !is_thread_active(&(Global_1051252->f_16[4]), false)) || !_0x31dad2cd6d49546e(&(Global_1051252->f_16[4])))
	{
		return 255;
	}
	return _0xb4a25351d79b444c(&(Global_1051252->f_16[4]));
}

int func_1888(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4, int iParam5)
{
	if (func_1887() != player_id())
	{
		return 0;
	}
	iVar0 = -1;
	iVar1 = func_1789(iParam0, iParam1, &iVar0);
	if (iVar1 != 0)
	{
		return 0;
	}
	iVar1 = func_1790(iParam0, iParam2);
	if (iVar1 != 0)
	{
		return 0;
	}
	iVar1 = func_1791(iParam3);
	if (iVar1 != 0)
	{
		return 0;
	}
	Var2 = { func_1264(iParam0, iParam2, iParam3) };
	iVar1 = func_1792(Var2);
	if (iVar1 == 13 && func_2252(iParam0))
	{
		iParam2 = func_1262(iParam0, func_1234(iParam1));
		iParam3 = func_1263(iParam0, iParam2);
		Var2 = { func_1264(iParam0, iParam2, iParam3) };
		iVar1 = func_1792(Var2);
	}
	if (iVar1 != 0)
	{
		return 0;
	}
	Global_1196339->f_1[iVar0] = 1;
	Global_1196339->f_1[iVar0]->f_1 = iParam0;
	Global_1196339->f_1[iVar0]->f_7 = iParam1;
	Global_1196339->f_1[iVar0]->f_2 = iParam2;
	Global_1196339->f_1[iVar0]->f_3 = iParam3;
	Global_1196339->f_1[iVar0]->f_4 = iParam4;
	Global_1196339->f_1[iVar0]->f_5 = { Var2 };
	_0x86a68e84e5884951(&Var4);
	Var11.f_4 = 3;
	_0x28eeace9b43d9597(&Var4, &Var11, &Var4);
	Global_1196339->f_1[iVar0]->f_12 = { Var4 };
	_0x86a68e84e5884951(&Var18);
	Var25.f_4 = 8;
	_0x28eeace9b43d9597(&Var18, &Var25, &Var18);
	Global_1196339->f_1[iVar0]->f_19 = { Var18 };
	return 1;
}

void func_1889(var uParam0, float fParam1)
{
	if (!_0x179a6f0ee2e79026(&fParam1))
	{
		return;
	}
	*uParam0 = 26;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 47, 8, &fParam1);
	func_2253(uParam0);
}

void func_1890(var uParam0)
{
	func_2254(uParam0, 0);
}

Vector3 func_1891(int iParam0)
{
	if (!func_426(iParam0))
	{
		return vVar0;
	}
	return (*Global_1131196)[iParam0]->f_1;
}

bool func_1892(int iParam0, int iParam1)
{
	if (!func_586(iParam0, 0))
	{
		return false;
	}
	if (Global_1940258->f_6)
	{
		return false;
	}
	iVar0 = func_1940(iParam0, iParam1);
	Var4.f_9 = -1591664384;
	if (func_504("ALL WEAPONS", &iVar1, &iVar2, -1591664384, 0))
	{
		iVar3 = 0;
		while (iVar3 < iVar2)
		{
			if (!func_1414(&Var4, iVar3, iVar1, iVar2))
			{
			}
			else if (!func_2255(Var4.f_4))
			{
			}
			else if (_get_ammo_type_for_weapon(Var4.f_4) == iVar0)
			{
				func_508(iVar1);
				return true;
			}
			iVar3++;
		}
		func_508(iVar1);
	}
	return false;
}

bool func_1893(int iParam0)
{
	if (!func_586(iParam0, 0))
	{
		return false;
	}
	iVar0 = func_1052(iParam0);
	switch (iVar0)
	{
		case -636562458:
		case 252325943:
		case 829857647:
		case 1216664798:
		case 1341188928:
			break;
		default:
			return false;
	}
	iVar1 = func_2256(iParam0);
	if (!iVar1 == 0)
	{
		iVar2 = func_2257(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
		if (iVar2 == -1)
		{
			return true;
		}
	}
	iVar1 = func_2258(iParam0);
	iVar2 = func_2257(&(Global_17411.f_55.f_644.f_1354.f_5), iVar1);
	if (iVar2 == -1)
	{
		return false;
	}
	return iParam0 == &Global_17411.f_55.f_644.f_1354.f_5[iVar2];
}

struct<19> func_1894(bool bParam0)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var19 = { func_583(-1838434463, func_966(1), 1084182731, 1) };
	if (!_0xb881ca836cc4b6d4(&Var19))
	{
		return Var0;
	}
	Var23.f_9 = -1591664384;
	if (!_0x025a1b1fb03fbf61(func_540(1), &Var19, &Var23, 17, 1))
	{
		return Var0;
	}
	Var0 = { func_1871(&Var23, bParam0) };
	Var0.f_17 = Var23.f_15;
	Var0.f_18 = Var23.f_16;
	Var0.f_16 = Var23.f_14;
	return Var0;
}

int func_1895(int iParam0, var uParam1, bool bParam2)
{
	if (iParam0 != -1230526146)
	{
		return -1;
	}
	iVar0 = -1;
	if (bParam2)
	{
		if (_cashinventory_transaction_start(&iVar0, 712853601, iParam0))
		{
			return func_1945(func_2259(iVar0, iParam0, uParam1), iVar0, uParam1);
		}
	}
	else
	{
		return func_1946(_cashinventory_transaction_fire_and_forget_item(iParam0, &iVar0, uParam1, 19), iVar0, uParam1);
	}
	return -1;
}

int func_1896(int iParam0, bool bParam1)
{
	if (!func_2096(iParam0, 2))
	{
		return 0;
	}
	iVar0 = 0;
	if ((iVar0 != 0 && bParam1) && _0xfbe782b3165ac8ec(iVar0))
	{
		return 0;
	}
	return iVar0;
}

bool func_1897()
{
	return func_2260(func_832(0));
}

bool func_1898(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _item_database_is_buy_award_key_valid(iParam0);
}

bool func_1899(int iParam0, int iParam1)
{
	*iParam1 = func_2261(iParam0, 1);
	return *iParam1 != 0;
}

bool func_1900(int iParam0, int iParam1)
{
	*iParam1 = func_2262(iParam0, 1, 0);
	return *iParam1 != 0;
}

int func_1901(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_2263(iVar0, 1, 0);
		if (!func_1302(iParam0, iVar33, &Var2, &iVar1, 1, 0))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_2264(&(Var2[iVar34])))
				{
					if (!bParam1 || func_1389(&(Var2[iVar34]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_1902(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_2263(iVar0, 0, 1);
		if (!func_1302(iParam0, iVar40, &Var9, &iVar1, 1, 0))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_2265(&(Var9[iVar41])))
				{
					if (!bParam1 || func_1389(&(Var9[iVar41]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41] == 2084597891 || &Var9[iVar41] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41] == 2084597891) || (!bParam2 && &Var9[iVar41] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41]->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41]->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41]->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41]->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

bool func_1903(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	bVar0 = false;
	if (func_619() == -1)
	{
		if (func_2266(iParam0))
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

bool func_1904(int iParam0, int iParam1, var uParam2, int iParam3, bool bParam4, bool bParam5)
{
	*iParam3 = 0;
	if (*uParam2 < 15)
	{
		return false;
	}
	if (!func_1898(iParam0))
	{
		return false;
	}
	*iParam3 = _0xf540239f9937033b(iParam0, iParam1);
	if (*iParam3 == 0)
	{
		if (!bParam4)
		{
		}
		return false;
	}
	if (!bParam4)
	{
	}
	iVar0 = 0;
	while (iVar0 < *iParam3)
	{
		if (!_0xf27f01bbf5acd3f3(iParam0, iParam1, iVar0, (*uParam2)[iVar0]))
		{
			Jump @112; //curOff = 100
		}
		else if (!bParam4)
		{
		}
		iVar0++;
	}
	if (bParam5)
	{
		func_2267(iParam0, iParam1, uParam2, *iParam3);
	}
	return true;
}

bool func_1905(int iParam0)
{
	return func_1052(iParam0) == 1868067663;
}

void func_1906(int iParam0, int iParam1, var uParam2, int iParam3)
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
		fVar21[iVar0] = 1f;
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
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
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
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_1052(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

bool func_1907(var uParam0, var uParam1)
{
	func_2268(uParam1);
	uParam1->f_30 = { *uParam0 };
	uParam1->f_62 = uParam0->f_5;
	bVar0 = true;
	func_2269(uParam1);
	if (!func_2270(*uParam0, &(uParam1->f_18)))
	{
		bVar0 = false;
	}
	else if (!func_2271(&(uParam1->f_18), &(uParam1->f_24)))
	{
	}
	if (uParam0->f_5 == -842959696)
	{
		if ((*uParam0 != uParam0->f_1 && does_entity_exist(uParam0->f_1)) && is_entity_a_ped(uParam0->f_1))
		{
		}
		else
		{
			return true;
		}
	}
	if (uParam0->f_5 == -10959621)
	{
		if ((*uParam0 != uParam0->f_1 && does_entity_exist(uParam0->f_1)) && is_entity_a_ped(uParam0->f_1))
		{
		}
		else
		{
			return true;
		}
	}
	if (uParam0->f_5 == 1936677264)
	{
		return true;
	}
	if (!func_2270(uParam0->f_1, &(uParam1->f_6)))
	{
		bVar0 = false;
	}
	else if (!func_2271(&(uParam1->f_6), &(uParam1->f_12)))
	{
	}
	if (bVar0)
	{
	}
	else
	{
		return true;
	}
	return bVar0;
}

int func_1908(var uParam0)
{
	if (uParam0->f_18 == 6)
	{
		return 0;
	}
	if (uParam0->f_30.f_31)
	{
		return 2;
	}
	if (uParam0->f_30.f_5 == -842959696 && uParam0->f_18 == 1)
	{
		if (uParam0->f_6 == 1 || uParam0->f_12 == 1)
		{
		}
		else
		{
			return 2;
		}
	}
	if ((uParam0->f_30.f_5 == -10959621 || uParam0->f_30.f_5 == 1936677264) && uParam0->f_18 == 1)
	{
		if (uParam0->f_6 == 1 || uParam0->f_12 == 1)
		{
		}
		else
		{
			return 1;
		}
	}
	if (uParam0->f_30.f_5 == 357427886)
	{
		if (Global_1940085->f_28.f_1 == 1)
		{
			return 28;
		}
		if ((uParam0->f_18 == 1 && (uParam0->f_6 == 1 || uParam0->f_12 == 1)) && (uParam0->f_6.f_3 == uParam0->f_18.f_3 || uParam0->f_12.f_3 == uParam0->f_18.f_3))
		{
			return 2;
		}
	}
	iVar0 = func_2272(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_2273(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	iVar0 = func_2274(uParam0);
	if (iVar0 != 0)
	{
		return iVar0;
	}
	if (uParam0->f_18 == 1)
	{
		return 1;
	}
	return 1;
}

char* func_1909(char* sParam0, int iParam1)
{
	sVar0 = _create_var_string(10, "NM_POSSE_NAME_DEFAULT", sParam0);
	return func_1077(sVar0, iParam1);
}

bool func_1910(int iParam0)
{
	return func_415(Global_1194053->f_4, iParam0);
}

void func_1911(int iParam0)
{
	func_611(&(Global_1194053->f_4), iParam0);
}

int func_1912(struct<2> Param0)
{
	if (!func_1112(Param0))
	{
		return -1;
	}
	iVar0 = func_2275(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	return Global_1071686->f_19550.f_1[iVar0]->f_2;
}

bool func_1913(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28347), iParam0))
	{
		return true;
	}
	return false;
}

bool func_1914(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28346), iParam0))
	{
		return true;
	}
	return false;
}

bool func_1915(int iParam0)
{
	if (_0x72b2e00c9bac6789(&(Global_1071686->f_28345), iParam0))
	{
		return true;
	}
	return false;
}

bool func_1916(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		func_2276(iParam0);
		return false;
	}
	if (func_1915(iParam0))
	{
		if (_0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) != 2)
		{
			func_2277(iParam0, 5, 1, 1, 0, 0);
		}
		return true;
	}
	return (_0x862c5040f4888741(Global_1296859->f_10, iParam0) || _0xfe53b1f8d43f19bf(Global_1296859->f_10, iParam0) == 2);
}

bool func_1917()
{
	return func_1339(1024);
}

void func_1918(int iParam0, int iParam1)
{
	func_628(Global_1194053->f_5[iParam0], iParam1);
}

int func_1919()
{
	return Global_1572887->f_106.f_75;
}

void func_1920()
{
	if (func_619() == -1)
	{
		return;
	}
	iVar0 = &Global_1296859;
	if (func_415(Global_1572887->f_7, 1))
	{
		func_611(&((*Global_1056141)[iVar0]->f_187.f_10), 4);
	}
	else
	{
		func_628(&((*Global_1056141)[iVar0]->f_187.f_10), 4);
	}
	(*Global_1056141)[iVar0]->f_187 = Global_1572887->f_106;
	(*Global_1056141)[iVar0]->f_187.f_1 = Global_1572887->f_106.f_9;
	(*Global_1056141)[iVar0]->f_187.f_2 = Global_1572887->f_106.f_10;
	(*Global_1056141)[iVar0]->f_187.f_3 = { Global_1572887->f_106.f_11 };
	(*Global_1056141)[iVar0]->f_187.f_8 = Global_1572887->f_106.f_13;
	(*Global_1056141)[iVar0]->f_187.f_5 = { Global_1572887->f_360 };
	(*Global_1056141)[iVar0]->f_187.f_9 = Global_1572887->f_106.f_74;
	if (func_1381(1024))
	{
		func_611(&((*Global_1056141)[iVar0]->f_187.f_10), 2);
	}
	else
	{
		func_628(&((*Global_1056141)[iVar0]->f_187.f_10), 2);
	}
}

bool func_1921()
{
	return func_1112(*Global_1051213);
}

var func_1922(int iParam0)
{
	return Global_1196339->f_1[iParam0]->f_3;
}

struct<8> func_1923(int iParam0, int iParam1)
{
	if (((func_1875(&Var8, iParam0) && func_1883(&Var8)) && func_1885(&Var8, iParam1)) && func_2278(&Var8))
	{
		func_2279(Var8, 37194763, &Var0, 1);
	}
	return Var0;
}

void func_1924(var uParam0, int iParam1)
{
	uParam0->f_20 = (uParam0->f_20 || iParam1);
}

int func_1925(int iParam0)
{
	if (iParam0 == 0)
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < Global_265377->f_2)
	{
		if (&Global_265377->f_63755[iVar0] == iParam0)
		{
			return iVar0;
		}
		if (Global_265377->f_4[iVar0]->f_28 == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

void func_1926(char* sParam0)
{
	StringCopy(&(Global_1572887->f_106.f_91.f_6), sParam0, 32);
}

bool func_1927(int iParam0)
{
	if (func_2280(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

bool func_1928(int iParam0)
{
	if (func_2281(iParam0, 0) == -1)
	{
		return false;
	}
	return true;
}

int func_1929(int iParam0)
{
	if (func_619() == -1)
	{
		return -1;
	}
	iVar0 = 9;
	while (iVar0 <= 25)
	{
		if (func_2282(iVar0) == iParam0)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

Vector3 func_1930(int iParam0)
{
	vVar5 = -1;
	vVar5.f_1 = -1;
	vVar5.f_2 = -1;
	if (!func_2283(&Var0))
	{
		return vVar5;
	}
	if (!func_2284(&Var0, 13, 0, 0, 1))
	{
		return vVar5;
	}
	if (!func_2284(&Var0, 17, 0, 0, 1))
	{
		return vVar5;
	}
	uVar12 = Var0.f_1;
	iVar9 = func_2285(&Var0, 0);
	iVar8 = 0;
	while (iVar8 <= (iVar9 - 1))
	{
		Var0.f_1 = uVar12;
		if (!func_2284(&Var0, 19, iVar8, 0, 1))
		{
		}
		else if (!func_2284(&Var0, 20, 0, 0, 1))
		{
		}
		else
		{
			iVar10 = func_2285(&Var0, 1);
			if (!func_2284(&Var0, 22, iParam0, 0, 0))
			{
			}
			else
			{
				iVar11 = _0xe13634bb6baf0734(Var0, Var0.f_1);
				vVar5.x = iVar8;
				vVar5.f_1 = ((iVar10 - iVar11) - 1);
			}
			else
			{
				iVar8++;
			}
			return vVar5;
		}
	}
}

struct<2> func_1931(int iParam0)
{
	if (iParam0 < 0 || iParam0 >= 100)
	{
		return func_162();
	}
	return (*Global_1835011)[iParam0]->f_1;
}

bool func_1932(int iParam0)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return func_1933(iParam0) != -1;
}

int func_1933(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= (10 - 1))
	{
		iVar1 = iVar0;
		if (iParam0 == func_2286(iVar1))
		{
			return iVar1;
		}
		iVar0++;
	}
	return -1;
}

struct<2> func_1934(int iParam0)
{
	return func_2287(iParam0);
}

struct<2> func_1935(int iParam0)
{
	if (!func_2283(&uVar0))
	{
		return func_162();
	}
	if (!func_2284(&uVar0, 13, 0, 0, 1))
	{
		return func_162();
	}
	if (!func_2284(&uVar0, 17, 0, 0, 1))
	{
		return func_162();
	}
	if (!func_2284(&uVar0, 19, *iParam0, 0, 1))
	{
		return func_162();
	}
	if (!func_2284(&uVar0, 20, 0, 0, 1))
	{
		return func_162();
	}
	if (!func_2284(&uVar0, 23, iParam0->f_1, 0, 1))
	{
		return func_162();
	}
	iVar5 = func_2288(&uVar0);
	return func_1208(iVar5);
}

struct<2> func_1936(int iParam0)
{
	if (iParam0 == 0)
	{
		return func_162();
	}
	if (!func_2289(&uVar0, 7, iParam0, 76966722))
	{
		return func_162();
	}
	func_2251(7, &uVar0, &Var5);
	if (Var5.f_4 != 7)
	{
		return func_162();
	}
	return func_1260(Var5.f_3, Var5.f_4);
}

int func_1937(int iParam0)
{
	switch (iParam0)
	{
		case -504335712:
			return 1005649839;
		case 395262693:
			return -47596571;
		case -933924539:
			return 921725912;
		default:
			break;
	}
	return 0;
}

void func_1938(var uParam0)
{
	uParam0->f_20 = 0;
}

int func_1939(int iParam0)
{
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (&Global_265377->f_117359.f_6758[iVar0] == iParam0)
		{
			return &(Global_265377->f_117359.f_6725[iVar0]);
		}
		iVar0++;
	}
	return 0;
}

int func_1940(int iParam0, int iParam1)
{
	if (!func_586(iParam0, 0))
	{
		return 0;
	}
	iVar0 = func_1050(iParam0);
	if (iVar0 == -427144552 && is_weapon_valid(iParam0))
	{
		return _get_ammo_type_for_weapon(iParam0);
	}
	else if (iVar0 == 307971639 && _is_ammo_valid(iParam0))
	{
		return iParam0;
	}
	if (func_1040(iParam0, 1399091007))
	{
		func_2290(iParam0, &uVar1, &uVar2);
		return uVar2;
	}
	return 0;
}

int func_1941(int iParam0, bool bParam1)
{
	if (!is_weapon_valid(iParam0))
	{
		return 0;
	}
	Var0 = { func_522(iParam0, -1591664384, -1591664384, -1591664384, 0, 0, 0) };
	if (bParam1)
	{
		func_2291(&Var0, func_2062(0));
	}
	if (!func_523(&Var0, &iVar14, &uVar15, 0))
	{
		return 0;
	}
	func_508(iVar14);
	return uVar15;
}

struct<4> func_1942(int iParam0, bool bParam1)
{
	Var0 = { func_1686(iParam0, bParam1, 0) };
	return func_583(iParam0, Var0, Var0.f_4, bParam1);
}

bool func_1943(int iParam0, var uParam1)
{
	uVar0 = _0x6c9f12700bce69f4(iParam0, uParam1);
	if (iParam0 == 1702063850)
	{
		if ((func_2292(uParam1->f_8, iParam0, uVar0, 2048) || func_2292(uParam1->f_8, iParam0, uVar0, 32768)) || func_2292(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (iParam0 == 1168099063)
	{
		if (((func_2292(uParam1->f_8, iParam0, uVar0, 4) || func_2292(uParam1->f_8, iParam0, uVar0, 256)) || func_2292(uParam1->f_8, iParam0, uVar0, 65536)) || func_2292(uParam1->f_8, iParam0, uVar0, 131072))
		{
			return false;
		}
	}
	else if (iParam0 == -1406934746)
	{
		if (((func_2292(uParam1->f_8, iParam0, uVar0, 1) || func_2292(uParam1->f_8, iParam0, uVar0, 8)) || func_2292(uParam1->f_8, iParam0, uVar0, 65536)) || func_2292(uParam1->f_8, iParam0, uVar0, 32))
		{
			return false;
		}
	}
	else if (iParam0 == -1318406457)
	{
		if (((func_2292(uParam1->f_8, iParam0, uVar0, 1) || func_2292(uParam1->f_8, iParam0, uVar0, 16)) || func_2292(uParam1->f_8, iParam0, uVar0, 2)) || func_2292(uParam1->f_8, iParam0, uVar0, 65536))
		{
			return false;
		}
	}
	else if (((func_2292(uParam1->f_8, iParam0, uVar0, 8) || func_2292(uParam1->f_8, iParam0, uVar0, 4096)) || func_2292(uParam1->f_8, iParam0, uVar0, 256)) || func_2292(uParam1->f_8, iParam0, uVar0, 65536))
	{
		return false;
	}
	return true;
}

bool func_1944(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 16, uParam2, 0);
}

int func_1945(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		if (_cashinventory_transaction_checkout(iParam1))
		{
			func_2293(iParam1, 1, 0, 0);
			return iParam1;
		}
		_cashinventory_transaction_delete(iParam1);
	}
	else if (_cashinventory_transaction_get_num_of_items(iParam1) == 0)
	{
		_cashinventory_transaction_delete(iParam1);
	}
	func_2293(iParam1, 2, 0, 0);
	return -1;
}

int func_1946(bool bParam0, int iParam1, var uParam2)
{
	if (bParam0)
	{
		func_2293(iParam1, 1, 0, 0);
		return iParam1;
	}
	return -1;
}

bool func_1947(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_1795(iParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_2184(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

bool func_1948(int iParam0, var uParam1, var uParam2, bool bParam3)
{
	if (!func_1415(iParam0, uParam2, bParam3))
	{
		return false;
	}
	if (!func_2185(uParam1, uParam2))
	{
		return false;
	}
	return true;
}

void func_1949(var uParam0, int iParam1)
{
	func_1957(&(uParam0->f_20), iParam1);
}

void func_1950(var uParam0, int iParam1)
{
	func_1955(&(uParam0->f_20), iParam1);
}

bool func_1951(int iParam0)
{
	if (!_0xb881ca836cc4b6d4(iParam0))
	{
		return false;
	}
	if (iParam0->f_10 == -1)
	{
		return false;
	}
	return true;
}

bool func_1952(var uParam0)
{
	func_1797(&(Global_1904087->f_24));
	if (!func_1251(*uParam0, &(Global_1904087->f_24), 1, 0, -1))
	{
		return false;
	}
	Global_1904087->f_24.f_14 = uParam0->f_11;
	Global_1904087->f_24.f_15 = uParam0->f_22;
	Global_1904087->f_24.f_16 = { uParam0->f_12 };
	Global_1904087->f_24.f_25 = uParam0->f_23;
	Global_1904087->f_24.f_24 = uParam0->f_20;
	func_2294(uParam0, &(Global_1904087->f_24.f_24));
	if (!func_1956(&(Global_1904087->f_24), 0, 1))
	{
		return false;
	}
	return true;
}

bool func_1953(var uParam0)
{
	Var0.f_9 = -1591664384;
	if (!func_1251(*uParam0, &Var0, 0, 0, -1))
	{
		return false;
	}
	Var0.f_14 = uParam0->f_11;
	Var0.f_15 = { uParam0->f_12 };
	func_2294(uParam0, &(Var0.f_23));
	return func_1959(&Var0, 0, 0);
}

bool func_1954(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!func_1414(iParam0, iParam1, iParam2, iParam3))
	{
		return false;
	}
	if (iParam0->f_9 == 1782082944)
	{
		return false;
	}
	if (func_1795(iParam0, iParam0, bParam4))
	{
		return true;
	}
	return false;
}

void func_1955(var uParam0, int iParam1)
{
	if (!func_1416(uParam0, iParam1))
	{
		return;
	}
	func_1098(uParam0, iParam1);
}

bool func_1956(int iParam0, bool bParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(iParam0))
	{
		return false;
	}
	if (_0x375f5870a7b8bec1(&(iParam0->f_16)))
	{
		StringCopy(&(iParam0->f_16), func_1801(), 64);
	}
	if (func_1390(bParam2))
	{
		if (!_0xd80a8854db5cfba5(func_540(bParam2), iParam0, iParam0, 29))
		{
			return false;
		}
	}
	else
	{
		Var0.f_9 = 1;
		Var0.f_11 = -1591664384;
		Var0 = { func_1871(iParam0, 0) };
		Var0.f_16 = { iParam0->f_16 };
		Var0.f_25 = iParam0->f_27;
		Var0.f_26 = iParam0->f_28;
		Var0.f_24 = iParam0->f_25;
		Var0.f_27 = iParam0->f_24;
		if (func_1866(-1230526146, &Var0, bParam1) == -1)
		{
			return false;
		}
	}
	return true;
}

void func_1957(int iParam0, int iParam1)
{
	if (func_1416(iParam0, iParam1))
	{
		return;
	}
	func_577(iParam0, iParam1);
}

bool func_1958(int iParam0, int iParam1, int iParam2, int iParam3, bool bParam4)
{
	if (iParam2 < 0)
	{
		return false;
	}
	if (iParam1 < 0 || iParam1 >= iParam3)
	{
		return false;
	}
	if (!_0x82fa24c3d3fcd9b7(iParam2, iParam1, iParam0))
	{
		return false;
	}
	if (!func_1415(iParam0, iParam0, bParam4))
	{
		return false;
	}
	return true;
}

bool func_1959(int iParam0, bool bParam1, bool bParam2)
{
	if (!_0xb881ca836cc4b6d4(iParam0))
	{
		return false;
	}
	if (func_1390(bParam2))
	{
		if (!_0xd80a8854db5cfba5(func_540(bParam2), iParam0, iParam0, 24))
		{
			return false;
		}
	}
	else
	{
		Var0.f_9 = 1;
		Var0.f_11 = -1591664384;
		Var0 = { func_1871(iParam0, 0) };
		Var0.f_16 = { iParam0->f_15 };
		Var0.f_24 = iParam0->f_23;
		if (func_1868(-1230526146, &Var0, bParam1) == -1)
		{
			return false;
		}
	}
	return true;
}

int func_1960(int iParam0)
{
	if (iParam0 == 395262693 || iParam0 == -933924539)
	{
		return 482206342;
	}
	return Global_524288->f_40400;
}

int func_1961(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case -504335712:
			if (func_2295(iParam1))
			{
				iVar0 = 1;
			}
			else
			{
				iVar0 = 2;
			}
			break;
		case 395262693:
			iVar0 = 2;
			break;
		case -933924539:
			iVar0 = 0;
			break;
		default:
			iVar0 = 3;
			break;
	}
	return iVar0;
}

int func_1962()
{
	return Global_1940311->f_242.f_1185;
}

bool func_1963(int iParam0)
{
	if (iParam0 == 255)
	{
		return Global_1102219->f_16;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return false;
	}
	return (*Global_1100469)[iParam0]->f_16;
}

int func_1964(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6)
{
	if (!network_is_handle_valid(&uParam0))
	{
		return 1;
	}
	if (!network_is_gamer_in_my_session(&uParam0))
	{
		return 2;
	}
	iVar0 = network_get_player_from_gamer_handle(&uParam0);
	if (!_network_is_player_index_valid(iVar0))
	{
		return 3;
	}
	iVar1 = iVar0;
	if (!network_is_handle_valid(&((*Global_1145091)[iVar1]->f_1)))
	{
		return 5;
	}
	if (!network_are_handles_the_same(&uParam0, &((*Global_1145091)[iVar1]->f_1)))
	{
		return 4;
	}
	return 0;
}

int func_1965()
{
	return Global_1139381->f_5079.f_325;
}

int func_1966(int iParam0, int iParam1)
{
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return -1;
	}
	if (iParam1 <= -1)
	{
		return -1;
	}
	return &(Global_1139381->f_5079[iParam0]->f_5[iParam1]);
}

int func_1967(int iParam0)
{
	switch (iParam0)
	{
		case 1:
		default:
			return 2;
			return 2;
		case 2:
			return 3;
	}
}

void func_1968(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		return;
	}
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	Global_1139381->f_5079[iParam0]->f_5[iParam1] = iParam2;
}

void func_1969(int iParam0, int iParam1, int iParam2)
{
	if (iParam1 <= -1)
	{
		return;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return;
	}
	(*Global_1139381->f_5079[iParam0])[iParam1] = iParam2;
}

int func_1970(int iParam0, int iParam1)
{
	if (iParam1 <= -1)
	{
		return 0;
	}
	if (iParam0 < 0 || iParam0 >= 32)
	{
		return 0;
	}
	iVar0 = int_to_playerindex(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return 0;
	}
	return Global_1139381->f_5079[iParam0][iParam1];
}

void func_1971(var uParam0)
{
	vVar0 = -1;
	vVar0.f_1 = get_cloud_time_as_int();
	switch (*uParam0)
	{
		case 0:
			vVar0.x = 0;
			_0x31010318ba9897ac(&(vVar0.f_2), network_player_id_to_int());
			func_2296(vVar0);
			break;
		case 1:
			vVar0.x = uParam0->f_1;
			_0x20f4cb76689acdbc(&(vVar0.f_2));
			func_2296(vVar0);
			if (!uParam0->f_3)
			{
			}
			else
			{
				Var6.f_4 = 0;
				Var6.f_6 = uParam0->f_1;
				Var6.f_5 = *uParam0;
				Var6.f_7 = uVar4;
				iVar3 = 0;
				iVar3 = 0;
				while (iVar3 < 32)
				{
					if (!network_is_player_active(&(Global_1296859->f_154[iVar3])))
					{
					}
					else if (&Global_1296859->f_154[iVar3] == Global_1296859->f_10)
					{
					}
					else
					{
						_0x31010318ba9897ac(&uVar5, &(Global_1296859->f_154[iVar3]));
					}
					iVar3++;
				}
				func_2297(&Var6, uVar5);
				Jump @392; //curOff = 221
				if (!_0x179a6f0ee2e79026(&(uParam0->f_2)))
				{
					return;
				}
				vVar0.x = uParam0->f_1;
				vVar0.f_2 = uParam0->f_2;
				func_2296(vVar0);
				if (!uParam0->f_3)
				{
				}
				else
				{
					Var14.f_4 = 0;
					Var14.f_6 = uParam0->f_1;
					Var14.f_5 = *uParam0;
					Var14.f_7 = uParam0->f_2;
					iVar3 = 0;
					iVar3 = 0;
					while (iVar3 < 32)
					{
						if (!network_is_player_active(&(Global_1296859->f_154[iVar3])))
						{
						}
						else if (&Global_1296859->f_154[iVar3] == Global_1296859->f_10)
						{
						}
						else
						{
							_0x31010318ba9897ac(&uVar5, &(Global_1296859->f_154[iVar3]));
						}
						iVar3++;
					}
					func_2297(&Var14, uVar5);
				}
			}
			default:
				break;
	}
}

bool func_1972(var uParam0, int iParam1)
{
	return (uParam0->f_3 && iParam1) != 0;
}

int func_1973(char* sParam0, var uParam1, int iParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, int iParam8)
{
	if (!network_is_handle_valid(&uParam1))
	{
		return 1;
	}
	StringCopy(sParam0, "", 128);
	switch (iParam8)
	{
		case 0:
			StringCopy(sParam0, _0xb5c4b18b12a2af23(&uParam1, iParam8), 128);
			return 4;
		case 1:
		case 2:
			if (!network_is_gamer_in_my_session(&uParam1))
			{
				return 1;
			}
			return func_1437(sParam0, network_get_player_from_gamer_handle(&uParam1), iParam8);
		default:
			break;
	}
	return 3;
}

char* func_1974(int iParam0)
{
	_int_to_string(iParam0, "%i", &Var0);
	return func_2298(Var0);
}

void func_1975(var uParam0, var uParam1)
{
	*uParam0 = *uParam1;
	uParam0->f_27 = uParam1->f_27;
	uParam0->f_28 = uParam1->f_28;
	_copy_memory(&(uParam0->f_1), &(uParam1->f_1), 7);
	uParam0->f_25 = uParam1->f_25;
	uParam0->f_24 = uParam1->f_24;
	uParam0->f_8 = { uParam1->f_8 };
}

void func_1976(var uParam0, struct<5> Param1, bool bParam6)
{
	_databinding_write_data_bool(uParam0->f_1, Param1);
	if (Param1 || bParam6)
	{
		if (Param1.f_1)
		{
			_databinding_write_data_string(uParam0->f_2, "POSSE_LEADER");
		}
		else
		{
			_databinding_write_data_string(uParam0->f_2, "POSSE_HIRED_MEMBER");
		}
		_databinding_write_data_string(uParam0->f_3, Param1.f_2);
		_databinding_write_data_string(uParam0->f_4, Param1.f_3);
		_databinding_write_data_hash_string(uParam0->f_5, Param1.f_4);
	}
}

char* func_1977(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15)
{
	return _0xd8402b858f4ddd88(&uParam0, get_length_of_literal_string(&uParam0));
}

void func_1978(var uParam0, var uParam1, var uParam2)
{
	if (func_576(uParam2, 4096))
	{
		func_2299(uParam1, *uParam0);
	}
	if (func_576(uParam2, 65536))
	{
		_databinding_write_data_hash_string(uParam1->f_3, uParam0->f_2);
	}
	if (func_576(uParam2, 128))
	{
		_databinding_write_data_hash_string(uParam1->f_18, uParam0->f_16);
		_databinding_write_data_hash_string(uParam1->f_19, uParam0->f_17);
		_databinding_write_data_bool(uParam1->f_20, uParam0->f_18);
	}
	if (func_576(uParam2, 256))
	{
		_databinding_write_data_hash_string(uParam1->f_21, uParam0->f_19);
		_databinding_write_data_hash_string(uParam1->f_22, uParam0->f_20);
		_databinding_write_data_bool(uParam1->f_23, uParam0->f_21);
	}
	_databinding_write_data_hash_string(uParam1->f_24, uParam0->f_22);
	_databinding_write_data_hash_string(uParam1->f_25, uParam0->f_23);
	_databinding_write_data_bool(uParam1->f_26, uParam0->f_24);
	if (func_576(uParam2, 2048))
	{
		_databinding_write_data_string(uParam1->f_27, &(uParam0->f_25));
	}
	if (func_576(uParam2, 512))
	{
		_databinding_write_data_string(uParam1->f_28, &(uParam0->f_41));
		_databinding_write_data_bool(uParam1->f_29, uParam0->f_57);
		_databinding_write_data_bool(uParam1->f_30, uParam0->f_58);
	}
	if (func_576(uParam2, 1024))
	{
		_databinding_write_data_hash_string(uParam1->f_31, uParam0->f_59);
		_databinding_write_data_hash_string(uParam1->f_32, uParam0->f_60);
		_databinding_write_data_bool(uParam1->f_33, uParam0->f_61);
	}
	if (func_576(uParam2, 64))
	{
		_databinding_write_data_bool(uParam1->f_34, uParam0->f_62);
	}
	if (func_576(uParam2, 32))
	{
		if (func_34(uParam0->f_79))
		{
			_0x422179c7f6ad9304(uParam1->f_36, &(uParam0->f_79));
		}
	}
	if (func_576(uParam2, 1))
	{
		_databinding_write_data_bool(uParam1->f_9, uParam0->f_8);
		_databinding_write_data_bool(uParam1->f_10, uParam0->f_9);
		_databinding_write_data_hash_string(uParam1->f_8, uParam0->f_7);
	}
	if (func_576(uParam2, 2))
	{
		_databinding_write_data_hash_string(uParam1->f_42, uParam0->f_66);
		_databinding_write_data_bool(uParam1->f_40, uParam0->f_64);
		_databinding_write_data_bool(uParam1->f_41, uParam0->f_65);
		_databinding_write_data_hash_string(uParam1->f_39, uParam0->f_63);
	}
	if (func_576(uParam2, 4))
	{
		_databinding_write_data_hash_string(uParam1->f_46, uParam0->f_70);
	}
	if (func_576(uParam2, 4) || func_576(uParam2, 16384))
	{
		_databinding_write_data_bool(uParam1->f_44, uParam0->f_68);
		_databinding_write_data_bool(uParam1->f_45, uParam0->f_69);
		_databinding_write_data_hash_string(uParam1->f_43, uParam0->f_67);
	}
	if (func_576(uParam2, 8))
	{
		_databinding_write_data_hash_string(uParam1->f_50, uParam0->f_74);
	}
	if (func_576(uParam2, 8) || func_576(uParam2, 32768))
	{
		_databinding_write_data_bool(uParam1->f_48, uParam0->f_72);
		_databinding_write_data_bool(uParam1->f_49, uParam0->f_73);
		_databinding_write_data_hash_string(uParam1->f_47, uParam0->f_71);
	}
	if (func_576(uParam2, 16))
	{
		_databinding_write_data_hash_string(uParam1->f_54, uParam0->f_78);
		_databinding_write_data_hash_string(uParam1->f_51, uParam0->f_75);
	}
	if (func_576(uParam2, 16) || func_576(uParam2, 131072))
	{
		_databinding_write_data_bool(uParam1->f_52, uParam0->f_76);
		_databinding_write_data_bool(uParam1->f_53, uParam0->f_77);
	}
}

void func_1979(var uParam0, var uParam1, char[32] cParam2, struct<80> Param10, var uParam90, var uParam91, var uParam92, var uParam93, var uParam94, var uParam95, var uParam96, var uParam97)
{
	func_1250(uParam0, uParam1, cParam2, Param10);
	uParam0->f_18 = _databinding_add_data_hash(*uParam0, func_58(5), Param10.f_16);
	uParam0->f_19 = _databinding_add_data_hash(*uParam0, func_58(6), Param10.f_17);
	uParam0->f_20 = _databinding_add_data_bool(*uParam0, func_58(7), Param10.f_18);
	uParam0->f_21 = _databinding_add_data_hash(*uParam0, func_58(9), Param10.f_19);
	uParam0->f_22 = _databinding_add_data_hash(*uParam0, func_58(10), Param10.f_20);
	uParam0->f_23 = _databinding_add_data_bool(*uParam0, func_58(11), Param10.f_21);
	uParam0->f_24 = _databinding_add_data_hash(*uParam0, func_58(12), Param10.f_22);
	uParam0->f_25 = _databinding_add_data_hash(*uParam0, func_58(13), Param10.f_23);
	uParam0->f_26 = _databinding_add_data_bool(*uParam0, func_58(14), Param10.f_24);
	uParam0->f_27 = _databinding_add_data_string(*uParam0, func_58(15), &(Param10.f_25));
	uParam0->f_28 = _databinding_add_data_string(*uParam0, func_58(17), &(Param10.f_41));
	uParam0->f_29 = _databinding_add_data_bool(*uParam0, func_58(19), Param10.f_57);
	uParam0->f_30 = _databinding_add_data_bool(*uParam0, func_58(20), Param10.f_58);
	uParam0->f_31 = _databinding_add_data_hash(*uParam0, func_58(21), Param10.f_59);
	uParam0->f_32 = _databinding_add_data_hash(*uParam0, func_58(22), Param10.f_60);
	uParam0->f_33 = _databinding_add_data_bool(*uParam0, func_58(23), Param10.f_61);
	uParam0->f_34 = _databinding_add_data_bool(*uParam0, func_58(49), Param10.f_62);
	if (network_is_handle_valid(&(Param10.f_79)))
	{
		_copy_memory(&Var0, &(Param10.f_79), 7);
	}
	else
	{
		Var0 = { func_650() };
	}
	uParam0->f_36 = _0x294af5323f44b053(*uParam0, func_58(29), &Var0);
	uParam0->f_37 = _databinding_add_data_int(*uParam0, func_58(27), -1);
	uParam0->f_38 = _databinding_add_data_int(*uParam0, func_58(28), -1);
	uParam0->f_39 = _databinding_add_data_hash(*uParam0, func_58(72), Param10.f_63);
	uParam0->f_40 = _databinding_add_data_bool(*uParam0, func_58(73), Param10.f_64);
	uParam0->f_41 = _databinding_add_data_bool(*uParam0, func_58(74), Param10.f_65);
	uParam0->f_42 = _databinding_add_data_hash(*uParam0, func_58(75), Param10.f_66);
	uParam0->f_43 = _databinding_add_data_hash(*uParam0, func_58(64), Param10.f_67);
	uParam0->f_44 = _databinding_add_data_bool(*uParam0, func_58(65), Param10.f_68);
	uParam0->f_45 = _databinding_add_data_bool(*uParam0, func_58(66), Param10.f_69);
	uParam0->f_46 = _databinding_add_data_hash(*uParam0, func_58(67), Param10.f_70);
	uParam0->f_47 = _databinding_add_data_hash(*uParam0, func_58(68), Param10.f_71);
	uParam0->f_48 = _databinding_add_data_bool(*uParam0, func_58(69), Param10.f_72);
	uParam0->f_49 = _databinding_add_data_bool(*uParam0, func_58(70), Param10.f_73);
	uParam0->f_50 = _databinding_add_data_hash(*uParam0, func_58(71), Param10.f_74);
	uParam0->f_51 = _databinding_add_data_hash(*uParam0, func_58(76), Param10.f_75);
	uParam0->f_52 = _databinding_add_data_bool(*uParam0, func_58(77), Param10.f_76);
	uParam0->f_53 = _databinding_add_data_bool(*uParam0, func_58(78), Param10.f_77);
	uParam0->f_54 = _databinding_add_data_hash(*uParam0, func_58(79), Param10.f_78);
}

bool func_1980()
{
	if (Global_1194053->f_502 != 0 && (get_game_timer() - Global_1194053->f_502) < 15000)
	{
		return false;
	}
	iVar0 = func_387(-2040602682);
	if (!func_1583(-2040602682, 1, iVar0, 1))
	{
		sVar1 = _create_var_string(2, "NG_PP_POOR", func_388(-2040602682, 0, iVar0));
		func_626(sVar1, 10000, 0, 0, 0, 1);
		return false;
	}
	iVar2 = _0xc088ff658b2e51da();
	if (iVar2 >= 5)
	{
		return false;
	}
	return true;
}

int func_1981(int iParam0)
{
	iVar0 = 0;
	iVar0 = iParam0;
	return iVar0;
}

int func_1982(int iParam0)
{
	if (!network_is_player_active(iParam0))
	{
		return -1;
	}
	if (!_0x72b2e00c9bac6789(&(Global_1131196->f_1091), iParam0))
	{
		return -1;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if ((*Global_1131196)[iVar0]->f_9 == iParam0 && Global_1131196[iVar0] != 3)
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_1983(int iParam0)
{
	if (iParam0 == 0)
	{
		_0x0a04a07bc3074edb(1);
		if (_0xc08fff658b2e51da())
		{
			_0x0a04a07bc3074edb(1);
			func_648(1);
			return true;
		}
	}
	else
	{
		_0xc08aff658b2e51da(&iVar0);
		if (iParam0 == iVar0)
		{
			_0x0a04a07bc3074edb(1);
		}
		if (_0xc08fff658b2e51db(iParam0))
		{
			func_648(1);
			return true;
		}
	}
	return false;
}

int func_1984(int iParam0)
{
	if (!_0xd6f6acf4392187fb(iParam0))
	{
		return 0;
	}
	iVar0 = _0x4be6c13a45cca8ec(iParam0);
	if (!network_is_player_active(iVar0))
	{
		return 0;
	}
	return Global_1195550[iVar0];
}

void func_1985(int iParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar2 = func_2300(iParam1);
	iVar3 = 255;
	func_789();
	iVar0 = 0;
	while (iVar0 < iVar2)
	{
		if (!_0x8593a8cb0ed2c3b4(iVar0))
		{
		}
		else
		{
			iVar3 = _0xd39d32eb3b52dd83(iVar0);
			if (!_network_is_player_index_valid(iVar3))
			{
			}
			else
			{
				Var4 = { func_573(iVar3) };
				if (!func_34(Var4))
				{
				}
				else
				{
					func_882(&Var4, get_player_name(iVar3), 0, iParam0);
					iVar1++;
				}
			}
		}
		iVar0++;
	}
	iVar11 = (iVar2 - iVar1);
	iVar0 = 0;
	if (iVar11 > 0)
	{
		iVar0 = 0;
		while (iVar0 < iVar11)
		{
			func_1448(iParam0);
			iVar1++;
			iVar0++;
		}
	}
}

bool func_1986(int iParam0)
{
	iVar0 = network_get_player_index_from_ped(get_ped_index_from_entity_index(func_2301()));
	return iParam0 == iVar0;
}

bool func_1987(int iParam0)
{
	if (!_network_is_player_index_valid(iParam0))
	{
		return true;
	}
	iVar0 = iParam0;
	if (func_2(iVar0))
	{
		return true;
	}
	if (func_23(31, iVar0))
	{
		return true;
	}
	if (func_703(262144, iVar0))
	{
		return true;
	}
	return false;
}

bool func_1988(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 0:
			return false;
		case 3:
		case 4:
		case 6:
		case 7:
		case 12:
			*uParam2 = 1210712530;
			*uParam1 = 566347780;
			return true;
		case 9:
			*uParam2 = 1210712530;
			*uParam1 = -1289525013;
			return true;
		case 11:
			*uParam2 = 1210712530;
			*uParam1 = 160330423;
			return true;
		case 10:
			*uParam2 = 1210712530;
			*uParam1 = -907357718;
			return true;
		default:
			break;
	}
	return false;
}

bool func_1989(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 1:
			*uParam2 = 1210712530;
			*uParam1 = -1289525013;
			return true;
		case 2:
			*uParam2 = 1210712530;
			*uParam1 = 160330423;
			return true;
		case 3:
			*uParam2 = 1210712530;
			*uParam1 = -907357718;
			return true;
		case 5:
		case 6:
			*uParam2 = 1210712530;
			*uParam1 = 566347780;
			return true;
		default:
			break;
	}
	return false;
}

bool func_1990(int iParam0)
{
	return (Global_265377->f_124517.f_135 && iParam0) != 0;
}

bool func_1991(var uParam0, char* sParam1)
{
	if (!network_is_handle_valid(uParam0))
	{
		return false;
	}
	if (!network_is_gamer_in_my_session(uParam0))
	{
		return false;
	}
	iVar0 = func_2302(network_get_player_from_gamer_handle(uParam0));
	if (iVar0 > -1)
	{
		StringCopy(sParam1, _create_var_string(10, "PLAYER_ENTRY_PARLEY_REMAINING", func_1128(func_1131(iVar0, 0, 0, 0, 0, 0), 109029619)), 128);
		return true;
	}
	return false;
}

bool func_1992(int iParam0, char* sParam1)
{
	if (func_1103())
	{
		StringCopy(sParam1, _create_var_string(2, "NM_OPTION_DISABLED_INTRO_TOOLTIP"), 128);
	}
	else
	{
		switch (iParam0)
		{
			case 1:
				StringCopy(sParam1, _create_var_string(2, "PLAYER_ENTRY_SESSION_INVITE_SENT"), 128);
				return true;
			case 2:
				StringCopy(sParam1, _create_var_string(2, "PLAYER_ENTRY_SESSION_INVITE_ACCEPTED"), 128);
				return true;
			case 3:
				StringCopy(sParam1, _create_var_string(2, "PLAYER_ENTRY_SESSION_INVITE_REJECTED"), 128);
				return true;
			default:
				break;
		}
	}
	return false;
}

int func_1993(int iParam0)
{
	return Global_1128574[iParam0];
}

int func_1994(int iParam0, int iParam1)
{
	iVar0 = _0x901e0dc25080c8b9(iParam0);
	if (func_1520(iParam1))
	{
		if (iVar0 == func_1522(iParam1))
		{
			return iParam1;
		}
	}
	iVar1 = 0;
	while (iVar1 <= 31)
	{
		if (iVar0 == func_1522(iVar1))
		{
			return iVar1;
		}
		iVar1++;
	}
	return -1;
}

void func_1995(int iParam0)
{
	if (!func_1520(iParam0))
	{
		return;
	}
	(*Global_1128574)[network_player_id_to_int()] = iParam0;
}

bool func_1996(var uParam0, int iParam1)
{
	if (iParam1 == 0)
	{
		return false;
	}
	if (network_are_handles_the_same(uParam0, &(Global_1296859->f_1)))
	{
		iVar0 = 0;
		while (iVar0 <= 4)
		{
			if (&Global_1194053->f_503[iVar0] == iParam1)
			{
				return true;
			}
			iVar0++;
		}
	}
	else
	{
		iVar0 = 0;
		while (iVar0 <= (_0xc084ff658b2e61da(uParam0) - 1))
		{
			if (_0xc084ff658b2e81da(uParam0, iVar0, &iVar1) && iVar1 == iParam1)
			{
				return true;
			}
			iVar0++;
		}
	}
	return false;
}

void func_1997(int iParam0)
{
	if (iParam0 >= 0 && iParam0 < 10)
	{
		*Global_1940311->f_1433.f_1316.f_10[iParam0] = { Var0 };
	}
}

bool func_1998(int iParam0)
{
	if (func_1020(iParam0))
	{
		iVar0 = _0x59fa676177dbe4c9(iParam0);
		return ((((iVar0 == 4 || iVar0 == 0) || iVar0 == 3) || iVar0 == 5) || iVar0 == 2);
	}
	return false;
}

char* func_1999(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NM_STABLE_FILTER_ALL_HORSES";
		case 1:
			return "NM_STABLE_FILTER_GENERIC_HORSE";
		case 2:
			return "NM_STABLE_FILTER_DRAFT_HORSE";
		case 3:
			return "NM_STABLE_FILTER_RACE_HORSE";
		case 4:
			return "NM_STABLE_FILTER_WAR_HORSE";
		case 5:
			return "NM_STABLE_FILTER_WORK_HORSE";
		case 6:
			return "NM_STABLE_FILTER_SUPERIOR_HORSE";
		default:
			break;
	}
	return "NM_STABLE_FILTER_ALL_HORSES";
}

int func_2000(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 4)
	{
		uVar1 = iVar0 + 1;
		iVar2 = func_2303(iParam0, uVar1);
		if (iParam1 < iVar2)
		{
			return iVar0;
		}
		iVar0++;
	}
	return 4;
}

int func_2001()
{
	return 0;
}

bool func_2002(int iParam0, int iParam1, int iParam2)
{
	if (!func_2304(iParam1))
	{
		return false;
	}
	if (!_0xb881ca836cc4b6d4(iParam0))
	{
		return false;
	}
	if (!func_1400(iParam0, iParam2))
	{
		return false;
	}
	return true;
}

var func_2003(int iParam0, int iParam1)
{
	return &(Global_17411.f_55.f_61.f_41[iParam0]->f_29[iParam1]);
}

int func_2004()
{
	return 1;
}

bool func_2005(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 0:
			*iParam1 = 0;
			break;
		case 1:
			*iParam1 = 1;
			break;
		default:
			return false;
	}
	return true;
}

bool func_2006(int iParam0, int iParam1, var uParam2)
{
	if (!does_entity_exist(iParam0))
	{
		return false;
	}
	if (!does_entity_exist(iParam1))
	{
		return false;
	}
	iVar3 = -1;
	iVar4 = (get_vehicle_max_number_of_passengers(iParam0) - 1);
	iVar2 = iVar3;
	while (iVar2 <= iVar4)
	{
		iVar1 = iVar2;
		iVar0 = _0xffec4b0a1a3ed515(iParam0, iVar1);
		if (!does_entity_exist(iVar0))
		{
		}
		else if (iVar0 == iParam1)
		{
			*uParam2 = iVar1;
			return true;
		}
		iVar2++;
	}
	return false;
}

char* func_2007(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "NM_STABLE_FILTER_ALL_COACHES";
		default:
			break;
	}
	return "NM_STABLE_FILTER_ALL_COACHES";
}

int func_2008(int iParam0)
{
	switch (iParam0)
	{
		case 1357161730:
			iVar0 = -1894112717;
			break;
		case 1581179681:
			iVar0 = 936171928;
			break;
		case -215258135:
			iVar0 = -1851879392;
			break;
		case -987049424:
			iVar0 = -10370486;
			break;
		case 892234183:
			iVar0 = -615306425;
			break;
		case -1554232707:
			iVar0 = 319325517;
			break;
		case -682748:
			iVar0 = -1072345087;
			break;
		case 1538293636:
			iVar0 = 1065052233;
			break;
		case -1992167326:
			iVar0 = 1228822029;
			break;
		case -1884014371:
			iVar0 = -1485503520;
			break;
		case -1871413878:
			iVar0 = -1238611766;
			break;
		case 1483778247:
			iVar0 = -1298021330;
			break;
		case -724534761:
			iVar0 = -1365950789;
			break;
		default:
			iVar0 = -1894112717;
			break;
	}
	return iVar0;
}

int func_2009(vector3 vParam0, var uParam3)
{
	iVar1 = func_1788(vParam0);
	if (func_2305(iVar1, &iVar2))
	{
		iVar0 = 0;
		while (iVar0 <= (*uParam3 - 1))
		{
			if (&uParam3->f_1[iVar0] == iVar2)
			{
				return iVar2;
			}
			iVar0++;
		}
	}
	fVar6 = 100000f;
	iVar0 = 0;
	while (iVar0 <= (*uParam3 - 1))
	{
		vVar3 = { func_2306(&(uParam3->f_1[iVar0])) };
		fVar7 = vdist(vVar3, vParam0);
		if (fVar7 < fVar6)
		{
			fVar6 = fVar7;
			iVar2 = &uParam3->f_1[iVar0];
		}
		iVar0++;
	}
	return iVar2;
}

void func_2010(var uParam0, struct<22> Param1)
{
	func_2299(uParam0, Param1);
	_databinding_write_data_string(uParam0->f_18, Param1.f_16);
	_databinding_write_data_string(uParam0->f_19, Param1.f_17);
	_databinding_write_data_hash_string(uParam0->f_20, Param1.f_18);
	_databinding_write_data_hash_string(uParam0->f_21, Param1.f_19);
	_databinding_write_data_hash_string(uParam0->f_22, Param1.f_20);
	_databinding_write_data_hash_string(uParam0->f_23, Param1.f_21);
}

void func_2011(var uParam0, float fParam1)
{
	if (!_0x179a6f0ee2e79026(&fParam1))
	{
		return;
	}
	*uParam0 = 184;
	uParam0->f_1 = player_id();
	uParam0->f_2 = get_network_time_accurate();
	trigger_script_event(1, uParam0, 12, 14, &fParam1);
}

bool func_2012()
{
	if (func_1112(func_832(0)) && !func_1836())
	{
		return true;
	}
	return false;
}

bool func_2013()
{
	return func_1788(Global_35) != -1;
}

void func_2014()
{
	sVar0 = func_488(Global_1108365->f_935.f_27);
	Global_1108365->f_935.f_18 = 0;
	if (!are_strings_equal(sVar0, _databinding_read_data_string(Global_1940311->f_1433.f_54.f_5)))
	{
		func_70(sVar0, 1105014447);
	}
}

bool func_2015()
{
	if (is_ped_in_any_boat(Global_34))
	{
		return true;
	}
	iVar0 = func_1787(Global_34);
	if (does_entity_exist(iVar0))
	{
		if (is_ped_swimming(iVar0))
		{
			return true;
		}
	}
	return is_ped_swimming(Global_34);
}

bool func_2016(bool bParam0, int iParam1)
{
	iVar0 = 0;
	iVar1 = 0;
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar2 = int_to_playerindex(iVar0);
		if (!_network_is_player_index_valid(iVar2) || !network_is_player_active(iVar2))
		{
		}
		else
		{
			if ((func_2307(iVar2) && func_1112((*Global_1056141)[iVar0]->f_2)) || !func_1112((*Global_1056141)[iVar0]->f_2))
			{
				if (bParam0 && !_0x9be7dcb22d32ccbe(Global_1296859->f_15, iVar2))
				{
				}
				else
				{
					iVar1++;
					if (iVar1 >= iParam1)
					{
						return true;
					}
				}
				iVar0++;
				return false;
			}
		}
	}
}

bool func_2017()
{
	vVar0 = { _get_waypoint_coords() };
	func_960(&(Global_1108365->f_935.f_36), 1);
	Global_1108365->f_935.f_20 = 0;
	if (Global_1108365->f_935.f_27 == -1)
	{
		return false;
	}
	if (func_713(vVar0))
	{
		func_2014();
		return false;
	}
	iVar3 = 0;
	while (iVar3 <= 31)
	{
		iVar4 = int_to_playerindex(iVar3);
		if ((!_network_is_player_index_valid(iVar4) || !network_is_player_active(iVar4)) || !_0x9be7dcb22d32ccbe(Global_1296859->f_15, iVar4))
		{
		}
		else if (iVar4 == player_id() && func_1034(vVar0, Global_35) <= (150f * 2f))
		{
			Global_1108365->f_935.f_20 = 1;
			func_2014();
			return false;
		}
		else if (func_1034(vVar0, func_1234(iVar4)) <= 150f)
		{
			Global_1108365->f_935.f_20 = 1;
			func_2014();
			return false;
		}
		iVar3++;
	}
	vVar0.f_2 = _get_heightmap_bottom_z_for_position(vVar0.x, vVar0.y);
	request_collision_at_coord(vVar0);
	if (_0x6bfbdc46139c45ab(vVar0) && func_2308(&vVar0, 9999f))
	{
	}
	else
	{
		Global_1108365->f_935.f_4++;
		if (Global_1108365->f_935.f_4 > 15)
		{
			Global_1108365->f_935.f_24 = { 0f, 0f, 0f };
			Global_1108365->f_935.f_4 = 0;
			func_2014();
		}
		return false;
	}
	_0xcf213a5fc3abfc08(vVar0.x, vVar0.y, (50f * 2f));
	vVar5 = { 50f, 50f, 50f };
	if (!is_navmesh_loaded_in_area(vVar0 - vVar5, vVar0 + vVar5))
	{
		Global_1108365->f_935.f_4++;
		if (Global_1108365->f_935.f_4 > 15)
		{
			Global_1108365->f_935.f_24 = { 0f, 0f, 0f };
			Global_1108365->f_935.f_4 = 0;
			func_2014();
		}
		return false;
	}
	Global_1108365->f_935.f_4 = 0;
	if (!get_safe_coord_for_ped(vVar0, false, &(Global_1108365->f_935.f_24), 16))
	{
		Global_1108365->f_935.f_24 = { 0f, 0f, 0f };
		func_2014();
		return false;
	}
	func_2014();
	return true;
}

bool func_2018(int iParam0)
{
	if (func_2012())
	{
		return false;
	}
	iVar0 = -1;
	iVar1 = func_1789(iParam0, player_id(), &iVar0);
	if (iVar1 != 0)
	{
		return false;
	}
	iVar2 = 0;
	if (!func_2309(iParam0))
	{
		iVar3 = func_2175(func_2310(iParam0));
		if (iVar3 == -1)
		{
			return false;
		}
		iVar2 = (iVar3 - 2);
		iVar2 = func_2311(iParam0, iVar2);
	}
	else
	{
		iVar2 = func_1262(iParam0, Global_35);
		iVar1 = func_1790(iParam0, iVar2);
		if (iVar1 != 0)
		{
			return false;
		}
	}
	iVar4 = func_1263(iParam0, iVar2);
	iVar1 = func_1791(iVar4);
	if (iVar1 != 0)
	{
		return false;
	}
	Var5 = { func_1264(iParam0, iVar2, iVar4) };
	iVar1 = func_1792(Var5);
	if (iVar1 != 0)
	{
		return false;
	}
	return true;
}

void func_2019(var uParam0, int iParam1)
{
	if (!func_415(*uParam0, iParam1))
	{
		return;
	}
	func_628(uParam0, iParam1);
}

void func_2020(var uParam0, int iParam1)
{
	if (func_415(*uParam0, iParam1))
	{
		return;
	}
	func_611(uParam0, iParam1);
}

int func_2021(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return -963477619;
		case 1:
			return 1891514641;
		default:
			break;
	}
	return 636925055;
}

char* func_2022(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return _create_var_string(2, "NFT_VOUCHER_FOOTER");
		case 4:
			return _create_var_string(2, "NM_FR_CHARACTER_REROLL_FAIL_INSUFFICIENT_FUND");
		case 5:
			return _create_var_string(2, "NM_FR_CHARACTER_REROLL_FAIL_CONTENT");
		case 6:
			return _create_var_string(2, "NM_FR_CHARACTER_REROLL_FAIL_GENERIC");
		default:
			break;
	}
	return _create_var_string(2, "NM_FR_CHARACTER_REROLL_INFO");
}

bool func_2023(int iParam0, int iParam1, var uParam2)
{
	iVar1 = _0x15e90b6a993017aa();
	if (!func_2312(iParam0))
	{
		return false;
	}
	if (iVar1 == 0)
	{
		return false;
	}
	iVar0 = 0;
	while (iVar0 < iVar1)
	{
		if (_0x10342cc82e8356e9(iVar0, uParam2))
		{
			if (uParam2->f_2 == iParam1)
			{
				func_2313(uParam2->f_1, iParam0);
				if (*uParam2 == 1)
				{
					if (uParam2->f_3 > Global_1139108->f_7)
					{
						return true;
					}
				}
				else
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

char* func_2024(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (iParam2 != 0)
	{
		iVar0 = (iParam2 - Global_1139108->f_7);
		if (iVar0 < 0)
		{
			iVar0 = 0;
		}
	}
	switch (iParam1)
	{
		case -1385120212:
		case -1249239171:
		case 0:
			return "";
		case -1695230319:
			return _create_var_string(10, "NET_MG_HELP_PLAYER_CLEAN", func_2029(iParam0));
		case -1300909614:
			if (iVar0 == 0)
			{
				return "NET_MG_HELP_DAILY_PROFIT_CAP";
			}
			return _create_var_string(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_DAILY_PROFIT_CAP", func_2314(iVar0, 0, 0));
		case -1589038658:
			if (iVar0 == 0)
			{
				return "NET_MG_HELP_DAILY_BUYIN_CAP";
			}
			return _create_var_string(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_DAILY_BUYIN_CAP", func_2314(iVar0, 0, 0));
		case 1671747787:
			if (iVar0 == 0)
			{
				return _create_var_string(2, "NET_MG_HELP_PRIV_HOUR_BUYIN_CAP");
			}
			return _create_var_string(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_PRIV_HOUR_BUYIN_CAP", func_2314(iVar0, 1, 0));
		case 1053423395:
			return "NET_MG_HELP_PUB_RE_BUYIN_CAP";
		case 579389526:
			if (iVar0 == 0)
			{
				return "NET_MG_HELP_OVERALL_CAP";
			}
			return _create_var_string(42, "NET_MG_HELP_COMPOSITE", "NET_MG_HELP_OVERALL_CAP", func_2314(iVar0, 0, 0));
		case -1878199881:
			return _create_var_string(10, "NET_MG_HELP_GEO_TOGGLE", func_2029(iParam0));
		case -592991683:
			return "NET_MG_HELP_NO_PARTY_CHAT";
		case -1517426354:
			return _create_var_string(10, "NET_MG_HELP_MAINTENANCE", func_2029(iParam0));
		case -1720361368:
			return "NET_MG_HELP_BANNED";
		case -1166915294:
			return "NET_MG_HELP_BANNED2";
		case 1406403638:
			return "NET_MG_HELP_POSSE_LEADER_LEFT";
		case 1320901890:
			return "NET_MG_HELP_ARBITLEGAL";
		case -1700673948:
			return _create_var_string(10, "MG_FAILED_LAUNCH", func_2029(iParam0));
		case 1736016924:
			return _create_var_string(10, "NET_MG_HELP_DISCONNECTED", func_2029(iParam0));
		case -835571454:
			return _create_var_string(10, "NET_MG_HELP_NETWORK_ERROR", func_2029(iParam0));
		case -301240451:
			return _create_var_string(10, "NET_MG_HELP_SCRIPT_ERROR", func_2029(iParam0));
		case 2124908670:
			return "NET_MG_HELP_BUYIN_TIMEOUT";
		default:
			break;
	}
	return "";
}

char* func_2025(int iParam0)
{
	switch (iParam0)
	{
		case 65536:
			return _create_var_string(2, "NET_MG_HELP_PUBLIC_NO_MONEY");
		case 131072:
			return _create_var_string(2, "NET_MG_HELP_PRIVATE_NO_MONEY");
		default:
			break;
	}
	return "";
}

int func_2026(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0;
		case 1:
			return 5;
		case 2:
			return 16;
		case 3:
			return 9;
		case 4:
			return 12;
		default:
			break;
	}
	return -1;
}

char* func_2027(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "BAY";
		case 1:
			return "GRIZZLIES_DIST";
		case 2:
			return "HEN";
		case 3:
			return "HRT";
		case 4:
			return "TAL";
		default:
			break;
	}
	return "INVALID_PROPERTY";
}

float func_2028(int iParam0)
{
	return &(Global_1298378->f_6.f_17[iParam0]);
}

char* func_2029(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return "MG_BJACK";
		case 1:
			return "MG_DOMIN";
		case 2:
			return "MG_POKER";
		case 3:
			return "MG_FILLET";
		case 4:
			return "MG_MILKING_COW";
		case 5:
			return "MG_CLEAN_STALLS";
		case 6:
			return "MG_FENCE_BUILDING";
	}
	return "Unknown Minigame";
}

int func_2030(var uParam0)
{
	if (!network_is_handle_valid(uParam0))
	{
		return -1;
	}
	iVar0 = 255;
	if (!network_is_gamer_in_my_session(uParam0))
	{
		return 0;
	}
	iVar0 = network_get_player_from_gamer_handle(uParam0);
	if (!_network_is_player_index_valid(iVar0))
	{
		return 0;
	}
	if (func_836())
	{
		return 2;
	}
	if (!func_1108(player_id(), &uVar1, &uVar2, 1))
	{
		return 4;
	}
	if (func_1327(iVar0))
	{
		return 3;
	}
	if (!func_655(iVar0))
	{
		return 1;
	}
	if (func_656(iVar0))
	{
		return 6;
	}
	return 5;
}

bool func_2031(int iParam0, var uParam1, var uParam2)
{
	switch (iParam0)
	{
		case 6:
			*uParam2 = 1210712530;
			*uParam1 = -1289525013;
			return true;
		case 7:
			*uParam2 = 1210712530;
			*uParam1 = -907357718;
			return true;
		case 8:
			*uParam2 = 1210712530;
			*uParam1 = 160330423;
			return true;
		default:
			break;
	}
	return false;
}

bool func_2032(int iParam0, char* sParam1)
{
	switch (*iParam0)
	{
		case 1:
		case 2:
			StringCopy(sParam1, _create_var_string(2, "PLAYER_ON_CONTENT"), 128);
			return true;
		case 6:
			StringCopy(sParam1, _create_var_string(2, "PLAYER_ENTRY_SHACK_INVITE_SENT"), 128);
			return true;
		case 3:
			StringCopy(sParam1, _create_var_string(2, "PLAYER_ENTRY_SHACK_ALREADY_INSIDE"), 128);
			return true;
		case 4:
			StringCopy(sParam1, _create_var_string(2, "PLAYER_ENTRY_SHACK_LEADER_NOT_IN"), 128);
			return true;
		default:
			break;
	}
	return false;
}

int func_2033(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!_network_is_player_index_valid(iParam0))
		{
			return -1;
		}
	}
	return Global_1298536[iParam0];
}

void func_2034(var uParam0, float fParam1)
{
	uParam0->f_1 = (func_1622() - fParam1);
	func_2315(uParam0, 1);
	func_2316(uParam0, 2);
	uParam0->f_2 = 0f;
}

bool func_2035(vector3 vParam0, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10, var uParam11, var uParam12, var uParam13, var uParam14, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33)
{
	if (func_1040(vParam0.z, 216050813))
	{
		if (!_unlock_is_unlocked(-1387714323))
		{
			return false;
		}
	}
	return true;
}

int func_2036(int iParam0)
{
	iVar0 = iParam0;
	return func_2317(iVar0);
}

int func_2037(int iParam0)
{
	iVar0 = iParam0;
	return func_2318(iVar0);
}

int func_2038(int iParam0, bool bParam1)
{
	if (!func_968(iParam0))
	{
		return 0;
	}
	Var0 = { func_966(bParam1) };
	if (func_1104(iParam0, Var0, -1060513333, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1104(iParam0, Var0, 1317351007, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1104(iParam0, Var0, -500478573, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1104(iParam0, Var0, -806573802, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	else if (func_1104(iParam0, Var0, -1109949204, bParam1, 0, 0) >= 1)
	{
		return 1;
	}
	return 0;
}

int func_2039(int iParam0, bool bParam1)
{
	Var0 = { func_966(bParam1) };
	return func_967(Var0, func_965(iParam0), 0, bParam1);
}

bool func_2040(var uParam0)
{
	return uParam0->f_15 >= func_1661(uParam0->f_13);
}

bool func_2041(var uParam0)
{
	return _unlock_is_visible(uParam0->f_2);
}

char* func_2042(int iParam0)
{
	iVar0 = iParam0;
	return func_2319(iVar0);
}

bool func_2043(int iParam0)
{
	if (iParam0 >= 0 && iParam0 <= 2)
	{
		return true;
	}
	return false;
}

int func_2044(int iParam0, int iParam1)
{
	switch (iParam0)
	{
		case 304794100:
			switch (iParam1)
			{
				case 0:
					return -880922108;
				case 1:
					return 712437748;
				case 2:
					return -132314303;
				default:
					break;
			}
			break;
		case 1467455271:
			switch (iParam1)
			{
				case 0:
					return 1098244389;
				case 1:
					return 856704090;
				case 2:
					return -1750135398;
				default:
					break;
			}
			break;
		case -1794176813:
			switch (iParam1)
			{
				case 0:
					return -216428280;
				case 1:
					return 283298970;
				case 2:
					return -1044664755;
				default:
					break;
			}
			break;
		case 1272538178:
			switch (iParam1)
			{
				case 0:
					return -75395410;
				case 1:
					return 1111923763;
				case 2:
					return 1350842542;
				default:
					break;
			}
			break;
	}
	return 1105014447;
}

int func_2045(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return &(Global_1139381->f_11.f_1562.f_1647[0]);
		case 1:
			return &(Global_1139381->f_11.f_1562.f_1647[1]);
		default:
			break;
	}
	return -1;
}

struct<64> func_2046(int iParam0)
{
	if (iParam0 == 255)
	{
		iParam0 = Global_1296859->f_10;
	}
	return (*Global_263042)[iParam0]->f_1;
}

char* func_2047(int iParam0, char* sParam1, char* sParam2)
{
	sVar0 = "";
	switch (iParam0)
	{
		case -1759663922:
			if (_does_string_exist_in_string(sParam1, "Mission MP - "))
			{
				return _get_text_substring(sParam1, 13, get_length_of_literal_string(sParam1));
			}
			else
			{
				return _0xd8402b858f4ddd88(sParam1, get_length_of_literal_string(sParam1));
			}
			break;
		default:
			if (!is_string_null_or_empty(sParam2))
			{
				return _0xd8402b858f4ddd88(sParam2, get_length_of_literal_string(sParam2));
			}
			sVar0 = _create_var_string(2, func_2320(iParam0));
			if (_does_string_exist_in_string(sVar0, "Invalid MISSION_SUB_TYPE"))
			{
				sVar0 = "LANDING_FREEROAM_TITLE";
			}
			return sVar0;
	}
	return "Invalid MISSION_SUB_TYPE";
}

char* func_2048(int iParam0)
{
	switch (iParam0)
	{
		case 1816768801:
			return _create_var_string(2, "GST_DEATHMATCH");
		case -533426613:
			return _create_var_string(2, "GST_DEATHMATCH_TEAM");
		case -1918441640:
			return _create_var_string(2, "GST_DEATHMATCH_LTS");
		case -457802746:
			return _create_var_string(2, "GST_DEATHMATCH_FTB");
		case 1788958412:
			return _create_var_string(2, "GST_DEATHMATCH_PITP");
		case 1153715636:
			return _create_var_string(2, "GST_DEATHMATCH_LMS");
		case 424482930:
			return _create_var_string(2, "GST_DEATHMATCH_MM");
		case 1272390114:
			return _create_var_string(2, "GST_DEATHMATCH_WOC");
		case -1581094459:
			return _create_var_string(2, "GST_DEATHMATCH_EXC");
		case 1842544025:
			return _create_var_string(2, "GST_DEATHMATCH_TLG");
		case -632356431:
			return _create_var_string(2, "GST_DEATHMATCH_TTLG");
		case -559809431:
			return _create_var_string(2, "GST_DEATHMATCH_HT");
		case 1175500245:
			return _create_var_string(2, "GST_DEATHMATCH_TFTB");
		case -1437925683:
			return _create_var_string(2, "GST_DEATHMATCH_TWOC");
		case -548018579:
			return _create_var_string(2, "GST_DEATHMATCH_EC");
		case 10577687:
			return _create_var_string(2, "GST_DEATHMATCH_MC");
		case -222655798:
			return _create_var_string(2, "GST_DEATHMATCH_GR");
		case -725256130:
			return _create_var_string(2, "GST_DEATHMATCH_TGR");
		default:
			break;
	}
	return "Invalid DEATHMATCH_SUB_TYPE";
}

char* func_2049(int iParam0)
{
	switch (iParam0)
	{
		case -784189810:
			return _create_var_string(2, "GST_RACE_STANDA");
		case 1579717899:
			return _create_var_string(2, "GST_RACE_COMBAT");
		case -63669280:
			return _create_var_string(2, "GST_RACE_DUALCO");
		case 851921060:
			return _create_var_string(2, "GST_RACE_ELIM");
		case 2028478397:
			return _create_var_string(2, "GST_RACE_SURVIV");
		case 1457860192:
			return _create_var_string(2, "GST_RACE_TIMECP");
		case -79999383:
			return _create_var_string(2, "GST_RACE_GOLDRU");
		case -1957416901:
			return _create_var_string(2, "GST_RACE_RUNAWT");
		case 218185167:
			return _create_var_string(2, "GST_RACE_TARRAC");
		case 1744858848:
			return _create_var_string(2, "GST_RACE_OPERAC");
		case -1185533313:
			return _create_var_string(2, "GST_RACE_OPTARA");
		default:
			break;
	}
	return "Invalid RACE_SUB_TYPE";
}

bool func_2050()
{
	return Global_1915715->f_20643;
}

int func_2051(bool bParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, bool bParam7, bool bParam8)
{
	if (!bParam7 && _is_any_app_running())
	{
		return 0;
	}
	iVar0 = &Global_1296859->f_154[&Global_1296859];
	iVar1 = Global_1296859->f_8;
	bVar2 = is_entity_dead(iVar1);
	bVar3 = _0xb655db7582aec805(iVar1);
	if (bVar2 || bVar3)
	{
		if (!bParam5)
		{
			return 0;
		}
	}
	else
	{
		if (!bParam4)
		{
			if (_0xec7e480ff8bd0bed(Global_34))
			{
				return 0;
			}
			if (_0x4912dfe492db98cd(Global_34, "inInspectionMode"))
			{
				return 0;
			}
		}
		if (bParam0 && !is_player_control_on(iVar0))
		{
			if (bParam6 && Global_1102219->f_3 & 32 != 0)
			{
			}
			else if (decor_exist_on(iVar1, "iMinigameSeat"))
			{
			}
			else
			{
				return 0;
			}
		}
	}
	if (!bParam1)
	{
		if (Global_1915715->f_20638 || Global_1915715->f_22504.f_1)
		{
			return 0;
		}
		if (_0xd04241bbf6d03a5e(Global_34) != 0)
		{
			return 0;
		}
	}
	if (func_2321())
	{
		return 0;
	}
	if (Global_15)
	{
		return 0;
	}
	if (!bParam2 && (((Global_1940144->f_10 || Global_1940144->f_11) || Global_1940144->f_12) || Global_1940144->f_13))
	{
		return 0;
	}
	if (!bParam3)
	{
		iVar4 = network_player_id_to_int();
		if (Global_1248240->f_9297 != -1)
		{
			return 0;
		}
		if ((*Global_1128574)[iVar4]->f_34 & 1 != 0 && (*Global_1128574)[iVar4]->f_34 & 2 == 0)
		{
			return 0;
		}
		if (Global_1130634->f_293)
		{
			return 0;
		}
		if (Global_1572887->f_106.f_75 > 11 && Global_1572887->f_106.f_75 < 15)
		{
			return 0;
		}
		else if (Global_1572887->f_106.f_75 > 15)
		{
			return 0;
		}
	}
	if (!bParam8)
	{
		if ((_get_global_block_can_be_accessed(2) && _get_global_block_can_be_accessed(8)) && _get_global_block_can_be_accessed(9))
		{
			if ((Global_1048576 || Global_2883584) // PointerArith)
			{
				return 0;
			}
			if (&Global_1048581)
			{
				return 0;
			}
			if (&Global_1048585)
			{
				return 0;
			}
		}
	}
	return 1;
}

void func_2052(int iParam0)
{
	_databinding_write_data_int(Global_1940311->f_1433.f_4189.f_11, iParam0);
}

int func_2053(int iParam0)
{
	if (!func_1021(iParam0))
	{
		return 0;
	}
	return (Global_1139381->f_11.f_1562[func_1626(iParam0, 1)])->f_7;
}

int func_2054()
{
	return Global_1940311->f_1433.f_4189.f_2087;
}

char* func_2055(var uParam0)
{
	if (uParam0->f_20)
	{
		return "IB_UPGRADE";
	}
	if (uParam0->f_26)
	{
		return "SHOP_REWARD_PRICE";
	}
	else if (uParam0->f_27)
	{
		return "SHOP_OFFER_PRICE";
	}
	return "IB_PRICE";
}

char* func_2056(var uParam0)
{
	if (uParam0->f_26)
	{
		return "IB_FREE";
	}
	else if (uParam0->f_20 && !uParam0->f_25)
	{
		return "NET_PLAYER_ABILITY_ADDITIONAL_XP_REQUIRED";
	}
	return "";
}

int func_2057(var uParam0)
{
	if (uParam0->f_26)
	{
		return 1;
	}
	else if (!uParam0->f_25 && uParam0->f_20)
	{
		return 1;
	}
	return 0;
}

bool func_2058(var uParam0)
{
	return (uParam0->f_21 && !uParam0->f_14);
}

bool func_2059(int iParam0)
{
	if (_item_database_is_intrinsic_item(iParam0))
	{
		return true;
	}
	return false;
}

bool func_2060(var uParam0, int iParam1, int iParam2, int iParam3, int iParam4, bool bParam5)
{
	*iParam1 = 0;
	if (iParam4 < 1)
	{
		return false;
	}
	else if (*uParam0 != 10)
	{
		return false;
	}
	if (iParam3 == 0)
	{
		iParam3 = func_1684(iParam2, -455129387);
		if (iParam3 == 0)
		{
			return false;
		}
	}
	if (!_0xd1555fbc96c88444(iParam2, iParam3, iParam4, uParam0, 10))
	{
		return false;
	}
	if (!func_2322(uParam0, iParam1, iParam4, bParam5))
	{
		return false;
	}
	return true;
}

struct<16> func_2061(int iParam0, var uParam1)
{
	Var0.f_9 = 1;
	Var0.f_11 = -1591664384;
	Var0 = { func_583(iParam0, *uParam1, uParam1->f_4, 1) };
	Var0.f_4 = { *uParam1 };
	Var0.f_8 = iParam0;
	Var0.f_9 = uParam1->f_5;
	Var0.f_11 = uParam1->f_4;
	return Var0;
}

struct<4> func_2062(bool bParam0)
{
	iVar0 = func_540(bParam0);
	if (iVar0 == 2)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_4)))
		{
			Global_1293346->f_4 = { func_583(923904168, func_966(bParam0), -740156546, bParam0) };
		}
		return Global_1293346->f_4;
	}
	else if (iVar0 == 3)
	{
		if (!_0xb881ca836cc4b6d4(&(Global_1293346->f_16)))
		{
			Global_1293346->f_16 = { func_583(923904168, func_966(bParam0), -740156546, 0) };
		}
		return Global_1293346->f_16;
	}
	return func_583(923904168, func_966(bParam0), -740156546, 0);
}

bool func_2063(int iParam0, bool bParam1)
{
	if (func_1052(iParam0) == 1779021115)
	{
		return false;
	}
	if (_is_weapon_one_handed(iParam0))
	{
		if (bParam1)
		{
			return func_2323();
		}
		else
		{
			return true;
		}
	}
	return false;
}

bool func_2064(int iParam0, var uParam1, int iParam2, bool bParam3, int iParam4)
{
	return func_1104(iParam0, *uParam1, iParam2, bParam3, 1, iParam4) > 0;
}

bool func_2065(int iParam0, var uParam1, int iParam2)
{
	if (func_2324(iParam0, &uVar0, uParam1, iParam2))
	{
		return uParam1->f_17 > 0f;
	}
	return false;
}

bool func_2066(int iParam0, int iParam1)
{
	if (iParam0 == 0 || iParam1 == 0)
	{
		return false;
	}
	iVar1 = func_1052(iParam0);
	if (iVar1 == -1015256479)
	{
		return false;
	}
	iVar3 = _item_database_get_fits_slot_count(iVar1);
	iVar2 = 0;
	while (iVar2 < iVar3)
	{
		if (_item_database_get_fits_slot_info(iVar1, iVar2, &iVar0))
		{
			if (func_2325(iParam0, iParam1, iVar0))
			{
				return true;
			}
		}
		iVar2++;
	}
	return false;
}

int func_2067(int iParam0)
{
	if (func_586(iParam0, 0))
	{
		if (func_1040(iParam0, -1242251796))
		{
			if (func_1040(iParam0, 2060589226))
			{
				return func_2326();
			}
			return func_2327();
		}
		else if (func_1040(iParam0, 1919582297))
		{
			return func_2079();
		}
		else if (func_1040(iParam0, 1647670816))
		{
			return func_2328();
		}
		else if (func_1040(iParam0, 1147021565))
		{
			return func_2082();
		}
	}
	if (Global_1940144->f_12)
	{
		return func_2327();
	}
	else
	{
		return func_2082();
	}
	return func_2082();
}

bool func_2068(int iParam0)
{
	return (iParam0 == 1401465909 || iParam0 == -1733092640);
}

int func_2069()
{
	return 234350720;
}

bool func_2070(int iParam0)
{
	if ((((((((((func_1040(iParam0, 1147021565) || func_1040(iParam0, -136654233)) || func_1040(iParam0, -524514947)) || func_1040(iParam0, -1238310989)) || func_1040(iParam0, 1765172170)) || func_1040(iParam0, 1490540191)) || func_1040(iParam0, 1573112293)) || func_1040(iParam0, -1242251796)) || func_1040(iParam0, 1919582297)) || func_1040(iParam0, -2085281117)) || iParam0 == -1994237933)
	{
		return true;
	}
	return false;
}

int func_2071()
{
	return 234086528;
}

int func_2072()
{
	return 234339573;
}

int func_2073()
{
	return 226211840;
}

int func_2074()
{
	return 234596496;
}

int func_2075()
{
	return 150191252;
}

int func_2076()
{
	return 217554935;
}

int func_2077()
{
	return 234596352;
}

int func_2078()
{
	return 167247871;
}

int func_2079()
{
	return 99859463;
}

int func_2080()
{
	return 233516164;
}

int func_2081()
{
	return 232407015;
}

int func_2082()
{
	return 234339543;
}

int func_2083()
{
	return 234348672;
}

bool func_2084(int iParam0)
{
	return func_576(Global_1940144->f_7, iParam0);
}

bool func_2085(bool bParam0)
{
	if (func_2084(1))
	{
		if (bParam0)
		{
			func_626("ITEM_UNUSABLE_PICKING_UP", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_2084(2) && get_game_timer() >= Global_17388)
	{
		if (bParam0)
		{
			iVar0 = func_2329(Global_34);
			if (iVar0 != 0)
			{
				if (_0x9a100f1cf4546629(iVar0))
				{
					func_626("ITEM_UNUSABLE_SKINNING", 10000, 0, 0, 0, 1);
					return false;
				}
			}
			func_626("ITEM_UNUSABLE_LOOTING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	if (func_2084(4194304))
	{
		return false;
	}
	return true;
}

bool func_2086(bool bParam0, bool bParam1)
{
	if (_is_ped_carrying(Global_34))
	{
		_0x6b67320e0d57856a(Global_34, &Var0, 2, 0);
		if (bParam1)
		{
			switch (Var0.f_1)
			{
				case 4:
					return true;
				default:
					break;
			}
		}
		if (bParam0)
		{
			func_626("ITEM_UNUSABLE_CARRYING", 10000, 0, 0, 0, 1);
		}
		return false;
	}
	return true;
}

bool func_2087(bool bParam0, int iParam1, bool bParam2)
{
	if (_0x1d46b417f926d34d(Global_34))
	{
		return false;
	}
	else if (is_ped_in_any_vehicle(Global_34, true))
	{
		if (!is_ped_in_any_vehicle(Global_34, false))
		{
			return false;
		}
		iVar0 = get_vehicle_ped_is_using(Global_34);
		iVar1 = get_entity_model(iVar0);
		switch (iVar1)
		{
			case -1613317544:
			case 1493442814:
				if (bParam0)
				{
					func_626("ITEM_UNUSABLE_VEHICLE", 10000, 0, 0, 0, 1);
				}
				return false;
			case -1988548788:
			case 518773733:
			case 742064790:
			case 749266870:
				if (bParam0)
				{
					func_626("ITEM_UNUSABLE_CANNON", 10000, 0, 0, 0, 1);
				}
				return false;
		}
		if (!func_415(iParam1, 32) && !is_ped_on_mount(Global_34))
		{
			if (bParam2 || _0x2963b5c1637e8a27(iVar0) == Global_34)
			{
				return false;
			}
		}
	}
	else if (is_ped_getting_into_a_vehicle(Global_34))
	{
		return false;
	}
	return true;
}

bool func_2088(int iParam0, int iParam1)
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

bool func_2089(int iParam0)
{
	if (!is_entity_dead(iParam0))
	{
		return _is_ped_getting_into_a_mount_seat(iParam0, true);
	}
	return false;
}

bool func_2090(int iParam0, bool bParam1)
{
	if (bParam1)
	{
		if (!does_entity_exist(iParam0))
		{
			return false;
		}
		if (is_entity_dead(iParam0) || is_ped_injured(iParam0))
		{
			return false;
		}
	}
	fVar0 = get_entity_speed(iParam0);
	fVar1 = _0xca95924c893a0c91(iParam0, fVar0);
	if (fVar1 <= 1.5f)
	{
		return true;
	}
	return false;
}

bool func_2091()
{
	return (Global_1940311->f_1 || &Global_1940311 == 1);
}

bool func_2092(int iParam0)
{
	return (Global_1958000 && iParam0) != 0;
}

int func_2093(int iParam0, int iParam1)
{
	if (!func_1112(*iParam0))
	{
		return -1;
	}
	iVar0 = -1;
	iVar5 = func_1244(*iParam0);
	switch (*iParam0)
	{
		case 4:
			iVar2 = iVar5;
			iVar1 = func_2330(iVar2);
			if (iVar1 == -1)
			{
			}
			else
			{
				iVar0 = func_2331(iVar1);
			}
			break;
		case 3:
			iVar3 = func_2332(iVar5);
			iVar4 = func_2333(iVar3);
			if (iVar4 == -1)
			{
			}
			else
			{
				iVar0 = func_2334(iVar4);
			}
			break;
		default:
			break;
	}
	return iVar0;
}

bool func_2094(int iParam0, int iParam1, bool bParam2)
{
	return !_0x375f5870a7b8bec1(func_1354(func_2335(iParam0, iParam1, bParam2)));
}

struct<8> func_2095(int iParam0, int iParam1)
{
	return func_2335(iParam0, iParam1, 1);
}

bool func_2096(int iParam0, int iParam1)
{
	if (iParam0 == 0)
	{
		return false;
	}
	return _0x4308812a6e9ca62e(iParam0, iParam1);
}

bool func_2097(int iParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&Global_1211392->f_48[iParam0]->f_18[iVar0] != 0 && &Global_1211392->f_48[iParam0]->f_18[iVar0] == iParam1)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_2098(int iParam0)
{
	return (iParam0 >= 0 && iParam0 < 50);
}

bool func_2099(int iParam0)
{
	if (Global_17411.f_2966 == 1)
	{
		if (iParam0 == -1)
		{
			return false;
		}
		iVar1 = 0;
		while (iVar1 <= 2)
		{
			if (Global_17411.f_2966.f_1[iVar1]->f_4 == 0)
			{
			}
			else if (func_713(Global_17411.f_2966.f_1[iVar1]->f_1))
			{
			}
			else
			{
				iVar2 = 0;
				while (iVar2 <= 3)
				{
					if (func_713((*Global_1211392->f_48[iParam0])[iVar2]->f_1))
					{
					}
					else
					{
						fVar0 = func_1034(Global_17411.f_2966.f_1[iVar1]->f_1, (*Global_1211392->f_48[iParam0])[iVar2]->f_1);
						if (fVar0 < 300f)
						{
							return false;
						}
					}
					iVar2++;
				}
			}
			iVar1++;
		}
	}
	if (func_2336(4))
	{
		return false;
	}
	if (func_1103())
	{
		return true;
	}
	if (func_831())
	{
		return false;
	}
	if (func_1805(1, 255))
	{
		return false;
	}
	if (func_1112(func_1111()) && Global_1211392->f_1.f_20 != 3)
	{
		return false;
	}
	return true;
}

bool func_2100(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&Global_1211392->f_48[iParam0]->f_18[iVar0] != 0 && func_1275(&(Global_1211392->f_48[iParam0]->f_18[iVar0]), 1))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_2101(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 1)
	{
		if (&Global_1211392->f_48[iParam0]->f_18[iVar0] != 0 && func_2337(&(Global_1211392->f_48[iParam0]->f_18[iVar0])))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_2102(int iParam0, int iParam1, bool bParam2)
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

int func_2103()
{
	if (_is_ped_carrying(Global_34))
	{
		return 1;
	}
	if (get_current_ped_weapon(Global_34, &iVar0, true, 0, false))
	{
	}
	if (get_current_ped_weapon(Global_34, &iVar1, true, 1, false))
	{
	}
	if (iVar1 == -1569615261)
	{
		if (iVar0 == -1569615261)
		{
			return 1;
		}
		else if ((((is_weapon_valid(iVar0) && _is_weapon_two_handed(iVar0)) && !func_2338(iVar0)) && !_is_ped_getting_into_a_mount_seat(Global_34, true)) && !(is_ped_in_any_vehicle(Global_34, false) && !_0xa24c1d341c6e0d53(1, 0, 0)))
		{
			return 3;
		}
		else if (_is_weapon_binoculars(iVar0))
		{
			return 1;
		}
		else if ((is_weapon_valid(iVar0) && func_2338(iVar0)) || _is_weapon_lasso(iVar0))
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else if (iVar0 == -1569615261)
	{
		return 1;
	}
	else
	{
		return 0;
	}
	return 0;
}

void func_2104(int iParam0, bool bParam1, int iParam2)
{
	iVar0 = func_2339(iParam0);
	iVar1 = func_1196(iVar0);
	if (iVar1 != iParam0)
	{
		func_2340(iVar1, 4);
	}
	if (!func_1825(iParam0))
	{
		return;
	}
	if (func_1199(iParam0))
	{
		return;
	}
	func_2340(iParam0, 4);
	func_2341(iParam0, bParam1);
	if (!func_2342(iParam0))
	{
		func_2343(iParam0, 1, 0);
	}
	if (bParam1)
	{
		if (!func_1489(0, 0, 1))
		{
			func_2344(1, 6);
		}
	}
}

bool func_2105(int iParam0, int iParam1, int iParam2, int iParam3, int iParam4)
{
	if (_0x2d19bc4df626cbe7(iParam0, iParam1, iParam2, iParam3))
	{
		_task_item_interaction(iParam0, iParam1, iParam2, iParam3, 0, -1082130432);
		Global_1940144->f_26 = 1;
		return true;
	}
	_0xd962f8579d702db5();
	return false;
}

void func_2106(int iParam0)
{
	Var0.f_1 = 20;
	if ((func_1040(iParam0, 1573112293) || func_1040(iParam0, 672467738)) || func_1040(iParam0, -550842268))
	{
		bVar37 = true;
	}
	if (func_1050(iParam0) == 2085633299)
	{
		_item_database_fillout_item_effects_ids(iParam0, &Var0);
		_0xd962f8579d702db5();
		iVar29 = 0;
		while (iVar29 < Var0)
		{
			if (!_item_database_fillout_item_effects_id_info(&(Var0.f_1[iVar29]), &Var22))
			{
			}
			else if (-943921969 == Var22.f_1)
			{
				fVar30 = func_2345(0, Var22.f_2);
				func_2346(Var22.f_2);
				bVar39 = true;
			}
			else if (-1104847406 == Var22.f_1)
			{
				fVar31 = func_2345(2, Var22.f_2);
				func_2347(Var22.f_2, 0);
				bVar38 = true;
			}
			else if (381158954 == Var22.f_1)
			{
				fVar32 = func_2345(1, Var22.f_2);
				func_2348(Var22.f_2);
			}
			else if (-416929031 == Var22.f_1)
			{
				fVar33 = func_2349(to_float(Var22.f_2), Var22.f_5);
				func_2350(0, fVar33, 1, 1, bVar37);
				bVar39 = true;
			}
			else if (1857353317 == Var22.f_1)
			{
				fVar34 = func_2349(to_float(Var22.f_2), Var22.f_5);
				func_2350(2, fVar34, 1, 1, bVar37);
				bVar38 = true;
			}
			else if (1681823811 == Var22.f_1)
			{
				fVar35 = func_2349(to_float(Var22.f_2), Var22.f_5);
				func_2350(1, fVar35, 1, 1, bVar37);
			}
			else if (2062242710 == Var22.f_1)
			{
				fVar36 = func_2351(to_float(Var22.f_3), Var22.f_4);
				func_2352(19, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (-826379728 == Var22.f_1)
			{
				fVar36 = func_2351(to_float(Var22.f_3), Var22.f_4);
				func_2352(20, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1191740624 == Var22.f_1)
			{
				fVar36 = func_2351(to_float(Var22.f_3), Var22.f_4);
				func_2352(18, fVar36, 1, 1);
			}
			else if (1869697234 == Var22.f_1)
			{
				fVar36 = func_2351(to_float(Var22.f_3), Var22.f_4);
				func_2352(0, fVar36, 1, 1);
				bVar39 = true;
			}
			else if (1342237631 == Var22.f_1)
			{
				fVar36 = func_2351(to_float(Var22.f_3), Var22.f_4);
				func_2352(2, fVar36, 1, 1);
				bVar38 = true;
			}
			else if (-1240225157 == Var22.f_1)
			{
				fVar36 = func_2351(to_float(Var22.f_3), Var22.f_4);
				func_2352(1, fVar36, 1, 1);
			}
			else if (-816334026 == Var22.f_1)
			{
				func_2353(to_float(Var22.f_2), 1);
			}
			iVar29++;
		}
		if (bVar39 || func_1040(iParam0, -537818634))
		{
			func_667(func_2354(-704089207), 1);
		}
		if (func_1040(iParam0, -1457797660))
		{
			func_667(func_2354(-1909697259), 1);
		}
		if (bVar38)
		{
			func_667(func_2354(704570463), 1);
		}
		switch (iParam0)
		{
			case -1735850413:
			case -241345764:
				chal_add_goal_progress_int(-1823988672, 1517929953, 1);
				break;
		}
		_0x0e1db1f8f5b561dc(fVar30, fVar32, fVar31, round((fVar33 / 2f)), round((fVar35 / 2f)), round((fVar34 / 2f)));
	}
}

int func_2107(int iParam0, int iParam1, bool bParam2, int iParam3)
{
	if (!func_586(iParam0, 0))
	{
		return 0;
	}
	if (iParam3 == -142743235)
	{
		if (func_2355(iParam0))
		{
			iParam3 = 562618531;
		}
	}
	bVar0 = iParam3 == 562618531;
	bVar1 = iParam3 == 1992602754;
	bVar2 = iParam3 == -1387038764;
	iVar3 = func_1940(iParam0, 1);
	if (iVar3 != 0)
	{
		iVar4 = get_ped_ammo_by_type(Global_34, iVar3);
		iVar4 = (iVar4 - iParam1);
		if (iVar4 < 0)
		{
			return 0;
		}
		_remove_ammo_from_ped_by_type(Global_34, iVar3, iParam1, iParam3);
		if (!bParam2)
		{
			func_2356(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
		}
		return 0;
	}
	if (!func_1275(iParam0, 1))
	{
		return 0;
	}
	Var5 = { func_2357(iParam0) };
	if (_stat_id_is_valid(&Var5))
	{
		if ((func_1389(iParam0, 0, 0, 0) - iParam1) >= 0)
		{
			_0xbd861ae8a5181ed7(&Var5, iParam1);
		}
		else if ((func_1389(iParam0, 0, 0, 0) - iParam1) < 0)
		{
			func_2107(iParam0, func_1389(iParam0, 0, 0, 0), bParam2, iParam3);
			return 0;
		}
	}
	if (func_1050(iParam0) == -427144552)
	{
		if (!func_2358(iParam0, iParam1, 0, iParam3))
		{
			return 0;
		}
	}
	else if (!func_1036(iParam0, iParam1, iParam3, bParam2, 0))
	{
		return 0;
	}
	else
	{
		Var7 = { func_1686(iParam0, 0, 0) };
		if (func_1390(0) && Var7.f_4 == 1084182731)
		{
			func_2359(1, 0, 0);
		}
	}
	if (iParam0 == -569063887)
	{
		Global_1940144->f_21 = 0;
	}
	if (!func_1390(0))
	{
		bParam2 = true;
	}
	if (!bParam2 && iParam0 != 1309979101)
	{
		func_2356(iParam0, -iParam1, bVar0, bVar1, bVar2, 0, 0);
	}
	return 1;
}

void func_2108(int iParam0)
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

bool func_2109(int iParam0)
{
	return &Global_1952637->f_595[iParam0] > 0;
}

void func_2110(int iParam0)
{
	Global_1952637->f_595[iParam0] = &Global_1952637->f_595[iParam0] + 1;
}

bool func_2111()
{
	if (Global_1952637->f_3485)
	{
		return true;
	}
	if (absi((get_game_timer() - Global_1952637->f_3483)) < 1250)
	{
		return true;
	}
	if (func_2360())
	{
		return true;
	}
	if (_0xec7e480ff8bd0bed(Global_34))
	{
		return true;
	}
	return false;
}

int func_2112(int iParam0)
{
	iVar0 = func_1052(iParam0);
	if (((iVar0 == 81053684 || iVar0 == -525676072) || func_1040(iParam0, 160827531)) || func_1040(iParam0, -1303648999))
	{
		return 1;
	}
	return 0;
}

int func_2113(int iParam0)
{
	if (iParam0 == 0)
	{
		return 0;
	}
	iVar0 = 0;
	if (func_2119(&iVar0))
	{
		if (iParam0 == iVar0)
		{
			return 1;
		}
	}
	return 0;
}

bool func_2114(int iParam0)
{
	if (-1829635046 == func_2361(81053684))
	{
		if (func_2119(iParam0))
		{
			return true;
		}
	}
	else if (func_2362(-525676072, iParam0) || func_1040(func_2363(1742327865), -1303648999))
	{
		if (func_2119(iParam0))
		{
			return true;
		}
	}
	return false;
}

int func_2115()
{
	iVar0 = 1549701178;
	switch (func_2103())
	{
		case 0:
			iVar0 = 1549701178;
			break;
		case 3:
			iVar0 = 949387044;
			break;
		case 1:
			iVar0 = -22529868;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_2116()
{
	iVar0 = 614608656;
	switch (func_2103())
	{
		case 0:
			iVar0 = 614608656;
			break;
		case 3:
			iVar0 = -1290316291;
			break;
		case 1:
			iVar0 = 1918034163;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_2117()
{
	iVar0 = -1832677570;
	switch (func_2103())
	{
		case 0:
			iVar0 = -1832677570;
			break;
		case 3:
			iVar0 = -362314920;
			break;
		case 1:
			iVar0 = -1336137422;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

int func_2118()
{
	iVar0 = 1623252156;
	switch (func_2103())
	{
		case 0:
			iVar0 = 1623252156;
			break;
		case 3:
			iVar0 = -1469902924;
			break;
		case 1:
			iVar0 = 170763280;
			break;
		case 2:
			iVar0 = 0;
			break;
	}
	return iVar0;
}

bool func_2119(int iParam0)
{
	if (func_2362(81053684, iParam0))
	{
		return true;
	}
	if (func_2362(-525676072, iParam0))
	{
		return true;
	}
	return false;
}

void func_2120(int iParam0)
{
	Global_1952637 = (&Global_1952637 - (Global_1952637 && iParam0));
}

void func_2121(int iParam0, int iParam1, int iParam2)
{
	(Global_1952637->f_83[func_1735(iParam0, 1)])->f_11 = ((Global_1952637->f_83[func_1735(iParam0, 1)])->f_11 - ((Global_1952637->f_83[func_1735(iParam0, 1)])->f_11 && iParam1));
}

int func_2122(int iParam0, bool bParam1)
{
	switch (iParam0)
	{
		case -2061583405:
			return Global_1952637->f_3334.f_28;
		case 81053684:
			return Global_1952637->f_3334.f_30;
		case -525676072:
			return Global_1952637->f_3334.f_29;
		case -1719060085:
			return Global_1952637->f_3334.f_31;
		case 1388798186:
			return Global_1952637->f_3334.f_33.f_7;
		case 119907797:
			return Global_1952637->f_3334.f_32;
		case -999503751:
			if (bParam1)
			{
				return Global_1952637->f_3334.f_27;
			}
			else
			{
				return func_2364();
			}
			break;
	}
	return 0;
}

int func_2123(int iParam0, bool bParam1)
{
	iVar0 = 0;
	switch (iParam0)
	{
		case -2061583405:
			iVar0 = Global_1952637->f_3334.f_33.f_1;
			break;
		case 81053684:
			iVar0 = 1;
			break;
		case -525676072:
			iVar0 = Global_1952637->f_3334.f_33.f_2;
			break;
		case -1719060085:
			iVar0 = 1;
			break;
		case -999503751:
			iVar0 = Global_1952637->f_3334.f_33;
			break;
		case 1388798186:
			iVar0 = 1;
			break;
		case 119907797:
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

bool func_2124(int iParam0, var uParam1)
{
	*uParam1 = 0;
	*uParam1 = 0;
	while (*uParam1 < Global_1952637->f_3334.f_26)
	{
		if (iParam0 == &Global_1952637->f_3334[*uParam1])
		{
			return true;
		}
		*uParam1++;
	}
	return false;
}

int func_2125(int iParam0, var uParam1, int iParam2, bool bParam3, bool bParam4)
{
	iVar1 = iParam0;
	if (Global_1952637->f_3334.f_26 >= 25)
	{
		return 0;
	}
	if (*uParam1 >= iParam2)
	{
		return 0;
	}
	if (func_2124(iVar1, &uVar0))
	{
		return 0;
	}
	if (!func_2365(iParam0, 0))
	{
		return 0;
	}
	if (bParam3 && !func_2366(iParam0, 0, bParam4))
	{
		return 0;
	}
	Global_1952637->f_3334[Global_1952637->f_3334.f_26] = iVar1;
	Global_1952637->f_3334.f_26++;
	*uParam1++;
	return 1;
}

void func_2126()
{
	iVar0 = 0;
	while (iVar0 < Global_1952637->f_3334.f_26)
	{
		Global_17411.f_55.f_644[iVar0] = &Global_1952637->f_3334[iVar0];
		iVar0++;
	}
	Global_17411.f_55.f_644.f_27 = Global_1952637->f_3334.f_27;
	Global_17411.f_55.f_644.f_28 = Global_1952637->f_3334.f_28;
	Global_17411.f_55.f_644.f_29 = Global_1952637->f_3334.f_29;
	Global_17411.f_55.f_644.f_30 = Global_1952637->f_3334.f_30;
	Global_17411.f_55.f_644.f_31 = Global_1952637->f_3334.f_31;
	Global_17411.f_55.f_644.f_32 = Global_1952637->f_3334.f_32;
	Global_17411.f_55.f_644.f_26 = Global_1952637->f_3334.f_26;
}

bool func_2127(int iParam0)
{
	return func_2368(func_2367(iParam0));
}

void func_2128(bool bParam0, int iParam1)
{
	if (!func_586(iParam1, 0))
	{
		return;
	}
	iVar7 = -1;
	if (!func_2369(iParam1, &Var0, 805880880, 0, 0, -401018458))
	{
		Var0 = "_PLACEHOLDER";
		Var0.f_1 = "inventory_items";
	}
	if (is_string_null_or_empty(Var0))
	{
		return;
	}
	if (bParam0)
	{
		sVar4 = "Transaction_Positive";
		iVar6 = 109029619;
		iVar7 = func_2370(iParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_2371(4, iVar7))
		{
			sVar3 = "OUTFIT_STORED_LITERAL";
			sVar5 = func_1354(func_2372(iVar7));
		}
		else
		{
			iVar8 = func_2373(iParam1);
			if (func_586(iVar8, 0))
			{
				iParam1 = iVar8;
			}
			sVar3 = "ITEM_STORED";
			sVar5 = _create_var_string(0, func_1784(iParam1));
		}
	}
	else
	{
		sVar4 = "Transaction_Positive";
		iVar6 = 109029619;
		iVar7 = func_2370(iParam1);
		if ((iVar7 > 0 && iVar7 < 11) && func_2371(4, iVar7))
		{
			sVar3 = "OUTFIT_REMOVED_LITERAL";
			sVar5 = func_1354(func_2372(iVar7));
		}
		else
		{
			iVar9 = func_2373(iParam1);
			if (func_586(iVar9, 0))
			{
				iParam1 = iVar9;
			}
			sVar3 = "ITEM_REMOVED";
			sVar5 = _create_var_string(0, func_1784(iParam1));
		}
	}
	sVar10 = func_1077(_create_var_string(10, sVar3, sVar5), iVar6);
	func_2374(sVar10, Var0.f_1, get_hash_key(Var0), 0, iVar6, "Transaction_Feed_Sounds", sVar4, 0, 1);
}

int func_2129()
{
	return Global_1952637->f_1;
}

bool func_2130(int iParam0, int iParam1)
{
	iVar0 = func_1052(iParam1);
	iVar1 = func_1052(iParam0);
	if (iVar0 == iVar1)
	{
		return true;
	}
	if (func_2375(iParam1) && func_2375(iParam0))
	{
		return true;
	}
	return false;
}

void func_2131(int iParam0, int iParam1, bool bParam2, bool bParam3, int iParam4, bool bParam5)
{
	func_2376(iParam0, 0, 0, bParam3, bParam5);
	func_1731(iParam1, 1, bParam2, iParam4, bParam3, bParam5);
}

int func_2132(int iParam0, int iParam1)
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
			return 735520874;
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

void func_2133()
{
	Global_1952637->f_1556 = Global_1952637->f_1675;
	Global_1952637->f_1552 = Global_1952637->f_1554;
	Global_1952637->f_1552.f_1 = Global_1952637->f_1554.f_1;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1556.f_1[iVar0] = { *Global_1952637->f_1675.f_1[iVar0] };
		iVar0++;
	}
}

void func_2134(int iParam0)
{
	func_2121(iParam0, 8, 6);
}

void func_2135(var uParam0, int iParam1, int iParam2, bool bParam3)
{
	if (bParam3)
	{
		if ((*iParam1 == 832230214 || *iParam1 == 30652334) || *iParam1 == 750544038)
		{
			iVar0 = 16;
			if (func_1052(&(uParam0->f_1[iVar0])) != 1882579758)
			{
				return;
			}
			iVar1 = func_2377(&(uParam0->f_1[iVar0]));
			if (iVar1 != 0 && iVar1 != &Global_1952637->f_83[iParam2])
			{
				*iParam1 = iVar1;
				return;
			}
		}
		if (!func_2378(*iParam1, iParam2))
		{
			*iParam1 = &Global_1952637->f_1675.f_1[iParam2];
			return;
		}
	}
	*iParam1 = &Global_1952637->f_83[iParam2];
}

void func_2136(int iParam0)
{
	func_2379(&(Global_1952637->f_2897), iParam0);
}

void func_2137(int iParam0, int iParam1)
{
	if (iParam1 & 8 != 0)
	{
		return;
	}
	func_2380(&(Global_1952637->f_2897), iParam0, iParam1);
}

void func_2138(var uParam0, int iParam1, int iParam2)
{
	uParam0->f_2 = (uParam0->f_2 || iParam1);
}

void func_2139(var uParam0, int iParam1, int iParam2, bool bParam3, int iParam4)
{
	iVar0 = iParam1;
	bVar1 = func_1738(iVar0, 1);
	if (bParam3 && func_1040(&(uParam0->f_1[iParam2]), 343781202))
	{
		func_2381(uParam0, &(uParam0->f_1[iParam2]));
	}
	switch (func_2132(iParam2, 1))
	{
		case -1130352927:
			func_2382(uParam0, iVar0, iParam2, iParam4);
			break;
		case 1367443060:
			func_2383(uParam0, iVar0, iParam2);
			break;
		case -338487716:
			func_2384(uParam0, iVar0, bVar1, iParam4);
			break;
		case 1108822547:
			func_2385(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1742327865:
			func_2386(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1250092473:
			func_2387(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -893163968:
			func_2388(uParam0, bVar1, iVar0, iParam4);
			break;
		case -450913544:
			func_2389(uParam0, bVar1, iVar0, iParam2, iParam4);
			break;
		case -1197751823:
			func_2390(uParam0, bVar1, iVar0, iParam4);
			break;
		case 304805134:
			func_2391(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1145151482:
			func_2392(uParam0, bVar1, iParam4);
			break;
		case -207860920:
			func_2393(uParam0, bVar1, iVar0, iParam4);
			break;
		case -426430150:
			func_2394(uParam0, bVar1, iParam4);
			break;
		case 788010710:
			func_2395(uParam0, bVar1, iVar0, iParam4);
			break;
		case 1958421083:
			func_2396(uParam0, bVar1, iVar0, iParam4);
			break;
		case -1944638739:
			func_2397(uParam0, bVar1, iVar0, iParam4);
			break;
	}
}

int func_2140(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	if (func_2129() == 24043185)
	{
		iVar0 = 1;
	}
	if (iParam2 == 289238755)
	{
		return 289238755;
	}
	if (iParam2 != 0 && func_2398(iParam0, iVar0, iParam2) != -1)
	{
		return iParam2;
	}
	if (func_2399(iParam0, func_2132(iParam1, 1), &iParam2))
	{
		return iParam2;
	}
	return 0;
}

void func_2141(var uParam0, bool bParam1, bool bParam2, bool bParam3, bool bParam4)
{
	if (*uParam0 <= 0)
	{
		return;
	}
	if (func_1727(4718592))
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < *uParam0)
	{
		func_2400(&(uParam0->f_2[iVar0]), bParam1, bParam2);
		iVar0++;
	}
	if (bParam4)
	{
		bVar1 = false;
		if (Global_1952637->f_1675 != 491602716 || !func_2371(2, -1))
		{
			bVar1 = true;
		}
		else if (!func_1040(Global_1952637->f_1675, -166674229) && (Global_1952637->f_1675 != 491602716 || !func_2371(2, -1)))
		{
			bVar1 = true;
		}
		if (bVar1)
		{
			Global_1952637->f_1675 = 491602716;
			Global_1952637->f_1556 = 491602716;
			func_2401(-1, 0, 6);
			func_1055(27, 0, 65536, 0, 0);
		}
	}
	if (bParam3)
	{
		func_423(0, 1);
	}
}

bool func_2142(struct<4> Param0, int iParam4, bool bParam5)
{
	if (!func_1390(0))
	{
		return func_1254(&Param0, iParam4, 1) != -1;
	}
	if (!_0xb881ca836cc4b6d4(&Param0))
	{
		return false;
	}
	Var0.f_9 = -1591664384;
	if (!func_1251(Param0, &Var0, bParam5, 0, -1))
	{
		return false;
	}
	if (Var0.f_10 == iParam4)
	{
		return true;
	}
	if (!_0x734311e2852760d0(func_540(bParam5), &Param0, iParam4))
	{
		return false;
	}
	return true;
}

bool func_2143(int iParam0)
{
	if (is_ped_injured(iParam0))
	{
		return false;
	}
	if (func_2402(Global_34, iParam0, 0, 1) < 2f && _0xd543d3a8fde4f185(Global_34, iParam0))
	{
		return true;
	}
	return false;
}

bool func_2144()
{
	if (!_unlock_is_unlocked(-1624899219))
	{
		func_1695(2);
		return false;
	}
	if (!func_239())
	{
		func_1695(9);
		return false;
	}
	if (Global_1051439->f_72[34]->f_1 & 128 != 0)
	{
		func_1695(3);
		return false;
	}
	Var0 = { func_832(0) };
	if (func_1112(Var0))
	{
		iVar2 = -1;
		switch (Var0)
		{
			case 6:
				iVar3 = func_1119(player_id(), 0);
				if (iVar3 != -1)
				{
					iVar2 = func_2403(iVar3);
				}
				break;
			case 3:
			case 4:
				iVar4 = func_2093(&Var0, 0);
				if (iVar4 != -1)
				{
					if (func_2094(iVar4, 461218520, 0))
					{
						iVar2 = 46;
					}
				}
				break;
		}
		if (iVar2 != -1)
		{
			func_1695(iVar2);
			return false;
		}
	}
	if (func_2404())
	{
		func_1695(4);
		return false;
	}
	if (func_1805(4, network_player_id_to_int()) && Global_1051439->f_72[34]->f_49 & 1073741824 == 0)
	{
		func_1695(5);
		return false;
	}
	if (func_703(131072, 255))
	{
		func_1695(7);
		return false;
	}
	if (func_2405())
	{
		func_1695(8);
		return false;
	}
	return true;
}

bool func_2145(int iParam0, int iParam1)
{
	if (((is_ped_in_combat(Global_34, 0) || is_ped_in_melee_combat(Global_34)) || func_415(iParam1, 1024)) && _0x336b3d200ab007cb(Global_34, Global_35, iParam0, iParam1) > 0)
	{
		return true;
	}
	return false;
}

bool func_2146(int iParam0)
{
	if ((iParam0 == 1 || iParam0 == 2) || iParam0 == 3)
	{
		return true;
	}
	return false;
}

void func_2147(bool bParam0)
{
	if (bParam0)
	{
		func_2406(4);
	}
	else
	{
		func_1747(4);
	}
}

void func_2148(bool bParam0)
{
	if (!(bParam0 && Global_1915715->f_22504))
	{
		if (bParam0)
		{
			_0x6a564540fac12211(2, 1807503187);
		}
		else
		{
			_0x766315a564594401(2, 1807503187, 0);
		}
	}
	Global_1915715->f_22504 = bParam0;
}

bool func_2149(int iParam0, int iParam1)
{
	return is_bit_set(&(Global_17411.f_2565[iParam0]), iParam1);
}

bool func_2150(int iParam0)
{
	if (func_2152(iParam0, 4))
	{
		return false;
	}
	return true;
}

bool func_2151(int iParam0)
{
	if (Global_1904651->f_33[iParam0]->f_2 & 98304 == 0)
	{
		return false;
	}
	iVar1 = get_cloud_time_as_int();
	iVar0 = 0;
	while (iVar0 < Global_39.f_3534)
	{
		if (Global_39.f_3534[iVar0]->f_2 == iParam0)
		{
			iVar3 = 3;
			if (Global_1904651->f_33[iParam0]->f_2 & 131072 != 0)
			{
				iVar3 = 2;
			}
			if (Global_1904651->f_33[iParam0]->f_2 & 524288 != 0)
			{
				iVar3 = 5;
			}
			iVar2 = (&Global_39.f_3534[iVar0] - iVar1);
			if (Global_39.f_3534[iVar0]->f_1 >= iVar3)
			{
				return true;
			}
			if (iVar2 < 1800 && Global_1904651->f_33[iParam0]->f_2 & 32768 != 0)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_2152(int iParam0, int iParam1)
{
	return (Global_1904651->f_33[iParam0]->f_2 && iParam1) != 0;
}

bool func_2153(int iParam0)
{
	return (Global_1572864->f_3 && iParam0) != 0;
}

bool func_2154()
{
	if (!func_239())
	{
		return false;
	}
	return Global_1904651->f_8684;
}

bool func_2155(int iParam0, int iParam1, var uParam2, int iParam3)
{
	*iParam3 = 0;
	if (*uParam2 < 10)
	{
		return false;
	}
	if (!func_2096(iParam0, 2))
	{
		return false;
	}
	Var0.f_4 = 15;
	Var0.f_36 = 10;
	if (!func_2407(iParam0, iParam1, &Var0))
	{
		return false;
	}
	if (Var0.f_35 > 10)
	{
		Var0.f_35 = 10;
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

void func_2156(var uParam0)
{
	Global_1952637->f_2365 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_2365.f_1[iVar0] = { *uParam0->f_1[iVar0] };
		iVar0++;
	}
}

int func_2157(var uParam0, bool bParam1)
{
	if (!func_2408(uParam0))
	{
		return 0;
	}
	func_2409(bParam1);
	return 1;
}

void func_2158(var uParam0)
{
	Global_1952637->f_1675 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1675.f_1[iVar0] = { *uParam0->f_1[iVar0] };
		iVar0++;
	}
}

void func_2159(var uParam0)
{
	Global_1952637->f_1556 = *uParam0;
	iVar0 = 0;
	while (iVar0 < 39)
	{
		*Global_1952637->f_1556.f_1[iVar0] = { *uParam0->f_1[iVar0] };
		iVar0++;
	}
}

void func_2160(int iParam0, bool bParam1, bool bParam2, int iParam3)
{
	iVar0 = 0;
	if (bParam1)
	{
		iVar0 = 2;
	}
	if (bParam2 && Global_1952637->f_2843 != 0)
	{
		func_2410(Global_1952637->f_2843);
		func_2411(0);
		Global_1952637->f_2843 = 0;
	}
	else if (iParam3 != 0 && func_2412(iParam3))
	{
		func_2413(0);
	}
	if (func_1727(32768))
	{
		func_2414(1108822547);
	}
	if (is_ped_a_player(iParam0))
	{
		iParam0 = 0;
		func_2415(&(Global_1952637->f_1675.f_1[1]), -1811760631, &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 1);
		func_2415(&(Global_1952637->f_1675.f_1[4]), -2118203104, &(Global_1952637->f_1058), &(Global_1952637->f_1058.f_9), 1);
		func_1055(2, 0, iVar0, 0, 0);
		func_1055(4, 0, 0, 0, 0);
		func_1055(5, 0, 0, 0, 0);
	}
	else
	{
		iVar0 |= 1;
		func_1055(2, 0, iVar0, iParam0, 0);
	}
	func_1093();
}

int func_2161(bool bParam0)
{
	Var0.f_9 = -1591664384;
	iVar14 = 0;
	Var15 = { func_583(889965687, func_966(1), 1034665895, 1) };
	iVar19 = func_510(Var15, 552979403, 1, -1);
	if (iVar19 != 0)
	{
		if (iVar19 == -1645121954)
		{
			iVar14 = 24043185;
		}
		else if (iVar19 == 897974632)
		{
			iVar14 = 2026485318;
		}
		return iVar14;
	}
	Var22 = { func_522(0, -1591664384, 552979403, -1591664384, 0, 0, 0) };
	if (func_523(&Var22, &iVar20, &iVar21, 1))
	{
		if (iVar21 > 0 && func_1414(&Var0, 0, iVar20, iVar21))
		{
			if (Var0.f_4 == -1645121954)
			{
				iVar14 = 24043185;
			}
			else if (Var0.f_4 == 897974632)
			{
				iVar14 = 2026485318;
			}
			else
			{
				func_508(iVar20);
				return 0;
			}
			if (bParam0)
			{
				func_2142(Var0, 1, 0);
			}
			func_508(iVar20);
			return iVar14;
		}
		func_508(iVar20);
	}
	return 0;
}

bool func_2162(int iParam0, var uParam1, int iParam2, int iParam3)
{
	if (iParam3 == 0)
	{
		iParam3 = func_2129();
	}
	iVar1 = func_2416(iParam3 == 24043185, -1029125316, 1443518308);
	func_2418(&(Global_1952637->f_1043), -609127300, func_2417(iParam0), 0, 0, 0);
	_0x91ded5dd64bb2691(&(Global_1952637->f_1043));
	*iParam2 = 0;
	(*uParam1)[0] = 0;
	while (_0xed4413cee1bf142c(&(Global_1952637->f_1043)))
	{
		if (*iParam2 >= *uParam1)
		{
			return true;
		}
		if (!_0x44b3a36933ac009c(&uVar0, &(Global_1952637->f_1043), iVar1))
		{
		}
		else
		{
			(*uParam1)[*iParam2] = uVar0;
			*iParam2++;
		}
	}
	return *iParam2 > 0;
}

int func_2163(int iParam0)
{
	if (!func_2164(iParam0))
	{
		return 0;
	}
	func_2419();
	return 1;
}

bool func_2164(int iParam0)
{
	if (!func_1727(64))
	{
		if (func_1727(32))
		{
			func_2420(&(Global_1952637->f_2566));
		}
		else
		{
			func_2421(&(Global_1952637->f_2566));
		}
		func_626("NG_OUTFIT_EQUIPPED", 10000, 0, 0, 0, 1);
		func_1094(64);
	}
	func_2159(&(Global_1952637->f_2566));
	if (!func_2422(&(Global_1952637->f_1556), iParam0, &uVar0, 0, 1, 0, func_2161(0), 0, 1, 1))
	{
		return false;
	}
	Global_1139381->f_4779.f_3 = iParam0;
	if (func_1727(32))
	{
		func_2156(&(Global_1952637->f_1556));
		Var1.f_1 = Global_1139381->f_4779;
		Var1 = Global_1139381->f_4779.f_4;
		func_2408(&Var1);
	}
	else
	{
		func_2158(&(Global_1952637->f_1556));
	}
	func_1055(30, 0, 0, 0, 0);
	return true;
}

bool func_2165()
{
	iVar0 = get_frame_count();
	if (Global_1139381->f_5560.f_22 == iVar0 || Global_1139381->f_5560.f_22 == (iVar0 - 1))
	{
		return true;
	}
	return false;
}

bool func_2166()
{
	if (Global_1952637->f_1 != 24043185 && Global_1952637->f_1 != 2026485318)
	{
		return true;
	}
	return false;
}

bool func_2167(int iParam0)
{
	switch (iParam0)
	{
		case 6:
			iVar0 = 0;
			while (iVar0 <= 7)
			{
				if (Global_1196898->f_78[iVar0]->f_2 && Global_1196898->f_78[iVar0]->f_1 == 2)
				{
					return true;
				}
				iVar0++;
			}
			break;
		case 2:
		case 3:
		case 4:
		case 7:
			if (Global_1572887->f_6)
			{
				if (func_2146(Global_1108365->f_935.f_28))
				{
					if (!Global_1108365->f_935.f_19)
					{
						return false;
					}
				}
				if (!func_413())
				{
					return true;
				}
			}
			else if (Global_1048579 && !Global_1572887->f_9)
			{
				if (is_player_control_on(&(Global_1296859->f_154[&Global_1296859])))
				{
					return true;
				}
				if (func_41(&(Global_1102219->f_4), 1, 5))
				{
					return true;
				}
			}
			break;
	}
	return false;
}

void func_2168(int iParam0)
{
	if (Global_1572887->f_16 != 0 || Global_1572887->f_13 != 0)
	{
		return;
	}
	iVar0 = iParam0;
	if (iVar0 < 0 || iVar0 >= 32)
	{
		return;
	}
	if (!&Global_1296859->f_22[iVar0])
	{
		func_2276(iParam0);
		return;
	}
	if (&Global_1071686->f_21416.f_1[iVar0] == 1)
	{
		return;
	}
	func_2423(iVar0);
	_0x51951de06c0d1c40(iParam0, 1);
	Global_1071686->f_21416.f_1[iVar0] = 1;
}

bool func_2169(struct<2> Param0, int iParam2, int iParam3)
{
	if (!func_1112(Param0))
	{
		return false;
	}
	if (Param0 != 2)
	{
		return false;
	}
	iVar0 = func_2424(Param0);
	return (iVar0 >= iParam2 && iVar0 <= iParam3);
}

int func_2170(int iParam0, int iParam1)
{
	switch (iParam1)
	{
		case 0:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -348950400;
				case 2:
					return 239417318;
				case 3:
					return 239417318;
				default:
					break;
			}
			break;
		case 1:
			switch (iParam0)
			{
				case 0:
					return 1307826022;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 2:
			switch (iParam0)
			{
				case 0:
					return 1907908866;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 3:
			switch (iParam0)
			{
				case 0:
					return -889182566;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 4:
			switch (iParam0)
			{
				case 0:
					return -474428808;
				case 2:
					return -59491839;
				default:
					break;
			}
			break;
		case 5:
			switch (iParam0)
			{
				case 0:
					return 16540788;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 6:
			switch (iParam0)
			{
				case 0:
					return -481682130;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 7:
			switch (iParam0)
			{
				case 0:
					return -1990849941;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 8:
			switch (iParam0)
			{
				case 0:
					return -1265587408;
				case 2:
					return 1377133516;
				default:
					break;
			}
			break;
		case 9:
			switch (iParam0)
			{
				case 0:
					return 1087345397;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 10:
			switch (iParam0)
			{
				case 0:
					return -1817797378;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 11:
			switch (iParam0)
			{
				case 0:
					return -1142776975;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 12:
			switch (iParam0)
			{
				case 0:
					return 2117980229;
				case 2:
					return 319921153;
				default:
					break;
			}
			break;
		case 13:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1427667791;
				case 2:
					return -1124047374;
				case 3:
					return -311950714;
				case 4:
					return -1877729336;
				default:
					break;
			}
			break;
		case 14:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1733369788;
				case 2:
					return -1291660805;
				case 3:
					return 53620250;
				case 4:
					return -967242671;
				default:
					break;
			}
			break;
		case 15:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 1751392738;
				case 2:
					return -1002933146;
				case 3:
					return 300796817;
				case 4:
					return -1332027179;
				default:
					break;
			}
			break;
		case 16:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1523907969;
				case 2:
					return -1340126692;
				case 3:
					return -1177458231;
				case 4:
					return 1413260826;
				default:
					break;
			}
			break;
		case 17:
			switch (iParam0)
			{
				case 0:
				case 1:
					return 318496303;
				case 2:
					return -1612797541;
				case 3:
					return -1876683153;
				case 4:
					return 1251939043;
				default:
					break;
			}
			break;
		case 18:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -411791259;
				case 2:
					return 1855246300;
				case 3:
					return 763461736;
				case 4:
					return -92262210;
				default:
					break;
			}
			break;
		case 19:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -644680542;
				case 2:
					return 2084465459;
				case 3:
					return 1616668189;
				case 4:
					return -1758631398;
				default:
					break;
			}
			break;
		case 20:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1585597204;
				case 2:
					return 941214835;
				case 3:
					return 68299210;
				case 4:
					return 1699902717;
				default:
					break;
			}
			break;
		case 21:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -913454268;
				case 2:
					return 1265238199;
				case 3:
					return -1638616368;
				case 4:
					return 1550104174;
				default:
					break;
			}
			break;
		case 22:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1239767970;
				case 2:
					return -1099733308;
				case 3:
					return -697261301;
				case 4:
					return 1865014264;
				default:
					break;
			}
			break;
		case 23:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1227772128;
				case 2:
					return 1853607854;
				case 3:
					return 1511414161;
				case 4:
					return -2030843481;
				default:
					break;
			}
			break;
		case 24:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1597340910;
				case 2:
					return 885906515;
				case 3:
					return -674835160;
				case 4:
					return 867181329;
				default:
					break;
			}
			break;
		case 25:
			switch (iParam0)
			{
				case 0:
				case 1:
					return -1824548752;
				case 2:
					return -645886158;
				case 3:
					return 825197572;
				case 4:
					return 1390137360;
				default:
					break;
			}
			break;
	}
	return 0;
}

int func_2171()
{
	return Global_1896738->f_3948;
}

int func_2172(int iParam0)
{
	switch (iParam0)
	{
		case -59585102:
			return get_hash_key("KIT_POUCH_REMEDIES_MP");
		case 1018123892:
			return get_hash_key("KIT_POUCH_INGREDIENTS_MP");
		case 982182330:
			return get_hash_key("KIT_POUCH_MATERIALS_MP");
		case -1406390556:
			return get_hash_key("KIT_POUCH_VALUABLES_MP");
		case -1455768246:
			return get_hash_key("KIT_POUCH_KIT_MP");
		case -921879912:
			return get_hash_key("KIT_POUCH_PROVISIONS_MP");
	}
	return 0;
}

int func_2173(int iParam0)
{
	switch (iParam0)
	{
		case 2025841068:
			return 0;
		case 822658194:
			return 1;
		case 1308232528:
			return 2;
		case 1835499550:
			return 3;
		case 476637847:
			return 4;
		case -120156735:
			return 6;
		case 1645618177:
			return 7;
		case -512529193:
			return 8;
		case 131399519:
			return 9;
		case 178647645:
			return 10;
		case -864275692:
			return 11;
		case 1684533001:
			return 12;
		case -2066240242:
			return 13;
		case -2145992129:
			return 14;
		case -108848014:
			return 15;
		case 892930832:
			return 16;
		default:
			break;
	}
	return -1;
}

bool func_2174(int iParam0, bool bParam1)
{
	if (network_is_player_active(iParam0))
	{
		iVar0 = iParam0;
		iVar1 = 0;
		while (iVar1 <= 7)
		{
			if (Global_1196339->f_1[iVar1]->f_1 != -1 && func_1779(iVar1, 64, iVar0))
			{
				if (bParam1)
				{
					if (&Global_1196898->f_78[iVar1] >= 2)
					{
						return true;
					}
				}
				else if (&Global_1196898->f_78[iVar1] >= 5)
				{
					return true;
				}
			}
			iVar1++;
		}
	}
	return false;
}

int func_2175(int iParam0)
{
	switch (iParam0)
	{
		case -1125105727:
		case 1038512660:
			iVar0 = 0;
			iVar1 = 0;
			break;
		case 1232677007:
			iVar0 = 1;
			iVar1 = 1;
			break;
		case -785841056:
			iVar0 = 2;
			iVar1 = 7;
			break;
	}
	iVar2 = iVar0;
	while (iVar2 <= iVar1)
	{
		if (&Global_1196339->f_1[iVar2] == 0)
		{
			return iVar2;
		}
		iVar2++;
	}
	return -1;
}

int func_2176(vector3 vParam0, int iParam3, var uParam4, int iParam5, int iParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_int(iParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

int func_2177()
{
	return &Global_1902818;
}

int func_2178(int iParam0)
{
	return shift_right(iParam0, 12) & 31;
}

Vector3 func_2179(int iParam0, int iParam1)
{
	if ((func_1875(&Var3, iParam0) && func_1876(&Var3)) && func_1882(&Var3, iParam1))
	{
		func_1880(Var3, 2060397848, &vVar0, 0);
	}
	return vVar0;
}

int func_2180(struct<2> Param0)
{
	iVar0 = 0;
	while (iVar0 <= 7)
	{
		if (func_1804(Global_1196339->f_1[iVar0]->f_5, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

bool func_2181(struct<2> Param0)
{
	return _unlock_is_unlocked(func_2220(Param0));
}

bool func_2182(struct<2> Param0)
{
	return _unlock_is_visible(func_2220(Param0));
}

void func_2183(var uParam0, struct<14> Param1, var uParam15, var uParam16, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	_databinding_write_data_string(uParam0->f_2, Param1.f_11);
	_databinding_write_data_string(uParam0->f_3, Param1.f_12);
	_databinding_write_data_hash_string(uParam0->f_4, Param1.f_9);
	_databinding_write_data_hash_string(uParam0->f_5, Param1.f_10);
	_databinding_write_data_hash_string(uParam0->f_41, func_1649(Param1.f_1, Param1.f_13));
	_databinding_write_data_hash_string(uParam0->f_6, Param1);
	_databinding_write_data_int(uParam0->f_36, Param1.f_13);
	_databinding_write_data_bool(uParam0->f_7, false);
	_databinding_write_data_bool(uParam0->f_34, false);
	_databinding_write_data_bool(uParam0->f_12, false);
	_databinding_write_data_bool(uParam0->f_13, false);
	_databinding_write_data_bool(uParam0->f_35, false);
	_databinding_write_data_bool(uParam0->f_14, false);
	_databinding_write_data_bool(uParam0->f_15, false);
	_databinding_write_data_bool(uParam0->f_16, false);
	_databinding_write_data_bool(uParam0->f_17, false);
	_databinding_write_data_string(uParam0->f_18, "");
	_databinding_write_data_bool(uParam0->f_19, false);
	_databinding_write_data_bool(uParam0->f_20, false);
	_databinding_write_data_bool(uParam0->f_21, false);
	_databinding_write_data_bool(uParam0->f_22, false);
	_databinding_write_data_bool(uParam0->f_23, false);
	_databinding_write_data_bool(uParam0->f_23, false);
	_databinding_write_data_string(uParam0->f_25, "");
	_databinding_write_data_bool(uParam0->f_26, false);
	_databinding_write_data_bool(uParam0->f_27, false);
	_databinding_write_data_bool(uParam0->f_28, false);
	_databinding_write_data_string(uParam0->f_31, "");
	_databinding_write_data_string(uParam0->f_32, "");
	_databinding_write_data_int(uParam0->f_33, -1);
	_databinding_write_data_string(uParam0->f_43, "");
	_databinding_write_data_int(uParam0->f_38, -1);
	_databinding_write_data_int(uParam0->f_40, -1);
	_databinding_write_data_bool(uParam0->f_10, false);
	_databinding_write_data_bool(uParam0->f_11, false);
	_databinding_write_data_bool(uParam0->f_8, false);
	_databinding_write_data_bool(uParam0->f_9, false);
}

bool func_2184(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!is_model_valid(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = func_2425(uParam0->f_11);
	if (uParam0->f_22 == 0)
	{
		return false;
	}
	uParam0->f_12 = { uParam1->f_16 };
	uParam0->f_23 = uParam1->f_25;
	uParam0->f_20 = uParam1->f_24;
	uParam0->f_10 = 0;
	return true;
}

bool func_2185(var uParam0, var uParam1)
{
	*uParam0 = { *uParam1 };
	uParam0->f_4 = uParam1->f_4;
	uParam0->f_5 = { uParam1->f_5 };
	uParam0->f_9 = uParam1->f_9;
	uParam0->f_11 = uParam1->f_14;
	if (!is_model_valid(uParam0->f_11))
	{
		return false;
	}
	uParam0->f_22 = 0;
	uParam0->f_12 = { uParam1->f_15 };
	uParam0->f_20 = uParam1->f_23;
	uParam0->f_10 = 2;
	return true;
}

int func_2186(int iParam0, int iParam1, var uParam2)
{
	if (iParam1 == -1)
	{
		return 0;
	}
	func_1151(uParam2);
	switch (iParam1)
	{
		case 0:
		case 1:
			if (!func_2426(iParam0, uParam2))
			{
				return 0;
			}
			break;
		case 2:
			if (!func_2427(iParam0, uParam2))
			{
				return 0;
			}
			break;
	}
	return 1;
}

int func_2187(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	func_2188();
	Global_1904087->f_106.f_2 = 1318388873;
	Global_1904087->f_106.f_3 = func_2189(iParam0);
	if (!_datafile_get_hash(&uVar0, &(Global_1904087->f_106)))
	{
		return 0;
	}
	uVar1 = uVar0;
	return uVar1;
}

void func_2188()
{
	Global_1904087->f_106 = Global_1071686->f_28448[49]->f_3;
	Global_1904087->f_106.f_1 = 0;
	Global_1904087->f_106.f_2 = 0;
	Global_1904087->f_106.f_3 = 0;
	Global_1904087->f_106.f_4 = 0;
}

int func_2189(int iParam0)
{
	switch (iParam0)
	{
		case -1:
			return -1844561321;
		case 0:
			return 1653124001;
		case 1:
			return -430733995;
		case 2:
			return 1501387297;
		case 3:
			return -1143491563;
		case 4:
			return -1460176899;
		case 5:
			return 1003181529;
		default:
			break;
	}
	return 0;
}

var func_2190(int iParam0)
{
	switch (iParam0)
	{
		case -1992167326:
		case -1884014371:
		case -1871413878:
		case -1554232707:
		case -987049424:
		case -724534761:
		case -215258135:
		case -682748:
		case 892234183:
		case 1357161730:
		case 1483778247:
		case 1538293636:
		case 1581179681:
			iVar0 = func_2428(iParam0, 1);
			return &(Global_1137047->f_361[iVar0]);
		default:
			break;
	}
	return uVar1;
}

int func_2191(vector3 vParam0)
{
	if (!func_1821(&Var0, vParam0))
	{
		return 0;
	}
	Var0.f_2 = 1462115960;
	Var0.f_3 = vParam0.z;
	if (_datafile_get_data_node_index(&(Var0.f_1), &Var0))
	{
		Var0.f_2 = 759645552;
		_datafile_get_hash(&uVar5, &Var0);
	}
	return uVar5;
}

int func_2192()
{
	return -1635525483;
}

bool func_2193(vector3 vParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		iVar1 = int_to_playerindex(iVar0);
		if (network_is_player_active(iVar1))
		{
			iVar2 = get_player_ped(iVar1);
			if (func_2429(iVar1) == 4)
			{
			}
			else if (vdist(vParam0, get_entity_coords(iVar2, false, false)) < Global_1901947->f_584)
			{
				return true;
			}
		}
		iVar0++;
	}
	return false;
}

bool func_2194(vector3 vParam0, int iParam3)
{
	if (func_713(vParam0))
	{
		return true;
	}
	if (iParam3 >= 0 && iParam3 < 32)
	{
		iVar5 = (*Global_1134390)[iParam3]->f_33.f_3;
	}
	iVar0 = 0;
	while (iVar0 < 32)
	{
		if (!func_713((*Global_1131196)[iVar0]->f_20))
		{
			fVar1 = vdist((*Global_1131196)[iVar0]->f_20, vParam0);
			if (fVar1 <= Global_1901947->f_584.f_3)
			{
				return true;
			}
		}
		if (((Global_1131196->f_865[iVar0]->f_4 != iVar5 && (Global_1131196->f_865[iVar0]->f_1.f_2 > 0 || Global_1131196->f_865[iVar0]->f_1.f_2 < -2)) && &Global_1131196->f_865[iVar0] != -1) && &Global_1131196->f_865[iVar0] != 6)
		{
			if (func_1823(Global_1131196->f_865[iVar0]->f_1, &vVar2) && !func_713(vVar2))
			{
				fVar1 = vdist(vVar2, vParam0);
				if (fVar1 <= Global_1901947->f_584.f_3)
				{
					return true;
				}
			}
		}
		iVar0++;
	}
	return false;
}

int func_2195(int iParam0, bool bParam1)
{
	if (!func_1827(iParam0, bParam1))
	{
		return 0;
	}
	if (iParam0 == 1949608568)
	{
		return func_1279(1657716792, 1);
	}
	else if (iParam0 == 20024186)
	{
		return func_1279(963726415, 1);
	}
	else if (iParam0 == 318000298)
	{
		return func_1279(-1939515319, 1);
	}
	else if (iParam0 == -1771777013)
	{
		return func_1279(-1903059161, 1);
	}
	else if (iParam0 == 375366730)
	{
		return func_1279(-252071901, 1);
	}
	else if (iParam0 == -1309887827)
	{
		return func_1279(-611782825, 1);
	}
	return func_1279(iParam0, 1);
}

int func_2196(int iParam0, int iParam1)
{
	if (iParam0 == 15 && func_1040(iParam1, -2051813666))
	{
		return 1;
	}
	return 0;
}

int func_2197(int iParam0, int iParam1)
{
	if (!func_586(iParam0, 0))
	{
		return 0;
	}
	Var0 = { func_966(0) };
	Var0.f_4 = func_2430(iParam1);
	Var5 = { func_583(iParam0, Var0, Var0.f_4, 0) };
	if (!_0xb881ca836cc4b6d4(&Var5))
	{
		return 0;
	}
	iVar9 = _0xc97e0d2302382211(func_540(0), &Var5, 0);
	return iVar9;
}

bool func_2198(int iParam0)
{
	if (!func_586(iParam0, 0))
	{
		return false;
	}
	if (func_1040(iParam0, -887064662))
	{
		return true;
	}
	return func_2199(iParam0);
}

bool func_2199(int iParam0)
{
	if (!func_586(iParam0, 0))
	{
		return false;
	}
	if (func_1040(iParam0, -839724752))
	{
		return true;
	}
	return false;
}

int func_2200(int iParam0, int iParam1, int iParam2)
{
	iParam0 = func_1742(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_586(iParam1, 0))
	{
		return 0;
	}
	if (!func_2431(iParam0))
	{
		return 0;
	}
	iVar0 = func_1064(iParam0);
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar1 = create_itemset(true);
	find_all_attached_carriable_entities(iVar0, iVar1);
	iVar2 = get_itemset_size(iVar1);
	Var3.f_1 = 10;
	Var3.f_12 = 10;
	iVar26 = 0;
	iVar27 = 0;
	while (iVar27 < iVar2)
	{
		iVar28 = _get_entity_from_item(get_indexed_item_in_itemset(iVar27, iVar1));
		if (!func_2432(iVar28))
		{
		}
		else
		{
			_0x48e4d50f87a96aa5(get_ped_index_from_entity_index(iVar28), 1, 1, get_entity_model(iVar28), &Var3, 0);
			iVar29 = 0;
			while (iVar29 < 10)
			{
				iVar30 = &Var3.f_1[iVar29];
				if (iVar30 == iParam1)
				{
					if (!does_entity_exist(*iParam2))
					{
						*iParam2 = get_ped_index_from_entity_index(iVar28);
					}
					iVar26++;
				}
				iVar29++;
			}
		}
		iVar27++;
	}
	if (is_itemset_valid(iVar1))
	{
		destroy_itemset(iVar1);
	}
	return iVar26;
}

int func_2201(int iParam0, int iParam1)
{
	if (!func_586(iParam0, 0))
	{
		return 0;
	}
	if (!func_2198(iParam0) && !func_2199(iParam0))
	{
		return 0;
	}
	Var3 = -1;
	Var3.f_1 = -1;
	Var3.f_2 = -1;
	Var3.f_3 = -1;
	Var3.f_4 = -1;
	Var3.f_5 = -1;
	Var3.f_6 = -1;
	Var3.f_7 = -1;
	Var3.f_8 = -1;
	iVar13 = func_1701(iParam0, 1697966752);
	if (iVar13 == 0)
	{
		return 0;
	}
	Var3 = { func_2433(-1591664384, -1591664384, 0, 235313564, 0, 0, -1, iVar13, 0) };
	if (func_2434(Var3, &iVar1, &iVar2, 0))
	{
		iVar15 = 0;
		while (iVar15 < iVar2)
		{
			iVar14 = func_2435(iVar15, iVar1);
			if (func_586(iVar14, 0) && iParam0 != iVar14)
			{
				iVar16 = func_2436(iVar14);
				if (iVar16 != 0)
				{
					iVar17 = func_2197(iVar14, iParam1);
					if (iVar17 > 0)
					{
						iVar0 = (iVar0 + (iVar17 * func_2438(iVar16, func_2437(iVar14), iParam0)));
					}
				}
			}
			iVar15++;
		}
		func_2439(iVar1);
	}
	return iVar0;
}

int func_2202(int iParam0, int iParam1)
{
	iParam0 = func_1742(iParam0);
	if (iParam0 == -1)
	{
		return 0;
	}
	if (iParam0 >= 7)
	{
		return 0;
	}
	if (!func_586(iParam1, 0))
	{
		return 0;
	}
	if (!func_2431(iParam0))
	{
		return 0;
	}
	iVar0 = func_1064(iParam0);
	iVar1 = iParam1;
	if (is_entity_dead(iVar0))
	{
		return 0;
	}
	if (is_ped_injured(iVar0))
	{
		return 0;
	}
	if (is_ped_in_writhe(iVar0))
	{
		return 0;
	}
	iVar3 = 0;
	while (iVar3 < 3)
	{
		if (_0x0ceeb6f4780b1f2f(iVar0, iVar3) != iVar1)
		{
		}
		else
		{
			iVar2++;
		}
		iVar3++;
	}
	return iVar2;
}

int func_2203(int iParam0)
{
	if (!func_586(iParam0, 0))
	{
		return 0;
	}
	if (_is_ped_carrying(Global_34))
	{
		iVar1 = _get_first_entity_ped_is_carrying(Global_34);
		if (does_entity_exist(iVar1) && !is_entity_a_ped(iVar1))
		{
			if (iParam0 == _0x31fef6a20f00b963(iVar1))
			{
				iVar0++;
			}
		}
	}
	return iVar0;
}

int func_2204(struct<2> Param0)
{
	if (&Global_1900806 == 15)
	{
		return -1;
	}
	if (!func_2440(Param0))
	{
		return -1;
	}
	iVar1 = func_2441(Param0);
	if (iVar1 >= 0)
	{
		func_2442(Param0, 1);
		return iVar1;
	}
	else
	{
		iVar0 = &Global_1900806;
		*(*Global_1900807)[iVar0] = { Param0 };
		*(*Global_1900838)[iVar0] = { Var2 };
		func_2442(Param0, 1);
		Global_1900806 = &Global_1900806 + 1;
		if (&Global_1900806 > 15)
		{
			Global_1900806 = 15;
		}
		return iVar0;
	}
	return -1;
}

int func_2205()
{
	return Global_1301323->f_150;
}

bool func_2206(int iParam0)
{
	return (Global_1301323->f_288.f_2 && iParam0) != 0;
}

bool func_2207()
{
	return func_2443() != 0;
}

bool func_2208()
{
	iVar0 = func_2444();
	if (!_does_thread_exist(iVar0))
	{
		return false;
	}
	return is_thread_active(iVar0, false);
}

void func_2209(int iParam0)
{
	Global_1301323->f_288 = iParam0;
}

void func_2210(int iParam0)
{
	Global_1301323->f_288.f_1 = iParam0;
}

void func_2211(struct<2> Param0)
{
	if (func_1873(Param0) == 0)
	{
	}
	else if (!_0x01f4d242765c6b24(func_1873(Param0)))
	{
	}
	else
	{
		_0xb2a38826e5886e83(func_1873(Param0), Global_265377->f_124517.f_71.f_17);
		if (func_2218(Param0, &Var0))
		{
			if (Var0.f_29 == -681494152)
			{
				_0xf21a5d66874fcedd(Var0.f_2, 0, -1423748980);
			}
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_29, 0);
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_30, 0);
			_0xf21a5d66874fcedd(Var0.f_2, Var0.f_31, 0);
		}
	}
}

void func_2212(struct<2> Param0, int iParam2)
{
	if (!func_1112(Param0))
	{
		return;
	}
	if (iParam2 == 0 || iParam2 == -1)
	{
		func_2445(Param0);
	}
	else
	{
		func_2446(Param0, iParam2);
	}
	func_2447();
}

void func_2213(bool bParam0)
{
	if (bParam0)
	{
		set_wanted_level_multiplier(1f);
		func_2448(Global_1940258, 8388608);
	}
	else
	{
		set_wanted_level_multiplier(0f);
		func_2449(Global_1940258, 8388608);
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

void func_2214(bool bParam0)
{
	iVar0 = 0;
	while (iVar0 <= 58)
	{
		iVar1 = func_2450(iVar0, 1);
		if ((iVar1 == -173287735 || iVar1 == -715363719) || iVar1 == 1972833301)
		{
		}
		else
		{
			if (bParam0)
			{
				StringCopy(&cVar2, "LAW_UI_DEAD_OR_ALIVE", 24);
				func_2451(cVar2);
			}
			else
			{
				func_2452();
			}
			_0xf611de44aeb36a1d(iVar1, bParam0);
		}
		iVar0++;
	}
}

int func_2215(struct<2> Param0, int iParam2)
{
	iVar0 = func_2453(Param0);
	if (iVar0 >= 0)
	{
		return iVar0;
	}
	if (Global_1900736->f_66 >= 32)
	{
		return -1;
	}
	iVar0 = Global_1900736->f_66;
	func_2454(Param0, iVar0);
	Global_1900736->f_66++;
	if (iParam2 < 0 || iParam2 >= Global_1900736->f_66)
	{
		return iVar0;
	}
	func_2455(iVar0, iParam2);
	return iParam2;
}

void func_2216(int iParam0)
{
	Global_1900736 = (Global_1900736 || iParam0);
}

int func_2217(struct<2> Param0, int iParam2)
{
	if (!func_1112(Param0))
	{
		return 0;
	}
	iVar0 = func_2453(Param0);
	if (iVar0 < 0)
	{
		return 0;
	}
	if (!func_2456(Param0, func_832(0), iParam2))
	{
		func_2212(func_832(0), 3);
		func_2212(func_832(iVar0), 4);
		return 0;
	}
	func_2455(iVar0, 0);
	func_2212(func_832(0), 3);
	func_2212(func_832(1), 4);
	return 1;
}

bool func_2218(struct<2> Param0, var uParam2)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	func_1862(Param0, &vVar0);
	if (func_1886(Param0, vVar0.x, uParam2))
	{
		return true;
	}
	return false;
}

int func_2219(struct<2> Param0)
{
	if (Global_1196205->f_129 <= 0)
	{
		return -1;
	}
	iVar0 = 0;
	iVar0 = 0;
	while (iVar0 < Global_1196205->f_129)
	{
		if (func_1804((*Global_1196205)[iVar0]->f_1, Param0))
		{
			return iVar0;
		}
		iVar0++;
	}
	return -1;
}

int func_2220(struct<2> Param0)
{
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	if (func_1862(Param0, &vVar0))
	{
		return vVar0.x;
	}
	return 0;
}

void func_2221(var uParam0, bool bParam1, int iParam2)
{
	func_2457(uParam0, iParam2);
	if (Global_1196205->f_129 == 1)
	{
		iParam2 = 0;
		bParam1 = true;
	}
	if (bParam1)
	{
		func_2458(func_2219(uParam0->f_1));
	}
	else
	{
		func_2459();
	}
}

bool func_2222(int iParam0, int iParam1, int iParam2)
{
	if ((func_1875(&Var0, iParam0) && func_1883(&Var0)) && func_1885(&Var0, iParam1))
	{
		if (func_1878(Var0, 915697271, &uVar5, 1))
		{
			*iParam2 = uVar5;
			return true;
		}
	}
	return false;
}

int func_2223(int iParam0)
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
		case 30:
			return 27;
		case 52:
			return 28;
		case 31:
			return 29;
		case 32:
			return 30;
		case 33:
			return 31;
		case 127:
			return 32;
		case 131:
			return 33;
		case 132:
			return 34;
		case 35:
			return 35;
		case 88:
			return 40;
		case 37:
			return 42;
		case 38:
			return 43;
		case 94:
			return 44;
		case 121:
			return 46;
		case 39:
			return 47;
		case 40:
			return 48;
		case 41:
			return 49;
		case 42:
			return 50;
		case 53:
			return 51;
		case 44:
			return 52;
		case 55:
			return 53;
		case 45:
			return 54;
		case 47:
			return 57;
		case 51:
			return 61;
		case 60:
			return 63;
		case 62:
			return 64;
		case 63:
			return 65;
		case 64:
			return 66;
		case 65:
			return 67;
		case 66:
			return 68;
		case 135:
			return 69;
		case 136:
			return 70;
		case 67:
			return 71;
		case 82:
			return 72;
		case 69:
			return 73;
		case 70:
			return 74;
		case 72:
			return 76;
		case 73:
			return 78;
		case 74:
			return 79;
		case 75:
			return 80;
		case 76:
			return 81;
		case 77:
			return 82;
		case 80:
			return 84;
		case 81:
			return 85;
		case 123:
			return 86;
		case 83:
			return 87;
		case 84:
			return 88;
		case 85:
			return 90;
		case 86:
			return 91;
		case 87:
			return 92;
		case 92:
			return 96;
		case 93:
			return 97;
		case 98:
			return 99;
		case 99:
			return 100;
		case 100:
			return 101;
		case 101:
			return 102;
		case 102:
			return 103;
		case 103:
			return 104;
		case 104:
			return 105;
		case 105:
			return 106;
		case 106:
			return 107;
		case 110:
			return 114;
		case 111:
			return 115;
		case 113:
			return 118;
		case 115:
			return 119;
		case 116:
			return 120;
		case 117:
			return 121;
		case 118:
			return 122;
		case 139:
			return 123;
		default:
			break;
	}
	return 0;
}

void func_2224(var uParam0, var uParam1, var uParam2)
{
	vVar0.x = uParam0;
	vVar0.f_1 = uParam1;
	vVar0.f_2 = uParam2;
	network_set_rich_presence(3, &vVar0, 3, 3);
}

void func_2225()
{
	if (!_0x424b17a7dc5c90bc(Global_1296859->f_10))
	{
		return;
	}
	iVar0 = func_2460();
	if (iVar0 > 0)
	{
		func_2461(-1228177771, iVar0, 0);
	}
}

void func_2226()
{
	if (!_0x424b17a7dc5c90bc(Global_1296859->f_10))
	{
		return;
	}
	iVar0 = func_1115();
	if (iVar0 > 0)
	{
		func_2462(iVar0, 0, -142743235, 0);
	}
}

void func_2227()
{
	iVar0 = player_id();
	_0x062b4a4a3396351d(iVar0);
	func_2463();
}

bool func_2228(var uParam0)
{
	if (*uParam0 >= 40)
	{
		return false;
	}
	return true;
}

int func_2229(struct<17> Param0, var uParam17, var uParam18, var uParam19, var uParam20, var uParam21, var uParam22, var uParam23, var uParam24, var uParam25, var uParam26, var uParam27, var uParam28, var uParam29, var uParam30, var uParam31, var uParam32, var uParam33, var uParam34)
{
	switch (Param0.f_16.f_4)
	{
		case 69:
		case 70:
			return 1;
		case 72:
			return 2;
		case 96:
			return 3;
		case 78:
		case 79:
		case 80:
		case 81:
		case 82:
		case 85:
			return 5;
		default:
			break;
	}
	return -1;
}

void func_2230(int iParam0)
{
	Var11 = { func_1243(iParam0) };
	iVar46 = _0x901e0dc25080c8b9(Var11.f_16.f_14);
	switch (Var11.f_16.f_4)
	{
		case 69:
			Var0.f_4 = 3;
			Var0.f_5 = iVar46;
			Var0.f_6 = Var11.f_16.f_7;
			func_1765(&Var0, Var11.f_16.f_14);
			break;
		case 70:
			func_224(iVar46);
			break;
	}
}

void func_2231(int iParam0)
{
	Var0 = { func_1243(iParam0) };
	iVar35 = _0x901e0dc25080c8b9(player_id());
	if (_0x4be6c13a45cca8ec(iVar35) == player_id())
	{
		func_2464();
		if (!func_2465(Var0.f_16.f_14))
		{
			Var0.f_16.f_4 = 73;
			Var0.f_16.f_14 = Var0.f_16.f_14;
			func_1223(Var0.f_16, func_2466(player_id()), 0, 0);
			return;
		}
		Var0.f_16.f_4 = 75;
		func_1223(Var0.f_16, func_2466(player_id()), 0, 0);
		return;
	}
	Var36 = { Var0.f_16 };
	Var36 = 2;
	Var36.f_4 = 74;
	Var36.f_15 = player_id();
	vVar55 = { 0f, 0f, 0f };
	fVar58 = 0f;
	func_1222(func_162(), vVar55, fVar58, 0, 1, func_2466(_0x4be6c13a45cca8ec(iVar35)), Var36);
}

void func_2232(int iParam0)
{
	Var0 = { func_1243(iParam0) };
	func_2467(Var0.f_8, Var0.f_10, Var0.f_13, 0, 1);
	if (func_26())
	{
		func_145();
	}
}

void func_2233(int iParam0)
{
	Var0 = { func_1243(iParam0) };
	func_214(Var0.f_16.f_15, -1);
}

void func_2234(int iParam0)
{
	Var0 = { func_1243(iParam0) };
	Var35.f_8 = -1;
	Var35.f_8.f_1 = -1;
	Var35.f_8 = { Var0.f_8 };
	vVar49.f_1 = -1;
	vVar49.f_2 = -1;
	func_1862(Var0.f_8, &vVar49);
	iVar52 = vVar49.y;
	if (!func_2468(iVar52))
	{
		func_2467(Var0.f_8, Var0.f_10, Var0.f_13, 0, 0);
		if (func_1112(Var35.f_8))
		{
			func_599(func_2469(iVar52), Var35.f_8, -1);
		}
	}
	else
	{
		Var35.f_4 = 1;
		iVar53 = _databinding_read_data_int(Global_1940311->f_242.f_14[iParam0]->f_25);
		iVar54 = (Global_1296859->f_21 - (iVar53 - (Global_1901947->f_308.f_169 / 1000)));
		iVar56 = 0;
		if (_network_is_player_index_valid(Var0.f_16.f_1))
		{
			iVar55 = Var0.f_16.f_1;
			iVar56 = Global_1108365->f_34[iVar55]->f_9;
		}
		else
		{
			iVar56 = 0;
			iVar55 = -1;
		}
		switch (iVar52)
		{
			case 18:
				Var35.f_5 = 0;
				func_2470(&uVar57, 0);
				break;
			case 20:
				_0xf37a2149bc9a8a27(-1522841992, Var0.f_16.f_1, player_id(), iVar56, iVar54);
				Var35.f_5 = 1;
				func_1220(&uVar57, Var0.f_16.f_16, 0);
				if (iVar55 > -1)
				{
					Global_1108365->f_34[iVar55]->f_9 = 0;
				}
				break;
			case 21:
				_0xf37a2149bc9a8a27(2112282570, Var0.f_16.f_1, player_id(), iVar56, iVar54);
				Var35.f_5 = 2;
				func_1220(&uVar57, Var0.f_16.f_16, 0);
				if (iVar55 > -1)
				{
					Global_1108365->f_34[iVar55]->f_9 = 0;
				}
				break;
			case 28:
				_0xf37a2149bc9a8a27(1403358139, Var0.f_16.f_1, player_id(), iVar56, iVar54);
				Var35.f_5 = 3;
				_0x31010318ba9897ac(&uVar57, Var0.f_16.f_1);
				if (iVar55 > -1)
				{
					Global_1108365->f_34[iVar55]->f_9 = 0;
				}
				break;
			case 19:
				Var35.f_5 = 4;
				func_1847(&uVar57, 1);
				break;
			case 29:
				Var35.f_5 = 5;
				func_1847(&uVar57, 1);
				break;
		}
		Var35.f_7 = uVar57;
		Var35.f_6 = player_id();
		Var35 = { Var0.f_16 };
		Var35.f_10 = Var0.f_16.f_6;
		Var35.f_11 = Var0.f_16.f_16;
		Var35.f_12 = Var0.f_16.f_9;
		if (iVar52 != 18 && iVar52 != 19)
		{
			func_2471(2);
		}
		if (iVar52 != 28)
		{
			Var35.f_11 = _0x901e0dc25080c8b9(Var0.f_16.f_1);
			func_1224(Var35.f_5, &uVar57);
		}
		else
		{
			if (Var0.f_16.f_15 == Var35.f_6)
			{
				Var35.f_1 = Var0.f_16.f_14;
			}
			else
			{
				Var35.f_1 = Var0.f_16.f_15;
			}
			_0x31010318ba9897ac(&uVar57, player_id());
		}
		if (_0x179a6f0ee2e79026(&uVar57))
		{
			func_1225(&Var35, &uVar57);
		}
	}
	if (func_26())
	{
		func_145();
	}
}

void func_2235(var uParam0)
{
	*uParam0 = -1;
	uParam0->f_1 = -1;
}

int func_2236()
{
	return Global_1071686->f_16.f_2;
}

void func_2237()
{
	if (func_2236() == -1)
	{
		return;
	}
	func_568(Global_1071686->f_16.f_2.f_1);
	vVar0 = -1;
	Global_1071686->f_16.f_2 = { vVar0 };
}

void func_2238(int iParam0)
{
	Global_1071686->f_16.f_2 = iParam0;
}

void func_2239(int iParam0)
{
}

bool func_2240(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 12);
}

bool func_2241(int iParam0)
{
	return (iParam0 > -1 && iParam0 < 2);
}

void func_2242(var uParam0)
{
	*uParam0 = 0;
	uParam0->f_1 = -1;
	uParam0->f_2 = -1;
}

int func_2243(int iParam0)
{
	if (iParam0 == -1)
	{
		return 0;
	}
	iVar0 = 0;
	while (iVar0 < Global_1293346->f_20)
	{
		if (&Global_1293346->f_20.f_1[iVar0] == iParam0)
		{
			return Global_1293346->f_20.f_1[iVar0]->f_1;
		}
		iVar0++;
	}
	return 0;
}

bool func_2244(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 28, uParam2, 0);
}

bool func_2245(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 25, uParam2, 0);
}

bool func_2246(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 17, uParam2, 0);
}

int func_2247(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 1697883736;
		case 1:
			return 1927192818;
		case 2:
			return -1363591469;
		case 3:
			return 1635448909;
		case 4:
			return -604494871;
		case 5:
			return -993281498;
		case 6:
			return -1871525158;
		case 15:
			return -596286663;
		case 16:
			return 923956646;
		case 17:
			return 1459450644;
		case 18:
			return -2071675432;
		case 8:
			return -552339597;
		case 10:
			return 2144670272;
		case 9:
			return 996459079;
		case 11:
			return 1996177174;
		case 12:
			return -1702168032;
		case 13:
			return -27117790;
		case 14:
			return 1653867545;
		case 7:
			return -142235487;
		default:
			break;
	}
	return 0;
}

int func_2248(vector3 vParam0, int iParam3, var uParam4, int iParam5, bool bParam6, bool bParam7)
{
	vParam0.f_2 = iParam5;
	if (_datafile_get_float(bParam6, &vParam0))
	{
		return 1;
	}
	else if (bParam7)
	{
	}
	return 0;
}

bool func_2249(int iParam0)
{
	switch (iParam0)
	{
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
			return true;
		default:
			break;
	}
	return false;
}

bool func_2250(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = Global_1139381->f_7;
	uParam2->f_2 = 1351168281;
	uParam2->f_3 = func_2472(iParam0);
	uParam2->f_4 = uParam1;
	return _datafile_get_data_node_index(&(uParam2->f_1), uParam2);
}

void func_2251(int iParam0, var uParam1, var uParam2)
{
	*uParam2 = iParam0;
	uParam1->f_2 = -611386243;
	_datafile_get_int(&(uParam2->f_1), uParam1);
	uParam2->f_3 = func_2473(iParam0, uParam2->f_1);
	uParam1->f_2 = -2140901307;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_2 = iVar0;
	uParam1->f_2 = -2140901307;
	_datafile_get_string(&(uParam2->f_9), uParam1);
	uParam1->f_2 = 1292053410;
	_datafile_get_string(&(uParam2->f_17), uParam1);
	if (*uParam2 == 3)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_2474(iVar0);
		}
	}
	else if (*uParam2 == 4)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = iVar0;
		}
	}
	else if (*uParam2 == 5)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_2475(iVar0);
		}
	}
	else if (*uParam2 == 6)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_2476(iVar0);
		}
		uParam1->f_2 = 162343104;
		_datafile_get_int(&(uParam2->f_6), uParam1);
	}
	else if (*uParam2 == 7)
	{
		uParam1->f_2 = 1636457257;
		if (_datafile_get_hash(&iVar0, uParam1))
		{
			uParam2->f_5 = func_2477(iVar0);
		}
	}
	else
	{
		uParam1->f_2 = 1636457257;
		_datafile_get_int(&(uParam2->f_5), uParam1);
	}
	uParam1->f_2 = 2012757065;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_7 = func_2478(iVar0);
	uParam1->f_2 = 1060782978;
	_datafile_get_hash(&(uParam2->f_8), uParam1);
	uParam1->f_2 = 162343104;
	_datafile_get_int(&(uParam2->f_6), uParam1);
	uParam1->f_2 = -733480474;
	_datafile_get_int(&(uParam2->f_25), uParam1);
	uParam1->f_2 = 492825771;
	_datafile_get_int(&(uParam2->f_26), uParam1);
	uParam1->f_2 = -839279581;
	_datafile_get_int(&(uParam2->f_27), uParam1);
	uParam1->f_2 = -640941103;
	_datafile_get_int(&(uParam2->f_28), uParam1);
	iVar0 = 0;
	uParam1->f_2 = -2025968302;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_29 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1829781569;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_30 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -1999176766;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_31 = iVar0;
	iVar0 = 0;
	uParam1->f_2 = -739728609;
	_datafile_get_hash(&iVar0, uParam1);
	uParam2->f_32 = iVar0;
}

bool func_2252(int iParam0)
{
	switch (iParam0)
	{
		case 15:
		case 16:
		case 17:
			return true;
		default:
			break;
	}
	return false;
}

void func_2253(var uParam0)
{
	if (uParam0->f_1 != 255)
	{
	}
	if (uParam0->f_11.f_7 != 255)
	{
	}
	if (uParam0->f_37 != 255)
	{
	}
}

void func_2254(var uParam0, int iParam1)
{
	uParam0->f_1 = (func_1793() - iParam1);
	func_2315(uParam0, 1);
	func_2316(uParam0, 2);
	uParam0->f_2 = 0;
}

bool func_2255(int iParam0)
{
	return (is_weapon_valid(iParam0) && iParam0 != -1569615261);
}

int func_2256(int iParam0)
{
	switch (iParam0)
	{
		case -577270367:
			return 241235545;
		case 194818087:
			return 1827902148;
		case -845885815:
			return 1301555144;
		case -1869018428:
			return -2056583192;
		case 1710247623:
			return 1015239729;
		case 1964684696:
			return -340627321;
		case -2087489409:
			return -875805376;
		case -860557048:
			return -768760704;
		case -28107610:
			return -2118203104;
		case -896045342:
			return 1285634184;
		case -643819742:
			return -559080197;
		case -1504407916:
			return -1180698265;
		case -1386156083:
			return -487028314;
		case 1687431937:
			return -1811760631;
		case 1613216286:
			return 1858448324;
		default:
			break;
	}
	return 0;
}

int func_2257(var uParam0, int iParam1)
{
	iVar0 = 0;
	while (iVar0 < 22)
	{
		if ((*uParam0)[iVar0]->f_1 == -1)
		{
		}
		else
		{
			if ((*uParam0)[iVar0]->f_16 == iParam1)
			{
				return iVar0;
			}
			iVar0++;
		}
	}
	return -1;
}

int func_2258(int iParam0)
{
	iVar0 = func_1052(iParam0);
	switch (iVar0)
	{
		case 1341188928:
			return -2056583192;
		case 1216664798:
			return 1015239729;
		case 829857647:
			return -340627321;
		case -636562458:
			return -875805376;
		case 252325943:
			return -768760704;
		default:
			break;
	}
	return 0;
}

bool func_2259(int iParam0, int iParam1, var uParam2)
{
	return _0xa3b8d31c13cb4239(iParam0, iParam1, uParam2, 19, uParam2, 0);
}

bool func_2260(struct<2> Param0)
{
	return func_2169(Param0, 5, 8);
}

int func_2261(int iParam0, bool bParam1)
{
	iVar0 = 0;
	while (iVar0 < 3)
	{
		iVar33 = func_2263(iVar0, 1, 0);
		if (!func_1904(iParam0, iVar33, &Var2, &iVar1, 0, 1))
		{
		}
		else
		{
			iVar34 = 0;
			while (iVar34 < iVar1)
			{
				if (func_2264(&(Var2[iVar34])))
				{
					if (!bParam1 || func_1389(&(Var2[iVar34]), 0, 1, 1) > 0)
					{
						return iVar33;
					}
					Jump @134; //curOff = 106
				}
				else if (&Var2[iVar34] == 0)
				{
				}
				else
				{
					iVar34++;
				}
			}
		}
		iVar0++;
	}
	return 0;
}

int func_2262(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	while (iVar0 < 5)
	{
		iVar40 = func_2263(iVar0, 0, 1);
		if (!func_1904(iParam0, iVar40, &Var9, &iVar1, 0, 1))
		{
		}
		else
		{
			bVar8 = false;
			iVar5 = 0;
			iVar41 = 0;
			while (iVar41 < iVar1)
			{
				if (func_2265(&(Var9[iVar41])))
				{
					if (!bParam1 || func_1389(&(Var9[iVar41]), 0, 1, 1) > 0)
					{
						bVar8 = true;
					}
				}
				else if (&Var9[iVar41] == 2084597891 || &Var9[iVar41] == 773203532)
				{
					if ((bParam2 && &Var9[iVar41] == 2084597891) || (!bParam2 && &Var9[iVar41] == 773203532))
					{
						if (iVar4 == 0 || (bVar6 && Var9[iVar41]->f_1 < iVar2))
						{
							iVar5 = iVar40;
							iVar3 = Var9[iVar41]->f_1;
							iVar7 = 1;
						}
					}
					else if (iVar4 == 0 || Var9[iVar41]->f_1 < iVar2)
					{
						iVar5 = iVar40;
						iVar3 = Var9[iVar41]->f_1;
						iVar7 = 0;
					}
				}
				else if (&Var9[iVar41] == 0)
				{
				}
				else
				{
					iVar41++;
				}
			}
			if (bVar8 && iVar5 != 0)
			{
				iVar4 = iVar5;
				iVar2 = iVar3;
				bVar6 = iVar7;
			}
		}
		iVar0++;
	}
	return iVar4;
}

int func_2263(int iParam0, bool bParam1, bool bParam2)
{
	iVar0 = 0;
	if (bParam1)
	{
		switch (iParam0)
		{
			case 0:
				return 205718222;
			case 1:
				return 866168015;
			case 2:
				return -1103707655;
			default:
				break;
		}
		iVar0 = 3;
	}
	if (bParam2)
	{
		switch ((iParam0 - iVar0))
		{
			case 0:
				return 75922725;
			case 1:
				return 1070046552;
			case 2:
				return -1843707398;
			case 3:
				return -1571233163;
			case 4:
				return -1197011183;
			default:
				break;
		}
	}
	return 0;
}

bool func_2264(int iParam0)
{
	return func_1052(iParam0) == 1946043663;
}

bool func_2265(int iParam0)
{
	return func_1052(iParam0) == -126813555;
}

bool func_2266(int iParam0)
{
	return func_1050(iParam0) == -427144552;
}

void func_2267(int iParam0, int iParam1, var uParam2, int iParam3)
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
	if (!_0xe81d0378a384e755(iParam0, &Var7) || Var7 == 0)
	{
		return;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		fVar21[iVar0] = 1f;
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
							if (uParam2[iVar0] == Var19)
							{
								fVar21[iVar0] = (&fVar21[iVar0] + (Var19.f_1 - 1f));
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
			else
			{
				iVar2++;
			}
		}
		iVar1++;
	}
	iVar0 = 0;
	while (iVar0 < iParam3)
	{
		if (&fVar21[iVar0] != 1f && (*uParam2)[iVar0]->f_1 > 0)
		{
			if (uParam2[iVar0] == 773203532)
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 1000000) * 100;
			}
			else
			{
				(*uParam2)[iVar0]->f_1 = (((100 * (*uParam2)[iVar0]->f_1) * round((&fVar21[iVar0] * 100f))) / 10000);
			}
			if ((*uParam2)[iVar0]->f_1 == 0 && func_1052(uParam2[iVar0]) != -829303394)
			{
				(*uParam2)[iVar0]->f_1 = 1;
			}
		}
		iVar0++;
	}
}

void func_2268(var uParam0)
{
	func_2479(uParam0);
	func_2479(&(uParam0->f_6));
	func_2479(&(uParam0->f_12));
	func_2479(&(uParam0->f_18));
	func_2479(&(uParam0->f_24));
	uParam0->f_30 = { Var0 };
	uParam0->f_63 = 0;
}

int func_2269(var uParam0)
{
	*uParam0 = 1;
	uParam0->f_3 = player_id();
	uParam0->f_2 = get_player_ped(uParam0->f_3);
	uParam0->f_1 = func_2480(uParam0->f_2);
	uParam0->f_4 = get_player_team(uParam0->f_3);
	uParam0->f_5 = get_ped_relationship_group_hash(uParam0->f_2);
	return 1;
}

bool func_2270(int iParam0, var uParam1)
{
	if (!does_entity_exist(iParam0))
	{
		*uParam1 = 6;
		uParam1->f_1 = iParam0;
		uParam1->f_2 = 0;
		uParam1->f_3 = 255;
		uParam1->f_4 = -1;
		uParam1->f_5 = 623901053;
		return false;
	}
	if (is_entity_a_ped(iParam0))
	{
		iVar0 = get_ped_index_from_entity_index(iParam0);
		if (is_ped_a_player(iVar0))
		{
			*uParam1 = 1;
		}
		else if (_is_this_model_a_horse(get_entity_model(iParam0)))
		{
			*uParam1 = 3;
		}
		else if (is_ped_human(iVar0))
		{
			*uParam1 = 2;
		}
		else
		{
			*uParam1 = 5;
		}
	}
	else if (is_entity_a_vehicle(iParam0))
	{
		*uParam1 = 4;
	}
	else if (is_entity_an_object(iParam0))
	{
		*uParam1 = 6;
	}
	else
	{
		return false;
	}
	switch (*uParam1)
	{
		case 1:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = network_get_player_index_from_ped(uParam1->f_2);
			uParam1->f_4 = get_player_team(uParam1->f_3);
			uParam1->f_5 = get_ped_relationship_group_hash(uParam1->f_2);
			break;
		case 5:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = get_ped_relationship_group_hash(uParam1->f_2);
			break;
		case 2:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = get_ped_relationship_group_hash(uParam1->f_2);
			break;
		case 3:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = iVar0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = get_ped_relationship_group_hash(uParam1->f_2);
			break;
		case 4:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = 623901053;
			break;
		case 6:
			uParam1->f_1 = iParam0;
			uParam1->f_2 = 0;
			uParam1->f_3 = 255;
			uParam1->f_4 = -1;
			uParam1->f_5 = 623901053;
			break;
	}
	return true;
}

bool func_2271(var uParam0, var uParam1)
{
	switch (*uParam0)
	{
		case 3:
			return func_2270(_get_rider_of_mount(uParam0->f_2, false), uParam1);
		case 4:
			return func_2270(get_ped_in_vehicle_seat(uParam0->f_1, -1), uParam1);
		default:
			break;
	}
	return false;
}

int func_2272(var uParam0)
{
	if (uParam0->f_18 != 1)
	{
		return 0;
	}
	if (uParam0->f_6 == 2)
	{
		return 0;
	}
	bVar0 = false;
	if (uParam0->f_6 == 1)
	{
		bVar0 = true;
		iVar1 = uParam0->f_6.f_4;
		iVar2 = uParam0->f_18.f_4;
		iVar3 = get_relationship_between_peds(uParam0->f_6.f_2, uParam0->f_18.f_2);
	}
	else if (uParam0->f_12 == 1 && (uParam0->f_6 == 3 || uParam0->f_6 == 4))
	{
		bVar0 = true;
		iVar1 = uParam0->f_12.f_4;
		iVar2 = uParam0->f_18.f_4;
		iVar3 = get_relationship_between_peds(uParam0->f_12.f_2, uParam0->f_18.f_2);
	}
	if (!bVar0)
	{
		return 0;
	}
	if (uParam0->f_6.f_3 == uParam0->f_18.f_3 || uParam0->f_12.f_3 == uParam0->f_18.f_3)
	{
		return 2;
	}
	else if (iVar1 == 8 && iVar2 == 8)
	{
		return 8;
	}
	else if (iVar1 == 8 && iVar2 != 8)
	{
		return 5;
	}
	else if (iVar1 != 8 && iVar2 == 8)
	{
		return 6;
	}
	else if ((iVar1 == -1 && iVar2 == -1) && _0xfe53b1f8d43f19bf(uParam0->f_6.f_3, uParam0->f_18.f_3) != 1)
	{
		return 7;
	}
	else if (iVar1 == iVar2 || _0xfe53b1f8d43f19bf(uParam0->f_6.f_3, uParam0->f_18.f_3) == 1)
	{
		return 9;
	}
	else if (iVar1 != iVar2)
	{
		return 7;
	}
	else
	{
		switch (iVar3)
		{
			case 1:
	}