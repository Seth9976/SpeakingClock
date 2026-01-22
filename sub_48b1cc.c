// 函数: sub_48b1cc
// 地址: 0x48b1cc
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

data_4abd60 = *data_4ac4d0 == 1
uint32_t result

if (data_4abd60 == 0)
    data_4abd88 = 1
    data_4abd68 = *data_4ac4d0 == 2
    
    if (GetVersion() == 5)
        if (sub_48b140() != 0)
            data_4abd78 = 1
            data_4abd8c = sub_48b160() u> 1
            
            if (data_4abd8c == 0)
                if (sub_48b168() != 3)
                    if (GetSystemMetrics(SM_MEDIACENTER) == 0)
                        if (GetSystemMetrics(SM_TABLETPC) == 0)
                            data_4abd80 = 1
                        else
                            data_4abd94 = 1
                    else
                        data_4abd98 = 1
                else
                    data_4abd7c = 1
            else
                data_4abd84 = sub_48b168() == 2
        else
            data_4abd6c = 1
            data_4abd70 = sub_48b168() == 2
    
    result = GetVersion()
    
    if (result.b u>= 6)
        data_4abd90 = 1
        result = LoadLibraryA(sub_48b35a+2)
        data_4b1d7c = result
        
        if (data_4b1d7c != 0)
            data_4abd9c = GetProcAddress(data_4b1d7c, sub_48b35a+0xe)
            data_4abda0 = GetProcAddress(data_4b1d7c, sub_48b35a+0x26)
            data_4abda4 = GetProcAddress(data_4b1d7c, sub_48b35a+0x3e)
            return sub_48b1b4()
else
    data_4abd64 = sub_48b140() u>= 0xa
    int16_t eax_1 = sub_48b120()
    int16_t eax_2
    
    if (eax_1 u>= 4)
        eax_2 = sub_48b140()
    
    if (eax_1 u>= 4 && eax_2 u>= 0x5a)
        eax_2.b = 1
    else
        eax_2 = 0
    
    data_4abd74 = eax_2.b
    BOOL eax_3 = SystemParametersInfoA(SPI_GETWINDOWSEXTENSION, 1, nullptr, 0)
    result = sbb.d(eax_3, eax_3, eax_3 u< 1) + 1
    data_4abd88 = result.b

return result
