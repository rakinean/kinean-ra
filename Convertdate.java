/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 */

package com.mycompany.convertdate;

/**
 *
 * @author User
 */


import java.util.Calendar;
import java.util.Date;
import java.util.Scanner;

public class Convertdate{
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter a short date (YYYY-MM-DD): ");
        String shortDate = scanner.nextLine();

        String[] DateParts = shortDate.split("-");
        int year = Integer.parseInt(DateParts[0]);
        int month = Integer.parseInt(DateParts[1]);
        int day = Integer.parseInt(DateParts[2]);

        Date date = new Date(year - 1900, month - 1, day);
        Calendar calendar = Calendar.getInstance();
        calendar.setTime(date);

        String MonthName = getMonthName(calendar.get(Calendar.MONTH));

        System.out.println(MonthName + " " + day + ", " + year);

        scanner.close();
    }

    public static String getMonthName(int month) {
        String[] MonthNames = {"January", "February", "March", "April", "May", "June", "July",
                "August", "September", "October", "November", "December"};

        if (month >= 0 && month <= 11) {
            return MonthNames[month];
        } else {
            return "Invalid Month";
        }
    }
}