// 函数: sub_49a650
// 地址: 0x49a650
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
int32_t esi
esi.w = 0xffb3
int32_t* result = sub_403e64(arg1, esi)

if (result.b == 0)
    result = arg1
    
    if (*(result + 0x262) != 0)
        result = arg1
        
        if (result[0x98].b == 0)
            if (sub_49a970(arg1) == 0)
                HBRUSH eax_7 = CreateSolidBrush(GetSysColor(COLOR_BTNFACE))
                HBRUSH ho = CreateSolidBrush(GetSysColor(COLOR_WINDOW))
                HDC hDC = GetWindowDC(sub_45f888(arg1))
                int32_t* var_3c_5 = &var_4
                int32_t (* var_40)(void* arg1, void* arg2) = j_sub_40443c
                TEB* fsbase
                struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
                fsbase->NtTib.ExceptionList = &ExceptionList
                RECT var_24
                GetWindowRect(sub_45f888(arg1), &var_24)
                OffsetRect(&var_24, neg.d(var_24.left), neg.d(var_24.top))
                
                if ((*(*arg1 + 0x144))(ExceptionList, var_40, var_3c_5) == 0)
                    FrameRect(hDC, &var_24, eax_7)
                else
                    FrameRect(hDC, &var_24, eax_7)
                    InflateRect(&var_24, 0xffffffff, 0xffffffff)
                    FrameRect(hDC, &var_24, eax_7)
                
                fsbase->NtTib.ExceptionList = ExceptionList
                int32_t var_3c_6 = 0x49a7ae
                ExceptionList = sub_45f888(arg1)
                ReleaseDC(ExceptionList, hDC)
                DeleteObject(ho)
                return DeleteObject(eax_7)
            
            (*(*arg1 + 0x44))()
            void var_34
            result, ebp_1 = sub_49a844(arg1, arg1[0x94], &var_34)

*ebp_1
return result
