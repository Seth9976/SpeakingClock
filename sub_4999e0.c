// 函数: sub_4999e0
// 地址: 0x4999e0
// 来自: E:/torrent/Tools/Speaking Clock/spclock.exe.bndb

BOOL result = sub_45eafc(arg1, arg2)

if (*(arg1 + 0x29d) == 0 && (arg1[7].b & 0x10) == 0)
    BOOL result_2 = 0
    void var_24
    sub_418a3c(sx.d(*(arg2 + 8)), sx.d(*(arg2 + 0xa)), &var_24)
    BOOL pt
    result = sub_457310(arg1, &var_24, &pt)
    BOOL result_1
    RECT lprc
    
    if (*(arg1 + 0x299) != 0 && *(arg2 + 0xc) == 1)
        if (*(arg1 + 0x29a) != 0)
            (*(*arg1 + 0x100))()
            result = pt
            
            if (result s>= lprc.left)
                result = result_1
                
                if (result s>= lprc.top)
                    result_2 = 0x11
        else
            (*(*arg1 + 0x44))(zx.d(*(arg1 + 0x29e)))
            sub_45f888(arg1)
            void var_1c
            result = sub_499068(&var_1c, &pt)
            result_2 = result
    
    if (*(arg1 + 0x299) != 0 && *(arg2 + 0xc) == 1 && result_2 u> 0)
        if (arg1[0x97].b != 0)
            result = SetWindowPos(sub_45f888(arg1), nullptr, 0, 0, 0, 0, 0x3)
        
        *(arg2 + 0xc) = result_2
    else if (*(arg1 + 0x5b) == 0)
        result = (*(*arg1 + 0xfc))()
        
        if (arg1[0xa6].b != 0)
            BOOL result_3 = result_1
            result = PtInRect(&lprc, pt)
            
            if (result != 0 && *(arg2 + 0xc) == 1)
                if (arg1[0xa7].b != 0)
                    result = sub_45c698(0, arg1, 0, 0)
                
                if (arg1[0xa7].b == 0 || result == 0)
                    *(arg1 + 0x29b) = 1
                    result_2.w = 0xffd3
                    result = sub_403e64(arg1, result_2, 0, pt, result_1)
                    *(arg2 + 0xc) = 2
                    
                    if (arg1[0x97].b != 0)
                        return SetWindowPos(sub_45f888(arg1), nullptr, 0, 0, 0, 0, 0x3)

return result
