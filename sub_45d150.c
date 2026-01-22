// 函数: sub_45d150
// 地址: 0x45d150
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

if (*(arg1 + 0x1dc) != 0 && *(arg1 + 0x1db) != 0 && *(arg1 + 0x1b0) != 0)
    (*(**(arg1 + 0x1b0) + 0x20))()

void* eax_6 = *(arg1 + 0x1cc)
HDC ExceptionList
void lprect

if (eax_6 != 0)
    int32_t i = 0
    
    if (arg3 != 0)
        i = sub_41a150(eax_6, arg3)
        
        if (i s< 0)
            i = 0
    
    for (int32_t eax_10 = *(*(arg1 + 0x1cc) + 8); i s< eax_10; i += 1)
        void* eax_14 = sub_41a0f4(*(arg1 + 0x1cc), i)
        
        if (*(eax_14 + 0x57) != 0
            && ((*(eax_14 + 0x1c) & 0x10) == 0 || (*(eax_14 + 0x55) & 8) == 0))
        label_45d239:
            int32_t esi_1 = *(eax_14 + 0x44)
            int32_t ebx_1 = *(eax_14 + 0x40)
            sub_418a64(ebx_1 + *(eax_14 + 0x48), esi_1, ebx_1, &lprect, esi_1 + *(eax_14 + 0x4c))
            
            if (RectVisible(arg2, &lprect) != 0)
                if ((*(arg1 + 0x54) & 0x80) != 0)
                    *(eax_14 + 0x54) |= 0x80
                
                int32_t nSavedDC = SaveDC(arg2)
                int32_t __saved_ebp
                int32_t* var_3c_4 = &__saved_ebp
                int32_t (* var_40_3)(void* arg1, void* arg2) = j_sub_40443c
                TEB* fsbase
                ExceptionList = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList
                sub_455ddc(arg2, *(eax_14 + 0x40), *(eax_14 + 0x44))
                IntersectClipRect(arg2, 0, 0, *(eax_14 + 0x48), *(eax_14 + 0x4c))
                sub_458ac8(eax_14, 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                int32_t var_3c_5 = 0x45d304
                ExceptionList = arg2
                return RestoreDC(ExceptionList, nSavedDC)
        else if ((*(eax_14 + 0x1c) & 0x10) != 0 && (*(eax_14 + 0x55) & 8) == 0
                && (*(eax_14 + 0x51) & 4) == 0)
            goto label_45d239

BOOL result = *(arg1 + 0x1d0)

if (result != 0)
    int32_t edi_2 = *(result + 8) - 1
    
    if (edi_2 s>= 0)
        int32_t i_2 = edi_2 + 1
        int32_t var_10_1 = 0
        int32_t i_1
        
        do
            result = sub_41a0f4(*(arg1 + 0x1d0), var_10_1)
            
            if (*(result + 0x1d9) != 0 && (*(result + 0x50) & 0x10) != 0)
                if ((*(result + 0x1c) & 0x10) == 0 && *(result + 0x57) != 0)
                label_45d3a0:
                    HBRUSH eax_49 = CreateSolidBrush(sub_42ad8c(0xff000010))
                    int32_t eax_51 = *(result + 0x44) + *(result + 0x4c)
                    ExceptionList = &lprect
                    sub_418a64(*(result + 0x40) + *(result + 0x48), *(result + 0x44) - 1, 
                        *(result + 0x40) - 1, ExceptionList, eax_51)
                    RECT* lprc = &lprect
                    ExceptionList = arg2
                    FrameRect(ExceptionList, lprc, eax_49)
                    DeleteObject(eax_49)
                    HBRUSH eax_56 = CreateSolidBrush(sub_42ad8c(0xff000014))
                    int32_t eax_59 = *(result + 0x44) + *(result + 0x4c) + 1
                    ExceptionList = &lprect
                    sub_418a64(*(result + 0x40) + *(result + 0x48) + 1, *(result + 0x44), 
                        *(result + 0x40), ExceptionList, eax_59)
                    RECT* lprc_1 = &lprect
                    ExceptionList = arg2
                    FrameRect(ExceptionList, lprc_1, eax_56)
                    result = DeleteObject(eax_56)
                else if ((*(result + 0x1c) & 0x10) != 0 && (*(result + 0x51) & 4) == 0
                        && (*(result + 0x55) & 8) == 0)
                    goto label_45d3a0
            
            var_10_1 += 1
            i_1 = i_2
            i_2 -= 1
        while (i_1 != 1)

return result
