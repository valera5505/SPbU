package com.bank.starter.workStorrage;

import com.bank.starter.MyDataBase.MyBase;
import com.bank.starter.models.Client;
import com.bank.starter.models.Credit;

import java.util.ArrayList;

/**
 * Created by gusef on 29.05.2017.
 */
public class ClientWorkPlace implements ClientHelper {
    @Override
    public double allDebt(Client cl) {
        double ans=0;
        for (Credit subCredit: MyBase.getInstance().getMapOfCredits().get(cl.getNowId())
             ) {
            if(subCredit.getAllSum() < subCredit.getPaidSum())
                ans += subCredit.getAllSum() - subCredit.getPaidSum();
        }
        return ans;
    }

    @Override
    public ArrayList<Credit> debtCredits(Client cl) {
        ArrayList<Credit> ans = new ArrayList<>();
        for (Credit subCredit: MyBase.getInstance().getMapOfCredits().get(cl.getNowId())
                ) {
            if(subCredit.isNotPaid())
                ans.add(subCredit);
        }
        return ans;
    }

    @Override
    public ArrayList<Credit> allNotPaidCredits() {
        ArrayList<Credit> ans = new ArrayList<>();
        for (ArrayList<Credit> subListOfCredits: MyBase.getInstance().getMapOfCredits().values()
                ) {
            for (Credit subCredit: subListOfCredits
                    ) {
                if(subCredit.isNotPaid())
                    ans.add(subCredit);
            }
        }
        return ans;
    }
}
