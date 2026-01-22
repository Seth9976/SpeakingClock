// 函数: sub_49e86d
// 地址: 0x49e86d
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

*arg1 += arg1.b
void* entry_ebx
*(entry_ebx + 0x56) += arg2.b
int32_t edi
int32_t var_4 = edi
int32_t* wParam_3
int32_t* esp = &wParam_3
uint32_t Msg = *arg2
int32_t* result
int32_t* wParam
int32_t* wParam_2

if (Msg != 0x800)
    result = Msg
    
    if (result s> 0x12)
        int32_t* result_2 = result
        result -= 0x16
        
        if (result_2 == 0x16)
            arg2[3] = 1
        else
            int32_t* result_3 = result
            result -= 0x6c
            
            if (result_3 != 0x6c)
            label_49edc2:
                wParam_2 = arg2[2]
                wParam = arg2[1]
                result = DefWindowProcA(*(arg1 + 8), Msg, wParam, wParam_2)
                esp = &wParam_3
                arg2[3] = result
            else
                arg2[3] = 1
    else if (result == 0x12)
        arg2[3] = 1
    else
        int32_t* result_4 = result
        result -= 2
        
        if (result_4 == 2)
            arg2[3] = 1
        else
            int32_t* result_5 = result
            result -= 0xe
            
            if (result_5 == 0xe)
                arg2[3] = 1
            else
                int32_t* result_6 = result
                result -= 1
                
                if (result_6 != 1)
                    goto label_49edc2
                
                arg2[3] = 1
else
    int32_t eax = arg2[2]
    int32_t* wParam_1
    char* esi
    
    if (eax s> 0x207)
        if (eax s> 0x403)
            if (eax == 0x404)
                result = arg2[1]
                
                if (*(result + 0xb2) != 0)
                    result[0x2d]
                    result = result[0x2c]()
            else
                result = eax - 0x405
                
                if (eax == 0x405)
                    result = arg2[1]
                    
                    if (*(result + 0xba) != 0)
                        result[0x2f]
                        result = result[0x2e]()
        else if (eax == 0x403)
            result = arg2[1]
            
            if (*(result + 0xaa) != 0)
                result[0x2b]
                result = result[0x2a]()
        else if (eax == 0x208)
            result = arg2[1]
            
            if (result[0xc].b != 0)
                char eax_48 = sub_49e830() | 0x20
                wParam_2 = &wParam_3
                GetCursorPos(wParam_2)
                wParam_2 = wParam_3
                wParam = wParam_1
                esp = &wParam
                int32_t edx_12
                edx_12.b = 2
                esi.w = 0xffeb
                result = sub_403e64(arg2[1], esi, edx_12, zx.d(eax_48), wParam, wParam_2)
        else
            result = eax - 0x402
            
            if (eax - 0x400 u< 2)
            label_49ebdb:
                result = arg2[1]
                
                if (*(result + 0xda) == 1 && result[0xc].b != 0)
                    char eax_44 = sub_49e830() | 0x10
                    wParam_2 = &wParam_3
                    GetCursorPos(wParam_2)
                    wParam_2 = wParam_3
                    wParam = wParam_1
                    esp = &wParam
                    int32_t edx_11
                    edx_11.b = 1
                    esi.w = 0xffeb
                    result = sub_403e64(arg2[1], esi, edx_11, zx.d(eax_44), wParam, wParam_2)
            else if (eax == 0x402)
                result = arg2[1]
                
                if (*(result + 0xa2) != 0)
                    result[0x29]
                    result = result[0x28]()
    else if (eax == 0x207)
        result = arg2[1]
        
        if (result[0xc].b != 0)
            char eax_32 = sub_49e830() | 0x20
            wParam_2 = &wParam_3
            GetCursorPos(wParam_2)
            wParam_2 = wParam_3
            wParam = wParam_1
            esp = &wParam
            int32_t edx_6
            edx_6.b = 2
            esi.w = 0xffec
            result = sub_403e64(arg2[1], esi, edx_6, zx.d(eax_32), wParam, wParam_2)
    else if (eax s> 0x202)
        if (eax == 0x203)
            result = arg2[1]
            
            if (result[0xc].b != 0)
                *(result + 0xc2) = 0
                *(result + 0xdb) = 1
                esi.w = 0xffee
                sub_403e64(result, esi)
                int32_t* result_1 = nullptr
                result = arg2[1]
                
                if (result[0x12] != 0)
                    result = arg2[1]
                    void* esi_2 = result[0x12]
                    
                    if (*(esi_2 + 0x61) != 0 && result[0x13].b == 0)
                        result = sub_44e490(*(esi_2 + 0x34)) - 1
                        
                        if (result s>= 0)
                            int32_t* i = result
                            
                            do
                                result = sub_44e4a0(*(*(arg2[1] + 0x48) + 0x34), i)
                                
                                if (*(result + 0x3a) != 0)
                                    result = sub_44e4a0(*(*(arg2[1] + 0x48) + 0x34), i)
                                    result_1 = result
                                
                                i -= 1
                            while (i != 0xffffffff)
                
                if (result_1 != 0)
                    result = (*(*result_1 + 0x44))()
        else if (eax == 0x204)
            result = arg2[1]
            
            if (result[0xc].b != 0)
                char eax_24 = sub_49e830() | 0x10
                wParam_2 = &wParam_3
                GetCursorPos(wParam_2)
                wParam_2 = wParam_3
                wParam = wParam_1
                esp = &wParam
                int32_t edx_5
                edx_5.b = 1
                esi.w = 0xffec
                sub_403e64(arg2[1], esi, edx_5, zx.d(eax_24), wParam, wParam_2)
                result = *(arg2[1] + 0x48)
                
                if (result != 0 && *(result + 0x61) != 0)
                    SetForegroundWindow(*(data_4abe28 + 8))
                    esp = &wParam
                    result = sub_49faa4(arg2[1])
        else
            result = eax - 0x205
            
            if (eax == 0x205)
                result = arg2[1]
                
                if (*(result + 0xda) == 0 && result[0xc].b != 0)
                    char eax_40 = sub_49e830() | 0x10
                    wParam_2 = &wParam_3
                    GetCursorPos(wParam_2)
                    wParam_2 = wParam_3
                    wParam = wParam_1
                    esp = &wParam
                    int32_t edx_10
                    edx_10.b = 1
                    esi.w = 0xffeb
                    result = sub_403e64(arg2[1], esi, edx_10, zx.d(eax_40), wParam, wParam_2)
    else if (eax == 0x202)
        result = arg2[1]
        
        if (result[0xc].b != 0)
            char eax_36 = sub_49e830() | 8
            wParam_2 = &wParam_3
            GetCursorPos(wParam_2)
            void* eax_37 = arg2[1]
            
            if (*(eax_37 + 0xc1) != 0)
                *(eax_37 + 0xc2) = 1
            
            int32_t* eax_38 = arg2[1]
            
            if (*(eax_38 + 0xc1) != 0)
                void* edx_7 = eax_38[0x32]
                
                if (*(edx_7 + 8) == 0)
                    *(eax_38 + 0xc1) = 0
                    *(eax_38 + 0xc2) = 0
                    esi.w = 0xffef
                    sub_403e64(eax_38, esi, edx_7)
            
            int32_t* eax_39 = arg2[1]
            *(eax_39 + 0xc1) = 0
            wParam_2 = wParam_3
            wParam = wParam_1
            esp = &wParam
            esi.w = 0xffeb
            result = sub_403e64(eax_39, esi, 0, zx.d(eax_36), wParam, wParam_2)
    else
        if (eax == 0x7b)
            goto label_49ebdb
        
        if (eax == 0x200)
            result = arg2[1]
            
            if (result[0xc].b != 0)
                if (*(result + 0xd9) != 0 && result[0x36].b != 0)
                    esi.w = 0xffe9
                    sub_403e64(result, esi)
                    *(arg2[1] + 0xd8) = 0
                
                char eax_9 = sub_49e830()
                wParam_2 = &wParam_3
                GetCursorPos(wParam_2)
                wParam_2 = wParam_1
                esp = &wParam_2
                esi.w = 0xffea
                sub_403e64(arg2[1], esi, zx.d(eax_9), wParam_3, wParam_2)
                result = arg2[1]
                result[0x34] = wParam_2
                result[0x35] = wParam_3
        else
            result = eax - 0x201
            
            if (eax == 0x201)
                void* esi_1 = arg2[1]
                
                if (*(esi_1 + 0x30) != 0)
                    if (*(esi_1 + 0x5a) != 0)
                        uint32_t eax_12 = GetDoubleClickTime()
                        int32_t ecx_2 = sub_49e060(*(esi_1 + 0xc8), eax_12)
                        *(arg2[1] + 0xc8)
                        sub_49e04c(ecx_2, 1)
                    
                    char eax_16 = sub_49e830() | 8
                    wParam_2 = &wParam_3
                    GetCursorPos(wParam_2)
                    wParam_2 = wParam_3
                    wParam = wParam_1
                    esp = &wParam
                    esi_1.w = 0xffec
                    sub_403e64(arg2[1], esi_1, 0, zx.d(eax_16), wParam, wParam_2)
                    result = arg2[1]
                    *(result + 0xc1) = 1
                    
                    if (result[0x13].b != 0)
                        result = *(arg2[1] + 0x48)
                        
                        if (result != 0 && *(result + 0x61) != 0)
                            SetForegroundWindow(*(data_4abe28 + 8))
                            esp = &wParam
                            result = sub_49faa4(arg2[1])
esp[3]
esp[4]
esp[5]
return result
