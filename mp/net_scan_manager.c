void __EntryFunction__()
{
	func_1();
	while (!func_2())
	{
		func_3();
		wait(0);
	}
	func_4();
	func_5();
}

void func_1()
{
	iVar0 = get_game_timer();
	func_6(32, -1);
	func_7();
	if (func_8())
	{
		func_5();
	}
	func_9();
	func_10(0);
	set_this_script_can_be_paused(false);
}

bool func_2()
{
	if (func_11(0, 0))
	{
		return true;
	}
	return false;
}

void func_3()
{
	if (func_12())
	{
		func_13();
	}
	func_14();
}

void func_4()
{
	func_15();
}

void func_5()
{
	terminate_this_thread();
}

void func_6(int iParam0, int iParam1)
{
	if (!network_is_game_in_progress())
	{
		func_5();
	}
	network_set_this_script_is_network_script(iParam0, false, iParam1);
}

int func_7()
{
	iVar0 = network_get_script_status();
	iVar1 = get_game_timer();
	iVar2 = network_get_timeout_time();
	if (iVar2 < 50000)
	{
		iVar2 = 50000;
	}
	while (iVar0 != 2)
	{
		if (get_game_timer() - iVar1) > (iVar2 - 5000)
		{
		}
		if ((get_game_timer() - iVar1) > 300000)
		{
			func_5();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
					break;
				default:
					break;
			}
		}
		if (((iVar0 == 3 || iVar0 == 4) || iVar0 == 5) || iVar0 == 6)
		{
			func_5();
		}
		if (!network_is_game_in_progress())
		{
			func_5();
		}
		if (!network_is_signed_online())
		{
			func_5();
		}
		if (func_16() == 0)
		{
			if (func_17())
			{
				func_5();
			}
		}
		wait(0);
		iVar0 = network_get_script_status();
	}
	if (!network_is_game_in_progress())
	{
		func_5();
	}
	return 1;
}

bool func_8()
{
	if (Global_1572887->f_9)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		return true;
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	return false;
}

void func_9()
{
	func_18();
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		(*Global_1276421)[iVar0]->f_1 = _0xe1c105e6bba48270();
		iVar0++;
	}
	func_19();
}

void func_10(bool bParam0)
{
	iVar0 = (_get_system_time() + 180000);
	iVar9 = 0;
	Var1 = { Var1 };
	while (true)
	{
		iVar9++;
		if (bParam0)
		{
			_0x236905c700fdb54d();
		}
		if (_0x9e4ef615e307fbbe())
		{
			switch (_0x54ae4fdeefeab77e())
			{
				case 0:
					break;
				case 1:
					func_5();
					break;
				case 2:
					func_5();
					break;
				case 4:
					func_5();
					break;
				case 3:
					func_5();
					break;
				default:
					break;
			}
		}
		if (!network_is_game_in_progress())
		{
			return;
		}
		if (network_is_host_of_this_script())
		{
			StringCopy(&Var1, "HOST", 64);
		}
		else
		{
			StringCopy(&Var1, "CLIENT", 64);
		}
		if (_0x5d10b3795f3fc886())
		{
			return;
		}
		if (_get_system_time() >= iVar0)
		{
			func_5();
			return;
		}
		wait(0);
	}
}

bool func_11(bool bParam0, bool bParam1)
{
	if (Global_1572887->f_12)
	{
		return false;
	}
	if (!network_is_game_in_progress())
	{
		if (bParam1 && _0xf2cbc969c4f090c7())
		{
		}
		else if (bParam1 && network_is_session_active())
		{
		}
		else if (bParam1 && &Global_1572887 < 39)
		{
		}
		else
		{
			return true;
		}
	}
	if (!network_is_signed_online())
	{
		return true;
	}
	if (_0x9e4ef615e307fbbe())
	{
		switch (_0x54ae4fdeefeab77e())
		{
			case 0:
				return true;
			case 1:
				return true;
			case 2:
				if (!bParam0)
				{
					return true;
				}
				break;
			case 4:
				return true;
			case 3:
				return true;
			default:
				return true;
		}
	}
	iVar0 = 0;
	while (iVar0 < get_number_of_events(1))
	{
		if (get_event_at_index(1, iVar0) == 1976253964)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

bool func_12()
{
	if (!is_thread_active(&(Global_1051252->f_16[17]), false))
	{
		return false;
	}
	if (!network_is_script_active("net_scan_manager", -1, true, 0))
	{
		return false;
	}
	return player_id() == _0xb4a25351d79b444c(&(Global_1051252->f_16[17]));
}

void func_13()
{
	while (iVar0 < 5)
	{
		func_20(Global_1275441->f_146);
		Global_1275441->f_146++;
		if (Global_1275441->f_146 > 4)
		{
			Global_1275441->f_146 = 0;
		}
		iVar0++;
	}
}

void func_14()
{
	while (iVar0 < 3)
	{
		func_21(Global_1276421->f_74);
		Global_1276421->f_74++;
		if (Global_1276421->f_74 > 4)
		{
			Global_1276421->f_74 = 0;
		}
		iVar0++;
	}
	func_22();
}

void func_15()
{
	iVar0 = 0;
	while (iVar0 <= 21)
	{
		if (_does_volume_exist(&(Global_1276421->f_51[iVar0])))
		{
			_delete_volume(&(Global_1276421->f_51[iVar0]));
		}
		iVar0++;
	}
}

int func_16()
{
	return Global_1572887->f_13;
}

bool func_17()
{
	return Global_1051252->f_8;
}

void func_18()
{
	network_register_host_broadcast_variables(Global_1275441, 147, 7);
	func_23(_0xba24095ea96dfe17(Global_1275441), 147, "g_mpScanManagerHostData");
	network_register_player_broadcast_variables(Global_1275588, 833, 8);
	func_24(_0x690806bc83bc8ca2((*Global_1275588)[0]), 833, "g_mpScanManagerPlayerData");
}

void func_19()
{
	Global_1276421->f_51[0] = _create_volume_box_with_custom_name(2661.152f, -1484.681f, 46.283f, 0f, 0f, 0f, 100f, 13.5f, 10.25f, "BadTiles_SaintDenisTrainTracks");
	Global_1276421->f_51[3] = _create_volume_box_with_custom_name(3523.964f, 817.257f, 42f, 0f, 0f, 80.1952f, 2275.5f, 610.5f, 200f, "BadTiles_Annesburg");
	Global_1276421->f_51[2] = _create_volume_box_with_custom_name(3734.058f, -840.8746f, 42f, 0f, 0f, 105.9452f, 1417.75f, 1235.25f, 200f, "BadTiles_Siska");
	Global_1276421->f_51[1] = _create_volume_box_with_custom_name(2772.144f, -2239.2f, 42f, 0f, 0f, 27.36972f, 3500f, 736.5f, 200f, "BadTiles_SaintDenisBay");
	Global_1276421->f_51[4] = _create_volume_box_with_custom_name(-1.913f, -2816.89f, 42f, 0f, 0f, 0.36973f, 2529.75f, 913.25f, 200f, "BadTiles_SouthFlatIronLake");
	Global_1276421->f_51[5] = _create_volume_box_with_custom_name(-1113.942f, -2260.829f, 42f, 0f, 0f, 0f, 283.25f, 420f, 200f, "BadTiles_QuakersCove");
	Global_1276421->f_51[6] = _create_volume_box_with_custom_name(458.9158f, -1037.307f, 52.07294f, 0f, 0f, 0f, 160f, 160f, 30f, "BadTiles_ScarlettMeadowsTreelessIsland");
	Global_1276421->f_51[7] = _create_volume_box_with_custom_name(-3094.862f, -2471.42f, 59.01997f, 0f, 0f, -10f, 19f, 5f, 4f, "BadTiles_ArmadilloCliff");
	Global_1276421->f_51[8] = _create_volume_box_with_custom_name(-221.1699f, 1336.444f, 163.4222f, 0f, 0f, 0f, 85.8828f, 114.2864f, 61.82489f, "RelocateOrigin_DakotaRiverCanyon");
	Global_1276421->f_51[9] = _create_volume_box_with_custom_name(461.5739f, 1603.823f, 196.7019f, 0f, 0f, 0f, 100f, 125f, 50f, "RelocateOrigin_DakotaRiverCanyonEast");
	Global_1276421->f_51[10] = _create_volume_box_with_custom_name(-5187.701f, -2106.909f, 24.13687f, 0f, 0f, 6.750001f, 200f, 140f, 100f, "RelocateOrigin_RathskellerFork");
	Global_1276421->f_51[12] = _create_volume_box_with_custom_name(-6695.072f, -3567.247f, -22.21381f, 0f, 0f, 30.49729f, 150f, 100f, 50f, "RelocateOrigin_CoronadoNorth");
	Global_1276421->f_51[11] = _create_volume_box_with_custom_name(-6569.904f, -3773.847f, -12.74948f, 0f, 0f, 16.91815f, 280f, 100f, 50f, "RelocateOrigin_CoronadoSouth");
	Global_1276421->f_51[13] = _create_volume_box_with_custom_name(-3411.939f, -1815.859f, 56.37196f, 0f, 0f, 0f, 300f, 100f, 50f, "RelocateOrigin_HennigansSteadRailBridge");
	Global_1276421->f_51[14] = _create_volume_box_with_custom_name(-2640.393f, 700.1597f, 172.832f, 0f, 0f, 0f, 80f, 80f, 80f, "RelocateOrigin_HangingDogRanchCave");
	Global_1276421->f_51[15] = _create_volume_box_with_custom_name(435.5826f, 1784.918f, 190.0176f, 0f, 0f, -10.5f, 191f, 43.5f, 20f, "RelocateOrigin_BachhusBridge");
	Global_1276421->f_51[16] = _create_volume_box_with_custom_name(-220.0916f, 1302.687f, 177.1935f, 0f, 0f, -44.74999f, 750f, 2500f, 345f, "CanyonArea_DakotaRiverCanyon");
	Global_1276421->f_51[18] = _create_volume_box_with_custom_name(1142.307f, 1793.674f, 194.5337f, 0f, 0f, 24.87119f, 150f, 100f, 20f, "UnscannableVolume_OCreaghsRunTrainTunnelEast");
	Global_1276421->f_51[17] = _create_volume_box_with_custom_name(1006.591f, 1730.76f, 194.5337f, 0f, 0f, 24.87119f, 150f, 100f, 20f, "UnscannableVolume_OCreaghsRunTrainTunnelWest");
	Global_1276421->f_51[19] = _create_volume_box_with_custom_name(-2119.513f, 79.23312f, 253.9226f, 0f, 0f, 0f, 100f, 103.5f, 40f, "UnscannableVolume_MountShannCave");
	Global_1276421->f_51[20] = _create_volume_box_with_custom_name(-2720.393f, 700.1597f, 172.832f, 0f, 0f, 0f, 80f, 80f, 80f, "UnscannableVolume_HangingDogRanchCave");
	Global_1276421->f_51[21] = _create_volume_box_with_custom_name(2269.427f, 1091.326f, 56.73091f, 0f, 0f, 0f, 100f, 110f, 80f, "UnscannableVolume_ElysianPoolCave");
}

void func_20(int iParam0)
{
	func_25(iParam0);
	switch (Global_1275441[iParam0])
	{
		case 0:
			if (func_27(iParam0, 2, func_26(iParam0)))
			{
				if (func_27(iParam0, 64, func_26(iParam0)))
				{
					func_28(iParam0, 1);
				}
				else
				{
					func_29(iParam0, 0);
				}
			}
			else if (func_30(iParam0, 4, func_26(iParam0)))
			{
				vVar0 = { func_31(iParam0) };
				if (func_32(vVar0))
				{
					func_29(iParam0, 0);
				}
				else
				{
					(*Global_1275441)[iParam0]->f_22 = { vVar0 };
					func_33(iParam0, 1);
				}
			}
			break;
		case 1:
			if (func_34((*Global_1275441)[iParam0]->f_22, &iVar3))
			{
				vVar4 = { func_35(iVar3) };
				if (!func_32(vVar4))
				{
					(*Global_1275441)[iParam0]->f_22 = { vVar4 };
				}
				else
				{
					func_29(iParam0, 0);
					return;
				}
			}
			if (func_36((*Global_1275441)[iParam0]->f_12.f_1, (*Global_1275441)[iParam0]->f_22))
			{
				(*Global_1275441)[iParam0]->f_12.f_4 = { func_37((*Global_1275441)[iParam0]->f_12.f_1 - (*Global_1275441)[iParam0]->f_22) };
				(*Global_1275441)[iParam0]->f_12.f_8 = 35f;
				func_38(iParam0, 48);
				func_29(iParam0, 0);
				return;
			}
			func_33(iParam0, 2);
			break;
		case 2:
			if (func_27(iParam0, 8, func_26(iParam0)))
			{
				if (func_30(iParam0, 16, func_26(iParam0)))
				{
					func_29(iParam0, 0);
				}
				else
				{
					func_39(iParam0);
					return;
				}
			}
			break;
	}
}

void func_21(int iParam0)
{
	iVar0 = func_26(iParam0);
	if (func_40(iParam0, -1) != iVar0)
	{
		func_41(iParam0);
	}
	switch (Global_1275441[iParam0])
	{
		case 0:
			if (!func_42(iParam0, 2, -1) && !func_42(iParam0, 4, -1))
			{
				if (!func_43((*Global_1275441)[iParam0]->f_12.f_1))
				{
					func_44(iParam0, 64);
					func_44(iParam0, 2);
					return;
				}
				(*Global_1276421)[iParam0]->f_6 = { (*Global_1275441)[iParam0]->f_12.f_4 };
				func_44(iParam0, 1);
				if (!func_45((*Global_1275441)[iParam0]->f_12.f_1, (*Global_1276421)[iParam0], &bVar1, (*Global_1275441)[iParam0]->f_12, 0, (*Global_1275441)[iParam0]->f_12.f_8, 1101004800, -1138501878, -1138501878, (*Global_1275441)[iParam0]->f_12.f_7))
				{
					if (bVar1)
					{
						func_44(iParam0, 2);
					}
				}
				else
				{
					(*Global_1276421)[iParam0]->f_3.f_2 = ((*Global_1276421)[iParam0]->f_3.f_2 + 10f);
					if (!get_ground_z_for_3d_coord((*Global_1276421)[iParam0]->f_3, &fVar4, false))
					{
						func_44(iParam0, 2);
						return;
					}
					else if (fVar4 == 0f)
					{
						func_44(iParam0, 2);
						return;
					}
					if (!is_navmesh_loaded_in_area((*Global_1276421)[iParam0]->f_3, (*Global_1276421)[iParam0]->f_3))
					{
						func_44(iParam0, 2);
						return;
					}
					(*Global_1276421)[iParam0]->f_3.f_2 = fVar4;
					(*(*Global_1275588)[network_player_id_to_int()])[iParam0]->f_2 = { (*Global_1276421)[iParam0]->f_3 };
					func_44(iParam0, 4);
				}
			}
			break;
		case 2:
			if (!func_42(iParam0, 8, -1))
			{
				if (!func_46(iParam0, 4))
				{
					fVar3 = vdist(Global_35, (*Global_1275441)[iParam0]->f_22);
					if (fVar3 < 18f)
					{
						func_44(iParam0, 16);
						func_44(iParam0, 8);
						return;
					}
				}
				if (is_sphere_visible_to_player(player_id(), (*Global_1275441)[iParam0]->f_22, 1.5f, 100f))
				{
					if (!func_42(iParam0, 32, -1))
					{
						(*Global_1276421)[iParam0]->f_9 = create_tracked_point();
						if ((*Global_1276421)[iParam0]->f_9 != 0 || (*Global_1276421)[iParam0]->f_9 != -1)
						{
							set_tracked_point_info((*Global_1276421)[iParam0]->f_9, (*Global_1275441)[iParam0]->f_22 + Vector(0.5f, 0f, 0f), 1f);
							func_44(iParam0, 32);
						}
						else
						{
							func_44(iParam0, 8);
							return;
						}
					}
					iVar2 = _0xdfe332a5da6fe7c9((*Global_1276421)[iParam0]->f_9);
					if (iVar2 != -1)
					{
						if (is_tracked_point_visible((*Global_1276421)[iParam0]->f_9))
						{
							func_44(iParam0, 16);
						}
						if (((*Global_1276421)[iParam0]->f_9 != 0 && (*Global_1276421)[iParam0]->f_9 != -1) && _is_tracked_point_valid((*Global_1276421)[iParam0]->f_9))
						{
							destroy_tracked_point((*Global_1276421)[iParam0]->f_9);
						}
						func_44(iParam0, 8);
					}
				}
				else
				{
					func_44(iParam0, 8);
				}
			}
			break;
	}
}

void func_22()
{
	if (!func_47())
	{
		return;
	}
	if (func_48(Global_1276421->f_75))
	{
		func_49();
		return;
	}
	if (!func_50(Global_1276421->f_86))
	{
		func_51(&(Global_1276421->f_86));
	}
	if (func_52(Global_1276421->f_86) > 1000)
	{
		func_49();
		return;
	}
}

int func_23(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

int func_24(var uParam0, int iParam1, char* sParam2)
{
	return 1;
}

void func_25(int iParam0)
{
	if (Global_1275441[iParam0] == -1)
	{
		return;
	}
	if (!func_50((*Global_1275441)[iParam0]->f_27))
	{
		func_51(&((*Global_1275441)[iParam0]->f_27));
	}
	if (Global_1275441[iParam0] == 4 || Global_1275441[iParam0] == 3)
	{
		if (func_52((*Global_1275441)[iParam0]->f_27) > 5000)
		{
			func_53(iParam0);
			return;
		}
	}
	else if (func_52((*Global_1275441)[iParam0]->f_27) > 10000)
	{
		func_28(iParam0, 3);
		return;
	}
}

int func_26(int iParam0)
{
	return (*Global_1275441)[iParam0]->f_1.f_2;
}

bool func_27(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if (network_is_player_active(int_to_playerindex(iVar0)) && (!func_42(iParam0, iParam1, iVar0) || func_40(iParam0, iVar0) != iParam2))
		{
			return false;
		}
		iVar0++;
	}
	return true;
}

void func_28(int iParam0, int iParam1)
{
	func_51(&((*Global_1275441)[iParam0]->f_27));
	func_54(iParam0, iParam1);
	func_33(iParam0, 4);
}

void func_29(int iParam0, int iParam1)
{
	if ((*Global_1275441)[iParam0]->f_26 > 0)
	{
		(*Global_1275441)[iParam0]->f_26 = ((*Global_1275441)[iParam0]->f_26 - 1);
	}
	if ((*Global_1275441)[iParam0]->f_26 > 0)
	{
		func_55(iParam0);
	}
	else
	{
		func_28(iParam0, iParam1);
	}
}

bool func_30(int iParam0, int iParam1, int iParam2)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((network_is_player_active(int_to_playerindex(iVar0)) && func_42(iParam0, iParam1, iVar0)) && func_40(iParam0, iVar0) == iParam2)
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

Vector3 func_31(int iParam0)
{
	iVar0 = 0;
	while (iVar0 <= 31)
	{
		if ((network_is_player_active(int_to_playerindex(iVar0)) && func_42(iParam0, 4, iVar0)) && func_40(iParam0, iVar0) == func_26(iParam0))
		{
			return (*(*Global_1275588)[iVar0])[iParam0]->f_2;
		}
		iVar0++;
	}
	return 0f, 0f, 0f;
}

bool func_32(vector3 vParam0)
{
	if ((vParam0.x == 0f && vParam0.y == 0f) && vParam0.z == 0f)
	{
		return true;
	}
	return false;
}

void func_33(int iParam0, int iParam1)
{
	if (Global_1275441[iParam0] != iParam1)
	{
		(*Global_1275441)[iParam0] = iParam1;
	}
}

bool func_34(vector3 vParam0, var uParam3)
{
	*uParam3 = 0;
	while (*uParam3 <= 7)
	{
		if (_0xf256a75210c5c0eb(&(Global_1276421->f_51[*uParam3]), vParam0))
		{
			return true;
		}
		*uParam3++;
	}
	return false;
}

Vector3 func_35(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			iVar0 = get_random_int_in_range(0, 4);
			switch (iVar0)
			{
				case 0:
					return 2761.631f, -1374.273f, 46.4021f;
				case 1:
					return 2584.707f, -1408.874f, 46.1841f;
				case 2:
					return 2657.596f, -1359.973f, 48.7346f;
				case 3:
					return 2591.586f, -1439.41f, 46.5108f;
				default:
					break;
			}
			break;
		case 6:
			iVar0 = get_random_int_in_range(0, 6);
			switch (iVar0)
			{
				case 0:
					return 692.1992f, -1059.64f, 53.6229f;
				case 1:
					return 683.2755f, -1089.386f, 54.6198f;
				case 2:
					return 680.8776f, -1030.875f, 47.1735f;
				case 3:
					return 665.3676f, -1133.833f, 48.3046f;
				case 4:
					return 682.7866f, -1116.154f, 51.5915f;
				case 5:
					return 682.3309f, -1059.608f, 53.6422f;
				default:
					break;
			}
			break;
		case 7:
			iVar0 = get_random_int_in_range(0, 4);
			switch (iVar0)
			{
				case 0:
					return -3097.274f, -2489.697f, 70.0502f;
				case 1:
					return -3124.842f, -2493.998f, 70.9493f;
				case 2:
					return -3118.868f, -2500.998f, 70.9476f;
				case 3:
					return -3090.036f, -2494.092f, 72.052f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_36(vector3 vParam0, vector3 vParam3)
{
	if (!func_56(vParam3))
	{
		return false;
	}
	vVar4 = { vParam3 - vParam0 };
	vVar4 = { func_37(vVar4) };
	fVar7 = get_distance_between_coords(vParam0, vParam3, true);
	fVar8 = (fVar7 / 6f);
	iVar9 = 1;
	while (iVar9 <= 5)
	{
		vVar0 = { vParam0 + vVar4 * Vector(fVar8, fVar8, fVar8) * FtoV(IntToFloat(iVar9)) };
		if (get_ground_z_for_3d_coord(vVar0, &fVar3, false))
		{
			if (absf((vVar0.z - fVar3)) > 30f)
			{
				return true;
			}
		}
		iVar9++;
	}
	return false;
}

Vector3 func_37(vector3 vParam0)
{
	fVar0 = vmag(vParam0);
	if (fVar0 != 0f)
	{
		fVar1 = (1f / fVar0);
		vParam0 = { vParam0 * Vector(fVar1, fVar1, fVar1) };
	}
	else
	{
		vParam0.x = 0f;
		vParam0.f_1 = 0f;
		vParam0.f_2 = 0f;
	}
	return vParam0;
}

void func_38(int iParam0, int iParam1)
{
	if ((*Global_1275441)[iParam0]->f_12 != iParam1)
	{
		(*Global_1275441)[iParam0]->f_12 = iParam1;
	}
}

void func_39(int iParam0)
{
	func_51(&((*Global_1275441)[iParam0]->f_27));
	func_33(iParam0, 3);
}

int func_40(int iParam0, int iParam1)
{
	if (iParam1 == -1)
	{
		iParam1 = network_player_id_to_int();
	}
	return (*(*Global_1275588)[iParam1])[iParam0]->f_1;
}

void func_41(int iParam0)
{
	if (((*Global_1276421)[iParam0]->f_9 != 0 && (*Global_1276421)[iParam0]->f_9 != -1) && _is_tracked_point_valid((*Global_1276421)[iParam0]->f_9))
	{
		destroy_tracked_point((*Global_1276421)[iParam0]->f_9);
	}
	(*Global_1276421)[iParam0]->f_9 = 0;
	if (func_42(iParam0, 1, -1))
	{
		func_57((*Global_1276421)[iParam0], 1, 0);
		_copy_memory((*Global_1276421)[iParam0], &uVar0, 9);
		func_58(iParam0, 1);
	}
	(*Global_1276421)[iParam0]->f_2 = (func_59(iParam0) - (*Global_1275441)[iParam0]->f_26);
	func_60(iParam0, func_26(iParam0));
	(*(*Global_1275588)[network_player_id_to_int()])[iParam0] = 0;
}

bool func_42(int iParam0, int iParam1, int iParam2)
{
	if (iParam2 == -1)
	{
		iParam2 = network_player_id_to_int();
	}
	return func_61((*Global_1275588)[iParam2][iParam0], iParam1);
}

bool func_43(vector3 vParam0)
{
	uVar1 = _0x74f0209674864cbd();
	if (_0xfe5d28b9b7837cc1(uVar1, vParam0))
	{
		iVar0 = 1;
	}
	_0xbeefbb608d2aa68a(uVar1);
	return iVar0;
}

void func_44(int iParam0, int iParam1)
{
	if (!func_42(iParam0, iParam1, -1))
	{
		func_62((*(*Global_1275588)[network_player_id_to_int()])[iParam0], iParam1);
	}
}

bool func_45(vector3 vParam0, var uParam3, int iParam4, int iParam5, bool bParam6, int iParam7, int iParam8, float fParam9, int iParam10, float fParam11)
{
	switch (*uParam3)
	{
		case 0:
			if (uParam3->f_2 > 4)
			{
				*iParam4 = 1;
				return false;
			}
			uParam3->f_1 = _0x74f0209674864cbd();
			func_63(&(uParam3->f_1), uParam3->f_2, vParam0, iParam5, iParam7, iParam8, fParam9, iParam10, fParam11);
			if (!_0x1ac5a8ab50cfaa33(uParam3->f_1))
			{
			}
			else
			{
				func_64(&(uParam3->f_1), iParam5, vParam0);
				if (!func_32(uParam3->f_6))
				{
					_0xce4e669400e5f8aa(uParam3->f_1, func_37(uParam3->f_6));
				}
				_0x2b8af29a78024bd3(uParam3->f_1);
			}
			*uParam3 = 3;
			break;
		case 3:
			if (!_0x1ac5a8ab50cfaa33(uParam3->f_1))
			{
				iVar0 = 4;
			}
			else
			{
				iVar0 = _0x0365000d8bf86531(&(uParam3->f_1));
			}
			switch (iVar0)
			{
				case 4:
					if (bParam6 && uParam3->f_2 < 4)
					{
						uParam3->f_2++;
						*uParam3 = 0;
					}
					else
					{
						*iParam4 = 1;
					}
					break;
				case 3:
					uParam3->f_3 = { _0x865732725536ee39(&(uParam3->f_1)) };
					*uParam3 = 4;
					if (!bParam6)
					{
						return true;
					}
					break;
			}
			break;
		case 4:
			return true;
	}
	return false;
}

bool func_46(int iParam0, int iParam1)
{
	return func_65((*Global_1275441)[iParam0]->f_12.f_9, iParam1);
}

bool func_47()
{
	return Global_1276421->f_75.f_1 != -1;
}

bool func_48(var uParam0, var uParam1, var uParam2, var uParam3, var uParam4, var uParam5, var uParam6, var uParam7, var uParam8, var uParam9, var uParam10)
{
	iVar0 = 0;
	while (iVar0 <= 4)
	{
		if (func_66(&uParam0, &((*Global_1275441)[iVar0]->f_1)))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_49()
{
	vVar0 = -1;
	vVar0.f_1 = -1;
	vVar0.f_2 = -1;
	_copy_memory(&(Global_1276421->f_75), &vVar0, 11);
	func_67(&(Global_1276421->f_86));
}

bool func_50(int iParam0)
{
	return iParam0 != 0;
}

void func_51(var uParam0)
{
	*uParam0 = Global_1296859->f_21;
}

int func_52(int iParam0)
{
	return (Global_1296859->f_21 - iParam0) * 1000;
}

void func_53(int iParam0)
{
	Var0 = -1;
	Var0.f_1 = -1;
	Var0.f_1.f_1 = -1;
	Var0.f_1.f_2 = -1;
	Var0.f_12 = -1;
	Var0.f_22.f_3 = -1;
	_copy_memory((*Global_1275441)[iParam0], &Var0, 29);
	func_67(&((*Global_1275441)[iParam0]->f_27));
}

void func_54(int iParam0, int iParam1)
{
	if (func_68(iParam0) != -1)
	{
		return;
	}
	(*Global_1275441)[iParam0]->f_22.f_3 = iParam1;
}

void func_55(int iParam0)
{
	func_69(iParam0, get_random_int_in_range(0, 65536));
	if (func_46(iParam0, 2))
	{
		if (*Global_1275441)[iParam0]->f_26 < func_59(iParam0)
		{
			func_70(iParam0, 2);
			func_71(iParam0);
		}
		else
		{
			(*Global_1275441)[iParam0]->f_22 = { (*Global_1275441)[iParam0]->f_12.f_1 };
			func_33(iParam0, 2);
		}
	}
	else if (*Global_1275441)[iParam0]->f_26 == func_59(iParam0)
	{
		func_71(iParam0);
	}
	else
	{
		func_33(iParam0, 0);
	}
}

bool func_56(vector3 vParam0)
{
	iVar0 = 16;
	while (iVar0 <= 16)
	{
		if (_0xf256a75210c5c0eb(&(Global_1276421->f_51[iVar0]), vParam0))
		{
			return true;
		}
		iVar0++;
	}
	return false;
}

void func_57(var uParam0, bool bParam1, bool bParam2)
{
	uParam0->f_2 = 0;
	if (!bParam2)
	{
		uParam0->f_6 = { 0f, 0f, 0f };
	}
	if (bParam1 && _0x1ac5a8ab50cfaa33(uParam0->f_1))
	{
		_0x0365000d8bf86531(&(uParam0->f_1));
	}
	*uParam0 = 0;
}

void func_58(int iParam0, int iParam1)
{
	if (func_42(iParam0, iParam1, -1))
	{
		func_72((*(*Global_1275588)[network_player_id_to_int()])[iParam0], iParam1);
	}
}

int func_59(int iParam0)
{
	iVar0 = 4;
	if (func_46(iParam0, 1))
	{
		iVar0 = 1;
	}
	return iVar0;
}

void func_60(int iParam0, int iParam1)
{
	if ((*(*Global_1275588)[network_player_id_to_int()])[iParam0]->f_1 != iParam1)
	{
		(*(*Global_1275588)[network_player_id_to_int()])[iParam0]->f_1 = iParam1;
	}
}

bool func_61(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

void func_62(var uParam0, int iParam1)
{
	func_73(uParam0, iParam1);
}

void func_63(var uParam0, int iParam1, vector3 vParam2, int iParam5, float fParam6, int iParam7, float fParam8, float fParam9, float fParam10)
{
	if (!func_32(vParam2))
	{
		_0x2064b33f6e6b92d4(*uParam0, vParam2);
	}
	_0x9b6a58fdb0024f12(*uParam0, iParam7);
	switch (iParam5)
	{
		case 27:
			_0xb8e3486d107f4194(*uParam0, 90f);
			_0x827a58ced9d4d5b4(*uParam0, 180f);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 49:
		case 50:
		case 51:
		case 52:
			break;
		case 48:
			_0x827a58ced9d4d5b4(*uParam0, fParam6);
			break;
		case 42:
			_0xb8e3486d107f4194(*uParam0, fParam10);
			break;
		default:
			_0x827a58ced9d4d5b4(*uParam0, fParam6);
			if (fParam10 != 0f)
			{
				_0xb8e3486d107f4194(*uParam0, fParam10);
			}
			break;
	}
	switch (iParam5)
	{
		case 0:
		case 4:
		case 5:
		case 6:
		case 7:
		case 8:
		case 9:
		case 11:
		case 14:
		case 15:
		case 16:
		case 18:
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
		case 32:
		case 33:
		case 34:
		case 35:
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
		case 41:
		case 42:
		case 43:
		case 44:
		case 45:
		case 46:
		case 47:
		case 48:
		case 49:
		case 50:
		case 51:
		case 52:
			_0xe9225354fb7437a7(*uParam0, 1);
			break;
	}
	switch (iParam5)
	{
		case 12:
		case 13:
			_0xff8afca532b500d4(*uParam0, 8192);
			break;
	}
	switch (iParam5)
	{
		case 2:
		case 3:
			_0xff8afca532b500d4(*uParam0, 5);
			break;
	}
	switch (iParam5)
	{
		case 35:
		case 43:
			_0x764db5a48390fbad(*uParam0, 1);
			break;
	}
	if (fParam8 == -0.01f)
	{
		switch (iParam5)
		{
			case 12:
			case 13:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, ((80f - 40f) / 2f));
				_0xb79817db31ff72b9(*uParam0, 0f);
				break;
			case 4:
				_0x954451ea2d2120fb(*uParam0, 0.5f);
				_0x0f4f6c4ce471259d(*uParam0, 2.5f);
				break;
			case 5:
				_0x954451ea2d2120fb(*uParam0, 3f);
				_0x0f4f6c4ce471259d(*uParam0, 6f);
				break;
			case 6:
				_0x954451ea2d2120fb(*uParam0, 5f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 7:
				_0x954451ea2d2120fb(*uParam0, 2f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 8:
				_0x954451ea2d2120fb(*uParam0, 5f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 9:
				_0x954451ea2d2120fb(*uParam0, 12f);
				_0x0f4f6c4ce471259d(*uParam0, 18f);
				break;
			case 10:
				_0x4a7d73989f52eb37(*uParam0, 1f);
				_0xb79817db31ff72b9(*uParam0, 65f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 100f);
				break;
			case 0:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 55f);
				break;
			case 11:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 15f);
				break;
			case 15:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 40f);
				break;
			case 14:
				_0x954451ea2d2120fb(*uParam0, 50f);
				_0x0f4f6c4ce471259d(*uParam0, 80f);
				break;
			case 16:
				_0x954451ea2d2120fb(*uParam0, 60f);
				_0x0f4f6c4ce471259d(*uParam0, 100f);
				break;
			case 30:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 150f);
				break;
			case 2:
				_0x4a7d73989f52eb37(*uParam0, 1f);
				_0xb79817db31ff72b9(*uParam0, 25f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 150f);
				break;
			case 18:
				_0x954451ea2d2120fb(*uParam0, 1f);
				_0x0f4f6c4ce471259d(*uParam0, 20f);
				break;
			case 20:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 21:
				_0x954451ea2d2120fb(*uParam0, 80f);
				_0x0f4f6c4ce471259d(*uParam0, 100f);
				break;
			case 22:
				_0x954451ea2d2120fb(*uParam0, 70f);
				_0x0f4f6c4ce471259d(*uParam0, 100f);
				break;
			case 23:
			case 24:
			case 25:
				_0x954451ea2d2120fb(*uParam0, 2f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 26:
				_0x954451ea2d2120fb(*uParam0, 50f);
				_0x0f4f6c4ce471259d(*uParam0, 80f);
				break;
			case 27:
				_0x954451ea2d2120fb(*uParam0, 3f);
				_0x0f4f6c4ce471259d(*uParam0, 6f);
				break;
			case 28:
				_0x954451ea2d2120fb(*uParam0, 40f);
				_0x0f4f6c4ce471259d(*uParam0, 50f);
				_0xb79817db31ff72b9(*uParam0, 45f);
				break;
			case 29:
				_0x954451ea2d2120fb(*uParam0, 15f);
				_0x0f4f6c4ce471259d(*uParam0, 25f);
				_0xb79817db31ff72b9(*uParam0, 20f);
				break;
			case 31:
				_0x954451ea2d2120fb(*uParam0, 80f);
				_0x0f4f6c4ce471259d(*uParam0, 140f);
				break;
			case 32:
				_0x954451ea2d2120fb(*uParam0, 40f);
				_0x0f4f6c4ce471259d(*uParam0, 125f);
				break;
			case 33:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 34:
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, 10f);
				break;
			case 35:
				_0x954451ea2d2120fb(*uParam0, 60f);
				_0x0f4f6c4ce471259d(*uParam0, 80f);
				break;
			case 36:
				_0x2eb977293923c723(*uParam0, 10f);
				_0x954451ea2d2120fb(*uParam0, func_74(10f, 40f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_74(30f, 60f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 10f);
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 37:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_74(40f, 80f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_74(50f, 90f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 10f);
				_0xbc3f847ae2c3dc65(*uParam0, 15f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 38:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_74(30f, 60f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_74(50f, 80f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 5f);
				_0xbc3f847ae2c3dc65(*uParam0, 15f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 39:
				_0x2eb977293923c723(*uParam0, 10f);
				_0x954451ea2d2120fb(*uParam0, func_74(0f, 10f, 1f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_74(5f, 15f, 1f, iParam1));
				_0x450080ddedb91258(*uParam0, 3f);
				_0xbc3f847ae2c3dc65(*uParam0, 3f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 40:
				_0x2eb977293923c723(*uParam0, 40f);
				_0x954451ea2d2120fb(*uParam0, func_74(60f, 120f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_74(100f, 130f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 20f);
				_0xbc3f847ae2c3dc65(*uParam0, 20f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 41:
				_0x2eb977293923c723(*uParam0, 10f);
				_0x954451ea2d2120fb(*uParam0, func_74(10f, 35f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_74(25f, 50f, 5f, iParam1));
				_0x450080ddedb91258(*uParam0, 2f);
				_0xbc3f847ae2c3dc65(*uParam0, 20f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 44:
			case 45:
				_0x2eb977293923c723(*uParam0, 60f);
				_0x954451ea2d2120fb(*uParam0, func_74(60f, 80f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_74(75f, 95f, 5f, iParam1));
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 50:
				_0x2eb977293923c723(*uParam0, 30f);
				_0x954451ea2d2120fb(*uParam0, func_74(30f, 70f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_74(65f, 95f, 5f, iParam1));
				_0xbc3f847ae2c3dc65(*uParam0, 25f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 51:
				_0x2eb977293923c723(*uParam0, 25f);
				_0x954451ea2d2120fb(*uParam0, func_74(25f, 35f, 5f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_74(40f, 50f, 5f, iParam1));
				_0xbc3f847ae2c3dc65(*uParam0, 8f);
				_0x450080ddedb91258(*uParam0, 2f);
				_0x885d19ac2b6fbff4(*uParam0, 1);
				break;
			case 52:
				_0x2eb977293923c723(*uParam0, 0f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, func_74(40f, 100f, 10f, iParam1));
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 42:
				_0x2eb977293923c723(*uParam0, 50f);
				_0x954451ea2d2120fb(*uParam0, func_74(50f, 70f, 10f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_74(65f, 85f, 5f, iParam1));
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 49:
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x2eb977293923c723(*uParam0, 50f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, func_74(10f, 50f, 10f, iParam1));
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 43:
				_0x2eb977293923c723(*uParam0, func_74(95f, 90f, 80f, iParam1));
				_0x954451ea2d2120fb(*uParam0, func_74(95f, 90f, 80f, iParam1));
				_0x0f4f6c4ce471259d(*uParam0, func_74(125f, 115f, 100f, iParam1));
				_0x450080ddedb91258(*uParam0, 5f);
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				break;
			case 46:
				iVar0 = func_75(vParam2, 1);
				iVar1 = func_76(vParam2);
				if ((((iVar1 == 15 || iVar1 == 14) || iVar1 == 13) || (iVar1 == 9 && iVar0 == -1)) || (iVar1 == 4 && iVar0 == -1))
				{
					_0x2eb977293923c723(*uParam0, func_74(100f, 80f, -5f, iParam1));
					_0x954451ea2d2120fb(*uParam0, func_74(100f, 80f, -5f, iParam1));
					_0x0f4f6c4ce471259d(*uParam0, func_74(110f, 160f, 12.5f, iParam1));
				}
				else
				{
					_0x2eb977293923c723(*uParam0, func_74(100f, 70f, -7.5f, iParam1));
					_0x954451ea2d2120fb(*uParam0, 70f);
					_0x0f4f6c4ce471259d(*uParam0, func_74(80f, 150f, 17.5f, iParam1));
				}
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x885d19ac2b6fbff4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					_0x19bc99c678fba139(*uParam0, 2, 0);
					_0x764db5a48390fbad(*uParam0, 1);
				}
				break;
			case 47:
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x2eb977293923c723(*uParam0, 50f);
				_0x954451ea2d2120fb(*uParam0, 0f);
				_0x0f4f6c4ce471259d(*uParam0, func_74(50f, 90f, 10f, iParam1));
				_0x885d19ac2b6fbff4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					_0x764db5a48390fbad(*uParam0, 1);
				}
				break;
			case 48:
				_0xbc3f847ae2c3dc65(*uParam0, 10f);
				_0x450080ddedb91258(*uParam0, 25f);
				_0x2eb977293923c723(*uParam0, func_74(100f, 70f, -7.5f, iParam1));
				_0x954451ea2d2120fb(*uParam0, 70f);
				_0x0f4f6c4ce471259d(*uParam0, func_74(150f, 190f, 10f, iParam1));
				_0x885d19ac2b6fbff4(*uParam0, 0);
				if (iParam1 <= 2)
				{
					_0x764db5a48390fbad(*uParam0, 1);
				}
				break;
			default:
				if (iParam1 == 0)
				{
					_0x954451ea2d2120fb(*uParam0, 1f);
					_0x0f4f6c4ce471259d(*uParam0, 5f);
				}
				else if (iParam1 == 1)
				{
					_0x954451ea2d2120fb(*uParam0, 5f);
					_0x0f4f6c4ce471259d(*uParam0, 15f);
				}
				else if (iParam1 == 2)
				{
					_0x954451ea2d2120fb(*uParam0, 15f);
					_0x0f4f6c4ce471259d(*uParam0, 35f);
				}
				else
				{
					iParam1 = 3;
					_0x4a7d73989f52eb37(*uParam0, 1f);
					_0xb79817db31ff72b9(*uParam0, 65f);
					_0x954451ea2d2120fb(*uParam0, 35f);
					if (iParam5 != 19)
					{
						_0x0f4f6c4ce471259d(*uParam0, 160f);
					}
					else
					{
						_0x0f4f6c4ce471259d(*uParam0, 65f);
					}
				}
				break;
		}
	}
	else
	{
		_0x954451ea2d2120fb(*uParam0, fParam8);
		_0x0f4f6c4ce471259d(*uParam0, fParam9);
	}
}

void func_64(var uParam0, int iParam1, vector3 vParam2)
{
	switch (iParam1)
	{
		case 0:
			_0x5d9b0baaf04cf65b(*uParam0, 64, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			break;
		case 1:
		case 19:
		case 20:
		case 45:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			break;
		case 2:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 4, 0);
			_0x19bc99c678fba139(*uParam0, 73, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 3, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			_0x19bc99c678fba139(*uParam0, 54, 1);
			break;
		case 3:
			_0x5d9b0baaf04cf65b(*uParam0, 34, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x19bc99c678fba139(*uParam0, 73, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 2, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			_0x19bc99c678fba139(*uParam0, 54, 1);
			break;
		case 4:
		case 5:
		case 6:
			_0x885d19ac2b6fbff4(*uParam0, 1);
			_0x19bc99c678fba139(*uParam0, 21, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			break;
		case 7:
			_0x885d19ac2b6fbff4(*uParam0, 1);
			_0x19bc99c678fba139(*uParam0, 21, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			break;
		case 8:
			_0x19bc99c678fba139(*uParam0, 21, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			break;
		case 9:
			_0x19bc99c678fba139(*uParam0, 21, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			break;
		case 10:
			_0x5d9b0baaf04cf65b(*uParam0, 34, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			break;
		case 12:
		case 13:
			_0x5d9b0baaf04cf65b(*uParam0, 23, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			_0xbc3f847ae2c3dc65(*uParam0, 25f);
			_0x450080ddedb91258(*uParam0, 25f);
			break;
		case 11:
		case 30:
			_0x19bc99c678fba139(*uParam0, 77, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 15:
			_0x19bc99c678fba139(*uParam0, 54, 0);
			break;
		case 14:
			_0x19bc99c678fba139(*uParam0, 54, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			break;
		case 53:
			_0x885d19ac2b6fbff4(*uParam0, 1);
			_0x19bc99c678fba139(*uParam0, 21, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 9, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			break;
		case 16:
			_0x19bc99c678fba139(*uParam0, 54, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 5, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 4, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 17:
			_0x2eb977293923c723(*uParam0, 40f);
			_0x764db5a48390fbad(*uParam0, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 2, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			break;
		case 18:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			break;
		case 21:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			_0x19bc99c678fba139(*uParam0, 54, 0);
			break;
		case 22:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 23:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 4, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 4, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 24:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 25:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			break;
		case 26:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 4, 0);
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			break;
		case 27:
			_0x5d9b0baaf04cf65b(*uParam0, 31, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			_0x19bc99c678fba139(*uParam0, 74, 0);
			break;
		case 28:
			_0x5d9b0baaf04cf65b(*uParam0, 17, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x19bc99c678fba139(*uParam0, 77, 1);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			break;
		case 29:
			_0x5d9b0baaf04cf65b(*uParam0, 23, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			_0x19bc99c678fba139(*uParam0, 12, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			break;
		case 31:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 64, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			break;
		case 32:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			break;
		case 33:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 3, 0);
			break;
		case 34:
			_0x5d9b0baaf04cf65b(*uParam0, 47, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 4, 1);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			break;
		case 35:
			_0x5d9b0baaf04cf65b(*uParam0, 23, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 44, 3, 0);
			_0x19bc99c678fba139(*uParam0, 68, 0);
			_0x19bc99c678fba139(*uParam0, 54, 0);
			break;
		case 36:
		case 37:
		case 38:
		case 39:
		case 40:
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 1, 0);
			break;
		case 41:
			_0x19bc99c678fba139(*uParam0, 80, 0);
			_0x19bc99c678fba139(*uParam0, 81, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 47, 4, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 17, 1, 0);
			break;
		case 42:
		case 44:
		case 49:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 3, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 4, 0);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			break;
		case 50:
			_0x5d9b0baaf04cf65b(*uParam0, 44, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 3, 0);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			break;
		case 51:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 0);
			break;
		case 46:
		case 47:
		case 48:
			if (func_75(vParam2, 1) == 5)
			{
				_0x5d9b0baaf04cf65b(*uParam0, 53, 1, 0);
				_0x5d9b0baaf04cf65b(*uParam0, 74, 1, 0);
			}
			else
			{
				_0x5d9b0baaf04cf65b(*uParam0, 44, 1, 0);
			}
			_0x5d9b0baaf04cf65b(*uParam0, 50, 1, 0);
			_0x5d9b0baaf04cf65b(*uParam0, 23, 3, 0);
			_0x19bc99c678fba139(*uParam0, 75, 1);
			break;
		case 43:
			_0x5d9b0baaf04cf65b(*uParam0, 50, 2, 1);
			_0x19bc99c678fba139(*uParam0, 5, 0);
			break;
		case 52:
			break;
	}
}

bool func_65(var uParam0, int iParam1)
{
	return (uParam0 && iParam1) != 0;
}

bool func_66(var uParam0, var uParam1)
{
	if (uParam0->f_1 != uParam1->f_1)
	{
		return false;
	}
	if (*uParam0 != *uParam1)
	{
		return false;
	}
	if (!are_strings_equal(&(uParam0->f_3), &(uParam1->f_3)))
	{
		return false;
	}
	return true;
}

void func_67(var uParam0)
{
	*uParam0 = 0;
}

int func_68(int iParam0)
{
	return (*Global_1275441)[iParam0]->f_22.f_3;
}

void func_69(int iParam0, int iParam1)
{
	if ((*Global_1275441)[iParam0]->f_1.f_2 != iParam1)
	{
		(*Global_1275441)[iParam0]->f_1.f_2 = iParam1;
	}
}

void func_70(int iParam0, int iParam1)
{
	if (func_46(iParam0, iParam1))
	{
		func_77(&((*Global_1275441)[iParam0]->f_12.f_9), iParam1);
	}
}

void func_71(int iParam0)
{
	vVar0 = { (*Global_1275441)[iParam0]->f_12.f_1 };
	if (func_78(vVar0, &iVar9))
	{
		(*Global_1275441)[iParam0]->f_12.f_1 = { func_79(iVar9) };
		func_38(iParam0, 47);
		func_33(iParam0, 0);
		return;
	}
	if (func_80(vVar0, &iVar9))
	{
		(*Global_1275441)[iParam0]->f_22 = { func_81(iVar9) };
		func_33(iParam0, 2);
		return;
	}
	if (func_82(vVar0))
	{
		iVar10 = 0;
		while (iVar10 <= 7)
		{
			vVar6 = { func_83(iVar10) };
			vVar3 = { vVar0 + vVar6 };
			if (!func_82(vVar3))
			{
				(*Global_1275441)[iParam0]->f_12.f_4 = { vVar6 };
				(*Global_1275441)[iParam0]->f_12.f_8 = 35f;
				func_38(iParam0, 48);
				func_33(iParam0, 0);
				return;
			}
			iVar10++;
		}
		func_28(iParam0, 4);
		return;
	}
	func_33(iParam0, 0);
}

void func_72(var uParam0, int iParam1)
{
	func_84(uParam0, iParam1);
}

void func_73(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 || iParam1);
}

float func_74(float fParam0, float fParam1, float fParam2, int iParam3)
{
	fVar0 = fParam0;
	fVar0 = (fVar0 + (fParam2 * IntToFloat(iParam3)));
	if (fVar0 > fParam1)
	{
		fVar0 = fParam1;
	}
	return fVar0;
}

int func_75(vector3 vParam0, int iParam3)
{
	iVar0 = func_85();
	if (func_86(iVar0))
	{
		if (_0xf256a75210c5c0eb((*Global_1887339)[iVar0]->f_4, vParam0))
		{
			return iVar0;
		}
	}
	return func_87(vParam0, iParam3);
}

int func_76(vector3 vParam0)
{
	return func_88(_get_map_zone_at_coords(vParam0, 10));
}

void func_77(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

bool func_78(vector3 vParam0, var uParam3)
{
	*uParam3 = 8;
	while (*uParam3 <= 15)
	{
		if (_0xf256a75210c5c0eb(&(Global_1276421->f_51[*uParam3]), vParam0))
		{
			return true;
		}
		*uParam3++;
	}
	return false;
}

Vector3 func_79(int iParam0)
{
	switch (iParam0)
	{
		case 8:
			return -100.8f, 1323.5f, 175.2f;
		case 9:
			return 466.8f, 1453.4f, 167.6f;
		case 10:
			return -5187.461f, -2234.014f, 4.4936f;
		case 12:
			return -6443.831f, -3520.823f, -26.0969f;
		case 11:
			return -6340.91f, -3696.913f, -14.1772f;
		case 14:
			return -2552.11f, 676.8995f, 139.4233f;
		case 15:
			return 431.3042f, 1882.343f, 200.1935f;
		case 13:
			iVar0 = get_random_int_in_range(0, 2);
			switch (iVar0)
			{
				case 0:
					return -3551.093f, -1892.741f, 6.6481f;
				case 1:
					return -3614.111f, -1824.39f, 42.1228f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_80(vector3 vParam0, int iParam3)
{
	*iParam3 = 17;
	while (*iParam3 <= 21)
	{
		if (_0xf256a75210c5c0eb(&(Global_1276421->f_51[*iParam3]), vParam0))
		{
			return true;
		}
		*iParam3++;
	}
	return false;
}

Vector3 func_81(int iParam0)
{
	switch (iParam0)
	{
		case 17:
			iVar0 = get_random_int_in_range(0, 2);
			switch (iVar0)
			{
				case 0:
					return 801.0809f, 1590.761f, 191.8018f;
				case 1:
					return 787.089f, 1578.206f, 192.1368f;
				default:
					break;
			}
			break;
		case 18:
			iVar0 = get_random_int_in_range(0, 2);
			switch (iVar0)
			{
				case 0:
					return 1361.741f, 1834.185f, 191.9639f;
				case 1:
					return 1366.334f, 1825.952f, 191.9067f;
				default:
					break;
			}
			break;
		case 19:
			iVar0 = get_random_int_in_range(0, 4);
			switch (iVar0)
			{
				case 0:
					return -2133.484f, 21.9821f, 267.3751f;
				case 1:
					return -2102.551f, 19.7074f, 271.3395f;
				case 2:
					return -2138.653f, -18.8593f, 249.3509f;
				case 3:
					return -2151.525f, -30.694f, 243.5381f;
				default:
					break;
			}
			break;
		case 20:
			iVar0 = get_random_int_in_range(0, 4);
			switch (iVar0)
			{
				case 0:
					return -2621.178f, 707.432f, 166.5945f;
				case 1:
					return -2661.782f, 701.2828f, 182.7456f;
				case 2:
					return -2640.054f, 696.5616f, 178.054f;
				case 3:
					return -2632.107f, 710.8809f, 170.3972f;
				default:
					break;
			}
			break;
		case 21:
			iVar0 = get_random_int_in_range(0, 4);
			switch (iVar0)
			{
				case 0:
					return 2328.97f, 984.2775f, 74.5295f;
				case 1:
					return 2379.057f, 986.2366f, 73.9579f;
				case 2:
					return 2322.657f, 990.1773f, 76.9349f;
				case 3:
					return 2358.901f, 1005.723f, 85.4943f;
				default:
					break;
			}
			break;
	}
	return 0f, 0f, 0f;
}

bool func_82(vector3 vParam0)
{
	fVar0 = 150f;
	fVar1 = (fVar0 * 1.5f);
	fVar1 = (fVar1 + 0.1f);
	vVar2.x = (vParam0.x - fVar1);
	vVar2.f_1 = (vParam0.y - fVar1);
	vVar2.f_2 = (vParam0.z - fVar1);
	vVar5.x = (vParam0.x + fVar1);
	vVar5.f_1 = (vParam0.y + fVar1);
	vVar5.f_2 = (vParam0.z + fVar1);
	iVar8 = _0x01708e8dd3ff8c65(vVar2, vVar5);
	if (iVar8 < 16)
	{
		return true;
	}
	return false;
}

Vector3 func_83(int iParam0)
{
	switch (iParam0)
	{
		case 0:
			return 0f, 250f, 0f;
		case 1:
			return (sin(45f) * 250f), (cos(45f) * 250f), 0f;
		case 2:
			return 250f, 0f, 0f;
		case 3:
			return (sin(45f) * 250f), (-1f * (cos(45f) * 250f)), 0f;
		case 4:
			return 0f, (250f * -1f), 0f;
		case 5:
			return (-1f * (sin(45f) * 250f)), (-1f * (cos(45f) * 250f)), 0f;
		case 6:
			return (250f * -1f), 0f, 0f;
		case 7:
			return (-1f * (sin(45f) * 250f)), (cos(45f) * 250f), 0f;
	}
	return 0f, 0f, 0f;
}

void func_84(var uParam0, int iParam1)
{
	*uParam0 = (*uParam0 - (*uParam0 && iParam1));
}

int func_85()
{
	return Global_1893587->f_2;
}

bool func_86(int iParam0)
{
	return (iParam0 >= 0 && iParam0 <= 150);
}

int func_87(vector3 vParam0, bool bParam3)
{
	iVar0 = func_89(vParam0);
	iVar1 = -1;
	if (Global_1893570[iVar0] > 0)
	{
		iVar2 = (Global_1893570[iVar0] - 1);
		bVar3 = false;
		while (iVar2 >= 0 && !bVar3)
		{
			iVar4 = (*Global_1892753)[iVar0][iVar2];
			if (_does_volume_exist((*Global_1887339)[iVar4]->f_4))
			{
				if (_0xf256a75210c5c0eb((*Global_1887339)[iVar4]->f_4, vParam0))
				{
					switch ((*Global_1887339)[iVar4]->f_21)
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

int func_88(int iParam0)
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

int func_89(vector3 vParam0)
{
	iVar0 = func_90(vParam0, 0f, 0f, 0, 2);
	return func_90(vParam0, (*Global_1892740)[iVar0]->f_1, (*Global_1892740)[iVar0]->f_2, Global_1892740[iVar0], 4);
}

int func_90(struct<2> Param0, float fParam2, float fParam3, float fParam4, int iParam5, int iParam6)
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
