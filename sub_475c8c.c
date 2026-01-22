// 函数: sub_475c8c
// 地址: 0x475c8c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t __saved_ebp
int32_t* ebp = &__saved_ebp
int32_t* var_1c = &__saved_ebp
int32_t (* var_20)() = j_sub_404188
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList
arg2[3] = 0
int32_t ebx_1 = *(*(arg1 + 0xb0) + 8) - 1

if (ebx_1 s< 0)
label_475cfa:
    int32_t ecx_1
    int32_t edx_4
    ecx_1, edx_4 = sub_475b1c(arg1, arg2)
    int32_t ebx_4 = *arg2
    
    if (ebx_4 s> 0x53)
        if (ebx_4 s> 0xb017)
            if (ebx_4 s> 0xb020)
                if (ebx_4 == 0xb031)
                    if (arg2[1] != 1)
                        *(arg1 + 0xb8) = arg2[2]
                    else
                        arg2[3] = *(arg1 + 0xb8)
                else if (ebx_4 - 0xb03f u< 2)
                    arg2[3] = sub_478468(arg1, ebx_4, arg2[2]) & 0x7f
                else
                    sub_475c04(&__saved_ebp)
            else if (ebx_4 == 0xb020)
                if (arg2[1] != 0)
                    int32_t* eax_122 = arg2[2]
                    int32_t var_28_20 = eax_122[1]
                    sub_476b18(arg1, *eax_122)
                else
                    int32_t* eax_119 = arg2[2]
                    int32_t var_28_19 = eax_119[1]
                    sub_476abc(arg1, *eax_119)
            else if (ebx_4 == 0xb01a)
                if (sub_46b8c0(*(arg1 + 0x30)) == 0 && GetFocus() == *(arg1 + 0x30))
                    HWND hWnd_1 = sub_46bbe8(0)
                    
                    if (hWnd_1 != 0)
                        SetFocus(hWnd_1)
            else if (ebx_4 == 0xb01f)
                sub_477140(arg1, zx.d(arg2[1].w), arg2[2])
            else
                sub_475c04(&__saved_ebp)
        else if (ebx_4 == 0xb017)
            int32_t* eax_79 = *(arg1 + 0x44)
            
            if (eax_79 != 0 && sub_45f888(eax_79) != 0 && IsWindowEnabled(sub_45f888(eax_79)) != 0
                    && IsWindowVisible(sub_45f888(eax_79)) != 0)
                data_4aba2c = 0
                HWND hWnd = GetFocus()
                SetFocus(sub_45f888(eax_79))
                arg2[1]
                sub_458ac8(eax_79, arg2[2])
                SetFocus(hWnd)
                data_4aba2c = 1
                arg2[3] = 1
        else if (ebx_4 s> 0xb000)
            if (ebx_4 == 0xb001)
                data_4b1d08 = GetLastActivePopup(*(arg1 + 0x30))
                
                if (*(arg1 + 0x132) != 0)
                    *(arg1 + 0x134)
                    (*(arg1 + 0x130))()
            else if (ebx_4 == 0xb016)
                if (sub_476864(arg1, arg2) != 0)
                    arg2[3] = 1
            else
                sub_475c04(&__saved_ebp)
        else if (ebx_4 == 0xb000)
            if (*(arg1 + 0x13a) != 0)
                *(arg1 + 0x13c)
                (*(arg1 + 0x138))()
            
            if (*(data_4b1ce0 + 0x44) != 0)
                data_4b1ce0
                
                if (sub_478b08() != 0 && IsWindowEnabled(sub_45f888(*(data_4b1ce0 + 0x44))) == 0
                        && sub_45f888(*(arg1 + 0x44)) != data_4b1d08)
                    SetFocus(data_4b1d08)
            
            data_4b1d08 = 0
        else if (ebx_4 == 0x112)
            int32_t eax_28 = arg2[1] & 0xfff0
            
            if (eax_28 == 0xf020)
                sub_476368(arg1)
            else if (eax_28 == 0xf120)
                sub_476448(arg1)
            else
                sub_475c04(&__saved_ebp)
        else if (ebx_4 - 0x132 u< 7)
            LPARAM esi_3 = arg2[2]
            arg2[3] = SendMessageA(esi_3, ebx_4 + 0xbc00, arg2[1], esi_3)
        else if (ebx_4 == 0x31a)
            sub_465b20(sub_4659bc())
        else
            sub_475c04(&__saved_ebp)
    else if (ebx_4 == 0x53)
        sub_477140(arg1, zx.d(arg2[1].w), arg2[2])
    else if (ebx_4 s> 0x11)
        if (ebx_4 s> 0x1c)
            if (ebx_4 == 0x1d)
                sub_474d30(data_4b1ce4)
                sub_475c04(&__saved_ebp)
            else if (ebx_4 == 0x37)
                arg2[3] = sub_47634c(arg1)
            else
                sub_475c04(&__saved_ebp)
        else if (ebx_4 == 0x1c)
            sub_475c04(&__saved_ebp)
            *(arg1 + 0xa5) = (sbb.d(arg2, arg2, arg2[1] u< 1)).b + 1
            
            if (arg2[1] == 0)
                sub_4757cc()
                PostMessageA(*(arg1 + 0x30), 0xb001, 0, 0)
            else
                if ((sub_478b08() & data_4b1cf0) != 0)
                    data_4b1cf0 = 0
                
                sub_47582c(arg1)
                PostMessageA(*(arg1 + 0x30), 0xb000, 0, 0)
        else if (ebx_4 == 0x14)
            *arg2 = 0x27
            sub_475c04(&__saved_ebp)
        else if (ebx_4 == 0x16)
            if (arg2[1] != 0)
                sub_40e638()
                sub_4049e0()
                noreturn
        else if (ebx_4 == 0x1a)
            sub_464cc4(*data_4ac478, arg2[1])
            sub_475c04(sub_475b98(arg1, arg2))
        else
            sub_475c04(&__saved_ebp)
    else if (ebx_4 == 0x11)
        arg2[3] = 1
    else if (ebx_4 u> 0x10)
        sub_475c04(&__saved_ebp)
    else
        switch (ebx_4)
            case 0
                sub_422b50(0)
            case 1, 2, 3, 4, 6, 8, 9, 0xb, 0xc, 0xd, 0xe
                sub_475c04(&__saved_ebp)
            case 5
                if (arg2[1] == 1)
                    data_4b1cf0 = 1
            case 7
                PostMessageA(*(arg1 + 0x30), 0xb01a, 0, 0)
                sub_475c04(&__saved_ebp)
            case 0xa
                if (arg2[1] == 0)
                    sub_475c04(&__saved_ebp)
                    
                    if (*(arg1 + 0xb4) == 0 && data_4aba44 == 0)
                        int32_t eax_64
                        eax_64, ebp = sub_46ba88(*(arg1 + 0x30))
                        *(ebp[-1] + 0xb4) = eax_64
                    
                    ebp[-1]
                    sub_4757d4()
                else
                    if (data_4aba44 == 0)
                        sub_47582c(arg1)
                        int32_t* eax_59 = *(arg1 + 0xb4)
                        
                        if (eax_59 != 0)
                            sub_46bb4c(eax_59)
                            *(arg1 + 0xb4) = 0
                    
                    sub_475c04(&__saved_ebp)
            case 0xf
                if (sub_46b8c0(*(arg1 + 0x30)) == 0)
                    sub_475c04(&__saved_ebp)
                else
                    sub_475c40(&__saved_ebp)
            case 0x10
                BOOL eax_35 = *(arg1 + 0x44)
                
                if (eax_35 != 0)
                    sub_472cd4(eax_35, edx_4, ecx_1)
    
    fsbase->NtTib.ExceptionList = ExceptionList
else
    int32_t ebx_2 = ebx_1 + 1
    int32_t esi_1 = 0
    
    while (true)
        void* eax_5 = sub_41a0f4(*(arg1 + 0xb0), esi_1)
        *(eax_5 + 4)
        
        if ((*eax_5)() != 0)
            fsbase->NtTib.ExceptionList = ExceptionList
            break
        
        esi_1 += 1
        int32_t temp0_1 = ebx_2
        ebx_2 -= 1
        
        if (temp0_1 == 1)
            goto label_475cfa

return 0
