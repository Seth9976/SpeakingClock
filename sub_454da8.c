// 函数: sub_454da8
// 地址: 0x454da8
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

char var_5 = 1
HWND hWnd_1 = sub_4551f0(arg2 - 9)
HWND hWnd = hWnd_1
HWND eax_2
uint32_t ecx
eax_2, ecx = GetWindow(hWnd_1, GW_OWNER)
void* edx_1 = *data_4ac2fc

if (eax_2 == *(edx_1 + 0x30))
label_454e03:
    
    if (hWnd != 0)
        int32_t* esi_2 = arg1
        
        while (true)
            int32_t* eax_8 = esi_2[0xc]
            
            if (eax_8 == 0)
                break
            
            esi_2 = eax_8
        
        int32_t eax_10 = sub_45f888(esi_2)
        int32_t var_1c_1 = eax_10
        
        if (eax_10 != hWnd)
            int32_t* eax_13 = *(*(arg2 - 0x10) + 0x30)
            int32_t lParam
            
            if (eax_13 == 0)
                if (sub_403df4(*(arg2 - 0x10), &data_453234) == 0)
                    lParam = 0
                else
                    lParam = sub_45f888(*(arg2 - 0x10))
            else
                esi_2 = eax_13
                
                while (true)
                    int32_t* eax_14 = esi_2[0xc]
                    
                    if (eax_14 == 0)
                        break
                    
                    esi_2 = eax_14
                
                lParam = sub_45f888(esi_2)
            
            char var_c_1 = 0
            int32_t var_14_1 = *(arg2 - 9)
            int32_t var_10_1 = *(arg2 - 5)
            EnumThreadWindows(GetCurrentThreadId(), sub_454d3c, &lParam)
            
            if (var_c_1 != 0)
                RECT var_30
                GetWindowRect(hWnd, &var_30)
                esi_2.w = 0xffbc
                RECT lprcSrc2
                sub_403e64(arg1, esi_2, *(arg2 - 0x10), &lprcSrc2, arg2 - 1, arg2 - 9)
                char eax_33 = sub_403df4(data_4b1c68, &data_4517f4)
                int32_t eax_39
                
                if (eax_33 != 0 && *(*(data_4b1c68 + 0x40) + 0x94) != 0)
                    eax_39 = sub_45f888(*(*(data_4b1c68 + 0x40) + 0x94))
                
                if ((eax_33 == 0 || *(*(data_4b1c68 + 0x40) + 0x94) == 0 || eax_39 != hWnd)
                        && IntersectRect(&var_30, &var_30, &lprcSrc2) != 0)
                    var_5 = 0
else
    HANDLE esi_1 = sub_454230(hWnd, edx_1, ecx)
    
    if (esi_1 != 0)
        while (true)
            HANDLE eax_5 = *(esi_1 + 0x30)
            
            if (eax_5 == 0)
                break
            
            esi_1 = eax_5
        
        hWnd = sub_45f888(esi_1)
        goto label_454e03

return zx.d(var_5)
