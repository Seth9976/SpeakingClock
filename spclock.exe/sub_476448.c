// 函数: sub_476448
// 地址: 0x476448
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

BOOL result = sub_46b8c0(*(arg1 + 0x30))

if (result != 0)
    data_4b1cf0 = 0
    SetActiveWindow(*(arg1 + 0x30))
    
    if (*(arg1 + 0x44) != 0)
        if (sub_478b08() == 0)
            BOOL eax_9
            
            if (*(arg1 + 0x5b) != 0 || *(*(arg1 + 0x44) + 0x57) != 0)
                eax_9 = IsWindowEnabled(sub_45f888(*(arg1 + 0x44)))
            
            if ((*(arg1 + 0x5b) == 0 && *(*(arg1 + 0x44) + 0x57) == 0) || eax_9 == 0)
                sub_474fb0(*(arg1 + 0x30), SW_RESTORE)
            else
                DefWindowProcA(*(arg1 + 0x30), 0x112, 0xf120, 0)
            
            int32_t eax_14 = (*data_4ac140)(1, 0, 0, 0x40)
            int32_t eax_15 = eax_14 s>> 1
            bool c_1 = unimplemented  {sar eax, 0x1}
            
            if (eax_14 s>> 1 s< 0)
                eax_15 = adc.d(eax_15, 0, c_1)
            
            int32_t eax_18 = (*data_4ac140)(0, eax_15)
            int32_t X = eax_18 s>> 1
            bool c_2 = unimplemented  {sar eax, 0x1}
            
            if (eax_18 s>> 1 s< 0)
                X = adc.d(X, 0, c_2)
            
            SetWindowPos(*(arg1 + 0x30), nullptr, X)
        else
            ShowWindow(sub_45f888(*(arg1 + 0x44)), SW_RESTORE)
    
    BOOL eax_20 = *(arg1 + 0x44)
    
    if (eax_20 != 0 && *(eax_20 + 0x273) == 1 && *(eax_20 + 0x57) == 0)
        sub_46fed0(eax_20, 0)
        sub_472e7c(*(arg1 + 0x44))
    
    sub_47582c(arg1)
    sub_475988(arg1, 1)
    result = data_4b1ce4
    int32_t* esi_1 = *(result + 0x64)
    
    if (esi_1 != 0)
        result = SetFocus(sub_45f888(esi_1))
    
    if (*(arg1 + 0x14a) != 0)
        *(arg1 + 0x14c)
        return (*(arg1 + 0x148))()

return result
