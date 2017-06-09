package com.NewDataBase;

/**
 * Created by Я on 16.04.2017.
 */
import org.springframework.jdbc.core.RowMapper;

import java.sql.ResultSet;
import java.sql.SQLException;
import java.text.ParseException;

public class ClientRowMapper implements RowMapper<Clients>{
    @Override
    public Clients mapRow(ResultSet resultSet, int i) throws SQLException {
        Clients client = null;
        try {
            client = new Clients(resultSet.getString("id"),
                    resultSet.getString("first_name"),resultSet.getString("last_name"),
                    resultSet.getString("mid_name"),resultSet.getString("phone"),
                    resultSet.getString("new_passport"),
                    resultSet.getString("dat"),resultSet.getString("old_passport"));
        } catch (ParseException e) {
            e.printStackTrace();
        }

        return client;
    }
}
