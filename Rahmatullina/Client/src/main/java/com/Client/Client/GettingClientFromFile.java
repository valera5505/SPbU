package com.Client.Client;


import java.io.FileNotFoundException;
import java.text.ParseException;
import java.util.List;

/**
 * Created by Я on 16.04.2017.
 */
public interface GettingClientFromFile {

     List<Clients> getClient() throws ParseException, FileNotFoundException;
}
