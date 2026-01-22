// 函数: sub_45c95c
// 地址: 0x45c95c
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

int32_t ebp
int32_t var_4 = ebp
int32_t eax_1 = *arg2
int32_t* eax_18
void var_38

if (eax_1 s>= 0x100)
    uint32_t ExceptionList
    
    if (eax_1 s> 0xb047)
        if (eax_1 != 0xb04a)
            if (eax_1 == 0xb04e && (arg1[7].b & 0x10) != 0 && *(sub_4659bc() + 5) != 0)
                void* const var_40_1 = &data_45ce78
                void* const var_44_1 = &data_45ce78
                ExceptionList = sub_45f888(arg1)
                (*data_4ac4dc)(ExceptionList, var_44_1, var_40_1)
                enum SET_WINDOW_POS_FLAGS uFlags = 0x77
                int32_t cy = 0
                ExceptionList = 0
                SetWindowPos(sub_45f888(arg1), nullptr, 0, 0, ExceptionList, cy, uFlags)
            
            goto label_45ce57
        
        if ((arg2[1]).b != 0)
            int32_t edx_10
            edx_10.b = 1
            sub_460db8(arg1, edx_10)
        
        int32_t* var_40_11 = &var_4
        int32_t (* var_44_4)(void* arg1, void* arg2) = j_sub_40443c
        TEB* fsbase
        ExceptionList = fsbase->NtTib.ExceptionList
        fsbase->NtTib.ExceptionList = &ExceptionList
        (*(*arg1 + 0xb0))(ExceptionList, var_44_4, var_40_11)
        fsbase->NtTib.ExceptionList = arg1
        __return_addr = &data_45ce72
        char eax_82 = (arg2[1]).b
        
        if (eax_82 == 0)
            return eax_82
        
        return sub_460db8(arg1, 0)
    
    if (eax_1 == 0xb047)
        int32_t edx
        edx.b = 1
        int32_t* eax_11 = sub_46bf14(arg1)
        
        if (eax_11 != 0 && eax_11 != arg1)
            arg2[1]
            sub_458ac8(eax_11, arg2[2])
        
        goto label_45ce57
    
    if (eax_1 - 0x100 u< 0xa)
        eax_18 = sub_45803c(arg1)
        
        if (eax_18.b == 0)
            goto label_45ce57
    else
        if (eax_1 - 0x200 u>= 0xb)
            if (eax_1 == 0x2a3)
                arg1[0x8e].b = 0
                void* eax_28 = arg1[0x8f]
                
                if (eax_28 == 0)
                    sub_458ac8(arg1, 0)
                else
                    sub_458ac8(eax_28, 0)
                
                arg1[0x8f] = 0
            
            goto label_45ce57
        
        if (eax_1 == 0x200)
            sub_418a3c(sx.d(arg2[2].w), sx.d(*(arg2 + 0xa)), &var_38)
            void var_14
            sub_457260(arg1, &var_38, &var_14)
            data_4ab920 = sub_45457c()
            HANDLE ebx_3
            
            if (data_4ab920 != 0)
                ebx_3 = data_4ab920
            else
                ebx_3 = sub_455d48(&var_14, 1)
            
            if (ebx_3 != arg1[0x8f])
                if ((arg1[0x8f] != 0 && data_4ab920 == 0)
                        || (data_4ab920 != 0 && arg1[0x8f] == data_4ab920))
                    sub_458ac8(arg1[0x8f], 0)
                else if (data_4ab920 != 0 && *(data_4ab920 + 0x30) == arg1[0x8f])
                    sub_458ac8(arg1[0x8f], 0)
                
                void* eax_46 = arg1[0x8f]
                
                if (eax_46 != 0)
                    sub_423648(eax_46, arg1)
                
                arg1[0x8f] = ebx_3
                
                if (ebx_3 != 0)
                    sub_423408(ebx_3, arg1)
                
                if (arg1[0x8f] != 0 && data_4ab920 == 0)
                    sub_458ac8(arg1[0x8f], 0)
                else if (data_4ab920 != 0 && arg1[0x8f] == data_4ab920)
                    sub_458ac8(arg1[0x8f], 0)
            
            if (arg1[0x8e].b == 0)
                arg1[0x8e].b = 1
                TRACKMOUSEEVENT eventTrack
                eventTrack.cbSize = 0x10
                eventTrack.dwFlags = 2
                eventTrack.hwndTrack = sub_45f888(arg1)
                eventTrack.dwHoverTime = 0xffffffff
                _TrackMouseEvent(&eventTrack)
        
        if (sub_45c8a8(arg1, arg2) == 0)
            goto label_45ce57
        
        eax_18 = arg2
        
        if (eax_18[3] == 0)
            eax_18 = sub_45fc28(arg1)
            
            if (eax_18.b != 0)
                LPARAM lParam = arg2[2]
                WPARAM wParam = arg2[1]
                ExceptionList = *arg2
                return DefWindowProcA(sub_45f888(arg1), ExceptionList, wParam, lParam)
else if (eax_1 s<= 0x1f)
    if (eax_1 == 0x1f)
        if (sub_45f888(arg1) == GetCapture() && data_4ab920 != 0 && *(data_4ab920 + 0x30) == arg1)
            sub_458ac8(data_4ab920, 0)
        
        goto label_45ce57
    
    if (eax_1 == 7)
        int32_t edx_1
        edx_1.b = 1
        int32_t* eax_16 = sub_46bf14(arg1)
        
        if (eax_16 == 0 || ((eax_16[7].b & 0x10) != 0 && eax_16[0xc] != 0))
            goto label_45ce57
        
        eax_18 = (*(*eax_16 + 0xf8))()
        
        if (eax_18.b != 0)
            goto label_45ce57
    else
        if (eax_1 != 8)
            goto label_45ce57
        
        eax_18 = arg1
        
        if ((eax_18[0x15].b & 0x20) == 0)
            goto label_45ce57
else if (eax_1 == 0x21)
    if (sub_45c75c(arg1, arg2, nullptr) == 0)
    label_45ce57:
        sub_458ba4(arg1, arg2)
        eax_18 = arg2
        
        if (*eax_18 == 0x128)
            return (*(*arg1 + 0x80))()
    else
        eax_18 = arg2
        
        if (eax_18[3] == 0)
            eax_18 = sub_45fc28(arg1)
            
            if (eax_18.b != 0)
                return sub_458ba4(arg1, arg2)
else
    if (eax_1 != 0x84)
        goto label_45ce57
    
    sub_458ba4(arg1, arg2)
    eax_18 = arg2
    
    if (eax_18[3] == 0xffffffff)
        int32_t eax_21 = arg2[2]
        int32_t var_20 = sx.d(eax_21.w)
        int32_t var_1c_1 = sx.d(eax_21:2.w)
        char var_40_3 = 0
        char var_44_2 = 0
        sub_457310(arg1, &var_20, &var_38)
        eax_18 = sub_45c698(0, arg1, var_44_2, var_40_3)
        
        if (eax_18 != 0)
            eax_18 = arg2
            eax_18[3] = 1
return eax_18
